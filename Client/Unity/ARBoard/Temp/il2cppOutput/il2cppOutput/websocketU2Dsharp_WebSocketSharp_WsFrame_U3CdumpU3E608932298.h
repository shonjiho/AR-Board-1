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
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WsFrame/<dump>c__AnonStorey1C
struct  U3CdumpU3Ec__AnonStorey1C_t608932298  : public Il2CppObject
{
public:
	// System.String WebSocketSharp.WsFrame/<dump>c__AnonStorey1C::countFmt
	String_t* ___countFmt_0;
	// System.Text.StringBuilder WebSocketSharp.WsFrame/<dump>c__AnonStorey1C::buffer
	StringBuilder_t1221177846 * ___buffer_1;

public:
	inline static int32_t get_offset_of_countFmt_0() { return static_cast<int32_t>(offsetof(U3CdumpU3Ec__AnonStorey1C_t608932298, ___countFmt_0)); }
	inline String_t* get_countFmt_0() const { return ___countFmt_0; }
	inline String_t** get_address_of_countFmt_0() { return &___countFmt_0; }
	inline void set_countFmt_0(String_t* value)
	{
		___countFmt_0 = value;
		Il2CppCodeGenWriteBarrier(&___countFmt_0, value);
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(U3CdumpU3Ec__AnonStorey1C_t608932298, ___buffer_1)); }
	inline StringBuilder_t1221177846 * get_buffer_1() const { return ___buffer_1; }
	inline StringBuilder_t1221177846 ** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(StringBuilder_t1221177846 * value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
