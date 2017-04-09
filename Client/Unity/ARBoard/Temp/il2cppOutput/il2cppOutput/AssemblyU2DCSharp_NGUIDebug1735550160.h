#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// NGUIDebug
struct NGUIDebug_t1735550160;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NGUIDebug
struct  NGUIDebug_t1735550160  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct NGUIDebug_t1735550160_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> NGUIDebug::mLines
	List_1_t1398341365 * ___mLines_2;
	// NGUIDebug NGUIDebug::mInstance
	NGUIDebug_t1735550160 * ___mInstance_3;

public:
	inline static int32_t get_offset_of_mLines_2() { return static_cast<int32_t>(offsetof(NGUIDebug_t1735550160_StaticFields, ___mLines_2)); }
	inline List_1_t1398341365 * get_mLines_2() const { return ___mLines_2; }
	inline List_1_t1398341365 ** get_address_of_mLines_2() { return &___mLines_2; }
	inline void set_mLines_2(List_1_t1398341365 * value)
	{
		___mLines_2 = value;
		Il2CppCodeGenWriteBarrier(&___mLines_2, value);
	}

	inline static int32_t get_offset_of_mInstance_3() { return static_cast<int32_t>(offsetof(NGUIDebug_t1735550160_StaticFields, ___mInstance_3)); }
	inline NGUIDebug_t1735550160 * get_mInstance_3() const { return ___mInstance_3; }
	inline NGUIDebug_t1735550160 ** get_address_of_mInstance_3() { return &___mInstance_3; }
	inline void set_mInstance_3(NGUIDebug_t1735550160 * value)
	{
		___mInstance_3 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
