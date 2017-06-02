#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WsStream
struct  WsStream_t4013943898  : public Il2CppObject
{
public:
	// System.Object WebSocketSharp.WsStream::_forWrite
	Il2CppObject * ____forWrite_1;
	// System.IO.Stream WebSocketSharp.WsStream::_innerStream
	Stream_t3255436806 * ____innerStream_2;
	// System.Boolean WebSocketSharp.WsStream::_secure
	bool ____secure_3;

public:
	inline static int32_t get_offset_of__forWrite_1() { return static_cast<int32_t>(offsetof(WsStream_t4013943898, ____forWrite_1)); }
	inline Il2CppObject * get__forWrite_1() const { return ____forWrite_1; }
	inline Il2CppObject ** get_address_of__forWrite_1() { return &____forWrite_1; }
	inline void set__forWrite_1(Il2CppObject * value)
	{
		____forWrite_1 = value;
		Il2CppCodeGenWriteBarrier(&____forWrite_1, value);
	}

	inline static int32_t get_offset_of__innerStream_2() { return static_cast<int32_t>(offsetof(WsStream_t4013943898, ____innerStream_2)); }
	inline Stream_t3255436806 * get__innerStream_2() const { return ____innerStream_2; }
	inline Stream_t3255436806 ** get_address_of__innerStream_2() { return &____innerStream_2; }
	inline void set__innerStream_2(Stream_t3255436806 * value)
	{
		____innerStream_2 = value;
		Il2CppCodeGenWriteBarrier(&____innerStream_2, value);
	}

	inline static int32_t get_offset_of__secure_3() { return static_cast<int32_t>(offsetof(WsStream_t4013943898, ____secure_3)); }
	inline bool get__secure_3() const { return ____secure_3; }
	inline bool* get_address_of__secure_3() { return &____secure_3; }
	inline void set__secure_3(bool value)
	{
		____secure_3 = value;
	}
};

struct WsStream_t4013943898_StaticFields
{
public:
	// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.WsStream::<>f__am$cache3
	RemoteCertificateValidationCallback_t2756269959 * ___U3CU3Ef__amU24cache3_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_4() { return static_cast<int32_t>(offsetof(WsStream_t4013943898_StaticFields, ___U3CU3Ef__amU24cache3_4)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_U3CU3Ef__amU24cache3_4() const { return ___U3CU3Ef__amU24cache3_4; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_U3CU3Ef__amU24cache3_4() { return &___U3CU3Ef__amU24cache3_4; }
	inline void set_U3CU3Ef__amU24cache3_4(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___U3CU3Ef__amU24cache3_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
