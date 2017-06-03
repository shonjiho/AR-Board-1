#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager/<GetEffectBgm>c__AnonStorey6
struct  U3CGetEffectBgmU3Ec__AnonStorey6_t1390898066  : public Il2CppObject
{
public:
	// UnityEngine.AudioClip AudioManager/<GetEffectBgm>c__AnonStorey6::audioClip
	AudioClip_t1932558630 * ___audioClip_0;

public:
	inline static int32_t get_offset_of_audioClip_0() { return static_cast<int32_t>(offsetof(U3CGetEffectBgmU3Ec__AnonStorey6_t1390898066, ___audioClip_0)); }
	inline AudioClip_t1932558630 * get_audioClip_0() const { return ___audioClip_0; }
	inline AudioClip_t1932558630 ** get_address_of_audioClip_0() { return &___audioClip_0; }
	inline void set_audioClip_0(AudioClip_t1932558630 * value)
	{
		___audioClip_0 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
