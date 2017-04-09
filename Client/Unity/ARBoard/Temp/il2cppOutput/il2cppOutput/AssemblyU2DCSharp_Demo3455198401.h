#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Animator[]
struct AnimatorU5BU5D_t4224369806;
// CameraLogic
struct CameraLogic_t1357494393;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Demo
struct  Demo_t3455198401  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] Demo::m_animations
	StringU5BU5D_t1642385972* ___m_animations_2;
	// UnityEngine.Animator[] Demo::m_animators
	AnimatorU5BU5D_t4224369806* ___m_animators_3;
	// CameraLogic Demo::m_cameraLogic
	CameraLogic_t1357494393 * ___m_cameraLogic_4;

public:
	inline static int32_t get_offset_of_m_animations_2() { return static_cast<int32_t>(offsetof(Demo_t3455198401, ___m_animations_2)); }
	inline StringU5BU5D_t1642385972* get_m_animations_2() const { return ___m_animations_2; }
	inline StringU5BU5D_t1642385972** get_address_of_m_animations_2() { return &___m_animations_2; }
	inline void set_m_animations_2(StringU5BU5D_t1642385972* value)
	{
		___m_animations_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_animations_2, value);
	}

	inline static int32_t get_offset_of_m_animators_3() { return static_cast<int32_t>(offsetof(Demo_t3455198401, ___m_animators_3)); }
	inline AnimatorU5BU5D_t4224369806* get_m_animators_3() const { return ___m_animators_3; }
	inline AnimatorU5BU5D_t4224369806** get_address_of_m_animators_3() { return &___m_animators_3; }
	inline void set_m_animators_3(AnimatorU5BU5D_t4224369806* value)
	{
		___m_animators_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_animators_3, value);
	}

	inline static int32_t get_offset_of_m_cameraLogic_4() { return static_cast<int32_t>(offsetof(Demo_t3455198401, ___m_cameraLogic_4)); }
	inline CameraLogic_t1357494393 * get_m_cameraLogic_4() const { return ___m_cameraLogic_4; }
	inline CameraLogic_t1357494393 ** get_address_of_m_cameraLogic_4() { return &___m_cameraLogic_4; }
	inline void set_m_cameraLogic_4(CameraLogic_t1357494393 * value)
	{
		___m_cameraLogic_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_cameraLogic_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
