#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Exception1927440687.h"
#include "websocketU2Dsharp_WebSocketSharp_CloseStatusCode2945181741.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketException
struct  WebSocketException_t1348391352  : public Exception_t1927440687
{
public:
	// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::<Code>k__BackingField
	uint16_t ___U3CCodeU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WebSocketException_t1348391352, ___U3CCodeU3Ek__BackingField_11)); }
	inline uint16_t get_U3CCodeU3Ek__BackingField_11() const { return ___U3CCodeU3Ek__BackingField_11; }
	inline uint16_t* get_address_of_U3CCodeU3Ek__BackingField_11() { return &___U3CCodeU3Ek__BackingField_11; }
	inline void set_U3CCodeU3Ek__BackingField_11(uint16_t value)
	{
		___U3CCodeU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
