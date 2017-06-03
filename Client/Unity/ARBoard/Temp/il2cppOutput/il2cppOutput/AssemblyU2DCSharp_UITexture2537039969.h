#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Material
struct Material_t193706927;

#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITexture
struct  UITexture_t2537039969  : public UIWidget_t1453041918
{
public:
	// UnityEngine.Rect UITexture::mRect
	Rect_t3681755626  ___mRect_23;
	// UnityEngine.Shader UITexture::mShader
	Shader_t2430389951 * ___mShader_24;
	// UnityEngine.Texture UITexture::mTexture
	Texture_t2243626319 * ___mTexture_25;
	// UnityEngine.Material UITexture::mMat
	Material_t193706927 * ___mMat_26;
	// System.Boolean UITexture::mCreatingMat
	bool ___mCreatingMat_27;
	// UnityEngine.Material UITexture::mDynamicMat
	Material_t193706927 * ___mDynamicMat_28;
	// System.Int32 UITexture::mPMA
	int32_t ___mPMA_29;

public:
	inline static int32_t get_offset_of_mRect_23() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mRect_23)); }
	inline Rect_t3681755626  get_mRect_23() const { return ___mRect_23; }
	inline Rect_t3681755626 * get_address_of_mRect_23() { return &___mRect_23; }
	inline void set_mRect_23(Rect_t3681755626  value)
	{
		___mRect_23 = value;
	}

	inline static int32_t get_offset_of_mShader_24() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mShader_24)); }
	inline Shader_t2430389951 * get_mShader_24() const { return ___mShader_24; }
	inline Shader_t2430389951 ** get_address_of_mShader_24() { return &___mShader_24; }
	inline void set_mShader_24(Shader_t2430389951 * value)
	{
		___mShader_24 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_24, value);
	}

	inline static int32_t get_offset_of_mTexture_25() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mTexture_25)); }
	inline Texture_t2243626319 * get_mTexture_25() const { return ___mTexture_25; }
	inline Texture_t2243626319 ** get_address_of_mTexture_25() { return &___mTexture_25; }
	inline void set_mTexture_25(Texture_t2243626319 * value)
	{
		___mTexture_25 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_25, value);
	}

	inline static int32_t get_offset_of_mMat_26() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mMat_26)); }
	inline Material_t193706927 * get_mMat_26() const { return ___mMat_26; }
	inline Material_t193706927 ** get_address_of_mMat_26() { return &___mMat_26; }
	inline void set_mMat_26(Material_t193706927 * value)
	{
		___mMat_26 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_26, value);
	}

	inline static int32_t get_offset_of_mCreatingMat_27() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mCreatingMat_27)); }
	inline bool get_mCreatingMat_27() const { return ___mCreatingMat_27; }
	inline bool* get_address_of_mCreatingMat_27() { return &___mCreatingMat_27; }
	inline void set_mCreatingMat_27(bool value)
	{
		___mCreatingMat_27 = value;
	}

	inline static int32_t get_offset_of_mDynamicMat_28() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mDynamicMat_28)); }
	inline Material_t193706927 * get_mDynamicMat_28() const { return ___mDynamicMat_28; }
	inline Material_t193706927 ** get_address_of_mDynamicMat_28() { return &___mDynamicMat_28; }
	inline void set_mDynamicMat_28(Material_t193706927 * value)
	{
		___mDynamicMat_28 = value;
		Il2CppCodeGenWriteBarrier(&___mDynamicMat_28, value);
	}

	inline static int32_t get_offset_of_mPMA_29() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mPMA_29)); }
	inline int32_t get_mPMA_29() const { return ___mPMA_29; }
	inline int32_t* get_address_of_mPMA_29() { return &___mPMA_29; }
	inline void set_mPMA_29(int32_t value)
	{
		___mPMA_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
