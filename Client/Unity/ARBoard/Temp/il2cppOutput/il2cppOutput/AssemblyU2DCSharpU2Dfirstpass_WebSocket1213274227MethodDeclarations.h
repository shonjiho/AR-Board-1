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

// WebSocket
struct WebSocket_t1213274227;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// WebSocketSharp.Net.Cookie
struct Cookie_t1826188460;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_Cookie1826188460.h"

// System.Void WebSocket::.ctor(System.Uri)
extern "C"  void WebSocket__ctor_m2447929677 (WebSocket_t1213274227 * __this, Uri_t19570940 * ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SendString(System.String)
extern "C"  void WebSocket_SendString_m4293857515 (WebSocket_t1213274227 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocket::RecvString()
extern "C"  String_t* WebSocket_RecvString_m716708100 (WebSocket_t1213274227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocket::Connect()
extern "C"  Il2CppObject * WebSocket_Connect_m2620683194 (WebSocket_t1213274227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocket::ConnectByCookie(WebSocketSharp.Net.Cookie)
extern "C"  Il2CppObject * WebSocket_ConnectByCookie_m4170072457 (WebSocket_t1213274227 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::Send(System.Byte[])
extern "C"  void WebSocket_Send_m2905861795 (WebSocket_t1213274227 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocket::Recv()
extern "C"  ByteU5BU5D_t3397334013* WebSocket_Recv_m3676309770 (WebSocket_t1213274227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::Close()
extern "C"  void WebSocket_Close_m13439692 (WebSocket_t1213274227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocket::get_error()
extern "C"  String_t* WebSocket_get_error_m100672492 (WebSocket_t1213274227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
