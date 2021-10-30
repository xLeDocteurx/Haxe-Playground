#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_Compare
#include <h3d/mat/Compare.h>
#endif
namespace h3d{
namespace mat{

::h3d::mat::Compare Compare_obj::Always;

::h3d::mat::Compare Compare_obj::Equal;

::h3d::mat::Compare Compare_obj::Greater;

::h3d::mat::Compare Compare_obj::GreaterEqual;

::h3d::mat::Compare Compare_obj::Less;

::h3d::mat::Compare Compare_obj::LessEqual;

::h3d::mat::Compare Compare_obj::Never;

::h3d::mat::Compare Compare_obj::NotEqual;

bool Compare_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Always",ef,82,6b,7b)) { outValue = Compare_obj::Always; return true; }
	if (inName==HX_("Equal",94,3f,b0,05)) { outValue = Compare_obj::Equal; return true; }
	if (inName==HX_("Greater",da,b8,11,85)) { outValue = Compare_obj::Greater; return true; }
	if (inName==HX_("GreaterEqual",7a,30,30,57)) { outValue = Compare_obj::GreaterEqual; return true; }
	if (inName==HX_("Less",79,3f,89,32)) { outValue = Compare_obj::Less; return true; }
	if (inName==HX_("LessEqual",7b,49,71,df)) { outValue = Compare_obj::LessEqual; return true; }
	if (inName==HX_("Never",6c,ae,5d,2c)) { outValue = Compare_obj::Never; return true; }
	if (inName==HX_("NotEqual",c1,5d,43,dc)) { outValue = Compare_obj::NotEqual; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Compare_obj)

int Compare_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Always",ef,82,6b,7b)) return 0;
	if (inName==HX_("Equal",94,3f,b0,05)) return 2;
	if (inName==HX_("Greater",da,b8,11,85)) return 4;
	if (inName==HX_("GreaterEqual",7a,30,30,57)) return 5;
	if (inName==HX_("Less",79,3f,89,32)) return 6;
	if (inName==HX_("LessEqual",7b,49,71,df)) return 7;
	if (inName==HX_("Never",6c,ae,5d,2c)) return 1;
	if (inName==HX_("NotEqual",c1,5d,43,dc)) return 3;
	return super::__FindIndex(inName);
}

int Compare_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Always",ef,82,6b,7b)) return 0;
	if (inName==HX_("Equal",94,3f,b0,05)) return 0;
	if (inName==HX_("Greater",da,b8,11,85)) return 0;
	if (inName==HX_("GreaterEqual",7a,30,30,57)) return 0;
	if (inName==HX_("Less",79,3f,89,32)) return 0;
	if (inName==HX_("LessEqual",7b,49,71,df)) return 0;
	if (inName==HX_("Never",6c,ae,5d,2c)) return 0;
	if (inName==HX_("NotEqual",c1,5d,43,dc)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Compare_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Always",ef,82,6b,7b)) return Always;
	if (inName==HX_("Equal",94,3f,b0,05)) return Equal;
	if (inName==HX_("Greater",da,b8,11,85)) return Greater;
	if (inName==HX_("GreaterEqual",7a,30,30,57)) return GreaterEqual;
	if (inName==HX_("Less",79,3f,89,32)) return Less;
	if (inName==HX_("LessEqual",7b,49,71,df)) return LessEqual;
	if (inName==HX_("Never",6c,ae,5d,2c)) return Never;
	if (inName==HX_("NotEqual",c1,5d,43,dc)) return NotEqual;
	return super::__Field(inName,inCallProp);
}

static ::String Compare_obj_sStaticFields[] = {
	HX_("Always",ef,82,6b,7b),
	HX_("Never",6c,ae,5d,2c),
	HX_("Equal",94,3f,b0,05),
	HX_("NotEqual",c1,5d,43,dc),
	HX_("Greater",da,b8,11,85),
	HX_("GreaterEqual",7a,30,30,57),
	HX_("Less",79,3f,89,32),
	HX_("LessEqual",7b,49,71,df),
	::String(null())
};

::hx::Class Compare_obj::__mClass;

Dynamic __Create_Compare_obj() { return new Compare_obj; }

void Compare_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.mat.Compare",02,a8,70,46), ::hx::TCanCast< Compare_obj >,Compare_obj_sStaticFields,0,
	&__Create_Compare_obj, &__Create,
	&super::__SGetClass(), &CreateCompare_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Compare_obj::__GetStatic;
}

void Compare_obj::__boot()
{
Always = ::hx::CreateConstEnum< Compare_obj >(HX_("Always",ef,82,6b,7b),0);
Equal = ::hx::CreateConstEnum< Compare_obj >(HX_("Equal",94,3f,b0,05),2);
Greater = ::hx::CreateConstEnum< Compare_obj >(HX_("Greater",da,b8,11,85),4);
GreaterEqual = ::hx::CreateConstEnum< Compare_obj >(HX_("GreaterEqual",7a,30,30,57),5);
Less = ::hx::CreateConstEnum< Compare_obj >(HX_("Less",79,3f,89,32),6);
LessEqual = ::hx::CreateConstEnum< Compare_obj >(HX_("LessEqual",7b,49,71,df),7);
Never = ::hx::CreateConstEnum< Compare_obj >(HX_("Never",6c,ae,5d,2c),1);
NotEqual = ::hx::CreateConstEnum< Compare_obj >(HX_("NotEqual",c1,5d,43,dc),3);
}


} // end namespace h3d
} // end namespace mat
