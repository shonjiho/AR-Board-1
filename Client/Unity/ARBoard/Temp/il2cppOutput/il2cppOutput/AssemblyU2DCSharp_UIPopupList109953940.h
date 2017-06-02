#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPopupList
struct UIPopupList_t109953940;
// UIAtlas
struct UIAtlas_t1304615221;
// UIFont
struct UIFont_t389944949;
// UILabel
struct UILabel_t1795115428;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIPopupList/OnSelectionChange
struct OnSelectionChange_t2430743522;
// UIPanel
struct UIPanel_t1795085332;
// UISprite
struct UISprite_t603616735;
// System.Collections.Generic.List`1<UILabel>
struct List_1_t1164236560;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIPopupList_Position1780870098.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPopupList
struct  UIPopupList_t109953940  : public MonoBehaviour_t1158329972
{
public:
	// UIAtlas UIPopupList::atlas
	UIAtlas_t1304615221 * ___atlas_4;
	// UIFont UIPopupList::font
	UIFont_t389944949 * ___font_5;
	// UILabel UIPopupList::textLabel
	UILabel_t1795115428 * ___textLabel_6;
	// System.String UIPopupList::backgroundSprite
	String_t* ___backgroundSprite_7;
	// System.String UIPopupList::highlightSprite
	String_t* ___highlightSprite_8;
	// UIPopupList/Position UIPopupList::position
	int32_t ___position_9;
	// System.Collections.Generic.List`1<System.String> UIPopupList::items
	List_1_t1398341365 * ___items_10;
	// UnityEngine.Vector2 UIPopupList::padding
	Vector2_t2243707579  ___padding_11;
	// System.Single UIPopupList::textScale
	float ___textScale_12;
	// UnityEngine.Color UIPopupList::textColor
	Color_t2020392075  ___textColor_13;
	// UnityEngine.Color UIPopupList::backgroundColor
	Color_t2020392075  ___backgroundColor_14;
	// UnityEngine.Color UIPopupList::highlightColor
	Color_t2020392075  ___highlightColor_15;
	// System.Boolean UIPopupList::isAnimated
	bool ___isAnimated_16;
	// System.Boolean UIPopupList::isLocalized
	bool ___isLocalized_17;
	// UnityEngine.GameObject UIPopupList::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_18;
	// System.String UIPopupList::functionName
	String_t* ___functionName_19;
	// UIPopupList/OnSelectionChange UIPopupList::onSelectionChange
	OnSelectionChange_t2430743522 * ___onSelectionChange_20;
	// System.String UIPopupList::mSelectedItem
	String_t* ___mSelectedItem_21;
	// UIPanel UIPopupList::mPanel
	UIPanel_t1795085332 * ___mPanel_22;
	// UnityEngine.GameObject UIPopupList::mChild
	GameObject_t1756533147 * ___mChild_23;
	// UISprite UIPopupList::mBackground
	UISprite_t603616735 * ___mBackground_24;
	// UISprite UIPopupList::mHighlight
	UISprite_t603616735 * ___mHighlight_25;
	// UILabel UIPopupList::mHighlightedLabel
	UILabel_t1795115428 * ___mHighlightedLabel_26;
	// System.Collections.Generic.List`1<UILabel> UIPopupList::mLabelList
	List_1_t1164236560 * ___mLabelList_27;
	// System.Single UIPopupList::mBgBorder
	float ___mBgBorder_28;

public:
	inline static int32_t get_offset_of_atlas_4() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___atlas_4)); }
	inline UIAtlas_t1304615221 * get_atlas_4() const { return ___atlas_4; }
	inline UIAtlas_t1304615221 ** get_address_of_atlas_4() { return &___atlas_4; }
	inline void set_atlas_4(UIAtlas_t1304615221 * value)
	{
		___atlas_4 = value;
		Il2CppCodeGenWriteBarrier(&___atlas_4, value);
	}

	inline static int32_t get_offset_of_font_5() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___font_5)); }
	inline UIFont_t389944949 * get_font_5() const { return ___font_5; }
	inline UIFont_t389944949 ** get_address_of_font_5() { return &___font_5; }
	inline void set_font_5(UIFont_t389944949 * value)
	{
		___font_5 = value;
		Il2CppCodeGenWriteBarrier(&___font_5, value);
	}

	inline static int32_t get_offset_of_textLabel_6() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textLabel_6)); }
	inline UILabel_t1795115428 * get_textLabel_6() const { return ___textLabel_6; }
	inline UILabel_t1795115428 ** get_address_of_textLabel_6() { return &___textLabel_6; }
	inline void set_textLabel_6(UILabel_t1795115428 * value)
	{
		___textLabel_6 = value;
		Il2CppCodeGenWriteBarrier(&___textLabel_6, value);
	}

	inline static int32_t get_offset_of_backgroundSprite_7() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___backgroundSprite_7)); }
	inline String_t* get_backgroundSprite_7() const { return ___backgroundSprite_7; }
	inline String_t** get_address_of_backgroundSprite_7() { return &___backgroundSprite_7; }
	inline void set_backgroundSprite_7(String_t* value)
	{
		___backgroundSprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundSprite_7, value);
	}

	inline static int32_t get_offset_of_highlightSprite_8() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___highlightSprite_8)); }
	inline String_t* get_highlightSprite_8() const { return ___highlightSprite_8; }
	inline String_t** get_address_of_highlightSprite_8() { return &___highlightSprite_8; }
	inline void set_highlightSprite_8(String_t* value)
	{
		___highlightSprite_8 = value;
		Il2CppCodeGenWriteBarrier(&___highlightSprite_8, value);
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_items_10() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___items_10)); }
	inline List_1_t1398341365 * get_items_10() const { return ___items_10; }
	inline List_1_t1398341365 ** get_address_of_items_10() { return &___items_10; }
	inline void set_items_10(List_1_t1398341365 * value)
	{
		___items_10 = value;
		Il2CppCodeGenWriteBarrier(&___items_10, value);
	}

	inline static int32_t get_offset_of_padding_11() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___padding_11)); }
	inline Vector2_t2243707579  get_padding_11() const { return ___padding_11; }
	inline Vector2_t2243707579 * get_address_of_padding_11() { return &___padding_11; }
	inline void set_padding_11(Vector2_t2243707579  value)
	{
		___padding_11 = value;
	}

	inline static int32_t get_offset_of_textScale_12() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textScale_12)); }
	inline float get_textScale_12() const { return ___textScale_12; }
	inline float* get_address_of_textScale_12() { return &___textScale_12; }
	inline void set_textScale_12(float value)
	{
		___textScale_12 = value;
	}

	inline static int32_t get_offset_of_textColor_13() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textColor_13)); }
	inline Color_t2020392075  get_textColor_13() const { return ___textColor_13; }
	inline Color_t2020392075 * get_address_of_textColor_13() { return &___textColor_13; }
	inline void set_textColor_13(Color_t2020392075  value)
	{
		___textColor_13 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_14() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___backgroundColor_14)); }
	inline Color_t2020392075  get_backgroundColor_14() const { return ___backgroundColor_14; }
	inline Color_t2020392075 * get_address_of_backgroundColor_14() { return &___backgroundColor_14; }
	inline void set_backgroundColor_14(Color_t2020392075  value)
	{
		___backgroundColor_14 = value;
	}

	inline static int32_t get_offset_of_highlightColor_15() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___highlightColor_15)); }
	inline Color_t2020392075  get_highlightColor_15() const { return ___highlightColor_15; }
	inline Color_t2020392075 * get_address_of_highlightColor_15() { return &___highlightColor_15; }
	inline void set_highlightColor_15(Color_t2020392075  value)
	{
		___highlightColor_15 = value;
	}

	inline static int32_t get_offset_of_isAnimated_16() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___isAnimated_16)); }
	inline bool get_isAnimated_16() const { return ___isAnimated_16; }
	inline bool* get_address_of_isAnimated_16() { return &___isAnimated_16; }
	inline void set_isAnimated_16(bool value)
	{
		___isAnimated_16 = value;
	}

	inline static int32_t get_offset_of_isLocalized_17() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___isLocalized_17)); }
	inline bool get_isLocalized_17() const { return ___isLocalized_17; }
	inline bool* get_address_of_isLocalized_17() { return &___isLocalized_17; }
	inline void set_isLocalized_17(bool value)
	{
		___isLocalized_17 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_18() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___eventReceiver_18)); }
	inline GameObject_t1756533147 * get_eventReceiver_18() const { return ___eventReceiver_18; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_18() { return &___eventReceiver_18; }
	inline void set_eventReceiver_18(GameObject_t1756533147 * value)
	{
		___eventReceiver_18 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_18, value);
	}

	inline static int32_t get_offset_of_functionName_19() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___functionName_19)); }
	inline String_t* get_functionName_19() const { return ___functionName_19; }
	inline String_t** get_address_of_functionName_19() { return &___functionName_19; }
	inline void set_functionName_19(String_t* value)
	{
		___functionName_19 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_19, value);
	}

	inline static int32_t get_offset_of_onSelectionChange_20() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___onSelectionChange_20)); }
	inline OnSelectionChange_t2430743522 * get_onSelectionChange_20() const { return ___onSelectionChange_20; }
	inline OnSelectionChange_t2430743522 ** get_address_of_onSelectionChange_20() { return &___onSelectionChange_20; }
	inline void set_onSelectionChange_20(OnSelectionChange_t2430743522 * value)
	{
		___onSelectionChange_20 = value;
		Il2CppCodeGenWriteBarrier(&___onSelectionChange_20, value);
	}

	inline static int32_t get_offset_of_mSelectedItem_21() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mSelectedItem_21)); }
	inline String_t* get_mSelectedItem_21() const { return ___mSelectedItem_21; }
	inline String_t** get_address_of_mSelectedItem_21() { return &___mSelectedItem_21; }
	inline void set_mSelectedItem_21(String_t* value)
	{
		___mSelectedItem_21 = value;
		Il2CppCodeGenWriteBarrier(&___mSelectedItem_21, value);
	}

	inline static int32_t get_offset_of_mPanel_22() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mPanel_22)); }
	inline UIPanel_t1795085332 * get_mPanel_22() const { return ___mPanel_22; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_22() { return &___mPanel_22; }
	inline void set_mPanel_22(UIPanel_t1795085332 * value)
	{
		___mPanel_22 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_22, value);
	}

	inline static int32_t get_offset_of_mChild_23() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mChild_23)); }
	inline GameObject_t1756533147 * get_mChild_23() const { return ___mChild_23; }
	inline GameObject_t1756533147 ** get_address_of_mChild_23() { return &___mChild_23; }
	inline void set_mChild_23(GameObject_t1756533147 * value)
	{
		___mChild_23 = value;
		Il2CppCodeGenWriteBarrier(&___mChild_23, value);
	}

	inline static int32_t get_offset_of_mBackground_24() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mBackground_24)); }
	inline UISprite_t603616735 * get_mBackground_24() const { return ___mBackground_24; }
	inline UISprite_t603616735 ** get_address_of_mBackground_24() { return &___mBackground_24; }
	inline void set_mBackground_24(UISprite_t603616735 * value)
	{
		___mBackground_24 = value;
		Il2CppCodeGenWriteBarrier(&___mBackground_24, value);
	}

	inline static int32_t get_offset_of_mHighlight_25() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mHighlight_25)); }
	inline UISprite_t603616735 * get_mHighlight_25() const { return ___mHighlight_25; }
	inline UISprite_t603616735 ** get_address_of_mHighlight_25() { return &___mHighlight_25; }
	inline void set_mHighlight_25(UISprite_t603616735 * value)
	{
		___mHighlight_25 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlight_25, value);
	}

	inline static int32_t get_offset_of_mHighlightedLabel_26() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mHighlightedLabel_26)); }
	inline UILabel_t1795115428 * get_mHighlightedLabel_26() const { return ___mHighlightedLabel_26; }
	inline UILabel_t1795115428 ** get_address_of_mHighlightedLabel_26() { return &___mHighlightedLabel_26; }
	inline void set_mHighlightedLabel_26(UILabel_t1795115428 * value)
	{
		___mHighlightedLabel_26 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlightedLabel_26, value);
	}

	inline static int32_t get_offset_of_mLabelList_27() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mLabelList_27)); }
	inline List_1_t1164236560 * get_mLabelList_27() const { return ___mLabelList_27; }
	inline List_1_t1164236560 ** get_address_of_mLabelList_27() { return &___mLabelList_27; }
	inline void set_mLabelList_27(List_1_t1164236560 * value)
	{
		___mLabelList_27 = value;
		Il2CppCodeGenWriteBarrier(&___mLabelList_27, value);
	}

	inline static int32_t get_offset_of_mBgBorder_28() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mBgBorder_28)); }
	inline float get_mBgBorder_28() const { return ___mBgBorder_28; }
	inline float* get_address_of_mBgBorder_28() { return &___mBgBorder_28; }
	inline void set_mBgBorder_28(float value)
	{
		___mBgBorder_28 = value;
	}
};

struct UIPopupList_t109953940_StaticFields
{
public:
	// UIPopupList UIPopupList::current
	UIPopupList_t109953940 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940_StaticFields, ___current_2)); }
	inline UIPopupList_t109953940 * get_current_2() const { return ___current_2; }
	inline UIPopupList_t109953940 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(UIPopupList_t109953940 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
