#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_crypto_Sha1
#include <haxe/crypto/Sha1.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_File
#include <hxd/File.h>
#endif
#ifndef INCLUDED_hxd_System
#include <hxd/System.h>
#endif
#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
#ifndef INCLUDED_hxd_fs_ConvertPattern
#include <hxd/fs/ConvertPattern.h>
#endif
#ifndef INCLUDED_hxd_fs_FileConverter
#include <hxd/fs/FileConverter.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_LocalEntry
#include <hxd/fs/LocalEntry.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9b06b9688304abd6_27_new,"hxd.fs.FileConverter","new",0xa7f9c9cf,"hxd.fs.FileConverter.new","hxd/fs/FileConverter.hx",27,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_79___default_onConvert,"hxd.fs.FileConverter","__default_onConvert",0xd15816a5,"hxd.fs.FileConverter.__default_onConvert","hxd/fs/FileConverter.hx",79,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_82_makeConfig,"hxd.fs.FileConverter","makeConfig",0xbe7ccdc1,"hxd.fs.FileConverter.makeConfig","hxd/fs/FileConverter.hx",82,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_113_loadConvert,"hxd.fs.FileConverter","loadConvert",0x85db3cdc,"hxd.fs.FileConverter.loadConvert","hxd/fs/FileConverter.hx",113,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_120_makeCommmand,"hxd.fs.FileConverter","makeCommmand",0x95afe055,"hxd.fs.FileConverter.makeCommmand","hxd/fs/FileConverter.hx",120,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_147_mergeRec,"hxd.fs.FileConverter","mergeRec",0xa918e5a9,"hxd.fs.FileConverter.mergeRec","hxd/fs/FileConverter.hx",147,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_168_getFileTime,"hxd.fs.FileConverter","getFileTime",0x26a7f7ce,"hxd.fs.FileConverter.getFileTime","hxd/fs/FileConverter.hx",168,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_171_loadConfig,"hxd.fs.FileConverter","loadConfig",0x21d827f9,"hxd.fs.FileConverter.loadConfig","hxd/fs/FileConverter.hx",171,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_189_getConvertRule,"hxd.fs.FileConverter","getConvertRule",0xd0b19a8a,"hxd.fs.FileConverter.getConvertRule","hxd/fs/FileConverter.hx",189,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_205_run,"hxd.fs.FileConverter","run",0xa7fce0ba,"hxd.fs.FileConverter.run","hxd/fs/FileConverter.hx",205,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_217_runConvert,"hxd.fs.FileConverter","runConvert",0x2a213059,"hxd.fs.FileConverter.runConvert","hxd/fs/FileConverter.hx",217,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_262_convertAndCache,"hxd.fs.FileConverter","convertAndCache",0x135daced,"hxd.fs.FileConverter.convertAndCache","hxd/fs/FileConverter.hx",262,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_253_convertAndCache,"hxd.fs.FileConverter","convertAndCache",0x135daced,"hxd.fs.FileConverter.convertAndCache","hxd/fs/FileConverter.hx",253,0xb0b31b21)
static const bool _hx_array_data_ba27365d_23[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_57_addConfig,"hxd.fs.FileConverter","addConfig",0x59abc272,"hxd.fs.FileConverter.addConfig","hxd/fs/FileConverter.hx",57,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_107_sortByRulePiority,"hxd.fs.FileConverter","sortByRulePiority",0xec567d90,"hxd.fs.FileConverter.sortByRulePiority","hxd/fs/FileConverter.hx",107,0xb0b31b21)
HX_LOCAL_STACK_FRAME(_hx_pos_9b06b9688304abd6_37_boot,"hxd.fs.FileConverter","boot",0x4aafcbe3,"hxd.fs.FileConverter.boot","hxd/fs/FileConverter.hx",37,0xb0b31b21)
namespace hxd{
namespace fs{

void FileConverter_obj::__construct(::String baseDir,::String configuration){
            	HX_GC_STACKFRAME(&_hx_pos_9b06b9688304abd6_27_new)
HXLINE(  33)		this->configs =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  63)		this->baseDir = baseDir;
HXLINE(  64)		this->configuration = configuration;
HXLINE(  65)		this->tmpDir = HX_(".tmp/",a6,86,6e,c9);
HXLINE(  67)		 ::Dynamic defaultCfg =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fs.convert",d2,6d,f8,c1), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("fbx",bc,bb,4d,00), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("priority",64,7b,3e,bb),-1)
            					->setFixed(1,HX_("convert",f3,fd,c9,1a),HX_("hmd",bf,49,4f,00))))
            				->setFixed(1,HX_("fnt",2c,c6,4d,00), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("priority",64,7b,3e,bb),-1)
            					->setFixed(1,HX_("convert",f3,fd,c9,1a),HX_("bfnt",0a,af,14,41)))))));
HXLINE(  73)		{
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			::cpp::VirtualArray _g1 = ::hxd::fs::FileConverter_obj::extraConfigs;
HXDLIN(  73)			while((_g < _g1->get_length())){
HXLINE(  73)				 ::Dynamic conf = _g1->__get(_g);
HXDLIN(  73)				_g = (_g + 1);
HXLINE(  74)				defaultCfg = this->mergeRec(defaultCfg,conf);
            			}
            		}
HXLINE(  76)		this->defaultConfig = this->makeConfig(defaultCfg);
            	}

Dynamic FileConverter_obj::__CreateEmpty() { return new FileConverter_obj; }

void *FileConverter_obj::_hx_vtable = 0;

Dynamic FileConverter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileConverter_obj > _hx_result = new FileConverter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FileConverter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a2b7b07;
}

HX_BEGIN_DEFAULT_FUNC(__default_onConvert,FileConverter_obj)
void _hx_run( ::hxd::fs::Convert c){
            	HX_STACKFRAME(&_hx_pos_9b06b9688304abd6_79___default_onConvert)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

 ::Dynamic FileConverter_obj::makeConfig( ::Dynamic obj){
            	HX_GC_STACKFRAME(&_hx_pos_9b06b9688304abd6_82_makeConfig)
HXLINE(  83)		 ::Dynamic cfg =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("rules",f7,63,56,f1),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(1,HX_("obj",f7,8f,54,00),obj));
HXLINE(  87)		 ::Dynamic def = ::Reflect_obj::field(obj,HX_("fs.convert",d2,6d,f8,c1));
HXLINE(  88)		 ::Dynamic conf = ::Reflect_obj::field(obj,(HX_("fs.convert.",1c,aa,67,f7) + this->configuration));
HXLINE(  89)		 ::Dynamic merge = this->mergeRec(def,conf);
HXLINE(  90)		{
HXLINE(  90)			int _g = 0;
HXDLIN(  90)			::Array< ::String > _g1 = ::Reflect_obj::fields(merge);
HXDLIN(  90)			while((_g < _g1->length)){
HXLINE(  90)				::String f = _g1->__get(_g);
HXDLIN(  90)				_g = (_g + 1);
HXLINE(  91)				 ::Dynamic cmd = this->makeCommmand(::Reflect_obj::field(merge,f));
HXLINE(  92)				 ::hxd::fs::ConvertPattern pt;
HXDLIN(  92)				if (::hx::IsEq( f.charCodeAt(0),94 )) {
HXLINE(  92)					pt = ::hxd::fs::ConvertPattern_obj::Regexp( ::EReg_obj::__alloc( HX_CTX ,f,HX_("",00,00,00,00)));
            				}
            				else {
HXLINE(  94)					if ( ::EReg_obj::__alloc( HX_CTX ,HX_("^[a-zA-Z0-9,]+$",49,eb,f2,0a),HX_("",00,00,00,00))->match(f)) {
HXLINE(  95)						::Array< ::String > el = f.toLowerCase().split(HX_(",",2c,00,00,00));
HXLINE(  96)						if ((el->length == 1)) {
HXLINE(  92)							pt = ::hxd::fs::ConvertPattern_obj::Ext(el->__get(0));
            						}
            						else {
HXLINE(  92)							pt = ::hxd::fs::ConvertPattern_obj::Exts(el);
            						}
            					}
            					else {
HXLINE(  97)						if ((f == HX_("*",2a,00,00,00))) {
HXLINE(  92)							pt = ::hxd::fs::ConvertPattern_obj::Wildcard_dyn();
            						}
            						else {
HXLINE(  92)							pt = ::hxd::fs::ConvertPattern_obj::Filename(f);
            						}
            					}
            				}
HXLINE( 101)				( (::Array< ::Dynamic>)(cfg->__Field(HX_("rules",f7,63,56,f1),::hx::paccDynamic)) )->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("priority",64,7b,3e,bb), ::Dynamic(cmd->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic)))
            					->setFixed(1,HX_("pt",04,62,00,00),pt)
            					->setFixed(2,HX_("cmd",7a,7e,4b,00), ::Dynamic(cmd->__Field(HX_("cmd",7a,7e,4b,00),::hx::paccDynamic)))));
            			}
            		}
HXLINE( 103)		( (::Array< ::Dynamic>)(cfg->__Field(HX_("rules",f7,63,56,f1),::hx::paccDynamic)) )->sort(::hxd::fs::FileConverter_obj::sortByRulePiority_dyn());
HXLINE( 104)		return cfg;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileConverter_obj,makeConfig,return )

::Array< ::Dynamic> FileConverter_obj::loadConvert(::String name){
            	HX_STACKFRAME(&_hx_pos_9b06b9688304abd6_113_loadConvert)
HXLINE( 114)		if ((name == HX_("none",b8,12,0a,49))) {
HXLINE( 114)			return null();
            		}
HXLINE( 115)		::Array< ::Dynamic> c = ( (::Array< ::Dynamic>)(::hxd::fs::Convert_obj::converts->get(name)) );
HXLINE( 116)		if (::hx::IsNull( c )) {
HXLINE( 116)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("No convert has been registered with name/extension '",00,b3,d6,e9) + name) + HX_("'",27,00,00,00))));
            		}
HXLINE( 117)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileConverter_obj,loadConvert,return )

 ::Dynamic FileConverter_obj::makeCommmand( ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_9b06b9688304abd6_120_makeCommmand)
HXLINE( 121)		if (::Std_obj::isOfType(obj,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE( 122)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("priority",64,7b,3e,bb),0)
            				->setFixed(1,HX_("cmd",7a,7e,4b,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("conv",f4,b9,c4,41),this->loadConvert(( (::String)(obj) ))))));
            		}
HXLINE( 123)		if (::hx::IsNull( obj->__Field(HX_("convert",f3,fd,c9,1a),::hx::paccDynamic) )) {
HXLINE( 124)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Missing 'convert' in ",9c,71,38,d5) + ::Std_obj::string(obj))));
            		}
HXLINE( 125)		 ::Dynamic cmd =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("conv",f4,b9,c4,41),this->loadConvert(( (::String)(obj->__Field(HX_("convert",f3,fd,c9,1a),::hx::paccDynamic)) ))));
HXLINE( 126)		int priority = 0;
HXLINE( 127)		{
HXLINE( 127)			int _g = 0;
HXDLIN( 127)			::Array< ::String > _g1 = ::Reflect_obj::fields(obj);
HXDLIN( 127)			while((_g < _g1->length)){
HXLINE( 127)				::String f = _g1->__get(_g);
HXDLIN( 127)				_g = (_g + 1);
HXLINE( 128)				 ::Dynamic value = ::Reflect_obj::field(obj,f);
HXLINE( 129)				::String _hx_switch_0 = f;
            				if (  (_hx_switch_0==HX_("convert",f3,fd,c9,1a)) ){
HXLINE( 130)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==HX_("priority",64,7b,3e,bb)) ){
HXLINE( 132)					priority = ( (int)(value) );
HXDLIN( 132)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==HX_("then",dd,02,fc,4c)) ){
HXLINE( 131)					cmd->__SetField(HX_("then",dd,02,fc,4c),this->makeCommmand(value)->__Field(HX_("cmd",7a,7e,4b,00),::hx::paccDynamic),::hx::paccDynamic);
HXDLIN( 131)					goto _hx_goto_7;
            				}
            				/* default */{
HXLINE( 134)					if (::hx::IsNull( cmd->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic) )) {
HXLINE( 134)						cmd->__SetField(HX_("params",46,fb,7a,ed), ::Dynamic(::hx::Anon_obj::Create(0)),::hx::paccDynamic);
            					}
HXLINE( 135)					bool _hx_tmp;
HXDLIN( 135)					if (::Reflect_obj::isObject(value)) {
HXLINE( 135)						_hx_tmp = !(::Std_obj::isOfType(value,( ( ::Dynamic)(::hx::ClassOf< ::String >()) )));
            					}
            					else {
HXLINE( 135)						_hx_tmp = false;
            					}
HXDLIN( 135)					if (_hx_tmp) {
HXLINE( 135)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Invalid parameter value ",8f,38,30,37) + f) + HX_("=",3d,00,00,00)) + ::Std_obj::string(value))));
            					}
HXLINE( 136)					::Reflect_obj::setField( ::Dynamic(cmd->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic)),f,value);
            				}
            				_hx_goto_7:;
            			}
            		}
HXLINE( 139)		if (::hx::IsNotNull( cmd->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic) )) {
HXLINE( 140)			::Array< ::String > fl = ::Reflect_obj::fields( ::Dynamic(cmd->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic)));
HXLINE( 141)			fl->sort(::Reflect_obj::compare_dyn());
HXLINE( 142)			::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 142)			{
HXLINE( 142)				int _g1 = 0;
HXDLIN( 142)				while((_g1 < fl->length)){
HXLINE( 142)					::String f = fl->__get(_g1);
HXDLIN( 142)					_g1 = (_g1 + 1);
HXDLIN( 142)					_g->push(((f + HX_("_",5f,00,00,00)) + ::Std_obj::string(::Reflect_obj::field( ::Dynamic(cmd->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic)),f))));
            				}
            			}
HXDLIN( 142)			cmd->__SetField(HX_("paramsStr",0b,35,d8,51),_g->join(HX_("_",5f,00,00,00)),::hx::paccDynamic);
            		}
HXLINE( 144)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("priority",64,7b,3e,bb),priority)
            			->setFixed(1,HX_("cmd",7a,7e,4b,00),cmd));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileConverter_obj,makeCommmand,return )

 ::Dynamic FileConverter_obj::mergeRec( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_9b06b9688304abd6_147_mergeRec)
HXLINE( 148)		if (::hx::IsNull( b )) {
HXLINE( 148)			return a;
            		}
HXLINE( 149)		if (::hx::IsNull( a )) {
HXLINE( 149)			return b;
            		}
HXLINE( 150)		 ::Dynamic cp =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 151)		{
HXLINE( 151)			int _g = 0;
HXDLIN( 151)			::Array< ::String > _g1 = ::Reflect_obj::fields(a);
HXDLIN( 151)			while((_g < _g1->length)){
HXLINE( 151)				::String f = _g1->__get(_g);
HXDLIN( 151)				_g = (_g + 1);
HXLINE( 152)				 ::Dynamic va = ::Reflect_obj::field(a,f);
HXLINE( 153)				if (::Reflect_obj::hasField(b,f)) {
HXLINE( 154)					 ::Dynamic vb = ::Reflect_obj::field(b,f);
HXLINE( 155)					bool _hx_tmp;
HXDLIN( 155)					if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(vb),::ValueType_obj::TObject_dyn() )) {
HXLINE( 155)						_hx_tmp = ::hx::IsPointerEq( ::Type_obj::_hx_typeof(va),::ValueType_obj::TObject_dyn() );
            					}
            					else {
HXLINE( 155)						_hx_tmp = false;
            					}
HXDLIN( 155)					if (_hx_tmp) {
HXLINE( 155)						vb = this->mergeRec(va,vb);
            					}
HXLINE( 156)					::Reflect_obj::setField(cp,f,vb);
HXLINE( 157)					continue;
            				}
HXLINE( 159)				::Reflect_obj::setField(cp,f,va);
            			}
            		}
HXLINE( 161)		{
HXLINE( 161)			int _g2 = 0;
HXDLIN( 161)			::Array< ::String > _g3 = ::Reflect_obj::fields(b);
HXDLIN( 161)			while((_g2 < _g3->length)){
HXLINE( 161)				::String f = _g3->__get(_g2);
HXDLIN( 161)				_g2 = (_g2 + 1);
HXLINE( 162)				if (!(::Reflect_obj::hasField(cp,f))) {
HXLINE( 163)					::Reflect_obj::setField(cp,f,::Reflect_obj::field(b,f));
            				}
            			}
            		}
HXLINE( 164)		return cp;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FileConverter_obj,mergeRec,return )

Float FileConverter_obj::getFileTime(::String filePath){
            	HX_STACKFRAME(&_hx_pos_9b06b9688304abd6_168_getFileTime)
HXDLIN( 168)		return ( ( ::Date)(::sys::FileSystem_obj::stat(filePath)->__Field(HX_("mtime",fa,06,aa,0f),::hx::paccDynamic)) )->getTime();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileConverter_obj,getFileTime,return )

 ::Dynamic FileConverter_obj::loadConfig(::String dir){
            	HX_GC_STACKFRAME(&_hx_pos_9b06b9688304abd6_171_loadConfig)
HXLINE( 172)		 ::Dynamic c = this->configs->get(dir);
HXLINE( 173)		if (::hx::IsNotNull( c )) {
HXLINE( 173)			return c;
            		}
HXLINE( 174)		int dirPos = dir.lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE( 175)		 ::Dynamic parent;
HXDLIN( 175)		if ((dir == HX_("",00,00,00,00))) {
HXLINE( 175)			parent = this->defaultConfig;
            		}
            		else {
HXLINE( 175)			::String parent1;
HXDLIN( 175)			if ((dirPos < 0)) {
HXLINE( 175)				parent1 = HX_("",00,00,00,00);
            			}
            			else {
HXLINE( 175)				parent1 = dir.substr(0,dirPos);
            			}
HXDLIN( 175)			parent = this->loadConfig(parent1);
            		}
HXLINE( 176)		::String propsFile;
HXDLIN( 176)		if ((dir == HX_("",00,00,00,00))) {
HXLINE( 176)			propsFile = this->baseDir;
            		}
            		else {
HXLINE( 176)			propsFile = ((this->baseDir + dir) + HX_("/",2f,00,00,00));
            		}
HXDLIN( 176)		::String propsFile1 = (propsFile + HX_("props.json",e6,13,3a,cc));
HXLINE( 177)		if (!(::sys::FileSystem_obj::exists(propsFile1))) {
HXLINE( 178)			c = parent;
            		}
            		else {
HXLINE( 180)			::String content = ::sys::io::File_obj::getContent(propsFile1);
HXLINE( 181)			 ::Dynamic obj;
HXDLIN( 181)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 181)				obj =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,content)->doParse();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 181)					{
HXLINE( 181)						null();
            					}
HXDLIN( 181)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 181)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Failed to parse ",8f,90,00,04) + propsFile1) + HX_("(",28,00,00,00)) + ::Std_obj::string(e)) + HX_(")",29,00,00,00))));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 182)			 ::Dynamic fullObj = this->mergeRec( ::Dynamic(parent->__Field(HX_("obj",f7,8f,54,00),::hx::paccDynamic)),obj);
HXLINE( 183)			c = this->makeConfig(fullObj);
            		}
HXLINE( 185)		this->configs->set(dir,c);
HXLINE( 186)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileConverter_obj,loadConfig,return )

 ::Dynamic FileConverter_obj::getConvertRule(::String path){
            	HX_STACKFRAME(&_hx_pos_9b06b9688304abd6_189_getConvertRule)
HXLINE( 190)		int dirPos = path.lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE( 191)		::String cfg;
HXDLIN( 191)		if ((dirPos < 0)) {
HXLINE( 191)			cfg = HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 191)			cfg = path.substr(0,dirPos);
            		}
HXDLIN( 191)		 ::Dynamic cfg1 = this->loadConfig(cfg);
HXLINE( 192)		::String name;
HXDLIN( 192)		if ((dirPos < 0)) {
HXLINE( 192)			name = path;
            		}
            		else {
HXLINE( 192)			name = path.substr((dirPos + 1),null());
            		}
HXLINE( 193)		::String ext = ( (::String)(name.split(HX_(".",2e,00,00,00))->pop()) ).toLowerCase();
HXLINE( 194)		{
HXLINE( 194)			int _g = 0;
HXDLIN( 194)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(cfg1->__Field(HX_("rules",f7,63,56,f1),::hx::paccDynamic)) );
HXDLIN( 194)			while((_g < _g1->length)){
HXLINE( 194)				 ::Dynamic r = _g1->__get(_g);
HXDLIN( 194)				_g = (_g + 1);
HXLINE( 195)				{
HXLINE( 195)					 ::hxd::fs::ConvertPattern _g2 = r->__Field(HX_("pt",04,62,00,00),::hx::paccDynamic);
HXDLIN( 195)					switch((int)(_g2->_hx_getIndex())){
            						case (int)0: {
HXLINE( 196)							::String f = _g2->_hx_getString(0);
HXDLIN( 196)							bool _hx_tmp;
HXDLIN( 196)							if ((name != f)) {
HXLINE( 196)								_hx_tmp = (path == f);
            							}
            							else {
HXLINE( 196)								_hx_tmp = true;
            							}
HXDLIN( 196)							if (_hx_tmp) {
HXLINE( 196)								return r;
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 197)							 ::EReg reg = _g2->_hx_getObject(0).StaticCast<  ::EReg >();
HXDLIN( 197)							bool _hx_tmp;
HXDLIN( 197)							if (!(reg->match(name))) {
HXLINE( 197)								_hx_tmp = reg->match(path);
            							}
            							else {
HXLINE( 197)								_hx_tmp = true;
            							}
HXDLIN( 197)							if (_hx_tmp) {
HXLINE( 197)								return r;
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 198)							::String e = _g2->_hx_getString(0);
HXDLIN( 198)							if ((ext == e)) {
HXLINE( 198)								return r;
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 199)							::Array< ::String > el = _g2->_hx_getObject(0).StaticCast< ::Array< ::String > >();
HXDLIN( 199)							if ((el->indexOf(ext,null()) >= 0)) {
HXLINE( 199)								return r;
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 200)							return r;
            						}
            						break;
            					}
            				}
            			}
            		}
HXLINE( 202)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileConverter_obj,getConvertRule,return )

void FileConverter_obj::run( ::hxd::fs::LocalEntry e){
            	HX_STACKFRAME(&_hx_pos_9b06b9688304abd6_205_run)
HXLINE( 206)		 ::Dynamic rule = this->getConvertRule(e->get_path());
HXLINE( 207)		if (::hx::IsNull( e->originalFile )) {
HXLINE( 208)			e->originalFile = e->file;
            		}
            		else {
HXLINE( 210)			e->file = e->originalFile;
            		}
HXLINE( 211)		bool _hx_tmp;
HXDLIN( 211)		if (::hx::IsNotNull( rule )) {
HXLINE( 211)			_hx_tmp = ::hx::IsNull(  ::Dynamic(rule->__Field(HX_("cmd",7a,7e,4b,00),::hx::paccDynamic))->__Field(HX_("conv",f4,b9,c4,41),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 211)			_hx_tmp = true;
            		}
HXDLIN( 211)		if (_hx_tmp) {
HXLINE( 212)			return;
            		}
HXLINE( 213)		e->file = e->file.substr(this->baseDir.length,null());
HXLINE( 214)		 ::hxd::fs::ConvertPattern _g = rule->__Field(HX_("pt",04,62,00,00),::hx::paccDynamic);
HXDLIN( 214)		bool _hx_tmp1;
HXDLIN( 214)		if ((_g->_hx_getIndex() == 2)) {
HXLINE( 214)			::String _g1 = _g->_hx_getString(0);
HXDLIN( 214)			_hx_tmp1 = true;
            		}
            		else {
HXLINE( 214)			_hx_tmp1 = false;
            		}
HXDLIN( 214)		this->runConvert(e,rule->__Field(HX_("cmd",7a,7e,4b,00),::hx::paccDynamic),_hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileConverter_obj,run,(void))

void FileConverter_obj::runConvert( ::hxd::fs::LocalEntry e, ::Dynamic cmd,::hx::Null< bool >  __o_replaceExt){
            		bool replaceExt = __o_replaceExt.Default(false);
            	HX_STACKFRAME(&_hx_pos_9b06b9688304abd6_217_runConvert)
HXLINE( 218)		::String outFile = this->tmpDir;
HXLINE( 219)		::String ext = e->get_extension();
HXLINE( 220)		bool _hx_tmp;
HXDLIN( 220)		bool _hx_tmp1;
HXDLIN( 220)		if (replaceExt) {
HXLINE( 220)			_hx_tmp1 = ::hx::IsNull( cmd->__Field(HX_("paramsStr",0b,35,d8,51),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 220)			_hx_tmp1 = false;
            		}
HXDLIN( 220)		if (_hx_tmp1) {
HXLINE( 220)			_hx_tmp = ::hx::IsNull( cmd->__Field(HX_("then",dd,02,fc,4c),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 220)			_hx_tmp = false;
            		}
HXDLIN( 220)		if (_hx_tmp) {
HXLINE( 221)			outFile = (outFile + e->get_path().substr(0,-((ext.length + 1))));
            		}
            		else {
HXLINE( 223)			outFile = (outFile + e->get_path());
            		}
HXLINE( 224)		if (::hx::IsNotNull( cmd->__Field(HX_("paramsStr",0b,35,d8,51),::hx::paccDynamic) )) {
HXLINE( 225)			outFile = ( (::String)((outFile + (HX_(".",2e,00,00,00) + cmd->__Field(HX_("paramsStr",0b,35,d8,51),::hx::paccDynamic)))) );
            		}
HXLINE( 226)		 ::hxd::fs::Convert conv = null();
HXLINE( 227)		{
HXLINE( 227)			int _g = 0;
HXDLIN( 227)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(cmd->__Field(HX_("conv",f4,b9,c4,41),::hx::paccDynamic)) );
HXDLIN( 227)			while((_g < _g1->length)){
HXLINE( 227)				 ::hxd::fs::Convert c = _g1->__get(_g).StaticCast<  ::hxd::fs::Convert >();
HXDLIN( 227)				_g = (_g + 1);
HXLINE( 228)				bool _hx_tmp;
HXDLIN( 228)				if (::hx::IsNotNull( c->sourceExts )) {
HXLINE( 228)					_hx_tmp = (c->sourceExts->indexOf(ext,null()) >= 0);
            				}
            				else {
HXLINE( 228)					_hx_tmp = true;
            				}
HXDLIN( 228)				if (_hx_tmp) {
HXLINE( 229)					conv = c;
HXLINE( 230)					goto _hx_goto_18;
            				}
            			}
            			_hx_goto_18:;
            		}
HXLINE( 232)		if (::hx::IsNull( conv )) {
HXLINE( 233)			::String _hx_tmp = ((HX_("No converter is registered that can convert ",8f,19,ec,7a) + e->get_path()) + HX_(" to ",25,3a,7f,15));
HXDLIN( 233)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + Dynamic(  ::Dynamic(cmd->__Field(HX_("conv",f4,b9,c4,41),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fs::Convert >()->destExt)));
            		}
HXLINE( 234)		if ((conv->destExt == HX_("dummy",28,0e,bb,e1))) {
HXLINE( 235)			e->file = ((this->baseDir + this->tmpDir) + HX_(".dummy",3a,a7,25,46));
HXLINE( 236)			if (!(::sys::FileSystem_obj::exists(e->file))) {
HXLINE( 237)				::sys::io::File_obj::saveContent(e->file,HX_("",00,00,00,00));
            			}
HXLINE( 238)			return;
            		}
HXLINE( 240)		if ((conv->destExt == HX_("remove",44,9c,88,04))) {
HXLINE( 241)			e->file = null();
HXLINE( 242)			return;
            		}
HXLINE( 244)		outFile = (outFile + (HX_(".",2e,00,00,00) + conv->destExt));
HXLINE( 245)		this->convertAndCache(e,outFile,conv, ::Dynamic(cmd->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic)));
HXLINE( 246)		if (::hx::IsNotNull( cmd->__Field(HX_("then",dd,02,fc,4c),::hx::paccDynamic) )) {
HXLINE( 247)			e->file = outFile;
HXLINE( 248)			this->runConvert(e,cmd->__Field(HX_("then",dd,02,fc,4c),::hx::paccDynamic),null());
            		}
HXLINE( 250)		e->file = (this->baseDir + outFile);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FileConverter_obj,runConvert,(void))

void FileConverter_obj::convertAndCache( ::hxd::fs::LocalEntry e,::String outFile, ::hxd::fs::Convert conv, ::Dynamic params){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::hxd::fs::FileConverter,_gthis, ::hxd::fs::LocalEntry,e,::Array< ::Dynamic>,entry,::Array< bool >,needInsert) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_9b06b9688304abd6_262_convertAndCache)
HXLINE( 263)			if (needInsert->__get(0)) {
HXLINE( 263)				_gthis->cache->set(e->file,entry->__get(0).StaticCast< ::Array< ::Dynamic> >());
            			}
HXLINE( 264)			::sys::FileSystem_obj::createDirectory((_gthis->baseDir + _gthis->tmpDir));
HXLINE( 265)			::String saveCache = ((_gthis->baseDir + _gthis->tmpDir) + HX_("cache.dat",2b,ea,8f,2f));
HXDLIN( 265)			::sys::io::File_obj::saveContent(saveCache,::haxe::Serializer_obj::run(_gthis->cache));
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_9b06b9688304abd6_253_convertAndCache)
HXDLIN( 253)		 ::hxd::fs::FileConverter _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 254)		if (::hx::IsNull( this->cache )) {
HXLINE( 255)			 ::haxe::ds::StringMap _hx_tmp;
HXDLIN( 255)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 255)				_hx_tmp = ( ( ::haxe::ds::StringMap)(::haxe::Unserializer_obj::run(::sys::io::File_obj::getContent(((this->baseDir + this->tmpDir) + HX_("cache.dat",2b,ea,8f,2f))))) );
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 255)					{
HXLINE( 255)						null();
            					}
HXDLIN( 255)					_hx_tmp =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXDLIN( 255)			this->cache = _hx_tmp;
            		}
HXLINE( 256)		::Array< ::Dynamic> entry = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->cache->get(e->file));
HXLINE( 257)		::Array< bool > needInsert = ::Array_obj< bool >::fromData( _hx_array_data_ba27365d_23,1);
HXLINE( 258)		if (::hx::IsNull( entry->__get(0).StaticCast< ::Array< ::Dynamic> >() )) {
HXLINE( 259)			entry[0] = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 260)			needInsert[0] = true;
            		}
HXLINE( 262)		 ::Dynamic saveCache =  ::Dynamic(new _hx_Closure_0(_gthis,e,entry,needInsert));
HXLINE( 268)		 ::Dynamic match = null();
HXLINE( 269)		{
HXLINE( 269)			int _g = 0;
HXDLIN( 269)			while((_g < entry->__get(0).StaticCast< ::Array< ::Dynamic> >()->length)){
HXLINE( 269)				 ::Dynamic e = entry->__get(0).StaticCast< ::Array< ::Dynamic> >()->__get(_g);
HXDLIN( 269)				_g = (_g + 1);
HXLINE( 270)				if (::hx::IsEq( e->__Field(HX_("out",8e,a0,54,00),::hx::paccDynamic),outFile )) {
HXLINE( 271)					match = e;
HXLINE( 272)					if (::hx::IsNull( match->__Field(HX_("ver",63,e2,59,00),::hx::paccDynamic) )) {
HXLINE( 272)						match->__SetField(HX_("ver",63,e2,59,00),0,::hx::paccDynamic);
            					}
HXLINE( 273)					goto _hx_goto_20;
            				}
            			}
            			_hx_goto_20:;
            		}
HXLINE( 276)		if (::hx::IsNull( match )) {
HXLINE( 277)			match =  ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("out",8e,a0,54,00),outFile)
            				->setFixed(1,HX_("ver",63,e2,59,00),conv->version)
            				->setFixed(2,HX_("hash",ce,2f,08,45),HX_("",00,00,00,00))
            				->setFixed(3,HX_("time",0d,cc,fc,4c),0));
HXLINE( 283)			entry->__get(0).StaticCast< ::Array< ::Dynamic> >()->push(match);
            		}
HXLINE( 285)		::String fullPath = (this->baseDir + e->file);
HXLINE( 286)		::String fullOutPath = (this->baseDir + outFile);
HXLINE( 288)		if (!(::sys::FileSystem_obj::exists(fullPath))) {
HXLINE( 288)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Missing ",1a,76,54,ba) + fullPath)));
            		}
HXLINE( 290)		int time = ::Math_obj::floor((this->getFileTime(fullPath) / ( (Float)(1000) )));
HXLINE( 291)		bool alreadyGen;
HXDLIN( 291)		if (::sys::FileSystem_obj::exists(fullOutPath)) {
HXLINE( 291)			alreadyGen = ::hx::IsEq( match->__Field(HX_("ver",63,e2,59,00),::hx::paccDynamic),conv->version );
            		}
            		else {
HXLINE( 291)			alreadyGen = false;
            		}
HXLINE( 293)		bool _hx_tmp;
HXDLIN( 293)		if (alreadyGen) {
HXLINE( 293)			_hx_tmp = ::hx::IsEq( match->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic),time );
            		}
            		else {
HXLINE( 293)			_hx_tmp = false;
            		}
HXDLIN( 293)		if (_hx_tmp) {
HXLINE( 294)			return;
            		}
HXLINE( 296)		 ::haxe::io::Bytes content = ::hxd::File_obj::getBytes(fullPath);
HXLINE( 297)		::String hash = ::haxe::crypto::Sha1_obj::make(content)->toHex();
HXLINE( 298)		bool _hx_tmp1;
HXDLIN( 298)		if (alreadyGen) {
HXLINE( 298)			_hx_tmp1 = ::hx::IsEq( match->__Field(HX_("hash",ce,2f,08,45),::hx::paccDynamic),hash );
            		}
            		else {
HXLINE( 298)			_hx_tmp1 = false;
            		}
HXDLIN( 298)		if (_hx_tmp1) {
HXLINE( 299)			match->__SetField(HX_("time",0d,cc,fc,4c),time,::hx::paccDynamic);
HXLINE( 300)			saveCache();
HXLINE( 301)			return;
            		}
HXLINE( 304)		::sys::FileSystem_obj::createDirectory(fullOutPath.substr(0,fullOutPath.lastIndexOf(HX_("/",2f,00,00,00),null())));
HXLINE( 306)		conv->srcPath = fullPath;
HXLINE( 307)		conv->dstPath = fullOutPath;
HXLINE( 308)		conv->srcBytes = content;
HXLINE( 309)		conv->originalFilename = e->name;
HXLINE( 310)		conv->params = params;
HXLINE( 311)		this->onConvert(conv);
HXLINE( 312)		conv->convert();
HXLINE( 313)		conv->srcPath = null();
HXLINE( 314)		conv->dstPath = null();
HXLINE( 315)		conv->srcBytes = null();
HXLINE( 316)		conv->originalFilename = null();
HXLINE( 318)		::hxd::System_obj::timeoutTick();
HXLINE( 321)		if (!(::sys::FileSystem_obj::exists(fullOutPath))) {
HXLINE( 322)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Converted output file ",b3,d7,c2,b6) + fullOutPath) + HX_(" was not created",44,b0,07,05))));
            		}
HXLINE( 324)		match->__SetField(HX_("ver",63,e2,59,00),conv->version,::hx::paccDynamic);
HXLINE( 325)		match->__SetField(HX_("time",0d,cc,fc,4c),time,::hx::paccDynamic);
HXLINE( 326)		match->__SetField(HX_("hash",ce,2f,08,45),hash,::hx::paccDynamic);
HXLINE( 327)		saveCache();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FileConverter_obj,convertAndCache,(void))

::cpp::VirtualArray FileConverter_obj::extraConfigs;

 ::Dynamic FileConverter_obj::addConfig( ::Dynamic conf){
            	HX_STACKFRAME(&_hx_pos_9b06b9688304abd6_57_addConfig)
HXLINE(  58)		::hxd::fs::FileConverter_obj::extraConfigs->push(conf);
HXLINE(  59)		return conf;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileConverter_obj,addConfig,return )

int FileConverter_obj::sortByRulePiority( ::Dynamic r1, ::Dynamic r2){
            	HX_STACKFRAME(&_hx_pos_9b06b9688304abd6_107_sortByRulePiority)
HXLINE( 108)		if (::hx::IsNotEq( r1->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic),r2->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic) )) {
HXLINE( 109)			return (( (int)(r2->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic)) ) - ( (int)(r1->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic)) ));
            		}
HXLINE( 110)		int _hx_tmp = _hx_getEnumValueIndex(r1->__Field(HX_("pt",04,62,00,00),::hx::paccDynamic));
HXDLIN( 110)		return (_hx_tmp - _hx_getEnumValueIndex(r2->__Field(HX_("pt",04,62,00,00),::hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FileConverter_obj,sortByRulePiority,return )


void FileConverter_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,FileConverter_obj *_hx_obj) {
	if (!_hx_obj->onConvert.mPtr) _hx_obj->onConvert = new __default_onConvert(_hx_obj);
}
::hx::ObjectPtr< FileConverter_obj > FileConverter_obj::__new(::String baseDir,::String configuration) {
	::hx::ObjectPtr< FileConverter_obj > __this = new FileConverter_obj();
	__this->__construct(baseDir,configuration);
	return __this;
}

::hx::ObjectPtr< FileConverter_obj > FileConverter_obj::__alloc(::hx::Ctx *_hx_ctx,::String baseDir,::String configuration) {
	FileConverter_obj *__this = (FileConverter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileConverter_obj), true, "hxd.fs.FileConverter"));
	*(void **)__this = FileConverter_obj::_hx_vtable;
	hxd::fs::FileConverter_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(baseDir,configuration);
	return __this;
}

FileConverter_obj::FileConverter_obj()
{
	onConvert = new __default_onConvert(this);
}

void FileConverter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileConverter);
	HX_MARK_MEMBER_NAME(configuration,"configuration");
	HX_MARK_MEMBER_NAME(baseDir,"baseDir");
	HX_MARK_MEMBER_NAME(tmpDir,"tmpDir");
	HX_MARK_MEMBER_NAME(configs,"configs");
	HX_MARK_MEMBER_NAME(defaultConfig,"defaultConfig");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(onConvert,"onConvert");
	HX_MARK_END_CLASS();
}

void FileConverter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(configuration,"configuration");
	HX_VISIT_MEMBER_NAME(baseDir,"baseDir");
	HX_VISIT_MEMBER_NAME(tmpDir,"tmpDir");
	HX_VISIT_MEMBER_NAME(configs,"configs");
	HX_VISIT_MEMBER_NAME(defaultConfig,"defaultConfig");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(onConvert,"onConvert");
}

::hx::Val FileConverter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tmpDir") ) { return ::hx::Val( tmpDir ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"baseDir") ) { return ::hx::Val( baseDir ); }
		if (HX_FIELD_EQ(inName,"configs") ) { return ::hx::Val( configs ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mergeRec") ) { return ::hx::Val( mergeRec_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConvert") ) { return ::hx::Val( onConvert ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"makeConfig") ) { return ::hx::Val( makeConfig_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadConfig") ) { return ::hx::Val( loadConfig_dyn() ); }
		if (HX_FIELD_EQ(inName,"runConvert") ) { return ::hx::Val( runConvert_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadConvert") ) { return ::hx::Val( loadConvert_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFileTime") ) { return ::hx::Val( getFileTime_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"makeCommmand") ) { return ::hx::Val( makeCommmand_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"configuration") ) { return ::hx::Val( configuration ); }
		if (HX_FIELD_EQ(inName,"defaultConfig") ) { return ::hx::Val( defaultConfig ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getConvertRule") ) { return ::hx::Val( getConvertRule_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"convertAndCache") ) { return ::hx::Val( convertAndCache_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FileConverter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"addConfig") ) { outValue = addConfig_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"extraConfigs") ) { outValue = ( extraConfigs ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sortByRulePiority") ) { outValue = sortByRulePiority_dyn(); return true; }
	}
	return false;
}

::hx::Val FileConverter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tmpDir") ) { tmpDir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"baseDir") ) { baseDir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"configs") ) { configs=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConvert") ) { onConvert=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"configuration") ) { configuration=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultConfig") ) { defaultConfig=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FileConverter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"extraConfigs") ) { extraConfigs=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void FileConverter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("configuration",b6,60,d8,bd));
	outFields->push(HX_("baseDir",bc,ad,e0,2d));
	outFields->push(HX_("tmpDir",b6,f0,4e,6e));
	outFields->push(HX_("configs",71,93,39,10));
	outFields->push(HX_("defaultConfig",63,2a,4b,c2));
	outFields->push(HX_("cache",42,9a,14,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FileConverter_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FileConverter_obj,configuration),HX_("configuration",b6,60,d8,bd)},
	{::hx::fsString,(int)offsetof(FileConverter_obj,baseDir),HX_("baseDir",bc,ad,e0,2d)},
	{::hx::fsString,(int)offsetof(FileConverter_obj,tmpDir),HX_("tmpDir",b6,f0,4e,6e)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FileConverter_obj,configs),HX_("configs",71,93,39,10)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FileConverter_obj,defaultConfig),HX_("defaultConfig",63,2a,4b,c2)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FileConverter_obj,cache),HX_("cache",42,9a,14,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FileConverter_obj,onConvert),HX_("onConvert",94,b6,74,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FileConverter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &FileConverter_obj::extraConfigs,HX_("extraConfigs",c1,92,af,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FileConverter_obj_sMemberFields[] = {
	HX_("configuration",b6,60,d8,bd),
	HX_("baseDir",bc,ad,e0,2d),
	HX_("tmpDir",b6,f0,4e,6e),
	HX_("configs",71,93,39,10),
	HX_("defaultConfig",63,2a,4b,c2),
	HX_("cache",42,9a,14,41),
	HX_("onConvert",94,b6,74,f2),
	HX_("makeConfig",50,2b,a2,19),
	HX_("loadConvert",6d,bc,67,eb),
	HX_("makeCommmand",a4,ff,12,0b),
	HX_("mergeRec",78,71,68,e8),
	HX_("getFileTime",5f,77,34,8c),
	HX_("loadConfig",88,85,fd,7c),
	HX_("getConvertRule",99,6b,96,bc),
	HX_("run",4b,e7,56,00),
	HX_("runConvert",e8,8d,46,85),
	HX_("convertAndCache",fe,c8,af,8f),
	::String(null()) };

static void FileConverter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileConverter_obj::extraConfigs,"extraConfigs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FileConverter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileConverter_obj::extraConfigs,"extraConfigs");
};

#endif

::hx::Class FileConverter_obj::__mClass;

static ::String FileConverter_obj_sStaticFields[] = {
	HX_("extraConfigs",c1,92,af,f3),
	HX_("addConfig",c3,8b,f6,7f),
	HX_("sortByRulePiority",e1,7f,74,b6),
	::String(null())
};

void FileConverter_obj::__register()
{
	FileConverter_obj _hx_dummy;
	FileConverter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.FileConverter",5d,36,27,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileConverter_obj::__GetStatic;
	__mClass->mSetStaticField = &FileConverter_obj::__SetStatic;
	__mClass->mMarkFunc = FileConverter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FileConverter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileConverter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileConverter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FileConverter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileConverter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileConverter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FileConverter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9b06b9688304abd6_37_boot)
HXDLIN(  37)		extraConfigs = ::cpp::VirtualArray_obj::__new(0);
            	}
}

} // end namespace hxd
} // end namespace fs
