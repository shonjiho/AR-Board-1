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

// UICheckbox/OnStateChange
struct OnStateChange_t1331483646;
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

// System.Void UICheckbox/OnStateChange::.ctor(System.Object,System.IntPtr)
extern "C"  void OnStateChange__ctor_m2115636195 (OnStateChange_t1331483646 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICheckbox/OnStateChange::Invoke(System.Boolean)
extern "C"  void OnStateChange_Invoke_m2687822312 (OnStateChange_t1331483646 * __this, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICheckbox/OnStateChange::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnStateChange_BeginInvoke_m2252747783 (OnStateChange_t1331483646 * __this, bool ___state0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICheckbox/OnStateChange::EndInvoke(System.IAsyncResult)
extern "C"  void OnStateChange_EndInvoke_m2683142993 (OnStateChange_t1331483646 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
