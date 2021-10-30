#include <hxcpp.h>

#ifndef INCLUDED_h3d_impl_QueryKind
#include <h3d/impl/QueryKind.h>
#endif
namespace h3d{
namespace impl{

::h3d::impl::QueryKind QueryKind_obj::Samples;

::h3d::impl::QueryKind QueryKind_obj::TimeStamp;

bool QueryKind_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Samples",e9,ec,1a,51)) { outValue = QueryKind_obj::Samples; return true; }
	if (inName==HX_("TimeStamp",96,24,cf,da)) { outValue = QueryKind_obj::TimeStamp; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(QueryKind_obj)

int QueryKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Samples",e9,ec,1a,51)) return 1;
	if (inName==HX_("TimeStamp",96,24,cf,da)) return 0;
	return super::__FindIndex(inName);
}

int QueryKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Samples",e9,ec,1a,51)) return 0;
	if (inName==HX_("TimeStamp",96,24,cf,da)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val QueryKind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Samples",e9,ec,1a,51)) return Samples;
	if (inName==HX_("TimeStamp",96,24,cf,da)) return TimeStamp;
	return super::__Field(inName,inCallProp);
}

static ::String QueryKind_obj_sStaticFields[] = {
	HX_("TimeStamp",96,24,cf,da),
	HX_("Samples",e9,ec,1a,51),
	::String(null())
};

::hx::Class QueryKind_obj::__mClass;

Dynamic __Create_QueryKind_obj() { return new QueryKind_obj; }

void QueryKind_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.impl.QueryKind",e3,a2,ac,1a), ::hx::TCanCast< QueryKind_obj >,QueryKind_obj_sStaticFields,0,
	&__Create_QueryKind_obj, &__Create,
	&super::__SGetClass(), &CreateQueryKind_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &QueryKind_obj::__GetStatic;
}

void QueryKind_obj::__boot()
{
Samples = ::hx::CreateConstEnum< QueryKind_obj >(HX_("Samples",e9,ec,1a,51),1);
TimeStamp = ::hx::CreateConstEnum< QueryKind_obj >(HX_("TimeStamp",96,24,cf,da),0);
}


} // end namespace h3d
} // end namespace impl
