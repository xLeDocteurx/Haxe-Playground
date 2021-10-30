#ifndef INCLUDED_hxColorToolkit_spaces_Color
#define INCLUDED_hxColorToolkit_spaces_Color

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxColorToolkit,spaces,Color)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,RGB)

namespace hxColorToolkit{
namespace spaces{


class HXCPP_CLASS_ATTRIBUTES Color_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		Float (::hx::Object :: *_hx_getValue)(int channel); 
		static inline Float getValue( ::Dynamic _hx_,int channel) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::spaces::Color_obj *>(_hx_.mPtr->_hx_getInterface(0x98fa9e0b)))->_hx_getValue)(channel);
		}
		Float (::hx::Object :: *_hx_setValue)(int channel,Float val); 
		static inline Float setValue( ::Dynamic _hx_,int channel,Float val) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::spaces::Color_obj *>(_hx_.mPtr->_hx_getInterface(0x98fa9e0b)))->_hx_setValue)(channel,val);
		}
		Float (::hx::Object :: *_hx_minValue)(int channel); 
		static inline Float minValue( ::Dynamic _hx_,int channel) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::spaces::Color_obj *>(_hx_.mPtr->_hx_getInterface(0x98fa9e0b)))->_hx_minValue)(channel);
		}
		Float (::hx::Object :: *_hx_maxValue)(int channel); 
		static inline Float maxValue( ::Dynamic _hx_,int channel) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::spaces::Color_obj *>(_hx_.mPtr->_hx_getInterface(0x98fa9e0b)))->_hx_maxValue)(channel);
		}
		int (::hx::Object :: *_hx_getColor)(); 
		static inline int getColor( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::spaces::Color_obj *>(_hx_.mPtr->_hx_getInterface(0x98fa9e0b)))->_hx_getColor)();
		}
		::Dynamic (::hx::Object :: *_hx_setColor)(int c); 
		static inline ::Dynamic setColor( ::Dynamic _hx_,int c) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::spaces::Color_obj *>(_hx_.mPtr->_hx_getInterface(0x98fa9e0b)))->_hx_setColor)(c);
		}
		 ::hxColorToolkit::spaces::RGB (::hx::Object :: *_hx_toRGB)(); 
		static inline  ::hxColorToolkit::spaces::RGB toRGB( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::spaces::Color_obj *>(_hx_.mPtr->_hx_getInterface(0x98fa9e0b)))->_hx_toRGB)();
		}
		::Dynamic (::hx::Object :: *_hx_fromRGB)( ::hxColorToolkit::spaces::RGB rgb); 
		static inline ::Dynamic fromRGB( ::Dynamic _hx_, ::hxColorToolkit::spaces::RGB rgb) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::spaces::Color_obj *>(_hx_.mPtr->_hx_getInterface(0x98fa9e0b)))->_hx_fromRGB)(rgb);
		}
		::Dynamic (::hx::Object :: *_hx_clone)(); 
		static inline ::Dynamic clone( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::spaces::Color_obj *>(_hx_.mPtr->_hx_getInterface(0x98fa9e0b)))->_hx_clone)();
		}
		::Dynamic (::hx::Object :: *_hx_interpolate)(::Dynamic target,::hx::Null< Float >  ratio); 
		static inline ::Dynamic interpolate( ::Dynamic _hx_,::Dynamic target,::hx::Null< Float >  ratio) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::spaces::Color_obj *>(_hx_.mPtr->_hx_getInterface(0x98fa9e0b)))->_hx_interpolate)(target,ratio);
		}
};

} // end namespace hxColorToolkit
} // end namespace spaces

#endif /* INCLUDED_hxColorToolkit_spaces_Color */ 
