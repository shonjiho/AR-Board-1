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

// UnityEngine.Animation
struct Animation_t2068071072;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.AnimationState
struct AnimationState_t1303741697;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animation2068071072.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_PlayMode1184682879.h"

// System.Void UnityEngine.Animation::Sample()
extern "C"  void Animation_Sample_m3524518265 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C"  void Animation_INTERNAL_CALL_Sample_m3455476881 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::get_isPlaying()
extern "C"  bool Animation_get_isPlaying_m729836826 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
extern "C"  bool Animation_IsPlaying_m1305767247 (Animation_t2068071072 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play()
extern "C"  bool Animation_Play_m185747875 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m112733823 (Animation_t2068071072 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m315011537 (Animation_t2068071072 * __this, String_t* ___animation0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C"  bool Animation_Play_m976361057 (Animation_t2068071072 * __this, String_t* ___animation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C"  void Animation_CrossFade_m3167311838 (Animation_t2068071072 * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C"  void Animation_CrossFade_m3878519673 (Animation_t2068071072 * __this, String_t* ___animation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C"  bool Animation_PlayDefaultAnimation_m3276120146 (Animation_t2068071072 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C"  Il2CppObject * Animation_GetEnumerator_m3067441975 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C"  AnimationState_t1303741697 * Animation_GetStateAtIndex_m2774853377 (Animation_t2068071072 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C"  int32_t Animation_GetStateCount_m1145090795 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
