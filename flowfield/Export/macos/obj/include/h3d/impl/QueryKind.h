#ifndef INCLUDED_h3d_impl_QueryKind
#define INCLUDED_h3d_impl_QueryKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,impl,QueryKind)
namespace h3d{
namespace impl{


class QueryKind_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef QueryKind_obj OBJ_;

	public:
		QueryKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.impl.QueryKind",e3,a2,ac,1a); }
		::String __ToString() const { return HX_("QueryKind.",52,34,52,2b) + _hx_tag; }

		static ::h3d::impl::QueryKind Samples;
		static inline ::h3d::impl::QueryKind Samples_dyn() { return Samples; }
		static ::h3d::impl::QueryKind TimeStamp;
		static inline ::h3d::impl::QueryKind TimeStamp_dyn() { return TimeStamp; }
};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_QueryKind */ 
