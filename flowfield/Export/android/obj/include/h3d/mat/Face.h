#ifndef INCLUDED_h3d_mat_Face
#define INCLUDED_h3d_mat_Face

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,Face)
namespace h3d{
namespace mat{


class Face_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Face_obj OBJ_;

	public:
		Face_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.mat.Face",20,99,0b,8f); }
		::String __ToString() const { return HX_("Face.",d1,c4,75,8e) + _hx_tag; }

		static ::h3d::mat::Face Back;
		static inline ::h3d::mat::Face Back_dyn() { return Back; }
		static ::h3d::mat::Face Both;
		static inline ::h3d::mat::Face Both_dyn() { return Both; }
		static ::h3d::mat::Face Front;
		static inline ::h3d::mat::Face Front_dyn() { return Front; }
		static ::h3d::mat::Face None;
		static inline ::h3d::mat::Face None_dyn() { return None; }
};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_Face */ 
