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
// System.String
struct String_t;
// SpringPosition/OnFinished
struct OnFinished_t3890054880;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_IgnoreTimeScale1174060255.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpringPosition
struct  SpringPosition_t434217086  : public IgnoreTimeScale_t1174060255
{
public:
	// UnityEngine.Vector3 SpringPosition::target
	Vector3_t2243707580  ___target_7;
	// System.Single SpringPosition::strength
	float ___strength_8;
	// System.Boolean SpringPosition::worldSpace
	bool ___worldSpace_9;
	// System.Boolean SpringPosition::ignoreTimeScale
	bool ___ignoreTimeScale_10;
	// UnityEngine.GameObject SpringPosition::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_11;
	// System.String SpringPosition::callWhenFinished
	String_t* ___callWhenFinished_12;
	// SpringPosition/OnFinished SpringPosition::onFinished
	OnFinished_t3890054880 * ___onFinished_13;
	// UnityEngine.Transform SpringPosition::mTrans
	Transform_t3275118058 * ___mTrans_14;
	// System.Single SpringPosition::mThreshold
	float ___mThreshold_15;

public:
	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___target_7)); }
	inline Vector3_t2243707580  get_target_7() const { return ___target_7; }
	inline Vector3_t2243707580 * get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(Vector3_t2243707580  value)
	{
		___target_7 = value;
	}

	inline static int32_t get_offset_of_strength_8() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___strength_8)); }
	inline float get_strength_8() const { return ___strength_8; }
	inline float* get_address_of_strength_8() { return &___strength_8; }
	inline void set_strength_8(float value)
	{
		___strength_8 = value;
	}

	inline static int32_t get_offset_of_worldSpace_9() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___worldSpace_9)); }
	inline bool get_worldSpace_9() const { return ___worldSpace_9; }
	inline bool* get_address_of_worldSpace_9() { return &___worldSpace_9; }
	inline void set_worldSpace_9(bool value)
	{
		___worldSpace_9 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_10() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___ignoreTimeScale_10)); }
	inline bool get_ignoreTimeScale_10() const { return ___ignoreTimeScale_10; }
	inline bool* get_address_of_ignoreTimeScale_10() { return &___ignoreTimeScale_10; }
	inline void set_ignoreTimeScale_10(bool value)
	{
		___ignoreTimeScale_10 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_11() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___eventReceiver_11)); }
	inline GameObject_t1756533147 * get_eventReceiver_11() const { return ___eventReceiver_11; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_11() { return &___eventReceiver_11; }
	inline void set_eventReceiver_11(GameObject_t1756533147 * value)
	{
		___eventReceiver_11 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_11, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_12() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___callWhenFinished_12)); }
	inline String_t* get_callWhenFinished_12() const { return ___callWhenFinished_12; }
	inline String_t** get_address_of_callWhenFinished_12() { return &___callWhenFinished_12; }
	inline void set_callWhenFinished_12(String_t* value)
	{
		___callWhenFinished_12 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_12, value);
	}

	inline static int32_t get_offset_of_onFinished_13() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___onFinished_13)); }
	inline OnFinished_t3890054880 * get_onFinished_13() const { return ___onFinished_13; }
	inline OnFinished_t3890054880 ** get_address_of_onFinished_13() { return &___onFinished_13; }
	inline void set_onFinished_13(OnFinished_t3890054880 * value)
	{
		___onFinished_13 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_13, value);
	}

	inline static int32_t get_offset_of_mTrans_14() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___mTrans_14)); }
	inline Transform_t3275118058 * get_mTrans_14() const { return ___mTrans_14; }
	inline Transform_t3275118058 ** get_address_of_mTrans_14() { return &___mTrans_14; }
	inline void set_mTrans_14(Transform_t3275118058 * value)
	{
		___mTrans_14 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_14, value);
	}

	inline static int32_t get_offset_of_mThreshold_15() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___mThreshold_15)); }
	inline float get_mThreshold_15() const { return ___mThreshold_15; }
	inline float* get_address_of_mThreshold_15() { return &___mThreshold_15; }
	inline void set_mThreshold_15(float value)
	{
		___mThreshold_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
