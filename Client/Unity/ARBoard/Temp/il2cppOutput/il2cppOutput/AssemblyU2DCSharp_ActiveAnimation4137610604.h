#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ActiveAnimation/OnFinished
struct OnFinished_t1769996062;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t2068071072;

#include "AssemblyU2DCSharp_IgnoreTimeScale1174060255.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction1874854737.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ActiveAnimation
struct  ActiveAnimation_t4137610604  : public IgnoreTimeScale_t1174060255
{
public:
	// ActiveAnimation/OnFinished ActiveAnimation::onFinished
	OnFinished_t1769996062 * ___onFinished_7;
	// UnityEngine.GameObject ActiveAnimation::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_8;
	// System.String ActiveAnimation::callWhenFinished
	String_t* ___callWhenFinished_9;
	// UnityEngine.Animation ActiveAnimation::mAnim
	Animation_t2068071072 * ___mAnim_10;
	// AnimationOrTween.Direction ActiveAnimation::mLastDirection
	int32_t ___mLastDirection_11;
	// AnimationOrTween.Direction ActiveAnimation::mDisableDirection
	int32_t ___mDisableDirection_12;
	// System.Boolean ActiveAnimation::mNotify
	bool ___mNotify_13;

public:
	inline static int32_t get_offset_of_onFinished_7() { return static_cast<int32_t>(offsetof(ActiveAnimation_t4137610604, ___onFinished_7)); }
	inline OnFinished_t1769996062 * get_onFinished_7() const { return ___onFinished_7; }
	inline OnFinished_t1769996062 ** get_address_of_onFinished_7() { return &___onFinished_7; }
	inline void set_onFinished_7(OnFinished_t1769996062 * value)
	{
		___onFinished_7 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_7, value);
	}

	inline static int32_t get_offset_of_eventReceiver_8() { return static_cast<int32_t>(offsetof(ActiveAnimation_t4137610604, ___eventReceiver_8)); }
	inline GameObject_t1756533147 * get_eventReceiver_8() const { return ___eventReceiver_8; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_8() { return &___eventReceiver_8; }
	inline void set_eventReceiver_8(GameObject_t1756533147 * value)
	{
		___eventReceiver_8 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_8, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_9() { return static_cast<int32_t>(offsetof(ActiveAnimation_t4137610604, ___callWhenFinished_9)); }
	inline String_t* get_callWhenFinished_9() const { return ___callWhenFinished_9; }
	inline String_t** get_address_of_callWhenFinished_9() { return &___callWhenFinished_9; }
	inline void set_callWhenFinished_9(String_t* value)
	{
		___callWhenFinished_9 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_9, value);
	}

	inline static int32_t get_offset_of_mAnim_10() { return static_cast<int32_t>(offsetof(ActiveAnimation_t4137610604, ___mAnim_10)); }
	inline Animation_t2068071072 * get_mAnim_10() const { return ___mAnim_10; }
	inline Animation_t2068071072 ** get_address_of_mAnim_10() { return &___mAnim_10; }
	inline void set_mAnim_10(Animation_t2068071072 * value)
	{
		___mAnim_10 = value;
		Il2CppCodeGenWriteBarrier(&___mAnim_10, value);
	}

	inline static int32_t get_offset_of_mLastDirection_11() { return static_cast<int32_t>(offsetof(ActiveAnimation_t4137610604, ___mLastDirection_11)); }
	inline int32_t get_mLastDirection_11() const { return ___mLastDirection_11; }
	inline int32_t* get_address_of_mLastDirection_11() { return &___mLastDirection_11; }
	inline void set_mLastDirection_11(int32_t value)
	{
		___mLastDirection_11 = value;
	}

	inline static int32_t get_offset_of_mDisableDirection_12() { return static_cast<int32_t>(offsetof(ActiveAnimation_t4137610604, ___mDisableDirection_12)); }
	inline int32_t get_mDisableDirection_12() const { return ___mDisableDirection_12; }
	inline int32_t* get_address_of_mDisableDirection_12() { return &___mDisableDirection_12; }
	inline void set_mDisableDirection_12(int32_t value)
	{
		___mDisableDirection_12 = value;
	}

	inline static int32_t get_offset_of_mNotify_13() { return static_cast<int32_t>(offsetof(ActiveAnimation_t4137610604, ___mNotify_13)); }
	inline bool get_mNotify_13() const { return ___mNotify_13; }
	inline bool* get_address_of_mNotify_13() { return &___mNotify_13; }
	inline void set_mNotify_13(bool value)
	{
		___mNotify_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
