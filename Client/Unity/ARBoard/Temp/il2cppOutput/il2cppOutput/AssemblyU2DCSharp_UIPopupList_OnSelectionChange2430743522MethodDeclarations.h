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

// UIPopupList/OnSelectionChange
struct OnSelectionChange_t2430743522;
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

// System.Void UIPopupList/OnSelectionChange::.ctor(System.Object,System.IntPtr)
extern "C"  void OnSelectionChange__ctor_m858044171 (OnSelectionChange_t2430743522 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/OnSelectionChange::Invoke(System.String)
extern "C"  void OnSelectionChange_Invoke_m3697230129 (OnSelectionChange_t2430743522 * __this, String_t* ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIPopupList/OnSelectionChange::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnSelectionChange_BeginInvoke_m2390182212 (OnSelectionChange_t2430743522 * __this, String_t* ___item0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/OnSelectionChange::EndInvoke(System.IAsyncResult)
extern "C"  void OnSelectionChange_EndInvoke_m72779357 (OnSelectionChange_t2430743522 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
