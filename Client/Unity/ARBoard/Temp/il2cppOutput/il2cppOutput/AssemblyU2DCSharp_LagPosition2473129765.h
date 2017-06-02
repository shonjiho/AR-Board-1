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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LagPosition
struct  LagPosition_t2473129765  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 LagPosition::updateOrder
	int32_t ___updateOrder_2;
	// UnityEngine.Vector3 LagPosition::speed
	Vector3_t2243707580  ___speed_3;
	// System.Boolean LagPosition::ignoreTimeScale
	bool ___ignoreTimeScale_4;
	// UnityEngine.Transform LagPosition::mTrans
	Transform_t3275118058 * ___mTrans_5;
	// UnityEngine.Vector3 LagPosition::mRelative
	Vector3_t2243707580  ___mRelative_6;
	// UnityEngine.Vector3 LagPosition::mAbsolute
	Vector3_t2243707580  ___mAbsolute_7;

public:
	inline static int32_t get_offset_of_updateOrder_2() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___updateOrder_2)); }
	inline int32_t get_updateOrder_2() const { return ___updateOrder_2; }
	inline int32_t* get_address_of_updateOrder_2() { return &___updateOrder_2; }
	inline void set_updateOrder_2(int32_t value)
	{
		___updateOrder_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___speed_3)); }
	inline Vector3_t2243707580  get_speed_3() const { return ___speed_3; }
	inline Vector3_t2243707580 * get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(Vector3_t2243707580  value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_4() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___ignoreTimeScale_4)); }
	inline bool get_ignoreTimeScale_4() const { return ___ignoreTimeScale_4; }
	inline bool* get_address_of_ignoreTimeScale_4() { return &___ignoreTimeScale_4; }
	inline void set_ignoreTimeScale_4(bool value)
	{
		___ignoreTimeScale_4 = value;
	}

	inline static int32_t get_offset_of_mTrans_5() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___mTrans_5)); }
	inline Transform_t3275118058 * get_mTrans_5() const { return ___mTrans_5; }
	inline Transform_t3275118058 ** get_address_of_mTrans_5() { return &___mTrans_5; }
	inline void set_mTrans_5(Transform_t3275118058 * value)
	{
		___mTrans_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_5, value);
	}

	inline static int32_t get_offset_of_mRelative_6() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___mRelative_6)); }
	inline Vector3_t2243707580  get_mRelative_6() const { return ___mRelative_6; }
	inline Vector3_t2243707580 * get_address_of_mRelative_6() { return &___mRelative_6; }
	inline void set_mRelative_6(Vector3_t2243707580  value)
	{
		___mRelative_6 = value;
	}

	inline static int32_t get_offset_of_mAbsolute_7() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___mAbsolute_7)); }
	inline Vector3_t2243707580  get_mAbsolute_7() const { return ___mAbsolute_7; }
	inline Vector3_t2243707580 * get_address_of_mAbsolute_7() { return &___mAbsolute_7; }
	inline void set_mAbsolute_7(Vector3_t2243707580  value)
	{
		___mAbsolute_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
