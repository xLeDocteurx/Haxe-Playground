#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper_ResultKind
#include <hxd/clipper/ResultKind.h>
#endif
namespace hxd{
namespace clipper{

::hxd::clipper::ResultKind ResultKind_obj::All;

::hxd::clipper::ResultKind ResultKind_obj::HolesOnly;

::hxd::clipper::ResultKind ResultKind_obj::NoHoles;

bool ResultKind_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("All",01,b1,31,00)) { outValue = ResultKind_obj::All; return true; }
	if (inName==HX_("HolesOnly",1f,f6,7e,79)) { outValue = ResultKind_obj::HolesOnly; return true; }
	if (inName==HX_("NoHoles",12,fb,b1,cb)) { outValue = ResultKind_obj::NoHoles; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ResultKind_obj)

int ResultKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_("All",01,b1,31,00)) return 0;
	if (inName==HX_("HolesOnly",1f,f6,7e,79)) return 2;
	if (inName==HX_("NoHoles",12,fb,b1,cb)) return 1;
	return super::__FindIndex(inName);
}

int ResultKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("All",01,b1,31,00)) return 0;
	if (inName==HX_("HolesOnly",1f,f6,7e,79)) return 0;
	if (inName==HX_("NoHoles",12,fb,b1,cb)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ResultKind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("All",01,b1,31,00)) return All;
	if (inName==HX_("HolesOnly",1f,f6,7e,79)) return HolesOnly;
	if (inName==HX_("NoHoles",12,fb,b1,cb)) return NoHoles;
	return super::__Field(inName,inCallProp);
}

static ::String ResultKind_obj_sStaticFields[] = {
	HX_("All",01,b1,31,00),
	HX_("NoHoles",12,fb,b1,cb),
	HX_("HolesOnly",1f,f6,7e,79),
	::String(null())
};

::hx::Class ResultKind_obj::__mClass;

Dynamic __Create_ResultKind_obj() { return new ResultKind_obj; }

void ResultKind_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.clipper.ResultKind",8c,b0,1f,fb), ::hx::TCanCast< ResultKind_obj >,ResultKind_obj_sStaticFields,0,
	&__Create_ResultKind_obj, &__Create,
	&super::__SGetClass(), &CreateResultKind_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ResultKind_obj::__GetStatic;
}

void ResultKind_obj::__boot()
{
All = ::hx::CreateConstEnum< ResultKind_obj >(HX_("All",01,b1,31,00),0);
HolesOnly = ::hx::CreateConstEnum< ResultKind_obj >(HX_("HolesOnly",1f,f6,7e,79),2);
NoHoles = ::hx::CreateConstEnum< ResultKind_obj >(HX_("NoHoles",12,fb,b1,cb),1);
}


} // end namespace hxd
} // end namespace clipper
