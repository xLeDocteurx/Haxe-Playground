#ifndef INCLUDED_hxsl_Prec
#define INCLUDED_hxsl_Prec

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Prec)
namespace hxsl{


class Prec_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Prec_obj OBJ_;

	public:
		Prec_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.Prec",e5,11,0e,10); }
		::String __ToString() const { return HX_("Prec.",2e,b5,b5,5b) + _hx_tag; }

		static ::hxsl::Prec High;
		static inline ::hxsl::Prec High_dyn() { return High; }
		static ::hxsl::Prec Low;
		static inline ::hxsl::Prec Low_dyn() { return Low; }
		static ::hxsl::Prec Medium;
		static inline ::hxsl::Prec Medium_dyn() { return Medium; }
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Prec */ 
