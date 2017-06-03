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
// System.Uri
struct Uri_t19570940;

#include "websocketU2Dsharp_WebSocketSharp_HandshakeBase1218024076.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.HandshakeRequest
struct  HandshakeRequest_t1568981112  : public HandshakeBase_t1218024076
{
public:
	// System.String WebSocketSharp.HandshakeRequest::_method
	String_t* ____method_3;
	// System.String WebSocketSharp.HandshakeRequest::_rawUrl
	String_t* ____rawUrl_4;
	// System.Uri WebSocketSharp.HandshakeRequest::_uri
	Uri_t19570940 * ____uri_5;

public:
	inline static int32_t get_offset_of__method_3() { return static_cast<int32_t>(offsetof(HandshakeRequest_t1568981112, ____method_3)); }
	inline String_t* get__method_3() const { return ____method_3; }
	inline String_t** get_address_of__method_3() { return &____method_3; }
	inline void set__method_3(String_t* value)
	{
		____method_3 = value;
		Il2CppCodeGenWriteBarrier(&____method_3, value);
	}

	inline static int32_t get_offset_of__rawUrl_4() { return static_cast<int32_t>(offsetof(HandshakeRequest_t1568981112, ____rawUrl_4)); }
	inline String_t* get__rawUrl_4() const { return ____rawUrl_4; }
	inline String_t** get_address_of__rawUrl_4() { return &____rawUrl_4; }
	inline void set__rawUrl_4(String_t* value)
	{
		____rawUrl_4 = value;
		Il2CppCodeGenWriteBarrier(&____rawUrl_4, value);
	}

	inline static int32_t get_offset_of__uri_5() { return static_cast<int32_t>(offsetof(HandshakeRequest_t1568981112, ____uri_5)); }
	inline Uri_t19570940 * get__uri_5() const { return ____uri_5; }
	inline Uri_t19570940 ** get_address_of__uri_5() { return &____uri_5; }
	inline void set__uri_5(Uri_t19570940 * value)
	{
		____uri_5 = value;
		Il2CppCodeGenWriteBarrier(&____uri_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
