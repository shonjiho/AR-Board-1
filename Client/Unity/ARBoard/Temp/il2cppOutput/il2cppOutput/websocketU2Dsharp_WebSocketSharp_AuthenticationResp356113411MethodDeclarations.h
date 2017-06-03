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

// WebSocketSharp.AuthenticationResponse
struct AuthenticationResponse_t356113411;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t3911206805;
// WebSocketSharp.AuthenticationChallenge
struct AuthenticationChallenge_t3277932947;
// System.String
struct String_t;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_NetworkCreden3911206805.h"
#include "websocketU2Dsharp_WebSocketSharp_AuthenticationCha3277932947.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"

// System.Void WebSocketSharp.AuthenticationResponse::.ctor(WebSocketSharp.Net.NetworkCredential)
extern "C"  void AuthenticationResponse__ctor_m3384085024 (AuthenticationResponse_t356113411 * __this, NetworkCredential_t3911206805 * ___credentials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.AuthenticationResponse::.ctor(WebSocketSharp.AuthenticationChallenge,WebSocketSharp.Net.NetworkCredential,System.UInt32)
extern "C"  void AuthenticationResponse__ctor_m3824056922 (AuthenticationResponse_t356113411 * __this, AuthenticationChallenge_t3277932947 * ___challenge0, NetworkCredential_t3911206805 * ___credentials1, uint32_t ___nonceCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.AuthenticationResponse::.ctor(System.String,System.Collections.Specialized.NameValueCollection,WebSocketSharp.Net.NetworkCredential,System.UInt32)
extern "C"  void AuthenticationResponse__ctor_m4254463345 (AuthenticationResponse_t356113411 * __this, String_t* ___authScheme0, NameValueCollection_t3047564564 * ___authParams1, NetworkCredential_t3911206805 * ___credentials2, uint32_t ___nonceCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 WebSocketSharp.AuthenticationResponse::get_NonceCount()
extern "C"  uint32_t AuthenticationResponse_get_NonceCount_m62370079 (AuthenticationResponse_t356113411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.AuthenticationResponse::contains(System.String[],System.String)
extern "C"  bool AuthenticationResponse_contains_m73709786 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___array0, String_t* ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.AuthenticationResponse::initAsDigest()
extern "C"  void AuthenticationResponse_initAsDigest_m1082754283 (AuthenticationResponse_t356113411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.AuthenticationResponse::ToString()
extern "C"  String_t* AuthenticationResponse_ToString_m2045718080 (AuthenticationResponse_t356113411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
