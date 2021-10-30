#include <hxcpp.h>

#ifndef INCLUDED_format_wav_WAVEFormat
#include <format/wav/WAVEFormat.h>
#endif
namespace format{
namespace wav{

::format::wav::WAVEFormat WAVEFormat_obj::WF_PCM;

bool WAVEFormat_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("WF_PCM",8a,33,21,56)) { outValue = WAVEFormat_obj::WF_PCM; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(WAVEFormat_obj)

int WAVEFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_("WF_PCM",8a,33,21,56)) return 0;
	return super::__FindIndex(inName);
}

int WAVEFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("WF_PCM",8a,33,21,56)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val WAVEFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("WF_PCM",8a,33,21,56)) return WF_PCM;
	return super::__Field(inName,inCallProp);
}

static ::String WAVEFormat_obj_sStaticFields[] = {
	HX_("WF_PCM",8a,33,21,56),
	::String(null())
};

::hx::Class WAVEFormat_obj::__mClass;

Dynamic __Create_WAVEFormat_obj() { return new WAVEFormat_obj; }

void WAVEFormat_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.wav.WAVEFormat",29,b9,67,d3), ::hx::TCanCast< WAVEFormat_obj >,WAVEFormat_obj_sStaticFields,0,
	&__Create_WAVEFormat_obj, &__Create,
	&super::__SGetClass(), &CreateWAVEFormat_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &WAVEFormat_obj::__GetStatic;
}

void WAVEFormat_obj::__boot()
{
WF_PCM = ::hx::CreateConstEnum< WAVEFormat_obj >(HX_("WF_PCM",8a,33,21,56),0);
}


} // end namespace format
} // end namespace wav
