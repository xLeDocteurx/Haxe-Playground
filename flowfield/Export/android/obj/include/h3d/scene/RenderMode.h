#ifndef INCLUDED_h3d_scene_RenderMode
#define INCLUDED_h3d_scene_RenderMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,scene,RenderMode)
namespace h3d{
namespace scene{


class RenderMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef RenderMode_obj OBJ_;

	public:
		RenderMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.scene.RenderMode",b0,5e,f9,24); }
		::String __ToString() const { return HX_("RenderMode.",15,e8,3b,bc) + _hx_tag; }

		static ::h3d::scene::RenderMode Default;
		static inline ::h3d::scene::RenderMode Default_dyn() { return Default; }
		static ::h3d::scene::RenderMode LightProbe;
		static inline ::h3d::scene::RenderMode LightProbe_dyn() { return LightProbe; }
};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_RenderMode */ 
