#ifndef INCLUDED_hxd_clipper_JoinType
#define INCLUDED_hxd_clipper_JoinType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,clipper,JoinType)
namespace hxd{
namespace clipper{


class JoinType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef JoinType_obj OBJ_;

	public:
		JoinType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.clipper.JoinType",bf,a2,cf,2a); }
		::String __ToString() const { return HX_("JoinType.",ca,1b,30,7e) + _hx_tag; }

		static ::hxd::clipper::JoinType Miter;
		static inline ::hxd::clipper::JoinType Miter_dyn() { return Miter; }
		static ::hxd::clipper::JoinType Round;
		static inline ::hxd::clipper::JoinType Round_dyn() { return Round; }
		static ::hxd::clipper::JoinType Square;
		static inline ::hxd::clipper::JoinType Square_dyn() { return Square; }
};

} // end namespace hxd
} // end namespace clipper

#endif /* INCLUDED_hxd_clipper_JoinType */ 
