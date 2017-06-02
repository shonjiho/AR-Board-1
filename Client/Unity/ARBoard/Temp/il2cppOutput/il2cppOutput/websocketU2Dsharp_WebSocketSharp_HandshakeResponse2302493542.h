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

#include "websocketU2Dsharp_WebSocketSharp_HandshakeBase1218024076.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.HandshakeResponse
struct  HandshakeResponse_t2302493542  : public HandshakeBase_t1218024076
{
public:
	// System.String WebSocketSharp.HandshakeResponse::_code
	String_t* ____code_3;
	// System.String WebSocketSharp.HandshakeResponse::_reason
	String_t* ____reason_4;

public:
	inline static int32_t get_offset_of__code_3() { return static_cast<int32_t>(offsetof(HandshakeResponse_t2302493542, ____code_3)); }
	inline String_t* get__code_3() const { return ____code_3; }
	inline String_t** get_address_of__code_3() { return &____code_3; }
	inline void set__code_3(String_t* value)
	{
		____code_3 = value;
		Il2CppCodeGenWriteBarrier(&____code_3, value);
	}

	inline static int32_t get_offset_of__reason_4() { return static_cast<int32_t>(offsetof(HandshakeResponse_t2302493542, ____reason_4)); }
	inline String_t* get__reason_4() const { return ____reason_4; }
	inline String_t** get_address_of__reason_4() { return &____reason_4; }
	inline void set__reason_4(String_t* value)
	{
		____reason_4 = value;
		Il2CppCodeGenWriteBarrier(&____reason_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
