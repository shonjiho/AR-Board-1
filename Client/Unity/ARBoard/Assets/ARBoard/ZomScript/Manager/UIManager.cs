using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour {

	[SerializeField] GameObject uiRoot;
	[SerializeField] UILabel moneyLabel;
	[SerializeField] UIButton diceButton;
	[SerializeField] UILabel diceLabel;
	[SerializeField] GameObject buildMenu;

	static UIManager instance;

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

	public void SetUI(UserState userState)
	{
		moneyLabel.text = userState.Money.ToString();
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
		UIImageButton level3Button = buildMenu.transform.FindChild("Level3Button").GetComponent<UIImageButton>();
		UIImageButton level2Button = buildMenu.transform.FindChild("Level2Button").GetComponent<UIImageButton>();
		UIImageButton level1Button = buildMenu.transform.FindChild("Level1Button").GetComponent<UIImageButton>();

		if(scaffolding.BuildLevel < 3)
		{
			level3Button.isEnabled = true;
		}
		else
		{
			level3Button.isEnabled = false;
		}

		if(scaffolding.BuildLevel < 2)
		{
			level2Button.isEnabled = true;
		}
		else
		{
			level2Button.isEnabled = false;
		}

		if(scaffolding.BuildLevel < 1)
		{
			level1Button.isEnabled = true;
		}
		else
		{
			level1Button.isEnabled = false;
		}

		buildMenu.SetActive(true);
	}

	public void HideBuildMenu()
	{
		buildMenu.SetActive(false);
	}
}
