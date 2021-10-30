#include <hxcpp.h>

#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_FileSystem
#include <hxd/fs/FileSystem.h>
#endif

namespace hxd{
namespace fs{


static ::String FileSystem_obj_sMemberFields[] = {
	HX_("getRoot",d8,9d,31,1e),
	HX_("get",96,80,4e,00),
	HX_("exists",dc,1d,e0,bf),
	HX_("dispose",9f,80,4c,bb),
	HX_("dir",4d,3d,4c,00),
	::String(null()) };

::hx::Class FileSystem_obj::__mClass;

void FileSystem_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.FileSystem",92,61,cf,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileSystem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x7db45c4c >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fs
