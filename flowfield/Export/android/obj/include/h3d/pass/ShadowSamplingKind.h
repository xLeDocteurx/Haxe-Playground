#ifndef INCLUDED_h3d_pass_ShadowSamplingKind
#define INCLUDED_h3d_pass_ShadowSamplingKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,pass,ShadowSamplingKind)
namespace h3d{
namespace pass{


class ShadowSamplingKind_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ShadowSamplingKind_obj OBJ_;

	public:
		ShadowSamplingKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.pass.ShadowSamplingKind",43,e2,e2,a4); }
		::String __ToString() const { return HX_("ShadowSamplingKind.",d3,9e,3b,1c) + _hx_tag; }

		static ::h3d::pass::ShadowSamplingKind ESM;
		static inline ::h3d::pass::ShadowSamplingKind ESM_dyn() { return ESM; }
		static ::h3d::pass::ShadowSamplingKind None;
		static inline ::h3d::pass::ShadowSamplingKind None_dyn() { return None; }
		static ::h3d::pass::ShadowSamplingKind PCF;
		static inline ::h3d::pass::ShadowSamplingKind PCF_dyn() { return PCF; }
};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_ShadowSamplingKind */ 
