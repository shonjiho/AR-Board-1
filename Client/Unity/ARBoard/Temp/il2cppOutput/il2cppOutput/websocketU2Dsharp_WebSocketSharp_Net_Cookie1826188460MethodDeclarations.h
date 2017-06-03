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

// WebSocketSharp.Net.Cookie
struct Cookie_t1826188460;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void WebSocketSharp.Net.Cookie::.ctor()
extern "C"  void Cookie__ctor_m2639561341 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::.ctor(System.String,System.String)
extern "C"  void Cookie__ctor_m1121807237 (Cookie_t1826188460 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::.cctor()
extern "C"  void Cookie__cctor_m2912269528 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_ExactDomain(System.Boolean)
extern "C"  void Cookie_set_ExactDomain_m2132388388 (Cookie_t1826188460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::get_MaxAge()
extern "C"  int32_t Cookie_get_MaxAge_m2786043557 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Comment(System.String)
extern "C"  void Cookie_set_Comment_m2223812233 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_CommentUri(System.Uri)
extern "C"  void Cookie_set_CommentUri_m522455678 (Cookie_t1826188460 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Discard(System.Boolean)
extern "C"  void Cookie_set_Discard_m367320081 (Cookie_t1826188460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Domain()
extern "C"  String_t* Cookie_get_Domain_m104047669 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Domain(System.String)
extern "C"  void Cookie_set_Domain_m4209062518 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::get_Expired()
extern "C"  bool Cookie_get_Expired_m1144720675 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime WebSocketSharp.Net.Cookie::get_Expires()
extern "C"  DateTime_t693205669  Cookie_get_Expires_m2850971449 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Expires(System.DateTime)
extern "C"  void Cookie_set_Expires_m50100848 (Cookie_t1826188460 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_HttpOnly(System.Boolean)
extern "C"  void Cookie_set_HttpOnly_m2334289127 (Cookie_t1826188460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Name()
extern "C"  String_t* Cookie_get_Name_m298234216 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Name(System.String)
extern "C"  void Cookie_set_Name_m1639698133 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Path()
extern "C"  String_t* Cookie_get_Path_m3567104664 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Path(System.String)
extern "C"  void Cookie_set_Path_m3813951051 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Port(System.String)
extern "C"  void Cookie_set_Port_m2069304487 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Secure(System.Boolean)
extern "C"  void Cookie_set_Secure_m2990972016 (Cookie_t1826188460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Value()
extern "C"  String_t* Cookie_get_Value_m2532036198 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Value(System.String)
extern "C"  void Cookie_set_Value_m1591147809 (Cookie_t1826188460 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::get_Version()
extern "C"  int32_t Cookie_get_Version_m2361584692 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Version(System.Int32)
extern "C"  void Cookie_set_Version_m707117643 (Cookie_t1826188460 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::canSetName(System.String,System.String&)
extern "C"  bool Cookie_canSetName_m3790830748 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::canSetValue(System.String,System.String&)
extern "C"  bool Cookie_canSetValue_m3205416658 (Il2CppObject * __this /* static, unused */, String_t* ___value0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::hash(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Cookie_hash_m805479866 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___j1, int32_t ___k2, int32_t ___l3, int32_t ___m4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::toResponseStringVersion0()
extern "C"  String_t* Cookie_toResponseStringVersion0_m2994682627 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::toResponseStringVersion1()
extern "C"  String_t* Cookie_toResponseStringVersion1_m2994682594 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::tryCreatePorts(System.String,System.Int32[]&,System.String&)
extern "C"  bool Cookie_tryCreatePorts_m371608671 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Int32U5BU5D_t3030399641** ___result1, String_t** ___parseError2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::ToRequestString(System.Uri)
extern "C"  String_t* Cookie_ToRequestString_m1768598564 (Cookie_t1826188460 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::ToResponseString()
extern "C"  String_t* Cookie_ToResponseString_m2500912581 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::Equals(System.Object)
extern "C"  bool Cookie_Equals_m3609067006 (Cookie_t1826188460 * __this, Il2CppObject * ___comparand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::GetHashCode()
extern "C"  int32_t Cookie_GetHashCode_m400185106 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::ToString()
extern "C"  String_t* Cookie_ToString_m2617540906 (Cookie_t1826188460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
