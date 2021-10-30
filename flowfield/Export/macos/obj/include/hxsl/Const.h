#ifndef INCLUDED_hxsl_Const
#define INCLUDED_hxsl_Const

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Const)
namespace hxsl{


class Const_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Const_obj OBJ_;

	public:
		Const_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.Const",be,4a,17,7e); }
		::String __ToString() const { return HX_("Const.",8b,b1,70,fc) + _hx_tag; }

		static ::hxsl::Const CBool(bool b);
		static ::Dynamic CBool_dyn();
		static ::hxsl::Const CFloat(Float v);
		static ::Dynamic CFloat_dyn();
		static ::hxsl::Const CInt(int v);
		static ::Dynamic CInt_dyn();
		static ::hxsl::Const CNull;
		static inline ::hxsl::Const CNull_dyn() { return CNull; }
		static ::hxsl::Const CString(::String v);
		static ::Dynamic CString_dyn();
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Const */ 
