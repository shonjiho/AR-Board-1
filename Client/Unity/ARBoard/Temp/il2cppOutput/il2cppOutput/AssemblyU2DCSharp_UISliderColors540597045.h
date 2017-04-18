#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UISprite
struct UISprite_t603616735;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// UISlider
struct UISlider_t2191058247;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISliderColors
struct  UISliderColors_t540597045  : public MonoBehaviour_t1158329972
{
public:
	// UISprite UISliderColors::sprite
	UISprite_t603616735 * ___sprite_2;
	// UnityEngine.Color[] UISliderColors::colors
	ColorU5BU5D_t672350442* ___colors_3;
	// UISlider UISliderColors::mSlider
	UISlider_t2191058247 * ___mSlider_4;

public:
	inline static int32_t get_offset_of_sprite_2() { return static_cast<int32_t>(offsetof(UISliderColors_t540597045, ___sprite_2)); }
	inline UISprite_t603616735 * get_sprite_2() const { return ___sprite_2; }
	inline UISprite_t603616735 ** get_address_of_sprite_2() { return &___sprite_2; }
	inline void set_sprite_2(UISprite_t603616735 * value)
	{
		___sprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_2, value);
	}

	inline static int32_t get_offset_of_colors_3() { return static_cast<int32_t>(offsetof(UISliderColors_t540597045, ___colors_3)); }
	inline ColorU5BU5D_t672350442* get_colors_3() const { return ___colors_3; }
	inline ColorU5BU5D_t672350442** get_address_of_colors_3() { return &___colors_3; }
	inline void set_colors_3(ColorU5BU5D_t672350442* value)
	{
		___colors_3 = value;
		Il2CppCodeGenWriteBarrier(&___colors_3, value);
	}

	inline static int32_t get_offset_of_mSlider_4() { return static_cast<int32_t>(offsetof(UISliderColors_t540597045, ___mSlider_4)); }
	inline UISlider_t2191058247 * get_mSlider_4() const { return ___mSlider_4; }
	inline UISlider_t2191058247 ** get_address_of_mSlider_4() { return &___mSlider_4; }
	inline void set_mSlider_4(UISlider_t2191058247 * value)
	{
		___mSlider_4 = value;
		Il2CppCodeGenWriteBarrier(&___mSlider_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
