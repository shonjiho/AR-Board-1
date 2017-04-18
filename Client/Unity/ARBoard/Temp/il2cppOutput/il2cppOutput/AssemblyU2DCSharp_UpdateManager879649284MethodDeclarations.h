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

// UpdateManager
struct UpdateManager_t879649284;
// UpdateManager/UpdateEntry
struct UpdateEntry_t3370587140;
// System.Collections.Generic.List`1<UpdateManager/UpdateEntry>
struct List_1_t2739708272;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UpdateManager/OnUpdate
struct OnUpdate_t2310536555;
// UnityEngine.Object
struct Object_t1021602117;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UpdateManager_UpdateEntry3370587140.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UpdateManager_OnUpdate2310536555.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"

// System.Void UpdateManager::.ctor()
extern "C"  void UpdateManager__ctor_m4190189433 (UpdateManager_t879649284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UpdateManager::Compare(UpdateManager/UpdateEntry,UpdateManager/UpdateEntry)
extern "C"  int32_t UpdateManager_Compare_m2878370360 (Il2CppObject * __this /* static, unused */, UpdateEntry_t3370587140 * ___a0, UpdateEntry_t3370587140 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::CreateInstance()
extern "C"  void UpdateManager_CreateInstance_m606721400 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::UpdateList(System.Collections.Generic.List`1<UpdateManager/UpdateEntry>,System.Single)
extern "C"  void UpdateManager_UpdateList_m1506650617 (UpdateManager_t879649284 * __this, List_1_t2739708272 * ___list0, float ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::Start()
extern "C"  void UpdateManager_Start_m3802425033 (UpdateManager_t879649284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::OnApplicationQuit()
extern "C"  void UpdateManager_OnApplicationQuit_m3741155527 (UpdateManager_t879649284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::Update()
extern "C"  void UpdateManager_Update_m1556927214 (UpdateManager_t879649284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::LateUpdate()
extern "C"  void UpdateManager_LateUpdate_m1652646850 (UpdateManager_t879649284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UpdateManager::CoroutineUpdate()
extern "C"  bool UpdateManager_CoroutineUpdate_m2177442890 (UpdateManager_t879649284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UpdateManager::CoroutineFunction()
extern "C"  Il2CppObject * UpdateManager_CoroutineFunction_m2591542411 (UpdateManager_t879649284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::Add(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate,System.Collections.Generic.List`1<UpdateManager/UpdateEntry>)
extern "C"  void UpdateManager_Add_m3420058251 (UpdateManager_t879649284 * __this, MonoBehaviour_t1158329972 * ___mb0, int32_t ___updateOrder1, OnUpdate_t2310536555 * ___func2, List_1_t2739708272 * ___list3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddUpdate(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
extern "C"  void UpdateManager_AddUpdate_m3962802684 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___mb0, int32_t ___updateOrder1, OnUpdate_t2310536555 * ___func2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddLateUpdate(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
extern "C"  void UpdateManager_AddLateUpdate_m332450280 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___mb0, int32_t ___updateOrder1, OnUpdate_t2310536555 * ___func2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddCoroutine(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
extern "C"  void UpdateManager_AddCoroutine_m1924148155 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___mb0, int32_t ___updateOrder1, OnUpdate_t2310536555 * ___func2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddDestroy(UnityEngine.Object,System.Single)
extern "C"  void UpdateManager_AddDestroy_m941880981 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___obj0, float ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
