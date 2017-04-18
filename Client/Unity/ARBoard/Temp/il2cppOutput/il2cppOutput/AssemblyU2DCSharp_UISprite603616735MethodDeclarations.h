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

// UISprite
struct UISprite_t603616735;
// UnityEngine.Material
struct Material_t193706927;
// UIAtlas
struct UIAtlas_t1304615221;
// System.String
struct String_t;
// UIAtlas/Sprite
struct Sprite_t134787095;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t2464096221;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1094906160;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UISprite_Type2972059396.h"
#include "AssemblyU2DCSharp_UIAtlas1304615221.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_UISprite_FillDirection2438394762.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "AssemblyU2DCSharp_UIAtlas_Sprite134787095.h"

// System.Void UISprite::.ctor()
extern "C"  void UISprite__ctor_m938237794 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite/Type UISprite::get_type()
extern "C"  int32_t UISprite_get_type_m1653842264 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_type(UISprite/Type)
extern "C"  void UISprite_set_type_m2422968965 (UISprite_t603616735 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UISprite::get_material()
extern "C"  Material_t193706927 * UISprite_get_material_m9698551 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UISprite::get_atlas()
extern "C"  UIAtlas_t1304615221 * UISprite_get_atlas_m890067996 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_atlas(UIAtlas)
extern "C"  void UISprite_set_atlas_m2870060671 (UISprite_t603616735 * __this, UIAtlas_t1304615221 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UISprite::get_spriteName()
extern "C"  String_t* UISprite_get_spriteName_m3653609306 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_spriteName(System.String)
extern "C"  void UISprite_set_spriteName_m3423882207 (UISprite_t603616735 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_isValid()
extern "C"  bool UISprite_get_isValid_m842135215 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UISprite::get_innerUV()
extern "C"  Rect_t3681755626  UISprite_get_innerUV_m1527411938 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UISprite::get_outerUV()
extern "C"  Rect_t3681755626  UISprite_get_outerUV_m288024833 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_fillCenter()
extern "C"  bool UISprite_get_fillCenter_m1394291695 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillCenter(System.Boolean)
extern "C"  void UISprite_set_fillCenter_m3335026688 (UISprite_t603616735 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite/FillDirection UISprite::get_fillDirection()
extern "C"  int32_t UISprite_get_fillDirection_m4283499392 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillDirection(UISprite/FillDirection)
extern "C"  void UISprite_set_fillDirection_m1888298229 (UISprite_t603616735 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISprite::get_fillAmount()
extern "C"  float UISprite_get_fillAmount_m1850815682 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillAmount(System.Single)
extern "C"  void UISprite_set_fillAmount_m3318060225 (UISprite_t603616735 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_invert()
extern "C"  bool UISprite_get_invert_m3094110297 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_invert(System.Boolean)
extern "C"  void UISprite_set_invert_m2869089580 (UISprite_t603616735 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_relativePadding()
extern "C"  Vector4_t2243707581  UISprite_get_relativePadding_m1528407435 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_border()
extern "C"  Vector4_t2243707581  UISprite_get_border_m549308326 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_pixelPerfectAfterResize()
extern "C"  bool UISprite_get_pixelPerfectAfterResize_m3223533986 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas/Sprite UISprite::GetAtlasSprite()
extern "C"  Sprite_t134787095 * UISprite_GetAtlasSprite_m1078588024 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SetAtlasSprite(UIAtlas/Sprite)
extern "C"  void UISprite_SetAtlasSprite_m3015006119 (UISprite_t603616735 * __this, Sprite_t134787095 * ___sp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::UpdateUVs(System.Boolean)
extern "C"  void UISprite_UpdateUVs_m1723246456 (UISprite_t603616735 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::MakePixelPerfect()
extern "C"  void UISprite_MakePixelPerfect_m3714401031 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnStart()
extern "C"  void UISprite_OnStart_m1608591703 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::Update()
extern "C"  void UISprite_Update_m4228896043 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UISprite_OnFill_m4101057731 (UISprite_t603616735 * __this, BetterList_1_t2464096222 * ___verts0, BetterList_1_t2464096221 * ___uvs1, BetterList_1_t1094906160 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SimpleFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UISprite_SimpleFill_m33636372 (UISprite_t603616735 * __this, BetterList_1_t2464096222 * ___verts0, BetterList_1_t2464096221 * ___uvs1, BetterList_1_t1094906160 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SlicedFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UISprite_SlicedFill_m4165259756 (UISprite_t603616735 * __this, BetterList_1_t2464096222 * ___verts0, BetterList_1_t2464096221 * ___uvs1, BetterList_1_t1094906160 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::AdjustRadial(UnityEngine.Vector2[],UnityEngine.Vector2[],System.Single,System.Boolean)
extern "C"  bool UISprite_AdjustRadial_m875806546 (UISprite_t603616735 * __this, Vector2U5BU5D_t686124026* ___xy0, Vector2U5BU5D_t686124026* ___uv1, float ___fill2, bool ___invert3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::Rotate(UnityEngine.Vector2[],System.Int32)
extern "C"  void UISprite_Rotate_m2121551508 (UISprite_t603616735 * __this, Vector2U5BU5D_t686124026* ___v0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::FilledFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UISprite_FilledFill_m62415418 (UISprite_t603616735 * __this, BetterList_1_t2464096222 * ___verts0, BetterList_1_t2464096221 * ___uvs1, BetterList_1_t1094906160 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::TiledFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UISprite_TiledFill_m1641899720 (UISprite_t603616735 * __this, BetterList_1_t2464096222 * ___verts0, BetterList_1_t2464096221 * ___uvs1, BetterList_1_t1094906160 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
