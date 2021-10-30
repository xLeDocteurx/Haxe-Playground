#ifndef INCLUDED_hxd_res_SoundFormat
#define INCLUDED_hxd_res_SoundFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,res,SoundFormat)
namespace hxd{
namespace res{


class SoundFormat_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SoundFormat_obj OBJ_;

	public:
		SoundFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.res.SoundFormat",1e,e8,48,7f); }
		::String __ToString() const { return HX_("SoundFormat.",28,70,79,bb) + _hx_tag; }

		static ::hxd::res::SoundFormat Mp3;
		static inline ::hxd::res::SoundFormat Mp3_dyn() { return Mp3; }
		static ::hxd::res::SoundFormat OggVorbis;
		static inline ::hxd::res::SoundFormat OggVorbis_dyn() { return OggVorbis; }
		static ::hxd::res::SoundFormat Wav;
		static inline ::hxd::res::SoundFormat Wav_dyn() { return Wav; }
};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_SoundFormat */ 
