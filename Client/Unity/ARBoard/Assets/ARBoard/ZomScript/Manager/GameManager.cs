using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

	int myUserNum;
	const int scaffoldingsMaxCount = 36;
	const int price = 500;
	// const int priceBuilding = 500;
	// const int priceMotel = 250;

	public List<UserState> userStates;
	public List<Scaffolding> scaffoldings;


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
	}

	public void GameStart(int userCount, int myUserNum)
	{
		this.myUserNum = myUserNum;
		//맵 초기화
		scaffoldings = new List<Scaffolding>();

		GameObject goScaffoldings = GameObject.FindWithTag("Scaffoldings");
		if(goScaffoldings == null)
		{
			Debug.LogError("goScaffoldings is NULL");
			return;
		}

		for(int i=0; i<goScaffoldings.transform.childCount; i++)
		{
			Scaffolding scaffolding = goScaffoldings.transform.GetChild(i).GetComponent<Scaffolding>();

			if(scaffolding == null)
			{
				continue;
			}

			scaffoldings.Add(scaffolding);
		}

		if(scaffoldings.Count != scaffoldingsMaxCount)
		{
			Debug.LogError("Scaffoldings Count Error");
			return;
		}

		userStates = new List<UserState>();

		for(int i=0; i<userCount; i++)
		{
			userStates.Add(new UserState());
		}

		UIManager.Instance.SetUI(userStates[myUserNum]);
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

	public void DiceStart()
	{
		UIButton diceButton = UIManager.Instance.GetDiceButton();
		UILabel diceLabel = UIManager.Instance.GetDiceLabel();
		if(diceButton == null || diceLabel == null)
		{
			//diceButton 없을시 리턴
			Debug.LogError("diceButton or diceLabel is Null!!");
			return;
		}

		StartCoroutine(DiceProcess(diceButton, diceLabel));
	}

	IEnumerator DiceProcess(UIButton diceButton, UILabel diceLabel)
	{
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

		int diceValue = (int)Random.Range(1, 12);
		diceLabel.text = diceValue.ToString();
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
		diceState = E_DiceState.READY;

		UserMove(myUserNum, diceValue);

	}

	void UserMove(int userNum, int moveValue)
	{
		if(userNum>=userStates.Count)
		{
			Debug.LogError("userNum is over");
			return;
		}

		userStates[userNum].Location += moveValue;

		if(scaffoldingsMaxCount <=  userStates[userNum].Location)
		{
			userStates[userNum].Location = userStates[userNum].Location - scaffoldingsMaxCount;
			userStates[userNum].Money += 500;
		}

		GameObject players = GameObject.FindWithTag("Players");
		if(players == null)
		{
			Debug.LogError("Players not Find");
			return;
		}
		GameObject player = players.transform.GetChild(userNum).gameObject;
		player.transform.position = scaffoldings[userStates[userNum].Location].transform.position;


		if(myUserNum == userNum)
		{
			if(scaffoldings[userStates[userNum].Location].isMyScaffolding(myUserNum))
			{
				//땅구매 열기
				UIManager.Instance.ShowBuildMenu(scaffoldings[userStates[userNum].Location]);
			}
			else
			{
				//벌금

			}
		}
		
	}

	// IEnumerator UserMoveCoroutine(int userNum, int moveValue)
	// {

	// }

	public void BuildLevel3()
	{
		BuildLevel3(myUserNum);
	}

	public void BuildLevel3(int userNum)
	{
		if(userNum>=userStates.Count)
		{
			Debug.LogError("userNum is over");
			return;
		}
		
		if(userStates[userNum].Money >= price * 3)
		{
			userStates[userNum].Money -= price * 3;
			scaffoldings[userStates[userNum].Location].OwnerPlayerNum = userNum;
			scaffoldings[userStates[userNum].Location].BuildLevel = 3;
		}

		

		if(userNum == myUserNum)
		{
			UIManager.Instance.SetUI(userStates[myUserNum]);
			UIManager.Instance.ShowBuildMenu(scaffoldings[userStates[userNum].Location]);
		}


	}

	public void BuildLevel2()
	{
		BuildLevel2(myUserNum);
	}

	public void BuildLevel2(int userNum)
	{
		if(userNum>=userStates.Count)
		{
			Debug.LogError("userNum is over");
			return;
		}
		
		if(userStates[userNum].Money >= price * 2)
		{
			userStates[userNum].Money -= price * 2;
			scaffoldings[userStates[userNum].Location].OwnerPlayerNum = userNum;
			scaffoldings[userStates[userNum].Location].BuildLevel = 2;
		}

		if(userNum == myUserNum)
		{
			UIManager.Instance.SetUI(userStates[myUserNum]);
			UIManager.Instance.ShowBuildMenu(scaffoldings[userStates[userNum].Location]);
		}
	}

	public void BuildLevel1()
	{
		BuildLevel1(myUserNum);
	}

	public void BuildLevel1(int userNum)
	{
		if(userNum>=userStates.Count)
		{
			Debug.LogError("userNum is over");
			return;
		}
		
		if(userStates[userNum].Money >= price * 1)
		{
			userStates[userNum].Money -= price * 1;
			scaffoldings[userStates[userNum].Location].OwnerPlayerNum = userNum;
			scaffoldings[userStates[userNum].Location].BuildLevel = 1;
		}

		

		if(userNum == myUserNum)
		{
			UIManager.Instance.SetUI(userStates[myUserNum]);
			UIManager.Instance.ShowBuildMenu(scaffoldings[userStates[userNum].Location]);
		}
	}

	public void BuildCancle()
	{
		UIManager.Instance.HideBuildMenu();
	}

}
