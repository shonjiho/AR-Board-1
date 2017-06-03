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

// WebSocketSharp.HandshakeRequest
struct HandshakeRequest_t1568981112;
// System.String
struct String_t;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_CookieCollect4248997468.h"

// System.Void WebSocketSharp.HandshakeRequest::.ctor(System.String)
extern "C"  void HandshakeRequest__ctor_m456733766 (HandshakeRequest_t1568981112 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HandshakeRequest::SetCookies(WebSocketSharp.Net.CookieCollection)
extern "C"  void HandshakeRequest_SetCookies_m4254474879 (HandshakeRequest_t1568981112 * __this, CookieCollection_t4248997468 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HandshakeRequest::ToString()
extern "C"  String_t* HandshakeRequest_ToString_m4178810389 (HandshakeRequest_t1568981112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
