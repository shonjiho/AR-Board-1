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

// UISlider
struct UISlider_t2191058247;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

// System.Void UISlider::.ctor()
extern "C"  void UISlider__ctor_m285068726 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISlider::get_sliderValue()
extern "C"  float UISlider_get_sliderValue_m1340450083 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_sliderValue(System.Single)
extern "C"  void UISlider_set_sliderValue_m3004766204 (UISlider_t2191058247 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UISlider::get_fullSize()
extern "C"  Vector2_t2243707579  UISlider_get_fullSize_m2083348846 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_fullSize(UnityEngine.Vector2)
extern "C"  void UISlider_set_fullSize_m1150475457 (UISlider_t2191058247 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Init()
extern "C"  void UISlider_Init_m3861947670 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Awake()
extern "C"  void UISlider_Awake_m3952514387 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Start()
extern "C"  void UISlider_Start_m3586873266 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPress(System.Boolean)
extern "C"  void UISlider_OnPress_m3309743759 (UISlider_t2191058247 * __this, bool ___pressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDrag(UnityEngine.Vector2)
extern "C"  void UISlider_OnDrag_m1186061047 (UISlider_t2191058247 * __this, Vector2_t2243707579  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressThumb(UnityEngine.GameObject,System.Boolean)
extern "C"  void UISlider_OnPressThumb_m666869853 (UISlider_t2191058247 * __this, GameObject_t1756533147 * ___go0, bool ___pressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragThumb(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void UISlider_OnDragThumb_m1517032601 (UISlider_t2191058247 * __this, GameObject_t1756533147 * ___go0, Vector2_t2243707579  ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnKey(UnityEngine.KeyCode)
extern "C"  void UISlider_OnKey_m3634739157 (UISlider_t2191058247 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::UpdateDrag()
extern "C"  void UISlider_UpdateDrag_m1929306819 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Set(System.Single,System.Boolean)
extern "C"  void UISlider_Set_m4067520834 (UISlider_t2191058247 * __this, float ___input0, bool ___force1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::ForceUpdate()
extern "C"  void UISlider_ForceUpdate_m3010383220 (UISlider_t2191058247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
