#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_SamplingRate
#include <format/mp3/SamplingRate.h>
#endif
namespace format{
namespace mp3{

::format::mp3::SamplingRate SamplingRate_obj::SR_11025;

::format::mp3::SamplingRate SamplingRate_obj::SR_12000;

::format::mp3::SamplingRate SamplingRate_obj::SR_22050;

::format::mp3::SamplingRate SamplingRate_obj::SR_24000;

::format::mp3::SamplingRate SamplingRate_obj::SR_32000;

::format::mp3::SamplingRate SamplingRate_obj::SR_44100;

::format::mp3::SamplingRate SamplingRate_obj::SR_48000;

::format::mp3::SamplingRate SamplingRate_obj::SR_8000;

::format::mp3::SamplingRate SamplingRate_obj::SR_Bad;

bool SamplingRate_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SR_11025",33,ca,4c,30)) { outValue = SamplingRate_obj::SR_11025; return true; }
	if (inName==HX_("SR_12000",0f,ff,f5,30)) { outValue = SamplingRate_obj::SR_12000; return true; }
	if (inName==HX_("SR_22050",eb,97,5c,c4)) { outValue = SamplingRate_obj::SR_22050; return true; }
	if (inName==HX_("SR_24000",ce,00,af,c5)) { outValue = SamplingRate_obj::SR_24000; return true; }
	if (inName==HX_("SR_32000",11,28,c3,57)) { outValue = SamplingRate_obj::SR_32000; return true; }
	if (inName==HX_("SR_44100",11,ec,7c,ec)) { outValue = SamplingRate_obj::SR_44100; return true; }
	if (inName==HX_("SR_48000",4c,04,21,ef)) { outValue = SamplingRate_obj::SR_48000; return true; }
	if (inName==HX_("SR_8000",d8,bb,f2,1c)) { outValue = SamplingRate_obj::SR_8000; return true; }
	if (inName==HX_("SR_Bad",c5,32,78,a5)) { outValue = SamplingRate_obj::SR_Bad; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SamplingRate_obj)

int SamplingRate_obj::__FindIndex(::String inName)
{
	if (inName==HX_("SR_11025",33,ca,4c,30)) return 1;
	if (inName==HX_("SR_12000",0f,ff,f5,30)) return 2;
	if (inName==HX_("SR_22050",eb,97,5c,c4)) return 3;
	if (inName==HX_("SR_24000",ce,00,af,c5)) return 4;
	if (inName==HX_("SR_32000",11,28,c3,57)) return 5;
	if (inName==HX_("SR_44100",11,ec,7c,ec)) return 6;
	if (inName==HX_("SR_48000",4c,04,21,ef)) return 7;
	if (inName==HX_("SR_8000",d8,bb,f2,1c)) return 0;
	if (inName==HX_("SR_Bad",c5,32,78,a5)) return 8;
	return super::__FindIndex(inName);
}

int SamplingRate_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("SR_11025",33,ca,4c,30)) return 0;
	if (inName==HX_("SR_12000",0f,ff,f5,30)) return 0;
	if (inName==HX_("SR_22050",eb,97,5c,c4)) return 0;
	if (inName==HX_("SR_24000",ce,00,af,c5)) return 0;
	if (inName==HX_("SR_32000",11,28,c3,57)) return 0;
	if (inName==HX_("SR_44100",11,ec,7c,ec)) return 0;
	if (inName==HX_("SR_48000",4c,04,21,ef)) return 0;
	if (inName==HX_("SR_8000",d8,bb,f2,1c)) return 0;
	if (inName==HX_("SR_Bad",c5,32,78,a5)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val SamplingRate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SR_11025",33,ca,4c,30)) return SR_11025;
	if (inName==HX_("SR_12000",0f,ff,f5,30)) return SR_12000;
	if (inName==HX_("SR_22050",eb,97,5c,c4)) return SR_22050;
	if (inName==HX_("SR_24000",ce,00,af,c5)) return SR_24000;
	if (inName==HX_("SR_32000",11,28,c3,57)) return SR_32000;
	if (inName==HX_("SR_44100",11,ec,7c,ec)) return SR_44100;
	if (inName==HX_("SR_48000",4c,04,21,ef)) return SR_48000;
	if (inName==HX_("SR_8000",d8,bb,f2,1c)) return SR_8000;
	if (inName==HX_("SR_Bad",c5,32,78,a5)) return SR_Bad;
	return super::__Field(inName,inCallProp);
}

static ::String SamplingRate_obj_sStaticFields[] = {
	HX_("SR_8000",d8,bb,f2,1c),
	HX_("SR_11025",33,ca,4c,30),
	HX_("SR_12000",0f,ff,f5,30),
	HX_("SR_22050",eb,97,5c,c4),
	HX_("SR_24000",ce,00,af,c5),
	HX_("SR_32000",11,28,c3,57),
	HX_("SR_44100",11,ec,7c,ec),
	HX_("SR_48000",4c,04,21,ef),
	HX_("SR_Bad",c5,32,78,a5),
	::String(null())
};

::hx::Class SamplingRate_obj::__mClass;

Dynamic __Create_SamplingRate_obj() { return new SamplingRate_obj; }

void SamplingRate_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.mp3.SamplingRate",5c,21,63,7d), ::hx::TCanCast< SamplingRate_obj >,SamplingRate_obj_sStaticFields,0,
	&__Create_SamplingRate_obj, &__Create,
	&super::__SGetClass(), &CreateSamplingRate_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SamplingRate_obj::__GetStatic;
}

void SamplingRate_obj::__boot()
{
SR_11025 = ::hx::CreateConstEnum< SamplingRate_obj >(HX_("SR_11025",33,ca,4c,30),1);
SR_12000 = ::hx::CreateConstEnum< SamplingRate_obj >(HX_("SR_12000",0f,ff,f5,30),2);
SR_22050 = ::hx::CreateConstEnum< SamplingRate_obj >(HX_("SR_22050",eb,97,5c,c4),3);
SR_24000 = ::hx::CreateConstEnum< SamplingRate_obj >(HX_("SR_24000",ce,00,af,c5),4);
SR_32000 = ::hx::CreateConstEnum< SamplingRate_obj >(HX_("SR_32000",11,28,c3,57),5);
SR_44100 = ::hx::CreateConstEnum< SamplingRate_obj >(HX_("SR_44100",11,ec,7c,ec),6);
SR_48000 = ::hx::CreateConstEnum< SamplingRate_obj >(HX_("SR_48000",4c,04,21,ef),7);
SR_8000 = ::hx::CreateConstEnum< SamplingRate_obj >(HX_("SR_8000",d8,bb,f2,1c),0);
SR_Bad = ::hx::CreateConstEnum< SamplingRate_obj >(HX_("SR_Bad",c5,32,78,a5),8);
}


} // end namespace format
} // end namespace mp3
