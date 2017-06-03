#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIFont
struct UIFont_t389944949;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "AssemblyU2DCSharp_UILabel_Effect541741196.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_UIFont_SymbolStyle1145778735.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UILabel
struct  UILabel_t1795115428  : public UIWidget_t1453041918
{
public:
	// UIFont UILabel::mFont
	UIFont_t389944949 * ___mFont_23;
	// System.String UILabel::mText
	String_t* ___mText_24;
	// System.Int32 UILabel::mMaxLineWidth
	int32_t ___mMaxLineWidth_25;
	// System.Int32 UILabel::mMaxLineHeight
	int32_t ___mMaxLineHeight_26;
	// System.Boolean UILabel::mEncoding
	bool ___mEncoding_27;
	// System.Int32 UILabel::mMaxLineCount
	int32_t ___mMaxLineCount_28;
	// System.Boolean UILabel::mPassword
	bool ___mPassword_29;
	// System.Boolean UILabel::mShowLastChar
	bool ___mShowLastChar_30;
	// UILabel/Effect UILabel::mEffectStyle
	int32_t ___mEffectStyle_31;
	// UnityEngine.Color UILabel::mEffectColor
	Color_t2020392075  ___mEffectColor_32;
	// UIFont/SymbolStyle UILabel::mSymbols
	int32_t ___mSymbols_33;
	// UnityEngine.Vector2 UILabel::mEffectDistance
	Vector2_t2243707579  ___mEffectDistance_34;
	// System.Boolean UILabel::mShrinkToFit
	bool ___mShrinkToFit_35;
	// System.Single UILabel::mLineWidth
	float ___mLineWidth_36;
	// System.Boolean UILabel::mMultiline
	bool ___mMultiline_37;
	// System.Boolean UILabel::mShouldBeProcessed
	bool ___mShouldBeProcessed_38;
	// System.String UILabel::mProcessedText
	String_t* ___mProcessedText_39;
	// UnityEngine.Vector3 UILabel::mLastScale
	Vector3_t2243707580  ___mLastScale_40;
	// UnityEngine.Vector2 UILabel::mSize
	Vector2_t2243707579  ___mSize_41;
	// System.Boolean UILabel::mPremultiply
	bool ___mPremultiply_42;

public:
	inline static int32_t get_offset_of_mFont_23() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mFont_23)); }
	inline UIFont_t389944949 * get_mFont_23() const { return ___mFont_23; }
	inline UIFont_t389944949 ** get_address_of_mFont_23() { return &___mFont_23; }
	inline void set_mFont_23(UIFont_t389944949 * value)
	{
		___mFont_23 = value;
		Il2CppCodeGenWriteBarrier(&___mFont_23, value);
	}

	inline static int32_t get_offset_of_mText_24() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mText_24)); }
	inline String_t* get_mText_24() const { return ___mText_24; }
	inline String_t** get_address_of_mText_24() { return &___mText_24; }
	inline void set_mText_24(String_t* value)
	{
		___mText_24 = value;
		Il2CppCodeGenWriteBarrier(&___mText_24, value);
	}

	inline static int32_t get_offset_of_mMaxLineWidth_25() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMaxLineWidth_25)); }
	inline int32_t get_mMaxLineWidth_25() const { return ___mMaxLineWidth_25; }
	inline int32_t* get_address_of_mMaxLineWidth_25() { return &___mMaxLineWidth_25; }
	inline void set_mMaxLineWidth_25(int32_t value)
	{
		___mMaxLineWidth_25 = value;
	}

	inline static int32_t get_offset_of_mMaxLineHeight_26() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMaxLineHeight_26)); }
	inline int32_t get_mMaxLineHeight_26() const { return ___mMaxLineHeight_26; }
	inline int32_t* get_address_of_mMaxLineHeight_26() { return &___mMaxLineHeight_26; }
	inline void set_mMaxLineHeight_26(int32_t value)
	{
		___mMaxLineHeight_26 = value;
	}

	inline static int32_t get_offset_of_mEncoding_27() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEncoding_27)); }
	inline bool get_mEncoding_27() const { return ___mEncoding_27; }
	inline bool* get_address_of_mEncoding_27() { return &___mEncoding_27; }
	inline void set_mEncoding_27(bool value)
	{
		___mEncoding_27 = value;
	}

	inline static int32_t get_offset_of_mMaxLineCount_28() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMaxLineCount_28)); }
	inline int32_t get_mMaxLineCount_28() const { return ___mMaxLineCount_28; }
	inline int32_t* get_address_of_mMaxLineCount_28() { return &___mMaxLineCount_28; }
	inline void set_mMaxLineCount_28(int32_t value)
	{
		___mMaxLineCount_28 = value;
	}

	inline static int32_t get_offset_of_mPassword_29() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mPassword_29)); }
	inline bool get_mPassword_29() const { return ___mPassword_29; }
	inline bool* get_address_of_mPassword_29() { return &___mPassword_29; }
	inline void set_mPassword_29(bool value)
	{
		___mPassword_29 = value;
	}

	inline static int32_t get_offset_of_mShowLastChar_30() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mShowLastChar_30)); }
	inline bool get_mShowLastChar_30() const { return ___mShowLastChar_30; }
	inline bool* get_address_of_mShowLastChar_30() { return &___mShowLastChar_30; }
	inline void set_mShowLastChar_30(bool value)
	{
		___mShowLastChar_30 = value;
	}

	inline static int32_t get_offset_of_mEffectStyle_31() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEffectStyle_31)); }
	inline int32_t get_mEffectStyle_31() const { return ___mEffectStyle_31; }
	inline int32_t* get_address_of_mEffectStyle_31() { return &___mEffectStyle_31; }
	inline void set_mEffectStyle_31(int32_t value)
	{
		___mEffectStyle_31 = value;
	}

	inline static int32_t get_offset_of_mEffectColor_32() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEffectColor_32)); }
	inline Color_t2020392075  get_mEffectColor_32() const { return ___mEffectColor_32; }
	inline Color_t2020392075 * get_address_of_mEffectColor_32() { return &___mEffectColor_32; }
	inline void set_mEffectColor_32(Color_t2020392075  value)
	{
		___mEffectColor_32 = value;
	}

	inline static int32_t get_offset_of_mSymbols_33() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mSymbols_33)); }
	inline int32_t get_mSymbols_33() const { return ___mSymbols_33; }
	inline int32_t* get_address_of_mSymbols_33() { return &___mSymbols_33; }
	inline void set_mSymbols_33(int32_t value)
	{
		___mSymbols_33 = value;
	}

	inline static int32_t get_offset_of_mEffectDistance_34() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEffectDistance_34)); }
	inline Vector2_t2243707579  get_mEffectDistance_34() const { return ___mEffectDistance_34; }
	inline Vector2_t2243707579 * get_address_of_mEffectDistance_34() { return &___mEffectDistance_34; }
	inline void set_mEffectDistance_34(Vector2_t2243707579  value)
	{
		___mEffectDistance_34 = value;
	}

	inline static int32_t get_offset_of_mShrinkToFit_35() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mShrinkToFit_35)); }
	inline bool get_mShrinkToFit_35() const { return ___mShrinkToFit_35; }
	inline bool* get_address_of_mShrinkToFit_35() { return &___mShrinkToFit_35; }
	inline void set_mShrinkToFit_35(bool value)
	{
		___mShrinkToFit_35 = value;
	}

	inline static int32_t get_offset_of_mLineWidth_36() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mLineWidth_36)); }
	inline float get_mLineWidth_36() const { return ___mLineWidth_36; }
	inline float* get_address_of_mLineWidth_36() { return &___mLineWidth_36; }
	inline void set_mLineWidth_36(float value)
	{
		___mLineWidth_36 = value;
	}

	inline static int32_t get_offset_of_mMultiline_37() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMultiline_37)); }
	inline bool get_mMultiline_37() const { return ___mMultiline_37; }
	inline bool* get_address_of_mMultiline_37() { return &___mMultiline_37; }
	inline void set_mMultiline_37(bool value)
	{
		___mMultiline_37 = value;
	}

	inline static int32_t get_offset_of_mShouldBeProcessed_38() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mShouldBeProcessed_38)); }
	inline bool get_mShouldBeProcessed_38() const { return ___mShouldBeProcessed_38; }
	inline bool* get_address_of_mShouldBeProcessed_38() { return &___mShouldBeProcessed_38; }
	inline void set_mShouldBeProcessed_38(bool value)
	{
		___mShouldBeProcessed_38 = value;
	}

	inline static int32_t get_offset_of_mProcessedText_39() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mProcessedText_39)); }
	inline String_t* get_mProcessedText_39() const { return ___mProcessedText_39; }
	inline String_t** get_address_of_mProcessedText_39() { return &___mProcessedText_39; }
	inline void set_mProcessedText_39(String_t* value)
	{
		___mProcessedText_39 = value;
		Il2CppCodeGenWriteBarrier(&___mProcessedText_39, value);
	}

	inline static int32_t get_offset_of_mLastScale_40() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mLastScale_40)); }
	inline Vector3_t2243707580  get_mLastScale_40() const { return ___mLastScale_40; }
	inline Vector3_t2243707580 * get_address_of_mLastScale_40() { return &___mLastScale_40; }
	inline void set_mLastScale_40(Vector3_t2243707580  value)
	{
		___mLastScale_40 = value;
	}

	inline static int32_t get_offset_of_mSize_41() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mSize_41)); }
	inline Vector2_t2243707579  get_mSize_41() const { return ___mSize_41; }
	inline Vector2_t2243707579 * get_address_of_mSize_41() { return &___mSize_41; }
	inline void set_mSize_41(Vector2_t2243707579  value)
	{
		___mSize_41 = value;
	}

	inline static int32_t get_offset_of_mPremultiply_42() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mPremultiply_42)); }
	inline bool get_mPremultiply_42() const { return ___mPremultiply_42; }
	inline bool* get_address_of_mPremultiply_42() { return &___mPremultiply_42; }
	inline void set_mPremultiply_42(bool value)
	{
		___mPremultiply_42 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
