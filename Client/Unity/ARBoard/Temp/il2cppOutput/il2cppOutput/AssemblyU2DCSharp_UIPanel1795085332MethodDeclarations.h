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

// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// BetterList`1<UIWidget>
struct BetterList_1_t1673430560;
// BetterList`1<UIDrawCall>
struct BetterList_1_t3512232154;
// UIWidget
struct UIWidget_t1453041918;
// UnityEngine.Material
struct Material_t193706927;
// UIDrawCall
struct UIDrawCall_t3291843512;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIPanel_DebugInfo1876253092.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping4042448929.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

// System.Void UIPanel::.ctor()
extern "C"  void UIPanel__ctor_m1077500321 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIPanel::get_cachedGameObject()
extern "C"  GameObject_t1756533147 * UIPanel_get_cachedGameObject_m2883080786 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIPanel::get_cachedTransform()
extern "C"  Transform_t3275118058 * UIPanel_get_cachedTransform_m813749864 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_alpha()
extern "C"  float UIPanel_get_alpha_m1725163322 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_alpha(System.Single)
extern "C"  void UIPanel_set_alpha_m2862667873 (UIPanel_t1795085332 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetAlphaRecursive(System.Single,System.Boolean)
extern "C"  void UIPanel_SetAlphaRecursive_m4143926823 (UIPanel_t1795085332 * __this, float ___val0, bool ___rebuildList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel/DebugInfo UIPanel::get_debugInfo()
extern "C"  int32_t UIPanel_get_debugInfo_m2515019218 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_debugInfo(UIPanel/DebugInfo)
extern "C"  void UIPanel_set_debugInfo_m2700577161 (UIPanel_t1795085332 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIPanel::get_clipping()
extern "C"  int32_t UIPanel_get_clipping_m2023855476 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipping(UIDrawCall/Clipping)
extern "C"  void UIPanel_set_clipping_m3438397525 (UIPanel_t1795085332 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_clipRange()
extern "C"  Vector4_t2243707581  UIPanel_get_clipRange_m3092452698 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipRange(UnityEngine.Vector4)
extern "C"  void UIPanel_set_clipRange_m4165490131 (UIPanel_t1795085332 * __this, Vector4_t2243707581  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipSoftness()
extern "C"  Vector2_t2243707579  UIPanel_get_clipSoftness_m3532280798 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipSoftness(UnityEngine.Vector2)
extern "C"  void UIPanel_set_clipSoftness_m4083594479 (UIPanel_t1795085332 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIWidget> UIPanel::get_widgets()
extern "C"  BetterList_1_t1673430560 * UIPanel_get_widgets_m1542297489 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIPanel::get_drawCalls()
extern "C"  BetterList_1_t3512232154 * UIPanel_get_drawCalls_m4204260173 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool UIPanel_IsVisible_m2318422237 (UIPanel_t1795085332 * __this, Vector3_t2243707580  ___a0, Vector3_t2243707580  ___b1, Vector3_t2243707580  ___c2, Vector3_t2243707580  ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3)
extern "C"  bool UIPanel_IsVisible_m1110511972 (UIPanel_t1795085332 * __this, Vector3_t2243707580  ___worldPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UIWidget)
extern "C"  bool UIPanel_IsVisible_m2056051053 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::MarkMaterialAsChanged(UnityEngine.Material,System.Boolean)
extern "C"  void UIPanel_MarkMaterialAsChanged_m489032308 (UIPanel_t1795085332 * __this, Material_t193706927 * ___mat0, bool ___sort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::AddWidget(UIWidget)
extern "C"  void UIPanel_AddWidget_m318008474 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RemoveWidget(UIWidget)
extern "C"  void UIPanel_RemoveWidget_m2792282035 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIPanel::GetDrawCall(UnityEngine.Material,System.Boolean)
extern "C"  UIDrawCall_t3291843512 * UIPanel_GetDrawCall_m2913058155 (UIPanel_t1795085332 * __this, Material_t193706927 * ___mat0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Awake()
extern "C"  void UIPanel_Awake_m2782953536 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Start()
extern "C"  void UIPanel_Start_m2503966489 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnEnable()
extern "C"  void UIPanel_OnEnable_m2308028281 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnDisable()
extern "C"  void UIPanel_OnDisable_m3067137960 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateTransformMatrix()
extern "C"  void UIPanel_UpdateTransformMatrix_m3649354251 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateDrawcalls()
extern "C"  void UIPanel_UpdateDrawcalls_m14731661 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Fill(UnityEngine.Material)
extern "C"  void UIPanel_Fill_m2556289960 (UIPanel_t1795085332 * __this, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::LateUpdate()
extern "C"  void UIPanel_LateUpdate_m3288864330 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Refresh()
extern "C"  void UIPanel_Refresh_m2638687940 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::CalculateConstrainOffset(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector3_t2243707580  UIPanel_CalculateConstrainOffset_m3691366311 (UIPanel_t1795085332 * __this, Vector2_t2243707579  ___min0, Vector2_t2243707579  ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,UnityEngine.Bounds&,System.Boolean)
extern "C"  bool UIPanel_ConstrainTargetToBounds_m1477943687 (UIPanel_t1795085332 * __this, Transform_t3275118058 * ___target0, Bounds_t3033363703 * ___targetBounds1, bool ___immediate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,System.Boolean)
extern "C"  bool UIPanel_ConstrainTargetToBounds_m80268627 (UIPanel_t1795085332 * __this, Transform_t3275118058 * ___target0, bool ___immediate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetChildLayer(UnityEngine.Transform,System.Int32)
extern "C"  void UIPanel_SetChildLayer_m2650883108 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean)
extern "C"  UIPanel_t1795085332 * UIPanel_Find_m2413452129 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform)
extern "C"  UIPanel_t1795085332 * UIPanel_Find_m3258837136 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::.cctor()
extern "C"  void UIPanel__cctor_m1130496102 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
