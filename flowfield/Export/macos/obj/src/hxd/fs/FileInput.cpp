#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_FileInput
#include <hxd/fs/FileInput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd5c92ec0d4c6a33_7_new,"hxd.fs.FileInput","new",0xd5786f39,"hxd.fs.FileInput.new","hxd/fs/FileInput.hx",7,0xd233c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_cd5c92ec0d4c6a33_13_skip,"hxd.fs.FileInput","skip",0xf73b7586,"hxd.fs.FileInput.skip","hxd/fs/FileInput.hx",13,0xd233c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_cd5c92ec0d4c6a33_17_readByte,"hxd.fs.FileInput","readByte",0x97eae805,"hxd.fs.FileInput.readByte","hxd/fs/FileInput.hx",17,0xd233c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_cd5c92ec0d4c6a33_20_readBytes,"hxd.fs.FileInput","readBytes",0x55a01cce,"hxd.fs.FileInput.readBytes","hxd/fs/FileInput.hx",20,0xd233c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_cd5c92ec0d4c6a33_26_close,"hxd.fs.FileInput","close",0x270fded1,"hxd.fs.FileInput.close","hxd/fs/FileInput.hx",26,0xd233c0f7)
namespace hxd{
namespace fs{

void FileInput_obj::__construct( ::hxd::fs::FileEntry f){
            	HX_STACKFRAME(&_hx_pos_cd5c92ec0d4c6a33_7_new)
HXLINE(   8)		this->f = f;
HXLINE(   9)		f->open();
            	}

Dynamic FileInput_obj::__CreateEmpty() { return new FileInput_obj; }

void *FileInput_obj::_hx_vtable = 0;

Dynamic FileInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileInput_obj > _hx_result = new FileInput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FileInput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19e22056) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19e22056;
	} else {
		return inClassId==(int)0x56ca7c0d;
	}
}

void FileInput_obj::skip(int nbytes){
            	HX_STACKFRAME(&_hx_pos_cd5c92ec0d4c6a33_13_skip)
HXDLIN(  13)		this->f->skip(nbytes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileInput_obj,skip,(void))

int FileInput_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_cd5c92ec0d4c6a33_17_readByte)
HXDLIN(  17)		return this->f->readByte();
            	}


int FileInput_obj::readBytes( ::haxe::io::Bytes b,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_cd5c92ec0d4c6a33_20_readBytes)
HXLINE(  21)		this->f->read(b,pos,len);
HXLINE(  22)		return len;
            	}


void FileInput_obj::close(){
            	HX_STACKFRAME(&_hx_pos_cd5c92ec0d4c6a33_26_close)
HXDLIN(  26)		this->f->close();
            	}



::hx::ObjectPtr< FileInput_obj > FileInput_obj::__new( ::hxd::fs::FileEntry f) {
	::hx::ObjectPtr< FileInput_obj > __this = new FileInput_obj();
	__this->__construct(f);
	return __this;
}

::hx::ObjectPtr< FileInput_obj > FileInput_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry f) {
	FileInput_obj *__this = (FileInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileInput_obj), true, "hxd.fs.FileInput"));
	*(void **)__this = FileInput_obj::_hx_vtable;
	__this->__construct(f);
	return __this;
}

FileInput_obj::FileInput_obj()
{
}

void FileInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileInput);
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_END_CLASS();
}

void FileInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
}

::hx::Val FileInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return ::hx::Val( f ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"skip") ) { return ::hx::Val( skip_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FileInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast<  ::hxd::fs::FileEntry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("f",66,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FileInput_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::fs::FileEntry */ ,(int)offsetof(FileInput_obj,f),HX_("f",66,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FileInput_obj_sStaticStorageInfo = 0;
#endif

static ::String FileInput_obj_sMemberFields[] = {
	HX_("f",66,00,00,00),
	HX_("skip",7f,16,55,4c),
	HX_("readByte",7e,f9,1a,69),
	HX_("readBytes",35,55,7f,8e),
	HX_("close",b8,17,63,48),
	::String(null()) };

::hx::Class FileInput_obj::__mClass;

void FileInput_obj::__register()
{
	FileInput_obj _hx_dummy;
	FileInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.FileInput",c7,5e,78,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fs
