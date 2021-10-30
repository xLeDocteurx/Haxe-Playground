#ifndef INCLUDED_format_mp3_FrameType
#define INCLUDED_format_mp3_FrameType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,FrameType)
namespace format{
namespace mp3{


class FrameType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FrameType_obj OBJ_;

	public:
		FrameType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.mp3.FrameType",72,fb,41,72); }
		::String __ToString() const { return HX_("FrameType.",e7,a8,a2,f4) + _hx_tag; }

		static ::format::mp3::FrameType FT_MP3;
		static inline ::format::mp3::FrameType FT_MP3_dyn() { return FT_MP3; }
		static ::format::mp3::FrameType FT_NONE;
		static inline ::format::mp3::FrameType FT_NONE_dyn() { return FT_NONE; }
};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_FrameType */ 
