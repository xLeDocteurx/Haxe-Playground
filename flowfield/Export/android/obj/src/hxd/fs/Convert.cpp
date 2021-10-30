#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_File
#include <hxd/File.h>
#endif
#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b464a21f83e4bfaa_21_new,"hxd.fs.Convert","new",0x2731377e,"hxd.fs.Convert.new","hxd/fs/Convert.hx",21,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_b464a21f83e4bfaa_28_convert,"hxd.fs.Convert","convert",0xffec4c11,"hxd.fs.Convert.convert","hxd/fs/Convert.hx",28,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_b464a21f83e4bfaa_31_hasParam,"hxd.fs.Convert","hasParam",0xe28fd6f5,"hxd.fs.Convert.hasParam","hxd/fs/Convert.hx",31,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_b464a21f83e4bfaa_36_getParam,"hxd.fs.Convert","getParam",0xb60e9c39,"hxd.fs.Convert.getParam","hxd/fs/Convert.hx",36,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_b464a21f83e4bfaa_43_save,"hxd.fs.Convert","save",0x272a5e5f,"hxd.fs.Convert.save","hxd/fs/Convert.hx",43,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_b464a21f83e4bfaa_46_command,"hxd.fs.Convert","command",0x668fbf69,"hxd.fs.Convert.command","hxd/fs/Convert.hx",46,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_b464a21f83e4bfaa_59_register,"hxd.fs.Convert","register",0x6981b285,"hxd.fs.Convert.register","hxd/fs/Convert.hx",59,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_b464a21f83e4bfaa_58_boot,"hxd.fs.Convert","boot",0x1bf85754,"hxd.fs.Convert.boot","hxd/fs/Convert.hx",58,0x59888052)
namespace hxd{
namespace fs{

void Convert_obj::__construct( ::Dynamic sourceExts,::String destExt){
            	HX_STACKFRAME(&_hx_pos_b464a21f83e4bfaa_21_new)
HXLINE(  22)		::Array< ::String > _hx_tmp;
HXDLIN(  22)		if (::hx::IsNull( sourceExts )) {
HXLINE(  22)			_hx_tmp = null();
            		}
            		else {
HXLINE(  22)			_hx_tmp = ( (::Array< ::String >)(sourceExts->__Field(HX_("split",da,ea,6e,81),::hx::paccDynamic)(HX_(",",2c,00,00,00))) );
            		}
HXDLIN(  22)		this->sourceExts = _hx_tmp;
HXLINE(  23)		this->destExt = destExt;
HXLINE(  24)		this->version = 0;
            	}

Dynamic Convert_obj::__CreateEmpty() { return new Convert_obj; }

void *Convert_obj::_hx_vtable = 0;

Dynamic Convert_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Convert_obj > _hx_result = new Convert_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Convert_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a5db4d6;
}

void Convert_obj::convert(){
            	HX_STACKFRAME(&_hx_pos_b464a21f83e4bfaa_28_convert)
HXDLIN(  28)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Convert_obj,convert,(void))

bool Convert_obj::hasParam(::String name){
            	HX_STACKFRAME(&_hx_pos_b464a21f83e4bfaa_31_hasParam)
HXLINE(  32)		 ::Dynamic f = ::Reflect_obj::field(this->params,name);
HXLINE(  33)		if (::hx::IsNotNull( f )) {
HXLINE(  33)			return ::hx::IsNotEq( f,false );
            		}
            		else {
HXLINE(  33)			return false;
            		}
HXDLIN(  33)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,hasParam,return )

 ::Dynamic Convert_obj::getParam(::String name){
            	HX_STACKFRAME(&_hx_pos_b464a21f83e4bfaa_36_getParam)
HXLINE(  37)		 ::Dynamic f = ::Reflect_obj::field(this->params,name);
HXLINE(  38)		if (::hx::IsNull( f )) {
HXLINE(  38)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((((HX_("Missing required parameter '",c9,04,38,45) + name) + HX_("' for converting ",e1,32,5f,2a)) + this->srcPath) + HX_(" to ",25,3a,7f,15)) + this->dstPath)));
            		}
HXLINE(  39)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,getParam,return )

void Convert_obj::save( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_b464a21f83e4bfaa_43_save)
HXDLIN(  43)		::hxd::File_obj::saveBytes(this->dstPath,bytes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,save,(void))

void Convert_obj::command(::String cmd,::Array< ::String > args){
            	HX_STACKFRAME(&_hx_pos_b464a21f83e4bfaa_46_command)
HXLINE(  50)		int code = ::Sys_obj::command(cmd,args);
HXLINE(  51)		if ((code != 0)) {
HXLINE(  52)			::String _hx_tmp;
HXDLIN(  52)			if ((args->length == 0)) {
HXLINE(  52)				_hx_tmp = HX_("",00,00,00,00);
            			}
            			else {
HXLINE(  52)				_hx_tmp = (HX_(" ",20,00,00,00) + args->join(HX_(" ",20,00,00,00)));
            			}
HXDLIN(  52)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Command '",f2,95,77,6e) + cmd) + _hx_tmp) + HX_("' failed with exit code ",21,78,cf,64)) + code)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,command,(void))

 ::haxe::ds::StringMap Convert_obj::converts;

int Convert_obj::_hx_register( ::hxd::fs::Convert c){
            	HX_STACKFRAME(&_hx_pos_b464a21f83e4bfaa_59_register)
HXLINE(  60)		::Array< ::Dynamic> dest = ( (::Array< ::Dynamic>)(::hxd::fs::Convert_obj::converts->get(c->destExt)) );
HXLINE(  61)		if (::hx::IsNull( dest )) {
HXLINE(  62)			dest = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  63)			::hxd::fs::Convert_obj::converts->set(c->destExt,dest);
            		}
HXLINE(  65)		dest->unshift(c);
HXLINE(  66)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,_hx_register,return )


::hx::ObjectPtr< Convert_obj > Convert_obj::__new( ::Dynamic sourceExts,::String destExt) {
	::hx::ObjectPtr< Convert_obj > __this = new Convert_obj();
	__this->__construct(sourceExts,destExt);
	return __this;
}

::hx::ObjectPtr< Convert_obj > Convert_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic sourceExts,::String destExt) {
	Convert_obj *__this = (Convert_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Convert_obj), true, "hxd.fs.Convert"));
	*(void **)__this = Convert_obj::_hx_vtable;
	__this->__construct(sourceExts,destExt);
	return __this;
}

Convert_obj::Convert_obj()
{
}

void Convert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Convert);
	HX_MARK_MEMBER_NAME(sourceExts,"sourceExts");
	HX_MARK_MEMBER_NAME(destExt,"destExt");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(srcPath,"srcPath");
	HX_MARK_MEMBER_NAME(dstPath,"dstPath");
	HX_MARK_MEMBER_NAME(originalFilename,"originalFilename");
	HX_MARK_MEMBER_NAME(srcBytes,"srcBytes");
	HX_MARK_END_CLASS();
}

void Convert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sourceExts,"sourceExts");
	HX_VISIT_MEMBER_NAME(destExt,"destExt");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(srcPath,"srcPath");
	HX_VISIT_MEMBER_NAME(dstPath,"dstPath");
	HX_VISIT_MEMBER_NAME(originalFilename,"originalFilename");
	HX_VISIT_MEMBER_NAME(srcBytes,"srcBytes");
}

::hx::Val Convert_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destExt") ) { return ::hx::Val( destExt ); }
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		if (HX_FIELD_EQ(inName,"srcPath") ) { return ::hx::Val( srcPath ); }
		if (HX_FIELD_EQ(inName,"dstPath") ) { return ::hx::Val( dstPath ); }
		if (HX_FIELD_EQ(inName,"convert") ) { return ::hx::Val( convert_dyn() ); }
		if (HX_FIELD_EQ(inName,"command") ) { return ::hx::Val( command_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"srcBytes") ) { return ::hx::Val( srcBytes ); }
		if (HX_FIELD_EQ(inName,"hasParam") ) { return ::hx::Val( hasParam_dyn() ); }
		if (HX_FIELD_EQ(inName,"getParam") ) { return ::hx::Val( getParam_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceExts") ) { return ::hx::Val( sourceExts ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"originalFilename") ) { return ::hx::Val( originalFilename ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Convert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"converts") ) { outValue = ( converts ); return true; }
		if (HX_FIELD_EQ(inName,"register") ) { outValue = _hx_register_dyn(); return true; }
	}
	return false;
}

::hx::Val Convert_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destExt") ) { destExt=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"srcPath") ) { srcPath=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dstPath") ) { dstPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"srcBytes") ) { srcBytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceExts") ) { sourceExts=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"originalFilename") ) { originalFilename=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Convert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"converts") ) { converts=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Convert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sourceExts",2d,e7,81,6b));
	outFields->push(HX_("destExt",5f,0f,64,24));
	outFields->push(HX_("version",18,e7,f1,7c));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("srcPath",a9,fa,a9,78));
	outFields->push(HX_("dstPath",4a,3e,13,39));
	outFields->push(HX_("originalFilename",38,58,ba,21));
	outFields->push(HX_("srcBytes",e7,56,52,1c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Convert_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Convert_obj,sourceExts),HX_("sourceExts",2d,e7,81,6b)},
	{::hx::fsString,(int)offsetof(Convert_obj,destExt),HX_("destExt",5f,0f,64,24)},
	{::hx::fsInt,(int)offsetof(Convert_obj,version),HX_("version",18,e7,f1,7c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Convert_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsString,(int)offsetof(Convert_obj,srcPath),HX_("srcPath",a9,fa,a9,78)},
	{::hx::fsString,(int)offsetof(Convert_obj,dstPath),HX_("dstPath",4a,3e,13,39)},
	{::hx::fsString,(int)offsetof(Convert_obj,originalFilename),HX_("originalFilename",38,58,ba,21)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Convert_obj,srcBytes),HX_("srcBytes",e7,56,52,1c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Convert_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Convert_obj::converts,HX_("converts",20,37,f4,55)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Convert_obj_sMemberFields[] = {
	HX_("sourceExts",2d,e7,81,6b),
	HX_("destExt",5f,0f,64,24),
	HX_("version",18,e7,f1,7c),
	HX_("params",46,fb,7a,ed),
	HX_("srcPath",a9,fa,a9,78),
	HX_("dstPath",4a,3e,13,39),
	HX_("originalFilename",38,58,ba,21),
	HX_("srcBytes",e7,56,52,1c),
	HX_("convert",f3,fd,c9,1a),
	HX_("hasParam",d3,ca,ad,49),
	HX_("getParam",17,90,2c,1d),
	HX_("save",3d,8b,4d,4c),
	HX_("command",4b,71,6d,81),
	::String(null()) };

static void Convert_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Convert_obj::converts,"converts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Convert_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Convert_obj::converts,"converts");
};

#endif

::hx::Class Convert_obj::__mClass;

static ::String Convert_obj_sStaticFields[] = {
	HX_("converts",20,37,f4,55),
	HX_("register",63,a6,9f,d0),
	::String(null())
};

void Convert_obj::__register()
{
	Convert_obj _hx_dummy;
	Convert_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.Convert",8c,60,ac,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Convert_obj::__GetStatic;
	__mClass->mSetStaticField = &Convert_obj::__SetStatic;
	__mClass->mMarkFunc = Convert_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Convert_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Convert_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Convert_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Convert_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Convert_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Convert_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Convert_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_b464a21f83e4bfaa_58_boot)
HXDLIN(  58)		converts =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace hxd
} // end namespace fs
