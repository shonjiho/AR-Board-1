#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// EffectBgm
struct EffectBgm_t684372573;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "AssemblyU2DCSharp_AudioManager_E_SoundType453727853.h"

// System.Void EffectBgm::.ctor(UnityEngine.AudioClip,System.Boolean,AudioManager/E_SoundType)
extern "C"  void EffectBgm__ctor_m3170449691 (EffectBgm_t684372573 * __this, AudioClip_t1932558630 * ____audioClip0, bool ____loop1, int32_t ____soundType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AudioManager/E_SoundType EffectBgm::GetSoundType()
extern "C"  int32_t EffectBgm_GetSoundType_m4194950305 (EffectBgm_t684372573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectBgm::SetVolume(System.Single)
extern "C"  void EffectBgm_SetVolume_m4085506155 (EffectBgm_t684372573 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EffectBgm::GetVolume()
extern "C"  float EffectBgm_GetVolume_m2704608568 (EffectBgm_t684372573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EffectBgm::IsPlaying()
extern "C"  bool EffectBgm_IsPlaying_m13196328 (EffectBgm_t684372573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectBgm::Destroy()
extern "C"  void EffectBgm_Destroy_m1242487502 (EffectBgm_t684372573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip EffectBgm::GetAudioClip()
extern "C"  AudioClip_t1932558630 * EffectBgm_GetAudioClip_m2745437768 (EffectBgm_t684372573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EffectBgm::Play()
extern "C"  bool EffectBgm_Play_m314521018 (EffectBgm_t684372573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EffectBgm::Stop()
extern "C"  bool EffectBgm_Stop_m654098048 (EffectBgm_t684372573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
