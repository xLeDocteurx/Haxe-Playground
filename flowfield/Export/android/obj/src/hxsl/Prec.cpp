#include <hxcpp.h>

#ifndef INCLUDED_hxsl_Prec
#include <hxsl/Prec.h>
#endif
namespace hxsl{

::hxsl::Prec Prec_obj::High;

::hxsl::Prec Prec_obj::Low;

::hxsl::Prec Prec_obj::Medium;

bool Prec_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("High",82,63,e7,2f)) { outValue = Prec_obj::High; return true; }
	if (inName==HX_("Low",74,0c,3a,00)) { outValue = Prec_obj::Low; return true; }
	if (inName==HX_("Medium",95,c8,5c,33)) { outValue = Prec_obj::Medium; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Prec_obj)

int Prec_obj::__FindIndex(::String inName)
{
	if (inName==HX_("High",82,63,e7,2f)) return 2;
	if (inName==HX_("Low",74,0c,3a,00)) return 0;
	if (inName==HX_("Medium",95,c8,5c,33)) return 1;
	return super::__FindIndex(inName);
}

int Prec_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("High",82,63,e7,2f)) return 0;
	if (inName==HX_("Low",74,0c,3a,00)) return 0;
	if (inName==HX_("Medium",95,c8,5c,33)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Prec_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("High",82,63,e7,2f)) return High;
	if (inName==HX_("Low",74,0c,3a,00)) return Low;
	if (inName==HX_("Medium",95,c8,5c,33)) return Medium;
	return super::__Field(inName,inCallProp);
}

static ::String Prec_obj_sStaticFields[] = {
	HX_("Low",74,0c,3a,00),
	HX_("Medium",95,c8,5c,33),
	HX_("High",82,63,e7,2f),
	::String(null())
};

::hx::Class Prec_obj::__mClass;

Dynamic __Create_Prec_obj() { return new Prec_obj; }

void Prec_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.Prec",e5,11,0e,10), ::hx::TCanCast< Prec_obj >,Prec_obj_sStaticFields,0,
	&__Create_Prec_obj, &__Create,
	&super::__SGetClass(), &CreatePrec_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Prec_obj::__GetStatic;
}

void Prec_obj::__boot()
{
High = ::hx::CreateConstEnum< Prec_obj >(HX_("High",82,63,e7,2f),2);
Low = ::hx::CreateConstEnum< Prec_obj >(HX_("Low",74,0c,3a,00),0);
Medium = ::hx::CreateConstEnum< Prec_obj >(HX_("Medium",95,c8,5c,33),1);
}


} // end namespace hxsl
