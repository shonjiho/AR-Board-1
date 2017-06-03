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
// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;

#include "mscorlib_System_Object2689449295.h"
#include "websocketU2Dsharp_WebSocketSharp_Fin2752139063.h"
#include "websocketU2Dsharp_WebSocketSharp_Rsv1058189029.h"
#include "websocketU2Dsharp_WebSocketSharp_Opcode2313788840.h"
#include "websocketU2Dsharp_WebSocketSharp_Mask1111889066.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WsFrame
struct  WsFrame_t349876065  : public Il2CppObject
{
public:
	// WebSocketSharp.Fin WebSocketSharp.WsFrame::<Fin>k__BackingField
	uint8_t ___U3CFinU3Ek__BackingField_1;
	// WebSocketSharp.Rsv WebSocketSharp.WsFrame::<Rsv1>k__BackingField
	uint8_t ___U3CRsv1U3Ek__BackingField_2;
	// WebSocketSharp.Rsv WebSocketSharp.WsFrame::<Rsv2>k__BackingField
	uint8_t ___U3CRsv2U3Ek__BackingField_3;
	// WebSocketSharp.Rsv WebSocketSharp.WsFrame::<Rsv3>k__BackingField
	uint8_t ___U3CRsv3U3Ek__BackingField_4;
	// WebSocketSharp.Opcode WebSocketSharp.WsFrame::<Opcode>k__BackingField
	uint8_t ___U3COpcodeU3Ek__BackingField_5;
	// WebSocketSharp.Mask WebSocketSharp.WsFrame::<Mask>k__BackingField
	uint8_t ___U3CMaskU3Ek__BackingField_6;
	// System.Byte WebSocketSharp.WsFrame::<PayloadLen>k__BackingField
	uint8_t ___U3CPayloadLenU3Ek__BackingField_7;
	// System.Byte[] WebSocketSharp.WsFrame::<ExtPayloadLen>k__BackingField
	ByteU5BU5D_t3397334013* ___U3CExtPayloadLenU3Ek__BackingField_8;
	// System.Byte[] WebSocketSharp.WsFrame::<MaskingKey>k__BackingField
	ByteU5BU5D_t3397334013* ___U3CMaskingKeyU3Ek__BackingField_9;
	// WebSocketSharp.PayloadData WebSocketSharp.WsFrame::<PayloadData>k__BackingField
	PayloadData_t3839327312 * ___U3CPayloadDataU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CFinU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WsFrame_t349876065, ___U3CFinU3Ek__BackingField_1)); }
	inline uint8_t get_U3CFinU3Ek__BackingField_1() const { return ___U3CFinU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CFinU3Ek__BackingField_1() { return &___U3CFinU3Ek__BackingField_1; }
	inline void set_U3CFinU3Ek__BackingField_1(uint8_t value)
	{
		___U3CFinU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRsv1U3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WsFrame_t349876065, ___U3CRsv1U3Ek__BackingField_2)); }
	inline uint8_t get_U3CRsv1U3Ek__BackingField_2() const { return ___U3CRsv1U3Ek__BackingField_2; }
	inline uint8_t* get_address_of_U3CRsv1U3Ek__BackingField_2() { return &___U3CRsv1U3Ek__BackingField_2; }
	inline void set_U3CRsv1U3Ek__BackingField_2(uint8_t value)
	{
		___U3CRsv1U3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRsv2U3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WsFrame_t349876065, ___U3CRsv2U3Ek__BackingField_3)); }
	inline uint8_t get_U3CRsv2U3Ek__BackingField_3() const { return ___U3CRsv2U3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CRsv2U3Ek__BackingField_3() { return &___U3CRsv2U3Ek__BackingField_3; }
	inline void set_U3CRsv2U3Ek__BackingField_3(uint8_t value)
	{
		___U3CRsv2U3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRsv3U3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WsFrame_t349876065, ___U3CRsv3U3Ek__BackingField_4)); }
	inline uint8_t get_U3CRsv3U3Ek__BackingField_4() const { return ___U3CRsv3U3Ek__BackingField_4; }
	inline uint8_t* get_address_of_U3CRsv3U3Ek__BackingField_4() { return &___U3CRsv3U3Ek__BackingField_4; }
	inline void set_U3CRsv3U3Ek__BackingField_4(uint8_t value)
	{
		___U3CRsv3U3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3COpcodeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WsFrame_t349876065, ___U3COpcodeU3Ek__BackingField_5)); }
	inline uint8_t get_U3COpcodeU3Ek__BackingField_5() const { return ___U3COpcodeU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3COpcodeU3Ek__BackingField_5() { return &___U3COpcodeU3Ek__BackingField_5; }
	inline void set_U3COpcodeU3Ek__BackingField_5(uint8_t value)
	{
		___U3COpcodeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CMaskU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WsFrame_t349876065, ___U3CMaskU3Ek__BackingField_6)); }
	inline uint8_t get_U3CMaskU3Ek__BackingField_6() const { return ___U3CMaskU3Ek__BackingField_6; }
	inline uint8_t* get_address_of_U3CMaskU3Ek__BackingField_6() { return &___U3CMaskU3Ek__BackingField_6; }
	inline void set_U3CMaskU3Ek__BackingField_6(uint8_t value)
	{
		___U3CMaskU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CPayloadLenU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WsFrame_t349876065, ___U3CPayloadLenU3Ek__BackingField_7)); }
	inline uint8_t get_U3CPayloadLenU3Ek__BackingField_7() const { return ___U3CPayloadLenU3Ek__BackingField_7; }
	inline uint8_t* get_address_of_U3CPayloadLenU3Ek__BackingField_7() { return &___U3CPayloadLenU3Ek__BackingField_7; }
	inline void set_U3CPayloadLenU3Ek__BackingField_7(uint8_t value)
	{
		___U3CPayloadLenU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CExtPayloadLenU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WsFrame_t349876065, ___U3CExtPayloadLenU3Ek__BackingField_8)); }
	inline ByteU5BU5D_t3397334013* get_U3CExtPayloadLenU3Ek__BackingField_8() const { return ___U3CExtPayloadLenU3Ek__BackingField_8; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CExtPayloadLenU3Ek__BackingField_8() { return &___U3CExtPayloadLenU3Ek__BackingField_8; }
	inline void set_U3CExtPayloadLenU3Ek__BackingField_8(ByteU5BU5D_t3397334013* value)
	{
		___U3CExtPayloadLenU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExtPayloadLenU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CMaskingKeyU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WsFrame_t349876065, ___U3CMaskingKeyU3Ek__BackingField_9)); }
	inline ByteU5BU5D_t3397334013* get_U3CMaskingKeyU3Ek__BackingField_9() const { return ___U3CMaskingKeyU3Ek__BackingField_9; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CMaskingKeyU3Ek__BackingField_9() { return &___U3CMaskingKeyU3Ek__BackingField_9; }
	inline void set_U3CMaskingKeyU3Ek__BackingField_9(ByteU5BU5D_t3397334013* value)
	{
		___U3CMaskingKeyU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMaskingKeyU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CPayloadDataU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WsFrame_t349876065, ___U3CPayloadDataU3Ek__BackingField_10)); }
	inline PayloadData_t3839327312 * get_U3CPayloadDataU3Ek__BackingField_10() const { return ___U3CPayloadDataU3Ek__BackingField_10; }
	inline PayloadData_t3839327312 ** get_address_of_U3CPayloadDataU3Ek__BackingField_10() { return &___U3CPayloadDataU3Ek__BackingField_10; }
	inline void set_U3CPayloadDataU3Ek__BackingField_10(PayloadData_t3839327312 * value)
	{
		___U3CPayloadDataU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPayloadDataU3Ek__BackingField_10, value);
	}
};

struct WsFrame_t349876065_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.WsFrame::EmptyUnmaskPingData
	ByteU5BU5D_t3397334013* ___EmptyUnmaskPingData_0;

public:
	inline static int32_t get_offset_of_EmptyUnmaskPingData_0() { return static_cast<int32_t>(offsetof(WsFrame_t349876065_StaticFields, ___EmptyUnmaskPingData_0)); }
	inline ByteU5BU5D_t3397334013* get_EmptyUnmaskPingData_0() const { return ___EmptyUnmaskPingData_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_EmptyUnmaskPingData_0() { return &___EmptyUnmaskPingData_0; }
	inline void set_EmptyUnmaskPingData_0(ByteU5BU5D_t3397334013* value)
	{
		___EmptyUnmaskPingData_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyUnmaskPingData_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
