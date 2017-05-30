using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GameManager : MonoBehaviour {

	WebSocket w;
	
	public GameObject gameObjectLevel3;
	public GameObject gameObjectLevel2;
	public GameObject gameObjectLevel1;
	public GameObject buyCheck;
	

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
		// Debug.Log("Receive: "  + reply);
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
			case SettingManager.SM_DICE_RESULT :
				MovePlayer(replySplitArr);
				break;
			case SettingManager.SM_BUILD_OBJECT : 
				BuildObject(replySplitArr);
				NextTurn(replySplitArr);
				break;
			case SettingManager.SM_END_TURN :
				NextTurn(replySplitArr);
				break;
			case SettingManager.SM_CHARGE :
				Charge(replySplitArr);
				break;
			case SettingManager.SM_PLAYER_DEAD :
				PlayerDead(replySplitArr);
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
		uiManager.HideChargeMenu();
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
		if(stateManager.IsSurviveOne())
		{
			uiManager.ShowGameOver(true);
			yield break;
		}
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

		diceValue = 3;

		string request = SettingManager.SM_DICE_RESULT + "," + stateManager.GetMyPlayerNumber() + "," + diceValue;
		// Debug.LogError(request);

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
				playerState.Money += 1000;
			}

			targetPosition = stateManager.GetPlayerScaffoldingLocatePosition(playerState);
			playerState.transform.LookAt(targetPosition);

			Vector3 beforeVec = targetPosition;
			while(playerState.transform.position != targetPosition && beforeVec != playerState.transform.position)
			{
				float step = speed * Time.deltaTime;
				beforeVec = playerState.transform.position;
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
					EndTurn();
				}
				
			}
			else
			{
				//벌금
				CalculateCost(playerState, stateManager.GetScaffolding(playerState.Location));
			}
		}
	}

	void CalculateCost(PlayerState playerState, Scaffolding scaffolding)
	{
		int cost = 0;
		switch(scaffolding.BuildLevel)
		{
			case 1 :
				cost =  SettingManager.INT_COST_MOTEL;
				break;
			case 2 :
				cost = SettingManager.INT_COST_BUILDING * 2;
				break;
			case 3 : 
				cost = SettingManager.INT_COST_HOTEL * 3;
				break;
		}

		if(playerState.Money - cost >= 0)
		{
			string request = SettingManager.SM_CHARGE + "," + stateManager.GetMyPlayerNumber() + "," + cost + "," + SettingManager.STRING_SEND_BUILD_NULL;
			w.SendString(request);
		}
		else
		{
			//돈이 부족할때
			uiManager.ShowChargeMenu(cost);
		}
	}

	public void CalculateCostSell(bool[] checkArr, List<Scaffolding> scaffoldings, int cost)
	{
		string strScaf = string.Empty;
		for(int i=0;i<checkArr.Length; i++)
		{
			if(checkArr[i])
			{
				strScaf += (""+ scaffoldings[i].ScaffoldingNum + "|");
			}
		}

		string request = SettingManager.SM_CHARGE + "," + stateManager.GetMyPlayerNumber() + "," + cost + "," + strScaf;
		w.SendString(request);
	}


	void Charge(string[] replySplitArr)
	{
		int playerNum = int.Parse(replySplitArr[1]);
		int cost = int.Parse(replySplitArr[2]);
		string[] sellList = replySplitArr[3].Split('|');

		if(sellList[0] != SettingManager.STRING_SEND_BUILD_NULL)
		{
			
			for(int i=0;i<sellList.Length; i++)
			{
				if(sellList[i] == string.Empty)
					continue;

				int scafNum = int.Parse(sellList[i]);
				Scaffolding scaffolding = stateManager.GetScaffolding(scafNum);
				switch(scaffolding.BuildLevel)
				{
					case 1 :
						stateManager.playerStates[playerNum].Money += SettingManager.INT_COST_MOTEL;
						break;
					case 2 :
						stateManager.playerStates[playerNum].Money += SettingManager.INT_COST_BUILDING;
						break;
					case 3 :
						stateManager.playerStates[playerNum].Money += SettingManager.INT_COST_HOTEL;
						break;
				}
				scaffolding.RefreshState(scaffolding.ScaffoldingNum);
				
			}
		}

		stateManager.playerStates[playerNum].Money -= cost;
		uiManager.RefreshUI();
		NextTurn(replySplitArr);
		
	}


	public void PlayerDead(int playerNum)
	{
		string request = SettingManager.SM_PLAYER_DEAD + "," + playerNum;
		w.SendString(request);
	}

	public void PlayerDead(string[] replySplitArr)
	{
		int playerNum = int.Parse(replySplitArr[1]);
		stateManager.playerStates[playerNum].Dead();

		if(playerNum == stateManager.GetMyPlayerNumber())
			EndTurn();
	}


	public void TestBuild()
	{
		int playerNum = 3;
		int level = 3;
		GameObject goBuild;
		if(level == 1)
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel1);
			stateManager.playerStates[playerNum].Money -= SettingManager.INT_COST_MOTEL;
		}
		else if(level == 2)
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel2);
			stateManager.playerStates[playerNum].Money -= SettingManager.INT_COST_BUILDING;
		}
		else
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel3);
			stateManager.playerStates[playerNum].Money -= SettingManager.INT_COST_HOTEL;
		}
		int location = 3;
		stateManager.GetScaffolding(location).OwnerPlayerNum = playerNum;
		stateManager.GetScaffolding(location).BuildLevel = level;

		goBuild.tag = SettingManager.STRING_BUILD;
		
		Scaffolding scaffolding = stateManager.GetScaffolding(location);

		if(scaffolding.transform.FindChild(SettingManager.STRING_BUILD) != null)
		{
			Destroy(scaffolding.transform.FindChild(SettingManager.STRING_BUILD).gameObject);
		}

		goBuild.name = SettingManager.STRING_BUILD;
		goBuild.transform.parent = scaffolding.transform;
		if(location > 0 && location < 9)
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(0, 0, -3);
		}
		else if(location > 9 && location < 18)
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(-3, 0, 0);
			goBuild.transform.rotation *= Quaternion.Euler(0, 90, 0);
		}
		else if(location > 18 && location < 27)
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(0, 0, 3);
			goBuild.transform.rotation *= Quaternion.Euler(0, 180, 0);
		}
		else
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(3, 0, 0);
			goBuild.transform.rotation *= Quaternion.Euler(0, 270, 0);
		}
		
		uiManager.RefreshUI();
	}

	public void TestBuild2(int i)
	{
		int playerNum = 0;
		int level = 3;
		GameObject goBuild;
		if(level == 1)
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel1);
			stateManager.playerStates[playerNum].Money -= SettingManager.INT_COST_MOTEL;
		}
		else if(level == 2)
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel2);
			stateManager.playerStates[playerNum].Money -= SettingManager.INT_COST_BUILDING;
		}
		else
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel3);
			stateManager.playerStates[playerNum].Money -= SettingManager.INT_COST_HOTEL;
		}
		int location = i;
		stateManager.GetScaffolding(location).OwnerPlayerNum = playerNum;
		stateManager.GetScaffolding(location).BuildLevel = level;

		goBuild.tag = SettingManager.STRING_BUILD;
		
		Scaffolding scaffolding = stateManager.GetScaffolding(location);

		GameObject goBuyCheck = (GameObject)Instantiate(buyCheck);

		if(scaffolding.transform.FindChild(SettingManager.STRING_BUYCHECK) != null)
		{
			Destroy(scaffolding.transform.FindChild(SettingManager.STRING_BUYCHECK).gameObject);
		}

		if(scaffolding.transform.FindChild(SettingManager.STRING_BUILD) != null)
		{
			Destroy(scaffolding.transform.FindChild(SettingManager.STRING_BUILD).gameObject);
		}

		goBuyCheck.name = SettingManager.STRING_BUYCHECK;
		goBuyCheck.transform.parent = scaffolding.transform;
		goBuyCheck.transform.localScale = new Vector3(3f, 3f, 3f);
		goBuyCheck.transform.localPosition = new Vector3(0, 0.116f, 0.098f);
		goBuyCheck.GetComponent<SpriteRenderer>().color = SettingManager.GetColor(playerNum);
		// Debug.LogError(goBuyCheck.GetComponent<SpriteRenderer>().color);

		goBuild.name = SettingManager.STRING_BUILD;
		goBuild.transform.parent = scaffolding.transform;
		if(location > 0 && location < 9)
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(0, 0, -3);
		}
		else if(location > 9 && location < 18)
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(-3, 0, 0);
			goBuild.transform.rotation *= Quaternion.Euler(0, 90, 0);
		}
		else if(location > 18 && location < 27)
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(0, 0, 3);
			goBuild.transform.rotation *= Quaternion.Euler(0, 180, 0);
		}
		else
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(3, 0, 0);
			goBuild.transform.rotation *= Quaternion.Euler(0, 270, 0);
		}
		
		uiManager.RefreshUI();
	}

	void BuildObject(string[] replySplitArr)
	{
		int playerNum = int.Parse(replySplitArr[1]);
		int level = int.Parse(replySplitArr[2]);
		GameObject goBuild;
		if(level == 1)
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel1);
			stateManager.playerStates[playerNum].Money -= SettingManager.INT_COST_MOTEL;
		}
		else if(level == 2)
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel2);
			stateManager.playerStates[playerNum].Money -= SettingManager.INT_COST_BUILDING;
		}
		else
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel3);
			stateManager.playerStates[playerNum].Money -= SettingManager.INT_COST_HOTEL;
		}
		int location = stateManager.playerStates[playerNum].Location;
		stateManager.GetScaffolding(location).BuildLevel = level;
		stateManager.GetScaffolding(location).OwnerPlayerNum = playerNum;

		goBuild.tag = SettingManager.STRING_BUILD;

		GameObject goBuyCheck = (GameObject)Instantiate(buyCheck);
		
		Scaffolding scaffolding = stateManager.GetScaffolding(location);

		if(scaffolding.transform.FindChild(SettingManager.STRING_BUILD) != null)
		{
			Destroy(scaffolding.transform.FindChild(SettingManager.STRING_BUILD).gameObject);
		}

		goBuild.name = SettingManager.STRING_BUILD;
		goBuild.transform.parent = scaffolding.transform;

		if(scaffolding.transform.FindChild(SettingManager.STRING_BUYCHECK) != null)
		{
			Destroy(scaffolding.transform.FindChild(SettingManager.STRING_BUYCHECK).gameObject);
		}

		goBuyCheck.name = SettingManager.STRING_BUYCHECK;
		goBuyCheck.transform.parent = scaffolding.transform;
		goBuyCheck.transform.localScale = new Vector3(3f, 3f, 3f);
		goBuyCheck.transform.localPosition = new Vector3(0, 0.116f, 0.098f);
		goBuyCheck.GetComponent<SpriteRenderer>().color = SettingManager.GetColor(playerNum);

		if(location > 0 && location < 9)
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(0, 0, -3);
		}
		else if(location > 9 && location < 18)
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(-3, 0, 0);
			goBuild.transform.rotation *= Quaternion.Euler(0, 90, 0);
		}
		else if(location > 18 && location < 27)
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(0, 0, 3);
			goBuild.transform.rotation *= Quaternion.Euler(0, 180, 0);
		}
		else
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(3, 0, 0);
			goBuild.transform.rotation *= Quaternion.Euler(0, 270, 0);
		}
		
		uiManager.RefreshUI();

	}

	void EndTurn()
	{
		string request = SettingManager.SM_END_TURN + "," + stateManager.GetMyPlayerNumber();
		w.SendString(request);
	}

	void NextTurn(string[] replySplitArr)
	{
		stateManager.SetNextTurn();
		stateManager.TestAddMyPlayerNumber();
		if(stateManager.CurrentTurn == stateManager.GetMyPlayerNumber())
		{
			if(stateManager.playerStates[stateManager.GetMyPlayerNumber()].IsEnd())
			{
				EndTurn();
			}
			else
			{
				StartCoroutine(DiceProcess());
			}
			
		}
	}




	bool CheckMoney(int money)
	{
		if(stateManager.playerStates[stateManager.GetMyPlayerNumber()].Money >= money)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


	public void BuildHotel()
	{
		if(!CheckMoney(SettingManager.INT_COST_HOTEL))
		{
			return;
		}
		string request = SettingManager.SM_BUILD_OBJECT + "," + stateManager.GetMyPlayerNumber() + "," + 3;
		w.SendString(request);
		UIManager.Instance.HideBuildMenu();
	}

	public void BuildBuilding()
	{
		if(!CheckMoney(SettingManager.INT_COST_BUILDING))
		{
			return;
		}
		string request = SettingManager.SM_BUILD_OBJECT + "," + stateManager.GetMyPlayerNumber() + "," + 2;
		w.SendString(request);
		UIManager.Instance.HideBuildMenu();
	}

	public void BuildMotel()
	{
		if(!CheckMoney(SettingManager.INT_COST_MOTEL))
		{
			return;
		}
		string request = SettingManager.SM_BUILD_OBJECT + "," + stateManager.GetMyPlayerNumber() + "," + 1;
		w.SendString(request);
		UIManager.Instance.HideBuildMenu();
	}

	public void BuildCancle()
	{
		EndTurn();
		UIManager.Instance.HideBuildMenu();
	}


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

	

}
