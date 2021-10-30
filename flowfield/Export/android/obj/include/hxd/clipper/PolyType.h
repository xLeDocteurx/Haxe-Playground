#ifndef INCLUDED_hxd_clipper_PolyType
#define INCLUDED_hxd_clipper_PolyType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,clipper,PolyType)
namespace hxd{
namespace clipper{


class PolyType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef PolyType_obj OBJ_;

	public:
		PolyType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.clipper.PolyType",21,c6,78,0a); }
		::String __ToString() const { return HX_("PolyType.",28,ee,85,52) + _hx_tag; }

		static ::hxd::clipper::PolyType Clip;
		static inline ::hxd::clipper::PolyType Clip_dyn() { return Clip; }
		static ::hxd::clipper::PolyType Subject;
		static inline ::hxd::clipper::PolyType Subject_dyn() { return Subject; }
};

} // end namespace hxd
} // end namespace clipper

#endif /* INCLUDED_hxd_clipper_PolyType */ 
