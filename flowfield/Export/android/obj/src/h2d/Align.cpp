#include <hxcpp.h>

#ifndef INCLUDED_h2d_Align
#include <h2d/Align.h>
#endif
namespace h2d{

::h2d::Align Align_obj::Center;

::h2d::Align Align_obj::Left;

::h2d::Align Align_obj::MultilineCenter;

::h2d::Align Align_obj::MultilineRight;

::h2d::Align Align_obj::Right;

bool Align_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Center",f5,99,6f,3a)) { outValue = Align_obj::Center; return true; }
	if (inName==HX_("Left",27,34,89,32)) { outValue = Align_obj::Left; return true; }
	if (inName==HX_("MultilineCenter",82,e4,95,b6)) { outValue = Align_obj::MultilineCenter; return true; }
	if (inName==HX_("MultilineRight",cf,81,90,9f)) { outValue = Align_obj::MultilineRight; return true; }
	if (inName==HX_("Right",bc,7b,91,7c)) { outValue = Align_obj::Right; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Align_obj)

int Align_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Center",f5,99,6f,3a)) return 2;
	if (inName==HX_("Left",27,34,89,32)) return 0;
	if (inName==HX_("MultilineCenter",82,e4,95,b6)) return 4;
	if (inName==HX_("MultilineRight",cf,81,90,9f)) return 3;
	if (inName==HX_("Right",bc,7b,91,7c)) return 1;
	return super::__FindIndex(inName);
}

int Align_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Center",f5,99,6f,3a)) return 0;
	if (inName==HX_("Left",27,34,89,32)) return 0;
	if (inName==HX_("MultilineCenter",82,e4,95,b6)) return 0;
	if (inName==HX_("MultilineRight",cf,81,90,9f)) return 0;
	if (inName==HX_("Right",bc,7b,91,7c)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Align_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Center",f5,99,6f,3a)) return Center;
	if (inName==HX_("Left",27,34,89,32)) return Left;
	if (inName==HX_("MultilineCenter",82,e4,95,b6)) return MultilineCenter;
	if (inName==HX_("MultilineRight",cf,81,90,9f)) return MultilineRight;
	if (inName==HX_("Right",bc,7b,91,7c)) return Right;
	return super::__Field(inName,inCallProp);
}

static ::String Align_obj_sStaticFields[] = {
	HX_("Left",27,34,89,32),
	HX_("Right",bc,7b,91,7c),
	HX_("Center",f5,99,6f,3a),
	HX_("MultilineRight",cf,81,90,9f),
	HX_("MultilineCenter",82,e4,95,b6),
	::String(null())
};

::hx::Class Align_obj::__mClass;

Dynamic __Create_Align_obj() { return new Align_obj; }

void Align_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h2d.Align",91,b5,78,35), ::hx::TCanCast< Align_obj >,Align_obj_sStaticFields,0,
	&__Create_Align_obj, &__Create,
	&super::__SGetClass(), &CreateAlign_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Align_obj::__GetStatic;
}

void Align_obj::__boot()
{
Center = ::hx::CreateConstEnum< Align_obj >(HX_("Center",f5,99,6f,3a),2);
Left = ::hx::CreateConstEnum< Align_obj >(HX_("Left",27,34,89,32),0);
MultilineCenter = ::hx::CreateConstEnum< Align_obj >(HX_("MultilineCenter",82,e4,95,b6),4);
MultilineRight = ::hx::CreateConstEnum< Align_obj >(HX_("MultilineRight",cf,81,90,9f),3);
Right = ::hx::CreateConstEnum< Align_obj >(HX_("Right",bc,7b,91,7c),1);
}


} // end namespace h2d
