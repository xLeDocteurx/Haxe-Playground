#ifndef INCLUDED_format_mp3_Layer
#define INCLUDED_format_mp3_Layer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,Layer)
namespace format{
namespace mp3{


class Layer_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Layer_obj OBJ_;

	public:
		Layer_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.mp3.Layer",3c,ba,1c,bd); }
		::String __ToString() const { return HX_("Layer.",5d,89,45,8d) + _hx_tag; }

		static ::format::mp3::Layer Layer1;
		static inline ::format::mp3::Layer Layer1_dyn() { return Layer1; }
		static ::format::mp3::Layer Layer2;
		static inline ::format::mp3::Layer Layer2_dyn() { return Layer2; }
		static ::format::mp3::Layer Layer3;
		static inline ::format::mp3::Layer Layer3_dyn() { return Layer3; }
		static ::format::mp3::Layer LayerReserved;
		static inline ::format::mp3::Layer LayerReserved_dyn() { return LayerReserved; }
};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_Layer */ 
