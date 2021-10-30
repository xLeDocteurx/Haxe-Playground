#ifndef INCLUDED_hxsl_ARead
#define INCLUDED_hxsl_ARead

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,ARead)
HX_DECLARE_CLASS2(hxsl,_Flatten,Alloc)
namespace hxsl{


class ARead_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ARead_obj OBJ_;

	public:
		ARead_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.ARead",b2,0d,18,44); }
		::String __ToString() const { return HX_("ARead.",17,84,1a,77) + _hx_tag; }

		static ::hxsl::ARead AIndex( ::hxsl::_Flatten::Alloc a);
		static ::Dynamic AIndex_dyn();
		static ::hxsl::ARead AOffset( ::hxsl::_Flatten::Alloc a,int stride, ::Dynamic delta);
		static ::Dynamic AOffset_dyn();
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_ARead */ 
