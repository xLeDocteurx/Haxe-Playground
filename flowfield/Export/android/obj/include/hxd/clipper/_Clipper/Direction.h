#ifndef INCLUDED_hxd_clipper__Clipper_Direction
#define INCLUDED_hxd_clipper__Clipper_Direction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxd,clipper,_Clipper,Direction)
namespace hxd{
namespace clipper{
namespace _Clipper{


class Direction_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Direction_obj OBJ_;

	public:
		Direction_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.clipper._Clipper.Direction",ba,41,08,85); }
		::String __ToString() const { return HX_("Direction.",2f,99,c6,1e) + _hx_tag; }

		static ::hxd::clipper::_Clipper::Direction LeftToRight;
		static inline ::hxd::clipper::_Clipper::Direction LeftToRight_dyn() { return LeftToRight; }
		static ::hxd::clipper::_Clipper::Direction RightToLeft;
		static inline ::hxd::clipper::_Clipper::Direction RightToLeft_dyn() { return RightToLeft; }
};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_Direction */ 
