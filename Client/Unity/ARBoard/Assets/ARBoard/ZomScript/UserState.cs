using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserState {

	// int userNum;
	int money;
	int location;

	public UserState()
	{
		money = 3000;
		location = 0;
	}

	// public int UserNum
	// {
	// 	get
	// 	{
	// 		return userNum;
	// 	}

	// 	set
	// 	{
	// 		userNum = value;
	// 	}
	// }

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


}
