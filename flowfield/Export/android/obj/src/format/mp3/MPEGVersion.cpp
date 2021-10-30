#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_MPEGVersion
#include <format/mp3/MPEGVersion.h>
#endif
namespace format{
namespace mp3{

::format::mp3::MPEGVersion MPEGVersion_obj::MPEG_Reserved;

::format::mp3::MPEGVersion MPEGVersion_obj::MPEG_V1;

::format::mp3::MPEGVersion MPEGVersion_obj::MPEG_V2;

::format::mp3::MPEGVersion MPEGVersion_obj::MPEG_V25;

bool MPEGVersion_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MPEG_Reserved",02,d3,3f,07)) { outValue = MPEGVersion_obj::MPEG_Reserved; return true; }
	if (inName==HX_("MPEG_V1",d5,23,5e,68)) { outValue = MPEGVersion_obj::MPEG_V1; return true; }
	if (inName==HX_("MPEG_V2",d6,23,5e,68)) { outValue = MPEGVersion_obj::MPEG_V2; return true; }
	if (inName==HX_("MPEG_V25",9f,37,01,ea)) { outValue = MPEGVersion_obj::MPEG_V25; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(MPEGVersion_obj)

int MPEGVersion_obj::__FindIndex(::String inName)
{
	if (inName==HX_("MPEG_Reserved",02,d3,3f,07)) return 3;
	if (inName==HX_("MPEG_V1",d5,23,5e,68)) return 0;
	if (inName==HX_("MPEG_V2",d6,23,5e,68)) return 1;
	if (inName==HX_("MPEG_V25",9f,37,01,ea)) return 2;
	return super::__FindIndex(inName);
}

int MPEGVersion_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("MPEG_Reserved",02,d3,3f,07)) return 0;
	if (inName==HX_("MPEG_V1",d5,23,5e,68)) return 0;
	if (inName==HX_("MPEG_V2",d6,23,5e,68)) return 0;
	if (inName==HX_("MPEG_V25",9f,37,01,ea)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val MPEGVersion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MPEG_Reserved",02,d3,3f,07)) return MPEG_Reserved;
	if (inName==HX_("MPEG_V1",d5,23,5e,68)) return MPEG_V1;
	if (inName==HX_("MPEG_V2",d6,23,5e,68)) return MPEG_V2;
	if (inName==HX_("MPEG_V25",9f,37,01,ea)) return MPEG_V25;
	return super::__Field(inName,inCallProp);
}

static ::String MPEGVersion_obj_sStaticFields[] = {
	HX_("MPEG_V1",d5,23,5e,68),
	HX_("MPEG_V2",d6,23,5e,68),
	HX_("MPEG_V25",9f,37,01,ea),
	HX_("MPEG_Reserved",02,d3,3f,07),
	::String(null())
};

::hx::Class MPEGVersion_obj::__mClass;

Dynamic __Create_MPEGVersion_obj() { return new MPEGVersion_obj; }

void MPEGVersion_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.mp3.MPEGVersion",de,fd,19,c6), ::hx::TCanCast< MPEGVersion_obj >,MPEGVersion_obj_sStaticFields,0,
	&__Create_MPEGVersion_obj, &__Create,
	&super::__SGetClass(), &CreateMPEGVersion_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &MPEGVersion_obj::__GetStatic;
}

void MPEGVersion_obj::__boot()
{
MPEG_Reserved = ::hx::CreateConstEnum< MPEGVersion_obj >(HX_("MPEG_Reserved",02,d3,3f,07),3);
MPEG_V1 = ::hx::CreateConstEnum< MPEGVersion_obj >(HX_("MPEG_V1",d5,23,5e,68),0);
MPEG_V2 = ::hx::CreateConstEnum< MPEGVersion_obj >(HX_("MPEG_V2",d6,23,5e,68),1);
MPEG_V25 = ::hx::CreateConstEnum< MPEGVersion_obj >(HX_("MPEG_V25",9f,37,01,ea),2);
}


} // end namespace format
} // end namespace mp3
