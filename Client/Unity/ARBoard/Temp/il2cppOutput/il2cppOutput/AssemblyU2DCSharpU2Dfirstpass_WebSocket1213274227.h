#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t19570940;
// WebSocketSharp.WebSocket
struct WebSocket_t3268376029;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t3216990848;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocket
struct  WebSocket_t1213274227  : public Il2CppObject
{
public:
	// System.Uri WebSocket::mUrl
	Uri_t19570940 * ___mUrl_0;
	// WebSocketSharp.WebSocket WebSocket::m_Socket
	WebSocket_t3268376029 * ___m_Socket_1;
	// System.Collections.Generic.Queue`1<System.Byte[]> WebSocket::m_Messages
	Queue_1_t3216990848 * ___m_Messages_2;
	// System.Boolean WebSocket::m_IsConnected
	bool ___m_IsConnected_3;
	// System.String WebSocket::m_Error
	String_t* ___m_Error_4;

public:
	inline static int32_t get_offset_of_mUrl_0() { return static_cast<int32_t>(offsetof(WebSocket_t1213274227, ___mUrl_0)); }
	inline Uri_t19570940 * get_mUrl_0() const { return ___mUrl_0; }
	inline Uri_t19570940 ** get_address_of_mUrl_0() { return &___mUrl_0; }
	inline void set_mUrl_0(Uri_t19570940 * value)
	{
		___mUrl_0 = value;
		Il2CppCodeGenWriteBarrier(&___mUrl_0, value);
	}

	inline static int32_t get_offset_of_m_Socket_1() { return static_cast<int32_t>(offsetof(WebSocket_t1213274227, ___m_Socket_1)); }
	inline WebSocket_t3268376029 * get_m_Socket_1() const { return ___m_Socket_1; }
	inline WebSocket_t3268376029 ** get_address_of_m_Socket_1() { return &___m_Socket_1; }
	inline void set_m_Socket_1(WebSocket_t3268376029 * value)
	{
		___m_Socket_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Socket_1, value);
	}

	inline static int32_t get_offset_of_m_Messages_2() { return static_cast<int32_t>(offsetof(WebSocket_t1213274227, ___m_Messages_2)); }
	inline Queue_1_t3216990848 * get_m_Messages_2() const { return ___m_Messages_2; }
	inline Queue_1_t3216990848 ** get_address_of_m_Messages_2() { return &___m_Messages_2; }
	inline void set_m_Messages_2(Queue_1_t3216990848 * value)
	{
		___m_Messages_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Messages_2, value);
	}

	inline static int32_t get_offset_of_m_IsConnected_3() { return static_cast<int32_t>(offsetof(WebSocket_t1213274227, ___m_IsConnected_3)); }
	inline bool get_m_IsConnected_3() const { return ___m_IsConnected_3; }
	inline bool* get_address_of_m_IsConnected_3() { return &___m_IsConnected_3; }
	inline void set_m_IsConnected_3(bool value)
	{
		___m_IsConnected_3 = value;
	}

	inline static int32_t get_offset_of_m_Error_4() { return static_cast<int32_t>(offsetof(WebSocket_t1213274227, ___m_Error_4)); }
	inline String_t* get_m_Error_4() const { return ___m_Error_4; }
	inline String_t** get_address_of_m_Error_4() { return &___m_Error_4; }
	inline void set_m_Error_4(String_t* value)
	{
		___m_Error_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Error_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
