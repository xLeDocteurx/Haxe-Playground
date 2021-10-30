#ifndef INCLUDED_format_mp3_Bitrate
#define INCLUDED_format_mp3_Bitrate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,Bitrate)
namespace format{
namespace mp3{


class Bitrate_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Bitrate_obj OBJ_;

	public:
		Bitrate_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.mp3.Bitrate",58,5f,fb,83); }
		::String __ToString() const { return HX_("Bitrate.",81,2d,d9,12) + _hx_tag; }

		static ::format::mp3::Bitrate BR_112;
		static inline ::format::mp3::Bitrate BR_112_dyn() { return BR_112; }
		static ::format::mp3::Bitrate BR_128;
		static inline ::format::mp3::Bitrate BR_128_dyn() { return BR_128; }
		static ::format::mp3::Bitrate BR_144;
		static inline ::format::mp3::Bitrate BR_144_dyn() { return BR_144; }
		static ::format::mp3::Bitrate BR_16;
		static inline ::format::mp3::Bitrate BR_16_dyn() { return BR_16; }
		static ::format::mp3::Bitrate BR_160;
		static inline ::format::mp3::Bitrate BR_160_dyn() { return BR_160; }
		static ::format::mp3::Bitrate BR_176;
		static inline ::format::mp3::Bitrate BR_176_dyn() { return BR_176; }
		static ::format::mp3::Bitrate BR_192;
		static inline ::format::mp3::Bitrate BR_192_dyn() { return BR_192; }
		static ::format::mp3::Bitrate BR_224;
		static inline ::format::mp3::Bitrate BR_224_dyn() { return BR_224; }
		static ::format::mp3::Bitrate BR_24;
		static inline ::format::mp3::Bitrate BR_24_dyn() { return BR_24; }
		static ::format::mp3::Bitrate BR_256;
		static inline ::format::mp3::Bitrate BR_256_dyn() { return BR_256; }
		static ::format::mp3::Bitrate BR_288;
		static inline ::format::mp3::Bitrate BR_288_dyn() { return BR_288; }
		static ::format::mp3::Bitrate BR_32;
		static inline ::format::mp3::Bitrate BR_32_dyn() { return BR_32; }
		static ::format::mp3::Bitrate BR_320;
		static inline ::format::mp3::Bitrate BR_320_dyn() { return BR_320; }
		static ::format::mp3::Bitrate BR_352;
		static inline ::format::mp3::Bitrate BR_352_dyn() { return BR_352; }
		static ::format::mp3::Bitrate BR_384;
		static inline ::format::mp3::Bitrate BR_384_dyn() { return BR_384; }
		static ::format::mp3::Bitrate BR_40;
		static inline ::format::mp3::Bitrate BR_40_dyn() { return BR_40; }
		static ::format::mp3::Bitrate BR_416;
		static inline ::format::mp3::Bitrate BR_416_dyn() { return BR_416; }
		static ::format::mp3::Bitrate BR_448;
		static inline ::format::mp3::Bitrate BR_448_dyn() { return BR_448; }
		static ::format::mp3::Bitrate BR_48;
		static inline ::format::mp3::Bitrate BR_48_dyn() { return BR_48; }
		static ::format::mp3::Bitrate BR_56;
		static inline ::format::mp3::Bitrate BR_56_dyn() { return BR_56; }
		static ::format::mp3::Bitrate BR_64;
		static inline ::format::mp3::Bitrate BR_64_dyn() { return BR_64; }
		static ::format::mp3::Bitrate BR_8;
		static inline ::format::mp3::Bitrate BR_8_dyn() { return BR_8; }
		static ::format::mp3::Bitrate BR_80;
		static inline ::format::mp3::Bitrate BR_80_dyn() { return BR_80; }
		static ::format::mp3::Bitrate BR_96;
		static inline ::format::mp3::Bitrate BR_96_dyn() { return BR_96; }
		static ::format::mp3::Bitrate BR_Bad;
		static inline ::format::mp3::Bitrate BR_Bad_dyn() { return BR_Bad; }
		static ::format::mp3::Bitrate BR_Free;
		static inline ::format::mp3::Bitrate BR_Free_dyn() { return BR_Free; }
};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_Bitrate */ 
