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
// UnityEngine.Camera
struct Camera_t189460977;
// UIRoot
struct UIRoot_t389944298;

#include "AssemblyU2DCSharp_IgnoreTimeScale1174060255.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UIDragObject_DragEffect533639763.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDraggableCamera
struct  UIDraggableCamera_t2562792962  : public IgnoreTimeScale_t1174060255
{
public:
	// UnityEngine.Transform UIDraggableCamera::rootForBounds
	Transform_t3275118058 * ___rootForBounds_7;
	// UnityEngine.Vector2 UIDraggableCamera::scale
	Vector2_t2243707579  ___scale_8;
	// System.Single UIDraggableCamera::scrollWheelFactor
	float ___scrollWheelFactor_9;
	// UIDragObject/DragEffect UIDraggableCamera::dragEffect
	int32_t ___dragEffect_10;
	// System.Boolean UIDraggableCamera::smoothDragStart
	bool ___smoothDragStart_11;
	// System.Single UIDraggableCamera::momentumAmount
	float ___momentumAmount_12;
	// UnityEngine.Camera UIDraggableCamera::mCam
	Camera_t189460977 * ___mCam_13;
	// UnityEngine.Transform UIDraggableCamera::mTrans
	Transform_t3275118058 * ___mTrans_14;
	// System.Boolean UIDraggableCamera::mPressed
	bool ___mPressed_15;
	// UnityEngine.Vector2 UIDraggableCamera::mMomentum
	Vector2_t2243707579  ___mMomentum_16;
	// UnityEngine.Bounds UIDraggableCamera::mBounds
	Bounds_t3033363703  ___mBounds_17;
	// System.Single UIDraggableCamera::mScroll
	float ___mScroll_18;
	// UIRoot UIDraggableCamera::mRoot
	UIRoot_t389944298 * ___mRoot_19;
	// System.Boolean UIDraggableCamera::mDragStarted
	bool ___mDragStarted_20;

public:
	inline static int32_t get_offset_of_rootForBounds_7() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___rootForBounds_7)); }
	inline Transform_t3275118058 * get_rootForBounds_7() const { return ___rootForBounds_7; }
	inline Transform_t3275118058 ** get_address_of_rootForBounds_7() { return &___rootForBounds_7; }
	inline void set_rootForBounds_7(Transform_t3275118058 * value)
	{
		___rootForBounds_7 = value;
		Il2CppCodeGenWriteBarrier(&___rootForBounds_7, value);
	}

	inline static int32_t get_offset_of_scale_8() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___scale_8)); }
	inline Vector2_t2243707579  get_scale_8() const { return ___scale_8; }
	inline Vector2_t2243707579 * get_address_of_scale_8() { return &___scale_8; }
	inline void set_scale_8(Vector2_t2243707579  value)
	{
		___scale_8 = value;
	}

	inline static int32_t get_offset_of_scrollWheelFactor_9() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___scrollWheelFactor_9)); }
	inline float get_scrollWheelFactor_9() const { return ___scrollWheelFactor_9; }
	inline float* get_address_of_scrollWheelFactor_9() { return &___scrollWheelFactor_9; }
	inline void set_scrollWheelFactor_9(float value)
	{
		___scrollWheelFactor_9 = value;
	}

	inline static int32_t get_offset_of_dragEffect_10() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___dragEffect_10)); }
	inline int32_t get_dragEffect_10() const { return ___dragEffect_10; }
	inline int32_t* get_address_of_dragEffect_10() { return &___dragEffect_10; }
	inline void set_dragEffect_10(int32_t value)
	{
		___dragEffect_10 = value;
	}

	inline static int32_t get_offset_of_smoothDragStart_11() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___smoothDragStart_11)); }
	inline bool get_smoothDragStart_11() const { return ___smoothDragStart_11; }
	inline bool* get_address_of_smoothDragStart_11() { return &___smoothDragStart_11; }
	inline void set_smoothDragStart_11(bool value)
	{
		___smoothDragStart_11 = value;
	}

	inline static int32_t get_offset_of_momentumAmount_12() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___momentumAmount_12)); }
	inline float get_momentumAmount_12() const { return ___momentumAmount_12; }
	inline float* get_address_of_momentumAmount_12() { return &___momentumAmount_12; }
	inline void set_momentumAmount_12(float value)
	{
		___momentumAmount_12 = value;
	}

	inline static int32_t get_offset_of_mCam_13() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mCam_13)); }
	inline Camera_t189460977 * get_mCam_13() const { return ___mCam_13; }
	inline Camera_t189460977 ** get_address_of_mCam_13() { return &___mCam_13; }
	inline void set_mCam_13(Camera_t189460977 * value)
	{
		___mCam_13 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_13, value);
	}

	inline static int32_t get_offset_of_mTrans_14() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mTrans_14)); }
	inline Transform_t3275118058 * get_mTrans_14() const { return ___mTrans_14; }
	inline Transform_t3275118058 ** get_address_of_mTrans_14() { return &___mTrans_14; }
	inline void set_mTrans_14(Transform_t3275118058 * value)
	{
		___mTrans_14 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_14, value);
	}

	inline static int32_t get_offset_of_mPressed_15() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mPressed_15)); }
	inline bool get_mPressed_15() const { return ___mPressed_15; }
	inline bool* get_address_of_mPressed_15() { return &___mPressed_15; }
	inline void set_mPressed_15(bool value)
	{
		___mPressed_15 = value;
	}

	inline static int32_t get_offset_of_mMomentum_16() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mMomentum_16)); }
	inline Vector2_t2243707579  get_mMomentum_16() const { return ___mMomentum_16; }
	inline Vector2_t2243707579 * get_address_of_mMomentum_16() { return &___mMomentum_16; }
	inline void set_mMomentum_16(Vector2_t2243707579  value)
	{
		___mMomentum_16 = value;
	}

	inline static int32_t get_offset_of_mBounds_17() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mBounds_17)); }
	inline Bounds_t3033363703  get_mBounds_17() const { return ___mBounds_17; }
	inline Bounds_t3033363703 * get_address_of_mBounds_17() { return &___mBounds_17; }
	inline void set_mBounds_17(Bounds_t3033363703  value)
	{
		___mBounds_17 = value;
	}

	inline static int32_t get_offset_of_mScroll_18() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mScroll_18)); }
	inline float get_mScroll_18() const { return ___mScroll_18; }
	inline float* get_address_of_mScroll_18() { return &___mScroll_18; }
	inline void set_mScroll_18(float value)
	{
		___mScroll_18 = value;
	}

	inline static int32_t get_offset_of_mRoot_19() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mRoot_19)); }
	inline UIRoot_t389944298 * get_mRoot_19() const { return ___mRoot_19; }
	inline UIRoot_t389944298 ** get_address_of_mRoot_19() { return &___mRoot_19; }
	inline void set_mRoot_19(UIRoot_t389944298 * value)
	{
		___mRoot_19 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_19, value);
	}

	inline static int32_t get_offset_of_mDragStarted_20() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mDragStarted_20)); }
	inline bool get_mDragStarted_20() const { return ___mDragStarted_20; }
	inline bool* get_address_of_mDragStarted_20() { return &___mDragStarted_20; }
	inline void set_mDragStarted_20(bool value)
	{
		___mDragStarted_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
