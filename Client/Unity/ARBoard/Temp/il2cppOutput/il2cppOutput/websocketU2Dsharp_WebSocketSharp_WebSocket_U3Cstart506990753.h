#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// WebSocketSharp.WebSocket
struct WebSocket_t3268376029;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<startReceiving>c__AnonStoreyE
struct  U3CstartReceivingU3Ec__AnonStoreyE_t506990753  : public Il2CppObject
{
public:
	// System.Action WebSocketSharp.WebSocket/<startReceiving>c__AnonStoreyE::receive
	Action_t3226471752 * ___receive_0;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<startReceiving>c__AnonStoreyE::<>f__this
	WebSocket_t3268376029 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_receive_0() { return static_cast<int32_t>(offsetof(U3CstartReceivingU3Ec__AnonStoreyE_t506990753, ___receive_0)); }
	inline Action_t3226471752 * get_receive_0() const { return ___receive_0; }
	inline Action_t3226471752 ** get_address_of_receive_0() { return &___receive_0; }
	inline void set_receive_0(Action_t3226471752 * value)
	{
		___receive_0 = value;
		Il2CppCodeGenWriteBarrier(&___receive_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CstartReceivingU3Ec__AnonStoreyE_t506990753, ___U3CU3Ef__this_1)); }
	inline WebSocket_t3268376029 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline WebSocket_t3268376029 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(WebSocket_t3268376029 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
