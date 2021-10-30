#ifndef INCLUDED_hxsl_VarKind
#define INCLUDED_hxsl_VarKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,VarKind)
namespace hxsl{


class VarKind_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef VarKind_obj OBJ_;

	public:
		VarKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.VarKind",f6,89,c8,5a); }
		::String __ToString() const { return HX_("VarKind.",13,30,0c,02) + _hx_tag; }

		static ::hxsl::VarKind Function;
		static inline ::hxsl::VarKind Function_dyn() { return Function; }
		static ::hxsl::VarKind Global;
		static inline ::hxsl::VarKind Global_dyn() { return Global; }
		static ::hxsl::VarKind Input;
		static inline ::hxsl::VarKind Input_dyn() { return Input; }
		static ::hxsl::VarKind Local;
		static inline ::hxsl::VarKind Local_dyn() { return Local; }
		static ::hxsl::VarKind Output;
		static inline ::hxsl::VarKind Output_dyn() { return Output; }
		static ::hxsl::VarKind Param;
		static inline ::hxsl::VarKind Param_dyn() { return Param; }
		static ::hxsl::VarKind Var;
		static inline ::hxsl::VarKind Var_dyn() { return Var; }
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_VarKind */ 
