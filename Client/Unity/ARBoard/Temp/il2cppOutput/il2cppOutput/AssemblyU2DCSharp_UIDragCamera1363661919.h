#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIDraggableCamera
struct UIDraggableCamera_t2562792962;
// UnityEngine.Component
struct Component_t3819376471;

#include "AssemblyU2DCSharp_IgnoreTimeScale1174060255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragCamera
struct  UIDragCamera_t1363661919  : public IgnoreTimeScale_t1174060255
{
public:
	// UIDraggableCamera UIDragCamera::draggableCamera
	UIDraggableCamera_t2562792962 * ___draggableCamera_7;
	// UnityEngine.Component UIDragCamera::target
	Component_t3819376471 * ___target_8;

public:
	inline static int32_t get_offset_of_draggableCamera_7() { return static_cast<int32_t>(offsetof(UIDragCamera_t1363661919, ___draggableCamera_7)); }
	inline UIDraggableCamera_t2562792962 * get_draggableCamera_7() const { return ___draggableCamera_7; }
	inline UIDraggableCamera_t2562792962 ** get_address_of_draggableCamera_7() { return &___draggableCamera_7; }
	inline void set_draggableCamera_7(UIDraggableCamera_t2562792962 * value)
	{
		___draggableCamera_7 = value;
		Il2CppCodeGenWriteBarrier(&___draggableCamera_7, value);
	}

	inline static int32_t get_offset_of_target_8() { return static_cast<int32_t>(offsetof(UIDragCamera_t1363661919, ___target_8)); }
	inline Component_t3819376471 * get_target_8() const { return ___target_8; }
	inline Component_t3819376471 ** get_address_of_target_8() { return &___target_8; }
	inline void set_target_8(Component_t3819376471 * value)
	{
		___target_8 = value;
		Il2CppCodeGenWriteBarrier(&___target_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
