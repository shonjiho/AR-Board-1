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

// UIPanel/OnChangeDelegate
struct OnChangeDelegate_t1697451811;
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

// System.Void UIPanel/OnChangeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnChangeDelegate__ctor_m3396767174 (OnChangeDelegate_t1697451811 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel/OnChangeDelegate::Invoke()
extern "C"  void OnChangeDelegate_Invoke_m1229860108 (OnChangeDelegate_t1697451811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIPanel/OnChangeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnChangeDelegate_BeginInvoke_m557663277 (OnChangeDelegate_t1697451811 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel/OnChangeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnChangeDelegate_EndInvoke_m2377587372 (OnChangeDelegate_t1697451811 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
