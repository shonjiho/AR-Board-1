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
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;
// UIScrollBar/OnScrollBarChange
struct OnScrollBarChange_t4153172878;
// UIScrollBar/OnDragFinished
struct OnDragFinished_t750351020;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIScrollBar_Direction3728253650.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIScrollBar
struct  UIScrollBar_t1736046648  : public MonoBehaviour_t1158329972
{
public:
	// UISprite UIScrollBar::mBG
	UISprite_t603616735 * ___mBG_2;
	// UISprite UIScrollBar::mFG
	UISprite_t603616735 * ___mFG_3;
	// UIScrollBar/Direction UIScrollBar::mDir
	int32_t ___mDir_4;
	// System.Boolean UIScrollBar::mInverted
	bool ___mInverted_5;
	// System.Single UIScrollBar::mScroll
	float ___mScroll_6;
	// System.Single UIScrollBar::mSize
	float ___mSize_7;
	// UnityEngine.Transform UIScrollBar::mTrans
	Transform_t3275118058 * ___mTrans_8;
	// System.Boolean UIScrollBar::mIsDirty
	bool ___mIsDirty_9;
	// UnityEngine.Camera UIScrollBar::mCam
	Camera_t189460977 * ___mCam_10;
	// UnityEngine.Vector2 UIScrollBar::mScreenPos
	Vector2_t2243707579  ___mScreenPos_11;
	// UIScrollBar/OnScrollBarChange UIScrollBar::onChange
	OnScrollBarChange_t4153172878 * ___onChange_12;
	// UIScrollBar/OnDragFinished UIScrollBar::onDragFinished
	OnDragFinished_t750351020 * ___onDragFinished_13;

public:
	inline static int32_t get_offset_of_mBG_2() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mBG_2)); }
	inline UISprite_t603616735 * get_mBG_2() const { return ___mBG_2; }
	inline UISprite_t603616735 ** get_address_of_mBG_2() { return &___mBG_2; }
	inline void set_mBG_2(UISprite_t603616735 * value)
	{
		___mBG_2 = value;
		Il2CppCodeGenWriteBarrier(&___mBG_2, value);
	}

	inline static int32_t get_offset_of_mFG_3() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mFG_3)); }
	inline UISprite_t603616735 * get_mFG_3() const { return ___mFG_3; }
	inline UISprite_t603616735 ** get_address_of_mFG_3() { return &___mFG_3; }
	inline void set_mFG_3(UISprite_t603616735 * value)
	{
		___mFG_3 = value;
		Il2CppCodeGenWriteBarrier(&___mFG_3, value);
	}

	inline static int32_t get_offset_of_mDir_4() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mDir_4)); }
	inline int32_t get_mDir_4() const { return ___mDir_4; }
	inline int32_t* get_address_of_mDir_4() { return &___mDir_4; }
	inline void set_mDir_4(int32_t value)
	{
		___mDir_4 = value;
	}

	inline static int32_t get_offset_of_mInverted_5() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mInverted_5)); }
	inline bool get_mInverted_5() const { return ___mInverted_5; }
	inline bool* get_address_of_mInverted_5() { return &___mInverted_5; }
	inline void set_mInverted_5(bool value)
	{
		___mInverted_5 = value;
	}

	inline static int32_t get_offset_of_mScroll_6() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mScroll_6)); }
	inline float get_mScroll_6() const { return ___mScroll_6; }
	inline float* get_address_of_mScroll_6() { return &___mScroll_6; }
	inline void set_mScroll_6(float value)
	{
		___mScroll_6 = value;
	}

	inline static int32_t get_offset_of_mSize_7() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mSize_7)); }
	inline float get_mSize_7() const { return ___mSize_7; }
	inline float* get_address_of_mSize_7() { return &___mSize_7; }
	inline void set_mSize_7(float value)
	{
		___mSize_7 = value;
	}

	inline static int32_t get_offset_of_mTrans_8() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mTrans_8)); }
	inline Transform_t3275118058 * get_mTrans_8() const { return ___mTrans_8; }
	inline Transform_t3275118058 ** get_address_of_mTrans_8() { return &___mTrans_8; }
	inline void set_mTrans_8(Transform_t3275118058 * value)
	{
		___mTrans_8 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_8, value);
	}

	inline static int32_t get_offset_of_mIsDirty_9() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mIsDirty_9)); }
	inline bool get_mIsDirty_9() const { return ___mIsDirty_9; }
	inline bool* get_address_of_mIsDirty_9() { return &___mIsDirty_9; }
	inline void set_mIsDirty_9(bool value)
	{
		___mIsDirty_9 = value;
	}

	inline static int32_t get_offset_of_mCam_10() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mCam_10)); }
	inline Camera_t189460977 * get_mCam_10() const { return ___mCam_10; }
	inline Camera_t189460977 ** get_address_of_mCam_10() { return &___mCam_10; }
	inline void set_mCam_10(Camera_t189460977 * value)
	{
		___mCam_10 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_10, value);
	}

	inline static int32_t get_offset_of_mScreenPos_11() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mScreenPos_11)); }
	inline Vector2_t2243707579  get_mScreenPos_11() const { return ___mScreenPos_11; }
	inline Vector2_t2243707579 * get_address_of_mScreenPos_11() { return &___mScreenPos_11; }
	inline void set_mScreenPos_11(Vector2_t2243707579  value)
	{
		___mScreenPos_11 = value;
	}

	inline static int32_t get_offset_of_onChange_12() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___onChange_12)); }
	inline OnScrollBarChange_t4153172878 * get_onChange_12() const { return ___onChange_12; }
	inline OnScrollBarChange_t4153172878 ** get_address_of_onChange_12() { return &___onChange_12; }
	inline void set_onChange_12(OnScrollBarChange_t4153172878 * value)
	{
		___onChange_12 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_12, value);
	}

	inline static int32_t get_offset_of_onDragFinished_13() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___onDragFinished_13)); }
	inline OnDragFinished_t750351020 * get_onDragFinished_13() const { return ___onDragFinished_13; }
	inline OnDragFinished_t750351020 ** get_address_of_onDragFinished_13() { return &___onDragFinished_13; }
	inline void set_onDragFinished_13(OnDragFinished_t750351020 * value)
	{
		___onDragFinished_13 = value;
		Il2CppCodeGenWriteBarrier(&___onDragFinished_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
