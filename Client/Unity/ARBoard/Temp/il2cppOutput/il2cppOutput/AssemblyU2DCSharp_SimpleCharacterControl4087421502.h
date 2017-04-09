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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t2866794480;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SimpleCharacterControl_ControlMo3900831625.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleCharacterControl
struct  SimpleCharacterControl_t4087421502  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SimpleCharacterControl::m_moveSpeed
	float ___m_moveSpeed_2;
	// System.Single SimpleCharacterControl::m_turnSpeed
	float ___m_turnSpeed_3;
	// System.Single SimpleCharacterControl::m_jumpForce
	float ___m_jumpForce_4;
	// UnityEngine.Animator SimpleCharacterControl::m_animator
	Animator_t69676727 * ___m_animator_5;
	// UnityEngine.Rigidbody SimpleCharacterControl::m_rigidBody
	Rigidbody_t4233889191 * ___m_rigidBody_6;
	// SimpleCharacterControl/ControlMode SimpleCharacterControl::m_controlMode
	int32_t ___m_controlMode_7;
	// System.Single SimpleCharacterControl::m_currentV
	float ___m_currentV_8;
	// System.Single SimpleCharacterControl::m_currentH
	float ___m_currentH_9;
	// System.Single SimpleCharacterControl::m_interpolation
	float ___m_interpolation_10;
	// System.Single SimpleCharacterControl::m_walkScale
	float ___m_walkScale_11;
	// System.Single SimpleCharacterControl::m_backwardsWalkScale
	float ___m_backwardsWalkScale_12;
	// System.Single SimpleCharacterControl::m_backwardRunScale
	float ___m_backwardRunScale_13;
	// System.Boolean SimpleCharacterControl::m_wasGrounded
	bool ___m_wasGrounded_14;
	// UnityEngine.Vector3 SimpleCharacterControl::m_currentDirection
	Vector3_t2243707580  ___m_currentDirection_15;
	// System.Single SimpleCharacterControl::m_jumpTimeStamp
	float ___m_jumpTimeStamp_16;
	// System.Single SimpleCharacterControl::m_minJumpInterval
	float ___m_minJumpInterval_17;
	// System.Boolean SimpleCharacterControl::m_isGrounded
	bool ___m_isGrounded_18;
	// System.Collections.Generic.List`1<UnityEngine.Collider> SimpleCharacterControl::m_collisions
	List_1_t2866794480 * ___m_collisions_19;

public:
	inline static int32_t get_offset_of_m_moveSpeed_2() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_moveSpeed_2)); }
	inline float get_m_moveSpeed_2() const { return ___m_moveSpeed_2; }
	inline float* get_address_of_m_moveSpeed_2() { return &___m_moveSpeed_2; }
	inline void set_m_moveSpeed_2(float value)
	{
		___m_moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_turnSpeed_3() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_turnSpeed_3)); }
	inline float get_m_turnSpeed_3() const { return ___m_turnSpeed_3; }
	inline float* get_address_of_m_turnSpeed_3() { return &___m_turnSpeed_3; }
	inline void set_m_turnSpeed_3(float value)
	{
		___m_turnSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_jumpForce_4() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_jumpForce_4)); }
	inline float get_m_jumpForce_4() const { return ___m_jumpForce_4; }
	inline float* get_address_of_m_jumpForce_4() { return &___m_jumpForce_4; }
	inline void set_m_jumpForce_4(float value)
	{
		___m_jumpForce_4 = value;
	}

	inline static int32_t get_offset_of_m_animator_5() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_animator_5)); }
	inline Animator_t69676727 * get_m_animator_5() const { return ___m_animator_5; }
	inline Animator_t69676727 ** get_address_of_m_animator_5() { return &___m_animator_5; }
	inline void set_m_animator_5(Animator_t69676727 * value)
	{
		___m_animator_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_animator_5, value);
	}

	inline static int32_t get_offset_of_m_rigidBody_6() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_rigidBody_6)); }
	inline Rigidbody_t4233889191 * get_m_rigidBody_6() const { return ___m_rigidBody_6; }
	inline Rigidbody_t4233889191 ** get_address_of_m_rigidBody_6() { return &___m_rigidBody_6; }
	inline void set_m_rigidBody_6(Rigidbody_t4233889191 * value)
	{
		___m_rigidBody_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_rigidBody_6, value);
	}

	inline static int32_t get_offset_of_m_controlMode_7() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_controlMode_7)); }
	inline int32_t get_m_controlMode_7() const { return ___m_controlMode_7; }
	inline int32_t* get_address_of_m_controlMode_7() { return &___m_controlMode_7; }
	inline void set_m_controlMode_7(int32_t value)
	{
		___m_controlMode_7 = value;
	}

	inline static int32_t get_offset_of_m_currentV_8() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_currentV_8)); }
	inline float get_m_currentV_8() const { return ___m_currentV_8; }
	inline float* get_address_of_m_currentV_8() { return &___m_currentV_8; }
	inline void set_m_currentV_8(float value)
	{
		___m_currentV_8 = value;
	}

	inline static int32_t get_offset_of_m_currentH_9() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_currentH_9)); }
	inline float get_m_currentH_9() const { return ___m_currentH_9; }
	inline float* get_address_of_m_currentH_9() { return &___m_currentH_9; }
	inline void set_m_currentH_9(float value)
	{
		___m_currentH_9 = value;
	}

	inline static int32_t get_offset_of_m_interpolation_10() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_interpolation_10)); }
	inline float get_m_interpolation_10() const { return ___m_interpolation_10; }
	inline float* get_address_of_m_interpolation_10() { return &___m_interpolation_10; }
	inline void set_m_interpolation_10(float value)
	{
		___m_interpolation_10 = value;
	}

	inline static int32_t get_offset_of_m_walkScale_11() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_walkScale_11)); }
	inline float get_m_walkScale_11() const { return ___m_walkScale_11; }
	inline float* get_address_of_m_walkScale_11() { return &___m_walkScale_11; }
	inline void set_m_walkScale_11(float value)
	{
		___m_walkScale_11 = value;
	}

	inline static int32_t get_offset_of_m_backwardsWalkScale_12() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_backwardsWalkScale_12)); }
	inline float get_m_backwardsWalkScale_12() const { return ___m_backwardsWalkScale_12; }
	inline float* get_address_of_m_backwardsWalkScale_12() { return &___m_backwardsWalkScale_12; }
	inline void set_m_backwardsWalkScale_12(float value)
	{
		___m_backwardsWalkScale_12 = value;
	}

	inline static int32_t get_offset_of_m_backwardRunScale_13() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_backwardRunScale_13)); }
	inline float get_m_backwardRunScale_13() const { return ___m_backwardRunScale_13; }
	inline float* get_address_of_m_backwardRunScale_13() { return &___m_backwardRunScale_13; }
	inline void set_m_backwardRunScale_13(float value)
	{
		___m_backwardRunScale_13 = value;
	}

	inline static int32_t get_offset_of_m_wasGrounded_14() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_wasGrounded_14)); }
	inline bool get_m_wasGrounded_14() const { return ___m_wasGrounded_14; }
	inline bool* get_address_of_m_wasGrounded_14() { return &___m_wasGrounded_14; }
	inline void set_m_wasGrounded_14(bool value)
	{
		___m_wasGrounded_14 = value;
	}

	inline static int32_t get_offset_of_m_currentDirection_15() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_currentDirection_15)); }
	inline Vector3_t2243707580  get_m_currentDirection_15() const { return ___m_currentDirection_15; }
	inline Vector3_t2243707580 * get_address_of_m_currentDirection_15() { return &___m_currentDirection_15; }
	inline void set_m_currentDirection_15(Vector3_t2243707580  value)
	{
		___m_currentDirection_15 = value;
	}

	inline static int32_t get_offset_of_m_jumpTimeStamp_16() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_jumpTimeStamp_16)); }
	inline float get_m_jumpTimeStamp_16() const { return ___m_jumpTimeStamp_16; }
	inline float* get_address_of_m_jumpTimeStamp_16() { return &___m_jumpTimeStamp_16; }
	inline void set_m_jumpTimeStamp_16(float value)
	{
		___m_jumpTimeStamp_16 = value;
	}

	inline static int32_t get_offset_of_m_minJumpInterval_17() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_minJumpInterval_17)); }
	inline float get_m_minJumpInterval_17() const { return ___m_minJumpInterval_17; }
	inline float* get_address_of_m_minJumpInterval_17() { return &___m_minJumpInterval_17; }
	inline void set_m_minJumpInterval_17(float value)
	{
		___m_minJumpInterval_17 = value;
	}

	inline static int32_t get_offset_of_m_isGrounded_18() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_isGrounded_18)); }
	inline bool get_m_isGrounded_18() const { return ___m_isGrounded_18; }
	inline bool* get_address_of_m_isGrounded_18() { return &___m_isGrounded_18; }
	inline void set_m_isGrounded_18(bool value)
	{
		___m_isGrounded_18 = value;
	}

	inline static int32_t get_offset_of_m_collisions_19() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t4087421502, ___m_collisions_19)); }
	inline List_1_t2866794480 * get_m_collisions_19() const { return ___m_collisions_19; }
	inline List_1_t2866794480 ** get_address_of_m_collisions_19() { return &___m_collisions_19; }
	inline void set_m_collisions_19(List_1_t2866794480 * value)
	{
		___m_collisions_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_collisions_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
