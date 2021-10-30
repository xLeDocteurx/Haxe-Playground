#include <hxcpp.h>

#ifndef INCLUDED_hxd_Flags
#include <hxd/Flags.h>
#endif
namespace hxd{

::hxd::Flags Flags_obj::AlphaPremultiplied;

::hxd::Flags Flags_obj::FlipY;

::hxd::Flags Flags_obj::ReadOnly;

bool Flags_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AlphaPremultiplied",38,fb,72,45)) { outValue = Flags_obj::AlphaPremultiplied; return true; }
	if (inName==HX_("FlipY",ec,b4,bf,95)) { outValue = Flags_obj::FlipY; return true; }
	if (inName==HX_("ReadOnly",02,1c,5c,4b)) { outValue = Flags_obj::ReadOnly; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Flags_obj)

int Flags_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AlphaPremultiplied",38,fb,72,45)) return 1;
	if (inName==HX_("FlipY",ec,b4,bf,95)) return 2;
	if (inName==HX_("ReadOnly",02,1c,5c,4b)) return 0;
	return super::__FindIndex(inName);
}

int Flags_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AlphaPremultiplied",38,fb,72,45)) return 0;
	if (inName==HX_("FlipY",ec,b4,bf,95)) return 0;
	if (inName==HX_("ReadOnly",02,1c,5c,4b)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Flags_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AlphaPremultiplied",38,fb,72,45)) return AlphaPremultiplied;
	if (inName==HX_("FlipY",ec,b4,bf,95)) return FlipY;
	if (inName==HX_("ReadOnly",02,1c,5c,4b)) return ReadOnly;
	return super::__Field(inName,inCallProp);
}

static ::String Flags_obj_sStaticFields[] = {
	HX_("ReadOnly",02,1c,5c,4b),
	HX_("AlphaPremultiplied",38,fb,72,45),
	HX_("FlipY",ec,b4,bf,95),
	::String(null())
};

::hx::Class Flags_obj::__mClass;

Dynamic __Create_Flags_obj() { return new Flags_obj; }

void Flags_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.Flags",8d,be,3e,ba), ::hx::TCanCast< Flags_obj >,Flags_obj_sStaticFields,0,
	&__Create_Flags_obj, &__Create,
	&super::__SGetClass(), &CreateFlags_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Flags_obj::__GetStatic;
}

void Flags_obj::__boot()
{
AlphaPremultiplied = ::hx::CreateConstEnum< Flags_obj >(HX_("AlphaPremultiplied",38,fb,72,45),1);
FlipY = ::hx::CreateConstEnum< Flags_obj >(HX_("FlipY",ec,b4,bf,95),2);
ReadOnly = ::hx::CreateConstEnum< Flags_obj >(HX_("ReadOnly",02,1c,5c,4b),0);
}


} // end namespace hxd
