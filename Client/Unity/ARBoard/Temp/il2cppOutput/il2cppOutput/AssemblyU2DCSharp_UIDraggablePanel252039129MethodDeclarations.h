#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UIDraggablePanel
struct UIDraggablePanel_t252039129;
// UIPanel
struct UIPanel_t1795085332;
// UIScrollBar
struct UIScrollBar_t1736046648;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_UIScrollBar1736046648.h"

// System.Void UIDraggablePanel::.ctor()
extern "C"  void UIDraggablePanel__ctor_m3591143396 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIDraggablePanel::get_panel()
extern "C"  UIPanel_t1795085332 * UIDraggablePanel_get_panel_m2677084310 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIDraggablePanel::get_bounds()
extern "C"  Bounds_t3033363703  UIDraggablePanel_get_bounds_m1997795485 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::get_shouldMoveHorizontally()
extern "C"  bool UIDraggablePanel_get_shouldMoveHorizontally_m3177684284 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::get_shouldMoveVertically()
extern "C"  bool UIDraggablePanel_get_shouldMoveVertically_m3626003210 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::get_shouldMove()
extern "C"  bool UIDraggablePanel_get_shouldMove_m955731621 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDraggablePanel::get_currentMomentum()
extern "C"  Vector3_t2243707580  UIDraggablePanel_get_currentMomentum_m4158150782 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::set_currentMomentum(UnityEngine.Vector3)
extern "C"  void UIDraggablePanel_set_currentMomentum_m3684124125 (UIDraggablePanel_t252039129 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Awake()
extern "C"  void UIDraggablePanel_Awake_m1706233417 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnDestroy()
extern "C"  void UIDraggablePanel_OnDestroy_m4223945759 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnPanelChange()
extern "C"  void UIDraggablePanel_OnPanelChange_m2977441609 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Start()
extern "C"  void UIDraggablePanel_Start_m3633893636 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::RestrictWithinBounds(System.Boolean)
extern "C"  bool UIDraggablePanel_RestrictWithinBounds_m3910932351 (UIDraggablePanel_t252039129 * __this, bool ___instant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::DisableSpring()
extern "C"  void UIDraggablePanel_DisableSpring_m963516453 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::UpdateScrollbars(System.Boolean)
extern "C"  void UIDraggablePanel_UpdateScrollbars_m767923493 (UIDraggablePanel_t252039129 * __this, bool ___recalculateBounds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::SetDragAmount(System.Single,System.Single,System.Boolean)
extern "C"  void UIDraggablePanel_SetDragAmount_m1064742805 (UIDraggablePanel_t252039129 * __this, float ___x0, float ___y1, bool ___updateScrollbars2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::ResetPosition()
extern "C"  void UIDraggablePanel_ResetPosition_m1565659044 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnHorizontalBar(UIScrollBar)
extern "C"  void UIDraggablePanel_OnHorizontalBar_m206179512 (UIDraggablePanel_t252039129 * __this, UIScrollBar_t1736046648 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnVerticalBar(UIScrollBar)
extern "C"  void UIDraggablePanel_OnVerticalBar_m3550469342 (UIDraggablePanel_t252039129 * __this, UIScrollBar_t1736046648 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::MoveRelative(UnityEngine.Vector3)
extern "C"  void UIDraggablePanel_MoveRelative_m465689952 (UIDraggablePanel_t252039129 * __this, Vector3_t2243707580  ___relative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::MoveAbsolute(UnityEngine.Vector3)
extern "C"  void UIDraggablePanel_MoveAbsolute_m1040493715 (UIDraggablePanel_t252039129 * __this, Vector3_t2243707580  ___absolute0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Press(System.Boolean)
extern "C"  void UIDraggablePanel_Press_m1856261810 (UIDraggablePanel_t252039129 * __this, bool ___pressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Drag()
extern "C"  void UIDraggablePanel_Drag_m691275456 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Scroll(System.Single)
extern "C"  void UIDraggablePanel_Scroll_m754608020 (UIDraggablePanel_t252039129 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::LateUpdate()
extern "C"  void UIDraggablePanel_LateUpdate_m2068265577 (UIDraggablePanel_t252039129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
