#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.AuthenticationResponse
struct  AuthenticationResponse_t356113411  : public Il2CppObject
{
public:
	// System.UInt32 WebSocketSharp.AuthenticationResponse::_nonceCount
	uint32_t ____nonceCount_0;
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.AuthenticationResponse::_params
	NameValueCollection_t3047564564 * ____params_1;
	// System.String WebSocketSharp.AuthenticationResponse::_scheme
	String_t* ____scheme_2;

public:
	inline static int32_t get_offset_of__nonceCount_0() { return static_cast<int32_t>(offsetof(AuthenticationResponse_t356113411, ____nonceCount_0)); }
	inline uint32_t get__nonceCount_0() const { return ____nonceCount_0; }
	inline uint32_t* get_address_of__nonceCount_0() { return &____nonceCount_0; }
	inline void set__nonceCount_0(uint32_t value)
	{
		____nonceCount_0 = value;
	}

	inline static int32_t get_offset_of__params_1() { return static_cast<int32_t>(offsetof(AuthenticationResponse_t356113411, ____params_1)); }
	inline NameValueCollection_t3047564564 * get__params_1() const { return ____params_1; }
	inline NameValueCollection_t3047564564 ** get_address_of__params_1() { return &____params_1; }
	inline void set__params_1(NameValueCollection_t3047564564 * value)
	{
		____params_1 = value;
		Il2CppCodeGenWriteBarrier(&____params_1, value);
	}

	inline static int32_t get_offset_of__scheme_2() { return static_cast<int32_t>(offsetof(AuthenticationResponse_t356113411, ____scheme_2)); }
	inline String_t* get__scheme_2() const { return ____scheme_2; }
	inline String_t** get_address_of__scheme_2() { return &____scheme_2; }
	inline void set__scheme_2(String_t* value)
	{
		____scheme_2 = value;
		Il2CppCodeGenWriteBarrier(&____scheme_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
