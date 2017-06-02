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

// UIScrollBar
struct UIScrollBar_t1736046648;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;
// UISprite
struct UISprite_t603616735;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UISprite603616735.h"
#include "AssemblyU2DCSharp_UIScrollBar_Direction3728253650.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void UIScrollBar::.ctor()
extern "C"  void UIScrollBar__ctor_m83098983 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIScrollBar::get_cachedTransform()
extern "C"  Transform_t3275118058 * UIScrollBar_get_cachedTransform_m2329836640 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UIScrollBar::get_cachedCamera()
extern "C"  Camera_t189460977 * UIScrollBar_get_cachedCamera_m2278028946 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite UIScrollBar::get_background()
extern "C"  UISprite_t603616735 * UIScrollBar_get_background_m637629620 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_background(UISprite)
extern "C"  void UIScrollBar_set_background_m3007883589 (UIScrollBar_t1736046648 * __this, UISprite_t603616735 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite UIScrollBar::get_foreground()
extern "C"  UISprite_t603616735 * UIScrollBar_get_foreground_m635535647 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_foreground(UISprite)
extern "C"  void UIScrollBar_set_foreground_m1949760902 (UIScrollBar_t1736046648 * __this, UISprite_t603616735 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIScrollBar/Direction UIScrollBar::get_direction()
extern "C"  int32_t UIScrollBar_get_direction_m1675122042 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_direction(UIScrollBar/Direction)
extern "C"  void UIScrollBar_set_direction_m750479013 (UIScrollBar_t1736046648 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollBar::get_inverted()
extern "C"  bool UIScrollBar_get_inverted_m427650377 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_inverted(System.Boolean)
extern "C"  void UIScrollBar_set_inverted_m4104658274 (UIScrollBar_t1736046648 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIScrollBar::get_scrollValue()
extern "C"  float UIScrollBar_get_scrollValue_m297360136 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_scrollValue(System.Single)
extern "C"  void UIScrollBar_set_scrollValue_m1198530337 (UIScrollBar_t1736046648 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIScrollBar::get_barSize()
extern "C"  float UIScrollBar_get_barSize_m4247808198 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_barSize(System.Single)
extern "C"  void UIScrollBar_set_barSize_m1802646915 (UIScrollBar_t1736046648 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIScrollBar::get_alpha()
extern "C"  float UIScrollBar_get_alpha_m2722781166 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_alpha(System.Single)
extern "C"  void UIScrollBar_set_alpha_m40284859 (UIScrollBar_t1736046648 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::CenterOnPos(UnityEngine.Vector2)
extern "C"  void UIScrollBar_CenterOnPos_m3793602765 (UIScrollBar_t1736046648 * __this, Vector2_t2243707579  ___localPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::Reposition(UnityEngine.Vector2)
extern "C"  void UIScrollBar_Reposition_m3870561469 (UIScrollBar_t1736046648 * __this, Vector2_t2243707579  ___screenPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnPressBackground(UnityEngine.GameObject,System.Boolean)
extern "C"  void UIScrollBar_OnPressBackground_m1023744588 (UIScrollBar_t1736046648 * __this, GameObject_t1756533147 * ___go0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnDragBackground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void UIScrollBar_OnDragBackground_m1657123352 (UIScrollBar_t1736046648 * __this, GameObject_t1756533147 * ___go0, Vector2_t2243707579  ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnPressForeground(UnityEngine.GameObject,System.Boolean)
extern "C"  void UIScrollBar_OnPressForeground_m1908246777 (UIScrollBar_t1736046648 * __this, GameObject_t1756533147 * ___go0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnDragForeground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void UIScrollBar_OnDragForeground_m692870297 (UIScrollBar_t1736046648 * __this, GameObject_t1756533147 * ___go0, Vector2_t2243707579  ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::Start()
extern "C"  void UIScrollBar_Start_m479487123 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::Update()
extern "C"  void UIScrollBar_Update_m2023494586 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::ForceUpdate()
extern "C"  void UIScrollBar_ForceUpdate_m4082460291 (UIScrollBar_t1736046648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
