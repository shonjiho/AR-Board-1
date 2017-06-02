#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// StateManager
struct StateManager_t1536914048;
// System.Collections.Generic.List`1<PlayerState>
struct List_1_t1998902182;
// System.Collections.Generic.List`1<Scaffolding>
struct List_1_t583796322;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StateManager
struct  StateManager_t1536914048  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<PlayerState> StateManager::playerStates
	List_1_t1998902182 * ___playerStates_3;
	// System.Collections.Generic.List`1<Scaffolding> StateManager::scaffoldings
	List_1_t583796322 * ___scaffoldings_4;
	// System.Int32 StateManager::playerNumber
	int32_t ___playerNumber_5;
	// System.Int32 StateManager::PlayPeopleCnt
	int32_t ___PlayPeopleCnt_6;
	// System.Int32 StateManager::currentTurn
	int32_t ___currentTurn_7;

public:
	inline static int32_t get_offset_of_playerStates_3() { return static_cast<int32_t>(offsetof(StateManager_t1536914048, ___playerStates_3)); }
	inline List_1_t1998902182 * get_playerStates_3() const { return ___playerStates_3; }
	inline List_1_t1998902182 ** get_address_of_playerStates_3() { return &___playerStates_3; }
	inline void set_playerStates_3(List_1_t1998902182 * value)
	{
		___playerStates_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerStates_3, value);
	}

	inline static int32_t get_offset_of_scaffoldings_4() { return static_cast<int32_t>(offsetof(StateManager_t1536914048, ___scaffoldings_4)); }
	inline List_1_t583796322 * get_scaffoldings_4() const { return ___scaffoldings_4; }
	inline List_1_t583796322 ** get_address_of_scaffoldings_4() { return &___scaffoldings_4; }
	inline void set_scaffoldings_4(List_1_t583796322 * value)
	{
		___scaffoldings_4 = value;
		Il2CppCodeGenWriteBarrier(&___scaffoldings_4, value);
	}

	inline static int32_t get_offset_of_playerNumber_5() { return static_cast<int32_t>(offsetof(StateManager_t1536914048, ___playerNumber_5)); }
	inline int32_t get_playerNumber_5() const { return ___playerNumber_5; }
	inline int32_t* get_address_of_playerNumber_5() { return &___playerNumber_5; }
	inline void set_playerNumber_5(int32_t value)
	{
		___playerNumber_5 = value;
	}

	inline static int32_t get_offset_of_PlayPeopleCnt_6() { return static_cast<int32_t>(offsetof(StateManager_t1536914048, ___PlayPeopleCnt_6)); }
	inline int32_t get_PlayPeopleCnt_6() const { return ___PlayPeopleCnt_6; }
	inline int32_t* get_address_of_PlayPeopleCnt_6() { return &___PlayPeopleCnt_6; }
	inline void set_PlayPeopleCnt_6(int32_t value)
	{
		___PlayPeopleCnt_6 = value;
	}

	inline static int32_t get_offset_of_currentTurn_7() { return static_cast<int32_t>(offsetof(StateManager_t1536914048, ___currentTurn_7)); }
	inline int32_t get_currentTurn_7() const { return ___currentTurn_7; }
	inline int32_t* get_address_of_currentTurn_7() { return &___currentTurn_7; }
	inline void set_currentTurn_7(int32_t value)
	{
		___currentTurn_7 = value;
	}
};

struct StateManager_t1536914048_StaticFields
{
public:
	// StateManager StateManager::instance
	StateManager_t1536914048 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(StateManager_t1536914048_StaticFields, ___instance_2)); }
	inline StateManager_t1536914048 * get_instance_2() const { return ___instance_2; }
	inline StateManager_t1536914048 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(StateManager_t1536914048 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
