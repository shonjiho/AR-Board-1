#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UICheckbox
struct UICheckbox_t3747273709;
// UISprite
struct UISprite_t603616735;
// UnityEngine.Animation
struct Animation_t2068071072;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UICheckbox/OnStateChange
struct OnStateChange_t1331483646;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICheckbox
struct  UICheckbox_t3747273709  : public MonoBehaviour_t1158329972
{
public:
	// UISprite UICheckbox::checkSprite
	UISprite_t603616735 * ___checkSprite_3;
	// UnityEngine.Animation UICheckbox::checkAnimation
	Animation_t2068071072 * ___checkAnimation_4;
	// System.Boolean UICheckbox::instantTween
	bool ___instantTween_5;
	// System.Boolean UICheckbox::startsChecked
	bool ___startsChecked_6;
	// UnityEngine.Transform UICheckbox::radioButtonRoot
	Transform_t3275118058 * ___radioButtonRoot_7;
	// System.Boolean UICheckbox::optionCanBeNone
	bool ___optionCanBeNone_8;
	// UnityEngine.GameObject UICheckbox::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_9;
	// System.String UICheckbox::functionName
	String_t* ___functionName_10;
	// UICheckbox/OnStateChange UICheckbox::onStateChange
	OnStateChange_t1331483646 * ___onStateChange_11;
	// System.Boolean UICheckbox::option
	bool ___option_12;
	// System.Boolean UICheckbox::mChecked
	bool ___mChecked_13;
	// System.Boolean UICheckbox::mStarted
	bool ___mStarted_14;
	// UnityEngine.Transform UICheckbox::mTrans
	Transform_t3275118058 * ___mTrans_15;

public:
	inline static int32_t get_offset_of_checkSprite_3() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___checkSprite_3)); }
	inline UISprite_t603616735 * get_checkSprite_3() const { return ___checkSprite_3; }
	inline UISprite_t603616735 ** get_address_of_checkSprite_3() { return &___checkSprite_3; }
	inline void set_checkSprite_3(UISprite_t603616735 * value)
	{
		___checkSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___checkSprite_3, value);
	}

	inline static int32_t get_offset_of_checkAnimation_4() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___checkAnimation_4)); }
	inline Animation_t2068071072 * get_checkAnimation_4() const { return ___checkAnimation_4; }
	inline Animation_t2068071072 ** get_address_of_checkAnimation_4() { return &___checkAnimation_4; }
	inline void set_checkAnimation_4(Animation_t2068071072 * value)
	{
		___checkAnimation_4 = value;
		Il2CppCodeGenWriteBarrier(&___checkAnimation_4, value);
	}

	inline static int32_t get_offset_of_instantTween_5() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___instantTween_5)); }
	inline bool get_instantTween_5() const { return ___instantTween_5; }
	inline bool* get_address_of_instantTween_5() { return &___instantTween_5; }
	inline void set_instantTween_5(bool value)
	{
		___instantTween_5 = value;
	}

	inline static int32_t get_offset_of_startsChecked_6() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___startsChecked_6)); }
	inline bool get_startsChecked_6() const { return ___startsChecked_6; }
	inline bool* get_address_of_startsChecked_6() { return &___startsChecked_6; }
	inline void set_startsChecked_6(bool value)
	{
		___startsChecked_6 = value;
	}

	inline static int32_t get_offset_of_radioButtonRoot_7() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___radioButtonRoot_7)); }
	inline Transform_t3275118058 * get_radioButtonRoot_7() const { return ___radioButtonRoot_7; }
	inline Transform_t3275118058 ** get_address_of_radioButtonRoot_7() { return &___radioButtonRoot_7; }
	inline void set_radioButtonRoot_7(Transform_t3275118058 * value)
	{
		___radioButtonRoot_7 = value;
		Il2CppCodeGenWriteBarrier(&___radioButtonRoot_7, value);
	}

	inline static int32_t get_offset_of_optionCanBeNone_8() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___optionCanBeNone_8)); }
	inline bool get_optionCanBeNone_8() const { return ___optionCanBeNone_8; }
	inline bool* get_address_of_optionCanBeNone_8() { return &___optionCanBeNone_8; }
	inline void set_optionCanBeNone_8(bool value)
	{
		___optionCanBeNone_8 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_9() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___eventReceiver_9)); }
	inline GameObject_t1756533147 * get_eventReceiver_9() const { return ___eventReceiver_9; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_9() { return &___eventReceiver_9; }
	inline void set_eventReceiver_9(GameObject_t1756533147 * value)
	{
		___eventReceiver_9 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_9, value);
	}

	inline static int32_t get_offset_of_functionName_10() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___functionName_10)); }
	inline String_t* get_functionName_10() const { return ___functionName_10; }
	inline String_t** get_address_of_functionName_10() { return &___functionName_10; }
	inline void set_functionName_10(String_t* value)
	{
		___functionName_10 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_10, value);
	}

	inline static int32_t get_offset_of_onStateChange_11() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___onStateChange_11)); }
	inline OnStateChange_t1331483646 * get_onStateChange_11() const { return ___onStateChange_11; }
	inline OnStateChange_t1331483646 ** get_address_of_onStateChange_11() { return &___onStateChange_11; }
	inline void set_onStateChange_11(OnStateChange_t1331483646 * value)
	{
		___onStateChange_11 = value;
		Il2CppCodeGenWriteBarrier(&___onStateChange_11, value);
	}

	inline static int32_t get_offset_of_option_12() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___option_12)); }
	inline bool get_option_12() const { return ___option_12; }
	inline bool* get_address_of_option_12() { return &___option_12; }
	inline void set_option_12(bool value)
	{
		___option_12 = value;
	}

	inline static int32_t get_offset_of_mChecked_13() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___mChecked_13)); }
	inline bool get_mChecked_13() const { return ___mChecked_13; }
	inline bool* get_address_of_mChecked_13() { return &___mChecked_13; }
	inline void set_mChecked_13(bool value)
	{
		___mChecked_13 = value;
	}

	inline static int32_t get_offset_of_mStarted_14() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___mStarted_14)); }
	inline bool get_mStarted_14() const { return ___mStarted_14; }
	inline bool* get_address_of_mStarted_14() { return &___mStarted_14; }
	inline void set_mStarted_14(bool value)
	{
		___mStarted_14 = value;
	}

	inline static int32_t get_offset_of_mTrans_15() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709, ___mTrans_15)); }
	inline Transform_t3275118058 * get_mTrans_15() const { return ___mTrans_15; }
	inline Transform_t3275118058 ** get_address_of_mTrans_15() { return &___mTrans_15; }
	inline void set_mTrans_15(Transform_t3275118058 * value)
	{
		___mTrans_15 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_15, value);
	}
};

struct UICheckbox_t3747273709_StaticFields
{
public:
	// UICheckbox UICheckbox::current
	UICheckbox_t3747273709 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(UICheckbox_t3747273709_StaticFields, ___current_2)); }
	inline UICheckbox_t3747273709 * get_current_2() const { return ___current_2; }
	inline UICheckbox_t3747273709 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(UICheckbox_t3747273709 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
