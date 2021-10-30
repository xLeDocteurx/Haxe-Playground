#include <hxcpp.h>

#ifndef INCLUDED_hxd_res_SoundFormat
#include <hxd/res/SoundFormat.h>
#endif
namespace hxd{
namespace res{

::hxd::res::SoundFormat SoundFormat_obj::Mp3;

::hxd::res::SoundFormat SoundFormat_obj::OggVorbis;

::hxd::res::SoundFormat SoundFormat_obj::Wav;

bool SoundFormat_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Mp3",50,cf,3a,00)) { outValue = SoundFormat_obj::Mp3; return true; }
	if (inName==HX_("OggVorbis",e2,90,be,6e)) { outValue = SoundFormat_obj::OggVorbis; return true; }
	if (inName==HX_("Wav",0c,59,42,00)) { outValue = SoundFormat_obj::Wav; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SoundFormat_obj)

int SoundFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Mp3",50,cf,3a,00)) return 1;
	if (inName==HX_("OggVorbis",e2,90,be,6e)) return 2;
	if (inName==HX_("Wav",0c,59,42,00)) return 0;
	return super::__FindIndex(inName);
}

int SoundFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Mp3",50,cf,3a,00)) return 0;
	if (inName==HX_("OggVorbis",e2,90,be,6e)) return 0;
	if (inName==HX_("Wav",0c,59,42,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val SoundFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Mp3",50,cf,3a,00)) return Mp3;
	if (inName==HX_("OggVorbis",e2,90,be,6e)) return OggVorbis;
	if (inName==HX_("Wav",0c,59,42,00)) return Wav;
	return super::__Field(inName,inCallProp);
}

static ::String SoundFormat_obj_sStaticFields[] = {
	HX_("Wav",0c,59,42,00),
	HX_("Mp3",50,cf,3a,00),
	HX_("OggVorbis",e2,90,be,6e),
	::String(null())
};

::hx::Class SoundFormat_obj::__mClass;

Dynamic __Create_SoundFormat_obj() { return new SoundFormat_obj; }

void SoundFormat_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.res.SoundFormat",1e,e8,48,7f), ::hx::TCanCast< SoundFormat_obj >,SoundFormat_obj_sStaticFields,0,
	&__Create_SoundFormat_obj, &__Create,
	&super::__SGetClass(), &CreateSoundFormat_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SoundFormat_obj::__GetStatic;
}

void SoundFormat_obj::__boot()
{
Mp3 = ::hx::CreateConstEnum< SoundFormat_obj >(HX_("Mp3",50,cf,3a,00),1);
OggVorbis = ::hx::CreateConstEnum< SoundFormat_obj >(HX_("OggVorbis",e2,90,be,6e),2);
Wav = ::hx::CreateConstEnum< SoundFormat_obj >(HX_("Wav",0c,59,42,00),0);
}


} // end namespace hxd
} // end namespace res
