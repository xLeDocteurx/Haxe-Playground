#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_fs_BytesFileEntry
#include <hxd/fs/BytesFileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_BytesFileSystem
#include <hxd/fs/BytesFileSystem.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_FileSystem
#include <hxd/fs/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1627b44c90622b31_90_new,"hxd.fs.BytesFileSystem","new",0x7dabe6e1,"hxd.fs.BytesFileSystem.new","hxd/fs/BytesFileSystem.hx",90,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_1627b44c90622b31_94_getRoot,"hxd.fs.BytesFileSystem","getRoot",0x3efd88d9,"hxd.fs.BytesFileSystem.getRoot","hxd/fs/BytesFileSystem.hx",94,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_1627b44c90622b31_99_getBytes,"hxd.fs.BytesFileSystem","getBytes",0xaf10cdd4,"hxd.fs.BytesFileSystem.getBytes","hxd/fs/BytesFileSystem.hx",99,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_1627b44c90622b31_104_exists,"hxd.fs.BytesFileSystem","exists",0x097e4dfb,"hxd.fs.BytesFileSystem.exists","hxd/fs/BytesFileSystem.hx",104,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_1627b44c90622b31_107_get,"hxd.fs.BytesFileSystem","get",0x7da69717,"hxd.fs.BytesFileSystem.get","hxd/fs/BytesFileSystem.hx",107,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_1627b44c90622b31_113_dispose,"hxd.fs.BytesFileSystem","dispose",0xdc186ba0,"hxd.fs.BytesFileSystem.dispose","hxd/fs/BytesFileSystem.hx",113,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_1627b44c90622b31_117_dir,"hxd.fs.BytesFileSystem","dir",0x7da453ce,"hxd.fs.BytesFileSystem.dir","hxd/fs/BytesFileSystem.hx",117,0x0e39ae4f)
namespace hxd{
namespace fs{

void BytesFileSystem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1627b44c90622b31_90_new)
            	}

Dynamic BytesFileSystem_obj::__CreateEmpty() { return new BytesFileSystem_obj; }

void *BytesFileSystem_obj::_hx_vtable = 0;

Dynamic BytesFileSystem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BytesFileSystem_obj > _hx_result = new BytesFileSystem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BytesFileSystem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a813835;
}

static ::hxd::fs::FileSystem_obj _hx_hxd_fs_BytesFileSystem__hx_hxd_fs_FileSystem= {
	(  ::hxd::fs::FileEntry (::hx::Object::*)())&::hxd::fs::BytesFileSystem_obj::getRoot,
	(  ::hxd::fs::FileEntry (::hx::Object::*)(::String))&::hxd::fs::BytesFileSystem_obj::get_76056e86,
	( bool (::hx::Object::*)(::String))&::hxd::fs::BytesFileSystem_obj::exists,
	( void (::hx::Object::*)())&::hxd::fs::BytesFileSystem_obj::dispose,
	( ::Array< ::Dynamic> (::hx::Object::*)(::String))&::hxd::fs::BytesFileSystem_obj::dir,
};

 ::hxd::fs::FileEntry BytesFileSystem_obj::get_76056e86(::String path) {
			return get(path);
}
void *BytesFileSystem_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x7db45c4c: return &_hx_hxd_fs_BytesFileSystem__hx_hxd_fs_FileSystem;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::hxd::fs::FileEntry BytesFileSystem_obj::getRoot(){
            	HX_STACKFRAME(&_hx_pos_1627b44c90622b31_94_getRoot)
HXDLIN(  94)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN(  94)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BytesFileSystem_obj,getRoot,return )

 ::haxe::io::Bytes BytesFileSystem_obj::getBytes(::String path){
            	HX_STACKFRAME(&_hx_pos_1627b44c90622b31_99_getBytes)
HXDLIN(  99)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN(  99)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesFileSystem_obj,getBytes,return )

bool BytesFileSystem_obj::exists(::String path){
            	HX_STACKFRAME(&_hx_pos_1627b44c90622b31_104_exists)
HXDLIN( 104)		return ::hx::IsNotNull( this->getBytes(path) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesFileSystem_obj,exists,return )

 ::hxd::fs::BytesFileEntry BytesFileSystem_obj::get(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_1627b44c90622b31_107_get)
HXLINE( 108)		 ::haxe::io::Bytes bytes = this->getBytes(path);
HXLINE( 109)		if (::hx::IsNull( bytes )) {
HXLINE( 109)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Resource not found '",8a,14,94,51) + path) + HX_("'",27,00,00,00))));
            		}
HXLINE( 110)		return  ::hxd::fs::BytesFileEntry_obj::__alloc( HX_CTX ,path,bytes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesFileSystem_obj,get,return )

void BytesFileSystem_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_1627b44c90622b31_113_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BytesFileSystem_obj,dispose,(void))

::Array< ::Dynamic> BytesFileSystem_obj::dir(::String path){
            	HX_STACKFRAME(&_hx_pos_1627b44c90622b31_117_dir)
HXDLIN( 117)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN( 117)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesFileSystem_obj,dir,return )


::hx::ObjectPtr< BytesFileSystem_obj > BytesFileSystem_obj::__new() {
	::hx::ObjectPtr< BytesFileSystem_obj > __this = new BytesFileSystem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BytesFileSystem_obj > BytesFileSystem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BytesFileSystem_obj *__this = (BytesFileSystem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BytesFileSystem_obj), false, "hxd.fs.BytesFileSystem"));
	*(void **)__this = BytesFileSystem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BytesFileSystem_obj::BytesFileSystem_obj()
{
}

::hx::Val BytesFileSystem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"dir") ) { return ::hx::Val( dir_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getRoot") ) { return ::hx::Val( getRoot_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BytesFileSystem_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BytesFileSystem_obj_sStaticStorageInfo = 0;
#endif

static ::String BytesFileSystem_obj_sMemberFields[] = {
	HX_("getRoot",d8,9d,31,1e),
	HX_("getBytes",f5,17,6f,1d),
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("dispose",9f,80,4c,bb),
	HX_("dir",4d,3d,4c,00),
	::String(null()) };

::hx::Class BytesFileSystem_obj::__mClass;

void BytesFileSystem_obj::__register()
{
	BytesFileSystem_obj _hx_dummy;
	BytesFileSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.BytesFileSystem",6f,e2,5c,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BytesFileSystem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BytesFileSystem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BytesFileSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BytesFileSystem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fs
