#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIAtlas
struct UIAtlas_t1304615221;
// System.String
struct String_t;
// UIAtlas/Sprite
struct Sprite_t134787095;

#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "AssemblyU2DCSharp_UISprite_Type2972059396.h"
#include "AssemblyU2DCSharp_UISprite_FillDirection2438394762.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISprite
struct  UISprite_t603616735  : public UIWidget_t1453041918
{
public:
	// UIAtlas UISprite::mAtlas
	UIAtlas_t1304615221 * ___mAtlas_23;
	// System.String UISprite::mSpriteName
	String_t* ___mSpriteName_24;
	// System.Boolean UISprite::mFillCenter
	bool ___mFillCenter_25;
	// UISprite/Type UISprite::mType
	int32_t ___mType_26;
	// UISprite/FillDirection UISprite::mFillDirection
	int32_t ___mFillDirection_27;
	// System.Single UISprite::mFillAmount
	float ___mFillAmount_28;
	// System.Boolean UISprite::mInvert
	bool ___mInvert_29;
	// UIAtlas/Sprite UISprite::mSprite
	Sprite_t134787095 * ___mSprite_30;
	// UnityEngine.Rect UISprite::mInner
	Rect_t3681755626  ___mInner_31;
	// UnityEngine.Rect UISprite::mInnerUV
	Rect_t3681755626  ___mInnerUV_32;
	// UnityEngine.Rect UISprite::mOuter
	Rect_t3681755626  ___mOuter_33;
	// UnityEngine.Rect UISprite::mOuterUV
	Rect_t3681755626  ___mOuterUV_34;
	// UnityEngine.Vector3 UISprite::mScale
	Vector3_t2243707580  ___mScale_35;
	// System.Boolean UISprite::mSpriteSet
	bool ___mSpriteSet_36;

public:
	inline static int32_t get_offset_of_mAtlas_23() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mAtlas_23)); }
	inline UIAtlas_t1304615221 * get_mAtlas_23() const { return ___mAtlas_23; }
	inline UIAtlas_t1304615221 ** get_address_of_mAtlas_23() { return &___mAtlas_23; }
	inline void set_mAtlas_23(UIAtlas_t1304615221 * value)
	{
		___mAtlas_23 = value;
		Il2CppCodeGenWriteBarrier(&___mAtlas_23, value);
	}

	inline static int32_t get_offset_of_mSpriteName_24() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mSpriteName_24)); }
	inline String_t* get_mSpriteName_24() const { return ___mSpriteName_24; }
	inline String_t** get_address_of_mSpriteName_24() { return &___mSpriteName_24; }
	inline void set_mSpriteName_24(String_t* value)
	{
		___mSpriteName_24 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteName_24, value);
	}

	inline static int32_t get_offset_of_mFillCenter_25() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mFillCenter_25)); }
	inline bool get_mFillCenter_25() const { return ___mFillCenter_25; }
	inline bool* get_address_of_mFillCenter_25() { return &___mFillCenter_25; }
	inline void set_mFillCenter_25(bool value)
	{
		___mFillCenter_25 = value;
	}

	inline static int32_t get_offset_of_mType_26() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mType_26)); }
	inline int32_t get_mType_26() const { return ___mType_26; }
	inline int32_t* get_address_of_mType_26() { return &___mType_26; }
	inline void set_mType_26(int32_t value)
	{
		___mType_26 = value;
	}

	inline static int32_t get_offset_of_mFillDirection_27() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mFillDirection_27)); }
	inline int32_t get_mFillDirection_27() const { return ___mFillDirection_27; }
	inline int32_t* get_address_of_mFillDirection_27() { return &___mFillDirection_27; }
	inline void set_mFillDirection_27(int32_t value)
	{
		___mFillDirection_27 = value;
	}

	inline static int32_t get_offset_of_mFillAmount_28() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mFillAmount_28)); }
	inline float get_mFillAmount_28() const { return ___mFillAmount_28; }
	inline float* get_address_of_mFillAmount_28() { return &___mFillAmount_28; }
	inline void set_mFillAmount_28(float value)
	{
		___mFillAmount_28 = value;
	}

	inline static int32_t get_offset_of_mInvert_29() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mInvert_29)); }
	inline bool get_mInvert_29() const { return ___mInvert_29; }
	inline bool* get_address_of_mInvert_29() { return &___mInvert_29; }
	inline void set_mInvert_29(bool value)
	{
		___mInvert_29 = value;
	}

	inline static int32_t get_offset_of_mSprite_30() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mSprite_30)); }
	inline Sprite_t134787095 * get_mSprite_30() const { return ___mSprite_30; }
	inline Sprite_t134787095 ** get_address_of_mSprite_30() { return &___mSprite_30; }
	inline void set_mSprite_30(Sprite_t134787095 * value)
	{
		___mSprite_30 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_30, value);
	}

	inline static int32_t get_offset_of_mInner_31() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mInner_31)); }
	inline Rect_t3681755626  get_mInner_31() const { return ___mInner_31; }
	inline Rect_t3681755626 * get_address_of_mInner_31() { return &___mInner_31; }
	inline void set_mInner_31(Rect_t3681755626  value)
	{
		___mInner_31 = value;
	}

	inline static int32_t get_offset_of_mInnerUV_32() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mInnerUV_32)); }
	inline Rect_t3681755626  get_mInnerUV_32() const { return ___mInnerUV_32; }
	inline Rect_t3681755626 * get_address_of_mInnerUV_32() { return &___mInnerUV_32; }
	inline void set_mInnerUV_32(Rect_t3681755626  value)
	{
		___mInnerUV_32 = value;
	}

	inline static int32_t get_offset_of_mOuter_33() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mOuter_33)); }
	inline Rect_t3681755626  get_mOuter_33() const { return ___mOuter_33; }
	inline Rect_t3681755626 * get_address_of_mOuter_33() { return &___mOuter_33; }
	inline void set_mOuter_33(Rect_t3681755626  value)
	{
		___mOuter_33 = value;
	}

	inline static int32_t get_offset_of_mOuterUV_34() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mOuterUV_34)); }
	inline Rect_t3681755626  get_mOuterUV_34() const { return ___mOuterUV_34; }
	inline Rect_t3681755626 * get_address_of_mOuterUV_34() { return &___mOuterUV_34; }
	inline void set_mOuterUV_34(Rect_t3681755626  value)
	{
		___mOuterUV_34 = value;
	}

	inline static int32_t get_offset_of_mScale_35() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mScale_35)); }
	inline Vector3_t2243707580  get_mScale_35() const { return ___mScale_35; }
	inline Vector3_t2243707580 * get_address_of_mScale_35() { return &___mScale_35; }
	inline void set_mScale_35(Vector3_t2243707580  value)
	{
		___mScale_35 = value;
	}

	inline static int32_t get_offset_of_mSpriteSet_36() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mSpriteSet_36)); }
	inline bool get_mSpriteSet_36() const { return ___mSpriteSet_36; }
	inline bool* get_address_of_mSpriteSet_36() { return &___mSpriteSet_36; }
	inline void set_mSpriteSet_36(bool value)
	{
		___mSpriteSet_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
