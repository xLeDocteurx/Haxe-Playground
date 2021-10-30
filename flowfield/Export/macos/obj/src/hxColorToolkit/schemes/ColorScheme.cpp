#include <hxcpp.h>

#ifndef INCLUDED_hxColorToolkit_schemes_ColorScheme
#include <hxColorToolkit/schemes/ColorScheme.h>
#endif

namespace hxColorToolkit{
namespace schemes{


static ::String ColorScheme_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	HX_("numOfColors",8d,56,9e,45),
	HX_("getColor",ed,80,33,aa),
	HX_("iterator",ee,49,9a,93),
	::String(null()) };

::hx::Class ColorScheme_obj::__mClass;

void ColorScheme_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.schemes.ColorScheme",e5,f6,6d,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorScheme_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xc3924d65 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace schemes
