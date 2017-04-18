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

// UIInput/Validator
struct Validator_t2517589125;
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

// System.Void UIInput/Validator::.ctor(System.Object,System.IntPtr)
extern "C"  void Validator__ctor_m968621470 (Validator_t2517589125 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/Validator::Invoke(System.String,System.Char)
extern "C"  Il2CppChar Validator_Invoke_m3408495045 (Validator_t2517589125 * __this, String_t* ___currentText0, Il2CppChar ___nextChar1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIInput/Validator::BeginInvoke(System.String,System.Char,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Validator_BeginInvoke_m227851046 (Validator_t2517589125 * __this, String_t* ___currentText0, Il2CppChar ___nextChar1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/Validator::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppChar Validator_EndInvoke_m1404668974 (Validator_t2517589125 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
