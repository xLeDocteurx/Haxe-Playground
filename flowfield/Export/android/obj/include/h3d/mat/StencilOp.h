#ifndef INCLUDED_h3d_mat_StencilOp
#define INCLUDED_h3d_mat_StencilOp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,StencilOp)
namespace h3d{
namespace mat{


class StencilOp_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef StencilOp_obj OBJ_;

	public:
		StencilOp_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.mat.StencilOp",da,5a,7c,96); }
		::String __ToString() const { return HX_("StencilOp.",71,7f,af,ae) + _hx_tag; }

		static ::h3d::mat::StencilOp Decrement;
		static inline ::h3d::mat::StencilOp Decrement_dyn() { return Decrement; }
		static ::h3d::mat::StencilOp DecrementWrap;
		static inline ::h3d::mat::StencilOp DecrementWrap_dyn() { return DecrementWrap; }
		static ::h3d::mat::StencilOp Increment;
		static inline ::h3d::mat::StencilOp Increment_dyn() { return Increment; }
		static ::h3d::mat::StencilOp IncrementWrap;
		static inline ::h3d::mat::StencilOp IncrementWrap_dyn() { return IncrementWrap; }
		static ::h3d::mat::StencilOp Invert;
		static inline ::h3d::mat::StencilOp Invert_dyn() { return Invert; }
		static ::h3d::mat::StencilOp Keep;
		static inline ::h3d::mat::StencilOp Keep_dyn() { return Keep; }
		static ::h3d::mat::StencilOp Replace;
		static inline ::h3d::mat::StencilOp Replace_dyn() { return Replace; }
		static ::h3d::mat::StencilOp Zero;
		static inline ::h3d::mat::StencilOp Zero_dyn() { return Zero; }
};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_StencilOp */ 
