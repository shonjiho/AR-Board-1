#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UIWidget
struct UIWidget_t1453041918;
// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animation
struct Animation_t2068071072;
// UIRoot
struct UIRoot_t389944298;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIAnchor_Side3421105907.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIAnchor
struct  UIAnchor_t624210015  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean UIAnchor::mNeedsHalfPixelOffset
	bool ___mNeedsHalfPixelOffset_2;
	// UnityEngine.Camera UIAnchor::uiCamera
	Camera_t189460977 * ___uiCamera_3;
	// UIWidget UIAnchor::widgetContainer
	UIWidget_t1453041918 * ___widgetContainer_4;
	// UIPanel UIAnchor::panelContainer
	UIPanel_t1795085332 * ___panelContainer_5;
	// UIAnchor/Side UIAnchor::side
	int32_t ___side_6;
	// System.Boolean UIAnchor::halfPixelOffset
	bool ___halfPixelOffset_7;
	// System.Boolean UIAnchor::runOnlyOnce
	bool ___runOnlyOnce_8;
	// UnityEngine.Vector2 UIAnchor::relativeOffset
	Vector2_t2243707579  ___relativeOffset_9;
	// UnityEngine.Vector2 UIAnchor::pixelOffset
	Vector2_t2243707579  ___pixelOffset_10;
	// UnityEngine.Transform UIAnchor::mTrans
	Transform_t3275118058 * ___mTrans_11;
	// UnityEngine.Animation UIAnchor::mAnim
	Animation_t2068071072 * ___mAnim_12;
	// UnityEngine.Rect UIAnchor::mRect
	Rect_t3681755626  ___mRect_13;
	// UIRoot UIAnchor::mRoot
	UIRoot_t389944298 * ___mRoot_14;

public:
	inline static int32_t get_offset_of_mNeedsHalfPixelOffset_2() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___mNeedsHalfPixelOffset_2)); }
	inline bool get_mNeedsHalfPixelOffset_2() const { return ___mNeedsHalfPixelOffset_2; }
	inline bool* get_address_of_mNeedsHalfPixelOffset_2() { return &___mNeedsHalfPixelOffset_2; }
	inline void set_mNeedsHalfPixelOffset_2(bool value)
	{
		___mNeedsHalfPixelOffset_2 = value;
	}

	inline static int32_t get_offset_of_uiCamera_3() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___uiCamera_3)); }
	inline Camera_t189460977 * get_uiCamera_3() const { return ___uiCamera_3; }
	inline Camera_t189460977 ** get_address_of_uiCamera_3() { return &___uiCamera_3; }
	inline void set_uiCamera_3(Camera_t189460977 * value)
	{
		___uiCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___uiCamera_3, value);
	}

	inline static int32_t get_offset_of_widgetContainer_4() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___widgetContainer_4)); }
	inline UIWidget_t1453041918 * get_widgetContainer_4() const { return ___widgetContainer_4; }
	inline UIWidget_t1453041918 ** get_address_of_widgetContainer_4() { return &___widgetContainer_4; }
	inline void set_widgetContainer_4(UIWidget_t1453041918 * value)
	{
		___widgetContainer_4 = value;
		Il2CppCodeGenWriteBarrier(&___widgetContainer_4, value);
	}

	inline static int32_t get_offset_of_panelContainer_5() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___panelContainer_5)); }
	inline UIPanel_t1795085332 * get_panelContainer_5() const { return ___panelContainer_5; }
	inline UIPanel_t1795085332 ** get_address_of_panelContainer_5() { return &___panelContainer_5; }
	inline void set_panelContainer_5(UIPanel_t1795085332 * value)
	{
		___panelContainer_5 = value;
		Il2CppCodeGenWriteBarrier(&___panelContainer_5, value);
	}

	inline static int32_t get_offset_of_side_6() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___side_6)); }
	inline int32_t get_side_6() const { return ___side_6; }
	inline int32_t* get_address_of_side_6() { return &___side_6; }
	inline void set_side_6(int32_t value)
	{
		___side_6 = value;
	}

	inline static int32_t get_offset_of_halfPixelOffset_7() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___halfPixelOffset_7)); }
	inline bool get_halfPixelOffset_7() const { return ___halfPixelOffset_7; }
	inline bool* get_address_of_halfPixelOffset_7() { return &___halfPixelOffset_7; }
	inline void set_halfPixelOffset_7(bool value)
	{
		___halfPixelOffset_7 = value;
	}

	inline static int32_t get_offset_of_runOnlyOnce_8() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___runOnlyOnce_8)); }
	inline bool get_runOnlyOnce_8() const { return ___runOnlyOnce_8; }
	inline bool* get_address_of_runOnlyOnce_8() { return &___runOnlyOnce_8; }
	inline void set_runOnlyOnce_8(bool value)
	{
		___runOnlyOnce_8 = value;
	}

	inline static int32_t get_offset_of_relativeOffset_9() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___relativeOffset_9)); }
	inline Vector2_t2243707579  get_relativeOffset_9() const { return ___relativeOffset_9; }
	inline Vector2_t2243707579 * get_address_of_relativeOffset_9() { return &___relativeOffset_9; }
	inline void set_relativeOffset_9(Vector2_t2243707579  value)
	{
		___relativeOffset_9 = value;
	}

	inline static int32_t get_offset_of_pixelOffset_10() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___pixelOffset_10)); }
	inline Vector2_t2243707579  get_pixelOffset_10() const { return ___pixelOffset_10; }
	inline Vector2_t2243707579 * get_address_of_pixelOffset_10() { return &___pixelOffset_10; }
	inline void set_pixelOffset_10(Vector2_t2243707579  value)
	{
		___pixelOffset_10 = value;
	}

	inline static int32_t get_offset_of_mTrans_11() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___mTrans_11)); }
	inline Transform_t3275118058 * get_mTrans_11() const { return ___mTrans_11; }
	inline Transform_t3275118058 ** get_address_of_mTrans_11() { return &___mTrans_11; }
	inline void set_mTrans_11(Transform_t3275118058 * value)
	{
		___mTrans_11 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_11, value);
	}

	inline static int32_t get_offset_of_mAnim_12() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___mAnim_12)); }
	inline Animation_t2068071072 * get_mAnim_12() const { return ___mAnim_12; }
	inline Animation_t2068071072 ** get_address_of_mAnim_12() { return &___mAnim_12; }
	inline void set_mAnim_12(Animation_t2068071072 * value)
	{
		___mAnim_12 = value;
		Il2CppCodeGenWriteBarrier(&___mAnim_12, value);
	}

	inline static int32_t get_offset_of_mRect_13() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___mRect_13)); }
	inline Rect_t3681755626  get_mRect_13() const { return ___mRect_13; }
	inline Rect_t3681755626 * get_address_of_mRect_13() { return &___mRect_13; }
	inline void set_mRect_13(Rect_t3681755626  value)
	{
		___mRect_13 = value;
	}

	inline static int32_t get_offset_of_mRoot_14() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___mRoot_14)); }
	inline UIRoot_t389944298 * get_mRoot_14() const { return ___mRoot_14; }
	inline UIRoot_t389944298 ** get_address_of_mRoot_14() { return &___mRoot_14; }
	inline void set_mRoot_14(UIRoot_t389944298 * value)
	{
		___mRoot_14 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
