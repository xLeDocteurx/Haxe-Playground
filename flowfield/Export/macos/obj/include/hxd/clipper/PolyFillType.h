#ifndef INCLUDED_hxd_clipper_PolyFillType
#define INCLUDED_hxd_clipper_PolyFillType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,clipper,PolyFillType)
namespace hxd{
namespace clipper{


class PolyFillType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef PolyFillType_obj OBJ_;

	public:
		PolyFillType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.clipper.PolyFillType",c4,fd,b5,e9); }
		::String __ToString() const { return HX_("PolyFillType.",a5,1e,75,1a) + _hx_tag; }

		static ::hxd::clipper::PolyFillType EvenOdd;
		static inline ::hxd::clipper::PolyFillType EvenOdd_dyn() { return EvenOdd; }
		static ::hxd::clipper::PolyFillType Negative;
		static inline ::hxd::clipper::PolyFillType Negative_dyn() { return Negative; }
		static ::hxd::clipper::PolyFillType NonZero;
		static inline ::hxd::clipper::PolyFillType NonZero_dyn() { return NonZero; }
		static ::hxd::clipper::PolyFillType Positive;
		static inline ::hxd::clipper::PolyFillType Positive_dyn() { return Positive; }
};

} // end namespace hxd
} // end namespace clipper

#endif /* INCLUDED_hxd_clipper_PolyFillType */ 
