#include <hxcpp.h>

#ifndef INCLUDED_hxd_Cursor
#include <hxd/Cursor.h>
#endif
#ifndef INCLUDED_hxd_CustomCursor
#include <hxd/CustomCursor.h>
#endif
namespace hxd{

::hxd::Cursor Cursor_obj::Button;

::hxd::Cursor Cursor_obj::Callback( ::Dynamic f)
{
	return ::hx::CreateEnum< Cursor_obj >(HX_("Callback",e5,55,b8,58),6,1)->_hx_init(0,f);
}

::hxd::Cursor Cursor_obj::Custom( ::hxd::CustomCursor custom)
{
	return ::hx::CreateEnum< Cursor_obj >(HX_("Custom",d1,fb,26,74),5,1)->_hx_init(0,custom);
}

::hxd::Cursor Cursor_obj::Default;

::hxd::Cursor Cursor_obj::Hide;

::hxd::Cursor Cursor_obj::Move;

::hxd::Cursor Cursor_obj::TextInput;

bool Cursor_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Button",12,d6,74,0e)) { outValue = Cursor_obj::Button; return true; }
	if (inName==HX_("Callback",e5,55,b8,58)) { outValue = Cursor_obj::Callback_dyn(); return true; }
	if (inName==HX_("Custom",d1,fb,26,74)) { outValue = Cursor_obj::Custom_dyn(); return true; }
	if (inName==HX_("Default",a1,00,15,69)) { outValue = Cursor_obj::Default; return true; }
	if (inName==HX_("Hide",e2,60,e7,2f)) { outValue = Cursor_obj::Hide; return true; }
	if (inName==HX_("Move",31,0f,3a,33)) { outValue = Cursor_obj::Move; return true; }
	if (inName==HX_("TextInput",fd,33,de,f8)) { outValue = Cursor_obj::TextInput; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Cursor_obj)

int Cursor_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Button",12,d6,74,0e)) return 1;
	if (inName==HX_("Callback",e5,55,b8,58)) return 6;
	if (inName==HX_("Custom",d1,fb,26,74)) return 5;
	if (inName==HX_("Default",a1,00,15,69)) return 0;
	if (inName==HX_("Hide",e2,60,e7,2f)) return 4;
	if (inName==HX_("Move",31,0f,3a,33)) return 2;
	if (inName==HX_("TextInput",fd,33,de,f8)) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,Callback,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,Custom,return)

int Cursor_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Button",12,d6,74,0e)) return 0;
	if (inName==HX_("Callback",e5,55,b8,58)) return 1;
	if (inName==HX_("Custom",d1,fb,26,74)) return 1;
	if (inName==HX_("Default",a1,00,15,69)) return 0;
	if (inName==HX_("Hide",e2,60,e7,2f)) return 0;
	if (inName==HX_("Move",31,0f,3a,33)) return 0;
	if (inName==HX_("TextInput",fd,33,de,f8)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Cursor_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Button",12,d6,74,0e)) return Button;
	if (inName==HX_("Callback",e5,55,b8,58)) return Callback_dyn();
	if (inName==HX_("Custom",d1,fb,26,74)) return Custom_dyn();
	if (inName==HX_("Default",a1,00,15,69)) return Default;
	if (inName==HX_("Hide",e2,60,e7,2f)) return Hide;
	if (inName==HX_("Move",31,0f,3a,33)) return Move;
	if (inName==HX_("TextInput",fd,33,de,f8)) return TextInput;
	return super::__Field(inName,inCallProp);
}

static ::String Cursor_obj_sStaticFields[] = {
	HX_("Default",a1,00,15,69),
	HX_("Button",12,d6,74,0e),
	HX_("Move",31,0f,3a,33),
	HX_("TextInput",fd,33,de,f8),
	HX_("Hide",e2,60,e7,2f),
	HX_("Custom",d1,fb,26,74),
	HX_("Callback",e5,55,b8,58),
	::String(null())
};

::hx::Class Cursor_obj::__mClass;

Dynamic __Create_Cursor_obj() { return new Cursor_obj; }

void Cursor_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.Cursor",d0,d8,76,43), ::hx::TCanCast< Cursor_obj >,Cursor_obj_sStaticFields,0,
	&__Create_Cursor_obj, &__Create,
	&super::__SGetClass(), &CreateCursor_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Cursor_obj::__GetStatic;
}

void Cursor_obj::__boot()
{
Button = ::hx::CreateConstEnum< Cursor_obj >(HX_("Button",12,d6,74,0e),1);
Default = ::hx::CreateConstEnum< Cursor_obj >(HX_("Default",a1,00,15,69),0);
Hide = ::hx::CreateConstEnum< Cursor_obj >(HX_("Hide",e2,60,e7,2f),4);
Move = ::hx::CreateConstEnum< Cursor_obj >(HX_("Move",31,0f,3a,33),2);
TextInput = ::hx::CreateConstEnum< Cursor_obj >(HX_("TextInput",fd,33,de,f8),3);
}


} // end namespace hxd
