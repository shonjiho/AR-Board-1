#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpringPanel/OnFinished
struct OnFinished_t3595288269;
// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.Transform
struct Transform_t3275118058;
// UIDraggablePanel
struct UIDraggablePanel_t252039129;

#include "AssemblyU2DCSharp_IgnoreTimeScale1174060255.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpringPanel
struct  SpringPanel_t2962744957  : public IgnoreTimeScale_t1174060255
{
public:
	// UnityEngine.Vector3 SpringPanel::target
	Vector3_t2243707580  ___target_7;
	// System.Single SpringPanel::strength
	float ___strength_8;
	// SpringPanel/OnFinished SpringPanel::onFinished
	OnFinished_t3595288269 * ___onFinished_9;
	// UIPanel SpringPanel::mPanel
	UIPanel_t1795085332 * ___mPanel_10;
	// UnityEngine.Transform SpringPanel::mTrans
	Transform_t3275118058 * ___mTrans_11;
	// System.Single SpringPanel::mThreshold
	float ___mThreshold_12;
	// UIDraggablePanel SpringPanel::mDrag
	UIDraggablePanel_t252039129 * ___mDrag_13;

public:
	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___target_7)); }
	inline Vector3_t2243707580  get_target_7() const { return ___target_7; }
	inline Vector3_t2243707580 * get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(Vector3_t2243707580  value)
	{
		___target_7 = value;
	}

	inline static int32_t get_offset_of_strength_8() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___strength_8)); }
	inline float get_strength_8() const { return ___strength_8; }
	inline float* get_address_of_strength_8() { return &___strength_8; }
	inline void set_strength_8(float value)
	{
		___strength_8 = value;
	}

	inline static int32_t get_offset_of_onFinished_9() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___onFinished_9)); }
	inline OnFinished_t3595288269 * get_onFinished_9() const { return ___onFinished_9; }
	inline OnFinished_t3595288269 ** get_address_of_onFinished_9() { return &___onFinished_9; }
	inline void set_onFinished_9(OnFinished_t3595288269 * value)
	{
		___onFinished_9 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_9, value);
	}

	inline static int32_t get_offset_of_mPanel_10() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___mPanel_10)); }
	inline UIPanel_t1795085332 * get_mPanel_10() const { return ___mPanel_10; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_10() { return &___mPanel_10; }
	inline void set_mPanel_10(UIPanel_t1795085332 * value)
	{
		___mPanel_10 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_10, value);
	}

	inline static int32_t get_offset_of_mTrans_11() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___mTrans_11)); }
	inline Transform_t3275118058 * get_mTrans_11() const { return ___mTrans_11; }
	inline Transform_t3275118058 ** get_address_of_mTrans_11() { return &___mTrans_11; }
	inline void set_mTrans_11(Transform_t3275118058 * value)
	{
		___mTrans_11 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_11, value);
	}

	inline static int32_t get_offset_of_mThreshold_12() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___mThreshold_12)); }
	inline float get_mThreshold_12() const { return ___mThreshold_12; }
	inline float* get_address_of_mThreshold_12() { return &___mThreshold_12; }
	inline void set_mThreshold_12(float value)
	{
		___mThreshold_12 = value;
	}

	inline static int32_t get_offset_of_mDrag_13() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___mDrag_13)); }
	inline UIDraggablePanel_t252039129 * get_mDrag_13() const { return ___mDrag_13; }
	inline UIDraggablePanel_t252039129 ** get_address_of_mDrag_13() { return &___mDrag_13; }
	inline void set_mDrag_13(UIDraggablePanel_t252039129 * value)
	{
		___mDrag_13 = value;
		Il2CppCodeGenWriteBarrier(&___mDrag_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
