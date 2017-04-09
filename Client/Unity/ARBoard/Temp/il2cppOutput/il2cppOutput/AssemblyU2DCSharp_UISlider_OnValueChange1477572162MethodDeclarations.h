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

// UISlider/OnValueChange
struct OnValueChange_t1477572162;
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

// System.Void UISlider/OnValueChange::.ctor(System.Object,System.IntPtr)
extern "C"  void OnValueChange__ctor_m466015849 (OnValueChange_t1477572162 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider/OnValueChange::Invoke(System.Single)
extern "C"  void OnValueChange_Invoke_m2404167478 (OnValueChange_t1477572162 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UISlider/OnValueChange::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnValueChange_BeginInvoke_m3344121071 (OnValueChange_t1477572162 * __this, float ___val0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider/OnValueChange::EndInvoke(System.IAsyncResult)
extern "C"  void OnValueChange_EndInvoke_m2633509079 (OnValueChange_t1477572162 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
