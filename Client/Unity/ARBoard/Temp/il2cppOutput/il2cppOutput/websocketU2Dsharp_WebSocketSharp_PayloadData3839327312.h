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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.PayloadData
struct  PayloadData_t3839327312  : public Il2CppObject
{
public:
	// System.Boolean WebSocketSharp.PayloadData::<IsMasked>k__BackingField
	bool ___U3CIsMaskedU3Ek__BackingField_0;
	// System.Byte[] WebSocketSharp.PayloadData::<ExtensionData>k__BackingField
	ByteU5BU5D_t3397334013* ___U3CExtensionDataU3Ek__BackingField_1;
	// System.Byte[] WebSocketSharp.PayloadData::<ApplicationData>k__BackingField
	ByteU5BU5D_t3397334013* ___U3CApplicationDataU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIsMaskedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312, ___U3CIsMaskedU3Ek__BackingField_0)); }
	inline bool get_U3CIsMaskedU3Ek__BackingField_0() const { return ___U3CIsMaskedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsMaskedU3Ek__BackingField_0() { return &___U3CIsMaskedU3Ek__BackingField_0; }
	inline void set_U3CIsMaskedU3Ek__BackingField_0(bool value)
	{
		___U3CIsMaskedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CExtensionDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312, ___U3CExtensionDataU3Ek__BackingField_1)); }
	inline ByteU5BU5D_t3397334013* get_U3CExtensionDataU3Ek__BackingField_1() const { return ___U3CExtensionDataU3Ek__BackingField_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CExtensionDataU3Ek__BackingField_1() { return &___U3CExtensionDataU3Ek__BackingField_1; }
	inline void set_U3CExtensionDataU3Ek__BackingField_1(ByteU5BU5D_t3397334013* value)
	{
		___U3CExtensionDataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExtensionDataU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CApplicationDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312, ___U3CApplicationDataU3Ek__BackingField_2)); }
	inline ByteU5BU5D_t3397334013* get_U3CApplicationDataU3Ek__BackingField_2() const { return ___U3CApplicationDataU3Ek__BackingField_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CApplicationDataU3Ek__BackingField_2() { return &___U3CApplicationDataU3Ek__BackingField_2; }
	inline void set_U3CApplicationDataU3Ek__BackingField_2(ByteU5BU5D_t3397334013* value)
	{
		___U3CApplicationDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CApplicationDataU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
