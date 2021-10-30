#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper_PolyType
#include <hxd/clipper/PolyType.h>
#endif
namespace hxd{
namespace clipper{

::hxd::clipper::PolyType PolyType_obj::Clip;

::hxd::clipper::PolyType PolyType_obj::Subject;

bool PolyType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clip",f0,9a,9b,2c)) { outValue = PolyType_obj::Clip; return true; }
	if (inName==HX_("Subject",8c,29,d9,f6)) { outValue = PolyType_obj::Subject; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(PolyType_obj)

int PolyType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Clip",f0,9a,9b,2c)) return 1;
	if (inName==HX_("Subject",8c,29,d9,f6)) return 0;
	return super::__FindIndex(inName);
}

int PolyType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Clip",f0,9a,9b,2c)) return 0;
	if (inName==HX_("Subject",8c,29,d9,f6)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val PolyType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clip",f0,9a,9b,2c)) return Clip;
	if (inName==HX_("Subject",8c,29,d9,f6)) return Subject;
	return super::__Field(inName,inCallProp);
}

static ::String PolyType_obj_sStaticFields[] = {
	HX_("Subject",8c,29,d9,f6),
	HX_("Clip",f0,9a,9b,2c),
	::String(null())
};

::hx::Class PolyType_obj::__mClass;

Dynamic __Create_PolyType_obj() { return new PolyType_obj; }

void PolyType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.clipper.PolyType",21,c6,78,0a), ::hx::TCanCast< PolyType_obj >,PolyType_obj_sStaticFields,0,
	&__Create_PolyType_obj, &__Create,
	&super::__SGetClass(), &CreatePolyType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &PolyType_obj::__GetStatic;
}

void PolyType_obj::__boot()
{
Clip = ::hx::CreateConstEnum< PolyType_obj >(HX_("Clip",f0,9a,9b,2c),1);
Subject = ::hx::CreateConstEnum< PolyType_obj >(HX_("Subject",8c,29,d9,f6),0);
}


} // end namespace hxd
} // end namespace clipper
