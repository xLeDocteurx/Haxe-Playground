#include <hxcpp.h>

#ifndef INCLUDED_hxd_snd_SampleFormat
#include <hxd/snd/SampleFormat.h>
#endif
namespace hxd{
namespace snd{

::hxd::snd::SampleFormat SampleFormat_obj::F32;

::hxd::snd::SampleFormat SampleFormat_obj::I16;

::hxd::snd::SampleFormat SampleFormat_obj::UI8;

bool SampleFormat_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("F32",65,4a,35,00)) { outValue = SampleFormat_obj::F32; return true; }
	if (inName==HX_("I16",6e,8f,37,00)) { outValue = SampleFormat_obj::I16; return true; }
	if (inName==HX_("UI8",64,bf,40,00)) { outValue = SampleFormat_obj::UI8; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SampleFormat_obj)

int SampleFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_("F32",65,4a,35,00)) return 2;
	if (inName==HX_("I16",6e,8f,37,00)) return 1;
	if (inName==HX_("UI8",64,bf,40,00)) return 0;
	return super::__FindIndex(inName);
}

int SampleFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("F32",65,4a,35,00)) return 0;
	if (inName==HX_("I16",6e,8f,37,00)) return 0;
	if (inName==HX_("UI8",64,bf,40,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val SampleFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("F32",65,4a,35,00)) return F32;
	if (inName==HX_("I16",6e,8f,37,00)) return I16;
	if (inName==HX_("UI8",64,bf,40,00)) return UI8;
	return super::__Field(inName,inCallProp);
}

static ::String SampleFormat_obj_sStaticFields[] = {
	HX_("UI8",64,bf,40,00),
	HX_("I16",6e,8f,37,00),
	HX_("F32",65,4a,35,00),
	::String(null())
};

::hx::Class SampleFormat_obj::__mClass;

Dynamic __Create_SampleFormat_obj() { return new SampleFormat_obj; }

void SampleFormat_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.snd.SampleFormat",a0,d1,f6,ca), ::hx::TCanCast< SampleFormat_obj >,SampleFormat_obj_sStaticFields,0,
	&__Create_SampleFormat_obj, &__Create,
	&super::__SGetClass(), &CreateSampleFormat_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SampleFormat_obj::__GetStatic;
}

void SampleFormat_obj::__boot()
{
F32 = ::hx::CreateConstEnum< SampleFormat_obj >(HX_("F32",65,4a,35,00),2);
I16 = ::hx::CreateConstEnum< SampleFormat_obj >(HX_("I16",6e,8f,37,00),1);
UI8 = ::hx::CreateConstEnum< SampleFormat_obj >(HX_("UI8",64,bf,40,00),0);
}


} // end namespace hxd
} // end namespace snd
