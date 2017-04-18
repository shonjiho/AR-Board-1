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

#include "AssemblyU2DCSharp_IgnoreTimeScale1174060255.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanWithMouse
struct  PanWithMouse_t776884274  : public IgnoreTimeScale_t1174060255
{
public:
	// UnityEngine.Vector2 PanWithMouse::degrees
	Vector2_t2243707579  ___degrees_7;
	// System.Single PanWithMouse::range
	float ___range_8;
	// UnityEngine.Transform PanWithMouse::mTrans
	Transform_t3275118058 * ___mTrans_9;
	// UnityEngine.Quaternion PanWithMouse::mStart
	Quaternion_t4030073918  ___mStart_10;
	// UnityEngine.Vector2 PanWithMouse::mRot
	Vector2_t2243707579  ___mRot_11;

public:
	inline static int32_t get_offset_of_degrees_7() { return static_cast<int32_t>(offsetof(PanWithMouse_t776884274, ___degrees_7)); }
	inline Vector2_t2243707579  get_degrees_7() const { return ___degrees_7; }
	inline Vector2_t2243707579 * get_address_of_degrees_7() { return &___degrees_7; }
	inline void set_degrees_7(Vector2_t2243707579  value)
	{
		___degrees_7 = value;
	}

	inline static int32_t get_offset_of_range_8() { return static_cast<int32_t>(offsetof(PanWithMouse_t776884274, ___range_8)); }
	inline float get_range_8() const { return ___range_8; }
	inline float* get_address_of_range_8() { return &___range_8; }
	inline void set_range_8(float value)
	{
		___range_8 = value;
	}

	inline static int32_t get_offset_of_mTrans_9() { return static_cast<int32_t>(offsetof(PanWithMouse_t776884274, ___mTrans_9)); }
	inline Transform_t3275118058 * get_mTrans_9() const { return ___mTrans_9; }
	inline Transform_t3275118058 ** get_address_of_mTrans_9() { return &___mTrans_9; }
	inline void set_mTrans_9(Transform_t3275118058 * value)
	{
		___mTrans_9 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_9, value);
	}

	inline static int32_t get_offset_of_mStart_10() { return static_cast<int32_t>(offsetof(PanWithMouse_t776884274, ___mStart_10)); }
	inline Quaternion_t4030073918  get_mStart_10() const { return ___mStart_10; }
	inline Quaternion_t4030073918 * get_address_of_mStart_10() { return &___mStart_10; }
	inline void set_mStart_10(Quaternion_t4030073918  value)
	{
		___mStart_10 = value;
	}

	inline static int32_t get_offset_of_mRot_11() { return static_cast<int32_t>(offsetof(PanWithMouse_t776884274, ___mRot_11)); }
	inline Vector2_t2243707579  get_mRot_11() const { return ___mRot_11; }
	inline Vector2_t2243707579 * get_address_of_mRot_11() { return &___mRot_11; }
	inline void set_mRot_11(Vector2_t2243707579  value)
	{
		___mRot_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
