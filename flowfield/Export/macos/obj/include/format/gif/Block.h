#ifndef INCLUDED_format_gif_Block
#define INCLUDED_format_gif_Block

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gif,Block)
HX_DECLARE_CLASS2(format,gif,Extension)
namespace format{
namespace gif{


class Block_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Block_obj OBJ_;

	public:
		Block_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.gif.Block",4c,c1,15,c9); }
		::String __ToString() const { return HX_("Block.",61,a2,7e,dc) + _hx_tag; }

		static ::format::gif::Block BEOF;
		static inline ::format::gif::Block BEOF_dyn() { return BEOF; }
		static ::format::gif::Block BExtension( ::format::gif::Extension extension);
		static ::Dynamic BExtension_dyn();
		static ::format::gif::Block BFrame( ::Dynamic frame);
		static ::Dynamic BFrame_dyn();
};

} // end namespace format
} // end namespace gif

#endif /* INCLUDED_format_gif_Block */ 
