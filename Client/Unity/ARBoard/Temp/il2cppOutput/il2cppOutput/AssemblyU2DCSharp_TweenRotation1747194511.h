#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_UITweener2986641582.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenRotation
struct  TweenRotation_t1747194511  : public UITweener_t2986641582
{
public:
	// UnityEngine.Vector3 TweenRotation::from
	Vector3_t2243707580  ___from_23;
	// UnityEngine.Vector3 TweenRotation::to
	Vector3_t2243707580  ___to_24;
	// UnityEngine.Transform TweenRotation::mTrans
	Transform_t3275118058 * ___mTrans_25;

public:
	inline static int32_t get_offset_of_from_23() { return static_cast<int32_t>(offsetof(TweenRotation_t1747194511, ___from_23)); }
	inline Vector3_t2243707580  get_from_23() const { return ___from_23; }
	inline Vector3_t2243707580 * get_address_of_from_23() { return &___from_23; }
	inline void set_from_23(Vector3_t2243707580  value)
	{
		___from_23 = value;
	}

	inline static int32_t get_offset_of_to_24() { return static_cast<int32_t>(offsetof(TweenRotation_t1747194511, ___to_24)); }
	inline Vector3_t2243707580  get_to_24() const { return ___to_24; }
	inline Vector3_t2243707580 * get_address_of_to_24() { return &___to_24; }
	inline void set_to_24(Vector3_t2243707580  value)
	{
		___to_24 = value;
	}

	inline static int32_t get_offset_of_mTrans_25() { return static_cast<int32_t>(offsetof(TweenRotation_t1747194511, ___mTrans_25)); }
	inline Transform_t3275118058 * get_mTrans_25() const { return ___mTrans_25; }
	inline Transform_t3275118058 ** get_address_of_mTrans_25() { return &___mTrans_25; }
	inline void set_mTrans_25(Transform_t3275118058 * value)
	{
		___mTrans_25 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
