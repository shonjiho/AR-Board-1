using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour {

	[SerializeField] GameObject uiRoot;
	// [SerializeField] UILabel moneyLabel;
	[SerializeField] UIButton diceButton;
	[SerializeField] List<GameObject> playerStateWindows;
	[SerializeField] UILabel diceLabel;
	[SerializeField] GameObject buildMenu;

	static UIManager instance;
	const string STRING_NAME_LABEL = "NameLabel";
	const string STRING_MONEY_LABEL = "MoneyLabel";
	const string STRING_HOTEL = "Hotel";
	const string STRING_BUILDING = "Building";
	const string STRING_MOTEL = "Motel";

	public static UIManager Instance
	{
		get
		{
			return instance;
		}
	}


	float fadeAlphaValue = 0.05f;
	// float loopCount = 50;



	static void Load(GameObject gameObject)
	{
		instance = gameObject.GetComponent<UIManager>();
	}

	public void Init()
	{
		UIManager.Load(gameObject);
	}

	void ShowDrawImage()
	{
		if(uiRoot == null)
		{
			Debug.LogError("UIManager have not UIRoot");
			return;
		}

		UISprite drawImageUISprite = uiRoot.transform.FindChild("CenterAnchor").FindChild("DrawImage").GetComponent<UISprite>();

		if(uiRoot.transform.FindChild("CenterAnchor").FindChild("DrawImage").gameObject.activeSelf)
		{
			StartCoroutine(StartFadeOutDrawImage(drawImageUISprite));
		}
		else
		{
			StartCoroutine(StartFadeInDrawImage(drawImageUISprite));
		}
	}

	IEnumerator StartFadeInDrawImage(UISprite uiSprite)
	{
		uiSprite.color = new Color(0, 0, 0, 0);

		uiSprite.gameObject.SetActive(true);

		while(uiSprite.color.a < 1)
		{
			yield return new WaitForSeconds(0.0005f);
			uiSprite.color = new Color(0, 0, 0, uiSprite.color.a + fadeAlphaValue);

		}
	}

	IEnumerator StartFadeOutDrawImage(UISprite uiSprite)
	{
		uiSprite.color = new Color(0, 0, 0, 1);

		while(uiSprite.color.a > 0)
		{
			yield return new WaitForSeconds(0.0005f);
			uiSprite.color = new Color(0, 0, 0, uiSprite.color.a - fadeAlphaValue);

		}

		uiSprite.gameObject.SetActive(false);
	}


	//
	//	게임
	//

	public void RefreshUI()
	{
		List<PlayerState> playerStates = StateManager.Instance.playerStates;

		for(int i=0; i<playerStateWindows.Count; i++)
		{
			UILabel nameLabel = playerStateWindows[i].transform.FindChild(STRING_NAME_LABEL).GetComponent<UILabel>();
			// Debug.LogError(playerStates[i].PlayerName);
			nameLabel.text = playerStates[i].PlayerName;
			UILabel moneyLabel = playerStateWindows[i].transform.FindChild(STRING_MONEY_LABEL).GetComponent<UILabel>();
			// Debug.LogError(playerStates[i].Money);
			moneyLabel.text = "" + playerStates[i].Money;
		}

	}

	public UIButton GetDiceButton()
	{
		return diceButton;
	}

	public UILabel GetDiceLabel()
	{
		return diceLabel;
	}

	public void ShowBuildMenu(Scaffolding scaffolding)
	{
		if(buildMenu == null)
		{
			Debug.LogError("buildMenu is null!!");
			return;
		}
		GameObject hotelButton = buildMenu.transform.FindChild(STRING_HOTEL).gameObject;
		GameObject buildingButton = buildMenu.transform.FindChild(STRING_BUILDING).gameObject;
		GameObject motelButton = buildMenu.transform.FindChild(STRING_MOTEL).gameObject;

		if(scaffolding.BuildLevel < 3)
		{
			hotelButton.gameObject.SetActive(true);
		}
		else
		{
			hotelButton.gameObject.SetActive(false);
		}

		if(scaffolding.BuildLevel < 2)
		{
			buildingButton.gameObject.SetActive(true);
		}
		else
		{
			buildingButton.gameObject.SetActive(false);
		}

		if(scaffolding.BuildLevel < 1)
		{
			motelButton.gameObject.SetActive(true);
		}
		else
		{
			motelButton.gameObject.SetActive(false);
		}

		buildMenu.SetActive(true);
	}

	public void HideBuildMenu()
	{
		buildMenu.SetActive(false);
	}
}
