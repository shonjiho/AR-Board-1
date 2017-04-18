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
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;
// GameManager
struct GameManager_t2252321495;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager/<UserMoveCoroutine>c__Iterator1
struct  U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604  : public Il2CppObject
{
public:
	// UnityEngine.GameObject GameManager/<UserMoveCoroutine>c__Iterator1::<players>__0
	GameObject_t1756533147 * ___U3CplayersU3E__0_0;
	// System.Int32 GameManager/<UserMoveCoroutine>c__Iterator1::userNum
	int32_t ___userNum_1;
	// UnityEngine.GameObject GameManager/<UserMoveCoroutine>c__Iterator1::<player>__1
	GameObject_t1756533147 * ___U3CplayerU3E__1_2;
	// UnityEngine.Transform GameManager/<UserMoveCoroutine>c__Iterator1::<target>__2
	Transform_t3275118058 * ___U3CtargetU3E__2_3;
	// System.Single GameManager/<UserMoveCoroutine>c__Iterator1::<speed>__3
	float ___U3CspeedU3E__3_4;
	// UnityEngine.Animator GameManager/<UserMoveCoroutine>c__Iterator1::<animator>__4
	Animator_t69676727 * ___U3CanimatorU3E__4_5;
	// System.Int32 GameManager/<UserMoveCoroutine>c__Iterator1::moveValue
	int32_t ___moveValue_6;
	// System.Int32 GameManager/<UserMoveCoroutine>c__Iterator1::<moveModuler>__5
	int32_t ___U3CmoveModulerU3E__5_7;
	// System.Single GameManager/<UserMoveCoroutine>c__Iterator1::<step>__6
	float ___U3CstepU3E__6_8;
	// System.Single GameManager/<UserMoveCoroutine>c__Iterator1::<step>__7
	float ___U3CstepU3E__7_9;
	// GameManager GameManager/<UserMoveCoroutine>c__Iterator1::$this
	GameManager_t2252321495 * ___U24this_10;
	// System.Object GameManager/<UserMoveCoroutine>c__Iterator1::$current
	Il2CppObject * ___U24current_11;
	// System.Boolean GameManager/<UserMoveCoroutine>c__Iterator1::$disposing
	bool ___U24disposing_12;
	// System.Int32 GameManager/<UserMoveCoroutine>c__Iterator1::$PC
	int32_t ___U24PC_13;

public:
	inline static int32_t get_offset_of_U3CplayersU3E__0_0() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U3CplayersU3E__0_0)); }
	inline GameObject_t1756533147 * get_U3CplayersU3E__0_0() const { return ___U3CplayersU3E__0_0; }
	inline GameObject_t1756533147 ** get_address_of_U3CplayersU3E__0_0() { return &___U3CplayersU3E__0_0; }
	inline void set_U3CplayersU3E__0_0(GameObject_t1756533147 * value)
	{
		___U3CplayersU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayersU3E__0_0, value);
	}

	inline static int32_t get_offset_of_userNum_1() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___userNum_1)); }
	inline int32_t get_userNum_1() const { return ___userNum_1; }
	inline int32_t* get_address_of_userNum_1() { return &___userNum_1; }
	inline void set_userNum_1(int32_t value)
	{
		___userNum_1 = value;
	}

	inline static int32_t get_offset_of_U3CplayerU3E__1_2() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U3CplayerU3E__1_2)); }
	inline GameObject_t1756533147 * get_U3CplayerU3E__1_2() const { return ___U3CplayerU3E__1_2; }
	inline GameObject_t1756533147 ** get_address_of_U3CplayerU3E__1_2() { return &___U3CplayerU3E__1_2; }
	inline void set_U3CplayerU3E__1_2(GameObject_t1756533147 * value)
	{
		___U3CplayerU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayerU3E__1_2, value);
	}

	inline static int32_t get_offset_of_U3CtargetU3E__2_3() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U3CtargetU3E__2_3)); }
	inline Transform_t3275118058 * get_U3CtargetU3E__2_3() const { return ___U3CtargetU3E__2_3; }
	inline Transform_t3275118058 ** get_address_of_U3CtargetU3E__2_3() { return &___U3CtargetU3E__2_3; }
	inline void set_U3CtargetU3E__2_3(Transform_t3275118058 * value)
	{
		___U3CtargetU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtargetU3E__2_3, value);
	}

	inline static int32_t get_offset_of_U3CspeedU3E__3_4() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U3CspeedU3E__3_4)); }
	inline float get_U3CspeedU3E__3_4() const { return ___U3CspeedU3E__3_4; }
	inline float* get_address_of_U3CspeedU3E__3_4() { return &___U3CspeedU3E__3_4; }
	inline void set_U3CspeedU3E__3_4(float value)
	{
		___U3CspeedU3E__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CanimatorU3E__4_5() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U3CanimatorU3E__4_5)); }
	inline Animator_t69676727 * get_U3CanimatorU3E__4_5() const { return ___U3CanimatorU3E__4_5; }
	inline Animator_t69676727 ** get_address_of_U3CanimatorU3E__4_5() { return &___U3CanimatorU3E__4_5; }
	inline void set_U3CanimatorU3E__4_5(Animator_t69676727 * value)
	{
		___U3CanimatorU3E__4_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CanimatorU3E__4_5, value);
	}

	inline static int32_t get_offset_of_moveValue_6() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___moveValue_6)); }
	inline int32_t get_moveValue_6() const { return ___moveValue_6; }
	inline int32_t* get_address_of_moveValue_6() { return &___moveValue_6; }
	inline void set_moveValue_6(int32_t value)
	{
		___moveValue_6 = value;
	}

	inline static int32_t get_offset_of_U3CmoveModulerU3E__5_7() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U3CmoveModulerU3E__5_7)); }
	inline int32_t get_U3CmoveModulerU3E__5_7() const { return ___U3CmoveModulerU3E__5_7; }
	inline int32_t* get_address_of_U3CmoveModulerU3E__5_7() { return &___U3CmoveModulerU3E__5_7; }
	inline void set_U3CmoveModulerU3E__5_7(int32_t value)
	{
		___U3CmoveModulerU3E__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CstepU3E__6_8() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U3CstepU3E__6_8)); }
	inline float get_U3CstepU3E__6_8() const { return ___U3CstepU3E__6_8; }
	inline float* get_address_of_U3CstepU3E__6_8() { return &___U3CstepU3E__6_8; }
	inline void set_U3CstepU3E__6_8(float value)
	{
		___U3CstepU3E__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CstepU3E__7_9() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U3CstepU3E__7_9)); }
	inline float get_U3CstepU3E__7_9() const { return ___U3CstepU3E__7_9; }
	inline float* get_address_of_U3CstepU3E__7_9() { return &___U3CstepU3E__7_9; }
	inline void set_U3CstepU3E__7_9(float value)
	{
		___U3CstepU3E__7_9 = value;
	}

	inline static int32_t get_offset_of_U24this_10() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U24this_10)); }
	inline GameManager_t2252321495 * get_U24this_10() const { return ___U24this_10; }
	inline GameManager_t2252321495 ** get_address_of_U24this_10() { return &___U24this_10; }
	inline void set_U24this_10(GameManager_t2252321495 * value)
	{
		___U24this_10 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_10, value);
	}

	inline static int32_t get_offset_of_U24current_11() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U24current_11)); }
	inline Il2CppObject * get_U24current_11() const { return ___U24current_11; }
	inline Il2CppObject ** get_address_of_U24current_11() { return &___U24current_11; }
	inline void set_U24current_11(Il2CppObject * value)
	{
		___U24current_11 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_11, value);
	}

	inline static int32_t get_offset_of_U24disposing_12() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U24disposing_12)); }
	inline bool get_U24disposing_12() const { return ___U24disposing_12; }
	inline bool* get_address_of_U24disposing_12() { return &___U24disposing_12; }
	inline void set_U24disposing_12(bool value)
	{
		___U24disposing_12 = value;
	}

	inline static int32_t get_offset_of_U24PC_13() { return static_cast<int32_t>(offsetof(U3CUserMoveCoroutineU3Ec__Iterator1_t1584711604, ___U24PC_13)); }
	inline int32_t get_U24PC_13() const { return ___U24PC_13; }
	inline int32_t* get_address_of_U24PC_13() { return &___U24PC_13; }
	inline void set_U24PC_13(int32_t value)
	{
		___U24PC_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
