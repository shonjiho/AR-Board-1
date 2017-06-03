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
// UIPanel
struct UIPanel_t1795085332;

#include "AssemblyU2DCSharp_UITweener2986641582.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenAlpha
struct  TweenAlpha_t2421518635  : public UITweener_t2986641582
{
public:
	// System.Single TweenAlpha::from
	float ___from_23;
	// System.Single TweenAlpha::to
	float ___to_24;
	// UnityEngine.Transform TweenAlpha::mTrans
	Transform_t3275118058 * ___mTrans_25;
	// UIWidget TweenAlpha::mWidget
	UIWidget_t1453041918 * ___mWidget_26;
	// UIPanel TweenAlpha::mPanel
	UIPanel_t1795085332 * ___mPanel_27;

public:
	inline static int32_t get_offset_of_from_23() { return static_cast<int32_t>(offsetof(TweenAlpha_t2421518635, ___from_23)); }
	inline float get_from_23() const { return ___from_23; }
	inline float* get_address_of_from_23() { return &___from_23; }
	inline void set_from_23(float value)
	{
		___from_23 = value;
	}

	inline static int32_t get_offset_of_to_24() { return static_cast<int32_t>(offsetof(TweenAlpha_t2421518635, ___to_24)); }
	inline float get_to_24() const { return ___to_24; }
	inline float* get_address_of_to_24() { return &___to_24; }
	inline void set_to_24(float value)
	{
		___to_24 = value;
	}

	inline static int32_t get_offset_of_mTrans_25() { return static_cast<int32_t>(offsetof(TweenAlpha_t2421518635, ___mTrans_25)); }
	inline Transform_t3275118058 * get_mTrans_25() const { return ___mTrans_25; }
	inline Transform_t3275118058 ** get_address_of_mTrans_25() { return &___mTrans_25; }
	inline void set_mTrans_25(Transform_t3275118058 * value)
	{
		___mTrans_25 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_25, value);
	}

	inline static int32_t get_offset_of_mWidget_26() { return static_cast<int32_t>(offsetof(TweenAlpha_t2421518635, ___mWidget_26)); }
	inline UIWidget_t1453041918 * get_mWidget_26() const { return ___mWidget_26; }
	inline UIWidget_t1453041918 ** get_address_of_mWidget_26() { return &___mWidget_26; }
	inline void set_mWidget_26(UIWidget_t1453041918 * value)
	{
		___mWidget_26 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_26, value);
	}

	inline static int32_t get_offset_of_mPanel_27() { return static_cast<int32_t>(offsetof(TweenAlpha_t2421518635, ___mPanel_27)); }
	inline UIPanel_t1795085332 * get_mPanel_27() const { return ___mPanel_27; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_27() { return &___mPanel_27; }
	inline void set_mPanel_27(UIPanel_t1795085332 * value)
	{
		___mPanel_27 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
