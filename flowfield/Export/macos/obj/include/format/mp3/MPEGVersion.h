#ifndef INCLUDED_format_mp3_MPEGVersion
#define INCLUDED_format_mp3_MPEGVersion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,MPEGVersion)
namespace format{
namespace mp3{


class MPEGVersion_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef MPEGVersion_obj OBJ_;

	public:
		MPEGVersion_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.mp3.MPEGVersion",de,fd,19,c6); }
		::String __ToString() const { return HX_("MPEGVersion.",bb,f5,85,11) + _hx_tag; }

		static ::format::mp3::MPEGVersion MPEG_Reserved;
		static inline ::format::mp3::MPEGVersion MPEG_Reserved_dyn() { return MPEG_Reserved; }
		static ::format::mp3::MPEGVersion MPEG_V1;
		static inline ::format::mp3::MPEGVersion MPEG_V1_dyn() { return MPEG_V1; }
		static ::format::mp3::MPEGVersion MPEG_V2;
		static inline ::format::mp3::MPEGVersion MPEG_V2_dyn() { return MPEG_V2; }
		static ::format::mp3::MPEGVersion MPEG_V25;
		static inline ::format::mp3::MPEGVersion MPEG_V25_dyn() { return MPEG_V25; }
};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_MPEGVersion */ 
