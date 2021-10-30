#include <hxcpp.h>

#ifndef INCLUDED_hxd_Cursor
#include <hxd/Cursor.h>
#endif
#ifndef INCLUDED_hxd_Event
#include <hxd/Event.h>
#endif
#ifndef INCLUDED_hxd_Interactive
#include <hxd/Interactive.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif

namespace hxd{


static ::String Interactive_obj_sMemberFields[] = {
	HX_("set_cursor",13,9d,ed,32),
	HX_("propagateEvents",62,60,03,1f),
	HX_("cursor",d6,8e,e8,3e),
	HX_("handleEvent",52,73,0e,28),
	HX_("getInteractiveScene",c0,e0,d6,48),
	::String(null()) };

::hx::Class Interactive_obj::__mClass;

void Interactive_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.Interactive",a8,89,9a,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Interactive_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa0bf432e >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
