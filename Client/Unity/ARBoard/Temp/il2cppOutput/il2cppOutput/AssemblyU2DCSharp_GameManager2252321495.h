#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UserState>
struct List_1_t1124470636;
// System.Collections.Generic.List`1<Scaffolding>
struct List_1_t583796322;
// GameManager
struct GameManager_t2252321495;

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
	// System.Int32 GameManager::myUserNum
	int32_t ___myUserNum_2;
	// UnityEngine.GameObject GameManager::gameObjectLevel3
	GameObject_t1756533147 * ___gameObjectLevel3_5;
	// UnityEngine.GameObject GameManager::gameObjectLevel2
	GameObject_t1756533147 * ___gameObjectLevel2_6;
	// UnityEngine.GameObject GameManager::gameObjectLevel1
	GameObject_t1756533147 * ___gameObjectLevel1_7;
	// System.Collections.Generic.List`1<UserState> GameManager::userStates
	List_1_t1124470636 * ___userStates_8;
	// System.Collections.Generic.List`1<Scaffolding> GameManager::scaffoldings
	List_1_t583796322 * ___scaffoldings_9;
	// GameManager/E_DiceState GameManager::diceState
	int32_t ___diceState_11;

public:
	inline static int32_t get_offset_of_myUserNum_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___myUserNum_2)); }
	inline int32_t get_myUserNum_2() const { return ___myUserNum_2; }
	inline int32_t* get_address_of_myUserNum_2() { return &___myUserNum_2; }
	inline void set_myUserNum_2(int32_t value)
	{
		___myUserNum_2 = value;
	}

	inline static int32_t get_offset_of_gameObjectLevel3_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameObjectLevel3_5)); }
	inline GameObject_t1756533147 * get_gameObjectLevel3_5() const { return ___gameObjectLevel3_5; }
	inline GameObject_t1756533147 ** get_address_of_gameObjectLevel3_5() { return &___gameObjectLevel3_5; }
	inline void set_gameObjectLevel3_5(GameObject_t1756533147 * value)
	{
		___gameObjectLevel3_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectLevel3_5, value);
	}

	inline static int32_t get_offset_of_gameObjectLevel2_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameObjectLevel2_6)); }
	inline GameObject_t1756533147 * get_gameObjectLevel2_6() const { return ___gameObjectLevel2_6; }
	inline GameObject_t1756533147 ** get_address_of_gameObjectLevel2_6() { return &___gameObjectLevel2_6; }
	inline void set_gameObjectLevel2_6(GameObject_t1756533147 * value)
	{
		___gameObjectLevel2_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectLevel2_6, value);
	}

	inline static int32_t get_offset_of_gameObjectLevel1_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameObjectLevel1_7)); }
	inline GameObject_t1756533147 * get_gameObjectLevel1_7() const { return ___gameObjectLevel1_7; }
	inline GameObject_t1756533147 ** get_address_of_gameObjectLevel1_7() { return &___gameObjectLevel1_7; }
	inline void set_gameObjectLevel1_7(GameObject_t1756533147 * value)
	{
		___gameObjectLevel1_7 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectLevel1_7, value);
	}

	inline static int32_t get_offset_of_userStates_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___userStates_8)); }
	inline List_1_t1124470636 * get_userStates_8() const { return ___userStates_8; }
	inline List_1_t1124470636 ** get_address_of_userStates_8() { return &___userStates_8; }
	inline void set_userStates_8(List_1_t1124470636 * value)
	{
		___userStates_8 = value;
		Il2CppCodeGenWriteBarrier(&___userStates_8, value);
	}

	inline static int32_t get_offset_of_scaffoldings_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___scaffoldings_9)); }
	inline List_1_t583796322 * get_scaffoldings_9() const { return ___scaffoldings_9; }
	inline List_1_t583796322 ** get_address_of_scaffoldings_9() { return &___scaffoldings_9; }
	inline void set_scaffoldings_9(List_1_t583796322 * value)
	{
		___scaffoldings_9 = value;
		Il2CppCodeGenWriteBarrier(&___scaffoldings_9, value);
	}

	inline static int32_t get_offset_of_diceState_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___diceState_11)); }
	inline int32_t get_diceState_11() const { return ___diceState_11; }
	inline int32_t* get_address_of_diceState_11() { return &___diceState_11; }
	inline void set_diceState_11(int32_t value)
	{
		___diceState_11 = value;
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t2252321495 * ___instance_10;

public:
	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___instance_10)); }
	inline GameManager_t2252321495 * get_instance_10() const { return ___instance_10; }
	inline GameManager_t2252321495 ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(GameManager_t2252321495 * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier(&___instance_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
