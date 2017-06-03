#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t1021602117;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateManager/DestroyEntry
struct  DestroyEntry_t4282624417  : public Il2CppObject
{
public:
	// UnityEngine.Object UpdateManager/DestroyEntry::obj
	Object_t1021602117 * ___obj_0;
	// System.Single UpdateManager/DestroyEntry::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(DestroyEntry_t4282624417, ___obj_0)); }
	inline Object_t1021602117 * get_obj_0() const { return ___obj_0; }
	inline Object_t1021602117 ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(Object_t1021602117 * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier(&___obj_0, value);
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(DestroyEntry_t4282624417, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
