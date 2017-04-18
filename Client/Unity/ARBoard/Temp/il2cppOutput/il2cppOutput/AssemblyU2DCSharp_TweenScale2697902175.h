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
// UITable
struct UITable_t3717403602;

#include "AssemblyU2DCSharp_UITweener2986641582.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenScale
struct  TweenScale_t2697902175  : public UITweener_t2986641582
{
public:
	// UnityEngine.Vector3 TweenScale::from
	Vector3_t2243707580  ___from_23;
	// UnityEngine.Vector3 TweenScale::to
	Vector3_t2243707580  ___to_24;
	// System.Boolean TweenScale::updateTable
	bool ___updateTable_25;
	// UnityEngine.Transform TweenScale::mTrans
	Transform_t3275118058 * ___mTrans_26;
	// UITable TweenScale::mTable
	UITable_t3717403602 * ___mTable_27;

public:
	inline static int32_t get_offset_of_from_23() { return static_cast<int32_t>(offsetof(TweenScale_t2697902175, ___from_23)); }
	inline Vector3_t2243707580  get_from_23() const { return ___from_23; }
	inline Vector3_t2243707580 * get_address_of_from_23() { return &___from_23; }
	inline void set_from_23(Vector3_t2243707580  value)
	{
		___from_23 = value;
	}

	inline static int32_t get_offset_of_to_24() { return static_cast<int32_t>(offsetof(TweenScale_t2697902175, ___to_24)); }
	inline Vector3_t2243707580  get_to_24() const { return ___to_24; }
	inline Vector3_t2243707580 * get_address_of_to_24() { return &___to_24; }
	inline void set_to_24(Vector3_t2243707580  value)
	{
		___to_24 = value;
	}

	inline static int32_t get_offset_of_updateTable_25() { return static_cast<int32_t>(offsetof(TweenScale_t2697902175, ___updateTable_25)); }
	inline bool get_updateTable_25() const { return ___updateTable_25; }
	inline bool* get_address_of_updateTable_25() { return &___updateTable_25; }
	inline void set_updateTable_25(bool value)
	{
		___updateTable_25 = value;
	}

	inline static int32_t get_offset_of_mTrans_26() { return static_cast<int32_t>(offsetof(TweenScale_t2697902175, ___mTrans_26)); }
	inline Transform_t3275118058 * get_mTrans_26() const { return ___mTrans_26; }
	inline Transform_t3275118058 ** get_address_of_mTrans_26() { return &___mTrans_26; }
	inline void set_mTrans_26(Transform_t3275118058 * value)
	{
		___mTrans_26 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_26, value);
	}

	inline static int32_t get_offset_of_mTable_27() { return static_cast<int32_t>(offsetof(TweenScale_t2697902175, ___mTable_27)); }
	inline UITable_t3717403602 * get_mTable_27() const { return ___mTable_27; }
	inline UITable_t3717403602 ** get_address_of_mTable_27() { return &___mTable_27; }
	inline void set_mTable_27(UITable_t3717403602 * value)
	{
		___mTable_27 = value;
		Il2CppCodeGenWriteBarrier(&___mTable_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
