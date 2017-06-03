#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// BMFont
struct BMFont_t421884312;
// UIAtlas
struct UIAtlas_t1304615221;
// UIFont
struct UIFont_t389944949;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t1234607911;
// UnityEngine.Font
struct Font_t4239498691;
// UIAtlas/Sprite
struct Sprite_t134787095;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "UnityEngine_UnityEngine_CharacterInfo3919092135.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIFont
struct  UIFont_t389944949  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material UIFont::mMat
	Material_t193706927 * ___mMat_2;
	// UnityEngine.Rect UIFont::mUVRect
	Rect_t3681755626  ___mUVRect_3;
	// BMFont UIFont::mFont
	BMFont_t421884312 * ___mFont_4;
	// System.Int32 UIFont::mSpacingX
	int32_t ___mSpacingX_5;
	// System.Int32 UIFont::mSpacingY
	int32_t ___mSpacingY_6;
	// UIAtlas UIFont::mAtlas
	UIAtlas_t1304615221 * ___mAtlas_7;
	// UIFont UIFont::mReplacement
	UIFont_t389944949 * ___mReplacement_8;
	// System.Single UIFont::mPixelSize
	float ___mPixelSize_9;
	// System.Collections.Generic.List`1<BMSymbol> UIFont::mSymbols
	List_1_t1234607911 * ___mSymbols_10;
	// UnityEngine.Font UIFont::mDynamicFont
	Font_t4239498691 * ___mDynamicFont_11;
	// System.Int32 UIFont::mDynamicFontSize
	int32_t ___mDynamicFontSize_12;
	// UnityEngine.FontStyle UIFont::mDynamicFontStyle
	int32_t ___mDynamicFontStyle_13;
	// System.Single UIFont::mDynamicFontOffset
	float ___mDynamicFontOffset_14;
	// UIAtlas/Sprite UIFont::mSprite
	Sprite_t134787095 * ___mSprite_15;
	// System.Int32 UIFont::mPMA
	int32_t ___mPMA_16;
	// System.Boolean UIFont::mSpriteSet
	bool ___mSpriteSet_17;
	// System.Collections.Generic.List`1<UnityEngine.Color> UIFont::mColors
	List_1_t1389513207 * ___mColors_18;

public:
	inline static int32_t get_offset_of_mMat_2() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mMat_2)); }
	inline Material_t193706927 * get_mMat_2() const { return ___mMat_2; }
	inline Material_t193706927 ** get_address_of_mMat_2() { return &___mMat_2; }
	inline void set_mMat_2(Material_t193706927 * value)
	{
		___mMat_2 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_2, value);
	}

	inline static int32_t get_offset_of_mUVRect_3() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mUVRect_3)); }
	inline Rect_t3681755626  get_mUVRect_3() const { return ___mUVRect_3; }
	inline Rect_t3681755626 * get_address_of_mUVRect_3() { return &___mUVRect_3; }
	inline void set_mUVRect_3(Rect_t3681755626  value)
	{
		___mUVRect_3 = value;
	}

	inline static int32_t get_offset_of_mFont_4() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mFont_4)); }
	inline BMFont_t421884312 * get_mFont_4() const { return ___mFont_4; }
	inline BMFont_t421884312 ** get_address_of_mFont_4() { return &___mFont_4; }
	inline void set_mFont_4(BMFont_t421884312 * value)
	{
		___mFont_4 = value;
		Il2CppCodeGenWriteBarrier(&___mFont_4, value);
	}

	inline static int32_t get_offset_of_mSpacingX_5() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mSpacingX_5)); }
	inline int32_t get_mSpacingX_5() const { return ___mSpacingX_5; }
	inline int32_t* get_address_of_mSpacingX_5() { return &___mSpacingX_5; }
	inline void set_mSpacingX_5(int32_t value)
	{
		___mSpacingX_5 = value;
	}

	inline static int32_t get_offset_of_mSpacingY_6() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mSpacingY_6)); }
	inline int32_t get_mSpacingY_6() const { return ___mSpacingY_6; }
	inline int32_t* get_address_of_mSpacingY_6() { return &___mSpacingY_6; }
	inline void set_mSpacingY_6(int32_t value)
	{
		___mSpacingY_6 = value;
	}

	inline static int32_t get_offset_of_mAtlas_7() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mAtlas_7)); }
	inline UIAtlas_t1304615221 * get_mAtlas_7() const { return ___mAtlas_7; }
	inline UIAtlas_t1304615221 ** get_address_of_mAtlas_7() { return &___mAtlas_7; }
	inline void set_mAtlas_7(UIAtlas_t1304615221 * value)
	{
		___mAtlas_7 = value;
		Il2CppCodeGenWriteBarrier(&___mAtlas_7, value);
	}

	inline static int32_t get_offset_of_mReplacement_8() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mReplacement_8)); }
	inline UIFont_t389944949 * get_mReplacement_8() const { return ___mReplacement_8; }
	inline UIFont_t389944949 ** get_address_of_mReplacement_8() { return &___mReplacement_8; }
	inline void set_mReplacement_8(UIFont_t389944949 * value)
	{
		___mReplacement_8 = value;
		Il2CppCodeGenWriteBarrier(&___mReplacement_8, value);
	}

	inline static int32_t get_offset_of_mPixelSize_9() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mPixelSize_9)); }
	inline float get_mPixelSize_9() const { return ___mPixelSize_9; }
	inline float* get_address_of_mPixelSize_9() { return &___mPixelSize_9; }
	inline void set_mPixelSize_9(float value)
	{
		___mPixelSize_9 = value;
	}

	inline static int32_t get_offset_of_mSymbols_10() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mSymbols_10)); }
	inline List_1_t1234607911 * get_mSymbols_10() const { return ___mSymbols_10; }
	inline List_1_t1234607911 ** get_address_of_mSymbols_10() { return &___mSymbols_10; }
	inline void set_mSymbols_10(List_1_t1234607911 * value)
	{
		___mSymbols_10 = value;
		Il2CppCodeGenWriteBarrier(&___mSymbols_10, value);
	}

	inline static int32_t get_offset_of_mDynamicFont_11() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mDynamicFont_11)); }
	inline Font_t4239498691 * get_mDynamicFont_11() const { return ___mDynamicFont_11; }
	inline Font_t4239498691 ** get_address_of_mDynamicFont_11() { return &___mDynamicFont_11; }
	inline void set_mDynamicFont_11(Font_t4239498691 * value)
	{
		___mDynamicFont_11 = value;
		Il2CppCodeGenWriteBarrier(&___mDynamicFont_11, value);
	}

	inline static int32_t get_offset_of_mDynamicFontSize_12() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mDynamicFontSize_12)); }
	inline int32_t get_mDynamicFontSize_12() const { return ___mDynamicFontSize_12; }
	inline int32_t* get_address_of_mDynamicFontSize_12() { return &___mDynamicFontSize_12; }
	inline void set_mDynamicFontSize_12(int32_t value)
	{
		___mDynamicFontSize_12 = value;
	}

	inline static int32_t get_offset_of_mDynamicFontStyle_13() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mDynamicFontStyle_13)); }
	inline int32_t get_mDynamicFontStyle_13() const { return ___mDynamicFontStyle_13; }
	inline int32_t* get_address_of_mDynamicFontStyle_13() { return &___mDynamicFontStyle_13; }
	inline void set_mDynamicFontStyle_13(int32_t value)
	{
		___mDynamicFontStyle_13 = value;
	}

	inline static int32_t get_offset_of_mDynamicFontOffset_14() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mDynamicFontOffset_14)); }
	inline float get_mDynamicFontOffset_14() const { return ___mDynamicFontOffset_14; }
	inline float* get_address_of_mDynamicFontOffset_14() { return &___mDynamicFontOffset_14; }
	inline void set_mDynamicFontOffset_14(float value)
	{
		___mDynamicFontOffset_14 = value;
	}

	inline static int32_t get_offset_of_mSprite_15() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mSprite_15)); }
	inline Sprite_t134787095 * get_mSprite_15() const { return ___mSprite_15; }
	inline Sprite_t134787095 ** get_address_of_mSprite_15() { return &___mSprite_15; }
	inline void set_mSprite_15(Sprite_t134787095 * value)
	{
		___mSprite_15 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_15, value);
	}

	inline static int32_t get_offset_of_mPMA_16() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mPMA_16)); }
	inline int32_t get_mPMA_16() const { return ___mPMA_16; }
	inline int32_t* get_address_of_mPMA_16() { return &___mPMA_16; }
	inline void set_mPMA_16(int32_t value)
	{
		___mPMA_16 = value;
	}

	inline static int32_t get_offset_of_mSpriteSet_17() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mSpriteSet_17)); }
	inline bool get_mSpriteSet_17() const { return ___mSpriteSet_17; }
	inline bool* get_address_of_mSpriteSet_17() { return &___mSpriteSet_17; }
	inline void set_mSpriteSet_17(bool value)
	{
		___mSpriteSet_17 = value;
	}

	inline static int32_t get_offset_of_mColors_18() { return static_cast<int32_t>(offsetof(UIFont_t389944949, ___mColors_18)); }
	inline List_1_t1389513207 * get_mColors_18() const { return ___mColors_18; }
	inline List_1_t1389513207 ** get_address_of_mColors_18() { return &___mColors_18; }
	inline void set_mColors_18(List_1_t1389513207 * value)
	{
		___mColors_18 = value;
		Il2CppCodeGenWriteBarrier(&___mColors_18, value);
	}
};

struct UIFont_t389944949_StaticFields
{
public:
	// UnityEngine.CharacterInfo UIFont::mTemp
	CharacterInfo_t3919092135  ___mTemp_19;
	// UnityEngine.CharacterInfo UIFont::mChar
	CharacterInfo_t3919092135  ___mChar_20;

public:
	inline static int32_t get_offset_of_mTemp_19() { return static_cast<int32_t>(offsetof(UIFont_t389944949_StaticFields, ___mTemp_19)); }
	inline CharacterInfo_t3919092135  get_mTemp_19() const { return ___mTemp_19; }
	inline CharacterInfo_t3919092135 * get_address_of_mTemp_19() { return &___mTemp_19; }
	inline void set_mTemp_19(CharacterInfo_t3919092135  value)
	{
		___mTemp_19 = value;
	}

	inline static int32_t get_offset_of_mChar_20() { return static_cast<int32_t>(offsetof(UIFont_t389944949_StaticFields, ___mChar_20)); }
	inline CharacterInfo_t3919092135  get_mChar_20() const { return ___mChar_20; }
	inline CharacterInfo_t3919092135 * get_address_of_mChar_20() { return &___mChar_20; }
	inline void set_mChar_20(CharacterInfo_t3919092135  value)
	{
		___mChar_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
