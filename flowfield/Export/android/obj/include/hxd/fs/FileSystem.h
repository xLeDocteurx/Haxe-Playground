#ifndef INCLUDED_hxd_fs_FileSystem
#define INCLUDED_hxd_fs_FileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,fs,FileSystem)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES FileSystem_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::hxd::fs::FileEntry (::hx::Object :: *_hx_getRoot)(); 
		static inline  ::hxd::fs::FileEntry getRoot( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::fs::FileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x7db45c4c)))->_hx_getRoot)();
		}
		 ::hxd::fs::FileEntry (::hx::Object :: *_hx_get)(::String path); 
		static inline  ::hxd::fs::FileEntry get( ::Dynamic _hx_,::String path) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::fs::FileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x7db45c4c)))->_hx_get)(path);
		}
		bool (::hx::Object :: *_hx_exists)(::String path); 
		static inline bool exists( ::Dynamic _hx_,::String path) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::fs::FileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x7db45c4c)))->_hx_exists)(path);
		}
		void (::hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::hxd::fs::FileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x7db45c4c)))->_hx_dispose)();
		}
		::Array< ::Dynamic> (::hx::Object :: *_hx_dir)(::String path); 
		static inline ::Array< ::Dynamic> dir( ::Dynamic _hx_,::String path) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::hxd::fs::FileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x7db45c4c)))->_hx_dir)(path);
		}
};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_FileSystem */ 
