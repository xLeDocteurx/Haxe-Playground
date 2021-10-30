#include <hxcpp.h>

#ifndef INCLUDED_hxd_res_Filter
#include <hxd/res/Filter.h>
#endif
namespace hxd{
namespace res{

::hxd::res::Filter Filter_obj::Chromatic;

::hxd::res::Filter Filter_obj::Fast;

bool Filter_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Chromatic",78,15,fc,5a)) { outValue = Filter_obj::Chromatic; return true; }
	if (inName==HX_("Fast",bc,ee,8e,2e)) { outValue = Filter_obj::Fast; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Filter_obj)

int Filter_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Chromatic",78,15,fc,5a)) return 1;
	if (inName==HX_("Fast",bc,ee,8e,2e)) return 0;
	return super::__FindIndex(inName);
}

int Filter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Chromatic",78,15,fc,5a)) return 0;
	if (inName==HX_("Fast",bc,ee,8e,2e)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Filter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Chromatic",78,15,fc,5a)) return Chromatic;
	if (inName==HX_("Fast",bc,ee,8e,2e)) return Fast;
	return super::__Field(inName,inCallProp);
}

static ::String Filter_obj_sStaticFields[] = {
	HX_("Fast",bc,ee,8e,2e),
	HX_("Chromatic",78,15,fc,5a),
	::String(null())
};

::hx::Class Filter_obj::__mClass;

Dynamic __Create_Filter_obj() { return new Filter_obj; }

void Filter_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.res.Filter",00,c8,18,5e), ::hx::TCanCast< Filter_obj >,Filter_obj_sStaticFields,0,
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
Chromatic = ::hx::CreateConstEnum< Filter_obj >(HX_("Chromatic",78,15,fc,5a),1);
Fast = ::hx::CreateConstEnum< Filter_obj >(HX_("Fast",bc,ee,8e,2e),0);
}


} // end namespace hxd
} // end namespace res
