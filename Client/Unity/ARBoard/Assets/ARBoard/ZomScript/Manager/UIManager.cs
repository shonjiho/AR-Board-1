using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour {

	[SerializeField] GameObject uiRoot;
	[SerializeField] UILabel moneyLabel;
	[SerializeField] UIButton diceButton;
	[SerializeField] UILabel diceLabel;

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

	public void SetUI(List<UserState> userStates, int myNum)
	{
		moneyLabel.text = userStates[myNum].Money.ToString();
	}

	public UIButton GetDiceButton()
	{
		return diceButton;
	}

	public UILabel GetDiceLabel()
	{
		return diceLabel;
	}
}
