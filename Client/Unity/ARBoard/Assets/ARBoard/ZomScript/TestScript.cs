using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestScript : MonoBehaviour {

	// Use this for initialization
	int i = 0;
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButtonDown("Fire1"))
		{
			Debug.Log("!!");
			Vector3 v = transform.position;
			v.x = v.x - 42f;
			i++;
			transform.position = v;
			if(i==10)
			{
				Quaternion q = transform.rotation;
				q.y += 90;
				i = 0;
				transform.rotation = q;
			}
		}
	}
}
