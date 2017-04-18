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

// UIFont
struct UIFont_t389944949;
// BMFont
struct BMFont_t421884312;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t1234607911;
// UIAtlas
struct UIAtlas_t1304615221;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;
// UIAtlas/Sprite
struct Sprite_t134787095;
// UnityEngine.Font
struct Font_t4239498691;
// UnityEngine.Texture
struct Texture_t2243626319;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t2464096221;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1094906160;
// BMSymbol
struct BMSymbol_t1865486779;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIAtlas1304615221.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_UIFont389944949.h"
#include "UnityEngine_UnityEngine_Font4239498691.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UIFont_SymbolStyle1145778735.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "AssemblyU2DCSharp_UIFont_Alignment3024790793.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

// System.Void UIFont::.ctor()
extern "C"  void UIFont__ctor_m2527350482 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMFont UIFont::get_bmFont()
extern "C"  BMFont_t421884312 * UIFont_get_bmFont_m2906105458 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texWidth()
extern "C"  int32_t UIFont_get_texWidth_m1785076744 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texHeight()
extern "C"  int32_t UIFont_get_texHeight_m404198245 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_hasSymbols()
extern "C"  bool UIFont_get_hasSymbols_m2356923234 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BMSymbol> UIFont::get_symbols()
extern "C"  List_1_t1234607911 * UIFont_get_symbols_m199140244 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIFont::get_atlas()
extern "C"  UIAtlas_t1304615221 * UIFont_get_atlas_m2530562324 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_atlas(UIAtlas)
extern "C"  void UIFont_set_atlas_m2779347313 (UIFont_t389944949 * __this, UIAtlas_t1304615221 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIFont::get_material()
extern "C"  Material_t193706927 * UIFont_get_material_m2422080949 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_material(UnityEngine.Material)
extern "C"  void UIFont_set_material_m2850561022 (UIFont_t389944949 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIFont::get_pixelSize()
extern "C"  float UIFont_get_pixelSize_m151458670 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_pixelSize(System.Single)
extern "C"  void UIFont_set_pixelSize_m795413405 (UIFont_t389944949 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_premultipliedAlpha()
extern "C"  bool UIFont_get_premultipliedAlpha_m2669404455 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UIFont::get_texture()
extern "C"  Texture2D_t3542995729 * UIFont_get_texture_m419031323 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UIFont::get_uvRect()
extern "C"  Rect_t3681755626  UIFont_get_uvRect_m367419500 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_uvRect(UnityEngine.Rect)
extern "C"  void UIFont_set_uvRect_m2747150545 (UIFont_t389944949 * __this, Rect_t3681755626  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIFont::get_spriteName()
extern "C"  String_t* UIFont_get_spriteName_m3352312938 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_spriteName(System.String)
extern "C"  void UIFont_set_spriteName_m55877617 (UIFont_t389944949 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_horizontalSpacing()
extern "C"  int32_t UIFont_get_horizontalSpacing_m1492378642 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_horizontalSpacing(System.Int32)
extern "C"  void UIFont_set_horizontalSpacing_m458023471 (UIFont_t389944949 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_verticalSpacing()
extern "C"  int32_t UIFont_get_verticalSpacing_m1177297124 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_verticalSpacing(System.Int32)
extern "C"  void UIFont_set_verticalSpacing_m3882515863 (UIFont_t389944949 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isValid()
extern "C"  bool UIFont_get_isValid_m2021120409 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_size()
extern "C"  int32_t UIFont_get_size_m744911966 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas/Sprite UIFont::get_sprite()
extern "C"  Sprite_t134787095 * UIFont_get_sprite_m3320584858 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UIFont::get_replacement()
extern "C"  UIFont_t389944949 * UIFont_get_replacement_m2434960259 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_replacement(UIFont)
extern "C"  void UIFont_set_replacement_m4092540652 (UIFont_t389944949 * __this, UIFont_t389944949 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isDynamic()
extern "C"  bool UIFont_get_isDynamic_m4260164930 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UIFont::get_dynamicFont()
extern "C"  Font_t4239498691 * UIFont_get_dynamicFont_m2797798366 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFont(UnityEngine.Font)
extern "C"  void UIFont_set_dynamicFont_m244592551 (UIFont_t389944949 * __this, Font_t4239498691 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_dynamicFontSize()
extern "C"  int32_t UIFont_get_dynamicFontSize_m3546814958 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFontSize(System.Int32)
extern "C"  void UIFont_set_dynamicFontSize_m492273419 (UIFont_t389944949 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UIFont::get_dynamicFontStyle()
extern "C"  int32_t UIFont_get_dynamicFontStyle_m3376376108 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFontStyle(UnityEngine.FontStyle)
extern "C"  void UIFont_set_dynamicFontStyle_m105008447 (UIFont_t389944949 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Trim()
extern "C"  void UIFont_Trim_m852672452 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::References(UIFont)
extern "C"  bool UIFont_References_m2203481619 (UIFont_t389944949 * __this, UIFont_t389944949 * ___font0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::CheckIfRelated(UIFont,UIFont)
extern "C"  bool UIFont_CheckIfRelated_m2340705004 (Il2CppObject * __this /* static, unused */, UIFont_t389944949 * ___a0, UIFont_t389944949 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIFont::get_dynamicTexture()
extern "C"  Texture_t2243626319 * UIFont_get_dynamicTexture_m3690725334 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::MarkAsDirty()
extern "C"  void UIFont_MarkAsDirty_m796627041 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Request(System.String)
extern "C"  void UIFont_Request_m3737004803 (UIFont_t389944949 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIFont::CalculatePrintedSize(System.String,System.Boolean,UIFont/SymbolStyle)
extern "C"  Vector2_t2243707579  UIFont_CalculatePrintedSize_m3658380326 (UIFont_t389944949 * __this, String_t* ___text0, bool ___encoding1, int32_t ___symbolStyle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::EndLine(System.Text.StringBuilder&)
extern "C"  void UIFont_EndLine_m2999414699 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 ** ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIFont::GetEndOfLineThatFits(System.String,System.Single,System.Boolean,UIFont/SymbolStyle)
extern "C"  String_t* UIFont_GetEndOfLineThatFits_m3916503195 (UIFont_t389944949 * __this, String_t* ___text0, float ___maxWidth1, bool ___encoding2, int32_t ___symbolStyle3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::WrapText(System.String,System.String&,System.Single,System.Single,System.Int32,System.Boolean,UIFont/SymbolStyle)
extern "C"  bool UIFont_WrapText_m3070059386 (UIFont_t389944949 * __this, String_t* ___text0, String_t** ___finalText1, float ___width2, float ___height3, int32_t ___lines4, bool ___encoding5, int32_t ___symbolStyle6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::WrapText(System.String,System.String&,System.Single,System.Single,System.Int32,System.Boolean)
extern "C"  bool UIFont_WrapText_m725290605 (UIFont_t389944949 * __this, String_t* ___text0, String_t** ___finalText1, float ___maxWidth2, float ___maxHeight3, int32_t ___maxLineCount4, bool ___encoding5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::WrapText(System.String,System.String&,System.Single,System.Single,System.Int32)
extern "C"  bool UIFont_WrapText_m2739629746 (UIFont_t389944949 * __this, String_t* ___text0, String_t** ___finalText1, float ___maxWidth2, float ___maxHeight3, int32_t ___maxLineCount4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Align(BetterList`1<UnityEngine.Vector3>,System.Int32,UIFont/Alignment,System.Int32,System.Int32)
extern "C"  void UIFont_Align_m2071808955 (UIFont_t389944949 * __this, BetterList_1_t2464096222 * ___verts0, int32_t ___indexOffset1, int32_t ___alignment2, int32_t ___x3, int32_t ___lineWidth4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Print(System.String,UnityEngine.Color32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,System.Boolean,UIFont/SymbolStyle,UIFont/Alignment,System.Int32,System.Boolean)
extern "C"  void UIFont_Print_m408056258 (UIFont_t389944949 * __this, String_t* ___text0, Color32_t874517518  ___color1, BetterList_1_t2464096222 * ___verts2, BetterList_1_t2464096221 * ___uvs3, BetterList_1_t1094906160 * ___cols4, bool ___encoding5, int32_t ___symbolStyle6, int32_t ___alignment7, int32_t ___lineWidth8, bool ___premultiply9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::GetSymbol(System.String,System.Boolean)
extern "C"  BMSymbol_t1865486779 * UIFont_GetSymbol_m4243773895 (UIFont_t389944949 * __this, String_t* ___sequence0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::MatchSymbol(System.String,System.Int32,System.Int32)
extern "C"  BMSymbol_t1865486779 * UIFont_MatchSymbol_m2621651169 (UIFont_t389944949 * __this, String_t* ___text0, int32_t ___offset1, int32_t ___textLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::AddSymbol(System.String,System.String)
extern "C"  void UIFont_AddSymbol_m3472955699 (UIFont_t389944949 * __this, String_t* ___sequence0, String_t* ___spriteName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RemoveSymbol(System.String)
extern "C"  void UIFont_RemoveSymbol_m1668972986 (UIFont_t389944949 * __this, String_t* ___sequence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RenameSymbol(System.String,System.String)
extern "C"  void UIFont_RenameSymbol_m2558660220 (UIFont_t389944949 * __this, String_t* ___before0, String_t* ___after1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::UsesSprite(System.String)
extern "C"  bool UIFont_UsesSprite_m2655989147 (UIFont_t389944949 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
