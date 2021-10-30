#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_Face
#include <h3d/mat/Face.h>
#endif
namespace h3d{
namespace mat{

::h3d::mat::Face Face_obj::Back;

::h3d::mat::Face Face_obj::Both;

::h3d::mat::Face Face_obj::Front;

::h3d::mat::Face Face_obj::None;

bool Face_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Back",47,06,ea,2b)) { outValue = Face_obj::Back; return true; }
	if (inName==HX_("Both",a1,b4,f4,2b)) { outValue = Face_obj::Both; return true; }
	if (inName==HX_("Front",89,88,bb,99)) { outValue = Face_obj::Front; return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = Face_obj::None; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Face_obj)

int Face_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Back",47,06,ea,2b)) return 1;
	if (inName==HX_("Both",a1,b4,f4,2b)) return 3;
	if (inName==HX_("Front",89,88,bb,99)) return 2;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	return super::__FindIndex(inName);
}

int Face_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Back",47,06,ea,2b)) return 0;
	if (inName==HX_("Both",a1,b4,f4,2b)) return 0;
	if (inName==HX_("Front",89,88,bb,99)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Face_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Back",47,06,ea,2b)) return Back;
	if (inName==HX_("Both",a1,b4,f4,2b)) return Both;
	if (inName==HX_("Front",89,88,bb,99)) return Front;
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	return super::__Field(inName,inCallProp);
}

static ::String Face_obj_sStaticFields[] = {
	HX_("None",d8,3e,e3,33),
	HX_("Back",47,06,ea,2b),
	HX_("Front",89,88,bb,99),
	HX_("Both",a1,b4,f4,2b),
	::String(null())
};

::hx::Class Face_obj::__mClass;

Dynamic __Create_Face_obj() { return new Face_obj; }

void Face_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.mat.Face",20,99,0b,8f), ::hx::TCanCast< Face_obj >,Face_obj_sStaticFields,0,
	&__Create_Face_obj, &__Create,
	&super::__SGetClass(), &CreateFace_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Face_obj::__GetStatic;
}

void Face_obj::__boot()
{
Back = ::hx::CreateConstEnum< Face_obj >(HX_("Back",47,06,ea,2b),1);
Both = ::hx::CreateConstEnum< Face_obj >(HX_("Both",a1,b4,f4,2b),3);
Front = ::hx::CreateConstEnum< Face_obj >(HX_("Front",89,88,bb,99),2);
None = ::hx::CreateConstEnum< Face_obj >(HX_("None",d8,3e,e3,33),0);
}


} // end namespace h3d
} // end namespace mat
