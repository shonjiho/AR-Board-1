#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITable/OnReposition
struct OnReposition_t1194954916;
// UIPanel
struct UIPanel_t1795085332;
// UIDraggablePanel
struct UIDraggablePanel_t252039129;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// System.Comparison`1<UnityEngine.Transform>
struct Comparison_1_t241889613;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UITable_Direction1281150584.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITable
struct  UITable_t3717403602  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UITable::columns
	int32_t ___columns_2;
	// UITable/Direction UITable::direction
	int32_t ___direction_3;
	// UnityEngine.Vector2 UITable::padding
	Vector2_t2243707579  ___padding_4;
	// System.Boolean UITable::sorted
	bool ___sorted_5;
	// System.Boolean UITable::hideInactive
	bool ___hideInactive_6;
	// System.Boolean UITable::repositionNow
	bool ___repositionNow_7;
	// System.Boolean UITable::keepWithinPanel
	bool ___keepWithinPanel_8;
	// UITable/OnReposition UITable::onReposition
	OnReposition_t1194954916 * ___onReposition_9;
	// UIPanel UITable::mPanel
	UIPanel_t1795085332 * ___mPanel_10;
	// UIDraggablePanel UITable::mDrag
	UIDraggablePanel_t252039129 * ___mDrag_11;
	// System.Boolean UITable::mStarted
	bool ___mStarted_12;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UITable::mChildren
	List_1_t2644239190 * ___mChildren_13;

public:
	inline static int32_t get_offset_of_columns_2() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___columns_2)); }
	inline int32_t get_columns_2() const { return ___columns_2; }
	inline int32_t* get_address_of_columns_2() { return &___columns_2; }
	inline void set_columns_2(int32_t value)
	{
		___columns_2 = value;
	}

	inline static int32_t get_offset_of_direction_3() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___direction_3)); }
	inline int32_t get_direction_3() const { return ___direction_3; }
	inline int32_t* get_address_of_direction_3() { return &___direction_3; }
	inline void set_direction_3(int32_t value)
	{
		___direction_3 = value;
	}

	inline static int32_t get_offset_of_padding_4() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___padding_4)); }
	inline Vector2_t2243707579  get_padding_4() const { return ___padding_4; }
	inline Vector2_t2243707579 * get_address_of_padding_4() { return &___padding_4; }
	inline void set_padding_4(Vector2_t2243707579  value)
	{
		___padding_4 = value;
	}

	inline static int32_t get_offset_of_sorted_5() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___sorted_5)); }
	inline bool get_sorted_5() const { return ___sorted_5; }
	inline bool* get_address_of_sorted_5() { return &___sorted_5; }
	inline void set_sorted_5(bool value)
	{
		___sorted_5 = value;
	}

	inline static int32_t get_offset_of_hideInactive_6() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___hideInactive_6)); }
	inline bool get_hideInactive_6() const { return ___hideInactive_6; }
	inline bool* get_address_of_hideInactive_6() { return &___hideInactive_6; }
	inline void set_hideInactive_6(bool value)
	{
		___hideInactive_6 = value;
	}

	inline static int32_t get_offset_of_repositionNow_7() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___repositionNow_7)); }
	inline bool get_repositionNow_7() const { return ___repositionNow_7; }
	inline bool* get_address_of_repositionNow_7() { return &___repositionNow_7; }
	inline void set_repositionNow_7(bool value)
	{
		___repositionNow_7 = value;
	}

	inline static int32_t get_offset_of_keepWithinPanel_8() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___keepWithinPanel_8)); }
	inline bool get_keepWithinPanel_8() const { return ___keepWithinPanel_8; }
	inline bool* get_address_of_keepWithinPanel_8() { return &___keepWithinPanel_8; }
	inline void set_keepWithinPanel_8(bool value)
	{
		___keepWithinPanel_8 = value;
	}

	inline static int32_t get_offset_of_onReposition_9() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___onReposition_9)); }
	inline OnReposition_t1194954916 * get_onReposition_9() const { return ___onReposition_9; }
	inline OnReposition_t1194954916 ** get_address_of_onReposition_9() { return &___onReposition_9; }
	inline void set_onReposition_9(OnReposition_t1194954916 * value)
	{
		___onReposition_9 = value;
		Il2CppCodeGenWriteBarrier(&___onReposition_9, value);
	}

	inline static int32_t get_offset_of_mPanel_10() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___mPanel_10)); }
	inline UIPanel_t1795085332 * get_mPanel_10() const { return ___mPanel_10; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_10() { return &___mPanel_10; }
	inline void set_mPanel_10(UIPanel_t1795085332 * value)
	{
		___mPanel_10 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_10, value);
	}

	inline static int32_t get_offset_of_mDrag_11() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___mDrag_11)); }
	inline UIDraggablePanel_t252039129 * get_mDrag_11() const { return ___mDrag_11; }
	inline UIDraggablePanel_t252039129 ** get_address_of_mDrag_11() { return &___mDrag_11; }
	inline void set_mDrag_11(UIDraggablePanel_t252039129 * value)
	{
		___mDrag_11 = value;
		Il2CppCodeGenWriteBarrier(&___mDrag_11, value);
	}

	inline static int32_t get_offset_of_mStarted_12() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___mStarted_12)); }
	inline bool get_mStarted_12() const { return ___mStarted_12; }
	inline bool* get_address_of_mStarted_12() { return &___mStarted_12; }
	inline void set_mStarted_12(bool value)
	{
		___mStarted_12 = value;
	}

	inline static int32_t get_offset_of_mChildren_13() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___mChildren_13)); }
	inline List_1_t2644239190 * get_mChildren_13() const { return ___mChildren_13; }
	inline List_1_t2644239190 ** get_address_of_mChildren_13() { return &___mChildren_13; }
	inline void set_mChildren_13(List_1_t2644239190 * value)
	{
		___mChildren_13 = value;
		Il2CppCodeGenWriteBarrier(&___mChildren_13, value);
	}
};

struct UITable_t3717403602_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.Transform> UITable::<>f__mg$cache0
	Comparison_1_t241889613 * ___U3CU3Ef__mgU24cache0_14;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_14() { return static_cast<int32_t>(offsetof(UITable_t3717403602_StaticFields, ___U3CU3Ef__mgU24cache0_14)); }
	inline Comparison_1_t241889613 * get_U3CU3Ef__mgU24cache0_14() const { return ___U3CU3Ef__mgU24cache0_14; }
	inline Comparison_1_t241889613 ** get_address_of_U3CU3Ef__mgU24cache0_14() { return &___U3CU3Ef__mgU24cache0_14; }
	inline void set_U3CU3Ef__mgU24cache0_14(Comparison_1_t241889613 * value)
	{
		___U3CU3Ef__mgU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
