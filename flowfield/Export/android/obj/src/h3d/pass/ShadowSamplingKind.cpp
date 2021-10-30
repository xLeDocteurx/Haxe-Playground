#include <hxcpp.h>

#ifndef INCLUDED_h3d_pass_ShadowSamplingKind
#include <h3d/pass/ShadowSamplingKind.h>
#endif
namespace h3d{
namespace pass{

::h3d::pass::ShadowSamplingKind ShadowSamplingKind_obj::ESM;

::h3d::pass::ShadowSamplingKind ShadowSamplingKind_obj::None;

::h3d::pass::ShadowSamplingKind ShadowSamplingKind_obj::PCF;

bool ShadowSamplingKind_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ESM",1f,a4,34,00)) { outValue = ShadowSamplingKind_obj::ESM; return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = ShadowSamplingKind_obj::None; return true; }
	if (inName==HX_("PCF",f3,ee,3c,00)) { outValue = ShadowSamplingKind_obj::PCF; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ShadowSamplingKind_obj)

int ShadowSamplingKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ESM",1f,a4,34,00)) return 2;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	if (inName==HX_("PCF",f3,ee,3c,00)) return 1;
	return super::__FindIndex(inName);
}

int ShadowSamplingKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ESM",1f,a4,34,00)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	if (inName==HX_("PCF",f3,ee,3c,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ShadowSamplingKind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ESM",1f,a4,34,00)) return ESM;
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	if (inName==HX_("PCF",f3,ee,3c,00)) return PCF;
	return super::__Field(inName,inCallProp);
}

static ::String ShadowSamplingKind_obj_sStaticFields[] = {
	HX_("None",d8,3e,e3,33),
	HX_("PCF",f3,ee,3c,00),
	HX_("ESM",1f,a4,34,00),
	::String(null())
};

::hx::Class ShadowSamplingKind_obj::__mClass;

Dynamic __Create_ShadowSamplingKind_obj() { return new ShadowSamplingKind_obj; }

void ShadowSamplingKind_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.pass.ShadowSamplingKind",43,e2,e2,a4), ::hx::TCanCast< ShadowSamplingKind_obj >,ShadowSamplingKind_obj_sStaticFields,0,
	&__Create_ShadowSamplingKind_obj, &__Create,
	&super::__SGetClass(), &CreateShadowSamplingKind_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ShadowSamplingKind_obj::__GetStatic;
}

void ShadowSamplingKind_obj::__boot()
{
ESM = ::hx::CreateConstEnum< ShadowSamplingKind_obj >(HX_("ESM",1f,a4,34,00),2);
None = ::hx::CreateConstEnum< ShadowSamplingKind_obj >(HX_("None",d8,3e,e3,33),0);
PCF = ::hx::CreateConstEnum< ShadowSamplingKind_obj >(HX_("PCF",f3,ee,3c,00),1);
}


} // end namespace h3d
} // end namespace pass
