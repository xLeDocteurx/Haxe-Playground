#ifndef INCLUDED_hxColorToolkit_schemes_ColorScheme
#define INCLUDED_hxColorToolkit_schemes_ColorScheme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorScheme)

namespace hxColorToolkit{
namespace schemes{


class HXCPP_CLASS_ATTRIBUTES ColorScheme_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_clone)(); 
		static inline ::Dynamic clone( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::schemes::ColorScheme_obj *>(_hx_.mPtr->_hx_getInterface(0xc3924d65)))->_hx_clone)();
		}
		 ::Dynamic (::hx::Object :: *_hx_getColor)(int index); 
		static inline  ::Dynamic getColor( ::Dynamic _hx_,int index) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::schemes::ColorScheme_obj *>(_hx_.mPtr->_hx_getInterface(0xc3924d65)))->_hx_getColor)(index);
		}
		 ::Dynamic (::hx::Object :: *_hx_iterator)(); 
		static inline  ::Dynamic iterator( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxColorToolkit::schemes::ColorScheme_obj *>(_hx_.mPtr->_hx_getInterface(0xc3924d65)))->_hx_iterator)();
		}
};

} // end namespace hxColorToolkit
} // end namespace schemes

#endif /* INCLUDED_hxColorToolkit_schemes_ColorScheme */ 
