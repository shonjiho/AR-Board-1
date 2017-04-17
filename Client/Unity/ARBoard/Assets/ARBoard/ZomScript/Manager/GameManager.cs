using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

	int myNum;

	List<UserState> userStates;
	List<Scaffolding> scaffoldings;


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

	public void GameStart(int userCount, int myNum)
	{
		this.myNum = myNum;
		//맵 초기화
		scaffoldings = new List<Scaffolding>();

		for(int i=0; i<36; i++)
		{
			scaffoldings.Add(new Scaffolding());
		}

		userStates = new List<UserState>();

		for(int i=0; i<userCount; i++)
		{
			userStates.Add(new UserState());
		}

		UIManager.Instance.SetUI(userStates, myNum);
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

		diceLabel.gameObject.SetActive(false);

		

		
		

	}

}
