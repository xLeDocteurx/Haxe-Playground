#ifndef INCLUDED_hxsl_TGlobal
#define INCLUDED_hxsl_TGlobal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,TGlobal)
namespace hxsl{


class TGlobal_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TGlobal_obj OBJ_;

	public:
		TGlobal_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.TGlobal",12,13,b5,45); }
		::String __ToString() const { return HX_("TGlobal.",77,9f,17,a6) + _hx_tag; }

		static ::hxsl::TGlobal Abs;
		static inline ::hxsl::TGlobal Abs_dyn() { return Abs; }
		static ::hxsl::TGlobal Acos;
		static inline ::hxsl::TGlobal Acos_dyn() { return Acos; }
		static ::hxsl::TGlobal Asin;
		static inline ::hxsl::TGlobal Asin_dyn() { return Asin; }
		static ::hxsl::TGlobal Atan;
		static inline ::hxsl::TGlobal Atan_dyn() { return Atan; }
		static ::hxsl::TGlobal BVec2;
		static inline ::hxsl::TGlobal BVec2_dyn() { return BVec2; }
		static ::hxsl::TGlobal BVec3;
		static inline ::hxsl::TGlobal BVec3_dyn() { return BVec3; }
		static ::hxsl::TGlobal BVec4;
		static inline ::hxsl::TGlobal BVec4_dyn() { return BVec4; }
		static ::hxsl::TGlobal Ceil;
		static inline ::hxsl::TGlobal Ceil_dyn() { return Ceil; }
		static ::hxsl::TGlobal ChannelFetch;
		static inline ::hxsl::TGlobal ChannelFetch_dyn() { return ChannelFetch; }
		static ::hxsl::TGlobal ChannelRead;
		static inline ::hxsl::TGlobal ChannelRead_dyn() { return ChannelRead; }
		static ::hxsl::TGlobal ChannelReadLod;
		static inline ::hxsl::TGlobal ChannelReadLod_dyn() { return ChannelReadLod; }
		static ::hxsl::TGlobal ChannelTextureSize;
		static inline ::hxsl::TGlobal ChannelTextureSize_dyn() { return ChannelTextureSize; }
		static ::hxsl::TGlobal Clamp;
		static inline ::hxsl::TGlobal Clamp_dyn() { return Clamp; }
		static ::hxsl::TGlobal Cos;
		static inline ::hxsl::TGlobal Cos_dyn() { return Cos; }
		static ::hxsl::TGlobal Cross;
		static inline ::hxsl::TGlobal Cross_dyn() { return Cross; }
		static ::hxsl::TGlobal DFdx;
		static inline ::hxsl::TGlobal DFdx_dyn() { return DFdx; }
		static ::hxsl::TGlobal DFdy;
		static inline ::hxsl::TGlobal DFdy_dyn() { return DFdy; }
		static ::hxsl::TGlobal Degrees;
		static inline ::hxsl::TGlobal Degrees_dyn() { return Degrees; }
		static ::hxsl::TGlobal Distance;
		static inline ::hxsl::TGlobal Distance_dyn() { return Distance; }
		static ::hxsl::TGlobal Dot;
		static inline ::hxsl::TGlobal Dot_dyn() { return Dot; }
		static ::hxsl::TGlobal Exp;
		static inline ::hxsl::TGlobal Exp_dyn() { return Exp; }
		static ::hxsl::TGlobal Exp2;
		static inline ::hxsl::TGlobal Exp2_dyn() { return Exp2; }
		static ::hxsl::TGlobal Floor;
		static inline ::hxsl::TGlobal Floor_dyn() { return Floor; }
		static ::hxsl::TGlobal Fract;
		static inline ::hxsl::TGlobal Fract_dyn() { return Fract; }
		static ::hxsl::TGlobal FragCoord;
		static inline ::hxsl::TGlobal FragCoord_dyn() { return FragCoord; }
		static ::hxsl::TGlobal FrontFacing;
		static inline ::hxsl::TGlobal FrontFacing_dyn() { return FrontFacing; }
		static ::hxsl::TGlobal Fwidth;
		static inline ::hxsl::TGlobal Fwidth_dyn() { return Fwidth; }
		static ::hxsl::TGlobal IVec2;
		static inline ::hxsl::TGlobal IVec2_dyn() { return IVec2; }
		static ::hxsl::TGlobal IVec3;
		static inline ::hxsl::TGlobal IVec3_dyn() { return IVec3; }
		static ::hxsl::TGlobal IVec4;
		static inline ::hxsl::TGlobal IVec4_dyn() { return IVec4; }
		static ::hxsl::TGlobal InstanceID;
		static inline ::hxsl::TGlobal InstanceID_dyn() { return InstanceID; }
		static ::hxsl::TGlobal Inversesqrt;
		static inline ::hxsl::TGlobal Inversesqrt_dyn() { return Inversesqrt; }
		static ::hxsl::TGlobal LReflect;
		static inline ::hxsl::TGlobal LReflect_dyn() { return LReflect; }
		static ::hxsl::TGlobal Length;
		static inline ::hxsl::TGlobal Length_dyn() { return Length; }
		static ::hxsl::TGlobal Log;
		static inline ::hxsl::TGlobal Log_dyn() { return Log; }
		static ::hxsl::TGlobal Log2;
		static inline ::hxsl::TGlobal Log2_dyn() { return Log2; }
		static ::hxsl::TGlobal Mat2;
		static inline ::hxsl::TGlobal Mat2_dyn() { return Mat2; }
		static ::hxsl::TGlobal Mat3;
		static inline ::hxsl::TGlobal Mat3_dyn() { return Mat3; }
		static ::hxsl::TGlobal Mat3x4;
		static inline ::hxsl::TGlobal Mat3x4_dyn() { return Mat3x4; }
		static ::hxsl::TGlobal Mat4;
		static inline ::hxsl::TGlobal Mat4_dyn() { return Mat4; }
		static ::hxsl::TGlobal Max;
		static inline ::hxsl::TGlobal Max_dyn() { return Max; }
		static ::hxsl::TGlobal Min;
		static inline ::hxsl::TGlobal Min_dyn() { return Min; }
		static ::hxsl::TGlobal Mix;
		static inline ::hxsl::TGlobal Mix_dyn() { return Mix; }
		static ::hxsl::TGlobal Mod;
		static inline ::hxsl::TGlobal Mod_dyn() { return Mod; }
		static ::hxsl::TGlobal Normalize;
		static inline ::hxsl::TGlobal Normalize_dyn() { return Normalize; }
		static ::hxsl::TGlobal Pack;
		static inline ::hxsl::TGlobal Pack_dyn() { return Pack; }
		static ::hxsl::TGlobal PackNormal;
		static inline ::hxsl::TGlobal PackNormal_dyn() { return PackNormal; }
		static ::hxsl::TGlobal Pow;
		static inline ::hxsl::TGlobal Pow_dyn() { return Pow; }
		static ::hxsl::TGlobal Radians;
		static inline ::hxsl::TGlobal Radians_dyn() { return Radians; }
		static ::hxsl::TGlobal Saturate;
		static inline ::hxsl::TGlobal Saturate_dyn() { return Saturate; }
		static ::hxsl::TGlobal ScreenToUv;
		static inline ::hxsl::TGlobal ScreenToUv_dyn() { return ScreenToUv; }
		static ::hxsl::TGlobal Sign;
		static inline ::hxsl::TGlobal Sign_dyn() { return Sign; }
		static ::hxsl::TGlobal Sin;
		static inline ::hxsl::TGlobal Sin_dyn() { return Sin; }
		static ::hxsl::TGlobal Smoothstep;
		static inline ::hxsl::TGlobal Smoothstep_dyn() { return Smoothstep; }
		static ::hxsl::TGlobal Sqrt;
		static inline ::hxsl::TGlobal Sqrt_dyn() { return Sqrt; }
		static ::hxsl::TGlobal Step;
		static inline ::hxsl::TGlobal Step_dyn() { return Step; }
		static ::hxsl::TGlobal Tan;
		static inline ::hxsl::TGlobal Tan_dyn() { return Tan; }
		static ::hxsl::TGlobal Texel;
		static inline ::hxsl::TGlobal Texel_dyn() { return Texel; }
		static ::hxsl::TGlobal Texture;
		static inline ::hxsl::TGlobal Texture_dyn() { return Texture; }
		static ::hxsl::TGlobal TextureLod;
		static inline ::hxsl::TGlobal TextureLod_dyn() { return TextureLod; }
		static ::hxsl::TGlobal TextureSize;
		static inline ::hxsl::TGlobal TextureSize_dyn() { return TextureSize; }
		static ::hxsl::TGlobal ToBool;
		static inline ::hxsl::TGlobal ToBool_dyn() { return ToBool; }
		static ::hxsl::TGlobal ToFloat;
		static inline ::hxsl::TGlobal ToFloat_dyn() { return ToFloat; }
		static ::hxsl::TGlobal ToInt;
		static inline ::hxsl::TGlobal ToInt_dyn() { return ToInt; }
		static ::hxsl::TGlobal Trace;
		static inline ::hxsl::TGlobal Trace_dyn() { return Trace; }
		static ::hxsl::TGlobal Unpack;
		static inline ::hxsl::TGlobal Unpack_dyn() { return Unpack; }
		static ::hxsl::TGlobal UnpackNormal;
		static inline ::hxsl::TGlobal UnpackNormal_dyn() { return UnpackNormal; }
		static ::hxsl::TGlobal UvToScreen;
		static inline ::hxsl::TGlobal UvToScreen_dyn() { return UvToScreen; }
		static ::hxsl::TGlobal Vec2;
		static inline ::hxsl::TGlobal Vec2_dyn() { return Vec2; }
		static ::hxsl::TGlobal Vec3;
		static inline ::hxsl::TGlobal Vec3_dyn() { return Vec3; }
		static ::hxsl::TGlobal Vec4;
		static inline ::hxsl::TGlobal Vec4_dyn() { return Vec4; }
		static ::hxsl::TGlobal VertexID;
		static inline ::hxsl::TGlobal VertexID_dyn() { return VertexID; }
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_TGlobal */ 
