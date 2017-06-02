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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButtonColor
struct  UIButtonColor_t3793385709  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UIButtonColor::tweenTarget
	GameObject_t1756533147 * ___tweenTarget_2;
	// UnityEngine.Color UIButtonColor::hover
	Color_t2020392075  ___hover_3;
	// UnityEngine.Color UIButtonColor::pressed
	Color_t2020392075  ___pressed_4;
	// System.Single UIButtonColor::duration
	float ___duration_5;
	// UnityEngine.Color UIButtonColor::mColor
	Color_t2020392075  ___mColor_6;
	// System.Boolean UIButtonColor::mStarted
	bool ___mStarted_7;
	// System.Boolean UIButtonColor::mHighlighted
	bool ___mHighlighted_8;

public:
	inline static int32_t get_offset_of_tweenTarget_2() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___tweenTarget_2)); }
	inline GameObject_t1756533147 * get_tweenTarget_2() const { return ___tweenTarget_2; }
	inline GameObject_t1756533147 ** get_address_of_tweenTarget_2() { return &___tweenTarget_2; }
	inline void set_tweenTarget_2(GameObject_t1756533147 * value)
	{
		___tweenTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___tweenTarget_2, value);
	}

	inline static int32_t get_offset_of_hover_3() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___hover_3)); }
	inline Color_t2020392075  get_hover_3() const { return ___hover_3; }
	inline Color_t2020392075 * get_address_of_hover_3() { return &___hover_3; }
	inline void set_hover_3(Color_t2020392075  value)
	{
		___hover_3 = value;
	}

	inline static int32_t get_offset_of_pressed_4() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___pressed_4)); }
	inline Color_t2020392075  get_pressed_4() const { return ___pressed_4; }
	inline Color_t2020392075 * get_address_of_pressed_4() { return &___pressed_4; }
	inline void set_pressed_4(Color_t2020392075  value)
	{
		___pressed_4 = value;
	}

	inline static int32_t get_offset_of_duration_5() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___duration_5)); }
	inline float get_duration_5() const { return ___duration_5; }
	inline float* get_address_of_duration_5() { return &___duration_5; }
	inline void set_duration_5(float value)
	{
		___duration_5 = value;
	}

	inline static int32_t get_offset_of_mColor_6() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___mColor_6)); }
	inline Color_t2020392075  get_mColor_6() const { return ___mColor_6; }
	inline Color_t2020392075 * get_address_of_mColor_6() { return &___mColor_6; }
	inline void set_mColor_6(Color_t2020392075  value)
	{
		___mColor_6 = value;
	}

	inline static int32_t get_offset_of_mStarted_7() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___mStarted_7)); }
	inline bool get_mStarted_7() const { return ___mStarted_7; }
	inline bool* get_address_of_mStarted_7() { return &___mStarted_7; }
	inline void set_mStarted_7(bool value)
	{
		___mStarted_7 = value;
	}

	inline static int32_t get_offset_of_mHighlighted_8() { return static_cast<int32_t>(offsetof(UIButtonColor_t3793385709, ___mHighlighted_8)); }
	inline bool get_mHighlighted_8() const { return ___mHighlighted_8; }
	inline bool* get_address_of_mHighlighted_8() { return &___mHighlighted_8; }
	inline void set_mHighlighted_8(bool value)
	{
		___mHighlighted_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
