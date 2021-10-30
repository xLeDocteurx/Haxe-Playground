#ifndef INCLUDED_hxd_fmt_fbx__Parser_Token
#define INCLUDED_hxd_fmt_fbx__Parser_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxd,fmt,fbx,_Parser,Token)
namespace hxd{
namespace fmt{
namespace fbx{
namespace _Parser{


class Token_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Token_obj OBJ_;

	public:
		Token_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.fmt.fbx._Parser.Token",dc,98,71,c2); }
		::String __ToString() const { return HX_("Token.",35,8b,7b,c6) + _hx_tag; }

		static ::hxd::fmt::fbx::_Parser::Token TBraceClose;
		static inline ::hxd::fmt::fbx::_Parser::Token TBraceClose_dyn() { return TBraceClose; }
		static ::hxd::fmt::fbx::_Parser::Token TBraceOpen;
		static inline ::hxd::fmt::fbx::_Parser::Token TBraceOpen_dyn() { return TBraceOpen; }
		static ::hxd::fmt::fbx::_Parser::Token TColon;
		static inline ::hxd::fmt::fbx::_Parser::Token TColon_dyn() { return TColon; }
		static ::hxd::fmt::fbx::_Parser::Token TEof;
		static inline ::hxd::fmt::fbx::_Parser::Token TEof_dyn() { return TEof; }
		static ::hxd::fmt::fbx::_Parser::Token TFloat(::String s);
		static ::Dynamic TFloat_dyn();
		static ::hxd::fmt::fbx::_Parser::Token TIdent(::String s);
		static ::Dynamic TIdent_dyn();
		static ::hxd::fmt::fbx::_Parser::Token TInt(::String s);
		static ::Dynamic TInt_dyn();
		static ::hxd::fmt::fbx::_Parser::Token TLength(int v);
		static ::Dynamic TLength_dyn();
		static ::hxd::fmt::fbx::_Parser::Token TNode(::String s);
		static ::Dynamic TNode_dyn();
		static ::hxd::fmt::fbx::_Parser::Token TString(::String s);
		static ::Dynamic TString_dyn();
};

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
} // end namespace _Parser

#endif /* INCLUDED_hxd_fmt_fbx__Parser_Token */ 
