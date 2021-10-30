#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_format_wav_Reader
#include <format/wav/Reader.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
#ifndef INCLUDED_hxd_fs_ConvertWAV2OGG
#include <hxd/fs/ConvertWAV2OGG.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e9f1f55948da0dac_128_new,"hxd.fs.ConvertWAV2OGG","new",0xd6b71aaf,"hxd.fs.ConvertWAV2OGG.new","hxd/fs/Convert.hx",128,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_e9f1f55948da0dac_131_convert,"hxd.fs.ConvertWAV2OGG","convert",0x82421bc2,"hxd.fs.ConvertWAV2OGG.convert","hxd/fs/Convert.hx",131,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_e9f1f55948da0dac_147_boot,"hxd.fs.ConvertWAV2OGG","boot",0x01993f03,"hxd.fs.ConvertWAV2OGG.boot","hxd/fs/Convert.hx",147,0x59888052)
namespace hxd{
namespace fs{

void ConvertWAV2OGG_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e9f1f55948da0dac_128_new)
HXDLIN( 128)		super::__construct(HX_("wav",2c,a1,5a,00),HX_("ogg",4f,94,54,00));
            	}

Dynamic ConvertWAV2OGG_obj::__CreateEmpty() { return new ConvertWAV2OGG_obj; }

void *ConvertWAV2OGG_obj::_hx_vtable = 0;

Dynamic ConvertWAV2OGG_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConvertWAV2OGG_obj > _hx_result = new ConvertWAV2OGG_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConvertWAV2OGG_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x47d29c37) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x47d29c37;
	} else {
		return inClassId==(int)0x7a5db4d6;
	}
}

void ConvertWAV2OGG_obj::convert(){
            	HX_GC_STACKFRAME(&_hx_pos_e9f1f55948da0dac_131_convert)
HXLINE( 132)		::String cmd = HX_("oggenc",eb,ca,44,f4);
HXLINE( 133)		::Array< ::String > args = ::Array_obj< ::String >::__new(6)->init(0,HX_("--resample",7d,93,3f,df))->init(1,HX_("44100",f1,9a,5a,13))->init(2,HX_("-Q",84,27,00,00))->init(3,this->srcPath)->init(4,HX_("-o",a2,27,00,00))->init(5,this->dstPath);
HXLINE( 135)		if ((::Sys_obj::systemName() == HX_("Windows",63,06,c6,b5))) {
HXLINE( 135)			cmd = HX_("oggenc2",e7,c2,ec,c7);
            		}
HXLINE( 136)		if (this->hasParam(HX_("mono",23,dc,60,48))) {
HXLINE( 137)			 ::sys::io::FileInput f = ::sys::io::File_obj::read(this->srcPath,null());
HXLINE( 138)			 ::Dynamic wav =  ::format::wav::Reader_obj::__alloc( HX_CTX ,f)->read();
HXLINE( 139)			f->close();
HXLINE( 140)			if (::hx::IsGreaterEq(  ::Dynamic(wav->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("channels",50,aa,ee,6a),::hx::paccDynamic),2 )) {
HXLINE( 141)				args->push(HX_("--downmix",1a,87,04,90));
            			}
            		}
HXLINE( 144)		this->command(cmd,args);
            	}


int ConvertWAV2OGG_obj::_;


::hx::ObjectPtr< ConvertWAV2OGG_obj > ConvertWAV2OGG_obj::__new() {
	::hx::ObjectPtr< ConvertWAV2OGG_obj > __this = new ConvertWAV2OGG_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ConvertWAV2OGG_obj > ConvertWAV2OGG_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ConvertWAV2OGG_obj *__this = (ConvertWAV2OGG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConvertWAV2OGG_obj), true, "hxd.fs.ConvertWAV2OGG"));
	*(void **)__this = ConvertWAV2OGG_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConvertWAV2OGG_obj::ConvertWAV2OGG_obj()
{
}

::hx::Val ConvertWAV2OGG_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"convert") ) { return ::hx::Val( convert_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ConvertWAV2OGG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { outValue = ( _ ); return true; }
	}
	return false;
}

bool ConvertWAV2OGG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { _=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ConvertWAV2OGG_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ConvertWAV2OGG_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ConvertWAV2OGG_obj::_,HX_("_",5f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ConvertWAV2OGG_obj_sMemberFields[] = {
	HX_("convert",f3,fd,c9,1a),
	::String(null()) };

static void ConvertWAV2OGG_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvertWAV2OGG_obj::_,"_");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConvertWAV2OGG_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvertWAV2OGG_obj::_,"_");
};

#endif

::hx::Class ConvertWAV2OGG_obj::__mClass;

static ::String ConvertWAV2OGG_obj_sStaticFields[] = {
	HX_("_",5f,00,00,00),
	::String(null())
};

void ConvertWAV2OGG_obj::__register()
{
	ConvertWAV2OGG_obj _hx_dummy;
	ConvertWAV2OGG_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.ConvertWAV2OGG",3d,97,f2,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConvertWAV2OGG_obj::__GetStatic;
	__mClass->mSetStaticField = &ConvertWAV2OGG_obj::__SetStatic;
	__mClass->mMarkFunc = ConvertWAV2OGG_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConvertWAV2OGG_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConvertWAV2OGG_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConvertWAV2OGG_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConvertWAV2OGG_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConvertWAV2OGG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConvertWAV2OGG_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ConvertWAV2OGG_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_e9f1f55948da0dac_147_boot)
HXDLIN( 147)		_ = ::hxd::fs::Convert_obj::_hx_register( ::hxd::fs::ConvertWAV2OGG_obj::__alloc( HX_CTX ));
            	}
}

} // end namespace hxd
} // end namespace fs
