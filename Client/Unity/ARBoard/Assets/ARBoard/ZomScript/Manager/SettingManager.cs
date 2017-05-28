using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingManager : MonoBehaviour {

#region GAME_SETTING_VALUE
	public const string SERVER_ADDRESS = "ws://125.130.223.88:8080/arboard/websocket/game";
	public const int PLAYER_COUNT = 4;
	public const int SCAFFOLDINGS_COUNT = 36;
	public const int START_MONEY = 3000;

#endregion
	
#region SERVER_MESSAGE_STRING
	public const string SM_GAME_START = "GameStart";
	public const string SM_END_GAME_START_WAIT_TIME = "1seconds.";
	public const string SM_GET_DICE_RESULT = "DiceResult";
#endregion






}
