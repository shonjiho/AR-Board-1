using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GameManager : MonoBehaviour {

	WebSocket w;
	
	public GameObject gameObjectLevel3;
	public GameObject gameObjectLevel2;
	public GameObject gameObjectLevel1;

	StateManager stateManager = null;
	UIManager uiManager = null;
	


	static GameManager instance;

	public static GameManager Instance
	{
		get
		{
			return instance;
		}
	}

	E_DiceState diceState = E_DiceState.READY;

	public enum E_DiceState
	{
		READY = 0,
		INPUT_WAIT,
		PLAY
	}

	static void Load(GameObject gameObject)
	{
		instance = gameObject.GetComponent<GameManager>();
	}

	public void Init()
	{
		Load(gameObject);
		stateManager = StateManager.Instance;
		uiManager = UIManager.Instance;
	}

	public void GameSetting()
	{
		w = new WebSocket(new Uri(SettingManager.SERVER_ADDRESS));
		StartCoroutine(ServerConnect());

	}

	IEnumerator ServerConnect () {
		Debug.Log("server connect start");
		yield return StartCoroutine(w.Connect());
		SetNewGame(new string[5]);
		while (true)
		{
			string reply = w.RecvString();
			if (reply != null)
			{
				ReplyProcess(reply);
			}
			if (w.error != null)
			{
				Debug.LogError("Error: "+w.error);
				break;
			}
			yield return 0;
		}
		Debug.Log("Server Close");
		w.Close();
	}

	public void ReplyProcess(string reply)
	{
		Debug.Log("Receive: "  + reply);
		string[] replySplitArr = reply.Split(',');
		switch(replySplitArr[0])
		{
			// case "Welcome ARBOARD!!" : 
			// case SettingManager.SM_GAME_START :
			// 	Debug.Log("SM_GAME_START");
			// 	SetNewGame(replySplitArr);
			// 	break;
			// case SettingManager.SM_END_GAME_START_WAIT_TIME :
			// 	StartGame();
			// 	break;
			case SettingManager.SM_GET_DICE_RESULT :
				
				MovePlayer(replySplitArr);
				break;
		}
	}

	public void DiceInput()
	{
		if(diceState != E_DiceState.INPUT_WAIT)
		{
			return;
		}
		diceState = E_DiceState.PLAY;
	}

	public E_DiceState DiceState
	{
		get
		{
			return diceState;
		}

		set
		{
			diceState = value;
		}
	}

	void SetNewGame(string[] replySplitArr)
	{
		// stateManager.SetNewGameState(replySplitArr);
		stateManager.SetNewGameStateTEST();
		uiManager.RefreshUI();
		StartGame();
	}

	void StartGame()
	{
		//0번째 턴인 사람이 먼저 시작한다.
		if(stateManager.GetMyPlayerNumber() != 0)
			return;

		StartCoroutine(DiceProcess());
	}


	IEnumerator DiceProcess()
	{
		UIButton diceButton = uiManager.GetDiceButton();
		diceButton.gameObject.SetActive(true);

		Vector3 diceButtonBaseScale = diceButton.transform.localScale;
		diceState = E_DiceState.INPUT_WAIT;


		bool zoomFlag = false;

		while(diceState == E_DiceState.INPUT_WAIT)
		{
			if(!zoomFlag)
			{	//false면 기본사이즈 
				diceButton.transform.localScale = diceButtonBaseScale; 
				zoomFlag = true;
			}
			else
			{	//true면 확대사이즈
				diceButton.transform.localScale = new Vector3(diceButtonBaseScale.x * 1.1f, diceButtonBaseScale.y * 1.1f, diceButtonBaseScale.z * 1.1f);
				zoomFlag = false;
			}

			yield return new WaitForSeconds(0.2f);
		}
		diceState = E_DiceState.PLAY;
		diceButton.transform.localScale = diceButtonBaseScale; 

		diceButton.gameObject.SetActive(false);

		int diceValue = (int)UnityEngine.Random.Range(1, 12);

		string request = "DiceResult," + stateManager.GetMyPlayerNumber() + "," + diceValue;
		Debug.LogError(request);

		w.SendString(request);

		diceState = E_DiceState.INPUT_WAIT;

		
	}

	void MovePlayer(string[] replySplitArr)
	{
		int playerNum = int.Parse(replySplitArr[1]);
		int moveValue = int.Parse(replySplitArr[2]);

		StartCoroutine(MoveProcess(playerNum, moveValue));
	}

	IEnumerator MoveProcess(int playerNum, int moveValue)
	{

		UILabel diceLabel = uiManager.GetDiceLabel();
		PlayerState playerState = stateManager.playerStates[playerNum];

		Debug.Log("MoveProcess " + playerState.name);

		diceLabel.text = moveValue.ToString();
		Vector3 diceLabelBaseScale = diceLabel.transform.localScale;
		diceLabel.gameObject.SetActive(true);

		for(int i=0; i<200; i += 10)
		{
			diceLabel.transform.localScale = new Vector3(diceLabelBaseScale.x + i, diceLabelBaseScale.y + i, diceLabelBaseScale.z + i);

			yield return new WaitForSeconds(0.05f);
		}
		yield return new WaitForSeconds(1f);

		diceLabel.transform.localScale = diceLabelBaseScale;

		diceLabel.gameObject.SetActive(false);
		


		//도착지점
		Vector3 targetPosition;

		float speed = 100;
		Animator animator = playerState.GetComponent<Animator>();
		

		while(moveValue != 0)
		{
			int moveModuler = playerState.Location%9;
			moveModuler = 9 - moveModuler;
			if(moveValue > moveModuler)	// 이 모서리 넘어서 이동할 경우
			{
				// animator.PlayInFixedTime("Run");
				moveValue -= moveModuler;
				
				// playerState.transform.rotation *= Quaternion.Euler(0, 90, 0);
				playerState.Location += moveModuler;
			}
			else
			{
				playerState.Location += moveValue;
				moveValue = 0;
			}

			
			if(playerState.Location == SettingManager.SCAFFOLDINGS_COUNT)
			{
				playerState.Location = 0;
			}

			targetPosition = stateManager.GetPlayerScaffoldingLocatePosition(playerState);
			playerState.transform.LookAt(targetPosition);

			while(playerState.transform.position != targetPosition)
			{
				float step = speed * Time.deltaTime;
				playerState.transform.position = Vector3.MoveTowards(playerState.transform.position, targetPosition, step);
				yield return new WaitForSeconds(0.02f);
			}
		}
		
		if(playerNum == stateManager.GetMyPlayerNumber())
		{
			if(stateManager.GetScaffolding(playerState.Location).isMyScaffolding())
			{
				//모서리지점은 구매할 수 없다.
				if(playerState.Location%9 != 0)
				{
					//땅구매 열기
					UIManager.Instance.ShowBuildMenu(stateManager.GetScaffolding(playerState.Location));
				}
				else
				{

				}
				
			}
			else
			{
				//벌금

			}
		}
	}











	// public void BuildGameObject(int userNum, int level)
	// {
	// 	GameObject goBuild;
	// 	if(level == 1)
	// 	{
	// 		goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel1);
	// 	}
	// 	else if(level == 2)
	// 	{
	// 		goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel2);
	// 	}
	// 	else
	// 	{
	// 		goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel3);
	// 	}

	// 	if(scaffoldings[userStates[userNum].Location].transform.FindChild("Build") != null)
	// 	{
	// 		Destroy(scaffoldings[userStates[userNum].Location].transform.FindChild("Build").gameObject);
	// 	}

	// 	goBuild.name = "Build";
	// 	goBuild.transform.parent = scaffoldings[userStates[userNum].Location].transform;
	// 	if(userStates[userNum].Location > 0 && userStates[userNum].Location < 9)
	// 	{
	// 		goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
	// 		goBuild.transform.localPosition = new Vector3(0, 0, -3);
	// 	}
	// 	else if(userStates[userNum].Location > 9 && userStates[userNum].Location < 18)
	// 	{
	// 		goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
	// 		goBuild.transform.localPosition = new Vector3(-3, 0, 0);
	// 		goBuild.transform.rotation *= Quaternion.Euler(0, 90, 0);
	// 	}
	// 	else if(userStates[userNum].Location > 18 && userStates[userNum].Location < 27)
	// 	{
	// 		goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
	// 		goBuild.transform.localPosition = new Vector3(0, 0, 3);
	// 		goBuild.transform.rotation *= Quaternion.Euler(0, 180, 0);
	// 	}
	// 	else
	// 	{
	// 		goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
	// 		goBuild.transform.localPosition = new Vector3(3, 0, 0);
	// 		goBuild.transform.rotation *= Quaternion.Euler(0, 270, 0);
	// 	}
		
	// }

	// public void BuildLevel3()
	// {
	// 	BuildLevel3(myUserNum);
	// }

	// public void BuildLevel3(int userNum)
	// {
	// 	if(userNum>=userStates.Count)
	// 	{
	// 		Debug.LogError("userNum is over");
	// 		return;
	// 	}
		
	// 	if(userStates[userNum].Money >= price * 3)
	// 	{
	// 		userStates[userNum].Money -= price * 3;
	// 		scaffoldings[userStates[userNum].Location].OwnerPlayerNum = userNum;
	// 		scaffoldings[userStates[userNum].Location].BuildLevel = 3;
	// 		BuildGameObject(userNum, 3);
			
	// 	}

		

	// 	if(userNum == myUserNum)
	// 	{
	// 		UIManager.Instance.SetUI(userStates[myUserNum]);
	// 		UIManager.Instance.ShowBuildMenu(scaffoldings[userStates[userNum].Location]);
	// 	}


	// }

	// public void BuildLevel2()
	// {
	// 	BuildLevel2(myUserNum);
	// }

	// public void BuildLevel2(int userNum)
	// {
	// 	if(userNum>=userStates.Count)
	// 	{
	// 		Debug.LogError("userNum is over");
	// 		return;
	// 	}
		
	// 	if(userStates[userNum].Money >= price * 2)
	// 	{
	// 		userStates[userNum].Money -= price * 2;
	// 		scaffoldings[userStates[userNum].Location].OwnerPlayerNum = userNum;
	// 		scaffoldings[userStates[userNum].Location].BuildLevel = 2;
	// 		BuildGameObject(userNum, 2);
	// 	}

	// 	if(userNum == myUserNum)
	// 	{
	// 		UIManager.Instance.SetUI(userStates[myUserNum]);
	// 		UIManager.Instance.ShowBuildMenu(scaffoldings[userStates[userNum].Location]);
	// 	}
	// }

	// public void BuildLevel1()
	// {
	// 	BuildLevel1(myUserNum);
	// }

	// public void BuildLevel1(int userNum)
	// {
	// 	if(userNum>=userStates.Count)
	// 	{
	// 		Debug.LogError("userNum is over");
	// 		return;
	// 	}
		
	// 	if(userStates[userNum].Money >= price * 1)
	// 	{
	// 		userStates[userNum].Money -= price * 1;
	// 		scaffoldings[userStates[userNum].Location].OwnerPlayerNum = userNum;
	// 		scaffoldings[userStates[userNum].Location].BuildLevel = 1;
	// 		BuildGameObject(userNum, 1);
	// 	}

		

	// 	if(userNum == myUserNum)
	// 	{
	// 		UIManager.Instance.SetUI(userStates[myUserNum]);
	// 		UIManager.Instance.ShowBuildMenu(scaffoldings[userStates[userNum].Location]);
	// 	}
	// }

	// public void BuildCancle()
	// {
	// 	UIManager.Instance.HideBuildMenu();
	// }

}
