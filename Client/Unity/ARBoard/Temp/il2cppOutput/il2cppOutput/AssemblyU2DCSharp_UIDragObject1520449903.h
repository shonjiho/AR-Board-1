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
// UIPanel
struct UIPanel_t1795085332;

#include "AssemblyU2DCSharp_IgnoreTimeScale1174060255.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_UIDragObject_DragEffect533639763.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragObject
struct  UIDragObject_t1520449903  : public IgnoreTimeScale_t1174060255
{
public:
	// UnityEngine.Transform UIDragObject::target
	Transform_t3275118058 * ___target_7;
	// UnityEngine.Vector3 UIDragObject::scale
	Vector3_t2243707580  ___scale_8;
	// System.Single UIDragObject::scrollWheelFactor
	float ___scrollWheelFactor_9;
	// System.Boolean UIDragObject::restrictWithinPanel
	bool ___restrictWithinPanel_10;
	// UIDragObject/DragEffect UIDragObject::dragEffect
	int32_t ___dragEffect_11;
	// System.Single UIDragObject::momentumAmount
	float ___momentumAmount_12;
	// UnityEngine.Plane UIDragObject::mPlane
	Plane_t3727654732  ___mPlane_13;
	// UnityEngine.Vector3 UIDragObject::mLastPos
	Vector3_t2243707580  ___mLastPos_14;
	// UIPanel UIDragObject::mPanel
	UIPanel_t1795085332 * ___mPanel_15;
	// System.Boolean UIDragObject::mPressed
	bool ___mPressed_16;
	// UnityEngine.Vector3 UIDragObject::mMomentum
	Vector3_t2243707580  ___mMomentum_17;
	// System.Single UIDragObject::mScroll
	float ___mScroll_18;
	// UnityEngine.Bounds UIDragObject::mBounds
	Bounds_t3033363703  ___mBounds_19;
	// System.Int32 UIDragObject::mTouchID
	int32_t ___mTouchID_20;
	// System.Boolean UIDragObject::mStarted
	bool ___mStarted_21;

public:
	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___target_7)); }
	inline Transform_t3275118058 * get_target_7() const { return ___target_7; }
	inline Transform_t3275118058 ** get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(Transform_t3275118058 * value)
	{
		___target_7 = value;
		Il2CppCodeGenWriteBarrier(&___target_7, value);
	}

	inline static int32_t get_offset_of_scale_8() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___scale_8)); }
	inline Vector3_t2243707580  get_scale_8() const { return ___scale_8; }
	inline Vector3_t2243707580 * get_address_of_scale_8() { return &___scale_8; }
	inline void set_scale_8(Vector3_t2243707580  value)
	{
		___scale_8 = value;
	}

	inline static int32_t get_offset_of_scrollWheelFactor_9() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___scrollWheelFactor_9)); }
	inline float get_scrollWheelFactor_9() const { return ___scrollWheelFactor_9; }
	inline float* get_address_of_scrollWheelFactor_9() { return &___scrollWheelFactor_9; }
	inline void set_scrollWheelFactor_9(float value)
	{
		___scrollWheelFactor_9 = value;
	}

	inline static int32_t get_offset_of_restrictWithinPanel_10() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___restrictWithinPanel_10)); }
	inline bool get_restrictWithinPanel_10() const { return ___restrictWithinPanel_10; }
	inline bool* get_address_of_restrictWithinPanel_10() { return &___restrictWithinPanel_10; }
	inline void set_restrictWithinPanel_10(bool value)
	{
		___restrictWithinPanel_10 = value;
	}

	inline static int32_t get_offset_of_dragEffect_11() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___dragEffect_11)); }
	inline int32_t get_dragEffect_11() const { return ___dragEffect_11; }
	inline int32_t* get_address_of_dragEffect_11() { return &___dragEffect_11; }
	inline void set_dragEffect_11(int32_t value)
	{
		___dragEffect_11 = value;
	}

	inline static int32_t get_offset_of_momentumAmount_12() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___momentumAmount_12)); }
	inline float get_momentumAmount_12() const { return ___momentumAmount_12; }
	inline float* get_address_of_momentumAmount_12() { return &___momentumAmount_12; }
	inline void set_momentumAmount_12(float value)
	{
		___momentumAmount_12 = value;
	}

	inline static int32_t get_offset_of_mPlane_13() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mPlane_13)); }
	inline Plane_t3727654732  get_mPlane_13() const { return ___mPlane_13; }
	inline Plane_t3727654732 * get_address_of_mPlane_13() { return &___mPlane_13; }
	inline void set_mPlane_13(Plane_t3727654732  value)
	{
		___mPlane_13 = value;
	}

	inline static int32_t get_offset_of_mLastPos_14() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mLastPos_14)); }
	inline Vector3_t2243707580  get_mLastPos_14() const { return ___mLastPos_14; }
	inline Vector3_t2243707580 * get_address_of_mLastPos_14() { return &___mLastPos_14; }
	inline void set_mLastPos_14(Vector3_t2243707580  value)
	{
		___mLastPos_14 = value;
	}

	inline static int32_t get_offset_of_mPanel_15() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mPanel_15)); }
	inline UIPanel_t1795085332 * get_mPanel_15() const { return ___mPanel_15; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_15() { return &___mPanel_15; }
	inline void set_mPanel_15(UIPanel_t1795085332 * value)
	{
		___mPanel_15 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_15, value);
	}

	inline static int32_t get_offset_of_mPressed_16() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mPressed_16)); }
	inline bool get_mPressed_16() const { return ___mPressed_16; }
	inline bool* get_address_of_mPressed_16() { return &___mPressed_16; }
	inline void set_mPressed_16(bool value)
	{
		___mPressed_16 = value;
	}

	inline static int32_t get_offset_of_mMomentum_17() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mMomentum_17)); }
	inline Vector3_t2243707580  get_mMomentum_17() const { return ___mMomentum_17; }
	inline Vector3_t2243707580 * get_address_of_mMomentum_17() { return &___mMomentum_17; }
	inline void set_mMomentum_17(Vector3_t2243707580  value)
	{
		___mMomentum_17 = value;
	}

	inline static int32_t get_offset_of_mScroll_18() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mScroll_18)); }
	inline float get_mScroll_18() const { return ___mScroll_18; }
	inline float* get_address_of_mScroll_18() { return &___mScroll_18; }
	inline void set_mScroll_18(float value)
	{
		___mScroll_18 = value;
	}

	inline static int32_t get_offset_of_mBounds_19() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mBounds_19)); }
	inline Bounds_t3033363703  get_mBounds_19() const { return ___mBounds_19; }
	inline Bounds_t3033363703 * get_address_of_mBounds_19() { return &___mBounds_19; }
	inline void set_mBounds_19(Bounds_t3033363703  value)
	{
		___mBounds_19 = value;
	}

	inline static int32_t get_offset_of_mTouchID_20() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mTouchID_20)); }
	inline int32_t get_mTouchID_20() const { return ___mTouchID_20; }
	inline int32_t* get_address_of_mTouchID_20() { return &___mTouchID_20; }
	inline void set_mTouchID_20(int32_t value)
	{
		___mTouchID_20 = value;
	}

	inline static int32_t get_offset_of_mStarted_21() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mStarted_21)); }
	inline bool get_mStarted_21() const { return ___mStarted_21; }
	inline bool* get_address_of_mStarted_21() { return &___mStarted_21; }
	inline void set_mStarted_21(bool value)
	{
		___mStarted_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
