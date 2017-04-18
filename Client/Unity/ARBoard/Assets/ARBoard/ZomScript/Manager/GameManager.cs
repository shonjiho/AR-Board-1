using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

	int myUserNum;
	const int scaffoldingsMaxCount = 36;
	const int price = 500;
	
	public GameObject gameObjectLevel3;
	public GameObject gameObjectLevel2;
	public GameObject gameObjectLevel1;

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
		if(diceState != E_DiceState.READY)
		{
			return;
		}
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
		

		UserMove(myUserNum, diceValue);

	}

	void UserMove(int userNum, int moveValue)
	{
		if(userNum>=userStates.Count)
		{
			Debug.LogError("userNum is over");
			return;
		}

		StopCoroutine(UserMoveCoroutine(userNum, moveValue));
		StartCoroutine(UserMoveCoroutine(userNum, moveValue));
		
	}

	IEnumerator UserMoveCoroutine(int userNum, int moveValue)
	{
		Debug.Log("coroutine start");
		GameObject players = GameObject.FindWithTag("Players");
		if(players == null)
		{
			Debug.LogError("Players not Find");
			yield return null;
		}
		GameObject player = players.transform.GetChild(userNum).gameObject;

		Transform target = null;

		float speed = 100;
		Animator animator = player.GetComponent<Animator>();
		

		while(moveValue != 0)
		{
			int moveModuler = userStates[userNum].Location%9;
			moveModuler = 9 - moveModuler;
			if(moveValue > moveModuler)
			{
				animator.PlayInFixedTime("Run");
				moveValue = moveValue - moveModuler;
				userStates[userNum].Location = userStates[userNum].Location + moveModuler;
				if(userStates[userNum].Location == scaffoldingsMaxCount)
				{
					userStates[userNum].Location = 0;
				}
				target = scaffoldings[userStates[userNum].Location].transform;
				while(player.transform.position != target.position)
				{
					// Debug.Log("coroutine ing");
					float step = speed * Time.deltaTime;
					player.transform.position = Vector3.MoveTowards(player.transform.position, target.position, step);
					yield return new WaitForSeconds(0.02f);
				}
				player.transform.rotation *= Quaternion.Euler(0, 90, 0);
			}
			else
			{
				animator.PlayInFixedTime("Run");
				userStates[userNum].Location = userStates[userNum].Location + moveValue;
				if(userStates[userNum].Location == scaffoldingsMaxCount)
				{
					userStates[userNum].Location = 0;
				}
				//여기서 조절
				player.transform.LookAt(scaffoldings[userStates[userNum].Location].transform);
				target = scaffoldings[userStates[userNum].Location].transform;
				while(player.transform.position != target.position)
				{
					// Debug.Log("coroutine ing");
					float step = speed * Time.deltaTime;
					player.transform.position = Vector3.MoveTowards(player.transform.position, target.position, step);
					yield return new WaitForSeconds(0.02f);
				}
				moveValue = 0;
			}
		}
		
		if(myUserNum == userNum)
		{
			if(scaffoldings[userStates[userNum].Location].isMyScaffolding(myUserNum))
			{
				//모서리지점은 구매할 수 없다.
				if(userStates[userNum].Location%9 != 0)
				{
					//땅구매 열기
				UIManager.Instance.ShowBuildMenu(scaffoldings[userStates[userNum].Location]);
				}
				
			}
			else
			{
				//벌금

			}
		}

		Debug.Log("coroutine done");

		diceState = E_DiceState.READY;


		
	}

	public void BuildGameObject(int userNum, int level)
	{
		GameObject goBuild;
		if(level == 1)
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel1);
		}
		else if(level == 2)
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel2);
		}
		else
		{
			goBuild = (GameObject)GameObject.Instantiate(gameObjectLevel3);
		}

		if(scaffoldings[userStates[userNum].Location].transform.FindChild("Build") != null)
		{
			Destroy(scaffoldings[userStates[userNum].Location].transform.FindChild("Build").gameObject);
		}

		goBuild.name = "Build";
		goBuild.transform.parent = scaffoldings[userStates[userNum].Location].transform;
		if(userStates[userNum].Location > 0 && userStates[userNum].Location < 9)
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(0, 0, -3);
		}
		else if(userStates[userNum].Location > 9 && userStates[userNum].Location < 18)
		{
			goBuild.transform.localScale = new Vector3(0.12f, 0.12f, 0.12f);
			goBuild.transform.localPosition = new Vector3(-3, 0, 0);
			goBuild.transform.rotation *= Quaternion.Euler(0, 90, 0);
		}
		else if(userStates[userNum].Location > 18 && userStates[userNum].Location < 27)
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
		
	}

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
			BuildGameObject(userNum, 3);
			
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
			BuildGameObject(userNum, 2);
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
			BuildGameObject(userNum, 1);
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
