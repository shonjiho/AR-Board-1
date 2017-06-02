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

// TweenColor
struct TweenColor_t3390486518;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void TweenColor::.ctor()
extern "C"  void TweenColor__ctor_m3378177727 (TweenColor_t3390486518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TweenColor::get_color()
extern "C"  Color_t2020392075  TweenColor_get_color_m3907252680 (TweenColor_t3390486518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::set_color(UnityEngine.Color)
extern "C"  void TweenColor_set_color_m1296090733 (TweenColor_t3390486518 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::Awake()
extern "C"  void TweenColor_Awake_m4004980914 (TweenColor_t3390486518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenColor_OnUpdate_m452913689 (TweenColor_t3390486518 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenColor TweenColor::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Color)
extern "C"  TweenColor_t3390486518 * TweenColor_Begin_m1014254184 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, float ___duration1, Color_t2020392075  ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
