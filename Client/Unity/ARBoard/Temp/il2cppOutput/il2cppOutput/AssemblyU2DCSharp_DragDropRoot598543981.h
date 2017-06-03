#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragDropRoot
struct  DragDropRoot_t598543981  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct DragDropRoot_t598543981_StaticFields
{
public:
	// UnityEngine.Transform DragDropRoot::root
	Transform_t3275118058 * ___root_2;

public:
	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(DragDropRoot_t598543981_StaticFields, ___root_2)); }
	inline Transform_t3275118058 * get_root_2() const { return ___root_2; }
	inline Transform_t3275118058 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(Transform_t3275118058 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier(&___root_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
