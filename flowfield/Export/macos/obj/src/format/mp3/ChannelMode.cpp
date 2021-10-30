#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_ChannelMode
#include <format/mp3/ChannelMode.h>
#endif
namespace format{
namespace mp3{

::format::mp3::ChannelMode ChannelMode_obj::DualChannel;

::format::mp3::ChannelMode ChannelMode_obj::JointStereo;

::format::mp3::ChannelMode ChannelMode_obj::Mono;

::format::mp3::ChannelMode ChannelMode_obj::Stereo;

bool ChannelMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DualChannel",47,5d,01,c6)) { outValue = ChannelMode_obj::DualChannel; return true; }
	if (inName==HX_("JointStereo",02,88,33,ce)) { outValue = ChannelMode_obj::JointStereo; return true; }
	if (inName==HX_("Mono",43,08,3a,33)) { outValue = ChannelMode_obj::Mono; return true; }
	if (inName==HX_("Stereo",58,a3,33,3d)) { outValue = ChannelMode_obj::Stereo; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ChannelMode_obj)

int ChannelMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DualChannel",47,5d,01,c6)) return 2;
	if (inName==HX_("JointStereo",02,88,33,ce)) return 1;
	if (inName==HX_("Mono",43,08,3a,33)) return 3;
	if (inName==HX_("Stereo",58,a3,33,3d)) return 0;
	return super::__FindIndex(inName);
}

int ChannelMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DualChannel",47,5d,01,c6)) return 0;
	if (inName==HX_("JointStereo",02,88,33,ce)) return 0;
	if (inName==HX_("Mono",43,08,3a,33)) return 0;
	if (inName==HX_("Stereo",58,a3,33,3d)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ChannelMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DualChannel",47,5d,01,c6)) return DualChannel;
	if (inName==HX_("JointStereo",02,88,33,ce)) return JointStereo;
	if (inName==HX_("Mono",43,08,3a,33)) return Mono;
	if (inName==HX_("Stereo",58,a3,33,3d)) return Stereo;
	return super::__Field(inName,inCallProp);
}

static ::String ChannelMode_obj_sStaticFields[] = {
	HX_("Stereo",58,a3,33,3d),
	HX_("JointStereo",02,88,33,ce),
	HX_("DualChannel",47,5d,01,c6),
	HX_("Mono",43,08,3a,33),
	::String(null())
};

::hx::Class ChannelMode_obj::__mClass;

Dynamic __Create_ChannelMode_obj() { return new ChannelMode_obj; }

void ChannelMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.mp3.ChannelMode",71,f8,fd,e5), ::hx::TCanCast< ChannelMode_obj >,ChannelMode_obj_sStaticFields,0,
	&__Create_ChannelMode_obj, &__Create,
	&super::__SGetClass(), &CreateChannelMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ChannelMode_obj::__GetStatic;
}

void ChannelMode_obj::__boot()
{
DualChannel = ::hx::CreateConstEnum< ChannelMode_obj >(HX_("DualChannel",47,5d,01,c6),2);
JointStereo = ::hx::CreateConstEnum< ChannelMode_obj >(HX_("JointStereo",02,88,33,ce),1);
Mono = ::hx::CreateConstEnum< ChannelMode_obj >(HX_("Mono",43,08,3a,33),3);
Stereo = ::hx::CreateConstEnum< ChannelMode_obj >(HX_("Stereo",58,a3,33,3d),0);
}


} // end namespace format
} // end namespace mp3
