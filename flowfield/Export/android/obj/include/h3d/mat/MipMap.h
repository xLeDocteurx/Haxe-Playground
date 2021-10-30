#ifndef INCLUDED_h3d_mat_MipMap
#define INCLUDED_h3d_mat_MipMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,MipMap)
namespace h3d{
namespace mat{


class MipMap_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef MipMap_obj OBJ_;

	public:
		MipMap_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.mat.MipMap",ab,30,36,8c); }
		::String __ToString() const { return HX_("MipMap.",a6,fd,7d,2d) + _hx_tag; }

		static ::h3d::mat::MipMap Linear;
		static inline ::h3d::mat::MipMap Linear_dyn() { return Linear; }
		static ::h3d::mat::MipMap Nearest;
		static inline ::h3d::mat::MipMap Nearest_dyn() { return Nearest; }
		static ::h3d::mat::MipMap None;
		static inline ::h3d::mat::MipMap None_dyn() { return None; }
};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_MipMap */ 
