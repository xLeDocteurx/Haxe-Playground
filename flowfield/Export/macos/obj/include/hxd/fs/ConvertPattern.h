#ifndef INCLUDED_hxd_fs_ConvertPattern
#define INCLUDED_hxd_fs_ConvertPattern

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(hxd,fs,ConvertPattern)
namespace hxd{
namespace fs{


class ConvertPattern_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ConvertPattern_obj OBJ_;

	public:
		ConvertPattern_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.fs.ConvertPattern",24,37,fe,4f); }
		::String __ToString() const { return HX_("ConvertPattern.",d1,ec,a1,cc) + _hx_tag; }

		static ::hxd::fs::ConvertPattern Ext(::String e);
		static ::Dynamic Ext_dyn();
		static ::hxd::fs::ConvertPattern Exts(::Array< ::String > e);
		static ::Dynamic Exts_dyn();
		static ::hxd::fs::ConvertPattern Filename(::String name);
		static ::Dynamic Filename_dyn();
		static ::hxd::fs::ConvertPattern Regexp( ::EReg r);
		static ::Dynamic Regexp_dyn();
		static ::hxd::fs::ConvertPattern Wildcard;
		static inline ::hxd::fs::ConvertPattern Wildcard_dyn() { return Wildcard; }
};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_ConvertPattern */ 
