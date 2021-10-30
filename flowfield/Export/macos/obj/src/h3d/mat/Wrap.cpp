#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_Wrap
#include <h3d/mat/Wrap.h>
#endif
namespace h3d{
namespace mat{

::h3d::mat::Wrap Wrap_obj::Clamp;

::h3d::mat::Wrap Wrap_obj::Repeat;

bool Wrap_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clamp",db,e2,85,db)) { outValue = Wrap_obj::Clamp; return true; }
	if (inName==HX_("Repeat",7b,0b,11,3b)) { outValue = Wrap_obj::Repeat; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Wrap_obj)

int Wrap_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Clamp",db,e2,85,db)) return 0;
	if (inName==HX_("Repeat",7b,0b,11,3b)) return 1;
	return super::__FindIndex(inName);
}

int Wrap_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Clamp",db,e2,85,db)) return 0;
	if (inName==HX_("Repeat",7b,0b,11,3b)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Wrap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clamp",db,e2,85,db)) return Clamp;
	if (inName==HX_("Repeat",7b,0b,11,3b)) return Repeat;
	return super::__Field(inName,inCallProp);
}

static ::String Wrap_obj_sStaticFields[] = {
	HX_("Clamp",db,e2,85,db),
	HX_("Repeat",7b,0b,11,3b),
	::String(null())
};

::hx::Class Wrap_obj::__mClass;

Dynamic __Create_Wrap_obj() { return new Wrap_obj; }

void Wrap_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.mat.Wrap",4d,1e,55,9a), ::hx::TCanCast< Wrap_obj >,Wrap_obj_sStaticFields,0,
	&__Create_Wrap_obj, &__Create,
	&super::__SGetClass(), &CreateWrap_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Wrap_obj::__GetStatic;
}

void Wrap_obj::__boot()
{
Clamp = ::hx::CreateConstEnum< Wrap_obj >(HX_("Clamp",db,e2,85,db),0);
Repeat = ::hx::CreateConstEnum< Wrap_obj >(HX_("Repeat",7b,0b,11,3b),1);
}


} // end namespace h3d
} // end namespace mat
