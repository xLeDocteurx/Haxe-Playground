#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_hmd_AnimationFlag
#include <hxd/fmt/hmd/AnimationFlag.h>
#endif
namespace hxd{
namespace fmt{
namespace hmd{

::hxd::fmt::hmd::AnimationFlag AnimationFlag_obj::HasAlpha;

::hxd::fmt::hmd::AnimationFlag AnimationFlag_obj::HasPosition;

::hxd::fmt::hmd::AnimationFlag AnimationFlag_obj::HasProps;

::hxd::fmt::hmd::AnimationFlag AnimationFlag_obj::HasRotation;

::hxd::fmt::hmd::AnimationFlag AnimationFlag_obj::HasScale;

::hxd::fmt::hmd::AnimationFlag AnimationFlag_obj::HasUV;

::hxd::fmt::hmd::AnimationFlag AnimationFlag_obj::Reserved;

::hxd::fmt::hmd::AnimationFlag AnimationFlag_obj::SingleFrame;

bool AnimationFlag_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HasAlpha",c4,ad,a0,87)) { outValue = AnimationFlag_obj::HasAlpha; return true; }
	if (inName==HX_("HasPosition",03,1e,e4,81)) { outValue = AnimationFlag_obj::HasPosition; return true; }
	if (inName==HX_("HasProps",d6,ed,99,2e)) { outValue = AnimationFlag_obj::HasProps; return true; }
	if (inName==HX_("HasRotation",98,ba,6f,bf)) { outValue = AnimationFlag_obj::HasRotation; return true; }
	if (inName==HX_("HasScale",f0,d4,d8,de)) { outValue = AnimationFlag_obj::HasScale; return true; }
	if (inName==HX_("HasUV",1b,04,4f,b5)) { outValue = AnimationFlag_obj::HasUV; return true; }
	if (inName==HX_("Reserved",c8,b2,57,28)) { outValue = AnimationFlag_obj::Reserved; return true; }
	if (inName==HX_("SingleFrame",65,6c,79,d4)) { outValue = AnimationFlag_obj::SingleFrame; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(AnimationFlag_obj)

int AnimationFlag_obj::__FindIndex(::String inName)
{
	if (inName==HX_("HasAlpha",c4,ad,a0,87)) return 4;
	if (inName==HX_("HasPosition",03,1e,e4,81)) return 0;
	if (inName==HX_("HasProps",d6,ed,99,2e)) return 6;
	if (inName==HX_("HasRotation",98,ba,6f,bf)) return 1;
	if (inName==HX_("HasScale",f0,d4,d8,de)) return 2;
	if (inName==HX_("HasUV",1b,04,4f,b5)) return 3;
	if (inName==HX_("Reserved",c8,b2,57,28)) return 7;
	if (inName==HX_("SingleFrame",65,6c,79,d4)) return 5;
	return super::__FindIndex(inName);
}

int AnimationFlag_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("HasAlpha",c4,ad,a0,87)) return 0;
	if (inName==HX_("HasPosition",03,1e,e4,81)) return 0;
	if (inName==HX_("HasProps",d6,ed,99,2e)) return 0;
	if (inName==HX_("HasRotation",98,ba,6f,bf)) return 0;
	if (inName==HX_("HasScale",f0,d4,d8,de)) return 0;
	if (inName==HX_("HasUV",1b,04,4f,b5)) return 0;
	if (inName==HX_("Reserved",c8,b2,57,28)) return 0;
	if (inName==HX_("SingleFrame",65,6c,79,d4)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val AnimationFlag_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HasAlpha",c4,ad,a0,87)) return HasAlpha;
	if (inName==HX_("HasPosition",03,1e,e4,81)) return HasPosition;
	if (inName==HX_("HasProps",d6,ed,99,2e)) return HasProps;
	if (inName==HX_("HasRotation",98,ba,6f,bf)) return HasRotation;
	if (inName==HX_("HasScale",f0,d4,d8,de)) return HasScale;
	if (inName==HX_("HasUV",1b,04,4f,b5)) return HasUV;
	if (inName==HX_("Reserved",c8,b2,57,28)) return Reserved;
	if (inName==HX_("SingleFrame",65,6c,79,d4)) return SingleFrame;
	return super::__Field(inName,inCallProp);
}

static ::String AnimationFlag_obj_sStaticFields[] = {
	HX_("HasPosition",03,1e,e4,81),
	HX_("HasRotation",98,ba,6f,bf),
	HX_("HasScale",f0,d4,d8,de),
	HX_("HasUV",1b,04,4f,b5),
	HX_("HasAlpha",c4,ad,a0,87),
	HX_("SingleFrame",65,6c,79,d4),
	HX_("HasProps",d6,ed,99,2e),
	HX_("Reserved",c8,b2,57,28),
	::String(null())
};

::hx::Class AnimationFlag_obj::__mClass;

Dynamic __Create_AnimationFlag_obj() { return new AnimationFlag_obj; }

void AnimationFlag_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.fmt.hmd.AnimationFlag",c6,55,60,6a), ::hx::TCanCast< AnimationFlag_obj >,AnimationFlag_obj_sStaticFields,0,
	&__Create_AnimationFlag_obj, &__Create,
	&super::__SGetClass(), &CreateAnimationFlag_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &AnimationFlag_obj::__GetStatic;
}

void AnimationFlag_obj::__boot()
{
HasAlpha = ::hx::CreateConstEnum< AnimationFlag_obj >(HX_("HasAlpha",c4,ad,a0,87),4);
HasPosition = ::hx::CreateConstEnum< AnimationFlag_obj >(HX_("HasPosition",03,1e,e4,81),0);
HasProps = ::hx::CreateConstEnum< AnimationFlag_obj >(HX_("HasProps",d6,ed,99,2e),6);
HasRotation = ::hx::CreateConstEnum< AnimationFlag_obj >(HX_("HasRotation",98,ba,6f,bf),1);
HasScale = ::hx::CreateConstEnum< AnimationFlag_obj >(HX_("HasScale",f0,d4,d8,de),2);
HasUV = ::hx::CreateConstEnum< AnimationFlag_obj >(HX_("HasUV",1b,04,4f,b5),3);
Reserved = ::hx::CreateConstEnum< AnimationFlag_obj >(HX_("Reserved",c8,b2,57,28),7);
SingleFrame = ::hx::CreateConstEnum< AnimationFlag_obj >(HX_("SingleFrame",65,6c,79,d4),5);
}


} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
