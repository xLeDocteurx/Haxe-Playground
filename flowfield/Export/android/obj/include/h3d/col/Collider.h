#ifndef INCLUDED_h3d_col_Collider
#define INCLUDED_h3d_col_Collider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS2(h3d,col,Sphere)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Collider_obj {
	public:
		typedef  ::hxd::impl::_Serializable::NoSerializeSupport_obj super;
		HX_DO_INTERFACE_RTTI;

		Float (::hx::Object :: *_hx_rayIntersection)( ::h3d::col::Ray r,bool bestMatch); 
		static inline Float rayIntersection( ::Dynamic _hx_, ::h3d::col::Ray r,bool bestMatch) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::h3d::col::Collider_obj *>(_hx_.mPtr->_hx_getInterface(0x12a1e47b)))->_hx_rayIntersection)(r,bestMatch);
		}
		bool (::hx::Object :: *_hx_contains)( ::h3d::col::Point p); 
		static inline bool contains( ::Dynamic _hx_, ::h3d::col::Point p) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::h3d::col::Collider_obj *>(_hx_.mPtr->_hx_getInterface(0x12a1e47b)))->_hx_contains)(p);
		}
		bool (::hx::Object :: *_hx_inFrustum)( ::h3d::col::Frustum f, ::h3d::Matrix localMatrix); 
		static inline bool inFrustum( ::Dynamic _hx_, ::h3d::col::Frustum f, ::h3d::Matrix localMatrix) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::h3d::col::Collider_obj *>(_hx_.mPtr->_hx_getInterface(0x12a1e47b)))->_hx_inFrustum)(f,localMatrix);
		}
		bool (::hx::Object :: *_hx_inSphere)( ::h3d::col::Sphere s); 
		static inline bool inSphere( ::Dynamic _hx_, ::h3d::col::Sphere s) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::h3d::col::Collider_obj *>(_hx_.mPtr->_hx_getInterface(0x12a1e47b)))->_hx_inSphere)(s);
		}
};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_Collider */ 
