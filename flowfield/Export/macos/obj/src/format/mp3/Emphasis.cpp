#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_Emphasis
#include <format/mp3/Emphasis.h>
#endif
namespace format{
namespace mp3{

::format::mp3::Emphasis Emphasis_obj::CCIT_J17;

::format::mp3::Emphasis Emphasis_obj::InvalidEmphasis;

::format::mp3::Emphasis Emphasis_obj::Ms50_15;

::format::mp3::Emphasis Emphasis_obj::NoEmphasis;

bool Emphasis_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CCIT_J17",bc,9a,0b,a7)) { outValue = Emphasis_obj::CCIT_J17; return true; }
	if (inName==HX_("InvalidEmphasis",b3,93,80,de)) { outValue = Emphasis_obj::InvalidEmphasis; return true; }
	if (inName==HX_("Ms50_15",42,74,3e,21)) { outValue = Emphasis_obj::Ms50_15; return true; }
	if (inName==HX_("NoEmphasis",3d,6f,b3,16)) { outValue = Emphasis_obj::NoEmphasis; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Emphasis_obj)

int Emphasis_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CCIT_J17",bc,9a,0b,a7)) return 2;
	if (inName==HX_("InvalidEmphasis",b3,93,80,de)) return 3;
	if (inName==HX_("Ms50_15",42,74,3e,21)) return 1;
	if (inName==HX_("NoEmphasis",3d,6f,b3,16)) return 0;
	return super::__FindIndex(inName);
}

int Emphasis_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CCIT_J17",bc,9a,0b,a7)) return 0;
	if (inName==HX_("InvalidEmphasis",b3,93,80,de)) return 0;
	if (inName==HX_("Ms50_15",42,74,3e,21)) return 0;
	if (inName==HX_("NoEmphasis",3d,6f,b3,16)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Emphasis_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CCIT_J17",bc,9a,0b,a7)) return CCIT_J17;
	if (inName==HX_("InvalidEmphasis",b3,93,80,de)) return InvalidEmphasis;
	if (inName==HX_("Ms50_15",42,74,3e,21)) return Ms50_15;
	if (inName==HX_("NoEmphasis",3d,6f,b3,16)) return NoEmphasis;
	return super::__Field(inName,inCallProp);
}

static ::String Emphasis_obj_sStaticFields[] = {
	HX_("NoEmphasis",3d,6f,b3,16),
	HX_("Ms50_15",42,74,3e,21),
	HX_("CCIT_J17",bc,9a,0b,a7),
	HX_("InvalidEmphasis",b3,93,80,de),
	::String(null())
};

::hx::Class Emphasis_obj::__mClass;

Dynamic __Create_Emphasis_obj() { return new Emphasis_obj; }

void Emphasis_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.mp3.Emphasis",31,42,75,ee), ::hx::TCanCast< Emphasis_obj >,Emphasis_obj_sStaticFields,0,
	&__Create_Emphasis_obj, &__Create,
	&super::__SGetClass(), &CreateEmphasis_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Emphasis_obj::__GetStatic;
}

void Emphasis_obj::__boot()
{
CCIT_J17 = ::hx::CreateConstEnum< Emphasis_obj >(HX_("CCIT_J17",bc,9a,0b,a7),2);
InvalidEmphasis = ::hx::CreateConstEnum< Emphasis_obj >(HX_("InvalidEmphasis",b3,93,80,de),3);
Ms50_15 = ::hx::CreateConstEnum< Emphasis_obj >(HX_("Ms50_15",42,74,3e,21),1);
NoEmphasis = ::hx::CreateConstEnum< Emphasis_obj >(HX_("NoEmphasis",3d,6f,b3,16),0);
}


} // end namespace format
} // end namespace mp3
