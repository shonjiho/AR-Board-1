#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ScriptManager
struct ScriptManager_t2955069858;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ApplicationManager
struct  ApplicationManager_t2110631419  : public MonoBehaviour_t1158329972
{
public:
	// ScriptManager ApplicationManager::scriptManager
	ScriptManager_t2955069858 * ___scriptManager_2;
	// System.Boolean ApplicationManager::bgmMute
	bool ___bgmMute_5;
	// System.Boolean ApplicationManager::fxMute
	bool ___fxMute_6;

public:
	inline static int32_t get_offset_of_scriptManager_2() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___scriptManager_2)); }
	inline ScriptManager_t2955069858 * get_scriptManager_2() const { return ___scriptManager_2; }
	inline ScriptManager_t2955069858 ** get_address_of_scriptManager_2() { return &___scriptManager_2; }
	inline void set_scriptManager_2(ScriptManager_t2955069858 * value)
	{
		___scriptManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___scriptManager_2, value);
	}

	inline static int32_t get_offset_of_bgmMute_5() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___bgmMute_5)); }
	inline bool get_bgmMute_5() const { return ___bgmMute_5; }
	inline bool* get_address_of_bgmMute_5() { return &___bgmMute_5; }
	inline void set_bgmMute_5(bool value)
	{
		___bgmMute_5 = value;
	}

	inline static int32_t get_offset_of_fxMute_6() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___fxMute_6)); }
	inline bool get_fxMute_6() const { return ___fxMute_6; }
	inline bool* get_address_of_fxMute_6() { return &___fxMute_6; }
	inline void set_fxMute_6(bool value)
	{
		___fxMute_6 = value;
	}
};

struct ApplicationManager_t2110631419_StaticFields
{
public:
	// System.Boolean ApplicationManager::forceBgmMute
	bool ___forceBgmMute_3;
	// System.Boolean ApplicationManager::forceFxMute
	bool ___forceFxMute_4;

public:
	inline static int32_t get_offset_of_forceBgmMute_3() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419_StaticFields, ___forceBgmMute_3)); }
	inline bool get_forceBgmMute_3() const { return ___forceBgmMute_3; }
	inline bool* get_address_of_forceBgmMute_3() { return &___forceBgmMute_3; }
	inline void set_forceBgmMute_3(bool value)
	{
		___forceBgmMute_3 = value;
	}

	inline static int32_t get_offset_of_forceFxMute_4() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419_StaticFields, ___forceFxMute_4)); }
	inline bool get_forceFxMute_4() const { return ___forceFxMute_4; }
	inline bool* get_address_of_forceFxMute_4() { return &___forceFxMute_4; }
	inline void set_forceFxMute_4(bool value)
	{
		___forceFxMute_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
