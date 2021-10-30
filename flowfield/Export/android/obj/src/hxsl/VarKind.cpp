#include <hxcpp.h>

#ifndef INCLUDED_hxsl_VarKind
#include <hxsl/VarKind.h>
#endif
namespace hxsl{

::hxsl::VarKind VarKind_obj::Function;

::hxsl::VarKind VarKind_obj::Global;

::hxsl::VarKind VarKind_obj::Input;

::hxsl::VarKind VarKind_obj::Local;

::hxsl::VarKind VarKind_obj::Output;

::hxsl::VarKind VarKind_obj::Param;

::hxsl::VarKind VarKind_obj::Var;

bool VarKind_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Function",38,67,04,ee)) { outValue = VarKind_obj::Function; return true; }
	if (inName==HX_("Global",83,a5,46,dc)) { outValue = VarKind_obj::Global; return true; }
	if (inName==HX_("Input",ea,33,4b,51)) { outValue = VarKind_obj::Input; return true; }
	if (inName==HX_("Local",4b,39,1e,0c)) { outValue = VarKind_obj::Local; return true; }
	if (inName==HX_("Output",21,83,15,41)) { outValue = VarKind_obj::Output; return true; }
	if (inName==HX_("Param",6d,f0,82,50)) { outValue = VarKind_obj::Param; return true; }
	if (inName==HX_("Var",c7,96,41,00)) { outValue = VarKind_obj::Var; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(VarKind_obj)

int VarKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Function",38,67,04,ee)) return 6;
	if (inName==HX_("Global",83,a5,46,dc)) return 0;
	if (inName==HX_("Input",ea,33,4b,51)) return 1;
	if (inName==HX_("Local",4b,39,1e,0c)) return 4;
	if (inName==HX_("Output",21,83,15,41)) return 5;
	if (inName==HX_("Param",6d,f0,82,50)) return 2;
	if (inName==HX_("Var",c7,96,41,00)) return 3;
	return super::__FindIndex(inName);
}

int VarKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Function",38,67,04,ee)) return 0;
	if (inName==HX_("Global",83,a5,46,dc)) return 0;
	if (inName==HX_("Input",ea,33,4b,51)) return 0;
	if (inName==HX_("Local",4b,39,1e,0c)) return 0;
	if (inName==HX_("Output",21,83,15,41)) return 0;
	if (inName==HX_("Param",6d,f0,82,50)) return 0;
	if (inName==HX_("Var",c7,96,41,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val VarKind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Function",38,67,04,ee)) return Function;
	if (inName==HX_("Global",83,a5,46,dc)) return Global;
	if (inName==HX_("Input",ea,33,4b,51)) return Input;
	if (inName==HX_("Local",4b,39,1e,0c)) return Local;
	if (inName==HX_("Output",21,83,15,41)) return Output;
	if (inName==HX_("Param",6d,f0,82,50)) return Param;
	if (inName==HX_("Var",c7,96,41,00)) return Var;
	return super::__Field(inName,inCallProp);
}

static ::String VarKind_obj_sStaticFields[] = {
	HX_("Global",83,a5,46,dc),
	HX_("Input",ea,33,4b,51),
	HX_("Param",6d,f0,82,50),
	HX_("Var",c7,96,41,00),
	HX_("Local",4b,39,1e,0c),
	HX_("Output",21,83,15,41),
	HX_("Function",38,67,04,ee),
	::String(null())
};

::hx::Class VarKind_obj::__mClass;

Dynamic __Create_VarKind_obj() { return new VarKind_obj; }

void VarKind_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.VarKind",f6,89,c8,5a), ::hx::TCanCast< VarKind_obj >,VarKind_obj_sStaticFields,0,
	&__Create_VarKind_obj, &__Create,
	&super::__SGetClass(), &CreateVarKind_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &VarKind_obj::__GetStatic;
}

void VarKind_obj::__boot()
{
Function = ::hx::CreateConstEnum< VarKind_obj >(HX_("Function",38,67,04,ee),6);
Global = ::hx::CreateConstEnum< VarKind_obj >(HX_("Global",83,a5,46,dc),0);
Input = ::hx::CreateConstEnum< VarKind_obj >(HX_("Input",ea,33,4b,51),1);
Local = ::hx::CreateConstEnum< VarKind_obj >(HX_("Local",4b,39,1e,0c),4);
Output = ::hx::CreateConstEnum< VarKind_obj >(HX_("Output",21,83,15,41),5);
Param = ::hx::CreateConstEnum< VarKind_obj >(HX_("Param",6d,f0,82,50),2);
Var = ::hx::CreateConstEnum< VarKind_obj >(HX_("Var",c7,96,41,00),3);
}


} // end namespace hxsl
