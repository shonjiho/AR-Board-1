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

// UIDrawCall
struct UIDrawCall_t3291843512;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t2464096223;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t2464096221;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1094906160;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping4042448929.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UIDrawCall::.ctor()
extern "C"  void UIDrawCall__ctor_m2681451025 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_depthPass()
extern "C"  bool UIDrawCall_get_depthPass_m3208292138 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_depthPass(System.Boolean)
extern "C"  void UIDrawCall_set_depthPass_m1622232835 (UIDrawCall_t3291843512 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_depth()
extern "C"  int32_t UIDrawCall_get_depth_m517685279 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_depth(System.Int32)
extern "C"  void UIDrawCall_set_depth_m2618091940 (UIDrawCall_t3291843512 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIDrawCall::get_cachedTransform()
extern "C"  Transform_t3275118058 * UIDrawCall_get_cachedTransform_m3072307484 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_material()
extern "C"  Material_t193706927 * UIDrawCall_get_material_m1081656314 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_material(UnityEngine.Material)
extern "C"  void UIDrawCall_set_material_m4051684027 (UIDrawCall_t3291843512 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIDrawCall::get_mainTexture()
extern "C"  Texture_t2243626319 * UIDrawCall_get_mainTexture_m1930380135 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_mainTexture(UnityEngine.Texture)
extern "C"  void UIDrawCall_set_mainTexture_m729525252 (UIDrawCall_t3291843512 * __this, Texture_t2243626319 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_triangles()
extern "C"  int32_t UIDrawCall_get_triangles_m2367011471 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_isClipped()
extern "C"  bool UIDrawCall_get_isClipped_m1934861829 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIDrawCall::get_clipping()
extern "C"  int32_t UIDrawCall_get_clipping_m3699051176 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipping(UIDrawCall/Clipping)
extern "C"  void UIDrawCall_set_clipping_m2747106653 (UIDrawCall_t3291843512 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIDrawCall::get_clipRange()
extern "C"  Vector4_t2243707581  UIDrawCall_get_clipRange_m134812808 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipRange(UnityEngine.Vector4)
extern "C"  void UIDrawCall_set_clipRange_m3555197731 (UIDrawCall_t3291843512 * __this, Vector4_t2243707581  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIDrawCall::get_clipSoftness()
extern "C"  Vector2_t2243707579  UIDrawCall_get_clipSoftness_m1698244424 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipSoftness(UnityEngine.Vector2)
extern "C"  void UIDrawCall_set_clipSoftness_m1852973607 (UIDrawCall_t3291843512 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UIDrawCall::GetMesh(System.Boolean&,System.Int32)
extern "C"  Mesh_t1356156583 * UIDrawCall_GetMesh_m2843900799 (UIDrawCall_t3291843512 * __this, bool* ___rebuildIndices0, int32_t ___vertexCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateMaterials()
extern "C"  void UIDrawCall_UpdateMaterials_m437069610 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Set(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UIDrawCall_Set_m107260791 (UIDrawCall_t3291843512 * __this, BetterList_1_t2464096222 * ___verts0, BetterList_1_t2464096222 * ___norms1, BetterList_1_t2464096223 * ___tans2, BetterList_1_t2464096221 * ___uvs3, BetterList_1_t1094906160 * ___cols4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnWillRenderObject()
extern "C"  void UIDrawCall_OnWillRenderObject_m1693728361 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDestroy()
extern "C"  void UIDrawCall_OnDestroy_m4164280926 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
