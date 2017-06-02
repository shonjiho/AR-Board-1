#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.Cookie
struct  Cookie_t1826188460  : public Il2CppObject
{
public:
	// System.String WebSocketSharp.Net.Cookie::_comment
	String_t* ____comment_2;
	// System.Uri WebSocketSharp.Net.Cookie::_commentUri
	Uri_t19570940 * ____commentUri_3;
	// System.Boolean WebSocketSharp.Net.Cookie::_discard
	bool ____discard_4;
	// System.String WebSocketSharp.Net.Cookie::_domain
	String_t* ____domain_5;
	// System.DateTime WebSocketSharp.Net.Cookie::_expires
	DateTime_t693205669  ____expires_6;
	// System.Boolean WebSocketSharp.Net.Cookie::_httpOnly
	bool ____httpOnly_7;
	// System.String WebSocketSharp.Net.Cookie::_name
	String_t* ____name_8;
	// System.String WebSocketSharp.Net.Cookie::_path
	String_t* ____path_9;
	// System.String WebSocketSharp.Net.Cookie::_port
	String_t* ____port_10;
	// System.Int32[] WebSocketSharp.Net.Cookie::_ports
	Int32U5BU5D_t3030399641* ____ports_11;
	// System.Boolean WebSocketSharp.Net.Cookie::_secure
	bool ____secure_12;
	// System.DateTime WebSocketSharp.Net.Cookie::_timestamp
	DateTime_t693205669  ____timestamp_13;
	// System.String WebSocketSharp.Net.Cookie::_value
	String_t* ____value_14;
	// System.Int32 WebSocketSharp.Net.Cookie::_version
	int32_t ____version_15;
	// System.Boolean WebSocketSharp.Net.Cookie::<ExactDomain>k__BackingField
	bool ___U3CExactDomainU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of__comment_2() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____comment_2)); }
	inline String_t* get__comment_2() const { return ____comment_2; }
	inline String_t** get_address_of__comment_2() { return &____comment_2; }
	inline void set__comment_2(String_t* value)
	{
		____comment_2 = value;
		Il2CppCodeGenWriteBarrier(&____comment_2, value);
	}

	inline static int32_t get_offset_of__commentUri_3() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____commentUri_3)); }
	inline Uri_t19570940 * get__commentUri_3() const { return ____commentUri_3; }
	inline Uri_t19570940 ** get_address_of__commentUri_3() { return &____commentUri_3; }
	inline void set__commentUri_3(Uri_t19570940 * value)
	{
		____commentUri_3 = value;
		Il2CppCodeGenWriteBarrier(&____commentUri_3, value);
	}

	inline static int32_t get_offset_of__discard_4() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____discard_4)); }
	inline bool get__discard_4() const { return ____discard_4; }
	inline bool* get_address_of__discard_4() { return &____discard_4; }
	inline void set__discard_4(bool value)
	{
		____discard_4 = value;
	}

	inline static int32_t get_offset_of__domain_5() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____domain_5)); }
	inline String_t* get__domain_5() const { return ____domain_5; }
	inline String_t** get_address_of__domain_5() { return &____domain_5; }
	inline void set__domain_5(String_t* value)
	{
		____domain_5 = value;
		Il2CppCodeGenWriteBarrier(&____domain_5, value);
	}

	inline static int32_t get_offset_of__expires_6() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____expires_6)); }
	inline DateTime_t693205669  get__expires_6() const { return ____expires_6; }
	inline DateTime_t693205669 * get_address_of__expires_6() { return &____expires_6; }
	inline void set__expires_6(DateTime_t693205669  value)
	{
		____expires_6 = value;
	}

	inline static int32_t get_offset_of__httpOnly_7() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____httpOnly_7)); }
	inline bool get__httpOnly_7() const { return ____httpOnly_7; }
	inline bool* get_address_of__httpOnly_7() { return &____httpOnly_7; }
	inline void set__httpOnly_7(bool value)
	{
		____httpOnly_7 = value;
	}

	inline static int32_t get_offset_of__name_8() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____name_8)); }
	inline String_t* get__name_8() const { return ____name_8; }
	inline String_t** get_address_of__name_8() { return &____name_8; }
	inline void set__name_8(String_t* value)
	{
		____name_8 = value;
		Il2CppCodeGenWriteBarrier(&____name_8, value);
	}

	inline static int32_t get_offset_of__path_9() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____path_9)); }
	inline String_t* get__path_9() const { return ____path_9; }
	inline String_t** get_address_of__path_9() { return &____path_9; }
	inline void set__path_9(String_t* value)
	{
		____path_9 = value;
		Il2CppCodeGenWriteBarrier(&____path_9, value);
	}

	inline static int32_t get_offset_of__port_10() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____port_10)); }
	inline String_t* get__port_10() const { return ____port_10; }
	inline String_t** get_address_of__port_10() { return &____port_10; }
	inline void set__port_10(String_t* value)
	{
		____port_10 = value;
		Il2CppCodeGenWriteBarrier(&____port_10, value);
	}

	inline static int32_t get_offset_of__ports_11() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____ports_11)); }
	inline Int32U5BU5D_t3030399641* get__ports_11() const { return ____ports_11; }
	inline Int32U5BU5D_t3030399641** get_address_of__ports_11() { return &____ports_11; }
	inline void set__ports_11(Int32U5BU5D_t3030399641* value)
	{
		____ports_11 = value;
		Il2CppCodeGenWriteBarrier(&____ports_11, value);
	}

	inline static int32_t get_offset_of__secure_12() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____secure_12)); }
	inline bool get__secure_12() const { return ____secure_12; }
	inline bool* get_address_of__secure_12() { return &____secure_12; }
	inline void set__secure_12(bool value)
	{
		____secure_12 = value;
	}

	inline static int32_t get_offset_of__timestamp_13() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____timestamp_13)); }
	inline DateTime_t693205669  get__timestamp_13() const { return ____timestamp_13; }
	inline DateTime_t693205669 * get_address_of__timestamp_13() { return &____timestamp_13; }
	inline void set__timestamp_13(DateTime_t693205669  value)
	{
		____timestamp_13 = value;
	}

	inline static int32_t get_offset_of__value_14() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____value_14)); }
	inline String_t* get__value_14() const { return ____value_14; }
	inline String_t** get_address_of__value_14() { return &____value_14; }
	inline void set__value_14(String_t* value)
	{
		____value_14 = value;
		Il2CppCodeGenWriteBarrier(&____value_14, value);
	}

	inline static int32_t get_offset_of__version_15() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ____version_15)); }
	inline int32_t get__version_15() const { return ____version_15; }
	inline int32_t* get_address_of__version_15() { return &____version_15; }
	inline void set__version_15(int32_t value)
	{
		____version_15 = value;
	}

	inline static int32_t get_offset_of_U3CExactDomainU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Cookie_t1826188460, ___U3CExactDomainU3Ek__BackingField_16)); }
	inline bool get_U3CExactDomainU3Ek__BackingField_16() const { return ___U3CExactDomainU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CExactDomainU3Ek__BackingField_16() { return &___U3CExactDomainU3Ek__BackingField_16; }
	inline void set_U3CExactDomainU3Ek__BackingField_16(bool value)
	{
		___U3CExactDomainU3Ek__BackingField_16 = value;
	}
};

struct Cookie_t1826188460_StaticFields
{
public:
	// System.Char[] WebSocketSharp.Net.Cookie::_reservedCharsForName
	CharU5BU5D_t1328083999* ____reservedCharsForName_0;
	// System.Char[] WebSocketSharp.Net.Cookie::_reservedCharsForValue
	CharU5BU5D_t1328083999* ____reservedCharsForValue_1;

public:
	inline static int32_t get_offset_of__reservedCharsForName_0() { return static_cast<int32_t>(offsetof(Cookie_t1826188460_StaticFields, ____reservedCharsForName_0)); }
	inline CharU5BU5D_t1328083999* get__reservedCharsForName_0() const { return ____reservedCharsForName_0; }
	inline CharU5BU5D_t1328083999** get_address_of__reservedCharsForName_0() { return &____reservedCharsForName_0; }
	inline void set__reservedCharsForName_0(CharU5BU5D_t1328083999* value)
	{
		____reservedCharsForName_0 = value;
		Il2CppCodeGenWriteBarrier(&____reservedCharsForName_0, value);
	}

	inline static int32_t get_offset_of__reservedCharsForValue_1() { return static_cast<int32_t>(offsetof(Cookie_t1826188460_StaticFields, ____reservedCharsForValue_1)); }
	inline CharU5BU5D_t1328083999* get__reservedCharsForValue_1() const { return ____reservedCharsForValue_1; }
	inline CharU5BU5D_t1328083999** get_address_of__reservedCharsForValue_1() { return &____reservedCharsForValue_1; }
	inline void set__reservedCharsForValue_1(CharU5BU5D_t1328083999* value)
	{
		____reservedCharsForValue_1 = value;
		Il2CppCodeGenWriteBarrier(&____reservedCharsForValue_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
