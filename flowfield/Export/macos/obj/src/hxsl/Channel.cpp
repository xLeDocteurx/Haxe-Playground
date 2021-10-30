#include <hxcpp.h>

#ifndef INCLUDED_hxsl_Channel
#include <hxsl/Channel.h>
#endif
namespace hxsl{

::hxsl::Channel Channel_obj::A;

::hxsl::Channel Channel_obj::B;

::hxsl::Channel Channel_obj::G;

::hxsl::Channel Channel_obj::PackedFloat;

::hxsl::Channel Channel_obj::PackedNormal;

::hxsl::Channel Channel_obj::R;

::hxsl::Channel Channel_obj::Unknown;

bool Channel_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("A",41,00,00,00)) { outValue = Channel_obj::A; return true; }
	if (inName==HX_("B",42,00,00,00)) { outValue = Channel_obj::B; return true; }
	if (inName==HX_("G",47,00,00,00)) { outValue = Channel_obj::G; return true; }
	if (inName==HX_("PackedFloat",e4,62,96,96)) { outValue = Channel_obj::PackedFloat; return true; }
	if (inName==HX_("PackedNormal",df,73,13,1c)) { outValue = Channel_obj::PackedNormal; return true; }
	if (inName==HX_("R",52,00,00,00)) { outValue = Channel_obj::R; return true; }
	if (inName==HX_("Unknown",6a,4b,cc,ae)) { outValue = Channel_obj::Unknown; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Channel_obj)

int Channel_obj::__FindIndex(::String inName)
{
	if (inName==HX_("A",41,00,00,00)) return 4;
	if (inName==HX_("B",42,00,00,00)) return 3;
	if (inName==HX_("G",47,00,00,00)) return 2;
	if (inName==HX_("PackedFloat",e4,62,96,96)) return 5;
	if (inName==HX_("PackedNormal",df,73,13,1c)) return 6;
	if (inName==HX_("R",52,00,00,00)) return 1;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return 0;
	return super::__FindIndex(inName);
}

int Channel_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("A",41,00,00,00)) return 0;
	if (inName==HX_("B",42,00,00,00)) return 0;
	if (inName==HX_("G",47,00,00,00)) return 0;
	if (inName==HX_("PackedFloat",e4,62,96,96)) return 0;
	if (inName==HX_("PackedNormal",df,73,13,1c)) return 0;
	if (inName==HX_("R",52,00,00,00)) return 0;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Channel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("A",41,00,00,00)) return A;
	if (inName==HX_("B",42,00,00,00)) return B;
	if (inName==HX_("G",47,00,00,00)) return G;
	if (inName==HX_("PackedFloat",e4,62,96,96)) return PackedFloat;
	if (inName==HX_("PackedNormal",df,73,13,1c)) return PackedNormal;
	if (inName==HX_("R",52,00,00,00)) return R;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return Unknown;
	return super::__Field(inName,inCallProp);
}

static ::String Channel_obj_sStaticFields[] = {
	HX_("Unknown",6a,4b,cc,ae),
	HX_("R",52,00,00,00),
	HX_("G",47,00,00,00),
	HX_("B",42,00,00,00),
	HX_("A",41,00,00,00),
	HX_("PackedFloat",e4,62,96,96),
	HX_("PackedNormal",df,73,13,1c),
	::String(null())
};

::hx::Class Channel_obj::__mClass;

Dynamic __Create_Channel_obj() { return new Channel_obj; }

void Channel_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.Channel",de,9e,86,5e), ::hx::TCanCast< Channel_obj >,Channel_obj_sStaticFields,0,
	&__Create_Channel_obj, &__Create,
	&super::__SGetClass(), &CreateChannel_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Channel_obj::__GetStatic;
}

void Channel_obj::__boot()
{
A = ::hx::CreateConstEnum< Channel_obj >(HX_("A",41,00,00,00),4);
B = ::hx::CreateConstEnum< Channel_obj >(HX_("B",42,00,00,00),3);
G = ::hx::CreateConstEnum< Channel_obj >(HX_("G",47,00,00,00),2);
PackedFloat = ::hx::CreateConstEnum< Channel_obj >(HX_("PackedFloat",e4,62,96,96),5);
PackedNormal = ::hx::CreateConstEnum< Channel_obj >(HX_("PackedNormal",df,73,13,1c),6);
R = ::hx::CreateConstEnum< Channel_obj >(HX_("R",52,00,00,00),1);
Unknown = ::hx::CreateConstEnum< Channel_obj >(HX_("Unknown",6a,4b,cc,ae),0);
}


} // end namespace hxsl
