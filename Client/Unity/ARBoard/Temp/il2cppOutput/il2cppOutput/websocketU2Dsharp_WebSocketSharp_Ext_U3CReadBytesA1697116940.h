#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Action`1<System.Byte[]>
struct Action_1_t3199133395;
// System.Action`1<System.Exception>
struct Action_1_t1729240069;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey9
struct  U3CReadBytesAsyncU3Ec__AnonStorey9_t1697116940  : public Il2CppObject
{
public:
	// System.IO.Stream WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey9::stream
	Stream_t3255436806 * ___stream_0;
	// System.Int32 WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey9::length
	int32_t ___length_1;
	// System.Byte[] WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey9::buffer
	ByteU5BU5D_t3397334013* ___buffer_2;
	// System.Action`1<System.Byte[]> WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey9::completed
	Action_1_t3199133395 * ___completed_3;
	// System.Action`1<System.Exception> WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey9::error
	Action_1_t1729240069 * ___error_4;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey9_t1697116940, ___stream_0)); }
	inline Stream_t3255436806 * get_stream_0() const { return ___stream_0; }
	inline Stream_t3255436806 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t3255436806 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey9_t1697116940, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey9_t1697116940, ___buffer_2)); }
	inline ByteU5BU5D_t3397334013* get_buffer_2() const { return ___buffer_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(ByteU5BU5D_t3397334013* value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_2, value);
	}

	inline static int32_t get_offset_of_completed_3() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey9_t1697116940, ___completed_3)); }
	inline Action_1_t3199133395 * get_completed_3() const { return ___completed_3; }
	inline Action_1_t3199133395 ** get_address_of_completed_3() { return &___completed_3; }
	inline void set_completed_3(Action_1_t3199133395 * value)
	{
		___completed_3 = value;
		Il2CppCodeGenWriteBarrier(&___completed_3, value);
	}

	inline static int32_t get_offset_of_error_4() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStorey9_t1697116940, ___error_4)); }
	inline Action_1_t1729240069 * get_error_4() const { return ___error_4; }
	inline Action_1_t1729240069 ** get_address_of_error_4() { return &___error_4; }
	inline void set_error_4(Action_1_t1729240069 * value)
	{
		___error_4 = value;
		Il2CppCodeGenWriteBarrier(&___error_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
