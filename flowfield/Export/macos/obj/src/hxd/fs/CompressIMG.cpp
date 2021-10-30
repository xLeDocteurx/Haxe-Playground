#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_hxd_fs_CompressIMG
#include <hxd/fs/CompressIMG.h>
#endif
#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2c8c1875b88cc4b5_221_new,"hxd.fs.CompressIMG","new",0x19586a8c,"hxd.fs.CompressIMG.new","hxd/fs/Convert.hx",221,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_2c8c1875b88cc4b5_234_convert,"hxd.fs.CompressIMG","convert",0x10c51e1f,"hxd.fs.CompressIMG.convert","hxd/fs/Convert.hx",234,0x59888052)
static const ::String _hx_array_data_811d749a_2[] = {
	HX_("-m",a0,27,00,00),HX_("1",31,00,00,00),
};
static const ::String _hx_array_data_811d749a_3[] = {
	HX_("-silent",82,56,13,07),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2c8c1875b88cc4b5_223_boot,"hxd.fs.CompressIMG","boot",0x0c1dd086,"hxd.fs.CompressIMG.boot","hxd/fs/Convert.hx",223,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_2c8c1875b88cc4b5_269_boot,"hxd.fs.CompressIMG","boot",0x0c1dd086,"hxd.fs.CompressIMG.boot","hxd/fs/Convert.hx",269,0x59888052)
namespace hxd{
namespace fs{

void CompressIMG_obj::__construct( ::Dynamic sourceExts,::String destExt){
            	HX_STACKFRAME(&_hx_pos_2c8c1875b88cc4b5_221_new)
HXDLIN( 221)		super::__construct(sourceExts,destExt);
            	}

Dynamic CompressIMG_obj::__CreateEmpty() { return new CompressIMG_obj; }

void *CompressIMG_obj::_hx_vtable = 0;

Dynamic CompressIMG_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompressIMG_obj > _hx_result = new CompressIMG_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CompressIMG_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x022c73b8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x022c73b8;
	} else {
		return inClassId==(int)0x7a5db4d6;
	}
}

void CompressIMG_obj::convert(){
            	HX_GC_STACKFRAME(&_hx_pos_2c8c1875b88cc4b5_234_convert)
HXLINE( 235)		::String format = ( (::String)(this->getParam(HX_("format",37,8f,8e,fd))) );
HXLINE( 236)		bool mips;
HXDLIN( 236)		if (this->hasParam(HX_("mips",5f,50,5c,48))) {
HXLINE( 236)			mips = ::hx::IsEq( this->getParam(HX_("mips",5f,50,5c,48)),true );
            		}
            		else {
HXLINE( 236)			mips = false;
            		}
HXLINE( 237)		::String tcFmt = ::hxd::fs::CompressIMG_obj::TEXCONV_FMT->get_string(format);
HXLINE( 238)		if (::hx::IsNotNull( tcFmt )) {
HXLINE( 240)			 ::haxe::io::Path tmpPath =  ::haxe::io::Path_obj::__alloc( HX_CTX ,this->dstPath);
HXLINE( 241)			tmpPath->ext = (HX_("tmp.",77,d7,ff,4c) +  ::haxe::io::Path_obj::__alloc( HX_CTX ,this->srcPath)->ext);
HXLINE( 242)			::String tmpFile = tmpPath->toString();
HXLINE( 244)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 244)				::sys::FileSystem_obj::deleteFile(tmpFile);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 244)					{
HXLINE( 244)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 245)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 245)				::sys::FileSystem_obj::deleteFile(this->dstPath);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 245)					{
HXLINE( 245)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 246)			::sys::io::File_obj::copy(this->srcPath,tmpFile);
HXLINE( 247)			::Array< ::String > args = ::Array_obj< ::String >::__new(5)->init(0,HX_("-f",99,27,00,00))->init(1,tcFmt)->init(2,HX_("-y",ac,27,00,00))->init(3,HX_("-nologo",19,94,b9,7b))->init(4,tmpFile);
HXLINE( 248)			if (!(mips)) {
HXLINE( 248)				args = ::Array_obj< ::String >::fromData( _hx_array_data_811d749a_2,2)->concat(args);
            			}
HXLINE( 249)			this->command(HX_("texconv",5b,97,9f,93),args);
HXLINE( 250)			::sys::FileSystem_obj::deleteFile(tmpFile);
HXLINE( 251)			tmpPath->ext = HX_("tmp.DDS",bc,c1,1c,08);
HXLINE( 252)			::String _hx_tmp = tmpPath->toString();
HXDLIN( 252)			::sys::FileSystem_obj::rename(_hx_tmp,this->dstPath);
HXLINE( 256)			return;
            		}
HXLINE( 258)		::Array< ::String > args = ::Array_obj< ::String >::fromData( _hx_array_data_811d749a_3,1);
HXLINE( 259)		if (mips) {
HXLINE( 260)			args->push(HX_("-miplevels",36,49,45,e9));
HXLINE( 261)			args->push(HX_("20",be,2b,00,00));
            		}
HXLINE( 263)		bool _hx_tmp;
HXDLIN( 263)		if (this->hasParam(HX_("alpha",5e,a7,96,21))) {
HXLINE( 263)			_hx_tmp = (format == HX_("BC1",50,4f,32,00));
            		}
            		else {
HXLINE( 263)			_hx_tmp = false;
            		}
HXDLIN( 263)		if (_hx_tmp) {
HXLINE( 264)			args = args->concat(::Array_obj< ::String >::__new(4)->init(0,HX_("-DXT1UseAlpha",55,40,7c,41))->init(1,HX_("1",31,00,00,00))->init(2,HX_("-AlphaThreshold",7a,c9,3b,dc))->init(3,(HX_("",00,00,00,00) + ::Std_obj::string(this->getParam(HX_("alpha",5e,a7,96,21))))));
            		}
HXLINE( 265)		::String args1 = (HX_("",00,00,00,00) + ::Std_obj::string(this->getParam(HX_("format",37,8f,8e,fd))));
HXDLIN( 265)		args = args->concat(::Array_obj< ::String >::__new(4)->init(0,HX_("-fd",ab,7e,22,00))->init(1,args1)->init(2,this->srcPath)->init(3,this->dstPath));
HXLINE( 266)		this->command(HX_("CompressonatorCLI",29,af,ae,e6),args);
            	}


 ::haxe::ds::StringMap CompressIMG_obj::TEXCONV_FMT;

int CompressIMG_obj::_;


::hx::ObjectPtr< CompressIMG_obj > CompressIMG_obj::__new( ::Dynamic sourceExts,::String destExt) {
	::hx::ObjectPtr< CompressIMG_obj > __this = new CompressIMG_obj();
	__this->__construct(sourceExts,destExt);
	return __this;
}

::hx::ObjectPtr< CompressIMG_obj > CompressIMG_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic sourceExts,::String destExt) {
	CompressIMG_obj *__this = (CompressIMG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompressIMG_obj), true, "hxd.fs.CompressIMG"));
	*(void **)__this = CompressIMG_obj::_hx_vtable;
	__this->__construct(sourceExts,destExt);
	return __this;
}

CompressIMG_obj::CompressIMG_obj()
{
}

::hx::Val CompressIMG_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"convert") ) { return ::hx::Val( convert_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CompressIMG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { outValue = ( _ ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TEXCONV_FMT") ) { outValue = ( TEXCONV_FMT ); return true; }
	}
	return false;
}

bool CompressIMG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { _=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TEXCONV_FMT") ) { TEXCONV_FMT=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CompressIMG_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CompressIMG_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &CompressIMG_obj::TEXCONV_FMT,HX_("TEXCONV_FMT",e9,ca,a9,60)},
	{::hx::fsInt,(void *) &CompressIMG_obj::_,HX_("_",5f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CompressIMG_obj_sMemberFields[] = {
	HX_("convert",f3,fd,c9,1a),
	::String(null()) };

static void CompressIMG_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompressIMG_obj::TEXCONV_FMT,"TEXCONV_FMT");
	HX_MARK_MEMBER_NAME(CompressIMG_obj::_,"_");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CompressIMG_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompressIMG_obj::TEXCONV_FMT,"TEXCONV_FMT");
	HX_VISIT_MEMBER_NAME(CompressIMG_obj::_,"_");
};

#endif

::hx::Class CompressIMG_obj::__mClass;

static ::String CompressIMG_obj_sStaticFields[] = {
	HX_("TEXCONV_FMT",e9,ca,a9,60),
	HX_("_",5f,00,00,00),
	::String(null())
};

void CompressIMG_obj::__register()
{
	CompressIMG_obj _hx_dummy;
	CompressIMG_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.CompressIMG",9a,74,1d,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CompressIMG_obj::__GetStatic;
	__mClass->mSetStaticField = &CompressIMG_obj::__SetStatic;
	__mClass->mMarkFunc = CompressIMG_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CompressIMG_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompressIMG_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompressIMG_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CompressIMG_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompressIMG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompressIMG_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CompressIMG_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_2c8c1875b88cc4b5_223_boot)
HXDLIN( 223)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 223)			_g->set(HX_("R16F",af,dc,58,36),HX_("R16_FLOAT",b4,cb,ee,c5));
HXDLIN( 223)			_g->set(HX_("R32F",b5,5d,5a,36),HX_("R32_FLOAT",ee,d4,fd,91));
HXDLIN( 223)			_g->set(HX_("RG16F",2c,15,ef,65),HX_("R16G16_FLOAT",12,36,28,ff));
HXDLIN( 223)			_g->set(HX_("RG32F",32,96,f0,65),HX_("R32G32_FLOAT",52,36,ca,cb));
HXDLIN( 223)			_g->set(HX_("RGB16F",f4,38,7c,d6),HX_("R16G16B16_FLOAT",6f,0d,98,bf));
HXDLIN( 223)			_g->set(HX_("RGB32F",fa,b9,7d,d6),HX_("R32G32B32_FLOAT",69,be,92,fa));
HXDLIN( 223)			_g->set(HX_("RGBA16F",8d,2d,c5,e0),HX_("R16G16B16A16_FLOAT",31,05,f0,35));
HXDLIN( 223)			_g->set(HX_("RGBA32F",93,ae,c6,e0),HX_("R32G32B32A32_FLOAT",b1,b5,11,5a));
HXDLIN( 223)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_2c8c1875b88cc4b5_223_boot)
HXDLIN( 223)		TEXCONV_FMT = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2c8c1875b88cc4b5_269_boot)
HXDLIN( 269)		_ = ::hxd::fs::Convert_obj::_hx_register( ::hxd::fs::CompressIMG_obj::__alloc( HX_CTX ,HX_("png,tga,jpg,jpeg",14,e3,03,e7),HX_("dds",f3,38,4c,00)));
            	}
}

} // end namespace hxd
} // end namespace fs
