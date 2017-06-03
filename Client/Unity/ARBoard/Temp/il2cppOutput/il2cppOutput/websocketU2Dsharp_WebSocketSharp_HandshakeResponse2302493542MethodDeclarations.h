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

// WebSocketSharp.HandshakeResponse
struct HandshakeResponse_t2302493542;
// WebSocketSharp.AuthenticationChallenge
struct AuthenticationChallenge_t3277932947;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_HttpStatusCod2661820989.h"
#include "mscorlib_System_String2029220233.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_CookieCollect4248997468.h"

// System.Void WebSocketSharp.HandshakeResponse::.ctor()
extern "C"  void HandshakeResponse__ctor_m3066857706 (HandshakeResponse_t2302493542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HandshakeResponse::.ctor(WebSocketSharp.Net.HttpStatusCode)
extern "C"  void HandshakeResponse__ctor_m1368482955 (HandshakeResponse_t2302493542 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.AuthenticationChallenge WebSocketSharp.HandshakeResponse::get_AuthChallenge()
extern "C"  AuthenticationChallenge_t3277932947 * HandshakeResponse_get_AuthChallenge_m2573443253 (HandshakeResponse_t2302493542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.HandshakeResponse::get_Cookies()
extern "C"  CookieCollection_t4248997468 * HandshakeResponse_get_Cookies_m1577792477 (HandshakeResponse_t2302493542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HandshakeResponse::get_IsUnauthorized()
extern "C"  bool HandshakeResponse_get_IsUnauthorized_m1282974611 (HandshakeResponse_t2302493542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HandshakeResponse::get_IsWebSocketResponse()
extern "C"  bool HandshakeResponse_get_IsWebSocketResponse_m287207309 (HandshakeResponse_t2302493542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HandshakeResponse::set_Reason(System.String)
extern "C"  void HandshakeResponse_set_Reason_m1270831571 (HandshakeResponse_t2302493542 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HandshakeResponse::set_StatusCode(System.String)
extern "C"  void HandshakeResponse_set_StatusCode_m1890348380 (HandshakeResponse_t2302493542 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HandshakeResponse WebSocketSharp.HandshakeResponse::CreateCloseResponse(WebSocketSharp.Net.HttpStatusCode)
extern "C"  HandshakeResponse_t2302493542 * HandshakeResponse_CreateCloseResponse_m2368880822 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HandshakeResponse WebSocketSharp.HandshakeResponse::Parse(System.String[])
extern "C"  HandshakeResponse_t2302493542 * HandshakeResponse_Parse_m947722781 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___headerParts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HandshakeResponse::SetCookies(WebSocketSharp.Net.CookieCollection)
extern "C"  void HandshakeResponse_SetCookies_m975557225 (HandshakeResponse_t2302493542 * __this, CookieCollection_t4248997468 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HandshakeResponse::ToString()
extern "C"  String_t* HandshakeResponse_ToString_m794212431 (HandshakeResponse_t2302493542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
