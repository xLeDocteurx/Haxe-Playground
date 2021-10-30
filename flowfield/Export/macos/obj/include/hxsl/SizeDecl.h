#ifndef INCLUDED_hxsl_SizeDecl
#define INCLUDED_hxsl_SizeDecl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,SizeDecl)
namespace hxsl{


class SizeDecl_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SizeDecl_obj OBJ_;

	public:
		SizeDecl_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.SizeDecl",50,cb,8e,c8); }
		::String __ToString() const { return HX_("SizeDecl.",e3,5f,89,77) + _hx_tag; }

		static ::hxsl::SizeDecl SConst(int v);
		static ::Dynamic SConst_dyn();
		static ::hxsl::SizeDecl SVar( ::Dynamic v);
		static ::Dynamic SVar_dyn();
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_SizeDecl */ 
