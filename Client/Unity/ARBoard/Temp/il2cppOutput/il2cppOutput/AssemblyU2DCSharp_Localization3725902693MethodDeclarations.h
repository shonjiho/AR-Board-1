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

// Localization
struct Localization_t3725902693;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t3973159845;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_TextAsset3973159845.h"

// System.Void Localization::.ctor()
extern "C"  void Localization__ctor_m3434466340 (Localization_t3725902693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::get_isActive()
extern "C"  bool Localization_get_isActive_m797147515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Localization Localization::get_instance()
extern "C"  Localization_t3725902693 * Localization_get_instance_m2444447832 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::get_currentLanguage()
extern "C"  String_t* Localization_get_currentLanguage_m3058444479 (Localization_t3725902693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_currentLanguage(System.String)
extern "C"  void Localization_set_currentLanguage_m3062683958 (Localization_t3725902693 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Awake()
extern "C"  void Localization_Awake_m1548821649 (Localization_t3725902693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::OnEnable()
extern "C"  void Localization_OnEnable_m1082054052 (Localization_t3725902693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::OnDestroy()
extern "C"  void Localization_OnDestroy_m2230356739 (Localization_t3725902693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Load(UnityEngine.TextAsset)
extern "C"  void Localization_Load_m1254693088 (Localization_t3725902693 * __this, TextAsset_t3973159845 * ___asset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Get(System.String)
extern "C"  String_t* Localization_Get_m685709977 (Localization_t3725902693 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Localize(System.String)
extern "C"  String_t* Localization_Localize_m2724461702 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
