#include <hxcpp.h>

#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

namespace hxd{
namespace impl{
namespace _Serializable{


::hx::Class NoSerializeSupport_obj::__mClass;

void NoSerializeSupport_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.impl._Serializable.NoSerializeSupport",b4,c9,a6,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa6f1a21a >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace impl
} // end namespace _Serializable
