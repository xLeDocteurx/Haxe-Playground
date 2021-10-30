#ifndef INCLUDED_h3d_mat_DepthFormat
#define INCLUDED_h3d_mat_DepthFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,DepthFormat)
namespace h3d{
namespace mat{


class DepthFormat_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef DepthFormat_obj OBJ_;

	public:
		DepthFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.mat.DepthFormat",77,1a,57,ab); }
		::String __ToString() const { return HX_("DepthFormat.",74,ba,8f,ed) + _hx_tag; }

		static ::h3d::mat::DepthFormat Depth16;
		static inline ::h3d::mat::DepthFormat Depth16_dyn() { return Depth16; }
		static ::h3d::mat::DepthFormat Depth24;
		static inline ::h3d::mat::DepthFormat Depth24_dyn() { return Depth24; }
		static ::h3d::mat::DepthFormat Depth24Stencil8;
		static inline ::h3d::mat::DepthFormat Depth24Stencil8_dyn() { return Depth24Stencil8; }
};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_DepthFormat */ 
