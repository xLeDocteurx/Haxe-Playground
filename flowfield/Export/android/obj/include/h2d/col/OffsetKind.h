#ifndef INCLUDED_h2d_col_OffsetKind
#define INCLUDED_h2d_col_OffsetKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,OffsetKind)
namespace h2d{
namespace col{


class OffsetKind_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef OffsetKind_obj OBJ_;

	public:
		OffsetKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h2d.col.OffsetKind",a9,6f,48,46); }
		::String __ToString() const { return HX_("OffsetKind.",a7,63,4e,5e) + _hx_tag; }

		static ::h2d::col::OffsetKind Miter;
		static inline ::h2d::col::OffsetKind Miter_dyn() { return Miter; }
		static ::h2d::col::OffsetKind Round(Float arc);
		static ::Dynamic Round_dyn();
		static ::h2d::col::OffsetKind Square;
		static inline ::h2d::col::OffsetKind Square_dyn() { return Square; }
};

} // end namespace h2d
} // end namespace col

#endif /* INCLUDED_h2d_col_OffsetKind */ 
