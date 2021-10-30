#include <hxcpp.h>

#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif

namespace h3d{


static ::String IDrawable_obj_sMemberFields[] = {
	HX_("render",56,6b,29,05),
	::String(null()) };

::hx::Class IDrawable_obj::__mClass;

void IDrawable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.IDrawable",92,db,1a,be);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IDrawable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xd84ebfae >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
