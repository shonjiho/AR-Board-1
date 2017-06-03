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

#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.CloseEventArgs
struct  CloseEventArgs_t344507773  : public EventArgs_t3289624707
{
public:
	// System.Boolean WebSocketSharp.CloseEventArgs::_clean
	bool ____clean_1;
	// System.UInt16 WebSocketSharp.CloseEventArgs::_code
	uint16_t ____code_2;
	// System.String WebSocketSharp.CloseEventArgs::_reason
	String_t* ____reason_3;

public:
	inline static int32_t get_offset_of__clean_1() { return static_cast<int32_t>(offsetof(CloseEventArgs_t344507773, ____clean_1)); }
	inline bool get__clean_1() const { return ____clean_1; }
	inline bool* get_address_of__clean_1() { return &____clean_1; }
	inline void set__clean_1(bool value)
	{
		____clean_1 = value;
	}

	inline static int32_t get_offset_of__code_2() { return static_cast<int32_t>(offsetof(CloseEventArgs_t344507773, ____code_2)); }
	inline uint16_t get__code_2() const { return ____code_2; }
	inline uint16_t* get_address_of__code_2() { return &____code_2; }
	inline void set__code_2(uint16_t value)
	{
		____code_2 = value;
	}

	inline static int32_t get_offset_of__reason_3() { return static_cast<int32_t>(offsetof(CloseEventArgs_t344507773, ____reason_3)); }
	inline String_t* get__reason_3() const { return ____reason_3; }
	inline String_t** get_address_of__reason_3() { return &____reason_3; }
	inline void set__reason_3(String_t* value)
	{
		____reason_3 = value;
		Il2CppCodeGenWriteBarrier(&____reason_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
