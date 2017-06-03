#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spin
struct  Spin_t3764633552  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 Spin::rotationsPerSecond
	Vector3_t2243707580  ___rotationsPerSecond_2;
	// UnityEngine.Rigidbody Spin::mRb
	Rigidbody_t4233889191 * ___mRb_3;
	// UnityEngine.Transform Spin::mTrans
	Transform_t3275118058 * ___mTrans_4;

public:
	inline static int32_t get_offset_of_rotationsPerSecond_2() { return static_cast<int32_t>(offsetof(Spin_t3764633552, ___rotationsPerSecond_2)); }
	inline Vector3_t2243707580  get_rotationsPerSecond_2() const { return ___rotationsPerSecond_2; }
	inline Vector3_t2243707580 * get_address_of_rotationsPerSecond_2() { return &___rotationsPerSecond_2; }
	inline void set_rotationsPerSecond_2(Vector3_t2243707580  value)
	{
		___rotationsPerSecond_2 = value;
	}

	inline static int32_t get_offset_of_mRb_3() { return static_cast<int32_t>(offsetof(Spin_t3764633552, ___mRb_3)); }
	inline Rigidbody_t4233889191 * get_mRb_3() const { return ___mRb_3; }
	inline Rigidbody_t4233889191 ** get_address_of_mRb_3() { return &___mRb_3; }
	inline void set_mRb_3(Rigidbody_t4233889191 * value)
	{
		___mRb_3 = value;
		Il2CppCodeGenWriteBarrier(&___mRb_3, value);
	}

	inline static int32_t get_offset_of_mTrans_4() { return static_cast<int32_t>(offsetof(Spin_t3764633552, ___mTrans_4)); }
	inline Transform_t3275118058 * get_mTrans_4() const { return ___mTrans_4; }
	inline Transform_t3275118058 ** get_address_of_mTrans_4() { return &___mTrans_4; }
	inline void set_mTrans_4(Transform_t3275118058 * value)
	{
		___mTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
