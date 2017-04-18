#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIDraggablePanel
struct UIDraggablePanel_t252039129;
// UIPanel
struct UIPanel_t1795085332;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragPanelContents
struct  UIDragPanelContents_t3555976464  : public MonoBehaviour_t1158329972
{
public:
	// UIDraggablePanel UIDragPanelContents::draggablePanel
	UIDraggablePanel_t252039129 * ___draggablePanel_2;
	// UIPanel UIDragPanelContents::panel
	UIPanel_t1795085332 * ___panel_3;

public:
	inline static int32_t get_offset_of_draggablePanel_2() { return static_cast<int32_t>(offsetof(UIDragPanelContents_t3555976464, ___draggablePanel_2)); }
	inline UIDraggablePanel_t252039129 * get_draggablePanel_2() const { return ___draggablePanel_2; }
	inline UIDraggablePanel_t252039129 ** get_address_of_draggablePanel_2() { return &___draggablePanel_2; }
	inline void set_draggablePanel_2(UIDraggablePanel_t252039129 * value)
	{
		___draggablePanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___draggablePanel_2, value);
	}

	inline static int32_t get_offset_of_panel_3() { return static_cast<int32_t>(offsetof(UIDragPanelContents_t3555976464, ___panel_3)); }
	inline UIPanel_t1795085332 * get_panel_3() const { return ___panel_3; }
	inline UIPanel_t1795085332 ** get_address_of_panel_3() { return &___panel_3; }
	inline void set_panel_3(UIPanel_t1795085332 * value)
	{
		___panel_3 = value;
		Il2CppCodeGenWriteBarrier(&___panel_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
