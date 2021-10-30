#include <hxcpp.h>

#ifndef INCLUDED_h3d_impl_RendererFX
#include <h3d/impl/RendererFX.h>
#endif
#ifndef INCLUDED_h3d_impl_Step
#include <h3d/impl/Step.h>
#endif
#ifndef INCLUDED_h3d_scene_Renderer
#include <h3d/scene/Renderer.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif

namespace h3d{
namespace impl{


static ::String RendererFX_obj_sMemberFields[] = {
	HX_("enabled",81,04,31,7e),
	HX_("begin",29,ea,55,b0),
	HX_("end",db,03,4d,00),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class RendererFX_obj::__mClass;

void RendererFX_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.impl.RendererFX",0e,cd,0a,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RendererFX_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x21579b4e >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace impl
