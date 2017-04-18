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

// UITweener/OnFinished
struct OnFinished_t3688353092;
// System.Object
struct Il2CppObject;
// UITweener
struct UITweener_t2986641582;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UITweener2986641582.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UITweener/OnFinished::.ctor(System.Object,System.IntPtr)
extern "C"  void OnFinished__ctor_m9576121 (OnFinished_t3688353092 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener/OnFinished::Invoke(UITweener)
extern "C"  void OnFinished_Invoke_m3742940519 (OnFinished_t3688353092 * __this, UITweener_t2986641582 * ___tween0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UITweener/OnFinished::BeginInvoke(UITweener,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnFinished_BeginInvoke_m2829337724 (OnFinished_t3688353092 * __this, UITweener_t2986641582 * ___tween0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener/OnFinished::EndInvoke(System.IAsyncResult)
extern "C"  void OnFinished_EndInvoke_m2228454315 (OnFinished_t3688353092 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
