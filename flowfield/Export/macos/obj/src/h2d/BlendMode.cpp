#include <hxcpp.h>

#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
namespace h2d{

::h2d::BlendMode BlendMode_obj::Add;

::h2d::BlendMode BlendMode_obj::Alpha;

::h2d::BlendMode BlendMode_obj::AlphaAdd;

::h2d::BlendMode BlendMode_obj::AlphaMultiply;

::h2d::BlendMode BlendMode_obj::Erase;

::h2d::BlendMode BlendMode_obj::Max;

::h2d::BlendMode BlendMode_obj::Min;

::h2d::BlendMode BlendMode_obj::Multiply;

::h2d::BlendMode BlendMode_obj::None;

::h2d::BlendMode BlendMode_obj::Screen;

::h2d::BlendMode BlendMode_obj::SoftAdd;

::h2d::BlendMode BlendMode_obj::Sub;

bool BlendMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Add",01,aa,31,00)) { outValue = BlendMode_obj::Add; return true; }
	if (inName==HX_("Alpha",3e,17,c4,b4)) { outValue = BlendMode_obj::Alpha; return true; }
	if (inName==HX_("AlphaAdd",83,2d,d1,fa)) { outValue = BlendMode_obj::AlphaAdd; return true; }
	if (inName==HX_("AlphaMultiply",82,23,e9,53)) { outValue = BlendMode_obj::AlphaMultiply; return true; }
	if (inName==HX_("Erase",c6,58,4a,06)) { outValue = BlendMode_obj::Erase; return true; }
	if (inName==HX_("Max",84,c2,3a,00)) { outValue = BlendMode_obj::Max; return true; }
	if (inName==HX_("Min",72,c9,3a,00)) { outValue = BlendMode_obj::Min; return true; }
	if (inName==HX_("Multiply",44,9e,3e,74)) { outValue = BlendMode_obj::Multiply; return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = BlendMode_obj::None; return true; }
	if (inName==HX_("Screen",8c,af,f1,7b)) { outValue = BlendMode_obj::Screen; return true; }
	if (inName==HX_("SoftAdd",37,23,d0,e4)) { outValue = BlendMode_obj::SoftAdd; return true; }
	if (inName==HX_("Sub",60,61,3f,00)) { outValue = BlendMode_obj::Sub; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(BlendMode_obj)

int BlendMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Add",01,aa,31,00)) return 2;
	if (inName==HX_("Alpha",3e,17,c4,b4)) return 1;
	if (inName==HX_("AlphaAdd",83,2d,d1,fa)) return 3;
	if (inName==HX_("AlphaMultiply",82,23,e9,53)) return 6;
	if (inName==HX_("Erase",c6,58,4a,06)) return 7;
	if (inName==HX_("Max",84,c2,3a,00)) return 10;
	if (inName==HX_("Min",72,c9,3a,00)) return 11;
	if (inName==HX_("Multiply",44,9e,3e,74)) return 5;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	if (inName==HX_("Screen",8c,af,f1,7b)) return 8;
	if (inName==HX_("SoftAdd",37,23,d0,e4)) return 4;
	if (inName==HX_("Sub",60,61,3f,00)) return 9;
	return super::__FindIndex(inName);
}

int BlendMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Add",01,aa,31,00)) return 0;
	if (inName==HX_("Alpha",3e,17,c4,b4)) return 0;
	if (inName==HX_("AlphaAdd",83,2d,d1,fa)) return 0;
	if (inName==HX_("AlphaMultiply",82,23,e9,53)) return 0;
	if (inName==HX_("Erase",c6,58,4a,06)) return 0;
	if (inName==HX_("Max",84,c2,3a,00)) return 0;
	if (inName==HX_("Min",72,c9,3a,00)) return 0;
	if (inName==HX_("Multiply",44,9e,3e,74)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	if (inName==HX_("Screen",8c,af,f1,7b)) return 0;
	if (inName==HX_("SoftAdd",37,23,d0,e4)) return 0;
	if (inName==HX_("Sub",60,61,3f,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val BlendMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Add",01,aa,31,00)) return Add;
	if (inName==HX_("Alpha",3e,17,c4,b4)) return Alpha;
	if (inName==HX_("AlphaAdd",83,2d,d1,fa)) return AlphaAdd;
	if (inName==HX_("AlphaMultiply",82,23,e9,53)) return AlphaMultiply;
	if (inName==HX_("Erase",c6,58,4a,06)) return Erase;
	if (inName==HX_("Max",84,c2,3a,00)) return Max;
	if (inName==HX_("Min",72,c9,3a,00)) return Min;
	if (inName==HX_("Multiply",44,9e,3e,74)) return Multiply;
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	if (inName==HX_("Screen",8c,af,f1,7b)) return Screen;
	if (inName==HX_("SoftAdd",37,23,d0,e4)) return SoftAdd;
	if (inName==HX_("Sub",60,61,3f,00)) return Sub;
	return super::__Field(inName,inCallProp);
}

static ::String BlendMode_obj_sStaticFields[] = {
	HX_("None",d8,3e,e3,33),
	HX_("Alpha",3e,17,c4,b4),
	HX_("Add",01,aa,31,00),
	HX_("AlphaAdd",83,2d,d1,fa),
	HX_("SoftAdd",37,23,d0,e4),
	HX_("Multiply",44,9e,3e,74),
	HX_("AlphaMultiply",82,23,e9,53),
	HX_("Erase",c6,58,4a,06),
	HX_("Screen",8c,af,f1,7b),
	HX_("Sub",60,61,3f,00),
	HX_("Max",84,c2,3a,00),
	HX_("Min",72,c9,3a,00),
	::String(null())
};

::hx::Class BlendMode_obj::__mClass;

Dynamic __Create_BlendMode_obj() { return new BlendMode_obj; }

void BlendMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h2d.BlendMode",20,99,e4,bf), ::hx::TCanCast< BlendMode_obj >,BlendMode_obj_sStaticFields,0,
	&__Create_BlendMode_obj, &__Create,
	&super::__SGetClass(), &CreateBlendMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &BlendMode_obj::__GetStatic;
}

void BlendMode_obj::__boot()
{
Add = ::hx::CreateConstEnum< BlendMode_obj >(HX_("Add",01,aa,31,00),2);
Alpha = ::hx::CreateConstEnum< BlendMode_obj >(HX_("Alpha",3e,17,c4,b4),1);
AlphaAdd = ::hx::CreateConstEnum< BlendMode_obj >(HX_("AlphaAdd",83,2d,d1,fa),3);
AlphaMultiply = ::hx::CreateConstEnum< BlendMode_obj >(HX_("AlphaMultiply",82,23,e9,53),6);
Erase = ::hx::CreateConstEnum< BlendMode_obj >(HX_("Erase",c6,58,4a,06),7);
Max = ::hx::CreateConstEnum< BlendMode_obj >(HX_("Max",84,c2,3a,00),10);
Min = ::hx::CreateConstEnum< BlendMode_obj >(HX_("Min",72,c9,3a,00),11);
Multiply = ::hx::CreateConstEnum< BlendMode_obj >(HX_("Multiply",44,9e,3e,74),5);
None = ::hx::CreateConstEnum< BlendMode_obj >(HX_("None",d8,3e,e3,33),0);
Screen = ::hx::CreateConstEnum< BlendMode_obj >(HX_("Screen",8c,af,f1,7b),8);
SoftAdd = ::hx::CreateConstEnum< BlendMode_obj >(HX_("SoftAdd",37,23,d0,e4),4);
Sub = ::hx::CreateConstEnum< BlendMode_obj >(HX_("Sub",60,61,3f,00),9);
}


} // end namespace h2d
