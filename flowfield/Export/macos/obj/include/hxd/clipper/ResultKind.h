#ifndef INCLUDED_hxd_clipper_ResultKind
#define INCLUDED_hxd_clipper_ResultKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,clipper,ResultKind)
namespace hxd{
namespace clipper{


class ResultKind_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ResultKind_obj OBJ_;

	public:
		ResultKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.clipper.ResultKind",8c,b0,1f,fb); }
		::String __ToString() const { return HX_("ResultKind.",1d,a6,5c,6c) + _hx_tag; }

		static ::hxd::clipper::ResultKind All;
		static inline ::hxd::clipper::ResultKind All_dyn() { return All; }
		static ::hxd::clipper::ResultKind HolesOnly;
		static inline ::hxd::clipper::ResultKind HolesOnly_dyn() { return HolesOnly; }
		static ::hxd::clipper::ResultKind NoHoles;
		static inline ::hxd::clipper::ResultKind NoHoles_dyn() { return NoHoles; }
};

} // end namespace hxd
} // end namespace clipper

#endif /* INCLUDED_hxd_clipper_ResultKind */ 
