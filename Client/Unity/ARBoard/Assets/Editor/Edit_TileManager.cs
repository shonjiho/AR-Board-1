using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor (typeof(TileManager))]
[ExecuteInEditMode]
public class Edit_TileManager : Editor {

	TileManager tileManager;
	Object[] grasses1;
	Object[] grasses2;
	Object[] cretes;



	void Awake()
	{
		tileManager = target as TileManager;
		grasses1 = Resources.LoadAll("Prefab/MapTile/grass1");
		grasses2 = Resources.LoadAll("Prefab/MapTile/grass2");
		cretes = Resources.LoadAll("Prefab/MapTile/crete");
	}

	public override void OnInspectorGUI()
	{
		base.DrawDefaultInspector();



		EditorGUILayout.Separator();
		EditorGUILayout.BeginVertical();

		GUILayout.Label("Change Tile");
		
		EditorGUILayout.BeginHorizontal();

		if (GUILayout.Button("Concrete")) 
		{
			int idx = (int)Random.Range(0, cretes.Length - 1);

			GameObject newCreate = (GameObject)GameObject.Instantiate(cretes[idx]);
			newCreate.transform.parent = tileManager.transform.parent;
			newCreate.transform.position = tileManager.transform.position;
			newCreate.transform.localScale = tileManager.transform.localScale;
			DestroyImmediate(tileManager.gameObject);
		}

		if (GUILayout.Button("Grass1")) 
		{
			int idx = (int)Random.Range(0, grasses1.Length - 1);

			GameObject newGrass1 = (GameObject)GameObject.Instantiate(grasses1[idx]);
			newGrass1.transform.parent = tileManager.transform.parent;
			newGrass1.transform.position = tileManager.transform.position;
			newGrass1.transform.localScale = tileManager.transform.localScale;
			DestroyImmediate(tileManager.gameObject);
		}

		if (GUILayout.Button("Grass2")) 
		{
			int idx = (int)Random.Range(0, grasses2.Length - 1);

			GameObject newGrass2 = (GameObject)GameObject.Instantiate(grasses2[idx]);
			newGrass2.transform.parent = tileManager.transform.parent;
			newGrass2.transform.position = tileManager.transform.position;
			newGrass2.transform.localScale = tileManager.transform.localScale;
			DestroyImmediate(tileManager.gameObject);
		}

		EditorGUILayout.EndHorizontal();
		EditorGUILayout.EndVertical();
	}
}
