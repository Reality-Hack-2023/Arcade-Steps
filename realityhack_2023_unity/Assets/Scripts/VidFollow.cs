using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VidFollow : MonoBehaviour
{
   private Transform trackPlayer;
   private float RotationSpeed = 3.0f, MoveSpeed = 3.0f;

   private void Start()
   {
      trackPlayer = GameObject.FindWithTag("Main Camera").transform;
   }

   private void Update()
   {
      transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(trackPlayer.position - transform.position), RotationSpeed * Time.deltaTime);

      transform.position += transform.forward * MoveSpeed * Time.deltaTime;
   }
}
