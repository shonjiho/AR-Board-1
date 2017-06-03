using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingManager : MonoBehaviour {

#region GAME_SETTING_VALUE
	// public const string SERVER_ADDRESS = "ws://125.130.223.88:8080/arboard/game/testReady/2";
	public const string SERVER_ADDRESS = "ws://125.130.223.88:8080/arboard/websocket/game";
	// public const string SERVER_ADDRESS = "ws://192.168.43.65:8080/arboard/websocket/game";
	public const string STRING_BUILD = "Build";
	public const string STRING_BUYCHECK = "BuyCheck";
	public const int MAX_PLAYER_COUNT = 4;
	public const int SCAFFOLDINGS_COUNT = 36;
	public const int START_MONEY = 1000;
	public const int INT_COST_HOTEL = 500;
	public const int INT_COST_BUILDING = 300;
	public const int INT_COST_MOTEL = 100;
	public const string STRING_SEND_BUILD_NULL = "NULL";
	static Color colorPlayer_0 = new Color(196/255f, 48/255f, 160/255f);
	static Color colorPlayer_1 = new Color(196/255f, 171/255f, 48/255f);
	static Color colorPlayer_2 = new Color(48/255f, 168/255f, 196/255f);
	static Color colorPlayer_3 = new Color(196/255f, 75/255f, 48/255f);

	public static Color GetColor(int playerNum)
	{
		switch(playerNum)
		{
			case 0 :
				return colorPlayer_0;
			case 1 :
				return colorPlayer_1;
			case 2 :
				return colorPlayer_2;
			case 3 : 
			default :
				return colorPlayer_3;
		}

		// case 0 :
		// 		return new Color(196, 48, 160);
		// 	case 1 :
		// 		return new Color(196, 171, 48);
		// 	case 2 :
		// 		return new Color(48, 168, 196);
		// 	case 3 : 
		// 	default :
		// 		return new Color(196, 75, 48);
	}

#endregion
	
#region SERVER_MESSAGE_STRING
	public const string SM_GAME_START = "GameStart";
	// public const string SM_END_GAME_START_WAIT_TIME = "1seconds.";
	public const string SM_DICE_RESULT = "DiceResult";
	public const string SM_BUILD_OBJECT = "BuildObject";
	public const string SM_END_TURN = "EndTurn";
	public const string SM_CHARGE = "Charge";
	public const string SM_PLAYER_DEAD = "PlayerDead";
	public const string SM_GAME_END = "GameEnd";

#endregion






}
