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

// WebSocketSharp.WebSocket
struct WebSocket_t3268376029;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t3388497467;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t1481358898;
// System.EventHandler
struct EventHandler_t277755526;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t1909060290;
// WebSocketSharp.WsFrame
struct WsFrame_t349876065;
// System.Exception
struct Exception_t1927440687;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t3488732344;
// WebSocketSharp.HandshakeResponse
struct HandshakeResponse_t2302493542;
// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Action
struct Action_t3226471752;
// System.IO.Stream
struct Stream_t3255436806;
// WebSocketSharp.HandshakeRequest
struct HandshakeRequest_t1568981112;
// WebSocketSharp.Net.Cookie
struct Cookie_t1826188460;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_EventHandler277755526.h"
#include "websocketU2Dsharp_WebSocketSharp_WsFrame349876065.h"
#include "mscorlib_System_Exception1927440687.h"
#include "websocketU2Dsharp_WebSocketSharp_CloseStatusCode2945181741.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_WebSockets_We3488732344.h"
#include "websocketU2Dsharp_WebSocketSharp_HandshakeResponse2302493542.h"
#include "websocketU2Dsharp_WebSocketSharp_PayloadData3839327312.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_HttpStatusCod2661820989.h"
#include "websocketU2Dsharp_WebSocketSharp_HandshakeRequest1568981112.h"
#include "websocketU2Dsharp_WebSocketSharp_Opcode2313788840.h"
#include "websocketU2Dsharp_WebSocketSharp_Mask1111889066.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_Cookie1826188460.h"

// System.Void WebSocketSharp.WebSocket::.ctor(System.String,System.String[])
extern "C"  void WebSocket__ctor_m666923799 (WebSocket_t3268376029 * __this, String_t* ___url0, StringU5BU5D_t1642385972* ___protocols1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::add_OnError(System.EventHandler`1<WebSocketSharp.ErrorEventArgs>)
extern "C"  void WebSocket_add_OnError_m3284929358 (WebSocket_t3268376029 * __this, EventHandler_1_t3388497467 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::remove_OnError(System.EventHandler`1<WebSocketSharp.ErrorEventArgs>)
extern "C"  void WebSocket_remove_OnError_m2985090157 (WebSocket_t3268376029 * __this, EventHandler_1_t3388497467 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::add_OnMessage(System.EventHandler`1<WebSocketSharp.MessageEventArgs>)
extern "C"  void WebSocket_add_OnMessage_m2021047116 (WebSocket_t3268376029 * __this, EventHandler_1_t1481358898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::remove_OnMessage(System.EventHandler`1<WebSocketSharp.MessageEventArgs>)
extern "C"  void WebSocket_remove_OnMessage_m2270677221 (WebSocket_t3268376029 * __this, EventHandler_1_t1481358898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::add_OnOpen(System.EventHandler)
extern "C"  void WebSocket_add_OnOpen_m924055045 (WebSocket_t3268376029 * __this, EventHandler_t277755526 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::remove_OnOpen(System.EventHandler)
extern "C"  void WebSocket_remove_OnOpen_m3980689398 (WebSocket_t3268376029 * __this, EventHandler_t277755526 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::System.IDisposable.Dispose()
extern "C"  void WebSocket_System_IDisposable_Dispose_m3961917556 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::get_CustomHandshakeRequestChecker()
extern "C"  Func_2_t1909060290 * WebSocket_get_CustomHandshakeRequestChecker_m3099458368 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::acceptCloseFrame(WebSocketSharp.WsFrame)
extern "C"  bool WebSocket_acceptCloseFrame_m4129581602 (WebSocket_t3268376029 * __this, WsFrame_t349876065 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::acceptDataFrame(WebSocketSharp.WsFrame)
extern "C"  bool WebSocket_acceptDataFrame_m2058620282 (WebSocket_t3268376029 * __this, WsFrame_t349876065 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::acceptException(System.Exception,System.String)
extern "C"  void WebSocket_acceptException_m3620518058 (WebSocket_t3268376029 * __this, Exception_t1927440687 * ___exception0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::acceptFragmentedFrame(WebSocketSharp.WsFrame)
extern "C"  bool WebSocket_acceptFragmentedFrame_m751067791 (WebSocket_t3268376029 * __this, WsFrame_t349876065 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::acceptFragments(WebSocketSharp.WsFrame)
extern "C"  bool WebSocket_acceptFragments_m1515056566 (WebSocket_t3268376029 * __this, WsFrame_t349876065 * ___first0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::acceptFrame(WebSocketSharp.WsFrame)
extern "C"  bool WebSocket_acceptFrame_m592859050 (WebSocket_t3268376029 * __this, WsFrame_t349876065 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::acceptHandshake()
extern "C"  bool WebSocket_acceptHandshake_m1494194874 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::acceptPingFrame(WebSocketSharp.WsFrame)
extern "C"  bool WebSocket_acceptPingFrame_m1659921146 (WebSocket_t3268376029 * __this, WsFrame_t349876065 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::acceptPongFrame(WebSocketSharp.WsFrame)
extern "C"  bool WebSocket_acceptPongFrame_m123083452 (WebSocket_t3268376029 * __this, WsFrame_t349876065 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::acceptSecWebSocketExtensionsHeader(System.String)
extern "C"  void WebSocket_acceptSecWebSocketExtensionsHeader_m1920287492 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::acceptUnsupportedFrame(WebSocketSharp.WsFrame,WebSocketSharp.CloseStatusCode,System.String)
extern "C"  bool WebSocket_acceptUnsupportedFrame_m3880267777 (WebSocket_t3268376029 * __this, WsFrame_t349876065 * ___frame0, uint16_t ___code1, String_t* ___reason2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::checkIfAvailable(System.String,System.Boolean,System.Boolean)
extern "C"  String_t* WebSocket_checkIfAvailable_m1016267186 (WebSocket_t3268376029 * __this, String_t* ___operation0, bool ___availableAsServer1, bool ___availableAsConnected2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::checkIfCanConnect()
extern "C"  String_t* WebSocket_checkIfCanConnect_m2700978679 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::checkIfValidHandshakeRequest(WebSocketSharp.Net.WebSockets.WebSocketContext)
extern "C"  String_t* WebSocket_checkIfValidHandshakeRequest_m1654053765 (WebSocket_t3268376029 * __this, WebSocketContext_t3488732344 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::checkIfValidHandshakeResponse(WebSocketSharp.HandshakeResponse)
extern "C"  String_t* WebSocket_checkIfValidHandshakeResponse_m1213127258 (WebSocket_t3268376029 * __this, HandshakeResponse_t2302493542 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::close(WebSocketSharp.CloseStatusCode,System.String,System.Boolean)
extern "C"  void WebSocket_close_m989736076 (WebSocket_t3268376029 * __this, uint16_t ___code0, String_t* ___reason1, bool ___wait2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::close(WebSocketSharp.PayloadData,System.Boolean,System.Boolean)
extern "C"  void WebSocket_close_m1007791820 (WebSocket_t3268376029 * __this, PayloadData_t3839327312 * ___payload0, bool ___send1, bool ___wait2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::closeClientResources()
extern "C"  void WebSocket_closeClientResources_m3720299095 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::closeHandshake(System.Byte[],System.Int32,System.Action)
extern "C"  bool WebSocket_closeHandshake_m1928783383 (WebSocket_t3268376029 * __this, ByteU5BU5D_t3397334013* ___frame0, int32_t ___timeout1, Action_t3226471752 * ___release2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::closeServerResources()
extern "C"  void WebSocket_closeServerResources_m539598803 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::concatenateFragmentsInto(System.IO.Stream)
extern "C"  bool WebSocket_concatenateFragmentsInto_m3653544016 (WebSocket_t3268376029 * __this, Stream_t3255436806 * ___dest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::connect()
extern "C"  bool WebSocket_connect_m3298158743 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::createExtensionsRequest()
extern "C"  String_t* WebSocket_createExtensionsRequest_m351489323 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HandshakeRequest WebSocketSharp.WebSocket::createHandshakeRequest()
extern "C"  HandshakeRequest_t1568981112 * WebSocket_createHandshakeRequest_m2297848953 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HandshakeResponse WebSocketSharp.WebSocket::createHandshakeResponse()
extern "C"  HandshakeResponse_t2302493542 * WebSocket_createHandshakeResponse_m3805594569 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HandshakeResponse WebSocketSharp.WebSocket::createHandshakeResponse(WebSocketSharp.Net.HttpStatusCode)
extern "C"  HandshakeResponse_t2302493542 * WebSocket_createHandshakeResponse_m1770237828 (WebSocket_t3268376029 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::doHandshake()
extern "C"  bool WebSocket_doHandshake_m1770003205 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::error(System.String)
extern "C"  void WebSocket_error_m2042139931 (WebSocket_t3268376029 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::init()
extern "C"  void WebSocket_init_m2964322191 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::open()
extern "C"  void WebSocket_open_m476730549 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HandshakeResponse WebSocketSharp.WebSocket::receiveHandshakeResponse()
extern "C"  HandshakeResponse_t2302493542 * WebSocket_receiveHandshakeResponse_m3704798640 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::send(WebSocketSharp.HandshakeRequest)
extern "C"  void WebSocket_send_m1000436442 (WebSocket_t3268376029 * __this, HandshakeRequest_t1568981112 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(WebSocketSharp.HandshakeResponse)
extern "C"  bool WebSocket_send_m2686039134 (WebSocket_t3268376029 * __this, HandshakeResponse_t2302493542 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(WebSocketSharp.WsFrame)
extern "C"  bool WebSocket_send_m1879678795 (WebSocket_t3268376029 * __this, WsFrame_t349876065 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(WebSocketSharp.Opcode,System.Byte[])
extern "C"  bool WebSocket_send_m1694581543 (WebSocket_t3268376029 * __this, uint8_t ___opcode0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(WebSocketSharp.Opcode,System.IO.Stream)
extern "C"  bool WebSocket_send_m161023691 (WebSocket_t3268376029 * __this, uint8_t ___opcode0, Stream_t3255436806 * ___stream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::sendFragmented(WebSocketSharp.Opcode,System.IO.Stream,WebSocketSharp.Mask,System.Boolean)
extern "C"  bool WebSocket_sendFragmented_m982570378 (WebSocket_t3268376029 * __this, uint8_t ___opcode0, Stream_t3255436806 * ___stream1, uint8_t ___mask2, bool ___compressed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HandshakeResponse WebSocketSharp.WebSocket::sendHandshakeRequest()
extern "C"  HandshakeResponse_t2302493542 * WebSocket_sendHandshakeRequest_m1955610919 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HandshakeResponse WebSocketSharp.WebSocket::sendHandshakeRequest(WebSocketSharp.HandshakeRequest)
extern "C"  HandshakeResponse_t2302493542 * WebSocket_sendHandshakeRequest_m2253784240 (WebSocket_t3268376029 * __this, HandshakeRequest_t1568981112 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::setClientStream()
extern "C"  void WebSocket_setClientStream_m3923254386 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::startReceiving()
extern "C"  void WebSocket_startReceiving_m872661131 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateHostHeader(System.String)
extern "C"  bool WebSocket_validateHostHeader_m77411568 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketAcceptHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketAcceptHeader_m1256291114 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketExtensionsHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketExtensionsHeader_m1335986796 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketKeyHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketKeyHeader_m3869312701 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketProtocolHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketProtocolHeader_m4087001746 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketVersionClientHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketVersionClientHeader_m2523536321 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketVersionServerHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketVersionServerHeader_m936281861 (WebSocket_t3268376029 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.HandshakeResponse)
extern "C"  void WebSocket_Close_m1526122846 (WebSocket_t3268376029 * __this, HandshakeResponse_t2302493542 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.Net.HttpStatusCode)
extern "C"  void WebSocket_Close_m3774796738 (WebSocket_t3268376029 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CreateBase64Key()
extern "C"  String_t* WebSocket_CreateBase64Key_m3247627260 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CreateResponseKey(System.String)
extern "C"  String_t* WebSocket_CreateResponseKey_m281547458 (Il2CppObject * __this /* static, unused */, String_t* ___base64Key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close()
extern "C"  void WebSocket_Close_m790379411 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocket_Close_m1740541897 (WebSocket_t3268376029 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::ConnectAsync()
extern "C"  void WebSocket_ConnectAsync_m77178505 (WebSocket_t3268376029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Send(System.Byte[])
extern "C"  void WebSocket_Send_m2058475070 (WebSocket_t3268376029 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SetCookie(WebSocketSharp.Net.Cookie)
extern "C"  void WebSocket_SetCookie_m4032961297 (WebSocket_t3268376029 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::<get_CustomHandshakeRequestChecker>m__4(WebSocketSharp.Net.WebSockets.WebSocketContext)
extern "C"  String_t* WebSocket_U3Cget_CustomHandshakeRequestCheckerU3Em__4_m3185496544 (Il2CppObject * __this /* static, unused */, WebSocketContext_t3488732344 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::<acceptHandshake>m__5(System.String)
extern "C"  bool WebSocket_U3CacceptHandshakeU3Em__5_m432676060 (WebSocket_t3268376029 * __this, String_t* ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::<validateSecWebSocketExtensionsHeader>m__A(System.String)
extern "C"  bool WebSocket_U3CvalidateSecWebSocketExtensionsHeaderU3Em__A_m2277949612 (WebSocket_t3268376029 * __this, String_t* ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
