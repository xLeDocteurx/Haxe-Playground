#ifndef INCLUDED_hxd_snd_SampleFormat
#define INCLUDED_hxd_snd_SampleFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,snd,SampleFormat)
namespace hxd{
namespace snd{


class SampleFormat_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SampleFormat_obj OBJ_;

	public:
		SampleFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.snd.SampleFormat",a0,d1,f6,ca); }
		::String __ToString() const { return HX_("SampleFormat.",ed,91,78,c1) + _hx_tag; }

		static ::hxd::snd::SampleFormat F32;
		static inline ::hxd::snd::SampleFormat F32_dyn() { return F32; }
		static ::hxd::snd::SampleFormat I16;
		static inline ::hxd::snd::SampleFormat I16_dyn() { return I16; }
		static ::hxd::snd::SampleFormat UI8;
		static inline ::hxd::snd::SampleFormat UI8_dyn() { return UI8; }
};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_SampleFormat */ 
