using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StateManager : MonoBehaviour {
	static StateManager instance;

	public static StateManager Instance
	{
		get
		{
			return instance;
		}
	}


	static void Load(GameObject gameObject)
	{
		instance = gameObject.GetComponent<StateManager>();
	}

	public void Init()
	{
		StateManager.Load(gameObject);
	}


	public List<PlayerState> playerStates;
	List<Scaffolding> scaffoldings;
	int playerNumber = 0;

	int currentTurn = 0;

	public int CurrentTurn
	{
		get
		{
			return currentTurn;
			
		} 
	}

	public void SetNextTurn()
	{
		currentTurn++;
		if(currentTurn >= 4)
		{
			currentTurn = 0;
		}
	}

	public void SetNewGameStateTEST()
	{
		string[] arr = {"GameStart", "0", "test1", "test2", "test3", "test4"};
		SetNewGameState(arr);
		GameManager.Instance.TestBuild();
		GameManager.Instance.TestBuild2(12);
		GameManager.Instance.TestBuild2(13);
		GameManager.Instance.TestBuild2(14);
	}

	public void SetNewGameState(string[] replySplitArr)
	{
		playerNumber = int.Parse(replySplitArr[1]);
		scaffoldings = new List<Scaffolding>();
		currentTurn = 0;

		

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

			scaffolding.RefreshState(i);

			scaffoldings.Add(scaffolding);
		}

		if(scaffoldings.Count != SettingManager.SCAFFOLDINGS_COUNT)
		{
			Debug.LogError("Scaffoldings Count Error");
			return;
		}

		// playerStates = new List<PlayerState>();

		// Debug.LogError("replySplitArr : " + replySplitArr.Length);
		for(int i=0; i<replySplitArr.Length; i++)
		{
			Debug.Log(replySplitArr[i]);
		}

		for(int i=0; i<SettingManager.PLAYER_COUNT; i++)
		{
			playerStates[i].RefreshState(i, replySplitArr[i+2]);
			playerStates[i].transform.position = GetPlayerScaffoldingLocatePosition(playerStates[i]);
		}

		// GameObject[] builds = GameObject.FindGameObjectsWithTag(SettingManager.STRING_BUILD);
		// for(int i=0; i<builds.Length; i++)
		// {
		// 	Destroy(builds[i]);
		// }

	}

	public int GetMyPlayerNumber()
	{
		return playerNumber;
	}

	//test
	public void TestAddMyPlayerNumber()
	{
		playerNumber++;
		if(playerNumber >= 4)
		{
			playerNumber = 0;
		}
	}

	public Vector3 GetPlayerScaffoldingLocatePosition(PlayerState playerState)
	{
		Vector3 scaffoldingPosition = scaffoldings[playerState.Location].transform.position;
		switch(playerState.PlayerNum)
		{
			case 0 :
				scaffoldingPosition.x += -10f;
				scaffoldingPosition.z += -10f;
				break;
			case 1 :
				scaffoldingPosition.x += -10f;
				scaffoldingPosition.z += 10f;
				break;
			case 2 :
				scaffoldingPosition.x += 10f;
				scaffoldingPosition.z += -10f;
				break;
			case 3 :
			default :
				scaffoldingPosition.x += 10f;
				scaffoldingPosition.z += 10f;
				break;
		}
		
		return scaffoldingPosition;
	}

	public Scaffolding GetScaffolding(int location)
	{
		return scaffoldings[location];
	}

	public bool IsSurviveOne()
	{
		int check = 0;
		for(int i=0; i<playerStates.Count; i++)
		{
			if(playerStates[i].IsEnd() == false)
			{
				check++;
			}
		}

		if(check == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
