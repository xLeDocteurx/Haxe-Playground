#include <hxcpp.h>

#ifndef INCLUDED_h3d_impl_Step
#include <h3d/impl/Step.h>
#endif
namespace h3d{
namespace impl{

::h3d::impl::Step Step_obj::AfterTonemapping;

::h3d::impl::Step Step_obj::BeforeTonemapping;

::h3d::impl::Step Step_obj::Decals;

::h3d::impl::Step Step_obj::Forward;

::h3d::impl::Step Step_obj::Lighting;

::h3d::impl::Step Step_obj::MainDraw;

::h3d::impl::Step Step_obj::Overlay;

::h3d::impl::Step Step_obj::Shadows;

bool Step_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AfterTonemapping",40,fe,97,14)) { outValue = Step_obj::AfterTonemapping; return true; }
	if (inName==HX_("BeforeTonemapping",7d,18,e5,40)) { outValue = Step_obj::BeforeTonemapping; return true; }
	if (inName==HX_("Decals",c6,38,77,99)) { outValue = Step_obj::Decals; return true; }
	if (inName==HX_("Forward",a5,09,1c,b3)) { outValue = Step_obj::Forward; return true; }
	if (inName==HX_("Lighting",ec,e1,b2,66)) { outValue = Step_obj::Lighting; return true; }
	if (inName==HX_("MainDraw",fd,5c,a4,74)) { outValue = Step_obj::MainDraw; return true; }
	if (inName==HX_("Overlay",70,6b,61,76)) { outValue = Step_obj::Overlay; return true; }
	if (inName==HX_("Shadows",73,44,df,2c)) { outValue = Step_obj::Shadows; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Step_obj)

int Step_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AfterTonemapping",40,fe,97,14)) return 6;
	if (inName==HX_("BeforeTonemapping",7d,18,e5,40)) return 5;
	if (inName==HX_("Decals",c6,38,77,99)) return 1;
	if (inName==HX_("Forward",a5,09,1c,b3)) return 4;
	if (inName==HX_("Lighting",ec,e1,b2,66)) return 3;
	if (inName==HX_("MainDraw",fd,5c,a4,74)) return 0;
	if (inName==HX_("Overlay",70,6b,61,76)) return 7;
	if (inName==HX_("Shadows",73,44,df,2c)) return 2;
	return super::__FindIndex(inName);
}

int Step_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AfterTonemapping",40,fe,97,14)) return 0;
	if (inName==HX_("BeforeTonemapping",7d,18,e5,40)) return 0;
	if (inName==HX_("Decals",c6,38,77,99)) return 0;
	if (inName==HX_("Forward",a5,09,1c,b3)) return 0;
	if (inName==HX_("Lighting",ec,e1,b2,66)) return 0;
	if (inName==HX_("MainDraw",fd,5c,a4,74)) return 0;
	if (inName==HX_("Overlay",70,6b,61,76)) return 0;
	if (inName==HX_("Shadows",73,44,df,2c)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Step_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AfterTonemapping",40,fe,97,14)) return AfterTonemapping;
	if (inName==HX_("BeforeTonemapping",7d,18,e5,40)) return BeforeTonemapping;
	if (inName==HX_("Decals",c6,38,77,99)) return Decals;
	if (inName==HX_("Forward",a5,09,1c,b3)) return Forward;
	if (inName==HX_("Lighting",ec,e1,b2,66)) return Lighting;
	if (inName==HX_("MainDraw",fd,5c,a4,74)) return MainDraw;
	if (inName==HX_("Overlay",70,6b,61,76)) return Overlay;
	if (inName==HX_("Shadows",73,44,df,2c)) return Shadows;
	return super::__Field(inName,inCallProp);
}

static ::String Step_obj_sStaticFields[] = {
	HX_("MainDraw",fd,5c,a4,74),
	HX_("Decals",c6,38,77,99),
	HX_("Shadows",73,44,df,2c),
	HX_("Lighting",ec,e1,b2,66),
	HX_("Forward",a5,09,1c,b3),
	HX_("BeforeTonemapping",7d,18,e5,40),
	HX_("AfterTonemapping",40,fe,97,14),
	HX_("Overlay",70,6b,61,76),
	::String(null())
};

::hx::Class Step_obj::__mClass;

Dynamic __Create_Step_obj() { return new Step_obj; }

void Step_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.impl.Step",45,9a,aa,46), ::hx::TCanCast< Step_obj >,Step_obj_sStaticFields,0,
	&__Create_Step_obj, &__Create,
	&super::__SGetClass(), &CreateStep_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Step_obj::__GetStatic;
}

void Step_obj::__boot()
{
AfterTonemapping = ::hx::CreateConstEnum< Step_obj >(HX_("AfterTonemapping",40,fe,97,14),6);
BeforeTonemapping = ::hx::CreateConstEnum< Step_obj >(HX_("BeforeTonemapping",7d,18,e5,40),5);
Decals = ::hx::CreateConstEnum< Step_obj >(HX_("Decals",c6,38,77,99),1);
Forward = ::hx::CreateConstEnum< Step_obj >(HX_("Forward",a5,09,1c,b3),4);
Lighting = ::hx::CreateConstEnum< Step_obj >(HX_("Lighting",ec,e1,b2,66),3);
MainDraw = ::hx::CreateConstEnum< Step_obj >(HX_("MainDraw",fd,5c,a4,74),0);
Overlay = ::hx::CreateConstEnum< Step_obj >(HX_("Overlay",70,6b,61,76),7);
Shadows = ::hx::CreateConstEnum< Step_obj >(HX_("Shadows",73,44,df,2c),2);
}


} // end namespace h3d
} // end namespace impl
