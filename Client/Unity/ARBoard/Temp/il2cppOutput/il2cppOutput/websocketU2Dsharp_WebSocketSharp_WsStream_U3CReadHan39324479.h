#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.WsStream
struct WsStream_t4013943898;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WsStream/<ReadHandshake>c__AnonStorey15`1<System.Object>
struct  U3CReadHandshakeU3Ec__AnonStorey15_1_t39324479  : public Il2CppObject
{
public:
	// System.Boolean WebSocketSharp.WsStream/<ReadHandshake>c__AnonStorey15`1::timeout
	bool ___timeout_0;
	// WebSocketSharp.WsStream WebSocketSharp.WsStream/<ReadHandshake>c__AnonStorey15`1::<>f__this
	WsStream_t4013943898 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_timeout_0() { return static_cast<int32_t>(offsetof(U3CReadHandshakeU3Ec__AnonStorey15_1_t39324479, ___timeout_0)); }
	inline bool get_timeout_0() const { return ___timeout_0; }
	inline bool* get_address_of_timeout_0() { return &___timeout_0; }
	inline void set_timeout_0(bool value)
	{
		___timeout_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CReadHandshakeU3Ec__AnonStorey15_1_t39324479, ___U3CU3Ef__this_1)); }
	inline WsStream_t4013943898 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline WsStream_t4013943898 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(WsStream_t4013943898 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
