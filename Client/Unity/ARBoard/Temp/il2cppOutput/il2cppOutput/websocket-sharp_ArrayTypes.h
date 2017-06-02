#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// WebSocketSharp.Net.Cookie
struct Cookie_t1826188460;
// WebSocketSharp.Net.HttpHeaderInfo
struct HttpHeaderInfo_t2096319561;

#include "mscorlib_System_Array3829468939.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_Cookie1826188460.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_HttpHeaderInf2096319561.h"

#pragma once
// WebSocketSharp.Net.Cookie[]
struct CookieU5BU5D_t2763837221  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Cookie_t1826188460 * m_Items[1];

public:
	inline Cookie_t1826188460 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Cookie_t1826188460 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Cookie_t1826188460 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Cookie_t1826188460 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Cookie_t1826188460 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Cookie_t1826188460 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// WebSocketSharp.Net.HttpHeaderInfo[]
struct HttpHeaderInfoU5BU5D_t1437758580  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) HttpHeaderInfo_t2096319561 * m_Items[1];

public:
	inline HttpHeaderInfo_t2096319561 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HttpHeaderInfo_t2096319561 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HttpHeaderInfo_t2096319561 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline HttpHeaderInfo_t2096319561 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HttpHeaderInfo_t2096319561 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HttpHeaderInfo_t2096319561 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
