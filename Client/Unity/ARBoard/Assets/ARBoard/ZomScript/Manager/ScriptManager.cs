using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScriptManager : MonoBehaviour {

	[SerializeField] GameManager gameManager;
	[SerializeField] UIManager uiManager;

	public void Init()
	{
		gameManager.Init();
		uiManager.Init();

		GameManager.Instance.GameStart(1, 0);
		// GameManager.Instance.DiceStart();
	}
}
