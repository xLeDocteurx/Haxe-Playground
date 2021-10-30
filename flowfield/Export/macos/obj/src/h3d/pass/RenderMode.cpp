#include <hxcpp.h>

#ifndef INCLUDED_h3d_pass_RenderMode
#include <h3d/pass/RenderMode.h>
#endif
namespace h3d{
namespace pass{

::h3d::pass::RenderMode RenderMode_obj::Dynamic;

::h3d::pass::RenderMode RenderMode_obj::Mixed;

::h3d::pass::RenderMode RenderMode_obj::None;

::h3d::pass::RenderMode RenderMode_obj::Static;

bool RenderMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Dynamic",5f,c7,66,03)) { outValue = RenderMode_obj::Dynamic; return true; }
	if (inName==HX_("Mixed",db,78,9d,9b)) { outValue = RenderMode_obj::Mixed; return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = RenderMode_obj::None; return true; }
	if (inName==HX_("Static",ce,50,90,3a)) { outValue = RenderMode_obj::Static; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(RenderMode_obj)

int RenderMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Dynamic",5f,c7,66,03)) return 2;
	if (inName==HX_("Mixed",db,78,9d,9b)) return 3;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	if (inName==HX_("Static",ce,50,90,3a)) return 1;
	return super::__FindIndex(inName);
}

int RenderMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Dynamic",5f,c7,66,03)) return 0;
	if (inName==HX_("Mixed",db,78,9d,9b)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	if (inName==HX_("Static",ce,50,90,3a)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val RenderMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Dynamic",5f,c7,66,03)) return Dynamic;
	if (inName==HX_("Mixed",db,78,9d,9b)) return Mixed;
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	if (inName==HX_("Static",ce,50,90,3a)) return Static;
	return super::__Field(inName,inCallProp);
}

static ::String RenderMode_obj_sStaticFields[] = {
	HX_("None",d8,3e,e3,33),
	HX_("Static",ce,50,90,3a),
	HX_("Dynamic",5f,c7,66,03),
	HX_("Mixed",db,78,9d,9b),
	::String(null())
};

::hx::Class RenderMode_obj::__mClass;

Dynamic __Create_RenderMode_obj() { return new RenderMode_obj; }

void RenderMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.pass.RenderMode",41,6f,6a,7d), ::hx::TCanCast< RenderMode_obj >,RenderMode_obj_sStaticFields,0,
	&__Create_RenderMode_obj, &__Create,
	&super::__SGetClass(), &CreateRenderMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &RenderMode_obj::__GetStatic;
}

void RenderMode_obj::__boot()
{
Dynamic = ::hx::CreateConstEnum< RenderMode_obj >(HX_("Dynamic",5f,c7,66,03),2);
Mixed = ::hx::CreateConstEnum< RenderMode_obj >(HX_("Mixed",db,78,9d,9b),3);
None = ::hx::CreateConstEnum< RenderMode_obj >(HX_("None",d8,3e,e3,33),0);
Static = ::hx::CreateConstEnum< RenderMode_obj >(HX_("Static",ce,50,90,3a),1);
}


} // end namespace h3d
} // end namespace pass
