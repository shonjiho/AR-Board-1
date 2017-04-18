using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapObject : MonoBehaviour {

	public GameObject Map;
	void Start () {
		GameObject goMap = (GameObject)GameObject.Instantiate(Map);
		goMap.transform.parent = transform;
	}
}
