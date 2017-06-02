#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerState
struct  PlayerState_t2629781050  : public MonoBehaviour_t1158329972
{
public:
	// System.String PlayerState::playerName
	String_t* ___playerName_2;
	// System.Int32 PlayerState::playerNum
	int32_t ___playerNum_3;
	// System.Int32 PlayerState::money
	int32_t ___money_4;
	// System.Int32 PlayerState::location
	int32_t ___location_5;
	// System.Boolean PlayerState::end
	bool ___end_6;

public:
	inline static int32_t get_offset_of_playerName_2() { return static_cast<int32_t>(offsetof(PlayerState_t2629781050, ___playerName_2)); }
	inline String_t* get_playerName_2() const { return ___playerName_2; }
	inline String_t** get_address_of_playerName_2() { return &___playerName_2; }
	inline void set_playerName_2(String_t* value)
	{
		___playerName_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_2, value);
	}

	inline static int32_t get_offset_of_playerNum_3() { return static_cast<int32_t>(offsetof(PlayerState_t2629781050, ___playerNum_3)); }
	inline int32_t get_playerNum_3() const { return ___playerNum_3; }
	inline int32_t* get_address_of_playerNum_3() { return &___playerNum_3; }
	inline void set_playerNum_3(int32_t value)
	{
		___playerNum_3 = value;
	}

	inline static int32_t get_offset_of_money_4() { return static_cast<int32_t>(offsetof(PlayerState_t2629781050, ___money_4)); }
	inline int32_t get_money_4() const { return ___money_4; }
	inline int32_t* get_address_of_money_4() { return &___money_4; }
	inline void set_money_4(int32_t value)
	{
		___money_4 = value;
	}

	inline static int32_t get_offset_of_location_5() { return static_cast<int32_t>(offsetof(PlayerState_t2629781050, ___location_5)); }
	inline int32_t get_location_5() const { return ___location_5; }
	inline int32_t* get_address_of_location_5() { return &___location_5; }
	inline void set_location_5(int32_t value)
	{
		___location_5 = value;
	}

	inline static int32_t get_offset_of_end_6() { return static_cast<int32_t>(offsetof(PlayerState_t2629781050, ___end_6)); }
	inline bool get_end_6() const { return ___end_6; }
	inline bool* get_address_of_end_6() { return &___end_6; }
	inline void set_end_6(bool value)
	{
		___end_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
