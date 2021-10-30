#ifndef INCLUDED_hxsl_Output
#define INCLUDED_hxsl_Output

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Component)
HX_DECLARE_CLASS1(hxsl,Output)
namespace hxsl{


class Output_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Output_obj OBJ_;

	public:
		Output_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.Output",46,ed,ee,1a); }
		::String __ToString() const { return HX_("Output.",ed,39,bd,b1) + _hx_tag; }

		static ::hxsl::Output Const(Float v);
		static ::Dynamic Const_dyn();
		static ::hxsl::Output PackFloat( ::hxsl::Output v);
		static ::Dynamic PackFloat_dyn();
		static ::hxsl::Output PackNormal( ::hxsl::Output v);
		static ::Dynamic PackNormal_dyn();
		static ::hxsl::Output Swiz( ::hxsl::Output a,::Array< ::Dynamic> swiz);
		static ::Dynamic Swiz_dyn();
		static ::hxsl::Output Value(::String v, ::Dynamic size);
		static ::Dynamic Value_dyn();
		static ::hxsl::Output Vec2(::Array< ::Dynamic> a);
		static ::Dynamic Vec2_dyn();
		static ::hxsl::Output Vec3(::Array< ::Dynamic> a);
		static ::Dynamic Vec3_dyn();
		static ::hxsl::Output Vec4(::Array< ::Dynamic> a);
		static ::Dynamic Vec4_dyn();
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Output */ 
