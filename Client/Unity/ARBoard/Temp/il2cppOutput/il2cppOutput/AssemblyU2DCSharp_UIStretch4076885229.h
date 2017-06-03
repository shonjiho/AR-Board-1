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
// UIRoot
struct UIRoot_t389944298;
// UnityEngine.Animation
struct Animation_t2068071072;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIStretch_Style1693551353.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIStretch
struct  UIStretch_t4076885229  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera UIStretch::uiCamera
	Camera_t189460977 * ___uiCamera_2;
	// UIWidget UIStretch::widgetContainer
	UIWidget_t1453041918 * ___widgetContainer_3;
	// UIPanel UIStretch::panelContainer
	UIPanel_t1795085332 * ___panelContainer_4;
	// UIStretch/Style UIStretch::style
	int32_t ___style_5;
	// System.Boolean UIStretch::runOnlyOnce
	bool ___runOnlyOnce_6;
	// UnityEngine.Vector2 UIStretch::relativeSize
	Vector2_t2243707579  ___relativeSize_7;
	// UnityEngine.Vector2 UIStretch::initialSize
	Vector2_t2243707579  ___initialSize_8;
	// UnityEngine.Transform UIStretch::mTrans
	Transform_t3275118058 * ___mTrans_9;
	// UIRoot UIStretch::mRoot
	UIRoot_t389944298 * ___mRoot_10;
	// UnityEngine.Animation UIStretch::mAnim
	Animation_t2068071072 * ___mAnim_11;
	// UnityEngine.Rect UIStretch::mRect
	Rect_t3681755626  ___mRect_12;

public:
	inline static int32_t get_offset_of_uiCamera_2() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___uiCamera_2)); }
	inline Camera_t189460977 * get_uiCamera_2() const { return ___uiCamera_2; }
	inline Camera_t189460977 ** get_address_of_uiCamera_2() { return &___uiCamera_2; }
	inline void set_uiCamera_2(Camera_t189460977 * value)
	{
		___uiCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___uiCamera_2, value);
	}

	inline static int32_t get_offset_of_widgetContainer_3() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___widgetContainer_3)); }
	inline UIWidget_t1453041918 * get_widgetContainer_3() const { return ___widgetContainer_3; }
	inline UIWidget_t1453041918 ** get_address_of_widgetContainer_3() { return &___widgetContainer_3; }
	inline void set_widgetContainer_3(UIWidget_t1453041918 * value)
	{
		___widgetContainer_3 = value;
		Il2CppCodeGenWriteBarrier(&___widgetContainer_3, value);
	}

	inline static int32_t get_offset_of_panelContainer_4() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___panelContainer_4)); }
	inline UIPanel_t1795085332 * get_panelContainer_4() const { return ___panelContainer_4; }
	inline UIPanel_t1795085332 ** get_address_of_panelContainer_4() { return &___panelContainer_4; }
	inline void set_panelContainer_4(UIPanel_t1795085332 * value)
	{
		___panelContainer_4 = value;
		Il2CppCodeGenWriteBarrier(&___panelContainer_4, value);
	}

	inline static int32_t get_offset_of_style_5() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___style_5)); }
	inline int32_t get_style_5() const { return ___style_5; }
	inline int32_t* get_address_of_style_5() { return &___style_5; }
	inline void set_style_5(int32_t value)
	{
		___style_5 = value;
	}

	inline static int32_t get_offset_of_runOnlyOnce_6() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___runOnlyOnce_6)); }
	inline bool get_runOnlyOnce_6() const { return ___runOnlyOnce_6; }
	inline bool* get_address_of_runOnlyOnce_6() { return &___runOnlyOnce_6; }
	inline void set_runOnlyOnce_6(bool value)
	{
		___runOnlyOnce_6 = value;
	}

	inline static int32_t get_offset_of_relativeSize_7() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___relativeSize_7)); }
	inline Vector2_t2243707579  get_relativeSize_7() const { return ___relativeSize_7; }
	inline Vector2_t2243707579 * get_address_of_relativeSize_7() { return &___relativeSize_7; }
	inline void set_relativeSize_7(Vector2_t2243707579  value)
	{
		___relativeSize_7 = value;
	}

	inline static int32_t get_offset_of_initialSize_8() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___initialSize_8)); }
	inline Vector2_t2243707579  get_initialSize_8() const { return ___initialSize_8; }
	inline Vector2_t2243707579 * get_address_of_initialSize_8() { return &___initialSize_8; }
	inline void set_initialSize_8(Vector2_t2243707579  value)
	{
		___initialSize_8 = value;
	}

	inline static int32_t get_offset_of_mTrans_9() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mTrans_9)); }
	inline Transform_t3275118058 * get_mTrans_9() const { return ___mTrans_9; }
	inline Transform_t3275118058 ** get_address_of_mTrans_9() { return &___mTrans_9; }
	inline void set_mTrans_9(Transform_t3275118058 * value)
	{
		___mTrans_9 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_9, value);
	}

	inline static int32_t get_offset_of_mRoot_10() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mRoot_10)); }
	inline UIRoot_t389944298 * get_mRoot_10() const { return ___mRoot_10; }
	inline UIRoot_t389944298 ** get_address_of_mRoot_10() { return &___mRoot_10; }
	inline void set_mRoot_10(UIRoot_t389944298 * value)
	{
		___mRoot_10 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_10, value);
	}

	inline static int32_t get_offset_of_mAnim_11() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mAnim_11)); }
	inline Animation_t2068071072 * get_mAnim_11() const { return ___mAnim_11; }
	inline Animation_t2068071072 ** get_address_of_mAnim_11() { return &___mAnim_11; }
	inline void set_mAnim_11(Animation_t2068071072 * value)
	{
		___mAnim_11 = value;
		Il2CppCodeGenWriteBarrier(&___mAnim_11, value);
	}

	inline static int32_t get_offset_of_mRect_12() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mRect_12)); }
	inline Rect_t3681755626  get_mRect_12() const { return ___mRect_12; }
	inline Rect_t3681755626 * get_address_of_mRect_12() { return &___mRect_12; }
	inline void set_mRect_12(Rect_t3681755626  value)
	{
		___mRect_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
