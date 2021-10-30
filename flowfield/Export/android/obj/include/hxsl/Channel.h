#ifndef INCLUDED_hxsl_Channel
#define INCLUDED_hxsl_Channel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Channel)
namespace hxsl{


class Channel_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Channel_obj OBJ_;

	public:
		Channel_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxsl.Channel",de,9e,86,5e); }
		::String __ToString() const { return HX_("Channel.",2b,66,a0,44) + _hx_tag; }

		static ::hxsl::Channel A;
		static inline ::hxsl::Channel A_dyn() { return A; }
		static ::hxsl::Channel B;
		static inline ::hxsl::Channel B_dyn() { return B; }
		static ::hxsl::Channel G;
		static inline ::hxsl::Channel G_dyn() { return G; }
		static ::hxsl::Channel PackedFloat;
		static inline ::hxsl::Channel PackedFloat_dyn() { return PackedFloat; }
		static ::hxsl::Channel PackedNormal;
		static inline ::hxsl::Channel PackedNormal_dyn() { return PackedNormal; }
		static ::hxsl::Channel R;
		static inline ::hxsl::Channel R_dyn() { return R; }
		static ::hxsl::Channel Unknown;
		static inline ::hxsl::Channel Unknown_dyn() { return Unknown; }
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Channel */ 
