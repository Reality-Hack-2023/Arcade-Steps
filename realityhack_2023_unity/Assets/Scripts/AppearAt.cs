using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AppearAt : MonoBehaviour
{
   public ParticleSystem confetti;

   private void Start()
   {
      Instantiate(confetti, transform.position, transform.rotation);
   }
}
