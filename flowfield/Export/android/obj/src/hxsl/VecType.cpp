#include <hxcpp.h>

#ifndef INCLUDED_hxsl_VecType
#include <hxsl/VecType.h>
#endif
namespace hxsl{

::hxsl::VecType VecType_obj::VBool;

::hxsl::VecType VecType_obj::VFloat;

::hxsl::VecType VecType_obj::VInt;

bool VecType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("VBool",a0,93,6a,b0)) { outValue = VecType_obj::VBool; return true; }
	if (inName==HX_("VFloat",66,3d,75,f8)) { outValue = VecType_obj::VFloat; return true; }
	if (inName==HX_("VInt",39,1e,10,39)) { outValue = VecType_obj::VInt; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(VecType_obj)

int VecType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("VBool",a0,93,6a,b0)) return 2;
	if (inName==HX_("VFloat",66,3d,75,f8)) return 1;
	if (inName==HX_("VInt",39,1e,10,39)) return 0;
	return super::__FindIndex(inName);
}

int VecType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("VBool",a0,93,6a,b0)) return 0;
	if (inName==HX_("VFloat",66,3d,75,f8)) return 0;
	if (inName==HX_("VInt",39,1e,10,39)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val VecType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("VBool",a0,93,6a,b0)) return VBool;
	if (inName==HX_("VFloat",66,3d,75,f8)) return VFloat;
	if (inName==HX_("VInt",39,1e,10,39)) return VInt;
	return super::__Field(inName,inCallProp);
}

static ::String VecType_obj_sStaticFields[] = {
	HX_("VInt",39,1e,10,39),
	HX_("VFloat",66,3d,75,f8),
	HX_("VBool",a0,93,6a,b0),
	::String(null())
};

::hx::Class VecType_obj::__mClass;

Dynamic __Create_VecType_obj() { return new VecType_obj; }

void VecType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.VecType",49,59,32,57), ::hx::TCanCast< VecType_obj >,VecType_obj_sStaticFields,0,
	&__Create_VecType_obj, &__Create,
	&super::__SGetClass(), &CreateVecType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &VecType_obj::__GetStatic;
}

void VecType_obj::__boot()
{
VBool = ::hx::CreateConstEnum< VecType_obj >(HX_("VBool",a0,93,6a,b0),2);
VFloat = ::hx::CreateConstEnum< VecType_obj >(HX_("VFloat",66,3d,75,f8),1);
VInt = ::hx::CreateConstEnum< VecType_obj >(HX_("VInt",39,1e,10,39),0);
}


} // end namespace hxsl
