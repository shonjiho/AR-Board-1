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
// System.Action`1<WebSocketSharp.WsFrame>
struct Action_1_t151675447;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WsFrame/<ParseAsync>c__AnonStorey1E
struct  U3CParseAsyncU3Ec__AnonStorey1E_t168196585  : public Il2CppObject
{
public:
	// System.IO.Stream WebSocketSharp.WsFrame/<ParseAsync>c__AnonStorey1E::stream
	Stream_t3255436806 * ___stream_0;
	// System.Boolean WebSocketSharp.WsFrame/<ParseAsync>c__AnonStorey1E::unmask
	bool ___unmask_1;
	// System.Action`1<WebSocketSharp.WsFrame> WebSocketSharp.WsFrame/<ParseAsync>c__AnonStorey1E::completed
	Action_1_t151675447 * ___completed_2;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CParseAsyncU3Ec__AnonStorey1E_t168196585, ___stream_0)); }
	inline Stream_t3255436806 * get_stream_0() const { return ___stream_0; }
	inline Stream_t3255436806 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t3255436806 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}

	inline static int32_t get_offset_of_unmask_1() { return static_cast<int32_t>(offsetof(U3CParseAsyncU3Ec__AnonStorey1E_t168196585, ___unmask_1)); }
	inline bool get_unmask_1() const { return ___unmask_1; }
	inline bool* get_address_of_unmask_1() { return &___unmask_1; }
	inline void set_unmask_1(bool value)
	{
		___unmask_1 = value;
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CParseAsyncU3Ec__AnonStorey1E_t168196585, ___completed_2)); }
	inline Action_1_t151675447 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t151675447 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t151675447 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier(&___completed_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
