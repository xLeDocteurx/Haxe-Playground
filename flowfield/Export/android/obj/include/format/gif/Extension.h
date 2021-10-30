#ifndef INCLUDED_format_gif_Extension
#define INCLUDED_format_gif_Extension

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gif,ApplicationExtension)
HX_DECLARE_CLASS2(format,gif,Extension)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace format{
namespace gif{


class Extension_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Extension_obj OBJ_;

	public:
		Extension_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.gif.Extension",fe,4a,59,5a); }
		::String __ToString() const { return HX_("Extension.",ef,7f,21,80) + _hx_tag; }

		static ::format::gif::Extension EApplicationExtension( ::format::gif::ApplicationExtension ext);
		static ::Dynamic EApplicationExtension_dyn();
		static ::format::gif::Extension EComment(::String text);
		static ::Dynamic EComment_dyn();
		static ::format::gif::Extension EGraphicControl( ::Dynamic gce);
		static ::Dynamic EGraphicControl_dyn();
		static ::format::gif::Extension EText( ::Dynamic pte);
		static ::Dynamic EText_dyn();
		static ::format::gif::Extension EUnknown(int id, ::haxe::io::Bytes data);
		static ::Dynamic EUnknown_dyn();
};

} // end namespace format
} // end namespace gif

#endif /* INCLUDED_format_gif_Extension */ 
