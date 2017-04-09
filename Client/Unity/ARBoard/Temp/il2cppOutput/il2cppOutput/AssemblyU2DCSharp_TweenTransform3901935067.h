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
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenTransform
struct  TweenTransform_t3901935067  : public UITweener_t2986641582
{
public:
	// UnityEngine.Transform TweenTransform::from
	Transform_t3275118058 * ___from_23;
	// UnityEngine.Transform TweenTransform::to
	Transform_t3275118058 * ___to_24;
	// System.Boolean TweenTransform::parentWhenFinished
	bool ___parentWhenFinished_25;
	// UnityEngine.Transform TweenTransform::mTrans
	Transform_t3275118058 * ___mTrans_26;
	// UnityEngine.Vector3 TweenTransform::mPos
	Vector3_t2243707580  ___mPos_27;
	// UnityEngine.Quaternion TweenTransform::mRot
	Quaternion_t4030073918  ___mRot_28;
	// UnityEngine.Vector3 TweenTransform::mScale
	Vector3_t2243707580  ___mScale_29;

public:
	inline static int32_t get_offset_of_from_23() { return static_cast<int32_t>(offsetof(TweenTransform_t3901935067, ___from_23)); }
	inline Transform_t3275118058 * get_from_23() const { return ___from_23; }
	inline Transform_t3275118058 ** get_address_of_from_23() { return &___from_23; }
	inline void set_from_23(Transform_t3275118058 * value)
	{
		___from_23 = value;
		Il2CppCodeGenWriteBarrier(&___from_23, value);
	}

	inline static int32_t get_offset_of_to_24() { return static_cast<int32_t>(offsetof(TweenTransform_t3901935067, ___to_24)); }
	inline Transform_t3275118058 * get_to_24() const { return ___to_24; }
	inline Transform_t3275118058 ** get_address_of_to_24() { return &___to_24; }
	inline void set_to_24(Transform_t3275118058 * value)
	{
		___to_24 = value;
		Il2CppCodeGenWriteBarrier(&___to_24, value);
	}

	inline static int32_t get_offset_of_parentWhenFinished_25() { return static_cast<int32_t>(offsetof(TweenTransform_t3901935067, ___parentWhenFinished_25)); }
	inline bool get_parentWhenFinished_25() const { return ___parentWhenFinished_25; }
	inline bool* get_address_of_parentWhenFinished_25() { return &___parentWhenFinished_25; }
	inline void set_parentWhenFinished_25(bool value)
	{
		___parentWhenFinished_25 = value;
	}

	inline static int32_t get_offset_of_mTrans_26() { return static_cast<int32_t>(offsetof(TweenTransform_t3901935067, ___mTrans_26)); }
	inline Transform_t3275118058 * get_mTrans_26() const { return ___mTrans_26; }
	inline Transform_t3275118058 ** get_address_of_mTrans_26() { return &___mTrans_26; }
	inline void set_mTrans_26(Transform_t3275118058 * value)
	{
		___mTrans_26 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_26, value);
	}

	inline static int32_t get_offset_of_mPos_27() { return static_cast<int32_t>(offsetof(TweenTransform_t3901935067, ___mPos_27)); }
	inline Vector3_t2243707580  get_mPos_27() const { return ___mPos_27; }
	inline Vector3_t2243707580 * get_address_of_mPos_27() { return &___mPos_27; }
	inline void set_mPos_27(Vector3_t2243707580  value)
	{
		___mPos_27 = value;
	}

	inline static int32_t get_offset_of_mRot_28() { return static_cast<int32_t>(offsetof(TweenTransform_t3901935067, ___mRot_28)); }
	inline Quaternion_t4030073918  get_mRot_28() const { return ___mRot_28; }
	inline Quaternion_t4030073918 * get_address_of_mRot_28() { return &___mRot_28; }
	inline void set_mRot_28(Quaternion_t4030073918  value)
	{
		___mRot_28 = value;
	}

	inline static int32_t get_offset_of_mScale_29() { return static_cast<int32_t>(offsetof(TweenTransform_t3901935067, ___mScale_29)); }
	inline Vector3_t2243707580  get_mScale_29() const { return ___mScale_29; }
	inline Vector3_t2243707580 * get_address_of_mScale_29() { return &___mScale_29; }
	inline void set_mScale_29(Vector3_t2243707580  value)
	{
		___mScale_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
