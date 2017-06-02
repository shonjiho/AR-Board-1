#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;

#include "AssemblyU2DCSharp_UITweener2986641582.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenFOV
struct  TweenFOV_t612833154  : public UITweener_t2986641582
{
public:
	// System.Single TweenFOV::from
	float ___from_23;
	// System.Single TweenFOV::to
	float ___to_24;
	// UnityEngine.Camera TweenFOV::mCam
	Camera_t189460977 * ___mCam_25;

public:
	inline static int32_t get_offset_of_from_23() { return static_cast<int32_t>(offsetof(TweenFOV_t612833154, ___from_23)); }
	inline float get_from_23() const { return ___from_23; }
	inline float* get_address_of_from_23() { return &___from_23; }
	inline void set_from_23(float value)
	{
		___from_23 = value;
	}

	inline static int32_t get_offset_of_to_24() { return static_cast<int32_t>(offsetof(TweenFOV_t612833154, ___to_24)); }
	inline float get_to_24() const { return ___to_24; }
	inline float* get_address_of_to_24() { return &___to_24; }
	inline void set_to_24(float value)
	{
		___to_24 = value;
	}

	inline static int32_t get_offset_of_mCam_25() { return static_cast<int32_t>(offsetof(TweenFOV_t612833154, ___mCam_25)); }
	inline Camera_t189460977 * get_mCam_25() const { return ___mCam_25; }
	inline Camera_t189460977 ** get_address_of_mCam_25() { return &___mCam_25; }
	inline void set_mCam_25(Camera_t189460977 * value)
	{
		___mCam_25 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
