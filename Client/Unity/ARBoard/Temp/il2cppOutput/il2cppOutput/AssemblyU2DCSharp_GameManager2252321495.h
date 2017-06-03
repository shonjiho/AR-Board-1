#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocket
struct WebSocket_t1213274227;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// StateManager
struct StateManager_t1536914048;
// UIManager
struct UIManager_t2519183485;
// GameManager
struct GameManager_t2252321495;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameManager_E_DiceState3739036110.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// WebSocket GameManager::w
	WebSocket_t1213274227 * ___w_2;
	// UnityEngine.GameObject GameManager::gameObjectLevel3
	GameObject_t1756533147 * ___gameObjectLevel3_3;
	// UnityEngine.GameObject GameManager::gameObjectLevel2
	GameObject_t1756533147 * ___gameObjectLevel2_4;
	// UnityEngine.GameObject GameManager::gameObjectLevel1
	GameObject_t1756533147 * ___gameObjectLevel1_5;
	// UnityEngine.GameObject GameManager::buyCheck
	GameObject_t1756533147 * ___buyCheck_6;
	// StateManager GameManager::stateManager
	StateManager_t1536914048 * ___stateManager_7;
	// UIManager GameManager::uiManager
	UIManager_t2519183485 * ___uiManager_8;
	// GameManager/E_DiceState GameManager::diceState
	int32_t ___diceState_10;

public:
	inline static int32_t get_offset_of_w_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___w_2)); }
	inline WebSocket_t1213274227 * get_w_2() const { return ___w_2; }
	inline WebSocket_t1213274227 ** get_address_of_w_2() { return &___w_2; }
	inline void set_w_2(WebSocket_t1213274227 * value)
	{
		___w_2 = value;
		Il2CppCodeGenWriteBarrier(&___w_2, value);
	}

	inline static int32_t get_offset_of_gameObjectLevel3_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameObjectLevel3_3)); }
	inline GameObject_t1756533147 * get_gameObjectLevel3_3() const { return ___gameObjectLevel3_3; }
	inline GameObject_t1756533147 ** get_address_of_gameObjectLevel3_3() { return &___gameObjectLevel3_3; }
	inline void set_gameObjectLevel3_3(GameObject_t1756533147 * value)
	{
		___gameObjectLevel3_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectLevel3_3, value);
	}

	inline static int32_t get_offset_of_gameObjectLevel2_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameObjectLevel2_4)); }
	inline GameObject_t1756533147 * get_gameObjectLevel2_4() const { return ___gameObjectLevel2_4; }
	inline GameObject_t1756533147 ** get_address_of_gameObjectLevel2_4() { return &___gameObjectLevel2_4; }
	inline void set_gameObjectLevel2_4(GameObject_t1756533147 * value)
	{
		___gameObjectLevel2_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectLevel2_4, value);
	}

	inline static int32_t get_offset_of_gameObjectLevel1_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameObjectLevel1_5)); }
	inline GameObject_t1756533147 * get_gameObjectLevel1_5() const { return ___gameObjectLevel1_5; }
	inline GameObject_t1756533147 ** get_address_of_gameObjectLevel1_5() { return &___gameObjectLevel1_5; }
	inline void set_gameObjectLevel1_5(GameObject_t1756533147 * value)
	{
		___gameObjectLevel1_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectLevel1_5, value);
	}

	inline static int32_t get_offset_of_buyCheck_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___buyCheck_6)); }
	inline GameObject_t1756533147 * get_buyCheck_6() const { return ___buyCheck_6; }
	inline GameObject_t1756533147 ** get_address_of_buyCheck_6() { return &___buyCheck_6; }
	inline void set_buyCheck_6(GameObject_t1756533147 * value)
	{
		___buyCheck_6 = value;
		Il2CppCodeGenWriteBarrier(&___buyCheck_6, value);
	}

	inline static int32_t get_offset_of_stateManager_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___stateManager_7)); }
	inline StateManager_t1536914048 * get_stateManager_7() const { return ___stateManager_7; }
	inline StateManager_t1536914048 ** get_address_of_stateManager_7() { return &___stateManager_7; }
	inline void set_stateManager_7(StateManager_t1536914048 * value)
	{
		___stateManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___stateManager_7, value);
	}

	inline static int32_t get_offset_of_uiManager_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___uiManager_8)); }
	inline UIManager_t2519183485 * get_uiManager_8() const { return ___uiManager_8; }
	inline UIManager_t2519183485 ** get_address_of_uiManager_8() { return &___uiManager_8; }
	inline void set_uiManager_8(UIManager_t2519183485 * value)
	{
		___uiManager_8 = value;
		Il2CppCodeGenWriteBarrier(&___uiManager_8, value);
	}

	inline static int32_t get_offset_of_diceState_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___diceState_10)); }
	inline int32_t get_diceState_10() const { return ___diceState_10; }
	inline int32_t* get_address_of_diceState_10() { return &___diceState_10; }
	inline void set_diceState_10(int32_t value)
	{
		___diceState_10 = value;
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t2252321495 * ___instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GameManager::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_11;

public:
	inline static int32_t get_offset_of_instance_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___instance_9)); }
	inline GameManager_t2252321495 * get_instance_9() const { return ___instance_9; }
	inline GameManager_t2252321495 ** get_address_of_instance_9() { return &___instance_9; }
	inline void set_instance_9(GameManager_t2252321495 * value)
	{
		___instance_9 = value;
		Il2CppCodeGenWriteBarrier(&___instance_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___U3CU3Ef__switchU24map0_11)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_11() const { return ___U3CU3Ef__switchU24map0_11; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_11() { return &___U3CU3Ef__switchU24map0_11; }
	inline void set_U3CU3Ef__switchU24map0_11(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
