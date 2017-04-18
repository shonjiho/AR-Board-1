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

// UIEventListener/StringDelegate
struct StringDelegate_t481941565;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UIEventListener/StringDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void StringDelegate__ctor_m2156534240 (StringDelegate_t481941565 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/StringDelegate::Invoke(UnityEngine.GameObject,System.String)
extern "C"  void StringDelegate_Invoke_m2088596380 (StringDelegate_t481941565 * __this, GameObject_t1756533147 * ___go0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/StringDelegate::BeginInvoke(UnityEngine.GameObject,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StringDelegate_BeginInvoke_m55470717 (StringDelegate_t481941565 * __this, GameObject_t1756533147 * ___go0, String_t* ___text1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/StringDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void StringDelegate_EndInvoke_m185937778 (StringDelegate_t481941565 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
