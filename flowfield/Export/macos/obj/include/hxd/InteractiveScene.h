#ifndef INCLUDED_hxd_InteractiveScene
#define INCLUDED_hxd_InteractiveScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,Event)
HX_DECLARE_CLASS1(hxd,Interactive)
HX_DECLARE_CLASS1(hxd,InteractiveScene)
HX_DECLARE_CLASS1(hxd,SceneEvents)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES InteractiveScene_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_setEvents)( ::hxd::SceneEvents s); 
		static inline void setEvents( ::Dynamic _hx_, ::hxd::SceneEvents s) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::InteractiveScene_obj *>(_hx_.mPtr->_hx_getInterface(0xa477bf3e)))->_hx_setEvents)(s);
		}
		::Dynamic (::hx::Object :: *_hx_handleEvent)( ::hxd::Event e,::Dynamic last); 
		static inline ::Dynamic handleEvent( ::Dynamic _hx_, ::hxd::Event e,::Dynamic last) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::InteractiveScene_obj *>(_hx_.mPtr->_hx_getInterface(0xa477bf3e)))->_hx_handleEvent)(e,last);
		}
		void (::hx::Object :: *_hx_dispatchEvent)( ::hxd::Event e,::Dynamic to); 
		static inline void dispatchEvent( ::Dynamic _hx_, ::hxd::Event e,::Dynamic to) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::InteractiveScene_obj *>(_hx_.mPtr->_hx_getInterface(0xa477bf3e)))->_hx_dispatchEvent)(e,to);
		}
		void (::hx::Object :: *_hx_dispatchListeners)( ::hxd::Event e); 
		static inline void dispatchListeners( ::Dynamic _hx_, ::hxd::Event e) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::InteractiveScene_obj *>(_hx_.mPtr->_hx_getInterface(0xa477bf3e)))->_hx_dispatchListeners)(e);
		}
		bool (::hx::Object :: *_hx_isInteractiveVisible)(::Dynamic i); 
		static inline bool isInteractiveVisible( ::Dynamic _hx_,::Dynamic i) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::InteractiveScene_obj *>(_hx_.mPtr->_hx_getInterface(0xa477bf3e)))->_hx_isInteractiveVisible)(i);
		}
};

} // end namespace hxd

#endif /* INCLUDED_hxd_InteractiveScene */ 
