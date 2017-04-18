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

// ActiveAnimation/OnFinished
struct OnFinished_t1769996062;
// System.Object
struct Il2CppObject;
// ActiveAnimation
struct ActiveAnimation_t4137610604;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_ActiveAnimation4137610604.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ActiveAnimation/OnFinished::.ctor(System.Object,System.IntPtr)
extern "C"  void OnFinished__ctor_m1649069617 (OnFinished_t1769996062 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation/OnFinished::Invoke(ActiveAnimation)
extern "C"  void OnFinished_Invoke_m1670747575 (OnFinished_t1769996062 * __this, ActiveAnimation_t4137610604 * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ActiveAnimation/OnFinished::BeginInvoke(ActiveAnimation,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnFinished_BeginInvoke_m4219923932 (OnFinished_t1769996062 * __this, ActiveAnimation_t4137610604 * ___anim0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation/OnFinished::EndInvoke(System.IAsyncResult)
extern "C"  void OnFinished_EndInvoke_m430050971 (OnFinished_t1769996062 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
