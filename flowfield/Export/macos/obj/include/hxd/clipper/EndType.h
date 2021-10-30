#ifndef INCLUDED_hxd_clipper_EndType
#define INCLUDED_hxd_clipper_EndType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,clipper,EndType)
namespace hxd{
namespace clipper{


class EndType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef EndType_obj OBJ_;

	public:
		EndType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.clipper.EndType",9a,51,ef,2d); }
		::String __ToString() const { return HX_("EndType.",79,be,7a,f2) + _hx_tag; }

		static ::hxd::clipper::EndType ClosedLine;
		static inline ::hxd::clipper::EndType ClosedLine_dyn() { return ClosedLine; }
		static ::hxd::clipper::EndType ClosedPol;
		static inline ::hxd::clipper::EndType ClosedPol_dyn() { return ClosedPol; }
		static ::hxd::clipper::EndType OpenButt;
		static inline ::hxd::clipper::EndType OpenButt_dyn() { return OpenButt; }
		static ::hxd::clipper::EndType OpenRound;
		static inline ::hxd::clipper::EndType OpenRound_dyn() { return OpenRound; }
		static ::hxd::clipper::EndType OpenSquare;
		static inline ::hxd::clipper::EndType OpenSquare_dyn() { return OpenSquare; }
};

} // end namespace hxd
} // end namespace clipper

#endif /* INCLUDED_hxd_clipper_EndType */ 
