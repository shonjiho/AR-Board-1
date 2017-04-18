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

// UIManager
struct UIManager_t2519183485;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UISprite
struct UISprite_t603616735;
// UserState
struct UserState_t1755349504;
// UIButton
struct UIButton_t3377238306;
// UILabel
struct UILabel_t1795115428;
// Scaffolding
struct Scaffolding_t1214675190;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_UISprite603616735.h"
#include "AssemblyU2DCSharp_UserState1755349504.h"
#include "AssemblyU2DCSharp_Scaffolding1214675190.h"

// System.Void UIManager::.ctor()
extern "C"  void UIManager__ctor_m896165536 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIManager UIManager::get_Instance()
extern "C"  UIManager_t2519183485 * UIManager_get_Instance_m462717970 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::Load(UnityEngine.GameObject)
extern "C"  void UIManager_Load_m2864289868 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::Init()
extern "C"  void UIManager_Init_m2591072604 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::ShowDrawImage()
extern "C"  void UIManager_ShowDrawImage_m4281217480 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::StartFadeInDrawImage(UISprite)
extern "C"  Il2CppObject * UIManager_StartFadeInDrawImage_m3699638649 (UIManager_t2519183485 * __this, UISprite_t603616735 * ___uiSprite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::StartFadeOutDrawImage(UISprite)
extern "C"  Il2CppObject * UIManager_StartFadeOutDrawImage_m1100953084 (UIManager_t2519183485 * __this, UISprite_t603616735 * ___uiSprite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::SetUI(UserState)
extern "C"  void UIManager_SetUI_m1953042196 (UIManager_t2519183485 * __this, UserState_t1755349504 * ___userState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIButton UIManager::GetDiceButton()
extern "C"  UIButton_t3377238306 * UIManager_GetDiceButton_m63926866 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel UIManager::GetDiceLabel()
extern "C"  UILabel_t1795115428 * UIManager_GetDiceLabel_m3361335754 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::ShowBuildMenu(Scaffolding)
extern "C"  void UIManager_ShowBuildMenu_m4205378428 (UIManager_t2519183485 * __this, Scaffolding_t1214675190 * ___scaffolding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::HideBuildMenu()
extern "C"  void UIManager_HideBuildMenu_m772969425 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
