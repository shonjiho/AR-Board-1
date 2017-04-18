#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveCharacter
struct  MoveCharacter_t3861584580  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator MoveCharacter::ani
	Animator_t69676727 * ___ani_2;

public:
	inline static int32_t get_offset_of_ani_2() { return static_cast<int32_t>(offsetof(MoveCharacter_t3861584580, ___ani_2)); }
	inline Animator_t69676727 * get_ani_2() const { return ___ani_2; }
	inline Animator_t69676727 ** get_address_of_ani_2() { return &___ani_2; }
	inline void set_ani_2(Animator_t69676727 * value)
	{
		___ani_2 = value;
		Il2CppCodeGenWriteBarrier(&___ani_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
