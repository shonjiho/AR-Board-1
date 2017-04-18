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

// UpdateManager/OnUpdate
struct OnUpdate_t2310536555;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UpdateManager/OnUpdate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnUpdate__ctor_m185589332 (OnUpdate_t2310536555 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager/OnUpdate::Invoke(System.Single)
extern "C"  void OnUpdate_Invoke_m1334969187 (OnUpdate_t2310536555 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UpdateManager/OnUpdate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnUpdate_BeginInvoke_m1229280348 (OnUpdate_t2310536555 * __this, float ___delta0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager/OnUpdate::EndInvoke(System.IAsyncResult)
extern "C"  void OnUpdate_EndInvoke_m3032902958 (OnUpdate_t2310536555 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
