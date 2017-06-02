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
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_EventArgs3289624707.h"
#include "websocketU2Dsharp_WebSocketSharp_Opcode2313788840.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.MessageEventArgs
struct  MessageEventArgs_t2890051726  : public EventArgs_t3289624707
{
public:
	// System.String WebSocketSharp.MessageEventArgs::_data
	String_t* ____data_1;
	// WebSocketSharp.Opcode WebSocketSharp.MessageEventArgs::_opcode
	uint8_t ____opcode_2;
	// System.Byte[] WebSocketSharp.MessageEventArgs::_rawData
	ByteU5BU5D_t3397334013* ____rawData_3;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t2890051726, ____data_1)); }
	inline String_t* get__data_1() const { return ____data_1; }
	inline String_t** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(String_t* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier(&____data_1, value);
	}

	inline static int32_t get_offset_of__opcode_2() { return static_cast<int32_t>(offsetof(MessageEventArgs_t2890051726, ____opcode_2)); }
	inline uint8_t get__opcode_2() const { return ____opcode_2; }
	inline uint8_t* get_address_of__opcode_2() { return &____opcode_2; }
	inline void set__opcode_2(uint8_t value)
	{
		____opcode_2 = value;
	}

	inline static int32_t get_offset_of__rawData_3() { return static_cast<int32_t>(offsetof(MessageEventArgs_t2890051726, ____rawData_3)); }
	inline ByteU5BU5D_t3397334013* get__rawData_3() const { return ____rawData_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__rawData_3() { return &____rawData_3; }
	inline void set__rawData_3(ByteU5BU5D_t3397334013* value)
	{
		____rawData_3 = value;
		Il2CppCodeGenWriteBarrier(&____rawData_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
