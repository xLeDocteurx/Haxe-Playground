#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Data
#include <hxd/fmt/hmd/Data.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Library
#include <hxd/fmt/hmd/Library.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Reader
#include <hxd/fmt/hmd/Reader.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_FileInput
#include <hxd/fs/FileInput.h>
#endif
#ifndef INCLUDED_hxd_res_Model
#include <hxd/res/Model.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e6edf0f4b4b1a41d_3_new,"hxd.res.Model","new",0x5e8601d3,"hxd.res.Model.new","hxd/res/Model.hx",3,0x7cfe3f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_e6edf0f4b4b1a41d_5_toHmd,"hxd.res.Model","toHmd",0x0848af37,"hxd.res.Model.toHmd","hxd/res/Model.hx",5,0x7cfe3f7f)
namespace hxd{
namespace res{

void Model_obj::__construct( ::hxd::fs::FileEntry entry){
            	HX_STACKFRAME(&_hx_pos_e6edf0f4b4b1a41d_3_new)
HXDLIN(   3)		super::__construct(entry);
            	}

Dynamic Model_obj::__CreateEmpty() { return new Model_obj; }

void *Model_obj::_hx_vtable = 0;

Dynamic Model_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Model_obj > _hx_result = new Model_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Model_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09c9e03a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09c9e03a;
	} else {
		return inClassId==(int)0x10cc22f5;
	}
}

 ::hxd::fmt::hmd::Library Model_obj::toHmd(){
            	HX_GC_STACKFRAME(&_hx_pos_e6edf0f4b4b1a41d_5_toHmd)
HXLINE(   6)		 ::hxd::fs::FileInput fs =  ::hxd::fs::FileInput_obj::__alloc( HX_CTX ,this->entry);
HXLINE(   7)		 ::hxd::fmt::hmd::Data hmd =  ::hxd::fmt::hmd::Reader_obj::__alloc( HX_CTX ,fs)->readHeader();
HXLINE(   8)		fs->close();
HXLINE(   9)		return  ::hxd::fmt::hmd::Library_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),hmd);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,toHmd,return )


::hx::ObjectPtr< Model_obj > Model_obj::__new( ::hxd::fs::FileEntry entry) {
	::hx::ObjectPtr< Model_obj > __this = new Model_obj();
	__this->__construct(entry);
	return __this;
}

::hx::ObjectPtr< Model_obj > Model_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry entry) {
	Model_obj *__this = (Model_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Model_obj), true, "hxd.res.Model"));
	*(void **)__this = Model_obj::_hx_vtable;
	__this->__construct(entry);
	return __this;
}

Model_obj::Model_obj()
{
}

::hx::Val Model_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toHmd") ) { return ::hx::Val( toHmd_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Model_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Model_obj_sStaticStorageInfo = 0;
#endif

static ::String Model_obj_sMemberFields[] = {
	HX_("toHmd",04,fb,10,14),
	::String(null()) };

::hx::Class Model_obj::__mClass;

void Model_obj::__register()
{
	Model_obj _hx_dummy;
	Model_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res.Model",61,1c,ae,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Model_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Model_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Model_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Model_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace res
