#ifndef INCLUDED_hxsl_TExprDef
#define INCLUDED_hxsl_TExprDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Binop)
HX_DECLARE_CLASS2(haxe,macro,Unop)
HX_DECLARE_CLASS1(hxsl,Component)
HX_DECLARE_CLASS1(hxsl,Const)
HX_DECLARE_CLASS1(hxsl,TExprDef)
HX_DECLARE_CLASS1(hxsl,TGlobal)
namespace hxsl{


class TExprDef_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TExprDef_obj OBJ_;

	public:
		TExprDef_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.TExprDef",01,fb,bc,cf); }
		::String __ToString() const { return HX_("TExprDef.",12,eb,c4,b8) + _hx_tag; }

		static ::hxsl::TExprDef TArray( ::Dynamic e, ::Dynamic index);
		static ::Dynamic TArray_dyn();
		static ::hxsl::TExprDef TArrayDecl(::Array< ::Dynamic> el);
		static ::Dynamic TArrayDecl_dyn();
		static ::hxsl::TExprDef TBinop( ::haxe::macro::Binop op, ::Dynamic e1, ::Dynamic e2);
		static ::Dynamic TBinop_dyn();
		static ::hxsl::TExprDef TBlock(::Array< ::Dynamic> el);
		static ::Dynamic TBlock_dyn();
		static ::hxsl::TExprDef TBreak;
		static inline ::hxsl::TExprDef TBreak_dyn() { return TBreak; }
		static ::hxsl::TExprDef TCall( ::Dynamic e,::Array< ::Dynamic> args);
		static ::Dynamic TCall_dyn();
		static ::hxsl::TExprDef TConst( ::hxsl::Const c);
		static ::Dynamic TConst_dyn();
		static ::hxsl::TExprDef TContinue;
		static inline ::hxsl::TExprDef TContinue_dyn() { return TContinue; }
		static ::hxsl::TExprDef TDiscard;
		static inline ::hxsl::TExprDef TDiscard_dyn() { return TDiscard; }
		static ::hxsl::TExprDef TFor( ::Dynamic v, ::Dynamic it, ::Dynamic loop);
		static ::Dynamic TFor_dyn();
		static ::hxsl::TExprDef TGlobal( ::hxsl::TGlobal g);
		static ::Dynamic TGlobal_dyn();
		static ::hxsl::TExprDef TIf( ::Dynamic econd, ::Dynamic eif, ::Dynamic eelse);
		static ::Dynamic TIf_dyn();
		static ::hxsl::TExprDef TMeta(::String m,::Array< ::Dynamic> args, ::Dynamic e);
		static ::Dynamic TMeta_dyn();
		static ::hxsl::TExprDef TParenthesis( ::Dynamic e);
		static ::Dynamic TParenthesis_dyn();
		static ::hxsl::TExprDef TReturn( ::Dynamic e);
		static ::Dynamic TReturn_dyn();
		static ::hxsl::TExprDef TSwitch( ::Dynamic e,::Array< ::Dynamic> cases, ::Dynamic def);
		static ::Dynamic TSwitch_dyn();
		static ::hxsl::TExprDef TSwiz( ::Dynamic e,::Array< ::Dynamic> regs);
		static ::Dynamic TSwiz_dyn();
		static ::hxsl::TExprDef TUnop( ::haxe::macro::Unop op, ::Dynamic e1);
		static ::Dynamic TUnop_dyn();
		static ::hxsl::TExprDef TVar( ::Dynamic v);
		static ::Dynamic TVar_dyn();
		static ::hxsl::TExprDef TVarDecl( ::Dynamic v, ::Dynamic init);
		static ::Dynamic TVarDecl_dyn();
		static ::hxsl::TExprDef TWhile( ::Dynamic e, ::Dynamic loop,bool normalWhile);
		static ::Dynamic TWhile_dyn();
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_TExprDef */ 
