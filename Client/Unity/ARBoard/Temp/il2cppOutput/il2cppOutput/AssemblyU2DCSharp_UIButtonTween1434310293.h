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
// UITweener/OnFinished
struct OnFinished_t3688353092;
// UITweener[]
struct UITweenerU5BU5D_t2857044187;

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

// UIButtonTween
struct  UIButtonTween_t1434310293  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UIButtonTween::tweenTarget
	GameObject_t1756533147 * ___tweenTarget_2;
	// System.Int32 UIButtonTween::tweenGroup
	int32_t ___tweenGroup_3;
	// AnimationOrTween.Trigger UIButtonTween::trigger
	int32_t ___trigger_4;
	// AnimationOrTween.Direction UIButtonTween::playDirection
	int32_t ___playDirection_5;
	// System.Boolean UIButtonTween::resetOnPlay
	bool ___resetOnPlay_6;
	// AnimationOrTween.EnableCondition UIButtonTween::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_7;
	// AnimationOrTween.DisableCondition UIButtonTween::disableWhenFinished
	int32_t ___disableWhenFinished_8;
	// System.Boolean UIButtonTween::includeChildren
	bool ___includeChildren_9;
	// UnityEngine.GameObject UIButtonTween::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_10;
	// System.String UIButtonTween::callWhenFinished
	String_t* ___callWhenFinished_11;
	// UITweener/OnFinished UIButtonTween::onFinished
	OnFinished_t3688353092 * ___onFinished_12;
	// UITweener[] UIButtonTween::mTweens
	UITweenerU5BU5D_t2857044187* ___mTweens_13;
	// System.Boolean UIButtonTween::mStarted
	bool ___mStarted_14;
	// System.Boolean UIButtonTween::mHighlighted
	bool ___mHighlighted_15;

public:
	inline static int32_t get_offset_of_tweenTarget_2() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___tweenTarget_2)); }
	inline GameObject_t1756533147 * get_tweenTarget_2() const { return ___tweenTarget_2; }
	inline GameObject_t1756533147 ** get_address_of_tweenTarget_2() { return &___tweenTarget_2; }
	inline void set_tweenTarget_2(GameObject_t1756533147 * value)
	{
		___tweenTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___tweenTarget_2, value);
	}

	inline static int32_t get_offset_of_tweenGroup_3() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___tweenGroup_3)); }
	inline int32_t get_tweenGroup_3() const { return ___tweenGroup_3; }
	inline int32_t* get_address_of_tweenGroup_3() { return &___tweenGroup_3; }
	inline void set_tweenGroup_3(int32_t value)
	{
		___tweenGroup_3 = value;
	}

	inline static int32_t get_offset_of_trigger_4() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___trigger_4)); }
	inline int32_t get_trigger_4() const { return ___trigger_4; }
	inline int32_t* get_address_of_trigger_4() { return &___trigger_4; }
	inline void set_trigger_4(int32_t value)
	{
		___trigger_4 = value;
	}

	inline static int32_t get_offset_of_playDirection_5() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___playDirection_5)); }
	inline int32_t get_playDirection_5() const { return ___playDirection_5; }
	inline int32_t* get_address_of_playDirection_5() { return &___playDirection_5; }
	inline void set_playDirection_5(int32_t value)
	{
		___playDirection_5 = value;
	}

	inline static int32_t get_offset_of_resetOnPlay_6() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___resetOnPlay_6)); }
	inline bool get_resetOnPlay_6() const { return ___resetOnPlay_6; }
	inline bool* get_address_of_resetOnPlay_6() { return &___resetOnPlay_6; }
	inline void set_resetOnPlay_6(bool value)
	{
		___resetOnPlay_6 = value;
	}

	inline static int32_t get_offset_of_ifDisabledOnPlay_7() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___ifDisabledOnPlay_7)); }
	inline int32_t get_ifDisabledOnPlay_7() const { return ___ifDisabledOnPlay_7; }
	inline int32_t* get_address_of_ifDisabledOnPlay_7() { return &___ifDisabledOnPlay_7; }
	inline void set_ifDisabledOnPlay_7(int32_t value)
	{
		___ifDisabledOnPlay_7 = value;
	}

	inline static int32_t get_offset_of_disableWhenFinished_8() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___disableWhenFinished_8)); }
	inline int32_t get_disableWhenFinished_8() const { return ___disableWhenFinished_8; }
	inline int32_t* get_address_of_disableWhenFinished_8() { return &___disableWhenFinished_8; }
	inline void set_disableWhenFinished_8(int32_t value)
	{
		___disableWhenFinished_8 = value;
	}

	inline static int32_t get_offset_of_includeChildren_9() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___includeChildren_9)); }
	inline bool get_includeChildren_9() const { return ___includeChildren_9; }
	inline bool* get_address_of_includeChildren_9() { return &___includeChildren_9; }
	inline void set_includeChildren_9(bool value)
	{
		___includeChildren_9 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_10() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___eventReceiver_10)); }
	inline GameObject_t1756533147 * get_eventReceiver_10() const { return ___eventReceiver_10; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_10() { return &___eventReceiver_10; }
	inline void set_eventReceiver_10(GameObject_t1756533147 * value)
	{
		___eventReceiver_10 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_10, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_11() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___callWhenFinished_11)); }
	inline String_t* get_callWhenFinished_11() const { return ___callWhenFinished_11; }
	inline String_t** get_address_of_callWhenFinished_11() { return &___callWhenFinished_11; }
	inline void set_callWhenFinished_11(String_t* value)
	{
		___callWhenFinished_11 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_11, value);
	}

	inline static int32_t get_offset_of_onFinished_12() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___onFinished_12)); }
	inline OnFinished_t3688353092 * get_onFinished_12() const { return ___onFinished_12; }
	inline OnFinished_t3688353092 ** get_address_of_onFinished_12() { return &___onFinished_12; }
	inline void set_onFinished_12(OnFinished_t3688353092 * value)
	{
		___onFinished_12 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_12, value);
	}

	inline static int32_t get_offset_of_mTweens_13() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___mTweens_13)); }
	inline UITweenerU5BU5D_t2857044187* get_mTweens_13() const { return ___mTweens_13; }
	inline UITweenerU5BU5D_t2857044187** get_address_of_mTweens_13() { return &___mTweens_13; }
	inline void set_mTweens_13(UITweenerU5BU5D_t2857044187* value)
	{
		___mTweens_13 = value;
		Il2CppCodeGenWriteBarrier(&___mTweens_13, value);
	}

	inline static int32_t get_offset_of_mStarted_14() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___mStarted_14)); }
	inline bool get_mStarted_14() const { return ___mStarted_14; }
	inline bool* get_address_of_mStarted_14() { return &___mStarted_14; }
	inline void set_mStarted_14(bool value)
	{
		___mStarted_14 = value;
	}

	inline static int32_t get_offset_of_mHighlighted_15() { return static_cast<int32_t>(offsetof(UIButtonTween_t1434310293, ___mHighlighted_15)); }
	inline bool get_mHighlighted_15() const { return ___mHighlighted_15; }
	inline bool* get_address_of_mHighlighted_15() { return &___mHighlighted_15; }
	inline void set_mHighlighted_15(bool value)
	{
		___mHighlighted_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
