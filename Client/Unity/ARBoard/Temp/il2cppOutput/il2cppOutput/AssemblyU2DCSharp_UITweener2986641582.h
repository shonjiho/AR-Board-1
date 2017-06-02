#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITweener/OnFinished
struct OnFinished_t3688353092;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_IgnoreTimeScale1174060255.h"
#include "AssemblyU2DCSharp_UITweener_Method1694901606.h"
#include "AssemblyU2DCSharp_UITweener_Style4221671544.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITweener
struct  UITweener_t2986641582  : public IgnoreTimeScale_t1174060255
{
public:
	// UITweener/OnFinished UITweener::onFinished
	OnFinished_t3688353092 * ___onFinished_7;
	// UITweener/Method UITweener::method
	int32_t ___method_8;
	// UITweener/Style UITweener::style
	int32_t ___style_9;
	// UnityEngine.AnimationCurve UITweener::animationCurve
	AnimationCurve_t3306541151 * ___animationCurve_10;
	// System.Boolean UITweener::ignoreTimeScale
	bool ___ignoreTimeScale_11;
	// System.Single UITweener::delay
	float ___delay_12;
	// System.Single UITweener::duration
	float ___duration_13;
	// System.Boolean UITweener::steeperCurves
	bool ___steeperCurves_14;
	// System.Int32 UITweener::tweenGroup
	int32_t ___tweenGroup_15;
	// UnityEngine.GameObject UITweener::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_16;
	// System.String UITweener::callWhenFinished
	String_t* ___callWhenFinished_17;
	// System.Boolean UITweener::mStarted
	bool ___mStarted_18;
	// System.Single UITweener::mStartTime
	float ___mStartTime_19;
	// System.Single UITweener::mDuration
	float ___mDuration_20;
	// System.Single UITweener::mAmountPerDelta
	float ___mAmountPerDelta_21;
	// System.Single UITweener::mFactor
	float ___mFactor_22;

public:
	inline static int32_t get_offset_of_onFinished_7() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___onFinished_7)); }
	inline OnFinished_t3688353092 * get_onFinished_7() const { return ___onFinished_7; }
	inline OnFinished_t3688353092 ** get_address_of_onFinished_7() { return &___onFinished_7; }
	inline void set_onFinished_7(OnFinished_t3688353092 * value)
	{
		___onFinished_7 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_7, value);
	}

	inline static int32_t get_offset_of_method_8() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___method_8)); }
	inline int32_t get_method_8() const { return ___method_8; }
	inline int32_t* get_address_of_method_8() { return &___method_8; }
	inline void set_method_8(int32_t value)
	{
		___method_8 = value;
	}

	inline static int32_t get_offset_of_style_9() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___style_9)); }
	inline int32_t get_style_9() const { return ___style_9; }
	inline int32_t* get_address_of_style_9() { return &___style_9; }
	inline void set_style_9(int32_t value)
	{
		___style_9 = value;
	}

	inline static int32_t get_offset_of_animationCurve_10() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___animationCurve_10)); }
	inline AnimationCurve_t3306541151 * get_animationCurve_10() const { return ___animationCurve_10; }
	inline AnimationCurve_t3306541151 ** get_address_of_animationCurve_10() { return &___animationCurve_10; }
	inline void set_animationCurve_10(AnimationCurve_t3306541151 * value)
	{
		___animationCurve_10 = value;
		Il2CppCodeGenWriteBarrier(&___animationCurve_10, value);
	}

	inline static int32_t get_offset_of_ignoreTimeScale_11() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___ignoreTimeScale_11)); }
	inline bool get_ignoreTimeScale_11() const { return ___ignoreTimeScale_11; }
	inline bool* get_address_of_ignoreTimeScale_11() { return &___ignoreTimeScale_11; }
	inline void set_ignoreTimeScale_11(bool value)
	{
		___ignoreTimeScale_11 = value;
	}

	inline static int32_t get_offset_of_delay_12() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___delay_12)); }
	inline float get_delay_12() const { return ___delay_12; }
	inline float* get_address_of_delay_12() { return &___delay_12; }
	inline void set_delay_12(float value)
	{
		___delay_12 = value;
	}

	inline static int32_t get_offset_of_duration_13() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___duration_13)); }
	inline float get_duration_13() const { return ___duration_13; }
	inline float* get_address_of_duration_13() { return &___duration_13; }
	inline void set_duration_13(float value)
	{
		___duration_13 = value;
	}

	inline static int32_t get_offset_of_steeperCurves_14() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___steeperCurves_14)); }
	inline bool get_steeperCurves_14() const { return ___steeperCurves_14; }
	inline bool* get_address_of_steeperCurves_14() { return &___steeperCurves_14; }
	inline void set_steeperCurves_14(bool value)
	{
		___steeperCurves_14 = value;
	}

	inline static int32_t get_offset_of_tweenGroup_15() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___tweenGroup_15)); }
	inline int32_t get_tweenGroup_15() const { return ___tweenGroup_15; }
	inline int32_t* get_address_of_tweenGroup_15() { return &___tweenGroup_15; }
	inline void set_tweenGroup_15(int32_t value)
	{
		___tweenGroup_15 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_16() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___eventReceiver_16)); }
	inline GameObject_t1756533147 * get_eventReceiver_16() const { return ___eventReceiver_16; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_16() { return &___eventReceiver_16; }
	inline void set_eventReceiver_16(GameObject_t1756533147 * value)
	{
		___eventReceiver_16 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_16, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_17() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___callWhenFinished_17)); }
	inline String_t* get_callWhenFinished_17() const { return ___callWhenFinished_17; }
	inline String_t** get_address_of_callWhenFinished_17() { return &___callWhenFinished_17; }
	inline void set_callWhenFinished_17(String_t* value)
	{
		___callWhenFinished_17 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_17, value);
	}

	inline static int32_t get_offset_of_mStarted_18() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___mStarted_18)); }
	inline bool get_mStarted_18() const { return ___mStarted_18; }
	inline bool* get_address_of_mStarted_18() { return &___mStarted_18; }
	inline void set_mStarted_18(bool value)
	{
		___mStarted_18 = value;
	}

	inline static int32_t get_offset_of_mStartTime_19() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___mStartTime_19)); }
	inline float get_mStartTime_19() const { return ___mStartTime_19; }
	inline float* get_address_of_mStartTime_19() { return &___mStartTime_19; }
	inline void set_mStartTime_19(float value)
	{
		___mStartTime_19 = value;
	}

	inline static int32_t get_offset_of_mDuration_20() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___mDuration_20)); }
	inline float get_mDuration_20() const { return ___mDuration_20; }
	inline float* get_address_of_mDuration_20() { return &___mDuration_20; }
	inline void set_mDuration_20(float value)
	{
		___mDuration_20 = value;
	}

	inline static int32_t get_offset_of_mAmountPerDelta_21() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___mAmountPerDelta_21)); }
	inline float get_mAmountPerDelta_21() const { return ___mAmountPerDelta_21; }
	inline float* get_address_of_mAmountPerDelta_21() { return &___mAmountPerDelta_21; }
	inline void set_mAmountPerDelta_21(float value)
	{
		___mAmountPerDelta_21 = value;
	}

	inline static int32_t get_offset_of_mFactor_22() { return static_cast<int32_t>(offsetof(UITweener_t2986641582, ___mFactor_22)); }
	inline float get_mFactor_22() const { return ___mFactor_22; }
	inline float* get_address_of_mFactor_22() { return &___mFactor_22; }
	inline void set_mFactor_22(float value)
	{
		___mFactor_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
