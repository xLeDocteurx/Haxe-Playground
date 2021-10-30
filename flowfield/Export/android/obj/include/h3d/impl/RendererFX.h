#ifndef INCLUDED_h3d_impl_RendererFX
#define INCLUDED_h3d_impl_RendererFX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,impl,RendererFX)
HX_DECLARE_CLASS2(h3d,impl,Step)
HX_DECLARE_CLASS2(h3d,scene,Renderer)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)

namespace h3d{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES RendererFX_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_begin)( ::h3d::scene::Renderer r, ::h3d::impl::Step step); 
		static inline void begin( ::Dynamic _hx_, ::h3d::scene::Renderer r, ::h3d::impl::Step step) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::h3d::impl::RendererFX_obj *>(_hx_.mPtr->_hx_getInterface(0x21579b4e)))->_hx_begin)(r,step);
		}
		void (::hx::Object :: *_hx_end)( ::h3d::scene::Renderer r, ::h3d::impl::Step step); 
		static inline void end( ::Dynamic _hx_, ::h3d::scene::Renderer r, ::h3d::impl::Step step) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::h3d::impl::RendererFX_obj *>(_hx_.mPtr->_hx_getInterface(0x21579b4e)))->_hx_end)(r,step);
		}
		void (::hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::h3d::impl::RendererFX_obj *>(_hx_.mPtr->_hx_getInterface(0x21579b4e)))->_hx_dispose)();
		}
};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_RendererFX */ 
