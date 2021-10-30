#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_Collider
#include <h2d/col/Collider.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif

namespace h2d{
namespace col{


static ::String Collider_obj_sMemberFields[] = {
	HX_("contains",1f,5a,7b,2c),
	::String(null()) };

::hx::Class Collider_obj::__mClass;

void Collider_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col.Collider",d6,f7,cb,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Collider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x8fae127a >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
