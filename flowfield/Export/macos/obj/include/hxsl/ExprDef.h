#ifndef INCLUDED_hxsl_ExprDef
#define INCLUDED_hxsl_ExprDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Binop)
HX_DECLARE_CLASS2(haxe,macro,Unop)
HX_DECLARE_CLASS1(hxsl,Const)
HX_DECLARE_CLASS1(hxsl,ExprDef)
namespace hxsl{


class ExprDef_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ExprDef_obj OBJ_;

	public:
		ExprDef_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.ExprDef",ab,01,ef,bc); }
		::String __ToString() const { return HX_("ExprDef.",be,76,8e,81) + _hx_tag; }

		static ::hxsl::ExprDef EArray( ::Dynamic e, ::Dynamic eindex);
		static ::Dynamic EArray_dyn();
		static ::hxsl::ExprDef EArrayDecl(::Array< ::Dynamic> el);
		static ::Dynamic EArrayDecl_dyn();
		static ::hxsl::ExprDef EBinop( ::haxe::macro::Binop op, ::Dynamic e1, ::Dynamic e2);
		static ::Dynamic EBinop_dyn();
		static ::hxsl::ExprDef EBlock(::Array< ::Dynamic> el);
		static ::Dynamic EBlock_dyn();
		static ::hxsl::ExprDef EBreak;
		static inline ::hxsl::ExprDef EBreak_dyn() { return EBreak; }
		static ::hxsl::ExprDef ECall( ::Dynamic e,::Array< ::Dynamic> args);
		static ::Dynamic ECall_dyn();
		static ::hxsl::ExprDef EConst( ::hxsl::Const c);
		static ::Dynamic EConst_dyn();
		static ::hxsl::ExprDef EContinue;
		static inline ::hxsl::ExprDef EContinue_dyn() { return EContinue; }
		static ::hxsl::ExprDef EDiscard;
		static inline ::hxsl::ExprDef EDiscard_dyn() { return EDiscard; }
		static ::hxsl::ExprDef EField( ::Dynamic e,::String f);
		static ::Dynamic EField_dyn();
		static ::hxsl::ExprDef EFor(::String v, ::Dynamic loop, ::Dynamic block);
		static ::Dynamic EFor_dyn();
		static ::hxsl::ExprDef EFunction( ::Dynamic f);
		static ::Dynamic EFunction_dyn();
		static ::hxsl::ExprDef EIdent(::String i);
		static ::Dynamic EIdent_dyn();
		static ::hxsl::ExprDef EIf( ::Dynamic econd, ::Dynamic eif, ::Dynamic eelse);
		static ::Dynamic EIf_dyn();
		static ::hxsl::ExprDef EMeta(::String name,::Array< ::Dynamic> args, ::Dynamic e);
		static ::Dynamic EMeta_dyn();
		static ::hxsl::ExprDef EParenthesis( ::Dynamic e);
		static ::Dynamic EParenthesis_dyn();
		static ::hxsl::ExprDef EReturn( ::Dynamic e);
		static ::Dynamic EReturn_dyn();
		static ::hxsl::ExprDef ESwitch( ::Dynamic e,::Array< ::Dynamic> cases, ::Dynamic def);
		static ::Dynamic ESwitch_dyn();
		static ::hxsl::ExprDef EUnop( ::haxe::macro::Unop op, ::Dynamic e1);
		static ::Dynamic EUnop_dyn();
		static ::hxsl::ExprDef EVars(::Array< ::Dynamic> v);
		static ::Dynamic EVars_dyn();
		static ::hxsl::ExprDef EWhile( ::Dynamic cond, ::Dynamic loop,bool normalWhile);
		static ::Dynamic EWhile_dyn();
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_ExprDef */ 
