#ifndef INCLUDED_format_mp3_SamplingRate
#define INCLUDED_format_mp3_SamplingRate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,SamplingRate)
namespace format{
namespace mp3{


class SamplingRate_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SamplingRate_obj OBJ_;

	public:
		SamplingRate_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.mp3.SamplingRate",5c,21,63,7d); }
		::String __ToString() const { return HX_("SamplingRate.",c7,43,0f,7e) + _hx_tag; }

		static ::format::mp3::SamplingRate SR_11025;
		static inline ::format::mp3::SamplingRate SR_11025_dyn() { return SR_11025; }
		static ::format::mp3::SamplingRate SR_12000;
		static inline ::format::mp3::SamplingRate SR_12000_dyn() { return SR_12000; }
		static ::format::mp3::SamplingRate SR_22050;
		static inline ::format::mp3::SamplingRate SR_22050_dyn() { return SR_22050; }
		static ::format::mp3::SamplingRate SR_24000;
		static inline ::format::mp3::SamplingRate SR_24000_dyn() { return SR_24000; }
		static ::format::mp3::SamplingRate SR_32000;
		static inline ::format::mp3::SamplingRate SR_32000_dyn() { return SR_32000; }
		static ::format::mp3::SamplingRate SR_44100;
		static inline ::format::mp3::SamplingRate SR_44100_dyn() { return SR_44100; }
		static ::format::mp3::SamplingRate SR_48000;
		static inline ::format::mp3::SamplingRate SR_48000_dyn() { return SR_48000; }
		static ::format::mp3::SamplingRate SR_8000;
		static inline ::format::mp3::SamplingRate SR_8000_dyn() { return SR_8000; }
		static ::format::mp3::SamplingRate SR_Bad;
		static inline ::format::mp3::SamplingRate SR_Bad_dyn() { return SR_Bad; }
};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_SamplingRate */ 
