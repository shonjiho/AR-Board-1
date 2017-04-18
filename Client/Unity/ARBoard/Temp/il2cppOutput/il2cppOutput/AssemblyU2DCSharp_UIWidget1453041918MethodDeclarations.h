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

// UIWidget
struct UIWidget_t1453041918;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture
struct Texture_t2243626319;
// UIPanel
struct UIPanel_t1795085332;
// BetterList`1<UIWidget>
struct BetterList_1_t1673430560;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t2464096221;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1094906160;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t2464096223;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot752586349.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "AssemblyU2DCSharp_UIPanel1795085332.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void UIWidget::.ctor()
extern "C"  void UIWidget__ctor_m1747155039 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_isVisible()
extern "C"  bool UIWidget_get_isVisible_m1555008678 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIWidget::get_color()
extern "C"  Color_t2020392075  UIWidget_get_color_m338614656 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_color(UnityEngine.Color)
extern "C"  void UIWidget_set_color_m1406575269 (UIWidget_t1453041918 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_alpha()
extern "C"  float UIWidget_get_alpha_m1577200396 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_alpha(System.Single)
extern "C"  void UIWidget_set_alpha_m4102714563 (UIWidget_t1453041918 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_finalAlpha()
extern "C"  float UIWidget_get_finalAlpha_m2388847982 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot UIWidget::get_pivot()
extern "C"  int32_t UIWidget_get_pivot_m678429010 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_pivot(UIWidget/Pivot)
extern "C"  void UIWidget_set_pivot_m2500521417 (UIWidget_t1453041918 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_depth()
extern "C"  int32_t UIWidget_get_depth_m3794940569 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_depth(System.Int32)
extern "C"  void UIWidget_set_depth_m2276777530 (UIWidget_t1453041918 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_pivotOffset()
extern "C"  Vector2_t2243707579  UIWidget_get_pivotOffset_m943693420 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIWidget::get_cachedGameObject()
extern "C"  GameObject_t1756533147 * UIWidget_get_cachedGameObject_m778245794 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIWidget::get_cachedTransform()
extern "C"  Transform_t3275118058 * UIWidget_get_cachedTransform_m967386522 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIWidget::get_material()
extern "C"  Material_t193706927 * UIWidget_get_material_m570210584 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_material(UnityEngine.Material)
extern "C"  void UIWidget_set_material_m1102044077 (UIWidget_t1453041918 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIWidget::get_mainTexture()
extern "C"  Texture_t2243626319 * UIWidget_get_mainTexture_m582147825 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_mainTexture(UnityEngine.Texture)
extern "C"  void UIWidget_set_mainTexture_m448685722 (UIWidget_t1453041918 * __this, Texture_t2243626319 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIWidget::get_panel()
extern "C"  UIPanel_t1795085332 * UIWidget_get_panel_m2057524125 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_panel(UIPanel)
extern "C"  void UIWidget_set_panel_m4180606626 (UIWidget_t1453041918 * __this, UIPanel_t1795085332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIWidget> UIWidget::Raycast(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  BetterList_1_t1673430560 * UIWidget_Raycast_m3038860350 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___root0, Vector2_t2243707579  ___mousePos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::CompareFunc(UIWidget,UIWidget)
extern "C"  int32_t UIWidget_CompareFunc_m2826182428 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___left0, UIWidget_t1453041918 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::RemoveFromPanel()
extern "C"  void UIWidget_RemoveFromPanel_m2657016785 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MarkAsChangedLite()
extern "C"  void UIWidget_MarkAsChangedLite_m143619778 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MarkAsChanged()
extern "C"  void UIWidget_MarkAsChanged_m3276847846 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CreatePanel()
extern "C"  void UIWidget_CreatePanel_m1093446657 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CheckLayer()
extern "C"  void UIWidget_CheckLayer_m2160812004 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CheckParent()
extern "C"  void UIWidget_CheckParent_m4112961989 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::ParentHasChanged()
extern "C"  void UIWidget_ParentHasChanged_m3532498979 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Awake()
extern "C"  void UIWidget_Awake_m1113369770 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnEnable()
extern "C"  void UIWidget_OnEnable_m2653692587 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Start()
extern "C"  void UIWidget_Start_m1859836747 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Update()
extern "C"  void UIWidget_Update_m4010716456 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDisable()
extern "C"  void UIWidget_OnDisable_m1865079414 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDestroy()
extern "C"  void UIWidget_OnDestroy_m4104971420 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateGeometry(UIPanel,System.Boolean)
extern "C"  bool UIWidget_UpdateGeometry_m551481957 (UIWidget_t1453041918 * __this, UIPanel_t1795085332 * ___p0, bool ___forceVisible1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C"  void UIWidget_WriteToBuffers_m3134340184 (UIWidget_t1453041918 * __this, BetterList_1_t2464096222 * ___v0, BetterList_1_t2464096221 * ___u1, BetterList_1_t1094906160 * ___c2, BetterList_1_t2464096222 * ___n3, BetterList_1_t2464096223 * ___t4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MakePixelPerfect()
extern "C"  void UIWidget_MakePixelPerfect_m1134133674 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_relativeSize()
extern "C"  Vector2_t2243707579  UIWidget_get_relativeSize_m2102430774 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_relativePadding()
extern "C"  Vector4_t2243707581  UIWidget_get_relativePadding_m3591296424 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_border()
extern "C"  Vector4_t2243707581  UIWidget_get_border_m2075395219 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_pixelPerfectAfterResize()
extern "C"  bool UIWidget_get_pixelPerfectAfterResize_m2047862867 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnStart()
extern "C"  void UIWidget_OnStart_m4254763914 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UIWidget_OnFill_m1558183438 (UIWidget_t1453041918 * __this, BetterList_1_t2464096222 * ___verts0, BetterList_1_t2464096221 * ___uvs1, BetterList_1_t1094906160 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::.cctor()
extern "C"  void UIWidget__cctor_m4288382640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::<Raycast>m__0(UIWidget,UIWidget)
extern "C"  int32_t UIWidget_U3CRaycastU3Em__0_m3273116789 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___w10, UIWidget_t1453041918 * ___w21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
