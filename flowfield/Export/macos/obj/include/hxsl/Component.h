#ifndef INCLUDED_hxsl_Component
#define INCLUDED_hxsl_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Component)
namespace hxsl{


class Component_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Component_obj OBJ_;

	public:
		Component_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.Component",98,8b,00,ee); }
		::String __ToString() const { return HX_("Component.",f1,b8,cf,50) + _hx_tag; }

		static ::hxsl::Component W;
		static inline ::hxsl::Component W_dyn() { return W; }
		static ::hxsl::Component X;
		static inline ::hxsl::Component X_dyn() { return X; }
		static ::hxsl::Component Y;
		static inline ::hxsl::Component Y_dyn() { return Y; }
		static ::hxsl::Component Z;
		static inline ::hxsl::Component Z_dyn() { return Z; }
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Component */ 
