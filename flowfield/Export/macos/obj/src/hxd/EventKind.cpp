#include <hxcpp.h>

#ifndef INCLUDED_hxd_EventKind
#include <hxd/EventKind.h>
#endif
namespace hxd{

::hxd::EventKind EventKind_obj::ECheck;

::hxd::EventKind EventKind_obj::EFocus;

::hxd::EventKind EventKind_obj::EFocusLost;

::hxd::EventKind EventKind_obj::EKeyDown;

::hxd::EventKind EventKind_obj::EKeyUp;

::hxd::EventKind EventKind_obj::EMove;

::hxd::EventKind EventKind_obj::EOut;

::hxd::EventKind EventKind_obj::EOver;

::hxd::EventKind EventKind_obj::EPush;

::hxd::EventKind EventKind_obj::ERelease;

::hxd::EventKind EventKind_obj::EReleaseOutside;

::hxd::EventKind EventKind_obj::ETextInput;

::hxd::EventKind EventKind_obj::EWheel;

bool EventKind_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ECheck",43,ee,83,6f)) { outValue = EventKind_obj::ECheck; return true; }
	if (inName==HX_("EFocus",53,b5,56,2e)) { outValue = EventKind_obj::EFocus; return true; }
	if (inName==HX_("EFocusLost",d7,30,28,95)) { outValue = EventKind_obj::EFocusLost; return true; }
	if (inName==HX_("EKeyDown",dc,53,31,d4)) { outValue = EventKind_obj::EKeyDown; return true; }
	if (inName==HX_("EKeyUp",55,0f,cc,08)) { outValue = EventKind_obj::EKeyUp; return true; }
	if (inName==HX_("EMove",f6,15,e0,ed)) { outValue = EventKind_obj::EMove; return true; }
	if (inName==HX_("EOut",49,11,d8,2d)) { outValue = EventKind_obj::EOut; return true; }
	if (inName==HX_("EOver",39,c4,37,ef)) { outValue = EventKind_obj::EOver; return true; }
	if (inName==HX_("EPush",bf,44,e0,ef)) { outValue = EventKind_obj::EPush; return true; }
	if (inName==HX_("ERelease",02,70,d7,90)) { outValue = EventKind_obj::ERelease; return true; }
	if (inName==HX_("EReleaseOutside",43,29,0b,80)) { outValue = EventKind_obj::EReleaseOutside; return true; }
	if (inName==HX_("ETextInput",18,83,f0,cc)) { outValue = EventKind_obj::ETextInput; return true; }
	if (inName==HX_("EWheel",16,8a,87,f3)) { outValue = EventKind_obj::EWheel; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(EventKind_obj)

int EventKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ECheck",43,ee,83,6f)) return 12;
	if (inName==HX_("EFocus",53,b5,56,2e)) return 6;
	if (inName==HX_("EFocusLost",d7,30,28,95)) return 7;
	if (inName==HX_("EKeyDown",dc,53,31,d4)) return 8;
	if (inName==HX_("EKeyUp",55,0f,cc,08)) return 9;
	if (inName==HX_("EMove",f6,15,e0,ed)) return 2;
	if (inName==HX_("EOut",49,11,d8,2d)) return 4;
	if (inName==HX_("EOver",39,c4,37,ef)) return 3;
	if (inName==HX_("EPush",bf,44,e0,ef)) return 0;
	if (inName==HX_("ERelease",02,70,d7,90)) return 1;
	if (inName==HX_("EReleaseOutside",43,29,0b,80)) return 10;
	if (inName==HX_("ETextInput",18,83,f0,cc)) return 11;
	if (inName==HX_("EWheel",16,8a,87,f3)) return 5;
	return super::__FindIndex(inName);
}

int EventKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ECheck",43,ee,83,6f)) return 0;
	if (inName==HX_("EFocus",53,b5,56,2e)) return 0;
	if (inName==HX_("EFocusLost",d7,30,28,95)) return 0;
	if (inName==HX_("EKeyDown",dc,53,31,d4)) return 0;
	if (inName==HX_("EKeyUp",55,0f,cc,08)) return 0;
	if (inName==HX_("EMove",f6,15,e0,ed)) return 0;
	if (inName==HX_("EOut",49,11,d8,2d)) return 0;
	if (inName==HX_("EOver",39,c4,37,ef)) return 0;
	if (inName==HX_("EPush",bf,44,e0,ef)) return 0;
	if (inName==HX_("ERelease",02,70,d7,90)) return 0;
	if (inName==HX_("EReleaseOutside",43,29,0b,80)) return 0;
	if (inName==HX_("ETextInput",18,83,f0,cc)) return 0;
	if (inName==HX_("EWheel",16,8a,87,f3)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val EventKind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ECheck",43,ee,83,6f)) return ECheck;
	if (inName==HX_("EFocus",53,b5,56,2e)) return EFocus;
	if (inName==HX_("EFocusLost",d7,30,28,95)) return EFocusLost;
	if (inName==HX_("EKeyDown",dc,53,31,d4)) return EKeyDown;
	if (inName==HX_("EKeyUp",55,0f,cc,08)) return EKeyUp;
	if (inName==HX_("EMove",f6,15,e0,ed)) return EMove;
	if (inName==HX_("EOut",49,11,d8,2d)) return EOut;
	if (inName==HX_("EOver",39,c4,37,ef)) return EOver;
	if (inName==HX_("EPush",bf,44,e0,ef)) return EPush;
	if (inName==HX_("ERelease",02,70,d7,90)) return ERelease;
	if (inName==HX_("EReleaseOutside",43,29,0b,80)) return EReleaseOutside;
	if (inName==HX_("ETextInput",18,83,f0,cc)) return ETextInput;
	if (inName==HX_("EWheel",16,8a,87,f3)) return EWheel;
	return super::__Field(inName,inCallProp);
}

static ::String EventKind_obj_sStaticFields[] = {
	HX_("EPush",bf,44,e0,ef),
	HX_("ERelease",02,70,d7,90),
	HX_("EMove",f6,15,e0,ed),
	HX_("EOver",39,c4,37,ef),
	HX_("EOut",49,11,d8,2d),
	HX_("EWheel",16,8a,87,f3),
	HX_("EFocus",53,b5,56,2e),
	HX_("EFocusLost",d7,30,28,95),
	HX_("EKeyDown",dc,53,31,d4),
	HX_("EKeyUp",55,0f,cc,08),
	HX_("EReleaseOutside",43,29,0b,80),
	HX_("ETextInput",18,83,f0,cc),
	HX_("ECheck",43,ee,83,6f),
	::String(null())
};

::hx::Class EventKind_obj::__mClass;

Dynamic __Create_EventKind_obj() { return new EventKind_obj; }

void EventKind_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.EventKind",d4,98,1b,a4), ::hx::TCanCast< EventKind_obj >,EventKind_obj_sStaticFields,0,
	&__Create_EventKind_obj, &__Create,
	&super::__SGetClass(), &CreateEventKind_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &EventKind_obj::__GetStatic;
}

void EventKind_obj::__boot()
{
ECheck = ::hx::CreateConstEnum< EventKind_obj >(HX_("ECheck",43,ee,83,6f),12);
EFocus = ::hx::CreateConstEnum< EventKind_obj >(HX_("EFocus",53,b5,56,2e),6);
EFocusLost = ::hx::CreateConstEnum< EventKind_obj >(HX_("EFocusLost",d7,30,28,95),7);
EKeyDown = ::hx::CreateConstEnum< EventKind_obj >(HX_("EKeyDown",dc,53,31,d4),8);
EKeyUp = ::hx::CreateConstEnum< EventKind_obj >(HX_("EKeyUp",55,0f,cc,08),9);
EMove = ::hx::CreateConstEnum< EventKind_obj >(HX_("EMove",f6,15,e0,ed),2);
EOut = ::hx::CreateConstEnum< EventKind_obj >(HX_("EOut",49,11,d8,2d),4);
EOver = ::hx::CreateConstEnum< EventKind_obj >(HX_("EOver",39,c4,37,ef),3);
EPush = ::hx::CreateConstEnum< EventKind_obj >(HX_("EPush",bf,44,e0,ef),0);
ERelease = ::hx::CreateConstEnum< EventKind_obj >(HX_("ERelease",02,70,d7,90),1);
EReleaseOutside = ::hx::CreateConstEnum< EventKind_obj >(HX_("EReleaseOutside",43,29,0b,80),10);
ETextInput = ::hx::CreateConstEnum< EventKind_obj >(HX_("ETextInput",18,83,f0,cc),11);
EWheel = ::hx::CreateConstEnum< EventKind_obj >(HX_("EWheel",16,8a,87,f3),5);
}


} // end namespace hxd
