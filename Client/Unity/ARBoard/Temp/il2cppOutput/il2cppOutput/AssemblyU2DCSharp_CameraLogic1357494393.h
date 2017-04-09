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
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraLogic
struct  CameraLogic_t1357494393  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform CameraLogic::m_currentTarget
	Transform_t3275118058 * ___m_currentTarget_2;
	// System.Single CameraLogic::m_distance
	float ___m_distance_3;
	// System.Single CameraLogic::m_height
	float ___m_height_4;
	// System.Single CameraLogic::m_lookAtAroundAngle
	float ___m_lookAtAroundAngle_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform> CameraLogic::m_targets
	List_1_t2644239190 * ___m_targets_6;
	// System.Int32 CameraLogic::m_currentIndex
	int32_t ___m_currentIndex_7;

public:
	inline static int32_t get_offset_of_m_currentTarget_2() { return static_cast<int32_t>(offsetof(CameraLogic_t1357494393, ___m_currentTarget_2)); }
	inline Transform_t3275118058 * get_m_currentTarget_2() const { return ___m_currentTarget_2; }
	inline Transform_t3275118058 ** get_address_of_m_currentTarget_2() { return &___m_currentTarget_2; }
	inline void set_m_currentTarget_2(Transform_t3275118058 * value)
	{
		___m_currentTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_currentTarget_2, value);
	}

	inline static int32_t get_offset_of_m_distance_3() { return static_cast<int32_t>(offsetof(CameraLogic_t1357494393, ___m_distance_3)); }
	inline float get_m_distance_3() const { return ___m_distance_3; }
	inline float* get_address_of_m_distance_3() { return &___m_distance_3; }
	inline void set_m_distance_3(float value)
	{
		___m_distance_3 = value;
	}

	inline static int32_t get_offset_of_m_height_4() { return static_cast<int32_t>(offsetof(CameraLogic_t1357494393, ___m_height_4)); }
	inline float get_m_height_4() const { return ___m_height_4; }
	inline float* get_address_of_m_height_4() { return &___m_height_4; }
	inline void set_m_height_4(float value)
	{
		___m_height_4 = value;
	}

	inline static int32_t get_offset_of_m_lookAtAroundAngle_5() { return static_cast<int32_t>(offsetof(CameraLogic_t1357494393, ___m_lookAtAroundAngle_5)); }
	inline float get_m_lookAtAroundAngle_5() const { return ___m_lookAtAroundAngle_5; }
	inline float* get_address_of_m_lookAtAroundAngle_5() { return &___m_lookAtAroundAngle_5; }
	inline void set_m_lookAtAroundAngle_5(float value)
	{
		___m_lookAtAroundAngle_5 = value;
	}

	inline static int32_t get_offset_of_m_targets_6() { return static_cast<int32_t>(offsetof(CameraLogic_t1357494393, ___m_targets_6)); }
	inline List_1_t2644239190 * get_m_targets_6() const { return ___m_targets_6; }
	inline List_1_t2644239190 ** get_address_of_m_targets_6() { return &___m_targets_6; }
	inline void set_m_targets_6(List_1_t2644239190 * value)
	{
		___m_targets_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_targets_6, value);
	}

	inline static int32_t get_offset_of_m_currentIndex_7() { return static_cast<int32_t>(offsetof(CameraLogic_t1357494393, ___m_currentIndex_7)); }
	inline int32_t get_m_currentIndex_7() const { return ___m_currentIndex_7; }
	inline int32_t* get_address_of_m_currentIndex_7() { return &___m_currentIndex_7; }
	inline void set_m_currentIndex_7(int32_t value)
	{
		___m_currentIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
