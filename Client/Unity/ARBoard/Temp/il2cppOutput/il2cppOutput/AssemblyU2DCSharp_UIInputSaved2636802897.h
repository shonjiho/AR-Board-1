#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_UIInput860674234.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIInputSaved
struct  UIInputSaved_t2636802897  : public UIInput_t860674234
{
public:
	// System.String UIInputSaved::playerPrefsField
	String_t* ___playerPrefsField_23;

public:
	inline static int32_t get_offset_of_playerPrefsField_23() { return static_cast<int32_t>(offsetof(UIInputSaved_t2636802897, ___playerPrefsField_23)); }
	inline String_t* get_playerPrefsField_23() const { return ___playerPrefsField_23; }
	inline String_t** get_address_of_playerPrefsField_23() { return &___playerPrefsField_23; }
	inline void set_playerPrefsField_23(String_t* value)
	{
		___playerPrefsField_23 = value;
		Il2CppCodeGenWriteBarrier(&___playerPrefsField_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
