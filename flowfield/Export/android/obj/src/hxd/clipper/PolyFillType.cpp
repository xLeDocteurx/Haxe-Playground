#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper_PolyFillType
#include <hxd/clipper/PolyFillType.h>
#endif
namespace hxd{
namespace clipper{

::hxd::clipper::PolyFillType PolyFillType_obj::EvenOdd;

::hxd::clipper::PolyFillType PolyFillType_obj::Negative;

::hxd::clipper::PolyFillType PolyFillType_obj::NonZero;

::hxd::clipper::PolyFillType PolyFillType_obj::Positive;

bool PolyFillType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EvenOdd",95,ee,cf,d3)) { outValue = PolyFillType_obj::EvenOdd; return true; }
	if (inName==HX_("Negative",95,e2,f3,2a)) { outValue = PolyFillType_obj::Negative; return true; }
	if (inName==HX_("NonZero",b5,46,05,9f)) { outValue = PolyFillType_obj::NonZero; return true; }
	if (inName==HX_("Positive",d9,62,ac,a4)) { outValue = PolyFillType_obj::Positive; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(PolyFillType_obj)

int PolyFillType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("EvenOdd",95,ee,cf,d3)) return 0;
	if (inName==HX_("Negative",95,e2,f3,2a)) return 3;
	if (inName==HX_("NonZero",b5,46,05,9f)) return 1;
	if (inName==HX_("Positive",d9,62,ac,a4)) return 2;
	return super::__FindIndex(inName);
}

int PolyFillType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("EvenOdd",95,ee,cf,d3)) return 0;
	if (inName==HX_("Negative",95,e2,f3,2a)) return 0;
	if (inName==HX_("NonZero",b5,46,05,9f)) return 0;
	if (inName==HX_("Positive",d9,62,ac,a4)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val PolyFillType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EvenOdd",95,ee,cf,d3)) return EvenOdd;
	if (inName==HX_("Negative",95,e2,f3,2a)) return Negative;
	if (inName==HX_("NonZero",b5,46,05,9f)) return NonZero;
	if (inName==HX_("Positive",d9,62,ac,a4)) return Positive;
	return super::__Field(inName,inCallProp);
}

static ::String PolyFillType_obj_sStaticFields[] = {
	HX_("EvenOdd",95,ee,cf,d3),
	HX_("NonZero",b5,46,05,9f),
	HX_("Positive",d9,62,ac,a4),
	HX_("Negative",95,e2,f3,2a),
	::String(null())
};

::hx::Class PolyFillType_obj::__mClass;

Dynamic __Create_PolyFillType_obj() { return new PolyFillType_obj; }

void PolyFillType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.clipper.PolyFillType",c4,fd,b5,e9), ::hx::TCanCast< PolyFillType_obj >,PolyFillType_obj_sStaticFields,0,
	&__Create_PolyFillType_obj, &__Create,
	&super::__SGetClass(), &CreatePolyFillType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &PolyFillType_obj::__GetStatic;
}

void PolyFillType_obj::__boot()
{
EvenOdd = ::hx::CreateConstEnum< PolyFillType_obj >(HX_("EvenOdd",95,ee,cf,d3),0);
Negative = ::hx::CreateConstEnum< PolyFillType_obj >(HX_("Negative",95,e2,f3,2a),3);
NonZero = ::hx::CreateConstEnum< PolyFillType_obj >(HX_("NonZero",b5,46,05,9f),1);
Positive = ::hx::CreateConstEnum< PolyFillType_obj >(HX_("Positive",d9,62,ac,a4),2);
}


} // end namespace hxd
} // end namespace clipper
