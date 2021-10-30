#ifndef INCLUDED_hxd_clipper__Clipper_EdgeSide
#define INCLUDED_hxd_clipper__Clipper_EdgeSide

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxd,clipper,_Clipper,EdgeSide)
namespace hxd{
namespace clipper{
namespace _Clipper{


class EdgeSide_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef EdgeSide_obj OBJ_;

	public:
		EdgeSide_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.clipper._Clipper.EdgeSide",59,cd,54,37); }
		::String __ToString() const { return HX_("EdgeSide.",1a,e1,e9,5f) + _hx_tag; }

		static ::hxd::clipper::_Clipper::EdgeSide Left;
		static inline ::hxd::clipper::_Clipper::EdgeSide Left_dyn() { return Left; }
		static ::hxd::clipper::_Clipper::EdgeSide Right;
		static inline ::hxd::clipper::_Clipper::EdgeSide Right_dyn() { return Right; }
};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_EdgeSide */ 
