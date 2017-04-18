#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPanel/OnChangeDelegate
struct OnChangeDelegate_t1697451811;
// BetterList`1<UIWidget>
struct BetterList_1_t1673430560;
// BetterList`1<UnityEngine.Material>
struct BetterList_1_t414095569;
// BetterList`1<UIDrawCall>
struct BetterList_1_t3512232154;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t2464096223;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t2464096221;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1094906160;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UIPanel[]
struct UIPanelU5BU5D_t364647709;
// System.Comparison`1<UIWidget>
struct Comparison_1_t2714780769;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "AssemblyU2DCSharp_UIPanel_DebugInfo1876253092.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping4042448929.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPanel
struct  UIPanel_t1795085332  : public MonoBehaviour_t1158329972
{
public:
	// UIPanel/OnChangeDelegate UIPanel::onChange
	OnChangeDelegate_t1697451811 * ___onChange_2;
	// System.Boolean UIPanel::sortByDepth
	bool ___sortByDepth_3;
	// System.Boolean UIPanel::showInPanelTool
	bool ___showInPanelTool_4;
	// System.Boolean UIPanel::generateNormals
	bool ___generateNormals_5;
	// System.Boolean UIPanel::depthPass
	bool ___depthPass_6;
	// System.Boolean UIPanel::widgetsAreStatic
	bool ___widgetsAreStatic_7;
	// System.Boolean UIPanel::cullWhileDragging
	bool ___cullWhileDragging_8;
	// UnityEngine.Matrix4x4 UIPanel::worldToLocal
	Matrix4x4_t2933234003  ___worldToLocal_9;
	// System.Single UIPanel::mAlpha
	float ___mAlpha_10;
	// UIPanel/DebugInfo UIPanel::mDebugInfo
	int32_t ___mDebugInfo_11;
	// UIDrawCall/Clipping UIPanel::mClipping
	int32_t ___mClipping_12;
	// UnityEngine.Vector4 UIPanel::mClipRange
	Vector4_t2243707581  ___mClipRange_13;
	// UnityEngine.Vector2 UIPanel::mClipSoftness
	Vector2_t2243707579  ___mClipSoftness_14;
	// BetterList`1<UIWidget> UIPanel::mWidgets
	BetterList_1_t1673430560 * ___mWidgets_15;
	// BetterList`1<UnityEngine.Material> UIPanel::mChanged
	BetterList_1_t414095569 * ___mChanged_16;
	// BetterList`1<UIDrawCall> UIPanel::mDrawCalls
	BetterList_1_t3512232154 * ___mDrawCalls_17;
	// BetterList`1<UnityEngine.Vector3> UIPanel::mVerts
	BetterList_1_t2464096222 * ___mVerts_18;
	// BetterList`1<UnityEngine.Vector3> UIPanel::mNorms
	BetterList_1_t2464096222 * ___mNorms_19;
	// BetterList`1<UnityEngine.Vector4> UIPanel::mTans
	BetterList_1_t2464096223 * ___mTans_20;
	// BetterList`1<UnityEngine.Vector2> UIPanel::mUvs
	BetterList_1_t2464096221 * ___mUvs_21;
	// BetterList`1<UnityEngine.Color32> UIPanel::mCols
	BetterList_1_t1094906160 * ___mCols_22;
	// UnityEngine.GameObject UIPanel::mGo
	GameObject_t1756533147 * ___mGo_23;
	// UnityEngine.Transform UIPanel::mTrans
	Transform_t3275118058 * ___mTrans_24;
	// UnityEngine.Camera UIPanel::mCam
	Camera_t189460977 * ___mCam_25;
	// System.Int32 UIPanel::mLayer
	int32_t ___mLayer_26;
	// System.Boolean UIPanel::mDepthChanged
	bool ___mDepthChanged_27;
	// System.Single UIPanel::mCullTime
	float ___mCullTime_28;
	// System.Single UIPanel::mUpdateTime
	float ___mUpdateTime_29;
	// System.Single UIPanel::mMatrixTime
	float ___mMatrixTime_30;
	// UnityEngine.Vector2 UIPanel::mMin
	Vector2_t2243707579  ___mMin_32;
	// UnityEngine.Vector2 UIPanel::mMax
	Vector2_t2243707579  ___mMax_33;
	// UIPanel[] UIPanel::mChildPanels
	UIPanelU5BU5D_t364647709* ___mChildPanels_34;

public:
	inline static int32_t get_offset_of_onChange_2() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___onChange_2)); }
	inline OnChangeDelegate_t1697451811 * get_onChange_2() const { return ___onChange_2; }
	inline OnChangeDelegate_t1697451811 ** get_address_of_onChange_2() { return &___onChange_2; }
	inline void set_onChange_2(OnChangeDelegate_t1697451811 * value)
	{
		___onChange_2 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_2, value);
	}

	inline static int32_t get_offset_of_sortByDepth_3() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___sortByDepth_3)); }
	inline bool get_sortByDepth_3() const { return ___sortByDepth_3; }
	inline bool* get_address_of_sortByDepth_3() { return &___sortByDepth_3; }
	inline void set_sortByDepth_3(bool value)
	{
		___sortByDepth_3 = value;
	}

	inline static int32_t get_offset_of_showInPanelTool_4() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___showInPanelTool_4)); }
	inline bool get_showInPanelTool_4() const { return ___showInPanelTool_4; }
	inline bool* get_address_of_showInPanelTool_4() { return &___showInPanelTool_4; }
	inline void set_showInPanelTool_4(bool value)
	{
		___showInPanelTool_4 = value;
	}

	inline static int32_t get_offset_of_generateNormals_5() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___generateNormals_5)); }
	inline bool get_generateNormals_5() const { return ___generateNormals_5; }
	inline bool* get_address_of_generateNormals_5() { return &___generateNormals_5; }
	inline void set_generateNormals_5(bool value)
	{
		___generateNormals_5 = value;
	}

	inline static int32_t get_offset_of_depthPass_6() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___depthPass_6)); }
	inline bool get_depthPass_6() const { return ___depthPass_6; }
	inline bool* get_address_of_depthPass_6() { return &___depthPass_6; }
	inline void set_depthPass_6(bool value)
	{
		___depthPass_6 = value;
	}

	inline static int32_t get_offset_of_widgetsAreStatic_7() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___widgetsAreStatic_7)); }
	inline bool get_widgetsAreStatic_7() const { return ___widgetsAreStatic_7; }
	inline bool* get_address_of_widgetsAreStatic_7() { return &___widgetsAreStatic_7; }
	inline void set_widgetsAreStatic_7(bool value)
	{
		___widgetsAreStatic_7 = value;
	}

	inline static int32_t get_offset_of_cullWhileDragging_8() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___cullWhileDragging_8)); }
	inline bool get_cullWhileDragging_8() const { return ___cullWhileDragging_8; }
	inline bool* get_address_of_cullWhileDragging_8() { return &___cullWhileDragging_8; }
	inline void set_cullWhileDragging_8(bool value)
	{
		___cullWhileDragging_8 = value;
	}

	inline static int32_t get_offset_of_worldToLocal_9() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___worldToLocal_9)); }
	inline Matrix4x4_t2933234003  get_worldToLocal_9() const { return ___worldToLocal_9; }
	inline Matrix4x4_t2933234003 * get_address_of_worldToLocal_9() { return &___worldToLocal_9; }
	inline void set_worldToLocal_9(Matrix4x4_t2933234003  value)
	{
		___worldToLocal_9 = value;
	}

	inline static int32_t get_offset_of_mAlpha_10() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mAlpha_10)); }
	inline float get_mAlpha_10() const { return ___mAlpha_10; }
	inline float* get_address_of_mAlpha_10() { return &___mAlpha_10; }
	inline void set_mAlpha_10(float value)
	{
		___mAlpha_10 = value;
	}

	inline static int32_t get_offset_of_mDebugInfo_11() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mDebugInfo_11)); }
	inline int32_t get_mDebugInfo_11() const { return ___mDebugInfo_11; }
	inline int32_t* get_address_of_mDebugInfo_11() { return &___mDebugInfo_11; }
	inline void set_mDebugInfo_11(int32_t value)
	{
		___mDebugInfo_11 = value;
	}

	inline static int32_t get_offset_of_mClipping_12() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipping_12)); }
	inline int32_t get_mClipping_12() const { return ___mClipping_12; }
	inline int32_t* get_address_of_mClipping_12() { return &___mClipping_12; }
	inline void set_mClipping_12(int32_t value)
	{
		___mClipping_12 = value;
	}

	inline static int32_t get_offset_of_mClipRange_13() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipRange_13)); }
	inline Vector4_t2243707581  get_mClipRange_13() const { return ___mClipRange_13; }
	inline Vector4_t2243707581 * get_address_of_mClipRange_13() { return &___mClipRange_13; }
	inline void set_mClipRange_13(Vector4_t2243707581  value)
	{
		___mClipRange_13 = value;
	}

	inline static int32_t get_offset_of_mClipSoftness_14() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipSoftness_14)); }
	inline Vector2_t2243707579  get_mClipSoftness_14() const { return ___mClipSoftness_14; }
	inline Vector2_t2243707579 * get_address_of_mClipSoftness_14() { return &___mClipSoftness_14; }
	inline void set_mClipSoftness_14(Vector2_t2243707579  value)
	{
		___mClipSoftness_14 = value;
	}

	inline static int32_t get_offset_of_mWidgets_15() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mWidgets_15)); }
	inline BetterList_1_t1673430560 * get_mWidgets_15() const { return ___mWidgets_15; }
	inline BetterList_1_t1673430560 ** get_address_of_mWidgets_15() { return &___mWidgets_15; }
	inline void set_mWidgets_15(BetterList_1_t1673430560 * value)
	{
		___mWidgets_15 = value;
		Il2CppCodeGenWriteBarrier(&___mWidgets_15, value);
	}

	inline static int32_t get_offset_of_mChanged_16() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mChanged_16)); }
	inline BetterList_1_t414095569 * get_mChanged_16() const { return ___mChanged_16; }
	inline BetterList_1_t414095569 ** get_address_of_mChanged_16() { return &___mChanged_16; }
	inline void set_mChanged_16(BetterList_1_t414095569 * value)
	{
		___mChanged_16 = value;
		Il2CppCodeGenWriteBarrier(&___mChanged_16, value);
	}

	inline static int32_t get_offset_of_mDrawCalls_17() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mDrawCalls_17)); }
	inline BetterList_1_t3512232154 * get_mDrawCalls_17() const { return ___mDrawCalls_17; }
	inline BetterList_1_t3512232154 ** get_address_of_mDrawCalls_17() { return &___mDrawCalls_17; }
	inline void set_mDrawCalls_17(BetterList_1_t3512232154 * value)
	{
		___mDrawCalls_17 = value;
		Il2CppCodeGenWriteBarrier(&___mDrawCalls_17, value);
	}

	inline static int32_t get_offset_of_mVerts_18() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mVerts_18)); }
	inline BetterList_1_t2464096222 * get_mVerts_18() const { return ___mVerts_18; }
	inline BetterList_1_t2464096222 ** get_address_of_mVerts_18() { return &___mVerts_18; }
	inline void set_mVerts_18(BetterList_1_t2464096222 * value)
	{
		___mVerts_18 = value;
		Il2CppCodeGenWriteBarrier(&___mVerts_18, value);
	}

	inline static int32_t get_offset_of_mNorms_19() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mNorms_19)); }
	inline BetterList_1_t2464096222 * get_mNorms_19() const { return ___mNorms_19; }
	inline BetterList_1_t2464096222 ** get_address_of_mNorms_19() { return &___mNorms_19; }
	inline void set_mNorms_19(BetterList_1_t2464096222 * value)
	{
		___mNorms_19 = value;
		Il2CppCodeGenWriteBarrier(&___mNorms_19, value);
	}

	inline static int32_t get_offset_of_mTans_20() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mTans_20)); }
	inline BetterList_1_t2464096223 * get_mTans_20() const { return ___mTans_20; }
	inline BetterList_1_t2464096223 ** get_address_of_mTans_20() { return &___mTans_20; }
	inline void set_mTans_20(BetterList_1_t2464096223 * value)
	{
		___mTans_20 = value;
		Il2CppCodeGenWriteBarrier(&___mTans_20, value);
	}

	inline static int32_t get_offset_of_mUvs_21() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mUvs_21)); }
	inline BetterList_1_t2464096221 * get_mUvs_21() const { return ___mUvs_21; }
	inline BetterList_1_t2464096221 ** get_address_of_mUvs_21() { return &___mUvs_21; }
	inline void set_mUvs_21(BetterList_1_t2464096221 * value)
	{
		___mUvs_21 = value;
		Il2CppCodeGenWriteBarrier(&___mUvs_21, value);
	}

	inline static int32_t get_offset_of_mCols_22() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mCols_22)); }
	inline BetterList_1_t1094906160 * get_mCols_22() const { return ___mCols_22; }
	inline BetterList_1_t1094906160 ** get_address_of_mCols_22() { return &___mCols_22; }
	inline void set_mCols_22(BetterList_1_t1094906160 * value)
	{
		___mCols_22 = value;
		Il2CppCodeGenWriteBarrier(&___mCols_22, value);
	}

	inline static int32_t get_offset_of_mGo_23() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mGo_23)); }
	inline GameObject_t1756533147 * get_mGo_23() const { return ___mGo_23; }
	inline GameObject_t1756533147 ** get_address_of_mGo_23() { return &___mGo_23; }
	inline void set_mGo_23(GameObject_t1756533147 * value)
	{
		___mGo_23 = value;
		Il2CppCodeGenWriteBarrier(&___mGo_23, value);
	}

	inline static int32_t get_offset_of_mTrans_24() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mTrans_24)); }
	inline Transform_t3275118058 * get_mTrans_24() const { return ___mTrans_24; }
	inline Transform_t3275118058 ** get_address_of_mTrans_24() { return &___mTrans_24; }
	inline void set_mTrans_24(Transform_t3275118058 * value)
	{
		___mTrans_24 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_24, value);
	}

	inline static int32_t get_offset_of_mCam_25() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mCam_25)); }
	inline Camera_t189460977 * get_mCam_25() const { return ___mCam_25; }
	inline Camera_t189460977 ** get_address_of_mCam_25() { return &___mCam_25; }
	inline void set_mCam_25(Camera_t189460977 * value)
	{
		___mCam_25 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_25, value);
	}

	inline static int32_t get_offset_of_mLayer_26() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mLayer_26)); }
	inline int32_t get_mLayer_26() const { return ___mLayer_26; }
	inline int32_t* get_address_of_mLayer_26() { return &___mLayer_26; }
	inline void set_mLayer_26(int32_t value)
	{
		___mLayer_26 = value;
	}

	inline static int32_t get_offset_of_mDepthChanged_27() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mDepthChanged_27)); }
	inline bool get_mDepthChanged_27() const { return ___mDepthChanged_27; }
	inline bool* get_address_of_mDepthChanged_27() { return &___mDepthChanged_27; }
	inline void set_mDepthChanged_27(bool value)
	{
		___mDepthChanged_27 = value;
	}

	inline static int32_t get_offset_of_mCullTime_28() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mCullTime_28)); }
	inline float get_mCullTime_28() const { return ___mCullTime_28; }
	inline float* get_address_of_mCullTime_28() { return &___mCullTime_28; }
	inline void set_mCullTime_28(float value)
	{
		___mCullTime_28 = value;
	}

	inline static int32_t get_offset_of_mUpdateTime_29() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mUpdateTime_29)); }
	inline float get_mUpdateTime_29() const { return ___mUpdateTime_29; }
	inline float* get_address_of_mUpdateTime_29() { return &___mUpdateTime_29; }
	inline void set_mUpdateTime_29(float value)
	{
		___mUpdateTime_29 = value;
	}

	inline static int32_t get_offset_of_mMatrixTime_30() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mMatrixTime_30)); }
	inline float get_mMatrixTime_30() const { return ___mMatrixTime_30; }
	inline float* get_address_of_mMatrixTime_30() { return &___mMatrixTime_30; }
	inline void set_mMatrixTime_30(float value)
	{
		___mMatrixTime_30 = value;
	}

	inline static int32_t get_offset_of_mMin_32() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mMin_32)); }
	inline Vector2_t2243707579  get_mMin_32() const { return ___mMin_32; }
	inline Vector2_t2243707579 * get_address_of_mMin_32() { return &___mMin_32; }
	inline void set_mMin_32(Vector2_t2243707579  value)
	{
		___mMin_32 = value;
	}

	inline static int32_t get_offset_of_mMax_33() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mMax_33)); }
	inline Vector2_t2243707579  get_mMax_33() const { return ___mMax_33; }
	inline Vector2_t2243707579 * get_address_of_mMax_33() { return &___mMax_33; }
	inline void set_mMax_33(Vector2_t2243707579  value)
	{
		___mMax_33 = value;
	}

	inline static int32_t get_offset_of_mChildPanels_34() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mChildPanels_34)); }
	inline UIPanelU5BU5D_t364647709* get_mChildPanels_34() const { return ___mChildPanels_34; }
	inline UIPanelU5BU5D_t364647709** get_address_of_mChildPanels_34() { return &___mChildPanels_34; }
	inline void set_mChildPanels_34(UIPanelU5BU5D_t364647709* value)
	{
		___mChildPanels_34 = value;
		Il2CppCodeGenWriteBarrier(&___mChildPanels_34, value);
	}
};

struct UIPanel_t1795085332_StaticFields
{
public:
	// System.Single[] UIPanel::mTemp
	SingleU5BU5D_t577127397* ___mTemp_31;
	// System.Comparison`1<UIWidget> UIPanel::<>f__mg$cache0
	Comparison_1_t2714780769 * ___U3CU3Ef__mgU24cache0_35;

public:
	inline static int32_t get_offset_of_mTemp_31() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332_StaticFields, ___mTemp_31)); }
	inline SingleU5BU5D_t577127397* get_mTemp_31() const { return ___mTemp_31; }
	inline SingleU5BU5D_t577127397** get_address_of_mTemp_31() { return &___mTemp_31; }
	inline void set_mTemp_31(SingleU5BU5D_t577127397* value)
	{
		___mTemp_31 = value;
		Il2CppCodeGenWriteBarrier(&___mTemp_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_35() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332_StaticFields, ___U3CU3Ef__mgU24cache0_35)); }
	inline Comparison_1_t2714780769 * get_U3CU3Ef__mgU24cache0_35() const { return ___U3CU3Ef__mgU24cache0_35; }
	inline Comparison_1_t2714780769 ** get_address_of_U3CU3Ef__mgU24cache0_35() { return &___U3CU3Ef__mgU24cache0_35; }
	inline void set_U3CU3Ef__mgU24cache0_35(Comparison_1_t2714780769 * value)
	{
		___U3CU3Ef__mgU24cache0_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
