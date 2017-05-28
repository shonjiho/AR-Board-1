using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerState : MonoBehaviour {

	string playerName;
	int playerNum;
	int money;
	int location;

	public void RefreshState(int playerNum, string playerName)
	{
		this.playerNum = playerNum;
		this.playerName = playerName;
		money = 3000;
		location = 0;
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
