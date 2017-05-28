using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScriptManager : MonoBehaviour {

	[SerializeField] GameManager gameManager;
	[SerializeField] UIManager uiManager;
	[SerializeField] StateManager stateManager;

	public void Init()
	{
		
		uiManager.Init();
		stateManager.Init();
		gameManager.Init();

		GameManager.Instance.GameSetting();
		// GameManager.Instance.DiceStart();
	}
}
