#ifndef INCLUDED_h3d_impl_RenderFlag
#define INCLUDED_h3d_impl_RenderFlag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,impl,RenderFlag)
namespace h3d{
namespace impl{


class RenderFlag_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef RenderFlag_obj OBJ_;

	public:
		RenderFlag_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.impl.RenderFlag",db,b9,88,e8); }
		::String __ToString() const { return HX_("RenderFlag.",ac,ef,6f,b2) + _hx_tag; }

		static ::h3d::impl::RenderFlag CameraHandness;
		static inline ::h3d::impl::RenderFlag CameraHandness_dyn() { return CameraHandness; }
};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_RenderFlag */ 
