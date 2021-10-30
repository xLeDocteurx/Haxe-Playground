#ifndef INCLUDED_hxsl_Type
#define INCLUDED_hxsl_Type

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,SizeDecl)
HX_DECLARE_CLASS1(hxsl,Type)
HX_DECLARE_CLASS1(hxsl,VecType)
namespace hxsl{


class Type_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Type_obj OBJ_;

	public:
		Type_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.Type",bf,45,b8,12); }
		::String __ToString() const { return HX_("Type.",14,e0,f8,ad) + _hx_tag; }

		static ::hxsl::Type TArray( ::hxsl::Type t, ::hxsl::SizeDecl size);
		static ::Dynamic TArray_dyn();
		static ::hxsl::Type TBool;
		static inline ::hxsl::Type TBool_dyn() { return TBool; }
		static ::hxsl::Type TBuffer( ::hxsl::Type t, ::hxsl::SizeDecl size);
		static ::Dynamic TBuffer_dyn();
		static ::hxsl::Type TBytes(int size);
		static ::Dynamic TBytes_dyn();
		static ::hxsl::Type TChannel(int size);
		static ::Dynamic TChannel_dyn();
		static ::hxsl::Type TFloat;
		static inline ::hxsl::Type TFloat_dyn() { return TFloat; }
		static ::hxsl::Type TFun(::Array< ::Dynamic> variants);
		static ::Dynamic TFun_dyn();
		static ::hxsl::Type TInt;
		static inline ::hxsl::Type TInt_dyn() { return TInt; }
		static ::hxsl::Type TMat2;
		static inline ::hxsl::Type TMat2_dyn() { return TMat2; }
		static ::hxsl::Type TMat3;
		static inline ::hxsl::Type TMat3_dyn() { return TMat3; }
		static ::hxsl::Type TMat3x4;
		static inline ::hxsl::Type TMat3x4_dyn() { return TMat3x4; }
		static ::hxsl::Type TMat4;
		static inline ::hxsl::Type TMat4_dyn() { return TMat4; }
		static ::hxsl::Type TSampler2D;
		static inline ::hxsl::Type TSampler2D_dyn() { return TSampler2D; }
		static ::hxsl::Type TSampler2DArray;
		static inline ::hxsl::Type TSampler2DArray_dyn() { return TSampler2DArray; }
		static ::hxsl::Type TSamplerCube;
		static inline ::hxsl::Type TSamplerCube_dyn() { return TSamplerCube; }
		static ::hxsl::Type TString;
		static inline ::hxsl::Type TString_dyn() { return TString; }
		static ::hxsl::Type TStruct(::Array< ::Dynamic> vl);
		static ::Dynamic TStruct_dyn();
		static ::hxsl::Type TVec(int size, ::hxsl::VecType t);
		static ::Dynamic TVec_dyn();
		static ::hxsl::Type TVoid;
		static inline ::hxsl::Type TVoid_dyn() { return TVoid; }
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Type */ 
