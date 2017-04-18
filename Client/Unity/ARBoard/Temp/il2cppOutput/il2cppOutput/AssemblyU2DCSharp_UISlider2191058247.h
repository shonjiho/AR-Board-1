#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UISlider
struct UISlider_t2191058247;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UISlider/OnValueChange
struct OnValueChange_t1477572162;
// UnityEngine.BoxCollider
struct BoxCollider_t22920061;
// UIWidget
struct UIWidget_t1453041918;
// UISprite
struct UISprite_t603616735;

#include "AssemblyU2DCSharp_IgnoreTimeScale1174060255.h"
#include "AssemblyU2DCSharp_UISlider_Direction3287923381.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISlider
struct  UISlider_t2191058247  : public IgnoreTimeScale_t1174060255
{
public:
	// UnityEngine.Transform UISlider::foreground
	Transform_t3275118058 * ___foreground_8;
	// UnityEngine.Transform UISlider::thumb
	Transform_t3275118058 * ___thumb_9;
	// UISlider/Direction UISlider::direction
	int32_t ___direction_10;
	// UnityEngine.GameObject UISlider::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_11;
	// System.String UISlider::functionName
	String_t* ___functionName_12;
	// UISlider/OnValueChange UISlider::onValueChange
	OnValueChange_t1477572162 * ___onValueChange_13;
	// System.Int32 UISlider::numberOfSteps
	int32_t ___numberOfSteps_14;
	// System.Single UISlider::rawValue
	float ___rawValue_15;
	// UnityEngine.BoxCollider UISlider::mCol
	BoxCollider_t22920061 * ___mCol_16;
	// UnityEngine.Transform UISlider::mTrans
	Transform_t3275118058 * ___mTrans_17;
	// UnityEngine.Transform UISlider::mFGTrans
	Transform_t3275118058 * ___mFGTrans_18;
	// UIWidget UISlider::mFGWidget
	UIWidget_t1453041918 * ___mFGWidget_19;
	// UISprite UISlider::mFGFilled
	UISprite_t603616735 * ___mFGFilled_20;
	// System.Boolean UISlider::mInitDone
	bool ___mInitDone_21;
	// UnityEngine.Vector2 UISlider::mSize
	Vector2_t2243707579  ___mSize_22;
	// UnityEngine.Vector2 UISlider::mCenter
	Vector2_t2243707579  ___mCenter_23;

public:
	inline static int32_t get_offset_of_foreground_8() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___foreground_8)); }
	inline Transform_t3275118058 * get_foreground_8() const { return ___foreground_8; }
	inline Transform_t3275118058 ** get_address_of_foreground_8() { return &___foreground_8; }
	inline void set_foreground_8(Transform_t3275118058 * value)
	{
		___foreground_8 = value;
		Il2CppCodeGenWriteBarrier(&___foreground_8, value);
	}

	inline static int32_t get_offset_of_thumb_9() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___thumb_9)); }
	inline Transform_t3275118058 * get_thumb_9() const { return ___thumb_9; }
	inline Transform_t3275118058 ** get_address_of_thumb_9() { return &___thumb_9; }
	inline void set_thumb_9(Transform_t3275118058 * value)
	{
		___thumb_9 = value;
		Il2CppCodeGenWriteBarrier(&___thumb_9, value);
	}

	inline static int32_t get_offset_of_direction_10() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___direction_10)); }
	inline int32_t get_direction_10() const { return ___direction_10; }
	inline int32_t* get_address_of_direction_10() { return &___direction_10; }
	inline void set_direction_10(int32_t value)
	{
		___direction_10 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_11() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___eventReceiver_11)); }
	inline GameObject_t1756533147 * get_eventReceiver_11() const { return ___eventReceiver_11; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_11() { return &___eventReceiver_11; }
	inline void set_eventReceiver_11(GameObject_t1756533147 * value)
	{
		___eventReceiver_11 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_11, value);
	}

	inline static int32_t get_offset_of_functionName_12() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___functionName_12)); }
	inline String_t* get_functionName_12() const { return ___functionName_12; }
	inline String_t** get_address_of_functionName_12() { return &___functionName_12; }
	inline void set_functionName_12(String_t* value)
	{
		___functionName_12 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_12, value);
	}

	inline static int32_t get_offset_of_onValueChange_13() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___onValueChange_13)); }
	inline OnValueChange_t1477572162 * get_onValueChange_13() const { return ___onValueChange_13; }
	inline OnValueChange_t1477572162 ** get_address_of_onValueChange_13() { return &___onValueChange_13; }
	inline void set_onValueChange_13(OnValueChange_t1477572162 * value)
	{
		___onValueChange_13 = value;
		Il2CppCodeGenWriteBarrier(&___onValueChange_13, value);
	}

	inline static int32_t get_offset_of_numberOfSteps_14() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___numberOfSteps_14)); }
	inline int32_t get_numberOfSteps_14() const { return ___numberOfSteps_14; }
	inline int32_t* get_address_of_numberOfSteps_14() { return &___numberOfSteps_14; }
	inline void set_numberOfSteps_14(int32_t value)
	{
		___numberOfSteps_14 = value;
	}

	inline static int32_t get_offset_of_rawValue_15() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___rawValue_15)); }
	inline float get_rawValue_15() const { return ___rawValue_15; }
	inline float* get_address_of_rawValue_15() { return &___rawValue_15; }
	inline void set_rawValue_15(float value)
	{
		___rawValue_15 = value;
	}

	inline static int32_t get_offset_of_mCol_16() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___mCol_16)); }
	inline BoxCollider_t22920061 * get_mCol_16() const { return ___mCol_16; }
	inline BoxCollider_t22920061 ** get_address_of_mCol_16() { return &___mCol_16; }
	inline void set_mCol_16(BoxCollider_t22920061 * value)
	{
		___mCol_16 = value;
		Il2CppCodeGenWriteBarrier(&___mCol_16, value);
	}

	inline static int32_t get_offset_of_mTrans_17() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___mTrans_17)); }
	inline Transform_t3275118058 * get_mTrans_17() const { return ___mTrans_17; }
	inline Transform_t3275118058 ** get_address_of_mTrans_17() { return &___mTrans_17; }
	inline void set_mTrans_17(Transform_t3275118058 * value)
	{
		___mTrans_17 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_17, value);
	}

	inline static int32_t get_offset_of_mFGTrans_18() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___mFGTrans_18)); }
	inline Transform_t3275118058 * get_mFGTrans_18() const { return ___mFGTrans_18; }
	inline Transform_t3275118058 ** get_address_of_mFGTrans_18() { return &___mFGTrans_18; }
	inline void set_mFGTrans_18(Transform_t3275118058 * value)
	{
		___mFGTrans_18 = value;
		Il2CppCodeGenWriteBarrier(&___mFGTrans_18, value);
	}

	inline static int32_t get_offset_of_mFGWidget_19() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___mFGWidget_19)); }
	inline UIWidget_t1453041918 * get_mFGWidget_19() const { return ___mFGWidget_19; }
	inline UIWidget_t1453041918 ** get_address_of_mFGWidget_19() { return &___mFGWidget_19; }
	inline void set_mFGWidget_19(UIWidget_t1453041918 * value)
	{
		___mFGWidget_19 = value;
		Il2CppCodeGenWriteBarrier(&___mFGWidget_19, value);
	}

	inline static int32_t get_offset_of_mFGFilled_20() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___mFGFilled_20)); }
	inline UISprite_t603616735 * get_mFGFilled_20() const { return ___mFGFilled_20; }
	inline UISprite_t603616735 ** get_address_of_mFGFilled_20() { return &___mFGFilled_20; }
	inline void set_mFGFilled_20(UISprite_t603616735 * value)
	{
		___mFGFilled_20 = value;
		Il2CppCodeGenWriteBarrier(&___mFGFilled_20, value);
	}

	inline static int32_t get_offset_of_mInitDone_21() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___mInitDone_21)); }
	inline bool get_mInitDone_21() const { return ___mInitDone_21; }
	inline bool* get_address_of_mInitDone_21() { return &___mInitDone_21; }
	inline void set_mInitDone_21(bool value)
	{
		___mInitDone_21 = value;
	}

	inline static int32_t get_offset_of_mSize_22() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___mSize_22)); }
	inline Vector2_t2243707579  get_mSize_22() const { return ___mSize_22; }
	inline Vector2_t2243707579 * get_address_of_mSize_22() { return &___mSize_22; }
	inline void set_mSize_22(Vector2_t2243707579  value)
	{
		___mSize_22 = value;
	}

	inline static int32_t get_offset_of_mCenter_23() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___mCenter_23)); }
	inline Vector2_t2243707579  get_mCenter_23() const { return ___mCenter_23; }
	inline Vector2_t2243707579 * get_address_of_mCenter_23() { return &___mCenter_23; }
	inline void set_mCenter_23(Vector2_t2243707579  value)
	{
		___mCenter_23 = value;
	}
};

struct UISlider_t2191058247_StaticFields
{
public:
	// UISlider UISlider::current
	UISlider_t2191058247 * ___current_7;

public:
	inline static int32_t get_offset_of_current_7() { return static_cast<int32_t>(offsetof(UISlider_t2191058247_StaticFields, ___current_7)); }
	inline UISlider_t2191058247 * get_current_7() const { return ___current_7; }
	inline UISlider_t2191058247 ** get_address_of_current_7() { return &___current_7; }
	inline void set_current_7(UISlider_t2191058247 * value)
	{
		___current_7 = value;
		Il2CppCodeGenWriteBarrier(&___current_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
