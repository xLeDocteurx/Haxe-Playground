#ifndef INCLUDED_format_mp3_Emphasis
#define INCLUDED_format_mp3_Emphasis

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,mp3,Emphasis)
namespace format{
namespace mp3{


class Emphasis_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Emphasis_obj OBJ_;

	public:
		Emphasis_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.mp3.Emphasis",31,42,75,ee); }
		::String __ToString() const { return HX_("Emphasis.",d2,3e,3f,22) + _hx_tag; }

		static ::format::mp3::Emphasis CCIT_J17;
		static inline ::format::mp3::Emphasis CCIT_J17_dyn() { return CCIT_J17; }
		static ::format::mp3::Emphasis InvalidEmphasis;
		static inline ::format::mp3::Emphasis InvalidEmphasis_dyn() { return InvalidEmphasis; }
		static ::format::mp3::Emphasis Ms50_15;
		static inline ::format::mp3::Emphasis Ms50_15_dyn() { return Ms50_15; }
		static ::format::mp3::Emphasis NoEmphasis;
		static inline ::format::mp3::Emphasis NoEmphasis_dyn() { return NoEmphasis; }
};

} // end namespace format
} // end namespace mp3

#endif /* INCLUDED_format_mp3_Emphasis */ 
