/* flow:
 * the headset lets ESP32 know that the user reached the stairs
 * ESP32 uses barometer sensor to understand when the user started the ascend
 * ESP32 uses IMU sensor to count the number of steps and transmit that info back to the headset
 * 
 * use BTSerial.println(data) to transmit data (number of steps) to the headset
 */
#include <Wire.h>
#include <SPI.h>
#include <Arduino.h>
#include <FastLED.h>
#include <Adafruit_Sensor.h>
#include "Adafruit_BMP3XX.h"
#include <Adafruit_BNO08x.h>
#include <BluetoothSerial.h>

BluetoothSerial BTSerial;

// bluetooth setup
#define NAME "CHANGE_THIS"
int loop_count = 0;

// FSM setup
#define FLAT_STATE 0
#define CLIMBING_STATE 1
int current_state = FLAT_STATE;

// barometer setup
#define BMP_SCK 13
#define BMP_MISO 12
#define BMP_MOSI 11
#define BMP_CS 10
#define SEALEVELPRESSURE_HPA (1013.25)
#define NUM_SAMPLES 40
#define NUM_RECENT_SAMPLES 15
#define LOW_THRESHOLD 0.04
#define HIGH_THRESHOLD 0.3
Adafruit_BMP3XX bmp;

float samples[NUM_SAMPLES];
int samples_initiated = 0;
int sample_index = 0;
bool change_detected = false;

// IMU setup
#define BNO08X_RESET -1
Adafruit_BNO08x  bno08x(BNO08X_RESET);
sh2_SensorValue_t sensorValue;

// step counter setup
int step_count = 0;
float min_periods_between_steps = 5; // number of periods (ex: if delay(20) is set, `min_time_between_steps` = 5 means every 100ms)
float periods_elapsed_between_steps = min_periods_between_steps;
int down_count = 0;

// LEDs setup
#define LED 2
#define BUILTIN_LED 2
#define MOTOR_CHANNEL 0
#define DATA_PIN 13  //Define led data pin in
#define LED_TYPE NEOPIXEL  //define type of led
#define NUM_LEDS 24  //num of leds in strip
#define METER_LEDS 12
#define COLOR_LEDS 12

struct CRGB leds[NUM_LEDS];  // Initialize LED array
int motorPin1 = 15;
int motorPin2 = 18;  

float float_abs(float x) {
  if (x < 0) return -x;
  return x;
}

float get_ix_range_avg(int start_ix, int end_ix) {
  float avg = 0;
  int _num_samples = (end_ix + NUM_SAMPLES - start_ix) % NUM_SAMPLES;
  for (int ix = start_ix; ix != end_ix; ix = (ix + 1) % NUM_SAMPLES) {
    avg += samples[ix];
  }
  avg /= _num_samples;
  return avg;
}

float get_relative_ix_range_avg(int relative_start, int relative_end) {
  return get_ix_range_avg((sample_index + NUM_SAMPLES + relative_start) % NUM_SAMPLES, (sample_index + NUM_SAMPLES + relative_end) % NUM_SAMPLES);
}

void setReports(void) {
  Serial.println("setting desired reports");
  if (! bno08x.enableReport(SH2_ACCELEROMETER)) {
    Serial.println("could not enable accelerometer");
  }
}

bool climbing = false;
bool first_time = true;

float diff;

bool check_for_change(void) {
  float recent = get_relative_ix_range_avg(-1 * NUM_RECENT_SAMPLES, 0);
  float earlier = get_relative_ix_range_avg(-1 * NUM_SAMPLES, -1 * NUM_RECENT_SAMPLES);

  diff = float_abs(recent - earlier);

  Serial.print("diff:");
  Serial.println(diff);

  if (diff > HIGH_THRESHOLD) {
    if (first_time) { // hack: for some reason, first measurement from the barometer was > 40
      first_time = false;
      climbing = false;
    }
    else {
      climbing = true;
    }
  }
  
  if (diff < LOW_THRESHOLD) {
    climbing = false;
  }

  return climbing;
}


void setup() {
  BTSerial.begin(NAME);
  Serial.begin(115200);
  Serial.print("setup completed: ");
  Serial.println(NAME);

  // barometer setup
  if (!bmp.begin_I2C()) {
    Serial.println("could not find a valid BMP3 sensor, check wiring!");
    while (1);
  }
  if (!bno08x.begin_I2C()) {
    Serial.println("failed to find BNO08x chip");
    while (1) { delay(10); }
  }
  Serial.println("BNO08x Found!");
  
  // Set up oversampling and filter initialization
  bmp.setTemperatureOversampling(BMP3_OVERSAMPLING_8X);
  bmp.setPressureOversampling(BMP3_OVERSAMPLING_4X);
  bmp.setIIRFilterCoeff(BMP3_IIR_FILTER_COEFF_3);
  bmp.setOutputDataRate(BMP3_ODR_50_HZ);

  // LED setup
  pinMode(LED, OUTPUT);
  pinMode(BUILTIN_LED, OUTPUT);
  delay(2000); //for safe startup
  FastLED.addLeds<LED_TYPE, DATA_PIN>(leds, NUM_LEDS);
  FastLED.clear();
  ledcSetup(MOTOR_CHANNEL, 5000, 8);
  ledcAttachPin(motorPin1, MOTOR_CHANNEL);
  ledcAttachPin(motorPin2, MOTOR_CHANNEL);

  // haptics setup
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

int curLed = 0;
int hue = 0;
int r = 0;
int g = 0;
int b = 0;
int m_Scale = 100;

float _abs(float x) {
  if (x < 0) return -x;
  return x;
}

float max(float a, float b) {
  if (a > b) return a;
  return b;
}

float min(float a, float b) {
  if (a < b) return a;
  return b;
}

int normalizeColor(float x) {
  return (int) min(255, _abs(x) * 5);
}

void allLedsRgb(int r, int g, int b) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i].setRGB(r, g, b);
  }
}

void setBrightness(uint8_t scale) { 
  m_Scale = scale; 
}

void ledsMeter(float x) {
  for (int i = 0; i < METER_LEDS; i++) {
    if (x * METER_LEDS > i) {
      leds[i] = CRGB::White; 
    } else {
      leds[i] = CRGB::Black;
    }
  }
}

int currentHue = 0;
#define HUE_INCR 8

void circleCircleCircle() {
  if (climbing) {
    currentHue = (currentHue + HUE_INCR) % 256;
    for (int i = METER_LEDS; i < METER_LEDS + COLOR_LEDS; i++) {
      leds[i].setHSV(currentHue, 150, 150);
    }
  } else {
    for (int i = METER_LEDS; i < METER_LEDS + COLOR_LEDS; i++) {
      leds[i] = CRGB::Black;
    }
  }
}

float meterVal = 0;

void loop() {
  if (bno08x.wasReset()) {
    Serial.println("IMU was reset ");
    setReports();
  }
  if (!bno08x.getSensorEvent(&sensorValue)) {
    Serial.println("issue with IMU");
    return;
  }

  if (!bmp.performReading()) {
    Serial.println("failed to perform barometer reading :(");
    return;
  }
  float sample = bmp.readAltitude(SEALEVELPRESSURE_HPA);

  // do altitude computations
  if (samples_initiated < NUM_SAMPLES) {
    samples[samples_initiated] = sample;
    samples_initiated++;
  } else {
    if (check_for_change()) {
      digitalWrite(LED, HIGH);
    } else {
      digitalWrite(LED, LOW);
    }
    samples[sample_index] = sample;
    sample_index++;
    sample_index %= NUM_SAMPLES;
  }

  // do acceleration computations
  float x = sensorValue.un.accelerometer.x;
  float y = sensorValue.un.accelerometer.y;
  float z = sensorValue.un.accelerometer.z;
  float accel = x + y + z;
  if (accel > 0 || accel < -20.0) {
    if (periods_elapsed_between_steps >= min_periods_between_steps) {
      if (climbing) step_count += 1; // we only increment the step count if the minimum time between steps has passed
      Serial.print("step count: "); Serial.println(step_count);
      periods_elapsed_between_steps = 0; // reset the timer
    }
  }
  periods_elapsed_between_steps += 1;

  BTSerial.print("update ");
  BTSerial.print(current_state == CLIMBING_STATE ? "climbing" : "flat"); BTSerial.print(" ");
  BTSerial.print(step_count); BTSerial.print(" ");
  BTSerial.println(diff);

  switch(current_state) {
    case FLAT_STATE: {
      Serial.println("entered FLAT_STATE");
      step_count = 0;
      if (climbing) {
        current_state = CLIMBING_STATE; // detected change in altitude
      }
      break;
    }

    case CLIMBING_STATE: {
      Serial.println("entered CLIMBING_STATE");
      // output of haptic feedback
      float outputLevel = step_count * 180 / 20; // where 20 is the expected step count at the end
      if (outputLevel > 180) {
        outputLevel = 180;
      }
      ledcWrite(MOTOR_CHANNEL, outputLevel);
      float meterVal = ((float) step_count) / 20;
      
      ledsMeter(meterVal); // progress bar setup
      circleCircleCircle();
      FastLED.show();
       
      if (!climbing) {
        current_state = FLAT_STATE;
      }
      break;
    }
  }
  delay(20);
}
