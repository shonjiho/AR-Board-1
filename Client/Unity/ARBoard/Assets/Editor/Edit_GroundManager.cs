using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor (typeof(GroundManager))]
[ExecuteInEditMode]
public class Edit_GroundManager : Editor {

	GroundManager groundManager;
	GameObject tiles;
	Object[] grasses;

	void Awake()
	{
		groundManager = target as GroundManager;
		grasses = Resources.LoadAll("Prefab/MapTile/grass1");
	}


	public override void OnInspectorGUI()
	{
		if (GUILayout.Button("Create Ground")) 
		{
			float size = 0.064f;
			float xPos = -0.64f;
			float zPos = -0.64f;
			int idx;

			GameObject tilesGameObject = new GameObject();
			tilesGameObject.transform.parent = groundManager.transform;
			tilesGameObject.transform.localPosition = Vector3.zero;
			tilesGameObject.transform.localScale = new Vector3(1, 1, 1);
			tilesGameObject.name = "Tiles";

			GameObject curbsGameObject = new GameObject();
			curbsGameObject.transform.parent = groundManager.transform;
			curbsGameObject.transform.localPosition = Vector3.zero;
			curbsGameObject.transform.localScale = new Vector3(1, 1, 1);
			curbsGameObject.name = "Curbs";

			GameObject scaffoldings = new GameObject();
			scaffoldings.transform.parent = groundManager.transform;
			scaffoldings.transform.localPosition = Vector3.zero;
			scaffoldings.transform.localScale = new Vector3(1, 1, 1);
			scaffoldings.name = "Scaffoldings";


			for(int i=0; i<20; i++)
			{
				for(int j=0; j<20; j++)
				{
					idx = (int)Random.Range(0, grasses.Length - 1);
					GameObject newTile = (GameObject)GameObject.Instantiate(grasses[idx]);
					
					
					newTile.transform.parent = groundManager.transform.FindChild("Tiles");
					newTile.transform.localPosition = new Vector3(xPos + (size*i), 0, zPos + (size*j));
					newTile.transform.localScale = new Vector3(0.02f, 0.02f, 0.02f);
				}
			}


			xPos = -0.6079f;
			zPos = 0.6123f;
			size = 0.128f;
			GameObject curbPrefab = Resources.Load<GameObject>("Prefab/MapTile/curb/obj_curb6");
			for(int i=0; i<10; i++)
			{
				GameObject newCurb = (GameObject)GameObject.Instantiate(curbPrefab);
				newCurb.transform.parent = groundManager.transform.FindChild("Curbs");
				newCurb.transform.localPosition = new Vector3(xPos + (size*i), 0, zPos);
				newCurb.transform.localScale = new Vector3(0.021f, 0.02f, 0.02f);
			}

			// xPos = -0.5975f;
			zPos = -0.6728f;
			for(int i=0; i<10; i++)
			{
				GameObject newCurb = (GameObject)GameObject.Instantiate(curbPrefab);
				newCurb.transform.parent = groundManager.transform.FindChild("Curbs");
				newCurb.transform.localPosition = new Vector3(xPos + (size*i), 0, zPos);
				newCurb.transform.rotation = new Quaternion(0, 180, 0, 0);
				newCurb.transform.localScale = new Vector3(0.021f, 0.02f, 0.02f);
			}

			xPos = -0.6759f;
			zPos = -0.6045f;
			for(int i=0; i<10; i++)
			{
				GameObject newCurb = (GameObject)GameObject.Instantiate(curbPrefab);
				newCurb.transform.parent = groundManager.transform.FindChild("Curbs");
				newCurb.transform.localPosition = new Vector3(xPos, 0, zPos + (size*i));
				newCurb.transform.rotation = new Quaternion(0, 0, 0, 0);
 				newCurb.transform.rotation *= Quaternion.Euler(0, 270, 0);
				newCurb.transform.localScale = new Vector3(0.021f, 0.02f, 0.02f);
			}

			xPos = 0.6116f;
			zPos = -0.6045f;
			for(int i=0; i<10; i++)
			{
				GameObject newCurb = (GameObject)GameObject.Instantiate(curbPrefab);
				newCurb.transform.parent = groundManager.transform.FindChild("Curbs");
				newCurb.transform.localPosition = new Vector3(xPos, 0, zPos + (size*i));
				newCurb.transform.rotation = new Quaternion(0, 0, 0, 0);
 				newCurb.transform.rotation *= Quaternion.Euler(0, 90, 0);
				newCurb.transform.localScale = new Vector3(0.021f, 0.02f, 0.02f);
			}



			curbPrefab = Resources.Load<GameObject>("Prefab/MapTile/curb/obj_curb7");
			xPos = -0.67591f;
			zPos = 0.61232f;
			GameObject lastCurb = (GameObject)GameObject.Instantiate(curbPrefab);
			lastCurb.transform.parent = groundManager.transform.FindChild("Curbs");
			lastCurb.transform.localPosition = new Vector3(xPos, 0, zPos);
			lastCurb.transform.localScale = new Vector3(0.02f, 0.02f, 0.02f);

			xPos = 0.6116f;
			lastCurb = (GameObject)GameObject.Instantiate(curbPrefab);
			lastCurb.transform.parent = groundManager.transform.FindChild("Curbs");
			lastCurb.transform.localPosition = new Vector3(xPos, 0, zPos);
			lastCurb.transform.rotation = new Quaternion(0, 0, 0, 0);
			lastCurb.transform.rotation *= Quaternion.Euler(0, 90, 0);
			lastCurb.transform.localScale = new Vector3(0.02f, 0.02f, 0.02f);

			zPos = -0.67277f;
			lastCurb = (GameObject)GameObject.Instantiate(curbPrefab);
			lastCurb.transform.parent = groundManager.transform.FindChild("Curbs");
			lastCurb.transform.localPosition = new Vector3(xPos, 0, zPos);
			lastCurb.transform.rotation = new Quaternion(0, 0, 0, 0);
			lastCurb.transform.rotation *= Quaternion.Euler(0, 180, 0);
			lastCurb.transform.localScale = new Vector3(0.02f, 0.02f, 0.02f);

			xPos = -0.6759f;
			lastCurb = (GameObject)GameObject.Instantiate(curbPrefab);
			lastCurb.transform.parent = groundManager.transform.FindChild("Curbs");
			lastCurb.transform.localPosition = new Vector3(xPos, 0, zPos);
			lastCurb.transform.rotation = new Quaternion(0, 0, 0, 0);
			lastCurb.transform.rotation *= Quaternion.Euler(0, 270, 0);
			lastCurb.transform.localScale = new Vector3(0.02f, 0.02f, 0.02f);

			xPos = 0.5f;
			float yPos = 0.002f;
			zPos = -0.57f;
			size = 0.12f;
			float xPosTemp = 0.0f;
			float zPosTemp = 0.0f;
			GameObject ScaffoldingPrefab = Resources.Load<GameObject>("Prefab/MapTile/crete/env_crete1b");
			GameObject scaffolding;
			for(int i=0; i<10; i++)
			{
				scaffolding = (GameObject)GameObject.Instantiate(ScaffoldingPrefab);
				scaffolding.transform.parent = groundManager.transform.FindChild("Scaffoldings");
				scaffolding.transform.localPosition = new Vector3(xPos - (size*i), yPos, zPos);
				scaffolding.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
				xPosTemp = scaffolding.transform.localPosition.x;
			}

			xPos = xPosTemp;

			for(int i=1; i<10; i++)
			{
				scaffolding = (GameObject)GameObject.Instantiate(ScaffoldingPrefab);
				scaffolding.transform.parent = groundManager.transform.FindChild("Scaffoldings");
				scaffolding.transform.localPosition = new Vector3(xPos, yPos, zPos + (size*i));
				scaffolding.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
				zPosTemp = scaffolding.transform.localPosition.z;

			}
			zPos = zPosTemp;

			for(int i=1; i<10; i++)
			{
				scaffolding = (GameObject)GameObject.Instantiate(ScaffoldingPrefab);
				scaffolding.transform.parent = groundManager.transform.FindChild("Scaffoldings");
				scaffolding.transform.localPosition = new Vector3(xPos + (size*i), yPos, zPos);
				scaffolding.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
				xPosTemp = scaffolding.transform.localPosition.x;

			}

			xPos = xPosTemp;

			for(int i=1; i<10; i++)
			{
				scaffolding = (GameObject)GameObject.Instantiate(ScaffoldingPrefab);
				scaffolding.transform.parent = groundManager.transform.FindChild("Scaffoldings");
				scaffolding.transform.localPosition = new Vector3(xPos , yPos, zPos - (size*i));
				scaffolding.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
				xPosTemp = scaffolding.transform.localPosition.x;

			}

		}	
	}
	
}
