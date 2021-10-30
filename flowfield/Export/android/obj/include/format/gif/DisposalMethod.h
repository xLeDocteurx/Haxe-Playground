#ifndef INCLUDED_format_gif_DisposalMethod
#define INCLUDED_format_gif_DisposalMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gif,DisposalMethod)
namespace format{
namespace gif{


class DisposalMethod_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef DisposalMethod_obj OBJ_;

	public:
		DisposalMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.gif.DisposalMethod",53,d9,de,a5); }
		::String __ToString() const { return HX_("DisposalMethod.",9c,76,59,c9) + _hx_tag; }

		static ::format::gif::DisposalMethod FILL_BACKGROUND;
		static inline ::format::gif::DisposalMethod FILL_BACKGROUND_dyn() { return FILL_BACKGROUND; }
		static ::format::gif::DisposalMethod NO_ACTION;
		static inline ::format::gif::DisposalMethod NO_ACTION_dyn() { return NO_ACTION; }
		static ::format::gif::DisposalMethod RENDER_PREVIOUS;
		static inline ::format::gif::DisposalMethod RENDER_PREVIOUS_dyn() { return RENDER_PREVIOUS; }
		static ::format::gif::DisposalMethod UNDEFINED(int index);
		static ::Dynamic UNDEFINED_dyn();
		static ::format::gif::DisposalMethod UNSPECIFIED;
		static inline ::format::gif::DisposalMethod UNSPECIFIED_dyn() { return UNSPECIFIED; }
};

} // end namespace format
} // end namespace gif

#endif /* INCLUDED_format_gif_DisposalMethod */ 
