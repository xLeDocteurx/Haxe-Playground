#ifndef INCLUDED_format_wav_WAVEFormat
#define INCLUDED_format_wav_WAVEFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,wav,WAVEFormat)
namespace format{
namespace wav{


class WAVEFormat_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef WAVEFormat_obj OBJ_;

	public:
		WAVEFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.wav.WAVEFormat",29,b9,67,d3); }
		::String __ToString() const { return HX_("WAVEFormat.",5e,d4,b0,92) + _hx_tag; }

		static ::format::wav::WAVEFormat WF_PCM;
		static inline ::format::wav::WAVEFormat WF_PCM_dyn() { return WF_PCM; }
};

} // end namespace format
} // end namespace wav

#endif /* INCLUDED_format_wav_WAVEFormat */ 
