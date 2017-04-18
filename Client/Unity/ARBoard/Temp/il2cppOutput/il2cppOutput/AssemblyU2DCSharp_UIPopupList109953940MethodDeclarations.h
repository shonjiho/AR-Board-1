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

// UIPopupList
struct UIPopupList_t109953940;
// System.String
struct String_t;
// Localization
struct Localization_t3725902693;
// UILabel
struct UILabel_t1795115428;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIWidget
struct UIWidget_t1453041918;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Localization3725902693.h"
#include "AssemblyU2DCSharp_UILabel1795115428.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "AssemblyU2DCSharp_UIWidget1453041918.h"

// System.Void UIPopupList::.ctor()
extern "C"  void UIPopupList__ctor_m3338802731 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isOpen()
extern "C"  bool UIPopupList_get_isOpen_m3249812516 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_selection()
extern "C"  String_t* UIPopupList_get_selection_m997601135 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_selection(System.String)
extern "C"  void UIPopupList_set_selection_m3939670660 (UIPopupList_t109953940 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_handleEvents()
extern "C"  bool UIPopupList_get_handleEvents_m2841786107 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_handleEvents(System.Boolean)
extern "C"  void UIPopupList_set_handleEvents_m1462537660 (UIPopupList_t109953940 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Start()
extern "C"  void UIPopupList_Start_m2613035247 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnLocalize(Localization)
extern "C"  void UIPopupList_OnLocalize_m738038198 (UIPopupList_t109953940 * __this, Localization_t3725902693 * ___loc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Highlight(UILabel,System.Boolean)
extern "C"  void UIPopupList_Highlight_m1849085542 (UIPopupList_t109953940 * __this, UILabel_t1795115428 * ___lbl0, bool ___instant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemHover(UnityEngine.GameObject,System.Boolean)
extern "C"  void UIPopupList_OnItemHover_m1576403776 (UIPopupList_t109953940 * __this, GameObject_t1756533147 * ___go0, bool ___isOver1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Select(UILabel,System.Boolean)
extern "C"  void UIPopupList_Select_m2235339614 (UIPopupList_t109953940 * __this, UILabel_t1795115428 * ___lbl0, bool ___instant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemPress(UnityEngine.GameObject,System.Boolean)
extern "C"  void UIPopupList_OnItemPress_m1085254023 (UIPopupList_t109953940 * __this, GameObject_t1756533147 * ___go0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnKey(UnityEngine.KeyCode)
extern "C"  void UIPopupList_OnKey_m2466108486 (UIPopupList_t109953940 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnSelect(System.Boolean)
extern "C"  void UIPopupList_OnSelect_m2611281985 (UIPopupList_t109953940 * __this, bool ___isSelected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateColor(UIWidget)
extern "C"  void UIPopupList_AnimateColor_m1413828557 (UIPopupList_t109953940 * __this, UIWidget_t1453041918 * ___widget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimatePosition(UIWidget,System.Boolean,System.Single)
extern "C"  void UIPopupList_AnimatePosition_m3828712831 (UIPopupList_t109953940 * __this, UIWidget_t1453041918 * ___widget0, bool ___placeAbove1, float ___bottom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateScale(UIWidget,System.Boolean,System.Single)
extern "C"  void UIPopupList_AnimateScale_m3082539226 (UIPopupList_t109953940 * __this, UIWidget_t1453041918 * ___widget0, bool ___placeAbove1, float ___bottom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Animate(UIWidget,System.Boolean,System.Single)
extern "C"  void UIPopupList_Animate_m830149314 (UIPopupList_t109953940 * __this, UIWidget_t1453041918 * ___widget0, bool ___placeAbove1, float ___bottom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnClick()
extern "C"  void UIPopupList_OnClick_m1709324516 (UIPopupList_t109953940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
