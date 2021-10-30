#ifndef INCLUDED_h3d_mat_Wrap
#define INCLUDED_h3d_mat_Wrap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,Wrap)
namespace h3d{
namespace mat{


class Wrap_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Wrap_obj OBJ_;

	public:
		Wrap_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.mat.Wrap",4d,1e,55,9a); }
		::String __ToString() const { return HX_("Wrap.",04,c7,80,63) + _hx_tag; }

		static ::h3d::mat::Wrap Clamp;
		static inline ::h3d::mat::Wrap Clamp_dyn() { return Clamp; }
		static ::h3d::mat::Wrap Repeat;
		static inline ::h3d::mat::Wrap Repeat_dyn() { return Repeat; }
};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_Wrap */ 
