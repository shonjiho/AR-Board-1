using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scaffolding : MonoBehaviour {

	int scaffoldingNum = -1;
	public int ScaffoldingNum
	{
		get
		{
			return scaffoldingNum;
		}

		set
		{
			// Debug.Log("Owner : " +value);
			scaffoldingNum = value;
		}
	}
	int ownerPlayerNum = -1;
	public int OwnerPlayerNum
	{
		get
		{
			return ownerPlayerNum;
		}

		set
		{
			// Debug.Log("Owner : " +value);
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

	public void RefreshState(int scaffoldingNum)
	{
		this.scaffoldingNum = scaffoldingNum;
		this.ownerPlayerNum = -1;
		buildLevel = 0;
		Transform tfBuild = transform.FindChild(SettingManager.STRING_BUILD);
		if(tfBuild != null)
			Destroy(tfBuild.gameObject);
		Transform tfBuyCheck = transform.FindChild(SettingManager.STRING_BUYCHECK);
		if(tfBuyCheck != null)
			Destroy(tfBuyCheck.gameObject);
	}

	public bool isMyScaffolding()
	{
		// Debug.LogError("my : " + StateManager.Instance.GetMyPlayerNumber() + " scaffoding : " + ownerPlayerNum);
		if(ownerPlayerNum == -1 || ownerPlayerNum == StateManager.Instance.GetMyPlayerNumber())
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
