#include <hxcpp.h>

#ifndef INCLUDED_format_gif_DisposalMethod
#include <format/gif/DisposalMethod.h>
#endif
namespace format{
namespace gif{

::format::gif::DisposalMethod DisposalMethod_obj::FILL_BACKGROUND;

::format::gif::DisposalMethod DisposalMethod_obj::NO_ACTION;

::format::gif::DisposalMethod DisposalMethod_obj::RENDER_PREVIOUS;

::format::gif::DisposalMethod DisposalMethod_obj::UNDEFINED(int index)
{
	return ::hx::CreateEnum< DisposalMethod_obj >(HX_("UNDEFINED",70,ae,62,98),4,1)->_hx_init(0,index);
}

::format::gif::DisposalMethod DisposalMethod_obj::UNSPECIFIED;

bool DisposalMethod_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FILL_BACKGROUND",6a,17,e5,64)) { outValue = DisposalMethod_obj::FILL_BACKGROUND; return true; }
	if (inName==HX_("NO_ACTION",34,2f,5f,23)) { outValue = DisposalMethod_obj::NO_ACTION; return true; }
	if (inName==HX_("RENDER_PREVIOUS",80,91,69,01)) { outValue = DisposalMethod_obj::RENDER_PREVIOUS; return true; }
	if (inName==HX_("UNDEFINED",70,ae,62,98)) { outValue = DisposalMethod_obj::UNDEFINED_dyn(); return true; }
	if (inName==HX_("UNSPECIFIED",97,ef,81,da)) { outValue = DisposalMethod_obj::UNSPECIFIED; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DisposalMethod_obj)

int DisposalMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FILL_BACKGROUND",6a,17,e5,64)) return 2;
	if (inName==HX_("NO_ACTION",34,2f,5f,23)) return 1;
	if (inName==HX_("RENDER_PREVIOUS",80,91,69,01)) return 3;
	if (inName==HX_("UNDEFINED",70,ae,62,98)) return 4;
	if (inName==HX_("UNSPECIFIED",97,ef,81,da)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisposalMethod_obj,UNDEFINED,return)

int DisposalMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FILL_BACKGROUND",6a,17,e5,64)) return 0;
	if (inName==HX_("NO_ACTION",34,2f,5f,23)) return 0;
	if (inName==HX_("RENDER_PREVIOUS",80,91,69,01)) return 0;
	if (inName==HX_("UNDEFINED",70,ae,62,98)) return 1;
	if (inName==HX_("UNSPECIFIED",97,ef,81,da)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val DisposalMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FILL_BACKGROUND",6a,17,e5,64)) return FILL_BACKGROUND;
	if (inName==HX_("NO_ACTION",34,2f,5f,23)) return NO_ACTION;
	if (inName==HX_("RENDER_PREVIOUS",80,91,69,01)) return RENDER_PREVIOUS;
	if (inName==HX_("UNDEFINED",70,ae,62,98)) return UNDEFINED_dyn();
	if (inName==HX_("UNSPECIFIED",97,ef,81,da)) return UNSPECIFIED;
	return super::__Field(inName,inCallProp);
}

static ::String DisposalMethod_obj_sStaticFields[] = {
	HX_("UNSPECIFIED",97,ef,81,da),
	HX_("NO_ACTION",34,2f,5f,23),
	HX_("FILL_BACKGROUND",6a,17,e5,64),
	HX_("RENDER_PREVIOUS",80,91,69,01),
	HX_("UNDEFINED",70,ae,62,98),
	::String(null())
};

::hx::Class DisposalMethod_obj::__mClass;

Dynamic __Create_DisposalMethod_obj() { return new DisposalMethod_obj; }

void DisposalMethod_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.gif.DisposalMethod",53,d9,de,a5), ::hx::TCanCast< DisposalMethod_obj >,DisposalMethod_obj_sStaticFields,0,
	&__Create_DisposalMethod_obj, &__Create,
	&super::__SGetClass(), &CreateDisposalMethod_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DisposalMethod_obj::__GetStatic;
}

void DisposalMethod_obj::__boot()
{
FILL_BACKGROUND = ::hx::CreateConstEnum< DisposalMethod_obj >(HX_("FILL_BACKGROUND",6a,17,e5,64),2);
NO_ACTION = ::hx::CreateConstEnum< DisposalMethod_obj >(HX_("NO_ACTION",34,2f,5f,23),1);
RENDER_PREVIOUS = ::hx::CreateConstEnum< DisposalMethod_obj >(HX_("RENDER_PREVIOUS",80,91,69,01),3);
UNSPECIFIED = ::hx::CreateConstEnum< DisposalMethod_obj >(HX_("UNSPECIFIED",97,ef,81,da),0);
}


} // end namespace format
} // end namespace gif
