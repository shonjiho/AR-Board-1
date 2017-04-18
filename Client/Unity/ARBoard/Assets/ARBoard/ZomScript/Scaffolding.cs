using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scaffolding : MonoBehaviour {
	int ownerPlayerNum = -1;
	public int OwnerPlayerNum
	{
		get
		{
			return ownerPlayerNum;
		}

		set
		{
			ownerPlayerNum = value;
		}
	}

	int buildLevel = 0;
	public int BuildLevel
	{
		get
		{
			return buildLevel;
		}

		set
		{
			buildLevel = value;
		}
	}

	public bool isMyScaffolding(int myUserNum)
	{
		if(ownerPlayerNum == -1 || ownerPlayerNum == myUserNum)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	
	// public bool isBuildHotel()
	// {
	// 	return buildHotel;
	// }

	// public bool isBuildBuilding()
	// {
	// 	return buildBuilding;
	// }

	// public bool isBuildMotel()
	// {
	// 	return buildMotel;
	// }

}
