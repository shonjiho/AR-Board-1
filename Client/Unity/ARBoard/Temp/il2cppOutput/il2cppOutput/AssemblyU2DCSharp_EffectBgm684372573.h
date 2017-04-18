#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_AudioManager_E_SoundType453727853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectBgm
struct  EffectBgm_t684372573  : public Il2CppObject
{
public:
	// UnityEngine.GameObject EffectBgm::go
	GameObject_t1756533147 * ___go_0;
	// UnityEngine.AudioSource EffectBgm::audioSource
	AudioSource_t1135106623 * ___audioSource_1;
	// AudioManager/E_SoundType EffectBgm::mSoundType
	int32_t ___mSoundType_2;

public:
	inline static int32_t get_offset_of_go_0() { return static_cast<int32_t>(offsetof(EffectBgm_t684372573, ___go_0)); }
	inline GameObject_t1756533147 * get_go_0() const { return ___go_0; }
	inline GameObject_t1756533147 ** get_address_of_go_0() { return &___go_0; }
	inline void set_go_0(GameObject_t1756533147 * value)
	{
		___go_0 = value;
		Il2CppCodeGenWriteBarrier(&___go_0, value);
	}

	inline static int32_t get_offset_of_audioSource_1() { return static_cast<int32_t>(offsetof(EffectBgm_t684372573, ___audioSource_1)); }
	inline AudioSource_t1135106623 * get_audioSource_1() const { return ___audioSource_1; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_1() { return &___audioSource_1; }
	inline void set_audioSource_1(AudioSource_t1135106623 * value)
	{
		___audioSource_1 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_1, value);
	}

	inline static int32_t get_offset_of_mSoundType_2() { return static_cast<int32_t>(offsetof(EffectBgm_t684372573, ___mSoundType_2)); }
	inline int32_t get_mSoundType_2() const { return ___mSoundType_2; }
	inline int32_t* get_address_of_mSoundType_2() { return &___mSoundType_2; }
	inline void set_mSoundType_2(int32_t value)
	{
		___mSoundType_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
