#include <hxcpp.h>

#ifndef INCLUDED_hxsl_TGlobal
#include <hxsl/TGlobal.h>
#endif
namespace hxsl{

::hxsl::TGlobal TGlobal_obj::Abs;

::hxsl::TGlobal TGlobal_obj::Acos;

::hxsl::TGlobal TGlobal_obj::Asin;

::hxsl::TGlobal TGlobal_obj::Atan;

::hxsl::TGlobal TGlobal_obj::BVec2;

::hxsl::TGlobal TGlobal_obj::BVec3;

::hxsl::TGlobal TGlobal_obj::BVec4;

::hxsl::TGlobal TGlobal_obj::Ceil;

::hxsl::TGlobal TGlobal_obj::ChannelFetch;

::hxsl::TGlobal TGlobal_obj::ChannelRead;

::hxsl::TGlobal TGlobal_obj::ChannelReadLod;

::hxsl::TGlobal TGlobal_obj::ChannelTextureSize;

::hxsl::TGlobal TGlobal_obj::Clamp;

::hxsl::TGlobal TGlobal_obj::Cos;

::hxsl::TGlobal TGlobal_obj::Cross;

::hxsl::TGlobal TGlobal_obj::DFdx;

::hxsl::TGlobal TGlobal_obj::DFdy;

::hxsl::TGlobal TGlobal_obj::Degrees;

::hxsl::TGlobal TGlobal_obj::Distance;

::hxsl::TGlobal TGlobal_obj::Dot;

::hxsl::TGlobal TGlobal_obj::Exp;

::hxsl::TGlobal TGlobal_obj::Exp2;

::hxsl::TGlobal TGlobal_obj::Floor;

::hxsl::TGlobal TGlobal_obj::Fract;

::hxsl::TGlobal TGlobal_obj::FragCoord;

::hxsl::TGlobal TGlobal_obj::FrontFacing;

::hxsl::TGlobal TGlobal_obj::Fwidth;

::hxsl::TGlobal TGlobal_obj::IVec2;

::hxsl::TGlobal TGlobal_obj::IVec3;

::hxsl::TGlobal TGlobal_obj::IVec4;

::hxsl::TGlobal TGlobal_obj::InstanceID;

::hxsl::TGlobal TGlobal_obj::Inversesqrt;

::hxsl::TGlobal TGlobal_obj::LReflect;

::hxsl::TGlobal TGlobal_obj::Length;

::hxsl::TGlobal TGlobal_obj::Log;

::hxsl::TGlobal TGlobal_obj::Log2;

::hxsl::TGlobal TGlobal_obj::Mat2;

::hxsl::TGlobal TGlobal_obj::Mat3;

::hxsl::TGlobal TGlobal_obj::Mat3x4;

::hxsl::TGlobal TGlobal_obj::Mat4;

::hxsl::TGlobal TGlobal_obj::Max;

::hxsl::TGlobal TGlobal_obj::Min;

::hxsl::TGlobal TGlobal_obj::Mix;

::hxsl::TGlobal TGlobal_obj::Mod;

::hxsl::TGlobal TGlobal_obj::Normalize;

::hxsl::TGlobal TGlobal_obj::Pack;

::hxsl::TGlobal TGlobal_obj::PackNormal;

::hxsl::TGlobal TGlobal_obj::Pow;

::hxsl::TGlobal TGlobal_obj::Radians;

::hxsl::TGlobal TGlobal_obj::Saturate;

::hxsl::TGlobal TGlobal_obj::ScreenToUv;

::hxsl::TGlobal TGlobal_obj::Sign;

::hxsl::TGlobal TGlobal_obj::Sin;

::hxsl::TGlobal TGlobal_obj::Smoothstep;

::hxsl::TGlobal TGlobal_obj::Sqrt;

::hxsl::TGlobal TGlobal_obj::Step;

::hxsl::TGlobal TGlobal_obj::Tan;

::hxsl::TGlobal TGlobal_obj::Texel;

::hxsl::TGlobal TGlobal_obj::Texture;

::hxsl::TGlobal TGlobal_obj::TextureLod;

::hxsl::TGlobal TGlobal_obj::TextureSize;

::hxsl::TGlobal TGlobal_obj::ToBool;

::hxsl::TGlobal TGlobal_obj::ToFloat;

::hxsl::TGlobal TGlobal_obj::ToInt;

::hxsl::TGlobal TGlobal_obj::Trace;

::hxsl::TGlobal TGlobal_obj::Unpack;

::hxsl::TGlobal TGlobal_obj::UnpackNormal;

::hxsl::TGlobal TGlobal_obj::UvToScreen;

::hxsl::TGlobal TGlobal_obj::Vec2;

::hxsl::TGlobal TGlobal_obj::Vec3;

::hxsl::TGlobal TGlobal_obj::Vec4;

::hxsl::TGlobal TGlobal_obj::VertexID;

bool TGlobal_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Abs",52,a8,31,00)) { outValue = TGlobal_obj::Abs; return true; }
	if (inName==HX_("Acos",a6,5e,42,2b)) { outValue = TGlobal_obj::Acos; return true; }
	if (inName==HX_("Asin",77,7d,4e,2b)) { outValue = TGlobal_obj::Asin; return true; }
	if (inName==HX_("Atan",c0,38,4f,2b)) { outValue = TGlobal_obj::Atan; return true; }
	if (inName==HX_("BVec2",c0,9c,97,39)) { outValue = TGlobal_obj::BVec2; return true; }
	if (inName==HX_("BVec3",c1,9c,97,39)) { outValue = TGlobal_obj::BVec3; return true; }
	if (inName==HX_("BVec4",c2,9c,97,39)) { outValue = TGlobal_obj::BVec4; return true; }
	if (inName==HX_("Ceil",25,4b,96,2c)) { outValue = TGlobal_obj::Ceil; return true; }
	if (inName==HX_("ChannelFetch",97,2c,bf,ca)) { outValue = TGlobal_obj::ChannelFetch; return true; }
	if (inName==HX_("ChannelRead",99,2d,a8,ff)) { outValue = TGlobal_obj::ChannelRead; return true; }
	if (inName==HX_("ChannelReadLod",68,a4,4d,5d)) { outValue = TGlobal_obj::ChannelReadLod; return true; }
	if (inName==HX_("ChannelTextureSize",59,db,c5,4f)) { outValue = TGlobal_obj::ChannelTextureSize; return true; }
	if (inName==HX_("Clamp",db,e2,85,db)) { outValue = TGlobal_obj::Clamp; return true; }
	if (inName==HX_("Cos",27,38,33,00)) { outValue = TGlobal_obj::Cos; return true; }
	if (inName==HX_("Cross",60,cf,87,df)) { outValue = TGlobal_obj::Cross; return true; }
	if (inName==HX_("DFdx",96,f7,27,2d)) { outValue = TGlobal_obj::DFdx; return true; }
	if (inName==HX_("DFdy",97,f7,27,2d)) { outValue = TGlobal_obj::DFdy; return true; }
	if (inName==HX_("Degrees",87,0b,ac,07)) { outValue = TGlobal_obj::Degrees; return true; }
	if (inName==HX_("Distance",55,4f,ab,45)) { outValue = TGlobal_obj::Distance; return true; }
	if (inName==HX_("Dot",69,fa,33,00)) { outValue = TGlobal_obj::Dot; return true; }
	if (inName==HX_("Exp",7d,c4,34,00)) { outValue = TGlobal_obj::Exp; return true; }
	if (inName==HX_("Exp2",15,29,f7,2d)) { outValue = TGlobal_obj::Exp2; return true; }
	if (inName==HX_("Floor",ac,41,c4,95)) { outValue = TGlobal_obj::Floor; return true; }
	if (inName==HX_("Fract",66,df,b0,99)) { outValue = TGlobal_obj::Fract; return true; }
	if (inName==HX_("FragCoord",03,dc,69,f4)) { outValue = TGlobal_obj::FragCoord; return true; }
	if (inName==HX_("FrontFacing",83,c8,a7,d8)) { outValue = TGlobal_obj::FrontFacing; return true; }
	if (inName==HX_("Fwidth",00,f8,5d,c7)) { outValue = TGlobal_obj::Fwidth; return true; }
	if (inName==HX_("IVec2",47,ac,65,41)) { outValue = TGlobal_obj::IVec2; return true; }
	if (inName==HX_("IVec3",48,ac,65,41)) { outValue = TGlobal_obj::IVec3; return true; }
	if (inName==HX_("IVec4",49,ac,65,41)) { outValue = TGlobal_obj::IVec4; return true; }
	if (inName==HX_("InstanceID",d0,32,c9,62)) { outValue = TGlobal_obj::InstanceID; return true; }
	if (inName==HX_("Inversesqrt",70,27,05,1f)) { outValue = TGlobal_obj::Inversesqrt; return true; }
	if (inName==HX_("LReflect",51,8d,74,b1)) { outValue = TGlobal_obj::LReflect; return true; }
	if (inName==HX_("Length",06,09,9c,d3)) { outValue = TGlobal_obj::Length; return true; }
	if (inName==HX_("Log",64,0c,3a,00)) { outValue = TGlobal_obj::Log; return true; }
	if (inName==HX_("Log2",4e,cb,90,32)) { outValue = TGlobal_obj::Log2; return true; }
	if (inName==HX_("Mat2",b2,6d,2f,33)) { outValue = TGlobal_obj::Mat2; return true; }
	if (inName==HX_("Mat3",b3,6d,2f,33)) { outValue = TGlobal_obj::Mat3; return true; }
	if (inName==HX_("Mat3x4",2f,e9,2c,f0)) { outValue = TGlobal_obj::Mat3x4; return true; }
	if (inName==HX_("Mat4",b4,6d,2f,33)) { outValue = TGlobal_obj::Mat4; return true; }
	if (inName==HX_("Max",84,c2,3a,00)) { outValue = TGlobal_obj::Max; return true; }
	if (inName==HX_("Min",72,c9,3a,00)) { outValue = TGlobal_obj::Min; return true; }
	if (inName==HX_("Mix",7c,c9,3a,00)) { outValue = TGlobal_obj::Mix; return true; }
	if (inName==HX_("Mod",a2,ce,3a,00)) { outValue = TGlobal_obj::Mod; return true; }
	if (inName==HX_("Normalize",6d,17,74,4d)) { outValue = TGlobal_obj::Normalize; return true; }
	if (inName==HX_("Pack",f9,02,2b,35)) { outValue = TGlobal_obj::Pack; return true; }
	if (inName==HX_("PackNormal",00,ea,b6,e9)) { outValue = TGlobal_obj::PackNormal; return true; }
	if (inName==HX_("Pow",78,15,3d,00)) { outValue = TGlobal_obj::Pow; return true; }
	if (inName==HX_("Radians",52,6e,41,f4)) { outValue = TGlobal_obj::Radians; return true; }
	if (inName==HX_("Saturate",0f,0c,e9,57)) { outValue = TGlobal_obj::Saturate; return true; }
	if (inName==HX_("ScreenToUv",68,d6,e8,bb)) { outValue = TGlobal_obj::ScreenToUv; return true; }
	if (inName==HX_("Sign",5d,bc,2c,37)) { outValue = TGlobal_obj::Sign; return true; }
	if (inName==HX_("Sin",f8,56,3f,00)) { outValue = TGlobal_obj::Sin; return true; }
	if (inName==HX_("Smoothstep",9a,a2,0a,8d)) { outValue = TGlobal_obj::Smoothstep; return true; }
	if (inName==HX_("Sqrt",00,d8,32,37)) { outValue = TGlobal_obj::Sqrt; return true; }
	if (inName==HX_("Step",6c,13,35,37)) { outValue = TGlobal_obj::Step; return true; }
	if (inName==HX_("Tan",41,12,40,00)) { outValue = TGlobal_obj::Tan; return true; }
	if (inName==HX_("Texel",ee,ad,c6,a0)) { outValue = TGlobal_obj::Texel; return true; }
	if (inName==HX_("Texture",bb,f0,31,6c)) { outValue = TGlobal_obj::Texture; return true; }
	if (inName==HX_("TextureLod",86,02,79,a7)) { outValue = TGlobal_obj::TextureLod; return true; }
	if (inName==HX_("TextureSize",1c,37,05,e7)) { outValue = TGlobal_obj::TextureSize; return true; }
	if (inName==HX_("ToBool",65,63,69,ab)) { outValue = TGlobal_obj::ToBool; return true; }
	if (inName==HX_("ToFloat",01,3a,6c,9c)) { outValue = TGlobal_obj::ToFloat; return true; }
	if (inName==HX_("ToInt",14,2e,3f,a7)) { outValue = TGlobal_obj::ToInt; return true; }
	if (inName==HX_("Trace",65,fe,4c,a9)) { outValue = TGlobal_obj::Trace; return true; }
	if (inName==HX_("Unpack",d2,51,bb,9c)) { outValue = TGlobal_obj::Unpack; return true; }
	if (inName==HX_("UnpackNormal",99,61,27,27)) { outValue = TGlobal_obj::UnpackNormal; return true; }
	if (inName==HX_("UvToScreen",e8,d2,4d,5c)) { outValue = TGlobal_obj::UvToScreen; return true; }
	if (inName==HX_("Vec2",7e,53,25,39)) { outValue = TGlobal_obj::Vec2; return true; }
	if (inName==HX_("Vec3",7f,53,25,39)) { outValue = TGlobal_obj::Vec3; return true; }
	if (inName==HX_("Vec4",80,53,25,39)) { outValue = TGlobal_obj::Vec4; return true; }
	if (inName==HX_("VertexID",5f,78,32,41)) { outValue = TGlobal_obj::VertexID; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TGlobal_obj)

int TGlobal_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Abs",52,a8,31,00)) return 15;
	if (inName==HX_("Acos",a6,5e,42,2b)) return 6;
	if (inName==HX_("Asin",77,7d,4e,2b)) return 5;
	if (inName==HX_("Atan",c0,38,4f,2b)) return 7;
	if (inName==HX_("BVec2",c0,9c,97,39)) return 46;
	if (inName==HX_("BVec3",c1,9c,97,39)) return 47;
	if (inName==HX_("BVec4",c2,9c,97,39)) return 48;
	if (inName==HX_("Ceil",25,4b,96,2c)) return 18;
	if (inName==HX_("ChannelFetch",97,2c,bf,ca)) return 65;
	if (inName==HX_("ChannelRead",99,2d,a8,ff)) return 63;
	if (inName==HX_("ChannelReadLod",68,a4,4d,5d)) return 64;
	if (inName==HX_("ChannelTextureSize",59,db,c5,4f)) return 66;
	if (inName==HX_("Clamp",db,e2,85,db)) return 23;
	if (inName==HX_("Cos",27,38,33,00)) return 3;
	if (inName==HX_("Cross",60,cf,87,df)) return 30;
	if (inName==HX_("DFdx",96,f7,27,2d)) return 60;
	if (inName==HX_("DFdy",97,f7,27,2d)) return 61;
	if (inName==HX_("Degrees",87,0b,ac,07)) return 1;
	if (inName==HX_("Distance",55,4f,ab,45)) return 28;
	if (inName==HX_("Dot",69,fa,33,00)) return 29;
	if (inName==HX_("Exp",7d,c4,34,00)) return 9;
	if (inName==HX_("Exp2",15,29,f7,2d)) return 11;
	if (inName==HX_("Floor",ac,41,c4,95)) return 17;
	if (inName==HX_("Fract",66,df,b0,99)) return 19;
	if (inName==HX_("FragCoord",03,dc,69,f4)) return 70;
	if (inName==HX_("FrontFacing",83,c8,a7,d8)) return 71;
	if (inName==HX_("Fwidth",00,f8,5d,c7)) return 62;
	if (inName==HX_("IVec2",47,ac,65,41)) return 43;
	if (inName==HX_("IVec3",48,ac,65,41)) return 44;
	if (inName==HX_("IVec4",49,ac,65,41)) return 45;
	if (inName==HX_("InstanceID",d0,32,c9,62)) return 69;
	if (inName==HX_("Inversesqrt",70,27,05,1f)) return 14;
	if (inName==HX_("LReflect",51,8d,74,b1)) return 32;
	if (inName==HX_("Length",06,09,9c,d3)) return 27;
	if (inName==HX_("Log",64,0c,3a,00)) return 10;
	if (inName==HX_("Log2",4e,cb,90,32)) return 12;
	if (inName==HX_("Mat2",b2,6d,2f,33)) return 49;
	if (inName==HX_("Mat3",b3,6d,2f,33)) return 50;
	if (inName==HX_("Mat3x4",2f,e9,2c,f0)) return 52;
	if (inName==HX_("Mat4",b4,6d,2f,33)) return 51;
	if (inName==HX_("Max",84,c2,3a,00)) return 22;
	if (inName==HX_("Min",72,c9,3a,00)) return 21;
	if (inName==HX_("Mix",7c,c9,3a,00)) return 24;
	if (inName==HX_("Mod",a2,ce,3a,00)) return 20;
	if (inName==HX_("Normalize",6d,17,74,4d)) return 31;
	if (inName==HX_("Pack",f9,02,2b,35)) return 54;
	if (inName==HX_("PackNormal",00,ea,b6,e9)) return 56;
	if (inName==HX_("Pow",78,15,3d,00)) return 8;
	if (inName==HX_("Radians",52,6e,41,f4)) return 0;
	if (inName==HX_("Saturate",0f,0c,e9,57)) return 53;
	if (inName==HX_("ScreenToUv",68,d6,e8,bb)) return 58;
	if (inName==HX_("Sign",5d,bc,2c,37)) return 16;
	if (inName==HX_("Sin",f8,56,3f,00)) return 2;
	if (inName==HX_("Smoothstep",9a,a2,0a,8d)) return 26;
	if (inName==HX_("Sqrt",00,d8,32,37)) return 13;
	if (inName==HX_("Step",6c,13,35,37)) return 25;
	if (inName==HX_("Tan",41,12,40,00)) return 4;
	if (inName==HX_("Texel",ee,ad,c6,a0)) return 35;
	if (inName==HX_("Texture",bb,f0,31,6c)) return 33;
	if (inName==HX_("TextureLod",86,02,79,a7)) return 34;
	if (inName==HX_("TextureSize",1c,37,05,e7)) return 36;
	if (inName==HX_("ToBool",65,63,69,ab)) return 39;
	if (inName==HX_("ToFloat",01,3a,6c,9c)) return 38;
	if (inName==HX_("ToInt",14,2e,3f,a7)) return 37;
	if (inName==HX_("Trace",65,fe,4c,a9)) return 67;
	if (inName==HX_("Unpack",d2,51,bb,9c)) return 55;
	if (inName==HX_("UnpackNormal",99,61,27,27)) return 57;
	if (inName==HX_("UvToScreen",e8,d2,4d,5c)) return 59;
	if (inName==HX_("Vec2",7e,53,25,39)) return 40;
	if (inName==HX_("Vec3",7f,53,25,39)) return 41;
	if (inName==HX_("Vec4",80,53,25,39)) return 42;
	if (inName==HX_("VertexID",5f,78,32,41)) return 68;
	return super::__FindIndex(inName);
}

int TGlobal_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Abs",52,a8,31,00)) return 0;
	if (inName==HX_("Acos",a6,5e,42,2b)) return 0;
	if (inName==HX_("Asin",77,7d,4e,2b)) return 0;
	if (inName==HX_("Atan",c0,38,4f,2b)) return 0;
	if (inName==HX_("BVec2",c0,9c,97,39)) return 0;
	if (inName==HX_("BVec3",c1,9c,97,39)) return 0;
	if (inName==HX_("BVec4",c2,9c,97,39)) return 0;
	if (inName==HX_("Ceil",25,4b,96,2c)) return 0;
	if (inName==HX_("ChannelFetch",97,2c,bf,ca)) return 0;
	if (inName==HX_("ChannelRead",99,2d,a8,ff)) return 0;
	if (inName==HX_("ChannelReadLod",68,a4,4d,5d)) return 0;
	if (inName==HX_("ChannelTextureSize",59,db,c5,4f)) return 0;
	if (inName==HX_("Clamp",db,e2,85,db)) return 0;
	if (inName==HX_("Cos",27,38,33,00)) return 0;
	if (inName==HX_("Cross",60,cf,87,df)) return 0;
	if (inName==HX_("DFdx",96,f7,27,2d)) return 0;
	if (inName==HX_("DFdy",97,f7,27,2d)) return 0;
	if (inName==HX_("Degrees",87,0b,ac,07)) return 0;
	if (inName==HX_("Distance",55,4f,ab,45)) return 0;
	if (inName==HX_("Dot",69,fa,33,00)) return 0;
	if (inName==HX_("Exp",7d,c4,34,00)) return 0;
	if (inName==HX_("Exp2",15,29,f7,2d)) return 0;
	if (inName==HX_("Floor",ac,41,c4,95)) return 0;
	if (inName==HX_("Fract",66,df,b0,99)) return 0;
	if (inName==HX_("FragCoord",03,dc,69,f4)) return 0;
	if (inName==HX_("FrontFacing",83,c8,a7,d8)) return 0;
	if (inName==HX_("Fwidth",00,f8,5d,c7)) return 0;
	if (inName==HX_("IVec2",47,ac,65,41)) return 0;
	if (inName==HX_("IVec3",48,ac,65,41)) return 0;
	if (inName==HX_("IVec4",49,ac,65,41)) return 0;
	if (inName==HX_("InstanceID",d0,32,c9,62)) return 0;
	if (inName==HX_("Inversesqrt",70,27,05,1f)) return 0;
	if (inName==HX_("LReflect",51,8d,74,b1)) return 0;
	if (inName==HX_("Length",06,09,9c,d3)) return 0;
	if (inName==HX_("Log",64,0c,3a,00)) return 0;
	if (inName==HX_("Log2",4e,cb,90,32)) return 0;
	if (inName==HX_("Mat2",b2,6d,2f,33)) return 0;
	if (inName==HX_("Mat3",b3,6d,2f,33)) return 0;
	if (inName==HX_("Mat3x4",2f,e9,2c,f0)) return 0;
	if (inName==HX_("Mat4",b4,6d,2f,33)) return 0;
	if (inName==HX_("Max",84,c2,3a,00)) return 0;
	if (inName==HX_("Min",72,c9,3a,00)) return 0;
	if (inName==HX_("Mix",7c,c9,3a,00)) return 0;
	if (inName==HX_("Mod",a2,ce,3a,00)) return 0;
	if (inName==HX_("Normalize",6d,17,74,4d)) return 0;
	if (inName==HX_("Pack",f9,02,2b,35)) return 0;
	if (inName==HX_("PackNormal",00,ea,b6,e9)) return 0;
	if (inName==HX_("Pow",78,15,3d,00)) return 0;
	if (inName==HX_("Radians",52,6e,41,f4)) return 0;
	if (inName==HX_("Saturate",0f,0c,e9,57)) return 0;
	if (inName==HX_("ScreenToUv",68,d6,e8,bb)) return 0;
	if (inName==HX_("Sign",5d,bc,2c,37)) return 0;
	if (inName==HX_("Sin",f8,56,3f,00)) return 0;
	if (inName==HX_("Smoothstep",9a,a2,0a,8d)) return 0;
	if (inName==HX_("Sqrt",00,d8,32,37)) return 0;
	if (inName==HX_("Step",6c,13,35,37)) return 0;
	if (inName==HX_("Tan",41,12,40,00)) return 0;
	if (inName==HX_("Texel",ee,ad,c6,a0)) return 0;
	if (inName==HX_("Texture",bb,f0,31,6c)) return 0;
	if (inName==HX_("TextureLod",86,02,79,a7)) return 0;
	if (inName==HX_("TextureSize",1c,37,05,e7)) return 0;
	if (inName==HX_("ToBool",65,63,69,ab)) return 0;
	if (inName==HX_("ToFloat",01,3a,6c,9c)) return 0;
	if (inName==HX_("ToInt",14,2e,3f,a7)) return 0;
	if (inName==HX_("Trace",65,fe,4c,a9)) return 0;
	if (inName==HX_("Unpack",d2,51,bb,9c)) return 0;
	if (inName==HX_("UnpackNormal",99,61,27,27)) return 0;
	if (inName==HX_("UvToScreen",e8,d2,4d,5c)) return 0;
	if (inName==HX_("Vec2",7e,53,25,39)) return 0;
	if (inName==HX_("Vec3",7f,53,25,39)) return 0;
	if (inName==HX_("Vec4",80,53,25,39)) return 0;
	if (inName==HX_("VertexID",5f,78,32,41)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val TGlobal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Abs",52,a8,31,00)) return Abs;
	if (inName==HX_("Acos",a6,5e,42,2b)) return Acos;
	if (inName==HX_("Asin",77,7d,4e,2b)) return Asin;
	if (inName==HX_("Atan",c0,38,4f,2b)) return Atan;
	if (inName==HX_("BVec2",c0,9c,97,39)) return BVec2;
	if (inName==HX_("BVec3",c1,9c,97,39)) return BVec3;
	if (inName==HX_("BVec4",c2,9c,97,39)) return BVec4;
	if (inName==HX_("Ceil",25,4b,96,2c)) return Ceil;
	if (inName==HX_("ChannelFetch",97,2c,bf,ca)) return ChannelFetch;
	if (inName==HX_("ChannelRead",99,2d,a8,ff)) return ChannelRead;
	if (inName==HX_("ChannelReadLod",68,a4,4d,5d)) return ChannelReadLod;
	if (inName==HX_("ChannelTextureSize",59,db,c5,4f)) return ChannelTextureSize;
	if (inName==HX_("Clamp",db,e2,85,db)) return Clamp;
	if (inName==HX_("Cos",27,38,33,00)) return Cos;
	if (inName==HX_("Cross",60,cf,87,df)) return Cross;
	if (inName==HX_("DFdx",96,f7,27,2d)) return DFdx;
	if (inName==HX_("DFdy",97,f7,27,2d)) return DFdy;
	if (inName==HX_("Degrees",87,0b,ac,07)) return Degrees;
	if (inName==HX_("Distance",55,4f,ab,45)) return Distance;
	if (inName==HX_("Dot",69,fa,33,00)) return Dot;
	if (inName==HX_("Exp",7d,c4,34,00)) return Exp;
	if (inName==HX_("Exp2",15,29,f7,2d)) return Exp2;
	if (inName==HX_("Floor",ac,41,c4,95)) return Floor;
	if (inName==HX_("Fract",66,df,b0,99)) return Fract;
	if (inName==HX_("FragCoord",03,dc,69,f4)) return FragCoord;
	if (inName==HX_("FrontFacing",83,c8,a7,d8)) return FrontFacing;
	if (inName==HX_("Fwidth",00,f8,5d,c7)) return Fwidth;
	if (inName==HX_("IVec2",47,ac,65,41)) return IVec2;
	if (inName==HX_("IVec3",48,ac,65,41)) return IVec3;
	if (inName==HX_("IVec4",49,ac,65,41)) return IVec4;
	if (inName==HX_("InstanceID",d0,32,c9,62)) return InstanceID;
	if (inName==HX_("Inversesqrt",70,27,05,1f)) return Inversesqrt;
	if (inName==HX_("LReflect",51,8d,74,b1)) return LReflect;
	if (inName==HX_("Length",06,09,9c,d3)) return Length;
	if (inName==HX_("Log",64,0c,3a,00)) return Log;
	if (inName==HX_("Log2",4e,cb,90,32)) return Log2;
	if (inName==HX_("Mat2",b2,6d,2f,33)) return Mat2;
	if (inName==HX_("Mat3",b3,6d,2f,33)) return Mat3;
	if (inName==HX_("Mat3x4",2f,e9,2c,f0)) return Mat3x4;
	if (inName==HX_("Mat4",b4,6d,2f,33)) return Mat4;
	if (inName==HX_("Max",84,c2,3a,00)) return Max;
	if (inName==HX_("Min",72,c9,3a,00)) return Min;
	if (inName==HX_("Mix",7c,c9,3a,00)) return Mix;
	if (inName==HX_("Mod",a2,ce,3a,00)) return Mod;
	if (inName==HX_("Normalize",6d,17,74,4d)) return Normalize;
	if (inName==HX_("Pack",f9,02,2b,35)) return Pack;
	if (inName==HX_("PackNormal",00,ea,b6,e9)) return PackNormal;
	if (inName==HX_("Pow",78,15,3d,00)) return Pow;
	if (inName==HX_("Radians",52,6e,41,f4)) return Radians;
	if (inName==HX_("Saturate",0f,0c,e9,57)) return Saturate;
	if (inName==HX_("ScreenToUv",68,d6,e8,bb)) return ScreenToUv;
	if (inName==HX_("Sign",5d,bc,2c,37)) return Sign;
	if (inName==HX_("Sin",f8,56,3f,00)) return Sin;
	if (inName==HX_("Smoothstep",9a,a2,0a,8d)) return Smoothstep;
	if (inName==HX_("Sqrt",00,d8,32,37)) return Sqrt;
	if (inName==HX_("Step",6c,13,35,37)) return Step;
	if (inName==HX_("Tan",41,12,40,00)) return Tan;
	if (inName==HX_("Texel",ee,ad,c6,a0)) return Texel;
	if (inName==HX_("Texture",bb,f0,31,6c)) return Texture;
	if (inName==HX_("TextureLod",86,02,79,a7)) return TextureLod;
	if (inName==HX_("TextureSize",1c,37,05,e7)) return TextureSize;
	if (inName==HX_("ToBool",65,63,69,ab)) return ToBool;
	if (inName==HX_("ToFloat",01,3a,6c,9c)) return ToFloat;
	if (inName==HX_("ToInt",14,2e,3f,a7)) return ToInt;
	if (inName==HX_("Trace",65,fe,4c,a9)) return Trace;
	if (inName==HX_("Unpack",d2,51,bb,9c)) return Unpack;
	if (inName==HX_("UnpackNormal",99,61,27,27)) return UnpackNormal;
	if (inName==HX_("UvToScreen",e8,d2,4d,5c)) return UvToScreen;
	if (inName==HX_("Vec2",7e,53,25,39)) return Vec2;
	if (inName==HX_("Vec3",7f,53,25,39)) return Vec3;
	if (inName==HX_("Vec4",80,53,25,39)) return Vec4;
	if (inName==HX_("VertexID",5f,78,32,41)) return VertexID;
	return super::__Field(inName,inCallProp);
}

static ::String TGlobal_obj_sStaticFields[] = {
	HX_("Radians",52,6e,41,f4),
	HX_("Degrees",87,0b,ac,07),
	HX_("Sin",f8,56,3f,00),
	HX_("Cos",27,38,33,00),
	HX_("Tan",41,12,40,00),
	HX_("Asin",77,7d,4e,2b),
	HX_("Acos",a6,5e,42,2b),
	HX_("Atan",c0,38,4f,2b),
	HX_("Pow",78,15,3d,00),
	HX_("Exp",7d,c4,34,00),
	HX_("Log",64,0c,3a,00),
	HX_("Exp2",15,29,f7,2d),
	HX_("Log2",4e,cb,90,32),
	HX_("Sqrt",00,d8,32,37),
	HX_("Inversesqrt",70,27,05,1f),
	HX_("Abs",52,a8,31,00),
	HX_("Sign",5d,bc,2c,37),
	HX_("Floor",ac,41,c4,95),
	HX_("Ceil",25,4b,96,2c),
	HX_("Fract",66,df,b0,99),
	HX_("Mod",a2,ce,3a,00),
	HX_("Min",72,c9,3a,00),
	HX_("Max",84,c2,3a,00),
	HX_("Clamp",db,e2,85,db),
	HX_("Mix",7c,c9,3a,00),
	HX_("Step",6c,13,35,37),
	HX_("Smoothstep",9a,a2,0a,8d),
	HX_("Length",06,09,9c,d3),
	HX_("Distance",55,4f,ab,45),
	HX_("Dot",69,fa,33,00),
	HX_("Cross",60,cf,87,df),
	HX_("Normalize",6d,17,74,4d),
	HX_("LReflect",51,8d,74,b1),
	HX_("Texture",bb,f0,31,6c),
	HX_("TextureLod",86,02,79,a7),
	HX_("Texel",ee,ad,c6,a0),
	HX_("TextureSize",1c,37,05,e7),
	HX_("ToInt",14,2e,3f,a7),
	HX_("ToFloat",01,3a,6c,9c),
	HX_("ToBool",65,63,69,ab),
	HX_("Vec2",7e,53,25,39),
	HX_("Vec3",7f,53,25,39),
	HX_("Vec4",80,53,25,39),
	HX_("IVec2",47,ac,65,41),
	HX_("IVec3",48,ac,65,41),
	HX_("IVec4",49,ac,65,41),
	HX_("BVec2",c0,9c,97,39),
	HX_("BVec3",c1,9c,97,39),
	HX_("BVec4",c2,9c,97,39),
	HX_("Mat2",b2,6d,2f,33),
	HX_("Mat3",b3,6d,2f,33),
	HX_("Mat4",b4,6d,2f,33),
	HX_("Mat3x4",2f,e9,2c,f0),
	HX_("Saturate",0f,0c,e9,57),
	HX_("Pack",f9,02,2b,35),
	HX_("Unpack",d2,51,bb,9c),
	HX_("PackNormal",00,ea,b6,e9),
	HX_("UnpackNormal",99,61,27,27),
	HX_("ScreenToUv",68,d6,e8,bb),
	HX_("UvToScreen",e8,d2,4d,5c),
	HX_("DFdx",96,f7,27,2d),
	HX_("DFdy",97,f7,27,2d),
	HX_("Fwidth",00,f8,5d,c7),
	HX_("ChannelRead",99,2d,a8,ff),
	HX_("ChannelReadLod",68,a4,4d,5d),
	HX_("ChannelFetch",97,2c,bf,ca),
	HX_("ChannelTextureSize",59,db,c5,4f),
	HX_("Trace",65,fe,4c,a9),
	HX_("VertexID",5f,78,32,41),
	HX_("InstanceID",d0,32,c9,62),
	HX_("FragCoord",03,dc,69,f4),
	HX_("FrontFacing",83,c8,a7,d8),
	::String(null())
};

::hx::Class TGlobal_obj::__mClass;

Dynamic __Create_TGlobal_obj() { return new TGlobal_obj; }

void TGlobal_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.TGlobal",12,13,b5,45), ::hx::TCanCast< TGlobal_obj >,TGlobal_obj_sStaticFields,0,
	&__Create_TGlobal_obj, &__Create,
	&super::__SGetClass(), &CreateTGlobal_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TGlobal_obj::__GetStatic;
}

void TGlobal_obj::__boot()
{
Abs = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Abs",52,a8,31,00),15);
Acos = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Acos",a6,5e,42,2b),6);
Asin = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Asin",77,7d,4e,2b),5);
Atan = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Atan",c0,38,4f,2b),7);
BVec2 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("BVec2",c0,9c,97,39),46);
BVec3 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("BVec3",c1,9c,97,39),47);
BVec4 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("BVec4",c2,9c,97,39),48);
Ceil = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Ceil",25,4b,96,2c),18);
ChannelFetch = ::hx::CreateConstEnum< TGlobal_obj >(HX_("ChannelFetch",97,2c,bf,ca),65);
ChannelRead = ::hx::CreateConstEnum< TGlobal_obj >(HX_("ChannelRead",99,2d,a8,ff),63);
ChannelReadLod = ::hx::CreateConstEnum< TGlobal_obj >(HX_("ChannelReadLod",68,a4,4d,5d),64);
ChannelTextureSize = ::hx::CreateConstEnum< TGlobal_obj >(HX_("ChannelTextureSize",59,db,c5,4f),66);
Clamp = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Clamp",db,e2,85,db),23);
Cos = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Cos",27,38,33,00),3);
Cross = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Cross",60,cf,87,df),30);
DFdx = ::hx::CreateConstEnum< TGlobal_obj >(HX_("DFdx",96,f7,27,2d),60);
DFdy = ::hx::CreateConstEnum< TGlobal_obj >(HX_("DFdy",97,f7,27,2d),61);
Degrees = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Degrees",87,0b,ac,07),1);
Distance = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Distance",55,4f,ab,45),28);
Dot = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Dot",69,fa,33,00),29);
Exp = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Exp",7d,c4,34,00),9);
Exp2 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Exp2",15,29,f7,2d),11);
Floor = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Floor",ac,41,c4,95),17);
Fract = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Fract",66,df,b0,99),19);
FragCoord = ::hx::CreateConstEnum< TGlobal_obj >(HX_("FragCoord",03,dc,69,f4),70);
FrontFacing = ::hx::CreateConstEnum< TGlobal_obj >(HX_("FrontFacing",83,c8,a7,d8),71);
Fwidth = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Fwidth",00,f8,5d,c7),62);
IVec2 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("IVec2",47,ac,65,41),43);
IVec3 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("IVec3",48,ac,65,41),44);
IVec4 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("IVec4",49,ac,65,41),45);
InstanceID = ::hx::CreateConstEnum< TGlobal_obj >(HX_("InstanceID",d0,32,c9,62),69);
Inversesqrt = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Inversesqrt",70,27,05,1f),14);
LReflect = ::hx::CreateConstEnum< TGlobal_obj >(HX_("LReflect",51,8d,74,b1),32);
Length = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Length",06,09,9c,d3),27);
Log = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Log",64,0c,3a,00),10);
Log2 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Log2",4e,cb,90,32),12);
Mat2 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Mat2",b2,6d,2f,33),49);
Mat3 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Mat3",b3,6d,2f,33),50);
Mat3x4 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Mat3x4",2f,e9,2c,f0),52);
Mat4 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Mat4",b4,6d,2f,33),51);
Max = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Max",84,c2,3a,00),22);
Min = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Min",72,c9,3a,00),21);
Mix = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Mix",7c,c9,3a,00),24);
Mod = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Mod",a2,ce,3a,00),20);
Normalize = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Normalize",6d,17,74,4d),31);
Pack = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Pack",f9,02,2b,35),54);
PackNormal = ::hx::CreateConstEnum< TGlobal_obj >(HX_("PackNormal",00,ea,b6,e9),56);
Pow = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Pow",78,15,3d,00),8);
Radians = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Radians",52,6e,41,f4),0);
Saturate = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Saturate",0f,0c,e9,57),53);
ScreenToUv = ::hx::CreateConstEnum< TGlobal_obj >(HX_("ScreenToUv",68,d6,e8,bb),58);
Sign = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Sign",5d,bc,2c,37),16);
Sin = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Sin",f8,56,3f,00),2);
Smoothstep = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Smoothstep",9a,a2,0a,8d),26);
Sqrt = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Sqrt",00,d8,32,37),13);
Step = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Step",6c,13,35,37),25);
Tan = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Tan",41,12,40,00),4);
Texel = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Texel",ee,ad,c6,a0),35);
Texture = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Texture",bb,f0,31,6c),33);
TextureLod = ::hx::CreateConstEnum< TGlobal_obj >(HX_("TextureLod",86,02,79,a7),34);
TextureSize = ::hx::CreateConstEnum< TGlobal_obj >(HX_("TextureSize",1c,37,05,e7),36);
ToBool = ::hx::CreateConstEnum< TGlobal_obj >(HX_("ToBool",65,63,69,ab),39);
ToFloat = ::hx::CreateConstEnum< TGlobal_obj >(HX_("ToFloat",01,3a,6c,9c),38);
ToInt = ::hx::CreateConstEnum< TGlobal_obj >(HX_("ToInt",14,2e,3f,a7),37);
Trace = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Trace",65,fe,4c,a9),67);
Unpack = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Unpack",d2,51,bb,9c),55);
UnpackNormal = ::hx::CreateConstEnum< TGlobal_obj >(HX_("UnpackNormal",99,61,27,27),57);
UvToScreen = ::hx::CreateConstEnum< TGlobal_obj >(HX_("UvToScreen",e8,d2,4d,5c),59);
Vec2 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Vec2",7e,53,25,39),40);
Vec3 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Vec3",7f,53,25,39),41);
Vec4 = ::hx::CreateConstEnum< TGlobal_obj >(HX_("Vec4",80,53,25,39),42);
VertexID = ::hx::CreateConstEnum< TGlobal_obj >(HX_("VertexID",5f,78,32,41),68);
}


} // end namespace hxsl
