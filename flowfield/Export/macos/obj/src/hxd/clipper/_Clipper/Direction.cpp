#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper__Clipper_Direction
#include <hxd/clipper/_Clipper/Direction.h>
#endif
namespace hxd{
namespace clipper{
namespace _Clipper{

::hxd::clipper::_Clipper::Direction Direction_obj::LeftToRight;

::hxd::clipper::_Clipper::Direction Direction_obj::RightToLeft;

bool Direction_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LeftToRight",fa,2e,ae,99)) { outValue = Direction_obj::LeftToRight; return true; }
	if (inName==HX_("RightToLeft",fe,d7,20,cb)) { outValue = Direction_obj::RightToLeft; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Direction_obj)

int Direction_obj::__FindIndex(::String inName)
{
	if (inName==HX_("LeftToRight",fa,2e,ae,99)) return 1;
	if (inName==HX_("RightToLeft",fe,d7,20,cb)) return 0;
	return super::__FindIndex(inName);
}

int Direction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("LeftToRight",fa,2e,ae,99)) return 0;
	if (inName==HX_("RightToLeft",fe,d7,20,cb)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Direction_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LeftToRight",fa,2e,ae,99)) return LeftToRight;
	if (inName==HX_("RightToLeft",fe,d7,20,cb)) return RightToLeft;
	return super::__Field(inName,inCallProp);
}

static ::String Direction_obj_sStaticFields[] = {
	HX_("RightToLeft",fe,d7,20,cb),
	HX_("LeftToRight",fa,2e,ae,99),
	::String(null())
};

::hx::Class Direction_obj::__mClass;

Dynamic __Create_Direction_obj() { return new Direction_obj; }

void Direction_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.clipper._Clipper.Direction",ba,41,08,85), ::hx::TCanCast< Direction_obj >,Direction_obj_sStaticFields,0,
	&__Create_Direction_obj, &__Create,
	&super::__SGetClass(), &CreateDirection_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Direction_obj::__GetStatic;
}

void Direction_obj::__boot()
{
LeftToRight = ::hx::CreateConstEnum< Direction_obj >(HX_("LeftToRight",fa,2e,ae,99),1);
RightToLeft = ::hx::CreateConstEnum< Direction_obj >(HX_("RightToLeft",fe,d7,20,cb),0);
}


} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
