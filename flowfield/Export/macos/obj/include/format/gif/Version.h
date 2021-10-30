#ifndef INCLUDED_format_gif_Version
#define INCLUDED_format_gif_Version

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gif,Version)
namespace format{
namespace gif{


class Version_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Version_obj OBJ_;

	public:
		Version_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.gif.Version",d7,70,f5,c2); }
		::String __ToString() const { return HX_("Version.",36,0a,6a,b0) + _hx_tag; }

		static ::format::gif::Version GIF87a;
		static inline ::format::gif::Version GIF87a_dyn() { return GIF87a; }
		static ::format::gif::Version GIF89a;
		static inline ::format::gif::Version GIF89a_dyn() { return GIF89a; }
		static ::format::gif::Version Unknown(::String version);
		static ::Dynamic Unknown_dyn();
};

} // end namespace format
} // end namespace gif

#endif /* INCLUDED_format_gif_Version */ 
