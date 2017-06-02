#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.Version
struct Version_t1755874712;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.HandshakeBase
struct  HandshakeBase_t1218024076  : public Il2CppObject
{
public:
	// System.Byte[] WebSocketSharp.HandshakeBase::_entity
	ByteU5BU5D_t3397334013* ____entity_0;
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.HandshakeBase::_headers
	NameValueCollection_t3047564564 * ____headers_1;
	// System.Version WebSocketSharp.HandshakeBase::_version
	Version_t1755874712 * ____version_2;

public:
	inline static int32_t get_offset_of__entity_0() { return static_cast<int32_t>(offsetof(HandshakeBase_t1218024076, ____entity_0)); }
	inline ByteU5BU5D_t3397334013* get__entity_0() const { return ____entity_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__entity_0() { return &____entity_0; }
	inline void set__entity_0(ByteU5BU5D_t3397334013* value)
	{
		____entity_0 = value;
		Il2CppCodeGenWriteBarrier(&____entity_0, value);
	}

	inline static int32_t get_offset_of__headers_1() { return static_cast<int32_t>(offsetof(HandshakeBase_t1218024076, ____headers_1)); }
	inline NameValueCollection_t3047564564 * get__headers_1() const { return ____headers_1; }
	inline NameValueCollection_t3047564564 ** get_address_of__headers_1() { return &____headers_1; }
	inline void set__headers_1(NameValueCollection_t3047564564 * value)
	{
		____headers_1 = value;
		Il2CppCodeGenWriteBarrier(&____headers_1, value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(HandshakeBase_t1218024076, ____version_2)); }
	inline Version_t1755874712 * get__version_2() const { return ____version_2; }
	inline Version_t1755874712 ** get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(Version_t1755874712 * value)
	{
		____version_2 = value;
		Il2CppCodeGenWriteBarrier(&____version_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
