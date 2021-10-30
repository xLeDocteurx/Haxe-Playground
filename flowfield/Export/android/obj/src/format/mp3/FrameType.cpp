#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_FrameType
#include <format/mp3/FrameType.h>
#endif
namespace format{
namespace mp3{

::format::mp3::FrameType FrameType_obj::FT_MP3;

::format::mp3::FrameType FrameType_obj::FT_NONE;

bool FrameType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FT_MP3",bf,f4,a9,99)) { outValue = FrameType_obj::FT_MP3; return true; }
	if (inName==HX_("FT_NONE",89,be,b4,db)) { outValue = FrameType_obj::FT_NONE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FrameType_obj)

int FrameType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FT_MP3",bf,f4,a9,99)) return 0;
	if (inName==HX_("FT_NONE",89,be,b4,db)) return 1;
	return super::__FindIndex(inName);
}

int FrameType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FT_MP3",bf,f4,a9,99)) return 0;
	if (inName==HX_("FT_NONE",89,be,b4,db)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FrameType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FT_MP3",bf,f4,a9,99)) return FT_MP3;
	if (inName==HX_("FT_NONE",89,be,b4,db)) return FT_NONE;
	return super::__Field(inName,inCallProp);
}

static ::String FrameType_obj_sStaticFields[] = {
	HX_("FT_MP3",bf,f4,a9,99),
	HX_("FT_NONE",89,be,b4,db),
	::String(null())
};

::hx::Class FrameType_obj::__mClass;

Dynamic __Create_FrameType_obj() { return new FrameType_obj; }

void FrameType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.mp3.FrameType",72,fb,41,72), ::hx::TCanCast< FrameType_obj >,FrameType_obj_sStaticFields,0,
	&__Create_FrameType_obj, &__Create,
	&super::__SGetClass(), &CreateFrameType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FrameType_obj::__GetStatic;
}

void FrameType_obj::__boot()
{
FT_MP3 = ::hx::CreateConstEnum< FrameType_obj >(HX_("FT_MP3",bf,f4,a9,99),0);
FT_NONE = ::hx::CreateConstEnum< FrameType_obj >(HX_("FT_NONE",89,be,b4,db),1);
}


} // end namespace format
} // end namespace mp3
