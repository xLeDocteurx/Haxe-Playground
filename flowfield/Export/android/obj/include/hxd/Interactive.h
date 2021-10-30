#ifndef INCLUDED_hxd_Interactive
#define INCLUDED_hxd_Interactive

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,Cursor)
HX_DECLARE_CLASS1(hxd,Event)
HX_DECLARE_CLASS1(hxd,Interactive)
HX_DECLARE_CLASS1(hxd,InteractiveScene)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES Interactive_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::hxd::Cursor (::hx::Object :: *_hx_set_cursor)( ::hxd::Cursor value); 
		static inline  ::hxd::Cursor set_cursor( ::Dynamic _hx_, ::hxd::Cursor value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::Interactive_obj *>(_hx_.mPtr->_hx_getInterface(0xa0bf432e)))->_hx_set_cursor)(value);
		}
		void (::hx::Object :: *_hx_handleEvent)( ::hxd::Event e); 
		static inline void handleEvent( ::Dynamic _hx_, ::hxd::Event e) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::Interactive_obj *>(_hx_.mPtr->_hx_getInterface(0xa0bf432e)))->_hx_handleEvent)(e);
		}
		::Dynamic (::hx::Object :: *_hx_getInteractiveScene)(); 
		static inline ::Dynamic getInteractiveScene( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::Interactive_obj *>(_hx_.mPtr->_hx_getInterface(0xa0bf432e)))->_hx_getInteractiveScene)();
		}
};

} // end namespace hxd

#endif /* INCLUDED_hxd_Interactive */ 
