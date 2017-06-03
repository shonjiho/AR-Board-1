#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t3052225568;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WsStream/<readHandshakeHeaders>c__AnonStorey14
struct  U3CreadHandshakeHeadersU3Ec__AnonStorey14_t16254895  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Byte> WebSocketSharp.WsStream/<readHandshakeHeaders>c__AnonStorey14::buffer
	List_1_t3052225568 * ___buffer_0;
	// System.Int32 WebSocketSharp.WsStream/<readHandshakeHeaders>c__AnonStorey14::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(U3CreadHandshakeHeadersU3Ec__AnonStorey14_t16254895, ___buffer_0)); }
	inline List_1_t3052225568 * get_buffer_0() const { return ___buffer_0; }
	inline List_1_t3052225568 ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(List_1_t3052225568 * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(U3CreadHandshakeHeadersU3Ec__AnonStorey14_t16254895, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
