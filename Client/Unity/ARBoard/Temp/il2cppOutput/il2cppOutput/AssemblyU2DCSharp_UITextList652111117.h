#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UILabel
struct UILabel_t1795115428;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.Generic.List`1<UITextList/Paragraph>
struct List_1_t1956216192;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UITextList_Style3198392425.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITextList
struct  UITextList_t652111117  : public MonoBehaviour_t1158329972
{
public:
	// UITextList/Style UITextList::style
	int32_t ___style_2;
	// UILabel UITextList::textLabel
	UILabel_t1795115428 * ___textLabel_3;
	// System.Single UITextList::maxWidth
	float ___maxWidth_4;
	// System.Single UITextList::maxHeight
	float ___maxHeight_5;
	// System.Int32 UITextList::maxEntries
	int32_t ___maxEntries_6;
	// System.Boolean UITextList::supportScrollWheel
	bool ___supportScrollWheel_7;
	// System.Char[] UITextList::mSeparator
	CharU5BU5D_t1328083999* ___mSeparator_8;
	// System.Collections.Generic.List`1<UITextList/Paragraph> UITextList::mParagraphs
	List_1_t1956216192 * ___mParagraphs_9;
	// System.Single UITextList::mScroll
	float ___mScroll_10;
	// System.Boolean UITextList::mSelected
	bool ___mSelected_11;
	// System.Int32 UITextList::mTotalLines
	int32_t ___mTotalLines_12;

public:
	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___style_2)); }
	inline int32_t get_style_2() const { return ___style_2; }
	inline int32_t* get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(int32_t value)
	{
		___style_2 = value;
	}

	inline static int32_t get_offset_of_textLabel_3() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___textLabel_3)); }
	inline UILabel_t1795115428 * get_textLabel_3() const { return ___textLabel_3; }
	inline UILabel_t1795115428 ** get_address_of_textLabel_3() { return &___textLabel_3; }
	inline void set_textLabel_3(UILabel_t1795115428 * value)
	{
		___textLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___textLabel_3, value);
	}

	inline static int32_t get_offset_of_maxWidth_4() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___maxWidth_4)); }
	inline float get_maxWidth_4() const { return ___maxWidth_4; }
	inline float* get_address_of_maxWidth_4() { return &___maxWidth_4; }
	inline void set_maxWidth_4(float value)
	{
		___maxWidth_4 = value;
	}

	inline static int32_t get_offset_of_maxHeight_5() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___maxHeight_5)); }
	inline float get_maxHeight_5() const { return ___maxHeight_5; }
	inline float* get_address_of_maxHeight_5() { return &___maxHeight_5; }
	inline void set_maxHeight_5(float value)
	{
		___maxHeight_5 = value;
	}

	inline static int32_t get_offset_of_maxEntries_6() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___maxEntries_6)); }
	inline int32_t get_maxEntries_6() const { return ___maxEntries_6; }
	inline int32_t* get_address_of_maxEntries_6() { return &___maxEntries_6; }
	inline void set_maxEntries_6(int32_t value)
	{
		___maxEntries_6 = value;
	}

	inline static int32_t get_offset_of_supportScrollWheel_7() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___supportScrollWheel_7)); }
	inline bool get_supportScrollWheel_7() const { return ___supportScrollWheel_7; }
	inline bool* get_address_of_supportScrollWheel_7() { return &___supportScrollWheel_7; }
	inline void set_supportScrollWheel_7(bool value)
	{
		___supportScrollWheel_7 = value;
	}

	inline static int32_t get_offset_of_mSeparator_8() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___mSeparator_8)); }
	inline CharU5BU5D_t1328083999* get_mSeparator_8() const { return ___mSeparator_8; }
	inline CharU5BU5D_t1328083999** get_address_of_mSeparator_8() { return &___mSeparator_8; }
	inline void set_mSeparator_8(CharU5BU5D_t1328083999* value)
	{
		___mSeparator_8 = value;
		Il2CppCodeGenWriteBarrier(&___mSeparator_8, value);
	}

	inline static int32_t get_offset_of_mParagraphs_9() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___mParagraphs_9)); }
	inline List_1_t1956216192 * get_mParagraphs_9() const { return ___mParagraphs_9; }
	inline List_1_t1956216192 ** get_address_of_mParagraphs_9() { return &___mParagraphs_9; }
	inline void set_mParagraphs_9(List_1_t1956216192 * value)
	{
		___mParagraphs_9 = value;
		Il2CppCodeGenWriteBarrier(&___mParagraphs_9, value);
	}

	inline static int32_t get_offset_of_mScroll_10() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___mScroll_10)); }
	inline float get_mScroll_10() const { return ___mScroll_10; }
	inline float* get_address_of_mScroll_10() { return &___mScroll_10; }
	inline void set_mScroll_10(float value)
	{
		___mScroll_10 = value;
	}

	inline static int32_t get_offset_of_mSelected_11() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___mSelected_11)); }
	inline bool get_mSelected_11() const { return ___mSelected_11; }
	inline bool* get_address_of_mSelected_11() { return &___mSelected_11; }
	inline void set_mSelected_11(bool value)
	{
		___mSelected_11 = value;
	}

	inline static int32_t get_offset_of_mTotalLines_12() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___mTotalLines_12)); }
	inline int32_t get_mTotalLines_12() const { return ___mTotalLines_12; }
	inline int32_t* get_address_of_mTotalLines_12() { return &___mTotalLines_12; }
	inline void set_mTotalLines_12(int32_t value)
	{
		___mTotalLines_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
