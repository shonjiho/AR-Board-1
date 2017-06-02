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

// WebSocketSharp.AuthenticationChallenge
struct  AuthenticationChallenge_t3277932947  : public Il2CppObject
{
public:
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.AuthenticationChallenge::_params
	NameValueCollection_t3047564564 * ____params_0;
	// System.String WebSocketSharp.AuthenticationChallenge::_scheme
	String_t* ____scheme_1;

public:
	inline static int32_t get_offset_of__params_0() { return static_cast<int32_t>(offsetof(AuthenticationChallenge_t3277932947, ____params_0)); }
	inline NameValueCollection_t3047564564 * get__params_0() const { return ____params_0; }
	inline NameValueCollection_t3047564564 ** get_address_of__params_0() { return &____params_0; }
	inline void set__params_0(NameValueCollection_t3047564564 * value)
	{
		____params_0 = value;
		Il2CppCodeGenWriteBarrier(&____params_0, value);
	}

	inline static int32_t get_offset_of__scheme_1() { return static_cast<int32_t>(offsetof(AuthenticationChallenge_t3277932947, ____scheme_1)); }
	inline String_t* get__scheme_1() const { return ____scheme_1; }
	inline String_t** get_address_of__scheme_1() { return &____scheme_1; }
	inline void set__scheme_1(String_t* value)
	{
		____scheme_1 = value;
		Il2CppCodeGenWriteBarrier(&____scheme_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
