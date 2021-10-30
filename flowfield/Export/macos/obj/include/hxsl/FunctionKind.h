#ifndef INCLUDED_hxsl_FunctionKind
#define INCLUDED_hxsl_FunctionKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,FunctionKind)
namespace hxsl{


class FunctionKind_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FunctionKind_obj OBJ_;

	public:
		FunctionKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.FunctionKind",91,84,76,1e); }
		::String __ToString() const { return HX_("FunctionKind.",02,26,6b,5e) + _hx_tag; }

		static ::hxsl::FunctionKind Fragment;
		static inline ::hxsl::FunctionKind Fragment_dyn() { return Fragment; }
		static ::hxsl::FunctionKind Helper;
		static inline ::hxsl::FunctionKind Helper_dyn() { return Helper; }
		static ::hxsl::FunctionKind Init;
		static inline ::hxsl::FunctionKind Init_dyn() { return Init; }
		static ::hxsl::FunctionKind Vertex;
		static inline ::hxsl::FunctionKind Vertex_dyn() { return Vertex; }
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_FunctionKind */ 
