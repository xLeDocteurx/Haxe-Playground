#ifndef INCLUDED_hxsl_VecType
#define INCLUDED_hxsl_VecType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,VecType)
namespace hxsl{


class VecType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef VecType_obj OBJ_;

	public:
		VecType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.VecType",49,59,32,57); }
		::String __ToString() const { return HX_("VecType.",60,c9,37,e2) + _hx_tag; }

		static ::hxsl::VecType VBool;
		static inline ::hxsl::VecType VBool_dyn() { return VBool; }
		static ::hxsl::VecType VFloat;
		static inline ::hxsl::VecType VFloat_dyn() { return VFloat; }
		static ::hxsl::VecType VInt;
		static inline ::hxsl::VecType VInt_dyn() { return VInt; }
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_VecType */ 
