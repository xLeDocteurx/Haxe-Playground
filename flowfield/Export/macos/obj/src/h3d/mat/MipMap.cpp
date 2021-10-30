#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_MipMap
#include <h3d/mat/MipMap.h>
#endif
namespace h3d{
namespace mat{

::h3d::mat::MipMap MipMap_obj::Linear;

::h3d::mat::MipMap MipMap_obj::Nearest;

::h3d::mat::MipMap MipMap_obj::None;

bool MipMap_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Linear",05,c6,34,21)) { outValue = MipMap_obj::Linear; return true; }
	if (inName==HX_("Nearest",3e,40,1b,33)) { outValue = MipMap_obj::Nearest; return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = MipMap_obj::None; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(MipMap_obj)

int MipMap_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Linear",05,c6,34,21)) return 2;
	if (inName==HX_("Nearest",3e,40,1b,33)) return 1;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	return super::__FindIndex(inName);
}

int MipMap_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Linear",05,c6,34,21)) return 0;
	if (inName==HX_("Nearest",3e,40,1b,33)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val MipMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Linear",05,c6,34,21)) return Linear;
	if (inName==HX_("Nearest",3e,40,1b,33)) return Nearest;
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	return super::__Field(inName,inCallProp);
}

static ::String MipMap_obj_sStaticFields[] = {
	HX_("None",d8,3e,e3,33),
	HX_("Nearest",3e,40,1b,33),
	HX_("Linear",05,c6,34,21),
	::String(null())
};

::hx::Class MipMap_obj::__mClass;

Dynamic __Create_MipMap_obj() { return new MipMap_obj; }

void MipMap_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.mat.MipMap",ab,30,36,8c), ::hx::TCanCast< MipMap_obj >,MipMap_obj_sStaticFields,0,
	&__Create_MipMap_obj, &__Create,
	&super::__SGetClass(), &CreateMipMap_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &MipMap_obj::__GetStatic;
}

void MipMap_obj::__boot()
{
Linear = ::hx::CreateConstEnum< MipMap_obj >(HX_("Linear",05,c6,34,21),2);
Nearest = ::hx::CreateConstEnum< MipMap_obj >(HX_("Nearest",3e,40,1b,33),1);
None = ::hx::CreateConstEnum< MipMap_obj >(HX_("None",d8,3e,e3,33),0);
}


} // end namespace h3d
} // end namespace mat
