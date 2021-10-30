#include <hxcpp.h>

#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif

namespace hxColorToolkit{
namespace spaces{


static ::String Color_obj_sMemberFields[] = {
	HX_("numOfChannels",6d,ec,b1,8b),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("getColor",ed,80,33,aa),
	HX_("setColor",61,da,90,58),
	HX_("toRGB",52,70,18,14),
	HX_("fromRGB",c3,8f,01,58),
	HX_("clone",5d,13,63,48),
	HX_("interpolate",c1,d4,32,1f),
	::String(null()) };

::hx::Class Color_obj::__mClass;

void Color_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.spaces.Color",85,e4,31,d2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Color_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x98fa9e0b >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace spaces
