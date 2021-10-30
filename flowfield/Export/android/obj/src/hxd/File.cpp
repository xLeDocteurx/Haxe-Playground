#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_File
#include <hxd/File.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a3029e495b267bdb_75_browse,"hxd.File","browse",0x1666b902,"hxd.File.browse","hxd/File.hx",75,0x30578ca7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3029e495b267bdb_205_saveAs,"hxd.File","saveAs",0x1d3aa907,"hxd.File.saveAs","hxd/File.hx",205,0x30578ca7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3029e495b267bdb_247_exists,"hxd.File","exists",0xb9e5f954,"hxd.File.exists","hxd/File.hx",247,0x30578ca7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3029e495b267bdb_261_delete,"hxd.File","delete",0x64de9ba3,"hxd.File.delete","hxd/File.hx",261,0x30578ca7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3029e495b267bdb_275_listDirectory,"hxd.File","listDirectory",0x945a3db7,"hxd.File.listDirectory","hxd/File.hx",275,0x30578ca7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3029e495b267bdb_292_getBytes,"hxd.File","getBytes",0x093cc16d,"hxd.File.getBytes","hxd/File.hx",292,0x30578ca7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3029e495b267bdb_320_saveBytes,"hxd.File","saveBytes",0xb46baf76,"hxd.File.saveBytes","hxd/File.hx",320,0x30578ca7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3029e495b267bdb_326_load,"hxd.File","load",0xe125279e,"hxd.File.load","hxd/File.hx",326,0x30578ca7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3029e495b267bdb_327_load,"hxd.File","load",0xe125279e,"hxd.File.load","hxd/File.hx",327,0x30578ca7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3029e495b267bdb_353_createDirectory,"hxd.File","createDirectory",0xa608a159,"hxd.File.createDirectory","hxd/File.hx",353,0x30578ca7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3029e495b267bdb_368_applicationPath,"hxd.File","applicationPath",0xe0789a9d,"hxd.File.applicationPath","hxd/File.hx",368,0x30578ca7)
namespace hxd{

void File_obj::__construct() { }

Dynamic File_obj::__CreateEmpty() { return new File_obj; }

void *File_obj::_hx_vtable = 0;

Dynamic File_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< File_obj > _hx_result = new File_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool File_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47e38cf0;
}

void File_obj::browse( ::Dynamic onSelect, ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_a3029e495b267bdb_75_browse)
HXLINE(  76)		if (::hx::IsNull( options )) {
HXLINE(  76)			options =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE( 172)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not supported",c1,20,c8,45)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,browse,(void))

void File_obj::saveAs( ::haxe::io::Bytes dataContent, ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_a3029e495b267bdb_205_saveAs)
HXLINE( 206)		if (::hx::IsNull( options )) {
HXLINE( 206)			options =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE( 239)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not supported",c1,20,c8,45)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,saveAs,(void))

bool File_obj::exists(::String path){
            	HX_STACKFRAME(&_hx_pos_a3029e495b267bdb_247_exists)
HXDLIN( 247)		return ::sys::FileSystem_obj::exists(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,exists,return )

void File_obj::_hx_delete(::String path){
            	HX_STACKFRAME(&_hx_pos_a3029e495b267bdb_261_delete)
HXDLIN( 261)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXDLIN( 261)			::sys::FileSystem_obj::deleteFile(path);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXDLIN( 261)				{
HXDLIN( 261)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,_hx_delete,(void))

::Array< ::String > File_obj::listDirectory(::String path){
            	HX_STACKFRAME(&_hx_pos_a3029e495b267bdb_275_listDirectory)
HXDLIN( 275)		return ::sys::FileSystem_obj::readDirectory(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,listDirectory,return )

 ::haxe::io::Bytes File_obj::getBytes(::String path){
            	HX_STACKFRAME(&_hx_pos_a3029e495b267bdb_292_getBytes)
HXDLIN( 292)		return ::sys::io::File_obj::getBytes(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,getBytes,return )

void File_obj::saveBytes(::String path, ::haxe::io::Bytes data){
            	HX_STACKFRAME(&_hx_pos_a3029e495b267bdb_320_saveBytes)
HXDLIN( 320)		::sys::io::File_obj::saveBytes(path,data);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,saveBytes,(void))

void File_obj::load(::String path, ::Dynamic onLoad, ::Dynamic onError){
            	HX_STACKFRAME(&_hx_pos_a3029e495b267bdb_326_load)
HXLINE( 327)		if (::hx::IsNull( onError )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run(::String _){
            				HX_STACKFRAME(&_hx_pos_a3029e495b267bdb_327_load)
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 327)			onError =  ::Dynamic(new _hx_Closure_0());
            		}
HXLINE( 342)		 ::haxe::io::Bytes content;
HXDLIN( 342)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 342)			content = ::sys::io::File_obj::getBytes(path);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 342)				{
HXLINE( 342)					null();
            				}
HXDLIN( 342)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 342)				if (::hx::IsNotNull( onError )) {
HXLINE( 342)					onError((HX_("",00,00,00,00) + ::Std_obj::string(e)));
            				}
HXDLIN( 342)				return;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 343)		onLoad(content);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(File_obj,load,(void))

void File_obj::createDirectory(::String path){
            	HX_STACKFRAME(&_hx_pos_a3029e495b267bdb_353_createDirectory)
HXDLIN( 353)		::sys::FileSystem_obj::createDirectory(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,createDirectory,(void))

::String File_obj::applicationPath(){
            	HX_STACKFRAME(&_hx_pos_a3029e495b267bdb_368_applicationPath)
HXDLIN( 368)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not supported",c1,20,c8,45)));
HXDLIN( 368)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,applicationPath,return )


File_obj::File_obj()
{
}

bool File_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"browse") ) { outValue = browse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"saveAs") ) { outValue = saveAs_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"delete") ) { outValue = _hx_delete_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"saveBytes") ) { outValue = saveBytes_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listDirectory") ) { outValue = listDirectory_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createDirectory") ) { outValue = createDirectory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"applicationPath") ) { outValue = applicationPath_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *File_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *File_obj_sStaticStorageInfo = 0;
#endif

::hx::Class File_obj::__mClass;

static ::String File_obj_sStaticFields[] = {
	HX_("browse",8a,dd,60,1c),
	HX_("saveAs",8f,cd,34,23),
	HX_("exists",dc,1d,e0,bf),
	HX_("delete",2b,c0,d8,6a),
	HX_("listDirectory",2f,3a,79,1c),
	HX_("getBytes",f5,17,6f,1d),
	HX_("saveBytes",ee,0f,45,4c),
	HX_("load",26,9a,b7,47),
	HX_("createDirectory",d1,ab,39,b1),
	HX_("applicationPath",15,a5,a9,eb),
	::String(null())
};

void File_obj::__register()
{
	File_obj _hx_dummy;
	File_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.File",f6,c5,41,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &File_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(File_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< File_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = File_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = File_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
