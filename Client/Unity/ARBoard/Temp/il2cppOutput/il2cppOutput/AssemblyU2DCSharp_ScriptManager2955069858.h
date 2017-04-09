#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2252321495;
// UIManager
struct UIManager_t2519183485;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScriptManager
struct  ScriptManager_t2955069858  : public MonoBehaviour_t1158329972
{
public:
	// GameManager ScriptManager::gameManager
	GameManager_t2252321495 * ___gameManager_2;
	// UIManager ScriptManager::uiManager
	UIManager_t2519183485 * ___uiManager_3;

public:
	inline static int32_t get_offset_of_gameManager_2() { return static_cast<int32_t>(offsetof(ScriptManager_t2955069858, ___gameManager_2)); }
	inline GameManager_t2252321495 * get_gameManager_2() const { return ___gameManager_2; }
	inline GameManager_t2252321495 ** get_address_of_gameManager_2() { return &___gameManager_2; }
	inline void set_gameManager_2(GameManager_t2252321495 * value)
	{
		___gameManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_2, value);
	}

	inline static int32_t get_offset_of_uiManager_3() { return static_cast<int32_t>(offsetof(ScriptManager_t2955069858, ___uiManager_3)); }
	inline UIManager_t2519183485 * get_uiManager_3() const { return ___uiManager_3; }
	inline UIManager_t2519183485 ** get_address_of_uiManager_3() { return &___uiManager_3; }
	inline void set_uiManager_3(UIManager_t2519183485 * value)
	{
		___uiManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___uiManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
