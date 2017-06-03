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
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DownloadTexture
struct  DownloadTexture_t3149906093  : public MonoBehaviour_t1158329972
{
public:
	// System.String DownloadTexture::url
	String_t* ___url_2;
	// UnityEngine.Texture2D DownloadTexture::mTex
	Texture2D_t3542995729 * ___mTex_3;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(DownloadTexture_t3149906093, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}

	inline static int32_t get_offset_of_mTex_3() { return static_cast<int32_t>(offsetof(DownloadTexture_t3149906093, ___mTex_3)); }
	inline Texture2D_t3542995729 * get_mTex_3() const { return ___mTex_3; }
	inline Texture2D_t3542995729 ** get_address_of_mTex_3() { return &___mTex_3; }
	inline void set_mTex_3(Texture2D_t3542995729 * value)
	{
		___mTex_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTex_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
