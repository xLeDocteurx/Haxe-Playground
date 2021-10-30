#ifndef INCLUDED_format_gif_ApplicationExtension
#define INCLUDED_format_gif_ApplicationExtension

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gif,ApplicationExtension)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace format{
namespace gif{


class ApplicationExtension_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ApplicationExtension_obj OBJ_;

	public:
		ApplicationExtension_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.gif.ApplicationExtension",f0,e8,48,ef); }
		::String __ToString() const { return HX_("ApplicationExtension.",1f,9f,98,c5) + _hx_tag; }

		static ::format::gif::ApplicationExtension AENetscapeLooping(int loops);
		static ::Dynamic AENetscapeLooping_dyn();
		static ::format::gif::ApplicationExtension AEUnknown(::String name,::String version, ::haxe::io::Bytes data);
		static ::Dynamic AEUnknown_dyn();
};

} // end namespace format
} // end namespace gif

#endif /* INCLUDED_format_gif_ApplicationExtension */ 
