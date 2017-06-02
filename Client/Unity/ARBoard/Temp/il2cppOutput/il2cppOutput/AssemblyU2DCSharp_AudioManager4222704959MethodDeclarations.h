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

// AudioManager
struct AudioManager_t4222704959;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// EffectBgm
struct EffectBgm_t684372573;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_AudioManager_E_FxSound2434774611.h"
#include "AssemblyU2DCSharp_AudioManager_E_SoundType453727853.h"
#include "AssemblyU2DCSharp_EffectBgm684372573.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"

// System.Void AudioManager::.ctor()
extern "C"  void AudioManager__ctor_m653321928 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::Load(UnityEngine.GameObject)
extern "C"  void AudioManager_Load_m1998132096 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AudioManager AudioManager::get_Instance()
extern "C"  AudioManager_t4222704959 * AudioManager_get_Instance_m3625896316 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::IsPlayingEffectBgm(AudioManager/E_FxSound)
extern "C"  bool AudioManager_IsPlayingEffectBgm_m784673314 (AudioManager_t4222704959 * __this, int32_t ___eFxSound0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::ResetEffectBgmVolume(System.Single,System.Single)
extern "C"  void AudioManager_ResetEffectBgmVolume_m1224611674 (AudioManager_t4222704959 * __this, float ___fxVolume0, float ___bgmVolume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::AddEffectBgmAndPlay(AudioManager/E_FxSound,AudioManager/E_SoundType)
extern "C"  bool AudioManager_AddEffectBgmAndPlay_m1789278225 (AudioManager_t4222704959 * __this, int32_t ___eFxSound0, int32_t ___eSoundType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::StopAllEffectBgm()
extern "C"  bool AudioManager_StopAllEffectBgm_m1746490868 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::PlayAllEffectBgm()
extern "C"  bool AudioManager_PlayAllEffectBgm_m4082592350 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::RemoveAllEffectBgm()
extern "C"  bool AudioManager_RemoveAllEffectBgm_m2976347004 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::FadeOutEffectBgm(AudioManager/E_FxSound,System.Single)
extern "C"  bool AudioManager_FadeOutEffectBgm_m3138844877 (AudioManager_t4222704959 * __this, int32_t ___eFxSound0, float ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::StopMonsterAppearSoundFadeOut(AudioManager/E_FxSound)
extern "C"  void AudioManager_StopMonsterAppearSoundFadeOut_m2524506723 (AudioManager_t4222704959 * __this, int32_t ___efxSound0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AudioManager::FadeOutEffectBgmCoroutine(EffectBgm,System.Single)
extern "C"  Il2CppObject * AudioManager_FadeOutEffectBgmCoroutine_m1980699431 (AudioManager_t4222704959 * __this, EffectBgm_t684372573 * ___effectBgm0, float ___delaySecond1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EffectBgm AudioManager::GetEffectBgm(AudioManager/E_FxSound)
extern "C"  EffectBgm_t684372573 * AudioManager_GetEffectBgm_m1094157048 (AudioManager_t4222704959 * __this, int32_t ___eFxSound0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::RemoveEffectBgm(EffectBgm)
extern "C"  void AudioManager_RemoveEffectBgm_m3013994414 (AudioManager_t4222704959 * __this, EffectBgm_t684372573 * ___effectBgm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::RemoveEffectBgmAndStop(AudioManager/E_FxSound)
extern "C"  bool AudioManager_RemoveEffectBgmAndStop_m848480705 (AudioManager_t4222704959 * __this, int32_t ___eFxSound0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::BgmMuteOn(System.Boolean)
extern "C"  void AudioManager_BgmMuteOn_m3316870529 (AudioManager_t4222704959 * __this, bool ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::BgmVolume(System.Single)
extern "C"  void AudioManager_BgmVolume_m619137571 (AudioManager_t4222704959 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::FxVolume(System.Single)
extern "C"  void AudioManager_FxVolume_m3491030553 (AudioManager_t4222704959 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::FxMuteOn(System.Boolean)
extern "C"  void AudioManager_FxMuteOn_m316191443 (AudioManager_t4222704959 * __this, bool ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::Init()
extern "C"  void AudioManager_Init_m1490526172 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip AudioManager::GetClip(AudioManager/E_FxSound)
extern "C"  AudioClip_t1932558630 * AudioManager_GetClip_m266107435 (AudioManager_t4222704959 * __this, int32_t ___eFxSound0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::StopBGM()
extern "C"  void AudioManager_StopBGM_m1539791270 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::RePlayBGM()
extern "C"  void AudioManager_RePlayBGM_m3238148077 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::IsPlayBGM()
extern "C"  bool AudioManager_IsPlayBGM_m860127238 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::Play2dBGM(System.String,System.UInt64)
extern "C"  bool AudioManager_Play2dBGM_m1544119857 (AudioManager_t4222704959 * __this, String_t* ___bgmFileName0, uint64_t ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::Play2dBGM(UnityEngine.AudioClip,System.UInt64)
extern "C"  void AudioManager_Play2dBGM_m1310765122 (AudioManager_t4222704959 * __this, AudioClip_t1932558630 * ___audioClip0, uint64_t ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AudioManager::Get2dBGM_Name()
extern "C"  String_t* AudioManager_Get2dBGM_Name_m1394306935 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::StopEffect()
extern "C"  void AudioManager_StopEffect_m816431085 (AudioManager_t4222704959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::Play2dEffect(AudioManager/E_FxSound)
extern "C"  bool AudioManager_Play2dEffect_m3572346748 (AudioManager_t4222704959 * __this, int32_t ___fxSound0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::Play2dEffect(System.String)
extern "C"  bool AudioManager_Play2dEffect_m997640441 (AudioManager_t4222704959 * __this, String_t* ___effectFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioManager::Play2dEffect(UnityEngine.AudioClip)
extern "C"  bool AudioManager_Play2dEffect_m3618863326 (AudioManager_t4222704959 * __this, AudioClip_t1932558630 * ___audioClip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
