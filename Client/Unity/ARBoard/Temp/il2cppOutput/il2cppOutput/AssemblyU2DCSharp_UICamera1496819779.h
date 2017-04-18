#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UICamera/OnCustomInput
struct OnCustomInput_t3556372712;
// UICamera
struct UICamera_t1496819779;
// UnityEngine.Camera
struct Camera_t189460977;
// UICamera/MouseOrTouch
struct MouseOrTouch_t2470076277;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UICamera>
struct List_1_t865940911;
// System.Collections.Generic.List`1<UICamera/Highlighted>
struct List_1_t2777656077;
// UICamera/MouseOrTouch[]
struct MouseOrTouchU5BU5D_t3885609752;
// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>
struct Dictionary_2_t1477901912;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t1348919171;
// System.Comparison`1<UICamera>
struct Comparison_1_t2758558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera
struct  UICamera_t1496819779  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean UICamera::debug
	bool ___debug_2;
	// System.Boolean UICamera::useMouse
	bool ___useMouse_3;
	// System.Boolean UICamera::useTouch
	bool ___useTouch_4;
	// System.Boolean UICamera::allowMultiTouch
	bool ___allowMultiTouch_5;
	// System.Boolean UICamera::useKeyboard
	bool ___useKeyboard_6;
	// System.Boolean UICamera::useController
	bool ___useController_7;
	// System.Boolean UICamera::stickyPress
	bool ___stickyPress_8;
	// UnityEngine.LayerMask UICamera::eventReceiverMask
	LayerMask_t3188175821  ___eventReceiverMask_9;
	// System.Boolean UICamera::clipRaycasts
	bool ___clipRaycasts_10;
	// System.Single UICamera::tooltipDelay
	float ___tooltipDelay_11;
	// System.Boolean UICamera::stickyTooltip
	bool ___stickyTooltip_12;
	// System.Single UICamera::mouseDragThreshold
	float ___mouseDragThreshold_13;
	// System.Single UICamera::mouseClickThreshold
	float ___mouseClickThreshold_14;
	// System.Single UICamera::touchDragThreshold
	float ___touchDragThreshold_15;
	// System.Single UICamera::touchClickThreshold
	float ___touchClickThreshold_16;
	// System.Single UICamera::rangeDistance
	float ___rangeDistance_17;
	// System.String UICamera::scrollAxisName
	String_t* ___scrollAxisName_18;
	// System.String UICamera::verticalAxisName
	String_t* ___verticalAxisName_19;
	// System.String UICamera::horizontalAxisName
	String_t* ___horizontalAxisName_20;
	// UnityEngine.KeyCode UICamera::submitKey0
	int32_t ___submitKey0_21;
	// UnityEngine.KeyCode UICamera::submitKey1
	int32_t ___submitKey1_22;
	// UnityEngine.KeyCode UICamera::cancelKey0
	int32_t ___cancelKey0_23;
	// UnityEngine.KeyCode UICamera::cancelKey1
	int32_t ___cancelKey1_24;
	// UnityEngine.GameObject UICamera::mTooltip
	GameObject_t1756533147 * ___mTooltip_44;
	// UnityEngine.Camera UICamera::mCam
	Camera_t189460977 * ___mCam_45;
	// UnityEngine.LayerMask UICamera::mLayerMask
	LayerMask_t3188175821  ___mLayerMask_46;
	// System.Single UICamera::mTooltipTime
	float ___mTooltipTime_47;
	// System.Boolean UICamera::mIsEditor
	bool ___mIsEditor_48;

public:
	inline static int32_t get_offset_of_debug_2() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___debug_2)); }
	inline bool get_debug_2() const { return ___debug_2; }
	inline bool* get_address_of_debug_2() { return &___debug_2; }
	inline void set_debug_2(bool value)
	{
		___debug_2 = value;
	}

	inline static int32_t get_offset_of_useMouse_3() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useMouse_3)); }
	inline bool get_useMouse_3() const { return ___useMouse_3; }
	inline bool* get_address_of_useMouse_3() { return &___useMouse_3; }
	inline void set_useMouse_3(bool value)
	{
		___useMouse_3 = value;
	}

	inline static int32_t get_offset_of_useTouch_4() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useTouch_4)); }
	inline bool get_useTouch_4() const { return ___useTouch_4; }
	inline bool* get_address_of_useTouch_4() { return &___useTouch_4; }
	inline void set_useTouch_4(bool value)
	{
		___useTouch_4 = value;
	}

	inline static int32_t get_offset_of_allowMultiTouch_5() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___allowMultiTouch_5)); }
	inline bool get_allowMultiTouch_5() const { return ___allowMultiTouch_5; }
	inline bool* get_address_of_allowMultiTouch_5() { return &___allowMultiTouch_5; }
	inline void set_allowMultiTouch_5(bool value)
	{
		___allowMultiTouch_5 = value;
	}

	inline static int32_t get_offset_of_useKeyboard_6() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useKeyboard_6)); }
	inline bool get_useKeyboard_6() const { return ___useKeyboard_6; }
	inline bool* get_address_of_useKeyboard_6() { return &___useKeyboard_6; }
	inline void set_useKeyboard_6(bool value)
	{
		___useKeyboard_6 = value;
	}

	inline static int32_t get_offset_of_useController_7() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useController_7)); }
	inline bool get_useController_7() const { return ___useController_7; }
	inline bool* get_address_of_useController_7() { return &___useController_7; }
	inline void set_useController_7(bool value)
	{
		___useController_7 = value;
	}

	inline static int32_t get_offset_of_stickyPress_8() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___stickyPress_8)); }
	inline bool get_stickyPress_8() const { return ___stickyPress_8; }
	inline bool* get_address_of_stickyPress_8() { return &___stickyPress_8; }
	inline void set_stickyPress_8(bool value)
	{
		___stickyPress_8 = value;
	}

	inline static int32_t get_offset_of_eventReceiverMask_9() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___eventReceiverMask_9)); }
	inline LayerMask_t3188175821  get_eventReceiverMask_9() const { return ___eventReceiverMask_9; }
	inline LayerMask_t3188175821 * get_address_of_eventReceiverMask_9() { return &___eventReceiverMask_9; }
	inline void set_eventReceiverMask_9(LayerMask_t3188175821  value)
	{
		___eventReceiverMask_9 = value;
	}

	inline static int32_t get_offset_of_clipRaycasts_10() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___clipRaycasts_10)); }
	inline bool get_clipRaycasts_10() const { return ___clipRaycasts_10; }
	inline bool* get_address_of_clipRaycasts_10() { return &___clipRaycasts_10; }
	inline void set_clipRaycasts_10(bool value)
	{
		___clipRaycasts_10 = value;
	}

	inline static int32_t get_offset_of_tooltipDelay_11() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___tooltipDelay_11)); }
	inline float get_tooltipDelay_11() const { return ___tooltipDelay_11; }
	inline float* get_address_of_tooltipDelay_11() { return &___tooltipDelay_11; }
	inline void set_tooltipDelay_11(float value)
	{
		___tooltipDelay_11 = value;
	}

	inline static int32_t get_offset_of_stickyTooltip_12() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___stickyTooltip_12)); }
	inline bool get_stickyTooltip_12() const { return ___stickyTooltip_12; }
	inline bool* get_address_of_stickyTooltip_12() { return &___stickyTooltip_12; }
	inline void set_stickyTooltip_12(bool value)
	{
		___stickyTooltip_12 = value;
	}

	inline static int32_t get_offset_of_mouseDragThreshold_13() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mouseDragThreshold_13)); }
	inline float get_mouseDragThreshold_13() const { return ___mouseDragThreshold_13; }
	inline float* get_address_of_mouseDragThreshold_13() { return &___mouseDragThreshold_13; }
	inline void set_mouseDragThreshold_13(float value)
	{
		___mouseDragThreshold_13 = value;
	}

	inline static int32_t get_offset_of_mouseClickThreshold_14() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mouseClickThreshold_14)); }
	inline float get_mouseClickThreshold_14() const { return ___mouseClickThreshold_14; }
	inline float* get_address_of_mouseClickThreshold_14() { return &___mouseClickThreshold_14; }
	inline void set_mouseClickThreshold_14(float value)
	{
		___mouseClickThreshold_14 = value;
	}

	inline static int32_t get_offset_of_touchDragThreshold_15() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___touchDragThreshold_15)); }
	inline float get_touchDragThreshold_15() const { return ___touchDragThreshold_15; }
	inline float* get_address_of_touchDragThreshold_15() { return &___touchDragThreshold_15; }
	inline void set_touchDragThreshold_15(float value)
	{
		___touchDragThreshold_15 = value;
	}

	inline static int32_t get_offset_of_touchClickThreshold_16() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___touchClickThreshold_16)); }
	inline float get_touchClickThreshold_16() const { return ___touchClickThreshold_16; }
	inline float* get_address_of_touchClickThreshold_16() { return &___touchClickThreshold_16; }
	inline void set_touchClickThreshold_16(float value)
	{
		___touchClickThreshold_16 = value;
	}

	inline static int32_t get_offset_of_rangeDistance_17() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___rangeDistance_17)); }
	inline float get_rangeDistance_17() const { return ___rangeDistance_17; }
	inline float* get_address_of_rangeDistance_17() { return &___rangeDistance_17; }
	inline void set_rangeDistance_17(float value)
	{
		___rangeDistance_17 = value;
	}

	inline static int32_t get_offset_of_scrollAxisName_18() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___scrollAxisName_18)); }
	inline String_t* get_scrollAxisName_18() const { return ___scrollAxisName_18; }
	inline String_t** get_address_of_scrollAxisName_18() { return &___scrollAxisName_18; }
	inline void set_scrollAxisName_18(String_t* value)
	{
		___scrollAxisName_18 = value;
		Il2CppCodeGenWriteBarrier(&___scrollAxisName_18, value);
	}

	inline static int32_t get_offset_of_verticalAxisName_19() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___verticalAxisName_19)); }
	inline String_t* get_verticalAxisName_19() const { return ___verticalAxisName_19; }
	inline String_t** get_address_of_verticalAxisName_19() { return &___verticalAxisName_19; }
	inline void set_verticalAxisName_19(String_t* value)
	{
		___verticalAxisName_19 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxisName_19, value);
	}

	inline static int32_t get_offset_of_horizontalAxisName_20() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___horizontalAxisName_20)); }
	inline String_t* get_horizontalAxisName_20() const { return ___horizontalAxisName_20; }
	inline String_t** get_address_of_horizontalAxisName_20() { return &___horizontalAxisName_20; }
	inline void set_horizontalAxisName_20(String_t* value)
	{
		___horizontalAxisName_20 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxisName_20, value);
	}

	inline static int32_t get_offset_of_submitKey0_21() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___submitKey0_21)); }
	inline int32_t get_submitKey0_21() const { return ___submitKey0_21; }
	inline int32_t* get_address_of_submitKey0_21() { return &___submitKey0_21; }
	inline void set_submitKey0_21(int32_t value)
	{
		___submitKey0_21 = value;
	}

	inline static int32_t get_offset_of_submitKey1_22() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___submitKey1_22)); }
	inline int32_t get_submitKey1_22() const { return ___submitKey1_22; }
	inline int32_t* get_address_of_submitKey1_22() { return &___submitKey1_22; }
	inline void set_submitKey1_22(int32_t value)
	{
		___submitKey1_22 = value;
	}

	inline static int32_t get_offset_of_cancelKey0_23() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___cancelKey0_23)); }
	inline int32_t get_cancelKey0_23() const { return ___cancelKey0_23; }
	inline int32_t* get_address_of_cancelKey0_23() { return &___cancelKey0_23; }
	inline void set_cancelKey0_23(int32_t value)
	{
		___cancelKey0_23 = value;
	}

	inline static int32_t get_offset_of_cancelKey1_24() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___cancelKey1_24)); }
	inline int32_t get_cancelKey1_24() const { return ___cancelKey1_24; }
	inline int32_t* get_address_of_cancelKey1_24() { return &___cancelKey1_24; }
	inline void set_cancelKey1_24(int32_t value)
	{
		___cancelKey1_24 = value;
	}

	inline static int32_t get_offset_of_mTooltip_44() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mTooltip_44)); }
	inline GameObject_t1756533147 * get_mTooltip_44() const { return ___mTooltip_44; }
	inline GameObject_t1756533147 ** get_address_of_mTooltip_44() { return &___mTooltip_44; }
	inline void set_mTooltip_44(GameObject_t1756533147 * value)
	{
		___mTooltip_44 = value;
		Il2CppCodeGenWriteBarrier(&___mTooltip_44, value);
	}

	inline static int32_t get_offset_of_mCam_45() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mCam_45)); }
	inline Camera_t189460977 * get_mCam_45() const { return ___mCam_45; }
	inline Camera_t189460977 ** get_address_of_mCam_45() { return &___mCam_45; }
	inline void set_mCam_45(Camera_t189460977 * value)
	{
		___mCam_45 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_45, value);
	}

	inline static int32_t get_offset_of_mLayerMask_46() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mLayerMask_46)); }
	inline LayerMask_t3188175821  get_mLayerMask_46() const { return ___mLayerMask_46; }
	inline LayerMask_t3188175821 * get_address_of_mLayerMask_46() { return &___mLayerMask_46; }
	inline void set_mLayerMask_46(LayerMask_t3188175821  value)
	{
		___mLayerMask_46 = value;
	}

	inline static int32_t get_offset_of_mTooltipTime_47() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mTooltipTime_47)); }
	inline float get_mTooltipTime_47() const { return ___mTooltipTime_47; }
	inline float* get_address_of_mTooltipTime_47() { return &___mTooltipTime_47; }
	inline void set_mTooltipTime_47(float value)
	{
		___mTooltipTime_47 = value;
	}

	inline static int32_t get_offset_of_mIsEditor_48() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mIsEditor_48)); }
	inline bool get_mIsEditor_48() const { return ___mIsEditor_48; }
	inline bool* get_address_of_mIsEditor_48() { return &___mIsEditor_48; }
	inline void set_mIsEditor_48(bool value)
	{
		___mIsEditor_48 = value;
	}
};

struct UICamera_t1496819779_StaticFields
{
public:
	// UICamera/OnCustomInput UICamera::onCustomInput
	OnCustomInput_t3556372712 * ___onCustomInput_25;
	// System.Boolean UICamera::showTooltips
	bool ___showTooltips_26;
	// UnityEngine.Vector2 UICamera::lastTouchPosition
	Vector2_t2243707579  ___lastTouchPosition_27;
	// UnityEngine.RaycastHit UICamera::lastHit
	RaycastHit_t87180320  ___lastHit_28;
	// UICamera UICamera::current
	UICamera_t1496819779 * ___current_29;
	// UnityEngine.Camera UICamera::currentCamera
	Camera_t189460977 * ___currentCamera_30;
	// System.Int32 UICamera::currentTouchID
	int32_t ___currentTouchID_31;
	// UICamera/MouseOrTouch UICamera::currentTouch
	MouseOrTouch_t2470076277 * ___currentTouch_32;
	// System.Boolean UICamera::inputHasFocus
	bool ___inputHasFocus_33;
	// UnityEngine.GameObject UICamera::genericEventHandler
	GameObject_t1756533147 * ___genericEventHandler_34;
	// UnityEngine.GameObject UICamera::fallThrough
	GameObject_t1756533147 * ___fallThrough_35;
	// System.Collections.Generic.List`1<UICamera> UICamera::mList
	List_1_t865940911 * ___mList_36;
	// System.Collections.Generic.List`1<UICamera/Highlighted> UICamera::mHighlighted
	List_1_t2777656077 * ___mHighlighted_37;
	// UnityEngine.GameObject UICamera::mSel
	GameObject_t1756533147 * ___mSel_38;
	// UICamera/MouseOrTouch[] UICamera::mMouse
	MouseOrTouchU5BU5D_t3885609752* ___mMouse_39;
	// UnityEngine.GameObject UICamera::mHover
	GameObject_t1756533147 * ___mHover_40;
	// UICamera/MouseOrTouch UICamera::mController
	MouseOrTouch_t2470076277 * ___mController_41;
	// System.Single UICamera::mNextEvent
	float ___mNextEvent_42;
	// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch> UICamera::mTouches
	Dictionary_2_t1477901912 * ___mTouches_43;
	// System.Boolean UICamera::isDragging
	bool ___isDragging_49;
	// UnityEngine.GameObject UICamera::hoveredObject
	GameObject_t1756533147 * ___hoveredObject_50;
	// UnityEngine.RaycastHit UICamera::mEmpty
	RaycastHit_t87180320  ___mEmpty_51;
	// System.Comparison`1<UnityEngine.RaycastHit> UICamera::<>f__am$cache0
	Comparison_1_t1348919171 * ___U3CU3Ef__amU24cache0_52;
	// System.Comparison`1<UICamera> UICamera::<>f__mg$cache0
	Comparison_1_t2758558630 * ___U3CU3Ef__mgU24cache0_53;

public:
	inline static int32_t get_offset_of_onCustomInput_25() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onCustomInput_25)); }
	inline OnCustomInput_t3556372712 * get_onCustomInput_25() const { return ___onCustomInput_25; }
	inline OnCustomInput_t3556372712 ** get_address_of_onCustomInput_25() { return &___onCustomInput_25; }
	inline void set_onCustomInput_25(OnCustomInput_t3556372712 * value)
	{
		___onCustomInput_25 = value;
		Il2CppCodeGenWriteBarrier(&___onCustomInput_25, value);
	}

	inline static int32_t get_offset_of_showTooltips_26() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___showTooltips_26)); }
	inline bool get_showTooltips_26() const { return ___showTooltips_26; }
	inline bool* get_address_of_showTooltips_26() { return &___showTooltips_26; }
	inline void set_showTooltips_26(bool value)
	{
		___showTooltips_26 = value;
	}

	inline static int32_t get_offset_of_lastTouchPosition_27() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___lastTouchPosition_27)); }
	inline Vector2_t2243707579  get_lastTouchPosition_27() const { return ___lastTouchPosition_27; }
	inline Vector2_t2243707579 * get_address_of_lastTouchPosition_27() { return &___lastTouchPosition_27; }
	inline void set_lastTouchPosition_27(Vector2_t2243707579  value)
	{
		___lastTouchPosition_27 = value;
	}

	inline static int32_t get_offset_of_lastHit_28() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___lastHit_28)); }
	inline RaycastHit_t87180320  get_lastHit_28() const { return ___lastHit_28; }
	inline RaycastHit_t87180320 * get_address_of_lastHit_28() { return &___lastHit_28; }
	inline void set_lastHit_28(RaycastHit_t87180320  value)
	{
		___lastHit_28 = value;
	}

	inline static int32_t get_offset_of_current_29() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___current_29)); }
	inline UICamera_t1496819779 * get_current_29() const { return ___current_29; }
	inline UICamera_t1496819779 ** get_address_of_current_29() { return &___current_29; }
	inline void set_current_29(UICamera_t1496819779 * value)
	{
		___current_29 = value;
		Il2CppCodeGenWriteBarrier(&___current_29, value);
	}

	inline static int32_t get_offset_of_currentCamera_30() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentCamera_30)); }
	inline Camera_t189460977 * get_currentCamera_30() const { return ___currentCamera_30; }
	inline Camera_t189460977 ** get_address_of_currentCamera_30() { return &___currentCamera_30; }
	inline void set_currentCamera_30(Camera_t189460977 * value)
	{
		___currentCamera_30 = value;
		Il2CppCodeGenWriteBarrier(&___currentCamera_30, value);
	}

	inline static int32_t get_offset_of_currentTouchID_31() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentTouchID_31)); }
	inline int32_t get_currentTouchID_31() const { return ___currentTouchID_31; }
	inline int32_t* get_address_of_currentTouchID_31() { return &___currentTouchID_31; }
	inline void set_currentTouchID_31(int32_t value)
	{
		___currentTouchID_31 = value;
	}

	inline static int32_t get_offset_of_currentTouch_32() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentTouch_32)); }
	inline MouseOrTouch_t2470076277 * get_currentTouch_32() const { return ___currentTouch_32; }
	inline MouseOrTouch_t2470076277 ** get_address_of_currentTouch_32() { return &___currentTouch_32; }
	inline void set_currentTouch_32(MouseOrTouch_t2470076277 * value)
	{
		___currentTouch_32 = value;
		Il2CppCodeGenWriteBarrier(&___currentTouch_32, value);
	}

	inline static int32_t get_offset_of_inputHasFocus_33() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___inputHasFocus_33)); }
	inline bool get_inputHasFocus_33() const { return ___inputHasFocus_33; }
	inline bool* get_address_of_inputHasFocus_33() { return &___inputHasFocus_33; }
	inline void set_inputHasFocus_33(bool value)
	{
		___inputHasFocus_33 = value;
	}

	inline static int32_t get_offset_of_genericEventHandler_34() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___genericEventHandler_34)); }
	inline GameObject_t1756533147 * get_genericEventHandler_34() const { return ___genericEventHandler_34; }
	inline GameObject_t1756533147 ** get_address_of_genericEventHandler_34() { return &___genericEventHandler_34; }
	inline void set_genericEventHandler_34(GameObject_t1756533147 * value)
	{
		___genericEventHandler_34 = value;
		Il2CppCodeGenWriteBarrier(&___genericEventHandler_34, value);
	}

	inline static int32_t get_offset_of_fallThrough_35() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___fallThrough_35)); }
	inline GameObject_t1756533147 * get_fallThrough_35() const { return ___fallThrough_35; }
	inline GameObject_t1756533147 ** get_address_of_fallThrough_35() { return &___fallThrough_35; }
	inline void set_fallThrough_35(GameObject_t1756533147 * value)
	{
		___fallThrough_35 = value;
		Il2CppCodeGenWriteBarrier(&___fallThrough_35, value);
	}

	inline static int32_t get_offset_of_mList_36() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mList_36)); }
	inline List_1_t865940911 * get_mList_36() const { return ___mList_36; }
	inline List_1_t865940911 ** get_address_of_mList_36() { return &___mList_36; }
	inline void set_mList_36(List_1_t865940911 * value)
	{
		___mList_36 = value;
		Il2CppCodeGenWriteBarrier(&___mList_36, value);
	}

	inline static int32_t get_offset_of_mHighlighted_37() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mHighlighted_37)); }
	inline List_1_t2777656077 * get_mHighlighted_37() const { return ___mHighlighted_37; }
	inline List_1_t2777656077 ** get_address_of_mHighlighted_37() { return &___mHighlighted_37; }
	inline void set_mHighlighted_37(List_1_t2777656077 * value)
	{
		___mHighlighted_37 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlighted_37, value);
	}

	inline static int32_t get_offset_of_mSel_38() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mSel_38)); }
	inline GameObject_t1756533147 * get_mSel_38() const { return ___mSel_38; }
	inline GameObject_t1756533147 ** get_address_of_mSel_38() { return &___mSel_38; }
	inline void set_mSel_38(GameObject_t1756533147 * value)
	{
		___mSel_38 = value;
		Il2CppCodeGenWriteBarrier(&___mSel_38, value);
	}

	inline static int32_t get_offset_of_mMouse_39() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mMouse_39)); }
	inline MouseOrTouchU5BU5D_t3885609752* get_mMouse_39() const { return ___mMouse_39; }
	inline MouseOrTouchU5BU5D_t3885609752** get_address_of_mMouse_39() { return &___mMouse_39; }
	inline void set_mMouse_39(MouseOrTouchU5BU5D_t3885609752* value)
	{
		___mMouse_39 = value;
		Il2CppCodeGenWriteBarrier(&___mMouse_39, value);
	}

	inline static int32_t get_offset_of_mHover_40() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mHover_40)); }
	inline GameObject_t1756533147 * get_mHover_40() const { return ___mHover_40; }
	inline GameObject_t1756533147 ** get_address_of_mHover_40() { return &___mHover_40; }
	inline void set_mHover_40(GameObject_t1756533147 * value)
	{
		___mHover_40 = value;
		Il2CppCodeGenWriteBarrier(&___mHover_40, value);
	}

	inline static int32_t get_offset_of_mController_41() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mController_41)); }
	inline MouseOrTouch_t2470076277 * get_mController_41() const { return ___mController_41; }
	inline MouseOrTouch_t2470076277 ** get_address_of_mController_41() { return &___mController_41; }
	inline void set_mController_41(MouseOrTouch_t2470076277 * value)
	{
		___mController_41 = value;
		Il2CppCodeGenWriteBarrier(&___mController_41, value);
	}

	inline static int32_t get_offset_of_mNextEvent_42() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mNextEvent_42)); }
	inline float get_mNextEvent_42() const { return ___mNextEvent_42; }
	inline float* get_address_of_mNextEvent_42() { return &___mNextEvent_42; }
	inline void set_mNextEvent_42(float value)
	{
		___mNextEvent_42 = value;
	}

	inline static int32_t get_offset_of_mTouches_43() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mTouches_43)); }
	inline Dictionary_2_t1477901912 * get_mTouches_43() const { return ___mTouches_43; }
	inline Dictionary_2_t1477901912 ** get_address_of_mTouches_43() { return &___mTouches_43; }
	inline void set_mTouches_43(Dictionary_2_t1477901912 * value)
	{
		___mTouches_43 = value;
		Il2CppCodeGenWriteBarrier(&___mTouches_43, value);
	}

	inline static int32_t get_offset_of_isDragging_49() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___isDragging_49)); }
	inline bool get_isDragging_49() const { return ___isDragging_49; }
	inline bool* get_address_of_isDragging_49() { return &___isDragging_49; }
	inline void set_isDragging_49(bool value)
	{
		___isDragging_49 = value;
	}

	inline static int32_t get_offset_of_hoveredObject_50() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___hoveredObject_50)); }
	inline GameObject_t1756533147 * get_hoveredObject_50() const { return ___hoveredObject_50; }
	inline GameObject_t1756533147 ** get_address_of_hoveredObject_50() { return &___hoveredObject_50; }
	inline void set_hoveredObject_50(GameObject_t1756533147 * value)
	{
		___hoveredObject_50 = value;
		Il2CppCodeGenWriteBarrier(&___hoveredObject_50, value);
	}

	inline static int32_t get_offset_of_mEmpty_51() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mEmpty_51)); }
	inline RaycastHit_t87180320  get_mEmpty_51() const { return ___mEmpty_51; }
	inline RaycastHit_t87180320 * get_address_of_mEmpty_51() { return &___mEmpty_51; }
	inline void set_mEmpty_51(RaycastHit_t87180320  value)
	{
		___mEmpty_51 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_52() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___U3CU3Ef__amU24cache0_52)); }
	inline Comparison_1_t1348919171 * get_U3CU3Ef__amU24cache0_52() const { return ___U3CU3Ef__amU24cache0_52; }
	inline Comparison_1_t1348919171 ** get_address_of_U3CU3Ef__amU24cache0_52() { return &___U3CU3Ef__amU24cache0_52; }
	inline void set_U3CU3Ef__amU24cache0_52(Comparison_1_t1348919171 * value)
	{
		___U3CU3Ef__amU24cache0_52 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_52, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_53() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___U3CU3Ef__mgU24cache0_53)); }
	inline Comparison_1_t2758558630 * get_U3CU3Ef__mgU24cache0_53() const { return ___U3CU3Ef__mgU24cache0_53; }
	inline Comparison_1_t2758558630 ** get_address_of_U3CU3Ef__mgU24cache0_53() { return &___U3CU3Ef__mgU24cache0_53; }
	inline void set_U3CU3Ef__mgU24cache0_53(Comparison_1_t2758558630 * value)
	{
		___U3CU3Ef__mgU24cache0_53 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_53, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
