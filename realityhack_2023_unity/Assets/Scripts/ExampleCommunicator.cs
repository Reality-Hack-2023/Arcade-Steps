using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sngty;
using UnityEngine.InputSystem.Controls;
using UnityEngine.UIElements;

public class ExampleCommunicator : MonoBehaviour
{
    public SingularityManager mySingularityManager;
    DeviceSignature myDevice = default;

    public GameObject video;
    private bool videoActive = false;

    public ParticleSystem confetti;
    private bool confettiActive = false;
    
    // public GameObject stairs;
    // private bool stairsActive = false;
    private void Start()
    {
        List<DeviceSignature> pairedDevices = mySingularityManager.GetPairedDevices();
        // DeviceSignature myDevice = default;

//If you are looking for a device with a specific name (in this case exampleDeviceName):
        for (int i = 0; i < pairedDevices.Count; i++)
        {
            if (pairedDevices[i].name == "emtest11")
            {
                myDevice = pairedDevices[i];
                //Do stuff to connect to the device here
                mySingularityManager.ConnectToDevice(myDevice);
                break;
            }
        }
    }
    
    //KEEP IN MIND IF YOU ARE USING THIS WITH AN ANDROID DEVICE YOU WON'T BE ABLE TO READ LOGS FROM UNITY.
//You'll have to read the logcat logs through USB debugging. Or just display your messages on a GUI instead of Debug.Log.
    public void onConnected()
    {
        //Debug.Log("Connected to device!");
    }

    private double lastClimbing = 0;
    private bool oldVideoActive = false;
    private bool oldConfettiActive = false;
    private bool needStartVideo = false;
    private bool needStartConfetti = false;
    private bool needStopVideo = false;
    private bool needStopConfetti = false;

    public void onMessageRecieved(string message)
    {
        Debug.Log("Message recieved from device: " + message);
        string state = "";
        int numSteps = 0;
        string[] msgParts = message.Split(" ");
        if (msgParts[0] != "update")
        {
            state = "other";
            numSteps = 0;
        }
        else
        {
            state = msgParts[1];
            numSteps = Int32.Parse(msgParts[2]);
        }

        double t = (DateTime.UtcNow - new DateTime(1970, 1, 1)).TotalSeconds;

        if (state == "climbing")
        {
            videoActive = true;
            if (numSteps > 5)
            {
                confettiActive = true;
            }

            lastClimbing = t;
        }
        else
        {
            videoActive = false;
            if (t - lastClimbing > 7)
            {
                confettiActive = false;
            }
        }
        
        Debug.Log("videoActive: " + videoActive + "  confettiActive: " + confettiActive);

        needStartVideo = (needStartVideo) || videoActive && !oldVideoActive;
        needStopVideo = (needStopVideo) || (!videoActive) && oldVideoActive;
        needStartConfetti = (needStartConfetti) || confettiActive && !oldConfettiActive;
        needStopConfetti = (needStopConfetti) || (!confettiActive) && oldConfettiActive;

        oldVideoActive = videoActive;
        oldConfettiActive = confettiActive;

        // videoActive = state == "climbing";
        // confettiActive = true;
        // stairsActive = true;
    }

    public void onError(string errorMessage)
    {
        Debug.LogError("Error with Singularity: " + errorMessage);
    }

    private void Update()
    {
        //Make sure you're connected to the device before you do this or it won't work
        mySingularityManager.sendMessage("Hello, world!\n", myDevice);

        // if (needStartVideo)
        // {
        //     Debug.Log("starting video");
        //     video.SetActive(true);
        //     needStartVideo = false;
        // }
        // if (needStopVideo)
        // {
        //     Debug.Log("stopping video");
        //     video.SetActive(false);
        //     needStopVideo = false;
        // }
        
        
        if (needStartConfetti)
        {
            Debug.Log("starting confetti");
            confetti.gameObject.SetActive(true);
            needStartConfetti = false;
        }
        if (needStopConfetti)
        {
            Debug.Log("stopping confetti");
            confetti.gameObject.SetActive(false);
            needStopConfetti = false;
        }
        
        
        // video.SetActive(videoActive);
        // confetti.gameObject.SetActive(confettiActive);
        // stairs.SetActive(stairsActive);
    }
}
