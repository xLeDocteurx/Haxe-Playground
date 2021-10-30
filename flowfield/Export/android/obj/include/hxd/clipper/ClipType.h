#ifndef INCLUDED_hxd_clipper_ClipType
#define INCLUDED_hxd_clipper_ClipType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,clipper,ClipType)
namespace hxd{
namespace clipper{


class ClipType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ClipType_obj OBJ_;

	public:
		ClipType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.clipper.ClipType",a5,48,7b,44); }
		::String __ToString() const { return HX_("ClipType.",24,9f,b5,da) + _hx_tag; }

		static ::hxd::clipper::ClipType Difference;
		static inline ::hxd::clipper::ClipType Difference_dyn() { return Difference; }
		static ::hxd::clipper::ClipType Intersection;
		static inline ::hxd::clipper::ClipType Intersection_dyn() { return Intersection; }
		static ::hxd::clipper::ClipType Union;
		static inline ::hxd::clipper::ClipType Union_dyn() { return Union; }
		static ::hxd::clipper::ClipType Xor;
		static inline ::hxd::clipper::ClipType Xor_dyn() { return Xor; }
};

} // end namespace hxd
} // end namespace clipper

#endif /* INCLUDED_hxd_clipper_ClipType */ 
