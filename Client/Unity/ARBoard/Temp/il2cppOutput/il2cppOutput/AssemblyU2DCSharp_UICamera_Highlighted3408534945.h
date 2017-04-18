#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera/Highlighted
struct  Highlighted_t3408534945  : public Il2CppObject
{
public:
	// UnityEngine.GameObject UICamera/Highlighted::go
	GameObject_t1756533147 * ___go_0;
	// System.Int32 UICamera/Highlighted::counter
	int32_t ___counter_1;

public:
	inline static int32_t get_offset_of_go_0() { return static_cast<int32_t>(offsetof(Highlighted_t3408534945, ___go_0)); }
	inline GameObject_t1756533147 * get_go_0() const { return ___go_0; }
	inline GameObject_t1756533147 ** get_address_of_go_0() { return &___go_0; }
	inline void set_go_0(GameObject_t1756533147 * value)
	{
		___go_0 = value;
		Il2CppCodeGenWriteBarrier(&___go_0, value);
	}

	inline static int32_t get_offset_of_counter_1() { return static_cast<int32_t>(offsetof(Highlighted_t3408534945, ___counter_1)); }
	inline int32_t get_counter_1() const { return ___counter_1; }
	inline int32_t* get_address_of_counter_1() { return &___counter_1; }
	inline void set_counter_1(int32_t value)
	{
		___counter_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
