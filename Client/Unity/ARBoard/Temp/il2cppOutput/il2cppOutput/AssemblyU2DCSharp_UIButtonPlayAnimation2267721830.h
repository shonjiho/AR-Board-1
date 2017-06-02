#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animation
struct Animation_t2068071072;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// ActiveAnimation/OnFinished
struct OnFinished_t1769996062;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Trigger3949147154.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction1874854737.h"
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition2151086590.h"
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition122284263.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButtonPlayAnimation
struct  UIButtonPlayAnimation_t2267721830  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animation UIButtonPlayAnimation::target
	Animation_t2068071072 * ___target_2;
	// System.String UIButtonPlayAnimation::clipName
	String_t* ___clipName_3;
	// AnimationOrTween.Trigger UIButtonPlayAnimation::trigger
	int32_t ___trigger_4;
	// AnimationOrTween.Direction UIButtonPlayAnimation::playDirection
	int32_t ___playDirection_5;
	// System.Boolean UIButtonPlayAnimation::resetOnPlay
	bool ___resetOnPlay_6;
	// System.Boolean UIButtonPlayAnimation::clearSelection
	bool ___clearSelection_7;
	// AnimationOrTween.EnableCondition UIButtonPlayAnimation::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_8;
	// AnimationOrTween.DisableCondition UIButtonPlayAnimation::disableWhenFinished
	int32_t ___disableWhenFinished_9;
	// UnityEngine.GameObject UIButtonPlayAnimation::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_10;
	// System.String UIButtonPlayAnimation::callWhenFinished
	String_t* ___callWhenFinished_11;
	// ActiveAnimation/OnFinished UIButtonPlayAnimation::onFinished
	OnFinished_t1769996062 * ___onFinished_12;
	// System.Boolean UIButtonPlayAnimation::mStarted
	bool ___mStarted_13;
	// System.Boolean UIButtonPlayAnimation::mHighlighted
	bool ___mHighlighted_14;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___target_2)); }
	inline Animation_t2068071072 * get_target_2() const { return ___target_2; }
	inline Animation_t2068071072 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Animation_t2068071072 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_clipName_3() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___clipName_3)); }
	inline String_t* get_clipName_3() const { return ___clipName_3; }
	inline String_t** get_address_of_clipName_3() { return &___clipName_3; }
	inline void set_clipName_3(String_t* value)
	{
		___clipName_3 = value;
		Il2CppCodeGenWriteBarrier(&___clipName_3, value);
	}

	inline static int32_t get_offset_of_trigger_4() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___trigger_4)); }
	inline int32_t get_trigger_4() const { return ___trigger_4; }
	inline int32_t* get_address_of_trigger_4() { return &___trigger_4; }
	inline void set_trigger_4(int32_t value)
	{
		___trigger_4 = value;
	}

	inline static int32_t get_offset_of_playDirection_5() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___playDirection_5)); }
	inline int32_t get_playDirection_5() const { return ___playDirection_5; }
	inline int32_t* get_address_of_playDirection_5() { return &___playDirection_5; }
	inline void set_playDirection_5(int32_t value)
	{
		___playDirection_5 = value;
	}

	inline static int32_t get_offset_of_resetOnPlay_6() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___resetOnPlay_6)); }
	inline bool get_resetOnPlay_6() const { return ___resetOnPlay_6; }
	inline bool* get_address_of_resetOnPlay_6() { return &___resetOnPlay_6; }
	inline void set_resetOnPlay_6(bool value)
	{
		___resetOnPlay_6 = value;
	}

	inline static int32_t get_offset_of_clearSelection_7() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___clearSelection_7)); }
	inline bool get_clearSelection_7() const { return ___clearSelection_7; }
	inline bool* get_address_of_clearSelection_7() { return &___clearSelection_7; }
	inline void set_clearSelection_7(bool value)
	{
		___clearSelection_7 = value;
	}

	inline static int32_t get_offset_of_ifDisabledOnPlay_8() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___ifDisabledOnPlay_8)); }
	inline int32_t get_ifDisabledOnPlay_8() const { return ___ifDisabledOnPlay_8; }
	inline int32_t* get_address_of_ifDisabledOnPlay_8() { return &___ifDisabledOnPlay_8; }
	inline void set_ifDisabledOnPlay_8(int32_t value)
	{
		___ifDisabledOnPlay_8 = value;
	}

	inline static int32_t get_offset_of_disableWhenFinished_9() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___disableWhenFinished_9)); }
	inline int32_t get_disableWhenFinished_9() const { return ___disableWhenFinished_9; }
	inline int32_t* get_address_of_disableWhenFinished_9() { return &___disableWhenFinished_9; }
	inline void set_disableWhenFinished_9(int32_t value)
	{
		___disableWhenFinished_9 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_10() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___eventReceiver_10)); }
	inline GameObject_t1756533147 * get_eventReceiver_10() const { return ___eventReceiver_10; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_10() { return &___eventReceiver_10; }
	inline void set_eventReceiver_10(GameObject_t1756533147 * value)
	{
		___eventReceiver_10 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_10, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_11() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___callWhenFinished_11)); }
	inline String_t* get_callWhenFinished_11() const { return ___callWhenFinished_11; }
	inline String_t** get_address_of_callWhenFinished_11() { return &___callWhenFinished_11; }
	inline void set_callWhenFinished_11(String_t* value)
	{
		___callWhenFinished_11 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_11, value);
	}

	inline static int32_t get_offset_of_onFinished_12() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___onFinished_12)); }
	inline OnFinished_t1769996062 * get_onFinished_12() const { return ___onFinished_12; }
	inline OnFinished_t1769996062 ** get_address_of_onFinished_12() { return &___onFinished_12; }
	inline void set_onFinished_12(OnFinished_t1769996062 * value)
	{
		___onFinished_12 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_12, value);
	}

	inline static int32_t get_offset_of_mStarted_13() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___mStarted_13)); }
	inline bool get_mStarted_13() const { return ___mStarted_13; }
	inline bool* get_address_of_mStarted_13() { return &___mStarted_13; }
	inline void set_mStarted_13(bool value)
	{
		___mStarted_13 = value;
	}

	inline static int32_t get_offset_of_mHighlighted_14() { return static_cast<int32_t>(offsetof(UIButtonPlayAnimation_t2267721830, ___mHighlighted_14)); }
	inline bool get_mHighlighted_14() const { return ___mHighlighted_14; }
	inline bool* get_address_of_mHighlighted_14() { return &___mHighlighted_14; }
	inline void set_mHighlighted_14(bool value)
	{
		___mHighlighted_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
