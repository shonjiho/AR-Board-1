using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerState : MonoBehaviour {

	string playerName;
	int playerNum;
	int money;
	int location;
	bool end = false;

	public void RefreshState(int playerNum, string playerName)
	{
		this.playerNum = playerNum;
		this.playerName = playerName;
		end = false;
		money = SettingManager.START_MONEY;
		location = 0;
	}

	public bool IsEnd()
	{
		return end;
	}

	public void Dead()
	{
		end = true;

		for(int i=0; i<SettingManager.SCAFFOLDINGS_COUNT; i++)
		{
			Scaffolding scaffolding = StateManager.Instance.GetScaffolding(i);
			if(scaffolding.OwnerPlayerNum == playerNum)
			{
				scaffolding.RefreshState(i);
			}
		}

		UIManager.Instance.RefreshUI();
	}
	
	public int Money
	{
		get
		{
			return money;
		}

		set
		{
			money = value;
		}
	}

	public int Location
	{
		get
		{
			return location;
		}

		set
		{
			location = value;
		}
	}

	public int PlayerNum
	{
		get
		{
			return playerNum;
		}

		set
		{
			playerNum = value;
		}
	}

	public string PlayerName
	{
		get
		{
			return playerName;
		}

		set
		{
			playerName = value;
		}
	}

}
