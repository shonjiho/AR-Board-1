#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UIWidget
struct UIWidget_t1453041918;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Light
struct Light_t494725636;

#include "AssemblyU2DCSharp_UITweener2986641582.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenColor
struct  TweenColor_t3390486518  : public UITweener_t2986641582
{
public:
	// UnityEngine.Color TweenColor::from
	Color_t2020392075  ___from_23;
	// UnityEngine.Color TweenColor::to
	Color_t2020392075  ___to_24;
	// UnityEngine.Transform TweenColor::mTrans
	Transform_t3275118058 * ___mTrans_25;
	// UIWidget TweenColor::mWidget
	UIWidget_t1453041918 * ___mWidget_26;
	// UnityEngine.Material TweenColor::mMat
	Material_t193706927 * ___mMat_27;
	// UnityEngine.Light TweenColor::mLight
	Light_t494725636 * ___mLight_28;

public:
	inline static int32_t get_offset_of_from_23() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___from_23)); }
	inline Color_t2020392075  get_from_23() const { return ___from_23; }
	inline Color_t2020392075 * get_address_of_from_23() { return &___from_23; }
	inline void set_from_23(Color_t2020392075  value)
	{
		___from_23 = value;
	}

	inline static int32_t get_offset_of_to_24() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___to_24)); }
	inline Color_t2020392075  get_to_24() const { return ___to_24; }
	inline Color_t2020392075 * get_address_of_to_24() { return &___to_24; }
	inline void set_to_24(Color_t2020392075  value)
	{
		___to_24 = value;
	}

	inline static int32_t get_offset_of_mTrans_25() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___mTrans_25)); }
	inline Transform_t3275118058 * get_mTrans_25() const { return ___mTrans_25; }
	inline Transform_t3275118058 ** get_address_of_mTrans_25() { return &___mTrans_25; }
	inline void set_mTrans_25(Transform_t3275118058 * value)
	{
		___mTrans_25 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_25, value);
	}

	inline static int32_t get_offset_of_mWidget_26() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___mWidget_26)); }
	inline UIWidget_t1453041918 * get_mWidget_26() const { return ___mWidget_26; }
	inline UIWidget_t1453041918 ** get_address_of_mWidget_26() { return &___mWidget_26; }
	inline void set_mWidget_26(UIWidget_t1453041918 * value)
	{
		___mWidget_26 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_26, value);
	}

	inline static int32_t get_offset_of_mMat_27() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___mMat_27)); }
	inline Material_t193706927 * get_mMat_27() const { return ___mMat_27; }
	inline Material_t193706927 ** get_address_of_mMat_27() { return &___mMat_27; }
	inline void set_mMat_27(Material_t193706927 * value)
	{
		___mMat_27 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_27, value);
	}

	inline static int32_t get_offset_of_mLight_28() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___mLight_28)); }
	inline Light_t494725636 * get_mLight_28() const { return ___mLight_28; }
	inline Light_t494725636 ** get_address_of_mLight_28() { return &___mLight_28; }
	inline void set_mLight_28(Light_t494725636 * value)
	{
		___mLight_28 = value;
		Il2CppCodeGenWriteBarrier(&___mLight_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
