#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIWidget>
struct BetterList_1_t1673430560;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UIPanel
struct UIPanel_t1795085332;
// UIGeometry
struct UIGeometry_t1005900006;
// System.Comparison`1<UIWidget>
struct Comparison_1_t2714780769;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot752586349.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIWidget
struct  UIWidget_t1453041918  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color UIWidget::mColor
	Color_t2020392075  ___mColor_3;
	// UIWidget/Pivot UIWidget::mPivot
	int32_t ___mPivot_4;
	// System.Int32 UIWidget::mDepth
	int32_t ___mDepth_5;
	// UnityEngine.GameObject UIWidget::mGo
	GameObject_t1756533147 * ___mGo_6;
	// UnityEngine.Transform UIWidget::mTrans
	Transform_t3275118058 * ___mTrans_7;
	// UIPanel UIWidget::mPanel
	UIPanel_t1795085332 * ___mPanel_8;
	// System.Boolean UIWidget::mChanged
	bool ___mChanged_9;
	// System.Boolean UIWidget::mPlayMode
	bool ___mPlayMode_10;
	// System.Boolean UIWidget::mStarted
	bool ___mStarted_11;
	// UnityEngine.Vector3 UIWidget::mDiffPos
	Vector3_t2243707580  ___mDiffPos_12;
	// UnityEngine.Quaternion UIWidget::mDiffRot
	Quaternion_t4030073918  ___mDiffRot_13;
	// UnityEngine.Vector3 UIWidget::mDiffScale
	Vector3_t2243707580  ___mDiffScale_14;
	// UnityEngine.Matrix4x4 UIWidget::mLocalToPanel
	Matrix4x4_t2933234003  ___mLocalToPanel_15;
	// System.Boolean UIWidget::mVisibleByPanel
	bool ___mVisibleByPanel_16;
	// System.Single UIWidget::mLastAlpha
	float ___mLastAlpha_17;
	// UIGeometry UIWidget::mGeom
	UIGeometry_t1005900006 * ___mGeom_18;
	// System.Boolean UIWidget::mForceVisible
	bool ___mForceVisible_19;
	// UnityEngine.Vector3 UIWidget::mOldV0
	Vector3_t2243707580  ___mOldV0_20;
	// UnityEngine.Vector3 UIWidget::mOldV1
	Vector3_t2243707580  ___mOldV1_21;

public:
	inline static int32_t get_offset_of_mColor_3() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mColor_3)); }
	inline Color_t2020392075  get_mColor_3() const { return ___mColor_3; }
	inline Color_t2020392075 * get_address_of_mColor_3() { return &___mColor_3; }
	inline void set_mColor_3(Color_t2020392075  value)
	{
		___mColor_3 = value;
	}

	inline static int32_t get_offset_of_mPivot_4() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mPivot_4)); }
	inline int32_t get_mPivot_4() const { return ___mPivot_4; }
	inline int32_t* get_address_of_mPivot_4() { return &___mPivot_4; }
	inline void set_mPivot_4(int32_t value)
	{
		___mPivot_4 = value;
	}

	inline static int32_t get_offset_of_mDepth_5() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mDepth_5)); }
	inline int32_t get_mDepth_5() const { return ___mDepth_5; }
	inline int32_t* get_address_of_mDepth_5() { return &___mDepth_5; }
	inline void set_mDepth_5(int32_t value)
	{
		___mDepth_5 = value;
	}

	inline static int32_t get_offset_of_mGo_6() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mGo_6)); }
	inline GameObject_t1756533147 * get_mGo_6() const { return ___mGo_6; }
	inline GameObject_t1756533147 ** get_address_of_mGo_6() { return &___mGo_6; }
	inline void set_mGo_6(GameObject_t1756533147 * value)
	{
		___mGo_6 = value;
		Il2CppCodeGenWriteBarrier(&___mGo_6, value);
	}

	inline static int32_t get_offset_of_mTrans_7() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mTrans_7)); }
	inline Transform_t3275118058 * get_mTrans_7() const { return ___mTrans_7; }
	inline Transform_t3275118058 ** get_address_of_mTrans_7() { return &___mTrans_7; }
	inline void set_mTrans_7(Transform_t3275118058 * value)
	{
		___mTrans_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_7, value);
	}

	inline static int32_t get_offset_of_mPanel_8() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mPanel_8)); }
	inline UIPanel_t1795085332 * get_mPanel_8() const { return ___mPanel_8; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_8() { return &___mPanel_8; }
	inline void set_mPanel_8(UIPanel_t1795085332 * value)
	{
		___mPanel_8 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_8, value);
	}

	inline static int32_t get_offset_of_mChanged_9() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mChanged_9)); }
	inline bool get_mChanged_9() const { return ___mChanged_9; }
	inline bool* get_address_of_mChanged_9() { return &___mChanged_9; }
	inline void set_mChanged_9(bool value)
	{
		___mChanged_9 = value;
	}

	inline static int32_t get_offset_of_mPlayMode_10() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mPlayMode_10)); }
	inline bool get_mPlayMode_10() const { return ___mPlayMode_10; }
	inline bool* get_address_of_mPlayMode_10() { return &___mPlayMode_10; }
	inline void set_mPlayMode_10(bool value)
	{
		___mPlayMode_10 = value;
	}

	inline static int32_t get_offset_of_mStarted_11() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mStarted_11)); }
	inline bool get_mStarted_11() const { return ___mStarted_11; }
	inline bool* get_address_of_mStarted_11() { return &___mStarted_11; }
	inline void set_mStarted_11(bool value)
	{
		___mStarted_11 = value;
	}

	inline static int32_t get_offset_of_mDiffPos_12() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mDiffPos_12)); }
	inline Vector3_t2243707580  get_mDiffPos_12() const { return ___mDiffPos_12; }
	inline Vector3_t2243707580 * get_address_of_mDiffPos_12() { return &___mDiffPos_12; }
	inline void set_mDiffPos_12(Vector3_t2243707580  value)
	{
		___mDiffPos_12 = value;
	}

	inline static int32_t get_offset_of_mDiffRot_13() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mDiffRot_13)); }
	inline Quaternion_t4030073918  get_mDiffRot_13() const { return ___mDiffRot_13; }
	inline Quaternion_t4030073918 * get_address_of_mDiffRot_13() { return &___mDiffRot_13; }
	inline void set_mDiffRot_13(Quaternion_t4030073918  value)
	{
		___mDiffRot_13 = value;
	}

	inline static int32_t get_offset_of_mDiffScale_14() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mDiffScale_14)); }
	inline Vector3_t2243707580  get_mDiffScale_14() const { return ___mDiffScale_14; }
	inline Vector3_t2243707580 * get_address_of_mDiffScale_14() { return &___mDiffScale_14; }
	inline void set_mDiffScale_14(Vector3_t2243707580  value)
	{
		___mDiffScale_14 = value;
	}

	inline static int32_t get_offset_of_mLocalToPanel_15() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mLocalToPanel_15)); }
	inline Matrix4x4_t2933234003  get_mLocalToPanel_15() const { return ___mLocalToPanel_15; }
	inline Matrix4x4_t2933234003 * get_address_of_mLocalToPanel_15() { return &___mLocalToPanel_15; }
	inline void set_mLocalToPanel_15(Matrix4x4_t2933234003  value)
	{
		___mLocalToPanel_15 = value;
	}

	inline static int32_t get_offset_of_mVisibleByPanel_16() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mVisibleByPanel_16)); }
	inline bool get_mVisibleByPanel_16() const { return ___mVisibleByPanel_16; }
	inline bool* get_address_of_mVisibleByPanel_16() { return &___mVisibleByPanel_16; }
	inline void set_mVisibleByPanel_16(bool value)
	{
		___mVisibleByPanel_16 = value;
	}

	inline static int32_t get_offset_of_mLastAlpha_17() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mLastAlpha_17)); }
	inline float get_mLastAlpha_17() const { return ___mLastAlpha_17; }
	inline float* get_address_of_mLastAlpha_17() { return &___mLastAlpha_17; }
	inline void set_mLastAlpha_17(float value)
	{
		___mLastAlpha_17 = value;
	}

	inline static int32_t get_offset_of_mGeom_18() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mGeom_18)); }
	inline UIGeometry_t1005900006 * get_mGeom_18() const { return ___mGeom_18; }
	inline UIGeometry_t1005900006 ** get_address_of_mGeom_18() { return &___mGeom_18; }
	inline void set_mGeom_18(UIGeometry_t1005900006 * value)
	{
		___mGeom_18 = value;
		Il2CppCodeGenWriteBarrier(&___mGeom_18, value);
	}

	inline static int32_t get_offset_of_mForceVisible_19() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mForceVisible_19)); }
	inline bool get_mForceVisible_19() const { return ___mForceVisible_19; }
	inline bool* get_address_of_mForceVisible_19() { return &___mForceVisible_19; }
	inline void set_mForceVisible_19(bool value)
	{
		___mForceVisible_19 = value;
	}

	inline static int32_t get_offset_of_mOldV0_20() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mOldV0_20)); }
	inline Vector3_t2243707580  get_mOldV0_20() const { return ___mOldV0_20; }
	inline Vector3_t2243707580 * get_address_of_mOldV0_20() { return &___mOldV0_20; }
	inline void set_mOldV0_20(Vector3_t2243707580  value)
	{
		___mOldV0_20 = value;
	}

	inline static int32_t get_offset_of_mOldV1_21() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mOldV1_21)); }
	inline Vector3_t2243707580  get_mOldV1_21() const { return ___mOldV1_21; }
	inline Vector3_t2243707580 * get_address_of_mOldV1_21() { return &___mOldV1_21; }
	inline void set_mOldV1_21(Vector3_t2243707580  value)
	{
		___mOldV1_21 = value;
	}
};

struct UIWidget_t1453041918_StaticFields
{
public:
	// BetterList`1<UIWidget> UIWidget::list
	BetterList_1_t1673430560 * ___list_2;
	// System.Comparison`1<UIWidget> UIWidget::<>f__am$cache0
	Comparison_1_t2714780769 * ___U3CU3Ef__amU24cache0_22;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918_StaticFields, ___list_2)); }
	inline BetterList_1_t1673430560 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t1673430560 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t1673430560 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_22() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918_StaticFields, ___U3CU3Ef__amU24cache0_22)); }
	inline Comparison_1_t2714780769 * get_U3CU3Ef__amU24cache0_22() const { return ___U3CU3Ef__amU24cache0_22; }
	inline Comparison_1_t2714780769 ** get_address_of_U3CU3Ef__amU24cache0_22() { return &___U3CU3Ef__amU24cache0_22; }
	inline void set_U3CU3Ef__amU24cache0_22(Comparison_1_t2714780769 * value)
	{
		___U3CU3Ef__amU24cache0_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
