#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UILabel
struct UILabel_t1795115428;
// PlayerState
struct PlayerState_t2629781050;
// UnityEngine.Animator
struct Animator_t69676727;
// GameManager
struct GameManager_t2252321495;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager/<MoveProcess>c__Iterator2
struct  U3CMoveProcessU3Ec__Iterator2_t661559935  : public Il2CppObject
{
public:
	// UILabel GameManager/<MoveProcess>c__Iterator2::<diceLabel>__0
	UILabel_t1795115428 * ___U3CdiceLabelU3E__0_0;
	// System.Int32 GameManager/<MoveProcess>c__Iterator2::playerNum
	int32_t ___playerNum_1;
	// PlayerState GameManager/<MoveProcess>c__Iterator2::<playerState>__1
	PlayerState_t2629781050 * ___U3CplayerStateU3E__1_2;
	// System.Int32 GameManager/<MoveProcess>c__Iterator2::moveValue
	int32_t ___moveValue_3;
	// UnityEngine.Vector3 GameManager/<MoveProcess>c__Iterator2::<diceLabelBaseScale>__2
	Vector3_t2243707580  ___U3CdiceLabelBaseScaleU3E__2_4;
	// System.Int32 GameManager/<MoveProcess>c__Iterator2::<i>__3
	int32_t ___U3CiU3E__3_5;
	// System.Single GameManager/<MoveProcess>c__Iterator2::<speed>__4
	float ___U3CspeedU3E__4_6;
	// UnityEngine.Animator GameManager/<MoveProcess>c__Iterator2::<animator>__5
	Animator_t69676727 * ___U3CanimatorU3E__5_7;
	// System.Int32 GameManager/<MoveProcess>c__Iterator2::<moveModuler>__6
	int32_t ___U3CmoveModulerU3E__6_8;
	// UnityEngine.Vector3 GameManager/<MoveProcess>c__Iterator2::<targetPosition>__7
	Vector3_t2243707580  ___U3CtargetPositionU3E__7_9;
	// UnityEngine.Vector3 GameManager/<MoveProcess>c__Iterator2::<beforeVec>__8
	Vector3_t2243707580  ___U3CbeforeVecU3E__8_10;
	// System.Single GameManager/<MoveProcess>c__Iterator2::<step>__9
	float ___U3CstepU3E__9_11;
	// GameManager GameManager/<MoveProcess>c__Iterator2::$this
	GameManager_t2252321495 * ___U24this_12;
	// System.Object GameManager/<MoveProcess>c__Iterator2::$current
	Il2CppObject * ___U24current_13;
	// System.Boolean GameManager/<MoveProcess>c__Iterator2::$disposing
	bool ___U24disposing_14;
	// System.Int32 GameManager/<MoveProcess>c__Iterator2::$PC
	int32_t ___U24PC_15;

public:
	inline static int32_t get_offset_of_U3CdiceLabelU3E__0_0() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U3CdiceLabelU3E__0_0)); }
	inline UILabel_t1795115428 * get_U3CdiceLabelU3E__0_0() const { return ___U3CdiceLabelU3E__0_0; }
	inline UILabel_t1795115428 ** get_address_of_U3CdiceLabelU3E__0_0() { return &___U3CdiceLabelU3E__0_0; }
	inline void set_U3CdiceLabelU3E__0_0(UILabel_t1795115428 * value)
	{
		___U3CdiceLabelU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdiceLabelU3E__0_0, value);
	}

	inline static int32_t get_offset_of_playerNum_1() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___playerNum_1)); }
	inline int32_t get_playerNum_1() const { return ___playerNum_1; }
	inline int32_t* get_address_of_playerNum_1() { return &___playerNum_1; }
	inline void set_playerNum_1(int32_t value)
	{
		___playerNum_1 = value;
	}

	inline static int32_t get_offset_of_U3CplayerStateU3E__1_2() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U3CplayerStateU3E__1_2)); }
	inline PlayerState_t2629781050 * get_U3CplayerStateU3E__1_2() const { return ___U3CplayerStateU3E__1_2; }
	inline PlayerState_t2629781050 ** get_address_of_U3CplayerStateU3E__1_2() { return &___U3CplayerStateU3E__1_2; }
	inline void set_U3CplayerStateU3E__1_2(PlayerState_t2629781050 * value)
	{
		___U3CplayerStateU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayerStateU3E__1_2, value);
	}

	inline static int32_t get_offset_of_moveValue_3() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___moveValue_3)); }
	inline int32_t get_moveValue_3() const { return ___moveValue_3; }
	inline int32_t* get_address_of_moveValue_3() { return &___moveValue_3; }
	inline void set_moveValue_3(int32_t value)
	{
		___moveValue_3 = value;
	}

	inline static int32_t get_offset_of_U3CdiceLabelBaseScaleU3E__2_4() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U3CdiceLabelBaseScaleU3E__2_4)); }
	inline Vector3_t2243707580  get_U3CdiceLabelBaseScaleU3E__2_4() const { return ___U3CdiceLabelBaseScaleU3E__2_4; }
	inline Vector3_t2243707580 * get_address_of_U3CdiceLabelBaseScaleU3E__2_4() { return &___U3CdiceLabelBaseScaleU3E__2_4; }
	inline void set_U3CdiceLabelBaseScaleU3E__2_4(Vector3_t2243707580  value)
	{
		___U3CdiceLabelBaseScaleU3E__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__3_5() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U3CiU3E__3_5)); }
	inline int32_t get_U3CiU3E__3_5() const { return ___U3CiU3E__3_5; }
	inline int32_t* get_address_of_U3CiU3E__3_5() { return &___U3CiU3E__3_5; }
	inline void set_U3CiU3E__3_5(int32_t value)
	{
		___U3CiU3E__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CspeedU3E__4_6() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U3CspeedU3E__4_6)); }
	inline float get_U3CspeedU3E__4_6() const { return ___U3CspeedU3E__4_6; }
	inline float* get_address_of_U3CspeedU3E__4_6() { return &___U3CspeedU3E__4_6; }
	inline void set_U3CspeedU3E__4_6(float value)
	{
		___U3CspeedU3E__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CanimatorU3E__5_7() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U3CanimatorU3E__5_7)); }
	inline Animator_t69676727 * get_U3CanimatorU3E__5_7() const { return ___U3CanimatorU3E__5_7; }
	inline Animator_t69676727 ** get_address_of_U3CanimatorU3E__5_7() { return &___U3CanimatorU3E__5_7; }
	inline void set_U3CanimatorU3E__5_7(Animator_t69676727 * value)
	{
		___U3CanimatorU3E__5_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CanimatorU3E__5_7, value);
	}

	inline static int32_t get_offset_of_U3CmoveModulerU3E__6_8() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U3CmoveModulerU3E__6_8)); }
	inline int32_t get_U3CmoveModulerU3E__6_8() const { return ___U3CmoveModulerU3E__6_8; }
	inline int32_t* get_address_of_U3CmoveModulerU3E__6_8() { return &___U3CmoveModulerU3E__6_8; }
	inline void set_U3CmoveModulerU3E__6_8(int32_t value)
	{
		___U3CmoveModulerU3E__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPositionU3E__7_9() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U3CtargetPositionU3E__7_9)); }
	inline Vector3_t2243707580  get_U3CtargetPositionU3E__7_9() const { return ___U3CtargetPositionU3E__7_9; }
	inline Vector3_t2243707580 * get_address_of_U3CtargetPositionU3E__7_9() { return &___U3CtargetPositionU3E__7_9; }
	inline void set_U3CtargetPositionU3E__7_9(Vector3_t2243707580  value)
	{
		___U3CtargetPositionU3E__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CbeforeVecU3E__8_10() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U3CbeforeVecU3E__8_10)); }
	inline Vector3_t2243707580  get_U3CbeforeVecU3E__8_10() const { return ___U3CbeforeVecU3E__8_10; }
	inline Vector3_t2243707580 * get_address_of_U3CbeforeVecU3E__8_10() { return &___U3CbeforeVecU3E__8_10; }
	inline void set_U3CbeforeVecU3E__8_10(Vector3_t2243707580  value)
	{
		___U3CbeforeVecU3E__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CstepU3E__9_11() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U3CstepU3E__9_11)); }
	inline float get_U3CstepU3E__9_11() const { return ___U3CstepU3E__9_11; }
	inline float* get_address_of_U3CstepU3E__9_11() { return &___U3CstepU3E__9_11; }
	inline void set_U3CstepU3E__9_11(float value)
	{
		___U3CstepU3E__9_11 = value;
	}

	inline static int32_t get_offset_of_U24this_12() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U24this_12)); }
	inline GameManager_t2252321495 * get_U24this_12() const { return ___U24this_12; }
	inline GameManager_t2252321495 ** get_address_of_U24this_12() { return &___U24this_12; }
	inline void set_U24this_12(GameManager_t2252321495 * value)
	{
		___U24this_12 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_12, value);
	}

	inline static int32_t get_offset_of_U24current_13() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U24current_13)); }
	inline Il2CppObject * get_U24current_13() const { return ___U24current_13; }
	inline Il2CppObject ** get_address_of_U24current_13() { return &___U24current_13; }
	inline void set_U24current_13(Il2CppObject * value)
	{
		___U24current_13 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_13, value);
	}

	inline static int32_t get_offset_of_U24disposing_14() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U24disposing_14)); }
	inline bool get_U24disposing_14() const { return ___U24disposing_14; }
	inline bool* get_address_of_U24disposing_14() { return &___U24disposing_14; }
	inline void set_U24disposing_14(bool value)
	{
		___U24disposing_14 = value;
	}

	inline static int32_t get_offset_of_U24PC_15() { return static_cast<int32_t>(offsetof(U3CMoveProcessU3Ec__Iterator2_t661559935, ___U24PC_15)); }
	inline int32_t get_U24PC_15() const { return ___U24PC_15; }
	inline int32_t* get_address_of_U24PC_15() { return &___U24PC_15; }
	inline void set_U24PC_15(int32_t value)
	{
		___U24PC_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
