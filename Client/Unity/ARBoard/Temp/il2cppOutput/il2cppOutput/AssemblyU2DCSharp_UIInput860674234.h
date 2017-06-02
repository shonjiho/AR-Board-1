#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIInput
struct UIInput_t860674234;
// UILabel
struct UILabel_t1795115428;
// System.String
struct String_t;
// UIInput/Validator
struct Validator_t2517589125;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIInput/OnSubmit
struct OnSubmit_t1409136470;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t601950206;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIInput_KeyboardType865779294.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot752586349.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIInput
struct  UIInput_t860674234  : public MonoBehaviour_t1158329972
{
public:
	// UILabel UIInput::label
	UILabel_t1795115428 * ___label_3;
	// System.Int32 UIInput::maxChars
	int32_t ___maxChars_4;
	// System.String UIInput::caratChar
	String_t* ___caratChar_5;
	// UIInput/Validator UIInput::validator
	Validator_t2517589125 * ___validator_6;
	// UIInput/KeyboardType UIInput::type
	int32_t ___type_7;
	// System.Boolean UIInput::isPassword
	bool ___isPassword_8;
	// System.Boolean UIInput::autoCorrect
	bool ___autoCorrect_9;
	// System.Boolean UIInput::useLabelTextAtStart
	bool ___useLabelTextAtStart_10;
	// UnityEngine.Color UIInput::activeColor
	Color_t2020392075  ___activeColor_11;
	// UnityEngine.GameObject UIInput::selectOnTab
	GameObject_t1756533147 * ___selectOnTab_12;
	// UnityEngine.GameObject UIInput::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_13;
	// System.String UIInput::functionName
	String_t* ___functionName_14;
	// UIInput/OnSubmit UIInput::onSubmit
	OnSubmit_t1409136470 * ___onSubmit_15;
	// System.String UIInput::mText
	String_t* ___mText_16;
	// System.String UIInput::mDefaultText
	String_t* ___mDefaultText_17;
	// UnityEngine.Color UIInput::mDefaultColor
	Color_t2020392075  ___mDefaultColor_18;
	// UIWidget/Pivot UIInput::mPivot
	int32_t ___mPivot_19;
	// System.Single UIInput::mPosition
	float ___mPosition_20;
	// UnityEngine.TouchScreenKeyboard UIInput::mKeyboard
	TouchScreenKeyboard_t601950206 * ___mKeyboard_21;
	// System.Boolean UIInput::mDoInit
	bool ___mDoInit_22;

public:
	inline static int32_t get_offset_of_label_3() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___label_3)); }
	inline UILabel_t1795115428 * get_label_3() const { return ___label_3; }
	inline UILabel_t1795115428 ** get_address_of_label_3() { return &___label_3; }
	inline void set_label_3(UILabel_t1795115428 * value)
	{
		___label_3 = value;
		Il2CppCodeGenWriteBarrier(&___label_3, value);
	}

	inline static int32_t get_offset_of_maxChars_4() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___maxChars_4)); }
	inline int32_t get_maxChars_4() const { return ___maxChars_4; }
	inline int32_t* get_address_of_maxChars_4() { return &___maxChars_4; }
	inline void set_maxChars_4(int32_t value)
	{
		___maxChars_4 = value;
	}

	inline static int32_t get_offset_of_caratChar_5() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___caratChar_5)); }
	inline String_t* get_caratChar_5() const { return ___caratChar_5; }
	inline String_t** get_address_of_caratChar_5() { return &___caratChar_5; }
	inline void set_caratChar_5(String_t* value)
	{
		___caratChar_5 = value;
		Il2CppCodeGenWriteBarrier(&___caratChar_5, value);
	}

	inline static int32_t get_offset_of_validator_6() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___validator_6)); }
	inline Validator_t2517589125 * get_validator_6() const { return ___validator_6; }
	inline Validator_t2517589125 ** get_address_of_validator_6() { return &___validator_6; }
	inline void set_validator_6(Validator_t2517589125 * value)
	{
		___validator_6 = value;
		Il2CppCodeGenWriteBarrier(&___validator_6, value);
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___type_7)); }
	inline int32_t get_type_7() const { return ___type_7; }
	inline int32_t* get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(int32_t value)
	{
		___type_7 = value;
	}

	inline static int32_t get_offset_of_isPassword_8() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___isPassword_8)); }
	inline bool get_isPassword_8() const { return ___isPassword_8; }
	inline bool* get_address_of_isPassword_8() { return &___isPassword_8; }
	inline void set_isPassword_8(bool value)
	{
		___isPassword_8 = value;
	}

	inline static int32_t get_offset_of_autoCorrect_9() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___autoCorrect_9)); }
	inline bool get_autoCorrect_9() const { return ___autoCorrect_9; }
	inline bool* get_address_of_autoCorrect_9() { return &___autoCorrect_9; }
	inline void set_autoCorrect_9(bool value)
	{
		___autoCorrect_9 = value;
	}

	inline static int32_t get_offset_of_useLabelTextAtStart_10() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___useLabelTextAtStart_10)); }
	inline bool get_useLabelTextAtStart_10() const { return ___useLabelTextAtStart_10; }
	inline bool* get_address_of_useLabelTextAtStart_10() { return &___useLabelTextAtStart_10; }
	inline void set_useLabelTextAtStart_10(bool value)
	{
		___useLabelTextAtStart_10 = value;
	}

	inline static int32_t get_offset_of_activeColor_11() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___activeColor_11)); }
	inline Color_t2020392075  get_activeColor_11() const { return ___activeColor_11; }
	inline Color_t2020392075 * get_address_of_activeColor_11() { return &___activeColor_11; }
	inline void set_activeColor_11(Color_t2020392075  value)
	{
		___activeColor_11 = value;
	}

	inline static int32_t get_offset_of_selectOnTab_12() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___selectOnTab_12)); }
	inline GameObject_t1756533147 * get_selectOnTab_12() const { return ___selectOnTab_12; }
	inline GameObject_t1756533147 ** get_address_of_selectOnTab_12() { return &___selectOnTab_12; }
	inline void set_selectOnTab_12(GameObject_t1756533147 * value)
	{
		___selectOnTab_12 = value;
		Il2CppCodeGenWriteBarrier(&___selectOnTab_12, value);
	}

	inline static int32_t get_offset_of_eventReceiver_13() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___eventReceiver_13)); }
	inline GameObject_t1756533147 * get_eventReceiver_13() const { return ___eventReceiver_13; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_13() { return &___eventReceiver_13; }
	inline void set_eventReceiver_13(GameObject_t1756533147 * value)
	{
		___eventReceiver_13 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_13, value);
	}

	inline static int32_t get_offset_of_functionName_14() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___functionName_14)); }
	inline String_t* get_functionName_14() const { return ___functionName_14; }
	inline String_t** get_address_of_functionName_14() { return &___functionName_14; }
	inline void set_functionName_14(String_t* value)
	{
		___functionName_14 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_14, value);
	}

	inline static int32_t get_offset_of_onSubmit_15() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___onSubmit_15)); }
	inline OnSubmit_t1409136470 * get_onSubmit_15() const { return ___onSubmit_15; }
	inline OnSubmit_t1409136470 ** get_address_of_onSubmit_15() { return &___onSubmit_15; }
	inline void set_onSubmit_15(OnSubmit_t1409136470 * value)
	{
		___onSubmit_15 = value;
		Il2CppCodeGenWriteBarrier(&___onSubmit_15, value);
	}

	inline static int32_t get_offset_of_mText_16() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mText_16)); }
	inline String_t* get_mText_16() const { return ___mText_16; }
	inline String_t** get_address_of_mText_16() { return &___mText_16; }
	inline void set_mText_16(String_t* value)
	{
		___mText_16 = value;
		Il2CppCodeGenWriteBarrier(&___mText_16, value);
	}

	inline static int32_t get_offset_of_mDefaultText_17() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mDefaultText_17)); }
	inline String_t* get_mDefaultText_17() const { return ___mDefaultText_17; }
	inline String_t** get_address_of_mDefaultText_17() { return &___mDefaultText_17; }
	inline void set_mDefaultText_17(String_t* value)
	{
		___mDefaultText_17 = value;
		Il2CppCodeGenWriteBarrier(&___mDefaultText_17, value);
	}

	inline static int32_t get_offset_of_mDefaultColor_18() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mDefaultColor_18)); }
	inline Color_t2020392075  get_mDefaultColor_18() const { return ___mDefaultColor_18; }
	inline Color_t2020392075 * get_address_of_mDefaultColor_18() { return &___mDefaultColor_18; }
	inline void set_mDefaultColor_18(Color_t2020392075  value)
	{
		___mDefaultColor_18 = value;
	}

	inline static int32_t get_offset_of_mPivot_19() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mPivot_19)); }
	inline int32_t get_mPivot_19() const { return ___mPivot_19; }
	inline int32_t* get_address_of_mPivot_19() { return &___mPivot_19; }
	inline void set_mPivot_19(int32_t value)
	{
		___mPivot_19 = value;
	}

	inline static int32_t get_offset_of_mPosition_20() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mPosition_20)); }
	inline float get_mPosition_20() const { return ___mPosition_20; }
	inline float* get_address_of_mPosition_20() { return &___mPosition_20; }
	inline void set_mPosition_20(float value)
	{
		___mPosition_20 = value;
	}

	inline static int32_t get_offset_of_mKeyboard_21() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mKeyboard_21)); }
	inline TouchScreenKeyboard_t601950206 * get_mKeyboard_21() const { return ___mKeyboard_21; }
	inline TouchScreenKeyboard_t601950206 ** get_address_of_mKeyboard_21() { return &___mKeyboard_21; }
	inline void set_mKeyboard_21(TouchScreenKeyboard_t601950206 * value)
	{
		___mKeyboard_21 = value;
		Il2CppCodeGenWriteBarrier(&___mKeyboard_21, value);
	}

	inline static int32_t get_offset_of_mDoInit_22() { return static_cast<int32_t>(offsetof(UIInput_t860674234, ___mDoInit_22)); }
	inline bool get_mDoInit_22() const { return ___mDoInit_22; }
	inline bool* get_address_of_mDoInit_22() { return &___mDoInit_22; }
	inline void set_mDoInit_22(bool value)
	{
		___mDoInit_22 = value;
	}
};

struct UIInput_t860674234_StaticFields
{
public:
	// UIInput UIInput::current
	UIInput_t860674234 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(UIInput_t860674234_StaticFields, ___current_2)); }
	inline UIInput_t860674234 * get_current_2() const { return ___current_2; }
	inline UIInput_t860674234 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(UIInput_t860674234 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
