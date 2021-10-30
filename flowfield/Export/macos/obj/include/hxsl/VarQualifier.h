#ifndef INCLUDED_hxsl_VarQualifier
#define INCLUDED_hxsl_VarQualifier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Prec)
HX_DECLARE_CLASS1(hxsl,VarQualifier)
namespace hxsl{


class VarQualifier_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef VarQualifier_obj OBJ_;

	public:
		VarQualifier_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.VarQualifier",48,f6,89,3f); }
		::String __ToString() const { return HX_("VarQualifier.",6b,34,5b,2e) + _hx_tag; }

		static ::hxsl::VarQualifier Borrow(::String source);
		static ::Dynamic Borrow_dyn();
		static ::hxsl::VarQualifier Const( ::Dynamic max);
		static ::Dynamic Const_dyn();
		static ::hxsl::VarQualifier Doc(::String s);
		static ::Dynamic Doc_dyn();
		static ::hxsl::VarQualifier Ignore;
		static inline ::hxsl::VarQualifier Ignore_dyn() { return Ignore; }
		static ::hxsl::VarQualifier Name(::String n);
		static ::Dynamic Name_dyn();
		static ::hxsl::VarQualifier Nullable;
		static inline ::hxsl::VarQualifier Nullable_dyn() { return Nullable; }
		static ::hxsl::VarQualifier PerInstance(int v);
		static ::Dynamic PerInstance_dyn();
		static ::hxsl::VarQualifier PerObject;
		static inline ::hxsl::VarQualifier PerObject_dyn() { return PerObject; }
		static ::hxsl::VarQualifier Precision( ::hxsl::Prec p);
		static ::Dynamic Precision_dyn();
		static ::hxsl::VarQualifier Private;
		static inline ::hxsl::VarQualifier Private_dyn() { return Private; }
		static ::hxsl::VarQualifier Range(Float min,Float max);
		static ::Dynamic Range_dyn();
		static ::hxsl::VarQualifier Sampler(::String name);
		static ::Dynamic Sampler_dyn();
		static ::hxsl::VarQualifier Shared;
		static inline ::hxsl::VarQualifier Shared_dyn() { return Shared; }
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_VarQualifier */ 
