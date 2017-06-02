#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioListener
struct AudioListener_t1996719162;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NGUITools
struct  NGUITools_t2004302824  : public Il2CppObject
{
public:

public:
};

struct NGUITools_t2004302824_StaticFields
{
public:
	// UnityEngine.AudioListener NGUITools::mListener
	AudioListener_t1996719162 * ___mListener_0;
	// System.Boolean NGUITools::mLoaded
	bool ___mLoaded_1;
	// System.Single NGUITools::mGlobalVolume
	float ___mGlobalVolume_2;
	// UnityEngine.Color NGUITools::mInvisible
	Color_t2020392075  ___mInvisible_3;
	// System.Reflection.PropertyInfo NGUITools::mSystemCopyBuffer
	PropertyInfo_t * ___mSystemCopyBuffer_4;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mListener_0)); }
	inline AudioListener_t1996719162 * get_mListener_0() const { return ___mListener_0; }
	inline AudioListener_t1996719162 ** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(AudioListener_t1996719162 * value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier(&___mListener_0, value);
	}

	inline static int32_t get_offset_of_mLoaded_1() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mLoaded_1)); }
	inline bool get_mLoaded_1() const { return ___mLoaded_1; }
	inline bool* get_address_of_mLoaded_1() { return &___mLoaded_1; }
	inline void set_mLoaded_1(bool value)
	{
		___mLoaded_1 = value;
	}

	inline static int32_t get_offset_of_mGlobalVolume_2() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mGlobalVolume_2)); }
	inline float get_mGlobalVolume_2() const { return ___mGlobalVolume_2; }
	inline float* get_address_of_mGlobalVolume_2() { return &___mGlobalVolume_2; }
	inline void set_mGlobalVolume_2(float value)
	{
		___mGlobalVolume_2 = value;
	}

	inline static int32_t get_offset_of_mInvisible_3() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mInvisible_3)); }
	inline Color_t2020392075  get_mInvisible_3() const { return ___mInvisible_3; }
	inline Color_t2020392075 * get_address_of_mInvisible_3() { return &___mInvisible_3; }
	inline void set_mInvisible_3(Color_t2020392075  value)
	{
		___mInvisible_3 = value;
	}

	inline static int32_t get_offset_of_mSystemCopyBuffer_4() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mSystemCopyBuffer_4)); }
	inline PropertyInfo_t * get_mSystemCopyBuffer_4() const { return ___mSystemCopyBuffer_4; }
	inline PropertyInfo_t ** get_address_of_mSystemCopyBuffer_4() { return &___mSystemCopyBuffer_4; }
	inline void set_mSystemCopyBuffer_4(PropertyInfo_t * value)
	{
		___mSystemCopyBuffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___mSystemCopyBuffer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
