#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Net.HttpHeaderInfo>
struct Dictionary_2_t4011098823;

#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_HttpHeaderTyp1518115223.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebHeaderCollection
struct  WebHeaderCollection_t1932982249  : public NameValueCollection_t3047564564
{
public:
	// System.Boolean WebSocketSharp.Net.WebHeaderCollection::internallyCreated
	bool ___internallyCreated_13;
	// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.WebHeaderCollection::state
	int32_t ___state_14;

public:
	inline static int32_t get_offset_of_internallyCreated_13() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t1932982249, ___internallyCreated_13)); }
	inline bool get_internallyCreated_13() const { return ___internallyCreated_13; }
	inline bool* get_address_of_internallyCreated_13() { return &___internallyCreated_13; }
	inline void set_internallyCreated_13(bool value)
	{
		___internallyCreated_13 = value;
	}

	inline static int32_t get_offset_of_state_14() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t1932982249, ___state_14)); }
	inline int32_t get_state_14() const { return ___state_14; }
	inline int32_t* get_address_of_state_14() { return &___state_14; }
	inline void set_state_14(int32_t value)
	{
		___state_14 = value;
	}
};

struct WebHeaderCollection_t1932982249_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Net.HttpHeaderInfo> WebSocketSharp.Net.WebHeaderCollection::headers
	Dictionary_2_t4011098823 * ___headers_12;

public:
	inline static int32_t get_offset_of_headers_12() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t1932982249_StaticFields, ___headers_12)); }
	inline Dictionary_2_t4011098823 * get_headers_12() const { return ___headers_12; }
	inline Dictionary_2_t4011098823 ** get_address_of_headers_12() { return &___headers_12; }
	inline void set_headers_12(Dictionary_2_t4011098823 * value)
	{
		___headers_12 = value;
		Il2CppCodeGenWriteBarrier(&___headers_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
