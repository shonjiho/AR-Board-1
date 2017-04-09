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
// System.Collections.Generic.List`1<UIAtlas/Sprite>
struct List_1_t3798875523;
// UIAtlas
struct UIAtlas_t1304615221;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIAtlas_Coordinates2844876023.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIAtlas
struct  UIAtlas_t1304615221  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material UIAtlas::material
	Material_t193706927 * ___material_2;
	// System.Collections.Generic.List`1<UIAtlas/Sprite> UIAtlas::sprites
	List_1_t3798875523 * ___sprites_3;
	// UIAtlas/Coordinates UIAtlas::mCoordinates
	int32_t ___mCoordinates_4;
	// System.Single UIAtlas::mPixelSize
	float ___mPixelSize_5;
	// UIAtlas UIAtlas::mReplacement
	UIAtlas_t1304615221 * ___mReplacement_6;
	// System.Int32 UIAtlas::mPMA
	int32_t ___mPMA_7;

public:
	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___material_2)); }
	inline Material_t193706927 * get_material_2() const { return ___material_2; }
	inline Material_t193706927 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t193706927 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier(&___material_2, value);
	}

	inline static int32_t get_offset_of_sprites_3() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___sprites_3)); }
	inline List_1_t3798875523 * get_sprites_3() const { return ___sprites_3; }
	inline List_1_t3798875523 ** get_address_of_sprites_3() { return &___sprites_3; }
	inline void set_sprites_3(List_1_t3798875523 * value)
	{
		___sprites_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_3, value);
	}

	inline static int32_t get_offset_of_mCoordinates_4() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___mCoordinates_4)); }
	inline int32_t get_mCoordinates_4() const { return ___mCoordinates_4; }
	inline int32_t* get_address_of_mCoordinates_4() { return &___mCoordinates_4; }
	inline void set_mCoordinates_4(int32_t value)
	{
		___mCoordinates_4 = value;
	}

	inline static int32_t get_offset_of_mPixelSize_5() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___mPixelSize_5)); }
	inline float get_mPixelSize_5() const { return ___mPixelSize_5; }
	inline float* get_address_of_mPixelSize_5() { return &___mPixelSize_5; }
	inline void set_mPixelSize_5(float value)
	{
		___mPixelSize_5 = value;
	}

	inline static int32_t get_offset_of_mReplacement_6() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___mReplacement_6)); }
	inline UIAtlas_t1304615221 * get_mReplacement_6() const { return ___mReplacement_6; }
	inline UIAtlas_t1304615221 ** get_address_of_mReplacement_6() { return &___mReplacement_6; }
	inline void set_mReplacement_6(UIAtlas_t1304615221 * value)
	{
		___mReplacement_6 = value;
		Il2CppCodeGenWriteBarrier(&___mReplacement_6, value);
	}

	inline static int32_t get_offset_of_mPMA_7() { return static_cast<int32_t>(offsetof(UIAtlas_t1304615221, ___mPMA_7)); }
	inline int32_t get_mPMA_7() const { return ___mPMA_7; }
	inline int32_t* get_address_of_mPMA_7() { return &___mPMA_7; }
	inline void set_mPMA_7(int32_t value)
	{
		___mPMA_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
