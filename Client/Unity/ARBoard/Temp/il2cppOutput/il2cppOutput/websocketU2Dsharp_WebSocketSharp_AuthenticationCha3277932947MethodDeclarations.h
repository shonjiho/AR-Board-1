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

// WebSocketSharp.AuthenticationChallenge
struct AuthenticationChallenge_t3277932947;
// System.String
struct String_t;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.AuthenticationChallenge::.ctor(System.String,System.String)
extern "C"  void AuthenticationChallenge__ctor_m2140389251 (AuthenticationChallenge_t3277932947 * __this, String_t* ___authScheme0, String_t* ___authParams1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.AuthenticationChallenge::get_Params()
extern "C"  NameValueCollection_t3047564564 * AuthenticationChallenge_get_Params_m747945582 (AuthenticationChallenge_t3277932947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.AuthenticationChallenge::get_Scheme()
extern "C"  String_t* AuthenticationChallenge_get_Scheme_m1995630588 (AuthenticationChallenge_t3277932947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.AuthenticationChallenge WebSocketSharp.AuthenticationChallenge::Parse(System.String)
extern "C"  AuthenticationChallenge_t3277932947 * AuthenticationChallenge_Parse_m158947211 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
