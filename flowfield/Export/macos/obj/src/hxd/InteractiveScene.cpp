#include <hxcpp.h>

#ifndef INCLUDED_hxd_Event
#include <hxd/Event.h>
#endif
#ifndef INCLUDED_hxd_Interactive
#include <hxd/Interactive.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_hxd_SceneEvents
#include <hxd/SceneEvents.h>
#endif

namespace hxd{


static ::String InteractiveScene_obj_sMemberFields[] = {
	HX_("setEvents",5b,c4,11,f6),
	HX_("handleEvent",52,73,0e,28),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("dispatchListeners",65,cf,2e,b5),
	HX_("isInteractiveVisible",3a,85,a0,dc),
	::String(null()) };

::hx::Class InteractiveScene_obj::__mClass;

void InteractiveScene_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.InteractiveScene",84,be,88,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InteractiveScene_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa477bf3e >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
