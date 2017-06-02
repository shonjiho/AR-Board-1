#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UpdateManager/OnUpdate
struct OnUpdate_t2310536555;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateManager/UpdateEntry
struct  UpdateEntry_t3370587140  : public Il2CppObject
{
public:
	// System.Int32 UpdateManager/UpdateEntry::index
	int32_t ___index_0;
	// UpdateManager/OnUpdate UpdateManager/UpdateEntry::func
	OnUpdate_t2310536555 * ___func_1;
	// UnityEngine.MonoBehaviour UpdateManager/UpdateEntry::mb
	MonoBehaviour_t1158329972 * ___mb_2;
	// System.Boolean UpdateManager/UpdateEntry::isMonoBehaviour
	bool ___isMonoBehaviour_3;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(UpdateEntry_t3370587140, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_func_1() { return static_cast<int32_t>(offsetof(UpdateEntry_t3370587140, ___func_1)); }
	inline OnUpdate_t2310536555 * get_func_1() const { return ___func_1; }
	inline OnUpdate_t2310536555 ** get_address_of_func_1() { return &___func_1; }
	inline void set_func_1(OnUpdate_t2310536555 * value)
	{
		___func_1 = value;
		Il2CppCodeGenWriteBarrier(&___func_1, value);
	}

	inline static int32_t get_offset_of_mb_2() { return static_cast<int32_t>(offsetof(UpdateEntry_t3370587140, ___mb_2)); }
	inline MonoBehaviour_t1158329972 * get_mb_2() const { return ___mb_2; }
	inline MonoBehaviour_t1158329972 ** get_address_of_mb_2() { return &___mb_2; }
	inline void set_mb_2(MonoBehaviour_t1158329972 * value)
	{
		___mb_2 = value;
		Il2CppCodeGenWriteBarrier(&___mb_2, value);
	}

	inline static int32_t get_offset_of_isMonoBehaviour_3() { return static_cast<int32_t>(offsetof(UpdateEntry_t3370587140, ___isMonoBehaviour_3)); }
	inline bool get_isMonoBehaviour_3() const { return ___isMonoBehaviour_3; }
	inline bool* get_address_of_isMonoBehaviour_3() { return &___isMonoBehaviour_3; }
	inline void set_isMonoBehaviour_3(bool value)
	{
		___isMonoBehaviour_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
