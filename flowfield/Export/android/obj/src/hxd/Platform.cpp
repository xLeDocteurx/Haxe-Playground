#include <hxcpp.h>

#ifndef INCLUDED_hxd_Platform
#include <hxd/Platform.h>
#endif
namespace hxd{

::hxd::Platform Platform_obj::Android;

::hxd::Platform Platform_obj::Console;

::hxd::Platform Platform_obj::FlashPlayer;

::hxd::Platform Platform_obj::IOS;

::hxd::Platform Platform_obj::PC;

::hxd::Platform Platform_obj::WebGL;

bool Platform_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Android",0f,c3,f5,69)) { outValue = Platform_obj::Android; return true; }
	if (inName==HX_("Console",37,13,27,e6)) { outValue = Platform_obj::Console; return true; }
	if (inName==HX_("FlashPlayer",11,91,63,4c)) { outValue = Platform_obj::FlashPlayer; return true; }
	if (inName==HX_("IOS",ad,a9,37,00)) { outValue = Platform_obj::IOS; return true; }
	if (inName==HX_("PC",f3,45,00,00)) { outValue = Platform_obj::PC; return true; }
	if (inName==HX_("WebGL",99,9f,e9,5a)) { outValue = Platform_obj::WebGL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Platform_obj)

int Platform_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Android",0f,c3,f5,69)) return 1;
	if (inName==HX_("Console",37,13,27,e6)) return 4;
	if (inName==HX_("FlashPlayer",11,91,63,4c)) return 5;
	if (inName==HX_("IOS",ad,a9,37,00)) return 0;
	if (inName==HX_("PC",f3,45,00,00)) return 3;
	if (inName==HX_("WebGL",99,9f,e9,5a)) return 2;
	return super::__FindIndex(inName);
}

int Platform_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Android",0f,c3,f5,69)) return 0;
	if (inName==HX_("Console",37,13,27,e6)) return 0;
	if (inName==HX_("FlashPlayer",11,91,63,4c)) return 0;
	if (inName==HX_("IOS",ad,a9,37,00)) return 0;
	if (inName==HX_("PC",f3,45,00,00)) return 0;
	if (inName==HX_("WebGL",99,9f,e9,5a)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Platform_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Android",0f,c3,f5,69)) return Android;
	if (inName==HX_("Console",37,13,27,e6)) return Console;
	if (inName==HX_("FlashPlayer",11,91,63,4c)) return FlashPlayer;
	if (inName==HX_("IOS",ad,a9,37,00)) return IOS;
	if (inName==HX_("PC",f3,45,00,00)) return PC;
	if (inName==HX_("WebGL",99,9f,e9,5a)) return WebGL;
	return super::__Field(inName,inCallProp);
}

static ::String Platform_obj_sStaticFields[] = {
	HX_("IOS",ad,a9,37,00),
	HX_("Android",0f,c3,f5,69),
	HX_("WebGL",99,9f,e9,5a),
	HX_("PC",f3,45,00,00),
	HX_("Console",37,13,27,e6),
	HX_("FlashPlayer",11,91,63,4c),
	::String(null())
};

::hx::Class Platform_obj::__mClass;

Dynamic __Create_Platform_obj() { return new Platform_obj; }

void Platform_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.Platform",2d,ef,29,64), ::hx::TCanCast< Platform_obj >,Platform_obj_sStaticFields,0,
	&__Create_Platform_obj, &__Create,
	&super::__SGetClass(), &CreatePlatform_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Platform_obj::__GetStatic;
}

void Platform_obj::__boot()
{
Android = ::hx::CreateConstEnum< Platform_obj >(HX_("Android",0f,c3,f5,69),1);
Console = ::hx::CreateConstEnum< Platform_obj >(HX_("Console",37,13,27,e6),4);
FlashPlayer = ::hx::CreateConstEnum< Platform_obj >(HX_("FlashPlayer",11,91,63,4c),5);
IOS = ::hx::CreateConstEnum< Platform_obj >(HX_("IOS",ad,a9,37,00),0);
PC = ::hx::CreateConstEnum< Platform_obj >(HX_("PC",f3,45,00,00),3);
WebGL = ::hx::CreateConstEnum< Platform_obj >(HX_("WebGL",99,9f,e9,5a),2);
}


} // end namespace hxd
