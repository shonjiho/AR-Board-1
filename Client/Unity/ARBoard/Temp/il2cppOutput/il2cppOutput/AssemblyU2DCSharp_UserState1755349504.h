#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserState
struct  UserState_t1755349504  : public Il2CppObject
{
public:
	// System.Int32 UserState::money
	int32_t ___money_0;
	// System.Int32 UserState::location
	int32_t ___location_1;

public:
	inline static int32_t get_offset_of_money_0() { return static_cast<int32_t>(offsetof(UserState_t1755349504, ___money_0)); }
	inline int32_t get_money_0() const { return ___money_0; }
	inline int32_t* get_address_of_money_0() { return &___money_0; }
	inline void set_money_0(int32_t value)
	{
		___money_0 = value;
	}

	inline static int32_t get_offset_of_location_1() { return static_cast<int32_t>(offsetof(UserState_t1755349504, ___location_1)); }
	inline int32_t get_location_1() const { return ___location_1; }
	inline int32_t* get_address_of_location_1() { return &___location_1; }
	inline void set_location_1(int32_t value)
	{
		___location_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
