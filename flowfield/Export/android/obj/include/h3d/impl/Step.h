#ifndef INCLUDED_h3d_impl_Step
#define INCLUDED_h3d_impl_Step

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,impl,Step)
namespace h3d{
namespace impl{


class Step_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Step_obj OBJ_;

	public:
		Step_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.impl.Step",45,9a,aa,46); }
		::String __ToString() const { return HX_("Step.",42,eb,3b,17) + _hx_tag; }

		static ::h3d::impl::Step AfterTonemapping;
		static inline ::h3d::impl::Step AfterTonemapping_dyn() { return AfterTonemapping; }
		static ::h3d::impl::Step BeforeTonemapping;
		static inline ::h3d::impl::Step BeforeTonemapping_dyn() { return BeforeTonemapping; }
		static ::h3d::impl::Step Decals;
		static inline ::h3d::impl::Step Decals_dyn() { return Decals; }
		static ::h3d::impl::Step Forward;
		static inline ::h3d::impl::Step Forward_dyn() { return Forward; }
		static ::h3d::impl::Step Lighting;
		static inline ::h3d::impl::Step Lighting_dyn() { return Lighting; }
		static ::h3d::impl::Step MainDraw;
		static inline ::h3d::impl::Step MainDraw_dyn() { return MainDraw; }
		static ::h3d::impl::Step Overlay;
		static inline ::h3d::impl::Step Overlay_dyn() { return Overlay; }
		static ::h3d::impl::Step Shadows;
		static inline ::h3d::impl::Step Shadows_dyn() { return Shadows; }
};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_Step */ 
