#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_OffsetKind
#include <h2d/col/OffsetKind.h>
#endif
namespace h2d{
namespace col{

::h2d::col::OffsetKind OffsetKind_obj::Miter;

::h2d::col::OffsetKind OffsetKind_obj::Round(Float arc)
{
	return ::hx::CreateEnum< OffsetKind_obj >(HX_("Round",2e,68,93,80),2,1)->_hx_init(0,arc);
}

::h2d::col::OffsetKind OffsetKind_obj::Square;

bool OffsetKind_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Miter",e5,6f,9a,9b)) { outValue = OffsetKind_obj::Miter; return true; }
	if (inName==HX_("Round",2e,68,93,80)) { outValue = OffsetKind_obj::Round_dyn(); return true; }
	if (inName==HX_("Square",bd,74,86,8d)) { outValue = OffsetKind_obj::Square; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(OffsetKind_obj)

int OffsetKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Miter",e5,6f,9a,9b)) return 1;
	if (inName==HX_("Round",2e,68,93,80)) return 2;
	if (inName==HX_("Square",bd,74,86,8d)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OffsetKind_obj,Round,return)

int OffsetKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Miter",e5,6f,9a,9b)) return 0;
	if (inName==HX_("Round",2e,68,93,80)) return 1;
	if (inName==HX_("Square",bd,74,86,8d)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val OffsetKind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Miter",e5,6f,9a,9b)) return Miter;
	if (inName==HX_("Round",2e,68,93,80)) return Round_dyn();
	if (inName==HX_("Square",bd,74,86,8d)) return Square;
	return super::__Field(inName,inCallProp);
}

static ::String OffsetKind_obj_sStaticFields[] = {
	HX_("Square",bd,74,86,8d),
	HX_("Miter",e5,6f,9a,9b),
	HX_("Round",2e,68,93,80),
	::String(null())
};

::hx::Class OffsetKind_obj::__mClass;

Dynamic __Create_OffsetKind_obj() { return new OffsetKind_obj; }

void OffsetKind_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h2d.col.OffsetKind",a9,6f,48,46), ::hx::TCanCast< OffsetKind_obj >,OffsetKind_obj_sStaticFields,0,
	&__Create_OffsetKind_obj, &__Create,
	&super::__SGetClass(), &CreateOffsetKind_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &OffsetKind_obj::__GetStatic;
}

void OffsetKind_obj::__boot()
{
Miter = ::hx::CreateConstEnum< OffsetKind_obj >(HX_("Miter",e5,6f,9a,9b),1);
Square = ::hx::CreateConstEnum< OffsetKind_obj >(HX_("Square",bd,74,86,8d),0);
}


} // end namespace h2d
} // end namespace col
