#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_DepthFormat
#include <h3d/mat/DepthFormat.h>
#endif
namespace h3d{
namespace mat{

::h3d::mat::DepthFormat DepthFormat_obj::Depth16;

::h3d::mat::DepthFormat DepthFormat_obj::Depth24;

::h3d::mat::DepthFormat DepthFormat_obj::Depth24Stencil8;

bool DepthFormat_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Depth16",88,ca,9b,37)) { outValue = DepthFormat_obj::Depth16; return true; }
	if (inName==HX_("Depth24",65,cb,9b,37)) { outValue = DepthFormat_obj::Depth24; return true; }
	if (inName==HX_("Depth24Stencil8",41,73,11,cf)) { outValue = DepthFormat_obj::Depth24Stencil8; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DepthFormat_obj)

int DepthFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Depth16",88,ca,9b,37)) return 0;
	if (inName==HX_("Depth24",65,cb,9b,37)) return 1;
	if (inName==HX_("Depth24Stencil8",41,73,11,cf)) return 2;
	return super::__FindIndex(inName);
}

int DepthFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Depth16",88,ca,9b,37)) return 0;
	if (inName==HX_("Depth24",65,cb,9b,37)) return 0;
	if (inName==HX_("Depth24Stencil8",41,73,11,cf)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val DepthFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Depth16",88,ca,9b,37)) return Depth16;
	if (inName==HX_("Depth24",65,cb,9b,37)) return Depth24;
	if (inName==HX_("Depth24Stencil8",41,73,11,cf)) return Depth24Stencil8;
	return super::__Field(inName,inCallProp);
}

static ::String DepthFormat_obj_sStaticFields[] = {
	HX_("Depth16",88,ca,9b,37),
	HX_("Depth24",65,cb,9b,37),
	HX_("Depth24Stencil8",41,73,11,cf),
	::String(null())
};

::hx::Class DepthFormat_obj::__mClass;

Dynamic __Create_DepthFormat_obj() { return new DepthFormat_obj; }

void DepthFormat_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.mat.DepthFormat",77,1a,57,ab), ::hx::TCanCast< DepthFormat_obj >,DepthFormat_obj_sStaticFields,0,
	&__Create_DepthFormat_obj, &__Create,
	&super::__SGetClass(), &CreateDepthFormat_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DepthFormat_obj::__GetStatic;
}

void DepthFormat_obj::__boot()
{
Depth16 = ::hx::CreateConstEnum< DepthFormat_obj >(HX_("Depth16",88,ca,9b,37),0);
Depth24 = ::hx::CreateConstEnum< DepthFormat_obj >(HX_("Depth24",65,cb,9b,37),1);
Depth24Stencil8 = ::hx::CreateConstEnum< DepthFormat_obj >(HX_("Depth24Stencil8",41,73,11,cf),2);
}


} // end namespace h3d
} // end namespace mat
