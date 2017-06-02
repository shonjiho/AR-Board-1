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

// WebSocketSharp.WsStream
struct WsStream_t4013943898;
// System.IO.Stream
struct Stream_t3255436806;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t581172200;
// WebSocketSharp.Net.Security.SslStream
struct SslStream_t1818648220;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;
// WebSocketSharp.WsFrame
struct WsFrame_t349876065;
// System.Action`1<WebSocketSharp.WsFrame>
struct Action_1_t151675447;
// System.Action`1<System.Exception>
struct Action_1_t1729240069;
// WebSocketSharp.HandshakeResponse
struct HandshakeResponse_t2302493542;
// WebSocketSharp.HandshakeBase
struct HandshakeBase_t1218024076;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t777637347;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_System_Net_Sockets_NetworkStream581172200.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_Security_SslS1818648220.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_Sockets_TcpClient408947970.h"
#include "System_System_Net_Security_RemoteCertificateValida2756269959.h"
#include "websocketU2Dsharp_WebSocketSharp_HandshakeBase1218024076.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "System_System_Security_Cryptography_X509Certificate777637347.h"
#include "System_System_Net_Security_SslPolicyErrors1928581431.h"

// System.Void WebSocketSharp.WsStream::.ctor(System.IO.Stream,System.Boolean)
extern "C"  void WsStream__ctor_m2867764750 (WsStream_t4013943898 * __this, Stream_t3255436806 * ___innerStream0, bool ___secure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsStream::.ctor(System.Net.Sockets.NetworkStream)
extern "C"  void WsStream__ctor_m1966381396 (WsStream_t4013943898 * __this, NetworkStream_t581172200 * ___innerStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsStream::.ctor(WebSocketSharp.Net.Security.SslStream)
extern "C"  void WsStream__ctor_m732030662 (WsStream_t4013943898 * __this, SslStream_t1818648220 * ___innerStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WsStream::readHandshakeEntityBody(System.IO.Stream,System.String)
extern "C"  ByteU5BU5D_t3397334013* WsStream_readHandshakeEntityBody_m281437615 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, String_t* ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.WsStream::readHandshakeHeaders(System.IO.Stream)
extern "C"  StringU5BU5D_t1642385972* WsStream_readHandshakeHeaders_m2507916485 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WsStream WebSocketSharp.WsStream::CreateClientStream(System.Net.Sockets.TcpClient,System.Boolean,System.String,System.Net.Security.RemoteCertificateValidationCallback)
extern "C"  WsStream_t4013943898 * WsStream_CreateClientStream_m4158035653 (Il2CppObject * __this /* static, unused */, TcpClient_t408947970 * ___client0, bool ___secure1, String_t* ___host2, RemoteCertificateValidationCallback_t2756269959 * ___validationCallback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsStream::Write(System.Byte[])
extern "C"  bool WsStream_Write_m2160357152 (WsStream_t4013943898 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsStream::Dispose()
extern "C"  void WsStream_Dispose_m1903352451 (WsStream_t4013943898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WsFrame WebSocketSharp.WsStream::ReadFrame()
extern "C"  WsFrame_t349876065 * WsStream_ReadFrame_m1436018722 (WsStream_t4013943898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WsStream::ReadFrameAsync(System.Action`1<WebSocketSharp.WsFrame>,System.Action`1<System.Exception>)
extern "C"  void WsStream_ReadFrameAsync_m3889681667 (WsStream_t4013943898 * __this, Action_1_t151675447 * ___completed0, Action_1_t1729240069 * ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HandshakeResponse WebSocketSharp.WsStream::ReadHandshakeResponse()
extern "C"  HandshakeResponse_t2302493542 * WsStream_ReadHandshakeResponse_m3132320270 (WsStream_t4013943898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsStream::WriteHandshake(WebSocketSharp.HandshakeBase)
extern "C"  bool WsStream_WriteHandshake_m2565734087 (WsStream_t4013943898 * __this, HandshakeBase_t1218024076 * ___handshake0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WsStream::<CreateClientStream>m__16(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool WsStream_U3CCreateClientStreamU3Em__16_m388547806 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, X509Certificate_t283079845 * ___certificate1, X509Chain_t777637347 * ___chain2, int32_t ___sslPolicyErrors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
