#include <hxcpp.h>

#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_col_Frustum
#include <h3d/col/Frustum.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_col_Ray
#include <h3d/col/Ray.h>
#endif
#ifndef INCLUDED_h3d_col_Sphere
#include <h3d/col/Sphere.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

namespace h3d{
namespace col{


static ::String Collider_obj_sMemberFields[] = {
	HX_("rayIntersection",53,fb,28,64),
	HX_("contains",1f,5a,7b,2c),
	HX_("inFrustum",fd,89,7c,b6),
	HX_("inSphere",d2,f8,74,45),
	::String(null()) };

::hx::Class Collider_obj::__mClass;

void Collider_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.Collider",97,97,c7,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Collider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x12a1e47b >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
