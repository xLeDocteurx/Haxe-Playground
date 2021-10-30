#include <hxcpp.h>

#ifndef INCLUDED_hxsl_SizeDecl
#include <hxsl/SizeDecl.h>
#endif
namespace hxsl{

::hxsl::SizeDecl SizeDecl_obj::SConst(int v)
{
	return ::hx::CreateEnum< SizeDecl_obj >(HX_("SConst",10,5c,2a,0d),0,1)->_hx_init(0,v);
}

::hxsl::SizeDecl SizeDecl_obj::SVar( ::Dynamic v)
{
	return ::hx::CreateEnum< SizeDecl_obj >(HX_("SVar",54,4c,1e,37),1,1)->_hx_init(0,v);
}

bool SizeDecl_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SConst",10,5c,2a,0d)) { outValue = SizeDecl_obj::SConst_dyn(); return true; }
	if (inName==HX_("SVar",54,4c,1e,37)) { outValue = SizeDecl_obj::SVar_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SizeDecl_obj)

int SizeDecl_obj::__FindIndex(::String inName)
{
	if (inName==HX_("SConst",10,5c,2a,0d)) return 0;
	if (inName==HX_("SVar",54,4c,1e,37)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SizeDecl_obj,SConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SizeDecl_obj,SVar,return)

int SizeDecl_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("SConst",10,5c,2a,0d)) return 1;
	if (inName==HX_("SVar",54,4c,1e,37)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val SizeDecl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SConst",10,5c,2a,0d)) return SConst_dyn();
	if (inName==HX_("SVar",54,4c,1e,37)) return SVar_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String SizeDecl_obj_sStaticFields[] = {
	HX_("SConst",10,5c,2a,0d),
	HX_("SVar",54,4c,1e,37),
	::String(null())
};

::hx::Class SizeDecl_obj::__mClass;

Dynamic __Create_SizeDecl_obj() { return new SizeDecl_obj; }

void SizeDecl_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.SizeDecl",50,cb,8e,c8), ::hx::TCanCast< SizeDecl_obj >,SizeDecl_obj_sStaticFields,0,
	&__Create_SizeDecl_obj, &__Create,
	&super::__SGetClass(), &CreateSizeDecl_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SizeDecl_obj::__GetStatic;
}

void SizeDecl_obj::__boot()
{
}


} // end namespace hxsl
