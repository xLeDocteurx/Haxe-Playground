#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_fs_BytesFileSystem
#include <hxd/fs/BytesFileSystem.h>
#endif
#ifndef INCLUDED_hxd_fs_FileSystem
#include <hxd/fs/FileSystem.h>
#endif
#ifndef INCLUDED_hxd_res__Any_SingleFileSystem
#include <hxd/res/_Any/SingleFileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0d1655e918e7aa60_8_new,"hxd.res._Any.SingleFileSystem","new",0x6b908cde,"hxd.res._Any.SingleFileSystem.new","hxd/res/Any.hx",8,0xf2276d9c)
HX_LOCAL_STACK_FRAME(_hx_pos_0d1655e918e7aa60_15_getBytes,"hxd.res._Any.SingleFileSystem","getBytes",0xf18052b7,"hxd.res._Any.SingleFileSystem.getBytes","hxd/res/Any.hx",15,0xf2276d9c)
namespace hxd{
namespace res{
namespace _Any{

void SingleFileSystem_obj::__construct(::String path, ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_0d1655e918e7aa60_8_new)
HXLINE(   9)		super::__construct();
HXLINE(  10)		this->path = path;
HXLINE(  11)		this->bytes = bytes;
            	}

Dynamic SingleFileSystem_obj::__CreateEmpty() { return new SingleFileSystem_obj; }

void *SingleFileSystem_obj::_hx_vtable = 0;

Dynamic SingleFileSystem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SingleFileSystem_obj > _hx_result = new SingleFileSystem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SingleFileSystem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x174fa6d0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x174fa6d0;
	} else {
		return inClassId==(int)0x1a813835;
	}
}

 ::haxe::io::Bytes SingleFileSystem_obj::getBytes(::String p){
            	HX_STACKFRAME(&_hx_pos_0d1655e918e7aa60_15_getBytes)
HXDLIN(  15)		if ((p == this->path)) {
HXDLIN(  15)			return this->bytes;
            		}
            		else {
HXDLIN(  15)			return null();
            		}
HXDLIN(  15)		return null();
            	}



::hx::ObjectPtr< SingleFileSystem_obj > SingleFileSystem_obj::__new(::String path, ::haxe::io::Bytes bytes) {
	::hx::ObjectPtr< SingleFileSystem_obj > __this = new SingleFileSystem_obj();
	__this->__construct(path,bytes);
	return __this;
}

::hx::ObjectPtr< SingleFileSystem_obj > SingleFileSystem_obj::__alloc(::hx::Ctx *_hx_ctx,::String path, ::haxe::io::Bytes bytes) {
	SingleFileSystem_obj *__this = (SingleFileSystem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SingleFileSystem_obj), true, "hxd.res._Any.SingleFileSystem"));
	*(void **)__this = SingleFileSystem_obj::_hx_vtable;
	__this->__construct(path,bytes);
	return __this;
}

SingleFileSystem_obj::SingleFileSystem_obj()
{
}

void SingleFileSystem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SingleFileSystem);
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_END_CLASS();
}

void SingleFileSystem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
}

::hx::Val SingleFileSystem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return ::hx::Val( bytes ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SingleFileSystem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SingleFileSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("bytes",6b,08,98,bd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SingleFileSystem_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SingleFileSystem_obj,path),HX_("path",a5,e5,51,4a)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(SingleFileSystem_obj,bytes),HX_("bytes",6b,08,98,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SingleFileSystem_obj_sStaticStorageInfo = 0;
#endif

static ::String SingleFileSystem_obj_sMemberFields[] = {
	HX_("path",a5,e5,51,4a),
	HX_("bytes",6b,08,98,bd),
	HX_("getBytes",f5,17,6f,1d),
	::String(null()) };

::hx::Class SingleFileSystem_obj::__mClass;

void SingleFileSystem_obj::__register()
{
	SingleFileSystem_obj _hx_dummy;
	SingleFileSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res._Any.SingleFileSystem",ec,85,9d,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SingleFileSystem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SingleFileSystem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SingleFileSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SingleFileSystem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace res
} // end namespace _Any
