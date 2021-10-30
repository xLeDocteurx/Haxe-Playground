#include <hxcpp.h>

#ifndef INCLUDED_h2d_ScaleModeAlign
#include <h2d/ScaleModeAlign.h>
#endif
namespace h2d{

::h2d::ScaleModeAlign ScaleModeAlign_obj::Bottom;

::h2d::ScaleModeAlign ScaleModeAlign_obj::Center;

::h2d::ScaleModeAlign ScaleModeAlign_obj::Left;

::h2d::ScaleModeAlign ScaleModeAlign_obj::Right;

::h2d::ScaleModeAlign ScaleModeAlign_obj::Top;

bool ScaleModeAlign_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Bottom",0b,5b,0d,9a)) { outValue = ScaleModeAlign_obj::Bottom; return true; }
	if (inName==HX_("Center",f5,99,6f,3a)) { outValue = ScaleModeAlign_obj::Center; return true; }
	if (inName==HX_("Left",27,34,89,32)) { outValue = ScaleModeAlign_obj::Left; return true; }
	if (inName==HX_("Right",bc,7b,91,7c)) { outValue = ScaleModeAlign_obj::Right; return true; }
	if (inName==HX_("Top",75,1e,40,00)) { outValue = ScaleModeAlign_obj::Top; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ScaleModeAlign_obj)

int ScaleModeAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Bottom",0b,5b,0d,9a)) return 4;
	if (inName==HX_("Center",f5,99,6f,3a)) return 2;
	if (inName==HX_("Left",27,34,89,32)) return 0;
	if (inName==HX_("Right",bc,7b,91,7c)) return 1;
	if (inName==HX_("Top",75,1e,40,00)) return 3;
	return super::__FindIndex(inName);
}

int ScaleModeAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Bottom",0b,5b,0d,9a)) return 0;
	if (inName==HX_("Center",f5,99,6f,3a)) return 0;
	if (inName==HX_("Left",27,34,89,32)) return 0;
	if (inName==HX_("Right",bc,7b,91,7c)) return 0;
	if (inName==HX_("Top",75,1e,40,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ScaleModeAlign_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Bottom",0b,5b,0d,9a)) return Bottom;
	if (inName==HX_("Center",f5,99,6f,3a)) return Center;
	if (inName==HX_("Left",27,34,89,32)) return Left;
	if (inName==HX_("Right",bc,7b,91,7c)) return Right;
	if (inName==HX_("Top",75,1e,40,00)) return Top;
	return super::__Field(inName,inCallProp);
}

static ::String ScaleModeAlign_obj_sStaticFields[] = {
	HX_("Left",27,34,89,32),
	HX_("Right",bc,7b,91,7c),
	HX_("Center",f5,99,6f,3a),
	HX_("Top",75,1e,40,00),
	HX_("Bottom",0b,5b,0d,9a),
	::String(null())
};

::hx::Class ScaleModeAlign_obj::__mClass;

Dynamic __Create_ScaleModeAlign_obj() { return new ScaleModeAlign_obj; }

void ScaleModeAlign_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h2d.ScaleModeAlign",2c,24,49,71), ::hx::TCanCast< ScaleModeAlign_obj >,ScaleModeAlign_obj_sStaticFields,0,
	&__Create_ScaleModeAlign_obj, &__Create,
	&super::__SGetClass(), &CreateScaleModeAlign_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ScaleModeAlign_obj::__GetStatic;
}

void ScaleModeAlign_obj::__boot()
{
Bottom = ::hx::CreateConstEnum< ScaleModeAlign_obj >(HX_("Bottom",0b,5b,0d,9a),4);
Center = ::hx::CreateConstEnum< ScaleModeAlign_obj >(HX_("Center",f5,99,6f,3a),2);
Left = ::hx::CreateConstEnum< ScaleModeAlign_obj >(HX_("Left",27,34,89,32),0);
Right = ::hx::CreateConstEnum< ScaleModeAlign_obj >(HX_("Right",bc,7b,91,7c),1);
Top = ::hx::CreateConstEnum< ScaleModeAlign_obj >(HX_("Top",75,1e,40,00),3);
}


} // end namespace h2d
