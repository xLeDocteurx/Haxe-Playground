#ifndef INCLUDED_h2d_col_Collider
#define INCLUDED_h2d_col_Collider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,Collider)
HX_DECLARE_CLASS2(h2d,col,Point)

namespace h2d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Collider_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_contains)( ::h2d::col::Point p); 
		static inline bool contains( ::Dynamic _hx_, ::h2d::col::Point p) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::h2d::col::Collider_obj *>(_hx_.mPtr->_hx_getInterface(0x8fae127a)))->_hx_contains)(p);
		}
};

} // end namespace h2d
} // end namespace col

#endif /* INCLUDED_h2d_col_Collider */ 
