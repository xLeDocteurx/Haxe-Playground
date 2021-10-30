#include <hxcpp.h>

#ifndef INCLUDED_hxsl_FunctionKind
#include <hxsl/FunctionKind.h>
#endif
namespace hxsl{

::hxsl::FunctionKind FunctionKind_obj::Fragment;

::hxsl::FunctionKind FunctionKind_obj::Helper;

::hxsl::FunctionKind FunctionKind_obj::Init;

::hxsl::FunctionKind FunctionKind_obj::Vertex;

bool FunctionKind_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Fragment",f0,1b,97,87)) { outValue = FunctionKind_obj::Fragment; return true; }
	if (inName==HX_("Helper",8e,f1,e2,38)) { outValue = FunctionKind_obj::Helper; return true; }
	if (inName==HX_("Init",30,67,94,30)) { outValue = FunctionKind_obj::Init; return true; }
	if (inName==HX_("Vertex",84,4f,dc,d5)) { outValue = FunctionKind_obj::Vertex; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FunctionKind_obj)

int FunctionKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Fragment",f0,1b,97,87)) return 1;
	if (inName==HX_("Helper",8e,f1,e2,38)) return 3;
	if (inName==HX_("Init",30,67,94,30)) return 2;
	if (inName==HX_("Vertex",84,4f,dc,d5)) return 0;
	return super::__FindIndex(inName);
}

int FunctionKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Fragment",f0,1b,97,87)) return 0;
	if (inName==HX_("Helper",8e,f1,e2,38)) return 0;
	if (inName==HX_("Init",30,67,94,30)) return 0;
	if (inName==HX_("Vertex",84,4f,dc,d5)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FunctionKind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Fragment",f0,1b,97,87)) return Fragment;
	if (inName==HX_("Helper",8e,f1,e2,38)) return Helper;
	if (inName==HX_("Init",30,67,94,30)) return Init;
	if (inName==HX_("Vertex",84,4f,dc,d5)) return Vertex;
	return super::__Field(inName,inCallProp);
}

static ::String FunctionKind_obj_sStaticFields[] = {
	HX_("Vertex",84,4f,dc,d5),
	HX_("Fragment",f0,1b,97,87),
	HX_("Init",30,67,94,30),
	HX_("Helper",8e,f1,e2,38),
	::String(null())
};

::hx::Class FunctionKind_obj::__mClass;

Dynamic __Create_FunctionKind_obj() { return new FunctionKind_obj; }

void FunctionKind_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.FunctionKind",91,84,76,1e), ::hx::TCanCast< FunctionKind_obj >,FunctionKind_obj_sStaticFields,0,
	&__Create_FunctionKind_obj, &__Create,
	&super::__SGetClass(), &CreateFunctionKind_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FunctionKind_obj::__GetStatic;
}

void FunctionKind_obj::__boot()
{
Fragment = ::hx::CreateConstEnum< FunctionKind_obj >(HX_("Fragment",f0,1b,97,87),1);
Helper = ::hx::CreateConstEnum< FunctionKind_obj >(HX_("Helper",8e,f1,e2,38),3);
Init = ::hx::CreateConstEnum< FunctionKind_obj >(HX_("Init",30,67,94,30),2);
Vertex = ::hx::CreateConstEnum< FunctionKind_obj >(HX_("Vertex",84,4f,dc,d5),0);
}


} // end namespace hxsl
