#include <hxcpp.h>

#ifndef INCLUDED_hxsl_Component
#include <hxsl/Component.h>
#endif
namespace hxsl{

::hxsl::Component Component_obj::W;

::hxsl::Component Component_obj::X;

::hxsl::Component Component_obj::Y;

::hxsl::Component Component_obj::Z;

bool Component_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("W",57,00,00,00)) { outValue = Component_obj::W; return true; }
	if (inName==HX_("X",58,00,00,00)) { outValue = Component_obj::X; return true; }
	if (inName==HX_("Y",59,00,00,00)) { outValue = Component_obj::Y; return true; }
	if (inName==HX_("Z",5a,00,00,00)) { outValue = Component_obj::Z; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Component_obj)

int Component_obj::__FindIndex(::String inName)
{
	if (inName==HX_("W",57,00,00,00)) return 3;
	if (inName==HX_("X",58,00,00,00)) return 0;
	if (inName==HX_("Y",59,00,00,00)) return 1;
	if (inName==HX_("Z",5a,00,00,00)) return 2;
	return super::__FindIndex(inName);
}

int Component_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("W",57,00,00,00)) return 0;
	if (inName==HX_("X",58,00,00,00)) return 0;
	if (inName==HX_("Y",59,00,00,00)) return 0;
	if (inName==HX_("Z",5a,00,00,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Component_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("W",57,00,00,00)) return W;
	if (inName==HX_("X",58,00,00,00)) return X;
	if (inName==HX_("Y",59,00,00,00)) return Y;
	if (inName==HX_("Z",5a,00,00,00)) return Z;
	return super::__Field(inName,inCallProp);
}

static ::String Component_obj_sStaticFields[] = {
	HX_("X",58,00,00,00),
	HX_("Y",59,00,00,00),
	HX_("Z",5a,00,00,00),
	HX_("W",57,00,00,00),
	::String(null())
};

::hx::Class Component_obj::__mClass;

Dynamic __Create_Component_obj() { return new Component_obj; }

void Component_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.Component",98,8b,00,ee), ::hx::TCanCast< Component_obj >,Component_obj_sStaticFields,0,
	&__Create_Component_obj, &__Create,
	&super::__SGetClass(), &CreateComponent_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Component_obj::__GetStatic;
}

void Component_obj::__boot()
{
W = ::hx::CreateConstEnum< Component_obj >(HX_("W",57,00,00,00),3);
X = ::hx::CreateConstEnum< Component_obj >(HX_("X",58,00,00,00),0);
Y = ::hx::CreateConstEnum< Component_obj >(HX_("Y",59,00,00,00),1);
Z = ::hx::CreateConstEnum< Component_obj >(HX_("Z",5a,00,00,00),2);
}


} // end namespace hxsl
