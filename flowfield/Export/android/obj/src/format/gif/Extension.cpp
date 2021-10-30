#include <hxcpp.h>

#ifndef INCLUDED_format_gif_ApplicationExtension
#include <format/gif/ApplicationExtension.h>
#endif
#ifndef INCLUDED_format_gif_Extension
#include <format/gif/Extension.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace format{
namespace gif{

::format::gif::Extension Extension_obj::EApplicationExtension( ::format::gif::ApplicationExtension ext)
{
	return ::hx::CreateEnum< Extension_obj >(HX_("EApplicationExtension",f4,ea,da,90),3,1)->_hx_init(0,ext);
}

::format::gif::Extension Extension_obj::EComment(::String text)
{
	return ::hx::CreateEnum< Extension_obj >(HX_("EComment",9a,64,5a,b9),1,1)->_hx_init(0,text);
}

::format::gif::Extension Extension_obj::EGraphicControl( ::Dynamic gce)
{
	return ::hx::CreateEnum< Extension_obj >(HX_("EGraphicControl",ba,00,0d,29),0,1)->_hx_init(0,gce);
}

::format::gif::Extension Extension_obj::EText( ::Dynamic pte)
{
	return ::hx::CreateEnum< Extension_obj >(HX_("EText",92,ff,78,f2),2,1)->_hx_init(0,pte);
}

::format::gif::Extension Extension_obj::EUnknown(int id, ::haxe::io::Bytes data)
{
	return ::hx::CreateEnum< Extension_obj >(HX_("EUnknown",c5,0d,65,19),4,2)->_hx_init(0,id)->_hx_init(1,data);
}

bool Extension_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EApplicationExtension",f4,ea,da,90)) { outValue = Extension_obj::EApplicationExtension_dyn(); return true; }
	if (inName==HX_("EComment",9a,64,5a,b9)) { outValue = Extension_obj::EComment_dyn(); return true; }
	if (inName==HX_("EGraphicControl",ba,00,0d,29)) { outValue = Extension_obj::EGraphicControl_dyn(); return true; }
	if (inName==HX_("EText",92,ff,78,f2)) { outValue = Extension_obj::EText_dyn(); return true; }
	if (inName==HX_("EUnknown",c5,0d,65,19)) { outValue = Extension_obj::EUnknown_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Extension_obj)

int Extension_obj::__FindIndex(::String inName)
{
	if (inName==HX_("EApplicationExtension",f4,ea,da,90)) return 3;
	if (inName==HX_("EComment",9a,64,5a,b9)) return 1;
	if (inName==HX_("EGraphicControl",ba,00,0d,29)) return 0;
	if (inName==HX_("EText",92,ff,78,f2)) return 2;
	if (inName==HX_("EUnknown",c5,0d,65,19)) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Extension_obj,EApplicationExtension,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Extension_obj,EComment,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Extension_obj,EGraphicControl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Extension_obj,EText,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Extension_obj,EUnknown,return)

int Extension_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("EApplicationExtension",f4,ea,da,90)) return 1;
	if (inName==HX_("EComment",9a,64,5a,b9)) return 1;
	if (inName==HX_("EGraphicControl",ba,00,0d,29)) return 1;
	if (inName==HX_("EText",92,ff,78,f2)) return 1;
	if (inName==HX_("EUnknown",c5,0d,65,19)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val Extension_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EApplicationExtension",f4,ea,da,90)) return EApplicationExtension_dyn();
	if (inName==HX_("EComment",9a,64,5a,b9)) return EComment_dyn();
	if (inName==HX_("EGraphicControl",ba,00,0d,29)) return EGraphicControl_dyn();
	if (inName==HX_("EText",92,ff,78,f2)) return EText_dyn();
	if (inName==HX_("EUnknown",c5,0d,65,19)) return EUnknown_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Extension_obj_sStaticFields[] = {
	HX_("EGraphicControl",ba,00,0d,29),
	HX_("EComment",9a,64,5a,b9),
	HX_("EText",92,ff,78,f2),
	HX_("EApplicationExtension",f4,ea,da,90),
	HX_("EUnknown",c5,0d,65,19),
	::String(null())
};

::hx::Class Extension_obj::__mClass;

Dynamic __Create_Extension_obj() { return new Extension_obj; }

void Extension_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.gif.Extension",fe,4a,59,5a), ::hx::TCanCast< Extension_obj >,Extension_obj_sStaticFields,0,
	&__Create_Extension_obj, &__Create,
	&super::__SGetClass(), &CreateExtension_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Extension_obj::__GetStatic;
}

void Extension_obj::__boot()
{
}


} // end namespace format
} // end namespace gif
