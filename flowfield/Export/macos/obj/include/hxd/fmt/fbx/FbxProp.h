#ifndef INCLUDED_hxd_fmt_fbx_FbxProp
#define INCLUDED_hxd_fmt_fbx_FbxProp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,fmt,fbx,FbxProp)
namespace hxd{
namespace fmt{
namespace fbx{


class FbxProp_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FbxProp_obj OBJ_;

	public:
		FbxProp_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.fmt.fbx.FbxProp",f2,14,3a,42); }
		::String __ToString() const { return HX_("FbxProp.",ef,4d,93,e5) + _hx_tag; }

		static ::hxd::fmt::fbx::FbxProp PBinary( ::haxe::io::Bytes v);
		static ::Dynamic PBinary_dyn();
		static ::hxd::fmt::fbx::FbxProp PFloat(Float v);
		static ::Dynamic PFloat_dyn();
		static ::hxd::fmt::fbx::FbxProp PFloats(::Array< Float > v);
		static ::Dynamic PFloats_dyn();
		static ::hxd::fmt::fbx::FbxProp PIdent(::String i);
		static ::Dynamic PIdent_dyn();
		static ::hxd::fmt::fbx::FbxProp PInt(int v);
		static ::Dynamic PInt_dyn();
		static ::hxd::fmt::fbx::FbxProp PInts(::Array< int > v);
		static ::Dynamic PInts_dyn();
		static ::hxd::fmt::fbx::FbxProp PString(::String v);
		static ::Dynamic PString_dyn();
};

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx

#endif /* INCLUDED_hxd_fmt_fbx_FbxProp */ 
