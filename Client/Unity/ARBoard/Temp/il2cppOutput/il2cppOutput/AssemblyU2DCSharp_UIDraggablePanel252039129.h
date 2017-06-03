#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIScrollBar
struct UIScrollBar_t1736046648;
// UIDraggablePanel/OnDragFinished
struct OnDragFinished_t2084991149;
// UnityEngine.Transform
struct Transform_t3275118058;
// UIPanel
struct UIPanel_t1795085332;

#include "AssemblyU2DCSharp_IgnoreTimeScale1174060255.h"
#include "AssemblyU2DCSharp_UIDraggablePanel_DragEffect1015351701.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UIDraggablePanel_ShowCondition273965912.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDraggablePanel
struct  UIDraggablePanel_t252039129  : public IgnoreTimeScale_t1174060255
{
public:
	// System.Boolean UIDraggablePanel::restrictWithinPanel
	bool ___restrictWithinPanel_7;
	// System.Boolean UIDraggablePanel::disableDragIfFits
	bool ___disableDragIfFits_8;
	// UIDraggablePanel/DragEffect UIDraggablePanel::dragEffect
	int32_t ___dragEffect_9;
	// System.Boolean UIDraggablePanel::smoothDragStart
	bool ___smoothDragStart_10;
	// UnityEngine.Vector3 UIDraggablePanel::scale
	Vector3_t2243707580  ___scale_11;
	// System.Single UIDraggablePanel::scrollWheelFactor
	float ___scrollWheelFactor_12;
	// System.Single UIDraggablePanel::momentumAmount
	float ___momentumAmount_13;
	// UnityEngine.Vector2 UIDraggablePanel::relativePositionOnReset
	Vector2_t2243707579  ___relativePositionOnReset_14;
	// System.Boolean UIDraggablePanel::repositionClipping
	bool ___repositionClipping_15;
	// System.Boolean UIDraggablePanel::iOSDragEmulation
	bool ___iOSDragEmulation_16;
	// UIScrollBar UIDraggablePanel::horizontalScrollBar
	UIScrollBar_t1736046648 * ___horizontalScrollBar_17;
	// UIScrollBar UIDraggablePanel::verticalScrollBar
	UIScrollBar_t1736046648 * ___verticalScrollBar_18;
	// UIDraggablePanel/ShowCondition UIDraggablePanel::showScrollBars
	int32_t ___showScrollBars_19;
	// UIDraggablePanel/OnDragFinished UIDraggablePanel::onDragFinished
	OnDragFinished_t2084991149 * ___onDragFinished_20;
	// UnityEngine.Transform UIDraggablePanel::mTrans
	Transform_t3275118058 * ___mTrans_21;
	// UIPanel UIDraggablePanel::mPanel
	UIPanel_t1795085332 * ___mPanel_22;
	// UnityEngine.Plane UIDraggablePanel::mPlane
	Plane_t3727654732  ___mPlane_23;
	// UnityEngine.Vector3 UIDraggablePanel::mLastPos
	Vector3_t2243707580  ___mLastPos_24;
	// System.Boolean UIDraggablePanel::mPressed
	bool ___mPressed_25;
	// UnityEngine.Vector3 UIDraggablePanel::mMomentum
	Vector3_t2243707580  ___mMomentum_26;
	// System.Single UIDraggablePanel::mScroll
	float ___mScroll_27;
	// UnityEngine.Bounds UIDraggablePanel::mBounds
	Bounds_t3033363703  ___mBounds_28;
	// System.Boolean UIDraggablePanel::mCalculatedBounds
	bool ___mCalculatedBounds_29;
	// System.Boolean UIDraggablePanel::mShouldMove
	bool ___mShouldMove_30;
	// System.Boolean UIDraggablePanel::mIgnoreCallbacks
	bool ___mIgnoreCallbacks_31;
	// System.Int32 UIDraggablePanel::mDragID
	int32_t ___mDragID_32;
	// UnityEngine.Vector2 UIDraggablePanel::mDragStartOffset
	Vector2_t2243707579  ___mDragStartOffset_33;
	// System.Boolean UIDraggablePanel::mDragStarted
	bool ___mDragStarted_34;

public:
	inline static int32_t get_offset_of_restrictWithinPanel_7() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___restrictWithinPanel_7)); }
	inline bool get_restrictWithinPanel_7() const { return ___restrictWithinPanel_7; }
	inline bool* get_address_of_restrictWithinPanel_7() { return &___restrictWithinPanel_7; }
	inline void set_restrictWithinPanel_7(bool value)
	{
		___restrictWithinPanel_7 = value;
	}

	inline static int32_t get_offset_of_disableDragIfFits_8() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___disableDragIfFits_8)); }
	inline bool get_disableDragIfFits_8() const { return ___disableDragIfFits_8; }
	inline bool* get_address_of_disableDragIfFits_8() { return &___disableDragIfFits_8; }
	inline void set_disableDragIfFits_8(bool value)
	{
		___disableDragIfFits_8 = value;
	}

	inline static int32_t get_offset_of_dragEffect_9() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___dragEffect_9)); }
	inline int32_t get_dragEffect_9() const { return ___dragEffect_9; }
	inline int32_t* get_address_of_dragEffect_9() { return &___dragEffect_9; }
	inline void set_dragEffect_9(int32_t value)
	{
		___dragEffect_9 = value;
	}

	inline static int32_t get_offset_of_smoothDragStart_10() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___smoothDragStart_10)); }
	inline bool get_smoothDragStart_10() const { return ___smoothDragStart_10; }
	inline bool* get_address_of_smoothDragStart_10() { return &___smoothDragStart_10; }
	inline void set_smoothDragStart_10(bool value)
	{
		___smoothDragStart_10 = value;
	}

	inline static int32_t get_offset_of_scale_11() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___scale_11)); }
	inline Vector3_t2243707580  get_scale_11() const { return ___scale_11; }
	inline Vector3_t2243707580 * get_address_of_scale_11() { return &___scale_11; }
	inline void set_scale_11(Vector3_t2243707580  value)
	{
		___scale_11 = value;
	}

	inline static int32_t get_offset_of_scrollWheelFactor_12() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___scrollWheelFactor_12)); }
	inline float get_scrollWheelFactor_12() const { return ___scrollWheelFactor_12; }
	inline float* get_address_of_scrollWheelFactor_12() { return &___scrollWheelFactor_12; }
	inline void set_scrollWheelFactor_12(float value)
	{
		___scrollWheelFactor_12 = value;
	}

	inline static int32_t get_offset_of_momentumAmount_13() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___momentumAmount_13)); }
	inline float get_momentumAmount_13() const { return ___momentumAmount_13; }
	inline float* get_address_of_momentumAmount_13() { return &___momentumAmount_13; }
	inline void set_momentumAmount_13(float value)
	{
		___momentumAmount_13 = value;
	}

	inline static int32_t get_offset_of_relativePositionOnReset_14() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___relativePositionOnReset_14)); }
	inline Vector2_t2243707579  get_relativePositionOnReset_14() const { return ___relativePositionOnReset_14; }
	inline Vector2_t2243707579 * get_address_of_relativePositionOnReset_14() { return &___relativePositionOnReset_14; }
	inline void set_relativePositionOnReset_14(Vector2_t2243707579  value)
	{
		___relativePositionOnReset_14 = value;
	}

	inline static int32_t get_offset_of_repositionClipping_15() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___repositionClipping_15)); }
	inline bool get_repositionClipping_15() const { return ___repositionClipping_15; }
	inline bool* get_address_of_repositionClipping_15() { return &___repositionClipping_15; }
	inline void set_repositionClipping_15(bool value)
	{
		___repositionClipping_15 = value;
	}

	inline static int32_t get_offset_of_iOSDragEmulation_16() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___iOSDragEmulation_16)); }
	inline bool get_iOSDragEmulation_16() const { return ___iOSDragEmulation_16; }
	inline bool* get_address_of_iOSDragEmulation_16() { return &___iOSDragEmulation_16; }
	inline void set_iOSDragEmulation_16(bool value)
	{
		___iOSDragEmulation_16 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollBar_17() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___horizontalScrollBar_17)); }
	inline UIScrollBar_t1736046648 * get_horizontalScrollBar_17() const { return ___horizontalScrollBar_17; }
	inline UIScrollBar_t1736046648 ** get_address_of_horizontalScrollBar_17() { return &___horizontalScrollBar_17; }
	inline void set_horizontalScrollBar_17(UIScrollBar_t1736046648 * value)
	{
		___horizontalScrollBar_17 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalScrollBar_17, value);
	}

	inline static int32_t get_offset_of_verticalScrollBar_18() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___verticalScrollBar_18)); }
	inline UIScrollBar_t1736046648 * get_verticalScrollBar_18() const { return ___verticalScrollBar_18; }
	inline UIScrollBar_t1736046648 ** get_address_of_verticalScrollBar_18() { return &___verticalScrollBar_18; }
	inline void set_verticalScrollBar_18(UIScrollBar_t1736046648 * value)
	{
		___verticalScrollBar_18 = value;
		Il2CppCodeGenWriteBarrier(&___verticalScrollBar_18, value);
	}

	inline static int32_t get_offset_of_showScrollBars_19() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___showScrollBars_19)); }
	inline int32_t get_showScrollBars_19() const { return ___showScrollBars_19; }
	inline int32_t* get_address_of_showScrollBars_19() { return &___showScrollBars_19; }
	inline void set_showScrollBars_19(int32_t value)
	{
		___showScrollBars_19 = value;
	}

	inline static int32_t get_offset_of_onDragFinished_20() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___onDragFinished_20)); }
	inline OnDragFinished_t2084991149 * get_onDragFinished_20() const { return ___onDragFinished_20; }
	inline OnDragFinished_t2084991149 ** get_address_of_onDragFinished_20() { return &___onDragFinished_20; }
	inline void set_onDragFinished_20(OnDragFinished_t2084991149 * value)
	{
		___onDragFinished_20 = value;
		Il2CppCodeGenWriteBarrier(&___onDragFinished_20, value);
	}

	inline static int32_t get_offset_of_mTrans_21() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mTrans_21)); }
	inline Transform_t3275118058 * get_mTrans_21() const { return ___mTrans_21; }
	inline Transform_t3275118058 ** get_address_of_mTrans_21() { return &___mTrans_21; }
	inline void set_mTrans_21(Transform_t3275118058 * value)
	{
		___mTrans_21 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_21, value);
	}

	inline static int32_t get_offset_of_mPanel_22() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mPanel_22)); }
	inline UIPanel_t1795085332 * get_mPanel_22() const { return ___mPanel_22; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_22() { return &___mPanel_22; }
	inline void set_mPanel_22(UIPanel_t1795085332 * value)
	{
		___mPanel_22 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_22, value);
	}

	inline static int32_t get_offset_of_mPlane_23() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mPlane_23)); }
	inline Plane_t3727654732  get_mPlane_23() const { return ___mPlane_23; }
	inline Plane_t3727654732 * get_address_of_mPlane_23() { return &___mPlane_23; }
	inline void set_mPlane_23(Plane_t3727654732  value)
	{
		___mPlane_23 = value;
	}

	inline static int32_t get_offset_of_mLastPos_24() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mLastPos_24)); }
	inline Vector3_t2243707580  get_mLastPos_24() const { return ___mLastPos_24; }
	inline Vector3_t2243707580 * get_address_of_mLastPos_24() { return &___mLastPos_24; }
	inline void set_mLastPos_24(Vector3_t2243707580  value)
	{
		___mLastPos_24 = value;
	}

	inline static int32_t get_offset_of_mPressed_25() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mPressed_25)); }
	inline bool get_mPressed_25() const { return ___mPressed_25; }
	inline bool* get_address_of_mPressed_25() { return &___mPressed_25; }
	inline void set_mPressed_25(bool value)
	{
		___mPressed_25 = value;
	}

	inline static int32_t get_offset_of_mMomentum_26() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mMomentum_26)); }
	inline Vector3_t2243707580  get_mMomentum_26() const { return ___mMomentum_26; }
	inline Vector3_t2243707580 * get_address_of_mMomentum_26() { return &___mMomentum_26; }
	inline void set_mMomentum_26(Vector3_t2243707580  value)
	{
		___mMomentum_26 = value;
	}

	inline static int32_t get_offset_of_mScroll_27() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mScroll_27)); }
	inline float get_mScroll_27() const { return ___mScroll_27; }
	inline float* get_address_of_mScroll_27() { return &___mScroll_27; }
	inline void set_mScroll_27(float value)
	{
		___mScroll_27 = value;
	}

	inline static int32_t get_offset_of_mBounds_28() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mBounds_28)); }
	inline Bounds_t3033363703  get_mBounds_28() const { return ___mBounds_28; }
	inline Bounds_t3033363703 * get_address_of_mBounds_28() { return &___mBounds_28; }
	inline void set_mBounds_28(Bounds_t3033363703  value)
	{
		___mBounds_28 = value;
	}

	inline static int32_t get_offset_of_mCalculatedBounds_29() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mCalculatedBounds_29)); }
	inline bool get_mCalculatedBounds_29() const { return ___mCalculatedBounds_29; }
	inline bool* get_address_of_mCalculatedBounds_29() { return &___mCalculatedBounds_29; }
	inline void set_mCalculatedBounds_29(bool value)
	{
		___mCalculatedBounds_29 = value;
	}

	inline static int32_t get_offset_of_mShouldMove_30() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mShouldMove_30)); }
	inline bool get_mShouldMove_30() const { return ___mShouldMove_30; }
	inline bool* get_address_of_mShouldMove_30() { return &___mShouldMove_30; }
	inline void set_mShouldMove_30(bool value)
	{
		___mShouldMove_30 = value;
	}

	inline static int32_t get_offset_of_mIgnoreCallbacks_31() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mIgnoreCallbacks_31)); }
	inline bool get_mIgnoreCallbacks_31() const { return ___mIgnoreCallbacks_31; }
	inline bool* get_address_of_mIgnoreCallbacks_31() { return &___mIgnoreCallbacks_31; }
	inline void set_mIgnoreCallbacks_31(bool value)
	{
		___mIgnoreCallbacks_31 = value;
	}

	inline static int32_t get_offset_of_mDragID_32() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mDragID_32)); }
	inline int32_t get_mDragID_32() const { return ___mDragID_32; }
	inline int32_t* get_address_of_mDragID_32() { return &___mDragID_32; }
	inline void set_mDragID_32(int32_t value)
	{
		___mDragID_32 = value;
	}

	inline static int32_t get_offset_of_mDragStartOffset_33() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mDragStartOffset_33)); }
	inline Vector2_t2243707579  get_mDragStartOffset_33() const { return ___mDragStartOffset_33; }
	inline Vector2_t2243707579 * get_address_of_mDragStartOffset_33() { return &___mDragStartOffset_33; }
	inline void set_mDragStartOffset_33(Vector2_t2243707579  value)
	{
		___mDragStartOffset_33 = value;
	}

	inline static int32_t get_offset_of_mDragStarted_34() { return static_cast<int32_t>(offsetof(UIDraggablePanel_t252039129, ___mDragStarted_34)); }
	inline bool get_mDragStarted_34() const { return ___mDragStarted_34; }
	inline bool* get_address_of_mDragStarted_34() { return &___mDragStarted_34; }
	inline void set_mDragStarted_34(bool value)
	{
		___mDragStarted_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
