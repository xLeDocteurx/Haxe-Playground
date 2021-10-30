#ifndef INCLUDED_h3d_IDrawable
#define INCLUDED_h3d_IDrawable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS1(h3d,IDrawable)

namespace h3d{


class HXCPP_CLASS_ATTRIBUTES IDrawable_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_render)( ::h3d::Engine engine); 
		static inline void render( ::Dynamic _hx_, ::h3d::Engine engine) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::h3d::IDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xd84ebfae)))->_hx_render)(engine);
		}
};

} // end namespace h3d

#endif /* INCLUDED_h3d_IDrawable */ 
