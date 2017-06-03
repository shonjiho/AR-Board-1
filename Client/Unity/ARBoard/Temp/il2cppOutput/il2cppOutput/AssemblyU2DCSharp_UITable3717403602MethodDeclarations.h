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

// UITable
struct UITable_t3717403602;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void UITable::.ctor()
extern "C"  void UITable__ctor_m2967618821 (UITable_t3717403602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UITable::SortByName(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t UITable_SortByName_m1356658545 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___a0, Transform_t3275118058 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> UITable::get_children()
extern "C"  List_1_t2644239190 * UITable_get_children_m1442451601 (UITable_t3717403602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::RepositionVariableSize(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern "C"  void UITable_RepositionVariableSize_m3358707585 (UITable_t3717403602 * __this, List_1_t2644239190 * ___children0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::Reposition()
extern "C"  void UITable_Reposition_m3413052139 (UITable_t3717403602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::Start()
extern "C"  void UITable_Start_m2794591917 (UITable_t3717403602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::LateUpdate()
extern "C"  void UITable_LateUpdate_m3648677132 (UITable_t3717403602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
