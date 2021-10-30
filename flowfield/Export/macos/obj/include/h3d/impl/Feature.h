#ifndef INCLUDED_h3d_impl_Feature
#define INCLUDED_h3d_impl_Feature

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,impl,Feature)
namespace h3d{
namespace impl{


class Feature_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Feature_obj OBJ_;

	public:
		Feature_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.impl.Feature",5d,a1,7f,51); }
		::String __ToString() const { return HX_("Feature.",d8,28,89,ec) + _hx_tag; }

		static ::h3d::impl::Feature AllocDepthBuffer;
		static inline ::h3d::impl::Feature AllocDepthBuffer_dyn() { return AllocDepthBuffer; }
		static ::h3d::impl::Feature BottomLeftCoords;
		static inline ::h3d::impl::Feature BottomLeftCoords_dyn() { return BottomLeftCoords; }
		static ::h3d::impl::Feature FloatTextures;
		static inline ::h3d::impl::Feature FloatTextures_dyn() { return FloatTextures; }
		static ::h3d::impl::Feature HardwareAccelerated;
		static inline ::h3d::impl::Feature HardwareAccelerated_dyn() { return HardwareAccelerated; }
		static ::h3d::impl::Feature InstancedRendering;
		static inline ::h3d::impl::Feature InstancedRendering_dyn() { return InstancedRendering; }
		static ::h3d::impl::Feature MultipleRenderTargets;
		static inline ::h3d::impl::Feature MultipleRenderTargets_dyn() { return MultipleRenderTargets; }
		static ::h3d::impl::Feature Queries;
		static inline ::h3d::impl::Feature Queries_dyn() { return Queries; }
		static ::h3d::impl::Feature SRGBTextures;
		static inline ::h3d::impl::Feature SRGBTextures_dyn() { return SRGBTextures; }
		static ::h3d::impl::Feature ShaderModel3;
		static inline ::h3d::impl::Feature ShaderModel3_dyn() { return ShaderModel3; }
		static ::h3d::impl::Feature StandardDerivatives;
		static inline ::h3d::impl::Feature StandardDerivatives_dyn() { return StandardDerivatives; }
		static ::h3d::impl::Feature Wireframe;
		static inline ::h3d::impl::Feature Wireframe_dyn() { return Wireframe; }
};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_Feature */ 
