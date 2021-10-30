#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper_JoinType
#include <hxd/clipper/JoinType.h>
#endif
namespace hxd{
namespace clipper{

::hxd::clipper::JoinType JoinType_obj::Miter;

::hxd::clipper::JoinType JoinType_obj::Round;

::hxd::clipper::JoinType JoinType_obj::Square;

bool JoinType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Miter",e5,6f,9a,9b)) { outValue = JoinType_obj::Miter; return true; }
	if (inName==HX_("Round",2e,68,93,80)) { outValue = JoinType_obj::Round; return true; }
	if (inName==HX_("Square",bd,74,86,8d)) { outValue = JoinType_obj::Square; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(JoinType_obj)

int JoinType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Miter",e5,6f,9a,9b)) return 2;
	if (inName==HX_("Round",2e,68,93,80)) return 1;
	if (inName==HX_("Square",bd,74,86,8d)) return 0;
	return super::__FindIndex(inName);
}

int JoinType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Miter",e5,6f,9a,9b)) return 0;
	if (inName==HX_("Round",2e,68,93,80)) return 0;
	if (inName==HX_("Square",bd,74,86,8d)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val JoinType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Miter",e5,6f,9a,9b)) return Miter;
	if (inName==HX_("Round",2e,68,93,80)) return Round;
	if (inName==HX_("Square",bd,74,86,8d)) return Square;
	return super::__Field(inName,inCallProp);
}

static ::String JoinType_obj_sStaticFields[] = {
	HX_("Square",bd,74,86,8d),
	HX_("Round",2e,68,93,80),
	HX_("Miter",e5,6f,9a,9b),
	::String(null())
};

::hx::Class JoinType_obj::__mClass;

Dynamic __Create_JoinType_obj() { return new JoinType_obj; }

void JoinType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.clipper.JoinType",bf,a2,cf,2a), ::hx::TCanCast< JoinType_obj >,JoinType_obj_sStaticFields,0,
	&__Create_JoinType_obj, &__Create,
	&super::__SGetClass(), &CreateJoinType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &JoinType_obj::__GetStatic;
}

void JoinType_obj::__boot()
{
Miter = ::hx::CreateConstEnum< JoinType_obj >(HX_("Miter",e5,6f,9a,9b),2);
Round = ::hx::CreateConstEnum< JoinType_obj >(HX_("Round",2e,68,93,80),1);
Square = ::hx::CreateConstEnum< JoinType_obj >(HX_("Square",bd,74,86,8d),0);
}


} // end namespace hxd
} // end namespace clipper
