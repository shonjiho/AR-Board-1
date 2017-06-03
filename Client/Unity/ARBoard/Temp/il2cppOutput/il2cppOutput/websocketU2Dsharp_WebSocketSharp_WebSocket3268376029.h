#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// WebSocketSharp.AuthenticationChallenge
struct AuthenticationChallenge_t3277932947;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;
// System.Action
struct Action_t3226471752;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t3488732344;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t3911206805;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t15112628;
// System.Object
struct Il2CppObject;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t1909060290;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.String[]
struct StringU5BU5D_t1642385972;
// WebSocketSharp.WsStream
struct WsStream_t4013943898;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.Uri
struct Uri_t19570940;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t3230782241;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t3388497467;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t1481358898;
// System.EventHandler
struct EventHandler_t277755526;

#include "mscorlib_System_Object2689449295.h"
#include "websocketU2Dsharp_WebSocketSharp_CompressionMethod4066553457.h"
#include "websocketU2Dsharp_WebSocketSharp_WebSocketState2935910988.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket
struct  WebSocket_t3268376029  : public Il2CppObject
{
public:
	// WebSocketSharp.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_t3277932947 * ____authChallenge_3;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_4;
	// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.WebSocket::_certValidationCallback
	RemoteCertificateValidationCallback_t2756269959 * ____certValidationCallback_5;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_6;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_t3226471752 * ____closeContext_7;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_8;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_t3488732344 * ____context_9;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_t4248997468 * ____cookies_10;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_t3911206805 * ____credentials_11;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_12;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_exitReceiving
	AutoResetEvent_t15112628 * ____exitReceiving_13;
	// System.Object WebSocketSharp.WebSocket::_forConn
	Il2CppObject * ____forConn_14;
	// System.Object WebSocketSharp.WebSocket::_forSend
	Il2CppObject * ____forSend_15;
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::_handshakeRequestChecker
	Func_2_t1909060290 * ____handshakeRequestChecker_16;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_logger
	Logger_t2598199114 * ____logger_17;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_18;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_19;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_20;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_21;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_t1642385972* ____protocols_22;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_23;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_receivePong
	AutoResetEvent_t15112628 * ____receivePong_24;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_25;
	// WebSocketSharp.WsStream WebSocketSharp.WebSocket::_stream
	WsStream_t4013943898 * ____stream_26;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t408947970 * ____tcpClient_27;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t19570940 * ____uri_28;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_t3230782241 * ___OnClose_29;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_t3388497467 * ___OnError_30;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_t1481358898 * ___OnMessage_31;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_t277755526 * ___OnOpen_32;

public:
	inline static int32_t get_offset_of__authChallenge_3() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____authChallenge_3)); }
	inline AuthenticationChallenge_t3277932947 * get__authChallenge_3() const { return ____authChallenge_3; }
	inline AuthenticationChallenge_t3277932947 ** get_address_of__authChallenge_3() { return &____authChallenge_3; }
	inline void set__authChallenge_3(AuthenticationChallenge_t3277932947 * value)
	{
		____authChallenge_3 = value;
		Il2CppCodeGenWriteBarrier(&____authChallenge_3, value);
	}

	inline static int32_t get_offset_of__base64Key_4() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____base64Key_4)); }
	inline String_t* get__base64Key_4() const { return ____base64Key_4; }
	inline String_t** get_address_of__base64Key_4() { return &____base64Key_4; }
	inline void set__base64Key_4(String_t* value)
	{
		____base64Key_4 = value;
		Il2CppCodeGenWriteBarrier(&____base64Key_4, value);
	}

	inline static int32_t get_offset_of__certValidationCallback_5() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____certValidationCallback_5)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get__certValidationCallback_5() const { return ____certValidationCallback_5; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of__certValidationCallback_5() { return &____certValidationCallback_5; }
	inline void set__certValidationCallback_5(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		____certValidationCallback_5 = value;
		Il2CppCodeGenWriteBarrier(&____certValidationCallback_5, value);
	}

	inline static int32_t get_offset_of__client_6() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____client_6)); }
	inline bool get__client_6() const { return ____client_6; }
	inline bool* get_address_of__client_6() { return &____client_6; }
	inline void set__client_6(bool value)
	{
		____client_6 = value;
	}

	inline static int32_t get_offset_of__closeContext_7() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____closeContext_7)); }
	inline Action_t3226471752 * get__closeContext_7() const { return ____closeContext_7; }
	inline Action_t3226471752 ** get_address_of__closeContext_7() { return &____closeContext_7; }
	inline void set__closeContext_7(Action_t3226471752 * value)
	{
		____closeContext_7 = value;
		Il2CppCodeGenWriteBarrier(&____closeContext_7, value);
	}

	inline static int32_t get_offset_of__compression_8() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____compression_8)); }
	inline uint8_t get__compression_8() const { return ____compression_8; }
	inline uint8_t* get_address_of__compression_8() { return &____compression_8; }
	inline void set__compression_8(uint8_t value)
	{
		____compression_8 = value;
	}

	inline static int32_t get_offset_of__context_9() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____context_9)); }
	inline WebSocketContext_t3488732344 * get__context_9() const { return ____context_9; }
	inline WebSocketContext_t3488732344 ** get_address_of__context_9() { return &____context_9; }
	inline void set__context_9(WebSocketContext_t3488732344 * value)
	{
		____context_9 = value;
		Il2CppCodeGenWriteBarrier(&____context_9, value);
	}

	inline static int32_t get_offset_of__cookies_10() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____cookies_10)); }
	inline CookieCollection_t4248997468 * get__cookies_10() const { return ____cookies_10; }
	inline CookieCollection_t4248997468 ** get_address_of__cookies_10() { return &____cookies_10; }
	inline void set__cookies_10(CookieCollection_t4248997468 * value)
	{
		____cookies_10 = value;
		Il2CppCodeGenWriteBarrier(&____cookies_10, value);
	}

	inline static int32_t get_offset_of__credentials_11() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____credentials_11)); }
	inline NetworkCredential_t3911206805 * get__credentials_11() const { return ____credentials_11; }
	inline NetworkCredential_t3911206805 ** get_address_of__credentials_11() { return &____credentials_11; }
	inline void set__credentials_11(NetworkCredential_t3911206805 * value)
	{
		____credentials_11 = value;
		Il2CppCodeGenWriteBarrier(&____credentials_11, value);
	}

	inline static int32_t get_offset_of__extensions_12() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____extensions_12)); }
	inline String_t* get__extensions_12() const { return ____extensions_12; }
	inline String_t** get_address_of__extensions_12() { return &____extensions_12; }
	inline void set__extensions_12(String_t* value)
	{
		____extensions_12 = value;
		Il2CppCodeGenWriteBarrier(&____extensions_12, value);
	}

	inline static int32_t get_offset_of__exitReceiving_13() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____exitReceiving_13)); }
	inline AutoResetEvent_t15112628 * get__exitReceiving_13() const { return ____exitReceiving_13; }
	inline AutoResetEvent_t15112628 ** get_address_of__exitReceiving_13() { return &____exitReceiving_13; }
	inline void set__exitReceiving_13(AutoResetEvent_t15112628 * value)
	{
		____exitReceiving_13 = value;
		Il2CppCodeGenWriteBarrier(&____exitReceiving_13, value);
	}

	inline static int32_t get_offset_of__forConn_14() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____forConn_14)); }
	inline Il2CppObject * get__forConn_14() const { return ____forConn_14; }
	inline Il2CppObject ** get_address_of__forConn_14() { return &____forConn_14; }
	inline void set__forConn_14(Il2CppObject * value)
	{
		____forConn_14 = value;
		Il2CppCodeGenWriteBarrier(&____forConn_14, value);
	}

	inline static int32_t get_offset_of__forSend_15() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____forSend_15)); }
	inline Il2CppObject * get__forSend_15() const { return ____forSend_15; }
	inline Il2CppObject ** get_address_of__forSend_15() { return &____forSend_15; }
	inline void set__forSend_15(Il2CppObject * value)
	{
		____forSend_15 = value;
		Il2CppCodeGenWriteBarrier(&____forSend_15, value);
	}

	inline static int32_t get_offset_of__handshakeRequestChecker_16() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____handshakeRequestChecker_16)); }
	inline Func_2_t1909060290 * get__handshakeRequestChecker_16() const { return ____handshakeRequestChecker_16; }
	inline Func_2_t1909060290 ** get_address_of__handshakeRequestChecker_16() { return &____handshakeRequestChecker_16; }
	inline void set__handshakeRequestChecker_16(Func_2_t1909060290 * value)
	{
		____handshakeRequestChecker_16 = value;
		Il2CppCodeGenWriteBarrier(&____handshakeRequestChecker_16, value);
	}

	inline static int32_t get_offset_of__logger_17() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____logger_17)); }
	inline Logger_t2598199114 * get__logger_17() const { return ____logger_17; }
	inline Logger_t2598199114 ** get_address_of__logger_17() { return &____logger_17; }
	inline void set__logger_17(Logger_t2598199114 * value)
	{
		____logger_17 = value;
		Il2CppCodeGenWriteBarrier(&____logger_17, value);
	}

	inline static int32_t get_offset_of__nonceCount_18() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____nonceCount_18)); }
	inline uint32_t get__nonceCount_18() const { return ____nonceCount_18; }
	inline uint32_t* get_address_of__nonceCount_18() { return &____nonceCount_18; }
	inline void set__nonceCount_18(uint32_t value)
	{
		____nonceCount_18 = value;
	}

	inline static int32_t get_offset_of__origin_19() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____origin_19)); }
	inline String_t* get__origin_19() const { return ____origin_19; }
	inline String_t** get_address_of__origin_19() { return &____origin_19; }
	inline void set__origin_19(String_t* value)
	{
		____origin_19 = value;
		Il2CppCodeGenWriteBarrier(&____origin_19, value);
	}

	inline static int32_t get_offset_of__preAuth_20() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____preAuth_20)); }
	inline bool get__preAuth_20() const { return ____preAuth_20; }
	inline bool* get_address_of__preAuth_20() { return &____preAuth_20; }
	inline void set__preAuth_20(bool value)
	{
		____preAuth_20 = value;
	}

	inline static int32_t get_offset_of__protocol_21() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____protocol_21)); }
	inline String_t* get__protocol_21() const { return ____protocol_21; }
	inline String_t** get_address_of__protocol_21() { return &____protocol_21; }
	inline void set__protocol_21(String_t* value)
	{
		____protocol_21 = value;
		Il2CppCodeGenWriteBarrier(&____protocol_21, value);
	}

	inline static int32_t get_offset_of__protocols_22() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____protocols_22)); }
	inline StringU5BU5D_t1642385972* get__protocols_22() const { return ____protocols_22; }
	inline StringU5BU5D_t1642385972** get_address_of__protocols_22() { return &____protocols_22; }
	inline void set__protocols_22(StringU5BU5D_t1642385972* value)
	{
		____protocols_22 = value;
		Il2CppCodeGenWriteBarrier(&____protocols_22, value);
	}

	inline static int32_t get_offset_of__readyState_23() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____readyState_23)); }
	inline uint16_t get__readyState_23() const { return ____readyState_23; }
	inline uint16_t* get_address_of__readyState_23() { return &____readyState_23; }
	inline void set__readyState_23(uint16_t value)
	{
		____readyState_23 = value;
	}

	inline static int32_t get_offset_of__receivePong_24() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____receivePong_24)); }
	inline AutoResetEvent_t15112628 * get__receivePong_24() const { return ____receivePong_24; }
	inline AutoResetEvent_t15112628 ** get_address_of__receivePong_24() { return &____receivePong_24; }
	inline void set__receivePong_24(AutoResetEvent_t15112628 * value)
	{
		____receivePong_24 = value;
		Il2CppCodeGenWriteBarrier(&____receivePong_24, value);
	}

	inline static int32_t get_offset_of__secure_25() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____secure_25)); }
	inline bool get__secure_25() const { return ____secure_25; }
	inline bool* get_address_of__secure_25() { return &____secure_25; }
	inline void set__secure_25(bool value)
	{
		____secure_25 = value;
	}

	inline static int32_t get_offset_of__stream_26() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____stream_26)); }
	inline WsStream_t4013943898 * get__stream_26() const { return ____stream_26; }
	inline WsStream_t4013943898 ** get_address_of__stream_26() { return &____stream_26; }
	inline void set__stream_26(WsStream_t4013943898 * value)
	{
		____stream_26 = value;
		Il2CppCodeGenWriteBarrier(&____stream_26, value);
	}

	inline static int32_t get_offset_of__tcpClient_27() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____tcpClient_27)); }
	inline TcpClient_t408947970 * get__tcpClient_27() const { return ____tcpClient_27; }
	inline TcpClient_t408947970 ** get_address_of__tcpClient_27() { return &____tcpClient_27; }
	inline void set__tcpClient_27(TcpClient_t408947970 * value)
	{
		____tcpClient_27 = value;
		Il2CppCodeGenWriteBarrier(&____tcpClient_27, value);
	}

	inline static int32_t get_offset_of__uri_28() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____uri_28)); }
	inline Uri_t19570940 * get__uri_28() const { return ____uri_28; }
	inline Uri_t19570940 ** get_address_of__uri_28() { return &____uri_28; }
	inline void set__uri_28(Uri_t19570940 * value)
	{
		____uri_28 = value;
		Il2CppCodeGenWriteBarrier(&____uri_28, value);
	}

	inline static int32_t get_offset_of_OnClose_29() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ___OnClose_29)); }
	inline EventHandler_1_t3230782241 * get_OnClose_29() const { return ___OnClose_29; }
	inline EventHandler_1_t3230782241 ** get_address_of_OnClose_29() { return &___OnClose_29; }
	inline void set_OnClose_29(EventHandler_1_t3230782241 * value)
	{
		___OnClose_29 = value;
		Il2CppCodeGenWriteBarrier(&___OnClose_29, value);
	}

	inline static int32_t get_offset_of_OnError_30() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ___OnError_30)); }
	inline EventHandler_1_t3388497467 * get_OnError_30() const { return ___OnError_30; }
	inline EventHandler_1_t3388497467 ** get_address_of_OnError_30() { return &___OnError_30; }
	inline void set_OnError_30(EventHandler_1_t3388497467 * value)
	{
		___OnError_30 = value;
		Il2CppCodeGenWriteBarrier(&___OnError_30, value);
	}

	inline static int32_t get_offset_of_OnMessage_31() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ___OnMessage_31)); }
	inline EventHandler_1_t1481358898 * get_OnMessage_31() const { return ___OnMessage_31; }
	inline EventHandler_1_t1481358898 ** get_address_of_OnMessage_31() { return &___OnMessage_31; }
	inline void set_OnMessage_31(EventHandler_1_t1481358898 * value)
	{
		___OnMessage_31 = value;
		Il2CppCodeGenWriteBarrier(&___OnMessage_31, value);
	}

	inline static int32_t get_offset_of_OnOpen_32() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ___OnOpen_32)); }
	inline EventHandler_t277755526 * get_OnOpen_32() const { return ___OnOpen_32; }
	inline EventHandler_t277755526 ** get_address_of_OnOpen_32() { return &___OnOpen_32; }
	inline void set_OnOpen_32(EventHandler_t277755526 * value)
	{
		___OnOpen_32 = value;
		Il2CppCodeGenWriteBarrier(&___OnOpen_32, value);
	}
};

struct WebSocket_t3268376029_StaticFields
{
public:
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::<>f__am$cache1E
	Func_2_t1909060290 * ___U3CU3Ef__amU24cache1E_33;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1E_33() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029_StaticFields, ___U3CU3Ef__amU24cache1E_33)); }
	inline Func_2_t1909060290 * get_U3CU3Ef__amU24cache1E_33() const { return ___U3CU3Ef__amU24cache1E_33; }
	inline Func_2_t1909060290 ** get_address_of_U3CU3Ef__amU24cache1E_33() { return &___U3CU3Ef__amU24cache1E_33; }
	inline void set_U3CU3Ef__amU24cache1E_33(Func_2_t1909060290 * value)
	{
		___U3CU3Ef__amU24cache1E_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1E_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
