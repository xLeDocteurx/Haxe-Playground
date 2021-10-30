#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_BaseLibrary
#include <hxd/fmt/fbx/BaseLibrary.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_HMDOut
#include <hxd/fmt/fbx/HMDOut.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_Parser
#include <hxd/fmt/fbx/Parser.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Data
#include <hxd/fmt/hmd/Data.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Writer
#include <hxd/fmt/hmd/Writer.h>
#endif
#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
#ifndef INCLUDED_hxd_fs_ConvertFBX2HMD
#include <hxd/fs/ConvertFBX2HMD.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b293dcc3f7390ca3_75_new,"hxd.fs.ConvertFBX2HMD","new",0x36f972af,"hxd.fs.ConvertFBX2HMD.new","hxd/fs/Convert.hx",75,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_b293dcc3f7390ca3_78_convert,"hxd.fs.ConvertFBX2HMD","convert",0x6e9073c2,"hxd.fs.ConvertFBX2HMD.convert","hxd/fs/Convert.hx",78,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_b293dcc3f7390ca3_89_boot,"hxd.fs.ConvertFBX2HMD","boot",0xdb63e703,"hxd.fs.ConvertFBX2HMD.boot","hxd/fs/Convert.hx",89,0x59888052)
namespace hxd{
namespace fs{

void ConvertFBX2HMD_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b293dcc3f7390ca3_75_new)
HXDLIN(  75)		super::__construct(HX_("fbx",bc,bb,4d,00),HX_("hmd",bf,49,4f,00));
            	}

Dynamic ConvertFBX2HMD_obj::__CreateEmpty() { return new ConvertFBX2HMD_obj; }

void *ConvertFBX2HMD_obj::_hx_vtable = 0;

Dynamic ConvertFBX2HMD_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConvertFBX2HMD_obj > _hx_result = new ConvertFBX2HMD_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConvertFBX2HMD_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1208f437) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1208f437;
	} else {
		return inClassId==(int)0x7a5db4d6;
	}
}

void ConvertFBX2HMD_obj::convert(){
            	HX_GC_STACKFRAME(&_hx_pos_b293dcc3f7390ca3_78_convert)
HXLINE(  79)		 ::Dynamic fbx;
HXDLIN(  79)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  79)			fbx = ::hxd::fmt::fbx::Parser_obj::parse(this->srcBytes);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  79)				{
HXLINE(  79)					null();
            				}
HXDLIN(  79)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN(  79)				::String fbx = (::Std_obj::string(e) + HX_(" in ",7b,e0,76,15));
HXDLIN(  79)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((fbx + this->srcPath)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  80)		 ::hxd::fmt::fbx::HMDOut hmdout =  ::hxd::fmt::fbx::HMDOut_obj::__alloc( HX_CTX ,this->srcPath);
HXLINE(  81)		hmdout->load(fbx);
HXLINE(  82)		bool isAnim;
HXDLIN(  82)		if (!(::StringTools_obj::startsWith(this->originalFilename,HX_("Anim_",0e,39,11,b6)))) {
HXLINE(  82)			isAnim = (this->originalFilename.toLowerCase().indexOf(HX_("_anim_",6f,10,cb,1e),null()) > 0);
            		}
            		else {
HXLINE(  82)			isAnim = true;
            		}
HXLINE(  83)		 ::hxd::fmt::hmd::Data hmd = hmdout->toHMD(null(),!(isAnim));
HXLINE(  84)		 ::haxe::io::BytesOutput out =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE(  85)		 ::hxd::fmt::hmd::Writer_obj::__alloc( HX_CTX ,out)->write(hmd);
HXLINE(  86)		this->save(out->getBytes());
            	}


int ConvertFBX2HMD_obj::_;


::hx::ObjectPtr< ConvertFBX2HMD_obj > ConvertFBX2HMD_obj::__new() {
	::hx::ObjectPtr< ConvertFBX2HMD_obj > __this = new ConvertFBX2HMD_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ConvertFBX2HMD_obj > ConvertFBX2HMD_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ConvertFBX2HMD_obj *__this = (ConvertFBX2HMD_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConvertFBX2HMD_obj), true, "hxd.fs.ConvertFBX2HMD"));
	*(void **)__this = ConvertFBX2HMD_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConvertFBX2HMD_obj::ConvertFBX2HMD_obj()
{
}

::hx::Val ConvertFBX2HMD_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"convert") ) { return ::hx::Val( convert_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ConvertFBX2HMD_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { outValue = ( _ ); return true; }
	}
	return false;
}

bool ConvertFBX2HMD_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { _=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ConvertFBX2HMD_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ConvertFBX2HMD_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ConvertFBX2HMD_obj::_,HX_("_",5f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ConvertFBX2HMD_obj_sMemberFields[] = {
	HX_("convert",f3,fd,c9,1a),
	::String(null()) };

static void ConvertFBX2HMD_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvertFBX2HMD_obj::_,"_");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConvertFBX2HMD_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvertFBX2HMD_obj::_,"_");
};

#endif

::hx::Class ConvertFBX2HMD_obj::__mClass;

static ::String ConvertFBX2HMD_obj_sStaticFields[] = {
	HX_("_",5f,00,00,00),
	::String(null())
};

void ConvertFBX2HMD_obj::__register()
{
	ConvertFBX2HMD_obj _hx_dummy;
	ConvertFBX2HMD_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.ConvertFBX2HMD",3d,ef,28,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConvertFBX2HMD_obj::__GetStatic;
	__mClass->mSetStaticField = &ConvertFBX2HMD_obj::__SetStatic;
	__mClass->mMarkFunc = ConvertFBX2HMD_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConvertFBX2HMD_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConvertFBX2HMD_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConvertFBX2HMD_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConvertFBX2HMD_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConvertFBX2HMD_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConvertFBX2HMD_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ConvertFBX2HMD_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_b293dcc3f7390ca3_89_boot)
HXDLIN(  89)		_ = ::hxd::fs::Convert_obj::_hx_register( ::hxd::fs::ConvertFBX2HMD_obj::__alloc( HX_CTX ));
            	}
}

} // end namespace hxd
} // end namespace fs
