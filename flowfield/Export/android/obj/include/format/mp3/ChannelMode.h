#ifndef INCLUDED_format_mp3_ChannelMode
#define INCLUDED_format_mp3_ChannelMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,ChannelMode)
namespace format{
namespace mp3{


class ChannelMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ChannelMode_obj OBJ_;

	public:
		ChannelMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.mp3.ChannelMode",71,f8,fd,e5); }
		::String __ToString() const { return HX_("ChannelMode.",c8,3b,1d,d9) + _hx_tag; }

		static ::format::mp3::ChannelMode DualChannel;
		static inline ::format::mp3::ChannelMode DualChannel_dyn() { return DualChannel; }
		static ::format::mp3::ChannelMode JointStereo;
		static inline ::format::mp3::ChannelMode JointStereo_dyn() { return JointStereo; }
		static ::format::mp3::ChannelMode Mono;
		static inline ::format::mp3::ChannelMode Mono_dyn() { return Mono; }
		static ::format::mp3::ChannelMode Stereo;
		static inline ::format::mp3::ChannelMode Stereo_dyn() { return Stereo; }
};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_ChannelMode */ 
