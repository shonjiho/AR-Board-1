using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChargeMenu : MonoBehaviour {

	PlayerState playerState = null;
	List<Scaffolding> scaffoldings = null;
	bool[] checkArr = null;
	int currentIdx;
	int saveMoney;
	int costMoney;
	[SerializeField] UIButton confirmButton;
	[SerializeField] UIImageButton leftButton;
	[SerializeField] UIImageButton rightButton;
	[SerializeField] UILabel locationLabel;
	[SerializeField] UILabel costLabel;
	[SerializeField] UILabel moneyLabel;
	[SerializeField] UISprite hotelSprite;
	[SerializeField] UISprite buildingSprite;
	[SerializeField] UISprite motelSprite;
	[SerializeField] UICheckbox checkbox;
	public bool Show(int chargeCost)
	{
		Debug.LogError("show in!1 : " + chargeCost);
		playerState = StateManager.Instance.playerStates[StateManager.Instance.GetMyPlayerNumber()];
		scaffoldings = new List<Scaffolding>();
		int canChargeCost = playerState.Money;
		for(int i=0; i<SettingManager.SCAFFOLDINGS_COUNT; i++)
		{
			Scaffolding scaffolding = StateManager.Instance.GetScaffolding(i);
			if(scaffolding.OwnerPlayerNum == StateManager.Instance.GetMyPlayerNumber())
			{
				scaffoldings.Add(scaffolding);
				switch(scaffolding.BuildLevel)
				{
					case 1 :
						canChargeCost += SettingManager.INT_COST_MOTEL;
						break;
					case 2 :
						canChargeCost += SettingManager.INT_COST_BUILDING;
						break;
					case 3 :
						canChargeCost += SettingManager.INT_COST_HOTEL;
						break;
				}
			}
		}

		if(chargeCost > canChargeCost)
		{
			// UIManager.Instance.ShowGameOver();
			UIManager.Instance.HideChargeMenu();
			Debug.Log("Dead");
			
			GameManager.Instance.PlayerDead(playerState.PlayerNum);
			return false;
		}

		costMoney = chargeCost;
		saveMoney = playerState.Money;
		checkArr = new bool[scaffoldings.Count];
		for(int i=0; i<checkArr.Length; i++)
		{
			checkArr[i] = false;
		}
		costLabel.text = "" + chargeCost;

		currentIdx = 0;
		moneyLabel.text = "" + saveMoney;
		
		SetCheckBox(currentIdx);

		
		gameObject.SetActive(true);
		confirmButton.isEnabled = false;

		return true;
	}

	public void Hide()
	{
		gameObject.SetActive(false);
	}

	void SetCheckBox(int idx)
	{
		checkbox.isChecked = checkArr[idx];

		locationLabel.text = ""+scaffoldings[idx].ScaffoldingNum;

		

		motelSprite.gameObject.SetActive(false);
		buildingSprite.gameObject.SetActive(false);
		hotelSprite.gameObject.SetActive(false);
		switch(scaffoldings[idx].BuildLevel)
		{
			case 1 :
				motelSprite.gameObject.SetActive(true);
				break;
			case 2 :
				buildingSprite.gameObject.SetActive(true);
				break;
			case 3 :
				hotelSprite.gameObject.SetActive(true);
				break;
		}
	}

	public void ClickCheckbox()
	{
		checkArr[currentIdx] = !checkArr[currentIdx];
		if(checkArr[currentIdx])
		{
			switch(scaffoldings[currentIdx].BuildLevel)
			{
				case 1 :
					saveMoney += SettingManager.INT_COST_MOTEL;
					break;
				case 2 :
					saveMoney += SettingManager.INT_COST_BUILDING;
					break;
				case 3 :
					saveMoney += SettingManager.INT_COST_HOTEL;
					break;
			}
		}
		else
		{
			switch(scaffoldings[currentIdx].BuildLevel)
			{
				case 1 :
					saveMoney -= SettingManager.INT_COST_MOTEL;
					break;
				case 2 :
					saveMoney -= SettingManager.INT_COST_BUILDING;
					break;
				case 3 :
					saveMoney -= SettingManager.INT_COST_HOTEL;
					break;
			}
		}
		if(costMoney > saveMoney)
		{
			confirmButton.isEnabled = false;
		}
		else
		{
			confirmButton.isEnabled = true;
		}
		moneyLabel.text = "" + saveMoney;
		checkbox.isChecked = checkArr[currentIdx];
		// Debug.LogError("isChecked" + checkbox.isChecked);
	}

	public void ClickLeftButton()
	{
		if(currentIdx == 0)
		{
			return;
		}

		currentIdx--;
		SetCheckBox(currentIdx);
	}

	public void ClickRightButton()
	{
		if(currentIdx == checkArr.Length - 1)
		{
			return;
		}

		currentIdx++;
		SetCheckBox(currentIdx);
	}

	public void ClickConfirm()
	{
		if(costMoney > saveMoney)
			return;

		

		GameManager.Instance.CalculateCostSell(checkArr, scaffoldings, costMoney);
		UIManager.Instance.HideChargeMenu();
		
	}
}
