#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_Filter
#include <h3d/mat/Filter.h>
#endif
namespace h3d{
namespace mat{

::h3d::mat::Filter Filter_obj::Linear;

::h3d::mat::Filter Filter_obj::Nearest;

bool Filter_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Linear",05,c6,34,21)) { outValue = Filter_obj::Linear; return true; }
	if (inName==HX_("Nearest",3e,40,1b,33)) { outValue = Filter_obj::Nearest; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Filter_obj)

int Filter_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Linear",05,c6,34,21)) return 1;
	if (inName==HX_("Nearest",3e,40,1b,33)) return 0;
	return super::__FindIndex(inName);
}

int Filter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Linear",05,c6,34,21)) return 0;
	if (inName==HX_("Nearest",3e,40,1b,33)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Filter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Linear",05,c6,34,21)) return Linear;
	if (inName==HX_("Nearest",3e,40,1b,33)) return Nearest;
	return super::__Field(inName,inCallProp);
}

static ::String Filter_obj_sStaticFields[] = {
	HX_("Nearest",3e,40,1b,33),
	HX_("Linear",05,c6,34,21),
	::String(null())
};

::hx::Class Filter_obj::__mClass;

Dynamic __Create_Filter_obj() { return new Filter_obj; }

void Filter_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.mat.Filter",fb,6a,2f,bd), ::hx::TCanCast< Filter_obj >,Filter_obj_sStaticFields,0,
	&__Create_Filter_obj, &__Create,
	&super::__SGetClass(), &CreateFilter_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Filter_obj::__GetStatic;
}

void Filter_obj::__boot()
{
Linear = ::hx::CreateConstEnum< Filter_obj >(HX_("Linear",05,c6,34,21),1);
Nearest = ::hx::CreateConstEnum< Filter_obj >(HX_("Nearest",3e,40,1b,33),0);
}


} // end namespace h3d
} // end namespace mat
