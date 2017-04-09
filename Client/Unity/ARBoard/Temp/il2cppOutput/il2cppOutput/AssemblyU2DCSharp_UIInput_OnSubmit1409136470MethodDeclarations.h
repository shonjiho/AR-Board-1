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

// UIInput/OnSubmit
struct OnSubmit_t1409136470;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UIInput/OnSubmit::.ctor(System.Object,System.IntPtr)
extern "C"  void OnSubmit__ctor_m2593359883 (OnSubmit_t1409136470 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput/OnSubmit::Invoke(System.String)
extern "C"  void OnSubmit_Invoke_m545461645 (OnSubmit_t1409136470 * __this, String_t* ___inputString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIInput/OnSubmit::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnSubmit_BeginInvoke_m445498648 (OnSubmit_t1409136470 * __this, String_t* ___inputString0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput/OnSubmit::EndInvoke(System.IAsyncResult)
extern "C"  void OnSubmit_EndInvoke_m3330538521 (OnSubmit_t1409136470 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
