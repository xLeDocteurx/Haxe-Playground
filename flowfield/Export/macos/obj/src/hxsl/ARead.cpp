#include <hxcpp.h>

#ifndef INCLUDED_hxsl_ARead
#include <hxsl/ARead.h>
#endif
#ifndef INCLUDED_hxsl__Flatten_Alloc
#include <hxsl/_Flatten/Alloc.h>
#endif
namespace hxsl{

::hxsl::ARead ARead_obj::AIndex( ::hxsl::_Flatten::Alloc a)
{
	return ::hx::CreateEnum< ARead_obj >(HX_("AIndex",11,7f,74,4e),0,1)->_hx_init(0,a);
}

::hxsl::ARead ARead_obj::AOffset( ::hxsl::_Flatten::Alloc a,int stride, ::Dynamic delta)
{
	return ::hx::CreateEnum< ARead_obj >(HX_("AOffset",b4,32,c7,23),1,3)->_hx_init(0,a)->_hx_init(1,stride)->_hx_init(2,delta);
}

bool ARead_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AIndex",11,7f,74,4e)) { outValue = ARead_obj::AIndex_dyn(); return true; }
	if (inName==HX_("AOffset",b4,32,c7,23)) { outValue = ARead_obj::AOffset_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ARead_obj)

int ARead_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AIndex",11,7f,74,4e)) return 0;
	if (inName==HX_("AOffset",b4,32,c7,23)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARead_obj,AIndex,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ARead_obj,AOffset,return)

int ARead_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AIndex",11,7f,74,4e)) return 1;
	if (inName==HX_("AOffset",b4,32,c7,23)) return 3;
	return super::__FindArgCount(inName);
}

::hx::Val ARead_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AIndex",11,7f,74,4e)) return AIndex_dyn();
	if (inName==HX_("AOffset",b4,32,c7,23)) return AOffset_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ARead_obj_sStaticFields[] = {
	HX_("AIndex",11,7f,74,4e),
	HX_("AOffset",b4,32,c7,23),
	::String(null())
};

::hx::Class ARead_obj::__mClass;

Dynamic __Create_ARead_obj() { return new ARead_obj; }

void ARead_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.ARead",b2,0d,18,44), ::hx::TCanCast< ARead_obj >,ARead_obj_sStaticFields,0,
	&__Create_ARead_obj, &__Create,
	&super::__SGetClass(), &CreateARead_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ARead_obj::__GetStatic;
}

void ARead_obj::__boot()
{
}


} // end namespace hxsl
