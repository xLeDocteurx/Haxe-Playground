#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_MainEvent
#include <haxe/MainEvent.h>
#endif
#ifndef INCLUDED_haxe_MainLoop
#include <haxe/MainLoop.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_hxd_BitmapData
#include <hxd/BitmapData.h>
#endif
#ifndef INCLUDED_hxd_fs_FileConverter
#include <hxd/fs/FileConverter.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_FileSystem
#include <hxd/fs/FileSystem.h>
#endif
#ifndef INCLUDED_hxd_fs_LocalEntry
#include <hxd/fs/LocalEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_LocalFileSystem
#include <hxd/fs/LocalFileSystem.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_hxd_fs_FileEntry
#include <hxd/impl/ArrayIterator_hxd_fs_FileEntry.h>
#endif
#ifndef INCLUDED_hxd_res_Image
#include <hxd/res/Image.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileSeek
#include <sys/io/FileSeek.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_de951e305d61f0c4_16_new,"hxd.fs.LocalEntry","new",0xf0e15e00,"hxd.fs.LocalEntry.new","hxd/fs/LocalFileSystem.hx",16,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_23_getSign,"hxd.fs.LocalEntry","getSign",0x79cb1d93,"hxd.fs.LocalEntry.getSign","hxd/fs/LocalFileSystem.hx",23,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_32_getBytes,"hxd.fs.LocalEntry","getBytes",0x58bc2655,"hxd.fs.LocalEntry.getBytes","hxd/fs/LocalFileSystem.hx",32,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_36_open,"hxd.fs.LocalEntry","open",0xd502622a,"hxd.fs.LocalEntry.open","hxd/fs/LocalFileSystem.hx",36,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_43_skip,"hxd.fs.LocalEntry","skip",0xd7a374df,"hxd.fs.LocalEntry.skip","hxd/fs/LocalFileSystem.hx",43,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_47_readByte,"hxd.fs.LocalEntry","readByte",0xa46807de,"hxd.fs.LocalEntry.readByte","hxd/fs/LocalFileSystem.hx",47,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_51_read,"hxd.fs.LocalEntry","read",0xd6f5a9b6,"hxd.fs.LocalEntry.read","hxd/fs/LocalFileSystem.hx",51,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_55_close,"hxd.fs.LocalEntry","close",0xa1a74d58,"hxd.fs.LocalEntry.close","hxd/fs/LocalFileSystem.hx",55,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_62_get_isDirectory,"hxd.fs.LocalEntry","get_isDirectory",0x5d22de5a,"hxd.fs.LocalEntry.get_isDirectory","hxd/fs/LocalFileSystem.hx",62,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_71_load,"hxd.fs.LocalEntry","load",0xd305f886,"hxd.fs.LocalEntry.load","hxd/fs/LocalFileSystem.hx",71,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_75_loadBitmap,"hxd.fs.LocalEntry","loadBitmap",0x19aca515,"hxd.fs.LocalEntry.loadBitmap","hxd/fs/LocalFileSystem.hx",75,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_98_get_path,"hxd.fs.LocalEntry","get_path",0x0559af8e,"hxd.fs.LocalEntry.get_path","hxd/fs/LocalFileSystem.hx",98,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_102_exists,"hxd.fs.LocalEntry","exists",0x824ad43c,"hxd.fs.LocalEntry.exists","hxd/fs/LocalFileSystem.hx",102,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_106_get,"hxd.fs.LocalEntry","get",0xf0dc0e36,"hxd.fs.LocalEntry.get","hxd/fs/LocalFileSystem.hx",106,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_110_get_size,"hxd.fs.LocalEntry","get_size",0x075b6aaa,"hxd.fs.LocalEntry.get_size","hxd/fs/LocalFileSystem.hx",110,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_113_iterator,"hxd.fs.LocalEntry","iterator",0xcee7584e,"hxd.fs.LocalEntry.iterator","hxd/fs/LocalFileSystem.hx",113,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_136_getModifTime,"hxd.fs.LocalEntry","getModifTime",0x21f3f5b6,"hxd.fs.LocalEntry.getModifTime","hxd/fs/LocalFileSystem.hx",136,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_209_watch,"hxd.fs.LocalEntry","watch",0x1e694bef,"hxd.fs.LocalEntry.watch","hxd/fs/LocalFileSystem.hx",209,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_185_watch,"hxd.fs.LocalEntry","watch",0x1e694bef,"hxd.fs.LocalEntry.watch","hxd/fs/LocalFileSystem.hx",185,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_143_checkFiles,"hxd.fs.LocalEntry","checkFiles",0x83fe46ef,"hxd.fs.LocalEntry.checkFiles","hxd/fs/LocalFileSystem.hx",143,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_151_checkNext,"hxd.fs.LocalEntry","checkNext",0x4501d37b,"hxd.fs.LocalEntry.checkNext","hxd/fs/LocalFileSystem.hx",151,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_131_boot,"hxd.fs.LocalEntry","boot",0xcc69e292,"hxd.fs.LocalEntry.boot","hxd/fs/LocalFileSystem.hx",131,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_132_boot,"hxd.fs.LocalEntry","boot",0xcc69e292,"hxd.fs.LocalEntry.boot","hxd/fs/LocalFileSystem.hx",132,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_de951e305d61f0c4_133_boot,"hxd.fs.LocalEntry","boot",0xcc69e292,"hxd.fs.LocalEntry.boot","hxd/fs/LocalFileSystem.hx",133,0xc7bc4d4f)
namespace hxd{
namespace fs{

void LocalEntry_obj::__construct( ::hxd::fs::LocalFileSystem fs,::String name,::String relPath,::String file){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_16_new)
HXLINE(  17)		this->fs = fs;
HXLINE(  18)		this->name = name;
HXLINE(  19)		this->relPath = relPath;
HXLINE(  20)		this->file = file;
            	}

Dynamic LocalEntry_obj::__CreateEmpty() { return new LocalEntry_obj; }

void *LocalEntry_obj::_hx_vtable = 0;

Dynamic LocalEntry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocalEntry_obj > _hx_result = new LocalEntry_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool LocalEntry_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09333075) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09333075;
	} else {
		return inClassId==(int)0x74ff2b24;
	}
}

int LocalEntry_obj::getSign(){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_23_getSign)
HXLINE(  24)		int old;
HXDLIN(  24)		if (::hx::IsNull( this->fread )) {
HXLINE(  24)			old = -1;
            		}
            		else {
HXLINE(  24)			old = this->fread->tell();
            		}
HXLINE(  25)		this->open();
HXLINE(  26)		int i = this->fread->readInt32();
HXLINE(  27)		if ((old < 0)) {
HXLINE(  27)			this->close();
            		}
            		else {
HXLINE(  27)			this->fread->seek(old,::sys::io::FileSeek_obj::SeekBegin_dyn());
            		}
HXLINE(  28)		return i;
            	}


 ::haxe::io::Bytes LocalEntry_obj::getBytes(){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_32_getBytes)
HXDLIN(  32)		return ::sys::io::File_obj::getBytes(this->file);
            	}


void LocalEntry_obj::open(){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_36_open)
HXDLIN(  36)		if (::hx::IsNotNull( this->fread )) {
HXLINE(  37)			this->fread->seek(0,::sys::io::FileSeek_obj::SeekBegin_dyn());
            		}
            		else {
HXLINE(  39)			this->fread = ::sys::io::File_obj::read(this->file,null());
            		}
            	}


void LocalEntry_obj::skip(int nbytes){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_43_skip)
HXDLIN(  43)		this->fread->seek(nbytes,::sys::io::FileSeek_obj::SeekCur_dyn());
            	}


int LocalEntry_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_47_readByte)
HXDLIN(  47)		return this->fread->readByte();
            	}


void LocalEntry_obj::read( ::haxe::io::Bytes out,int pos,int size){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_51_read)
HXDLIN(  51)		this->fread->readFullBytes(out,pos,size);
            	}


void LocalEntry_obj::close(){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_55_close)
HXDLIN(  55)		if (::hx::IsNotNull( this->fread )) {
HXLINE(  56)			this->fread->close();
HXLINE(  57)			this->fread = null();
            		}
            	}


bool LocalEntry_obj::get_isDirectory(){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_62_get_isDirectory)
HXLINE(  63)		if (::hx::IsNotNull( this->isDirCached )) {
HXLINE(  63)			return ( (bool)(this->isDirCached) );
            		}
HXLINE(  64)		return ( (bool)((this->isDirCached = ::sys::FileSystem_obj::isDirectory(this->file))) );
            	}


void LocalEntry_obj::load( ::Dynamic onReady){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_71_load)
HXDLIN(  71)		if (::hx::IsNotNull( onReady )) {
HXDLIN(  71)			::haxe::Timer_obj::delay(onReady,1);
            		}
            	}


void LocalEntry_obj::loadBitmap( ::Dynamic onLoaded){
            	HX_GC_STACKFRAME(&_hx_pos_de951e305d61f0c4_75_loadBitmap)
HXLINE(  92)		 ::hxd::BitmapData bmp =  ::hxd::res::Image_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this))->toBitmap();
HXLINE(  93)		 ::hxd::BitmapData this1 = bmp;
HXDLIN(  93)		onLoaded(this1);
            	}


::String LocalEntry_obj::get_path(){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_98_get_path)
HXDLIN(  98)		if (::hx::IsNull( this->relPath )) {
HXDLIN(  98)			return HX_("<root>",20,16,cb,ea);
            		}
            		else {
HXDLIN(  98)			return this->relPath;
            		}
HXDLIN(  98)		return null();
            	}


bool LocalEntry_obj::exists(::String name){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_102_exists)
HXDLIN( 102)		::String _hx_tmp;
HXDLIN( 102)		if (::hx::IsNull( this->relPath )) {
HXDLIN( 102)			_hx_tmp = name;
            		}
            		else {
HXDLIN( 102)			_hx_tmp = ((this->relPath + HX_("/",2f,00,00,00)) + name);
            		}
HXDLIN( 102)		return this->fs->exists(_hx_tmp);
            	}


 ::hxd::fs::FileEntry LocalEntry_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_106_get)
HXDLIN( 106)		::String _hx_tmp;
HXDLIN( 106)		if (::hx::IsNull( this->relPath )) {
HXDLIN( 106)			_hx_tmp = name;
            		}
            		else {
HXDLIN( 106)			_hx_tmp = ((this->relPath + HX_("/",2f,00,00,00)) + name);
            		}
HXDLIN( 106)		return this->fs->get(_hx_tmp);
            	}


int LocalEntry_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_110_get_size)
HXDLIN( 110)		return ( (int)(::sys::FileSystem_obj::stat(this->file)->__Field(HX_("size",c1,a0,53,4c),::hx::paccDynamic)) );
            	}


 ::hxd::impl::ArrayIterator_hxd_fs_FileEntry LocalEntry_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_de951e305d61f0c4_113_iterator)
HXLINE( 114)		::Array< ::Dynamic> arr = ::Array_obj< ::Dynamic>::__new();
HXLINE( 115)		{
HXLINE( 115)			int _g = 0;
HXDLIN( 115)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(this->file);
HXDLIN( 115)			while((_g < _g1->length)){
HXLINE( 115)				::String f = _g1->__get(_g);
HXDLIN( 115)				_g = (_g + 1);
HXLINE( 116)				::String _hx_switch_0 = f;
            				if (  (_hx_switch_0==HX_(".git",a4,54,b6,1e)) ||  (_hx_switch_0==HX_(".svn",fd,7a,bf,1e)) ){
HXLINE( 117)					if (::sys::FileSystem_obj::isDirectory(((this->file + HX_("/",2f,00,00,00)) + f))) {
HXLINE( 118)						continue;
            					}
            					else {
HXLINE( 122)						::String _hx_tmp;
HXDLIN( 122)						if (::hx::IsNull( this->relPath )) {
HXLINE( 122)							_hx_tmp = f;
            						}
            						else {
HXLINE( 122)							_hx_tmp = ((this->relPath + HX_("/",2f,00,00,00)) + f);
            						}
HXDLIN( 122)						arr->push(this->fs->open(_hx_tmp,false));
            					}
HXLINE( 117)					goto _hx_goto_16;
            				}
            				if (  (_hx_switch_0==HX_(".tmp",69,35,c0,1e)) ){
HXLINE( 119)					if (::hx::IsInstanceEq( ::hx::ObjectPtr<OBJ_>(this),this->fs->root )) {
HXLINE( 120)						continue;
            					}
            					else {
HXLINE( 122)						::String _hx_tmp;
HXDLIN( 122)						if (::hx::IsNull( this->relPath )) {
HXLINE( 122)							_hx_tmp = f;
            						}
            						else {
HXLINE( 122)							_hx_tmp = ((this->relPath + HX_("/",2f,00,00,00)) + f);
            						}
HXDLIN( 122)						arr->push(this->fs->open(_hx_tmp,false));
            					}
HXLINE( 119)					goto _hx_goto_16;
            				}
            				/* default */{
HXLINE( 122)					::String _hx_tmp;
HXDLIN( 122)					if (::hx::IsNull( this->relPath )) {
HXLINE( 122)						_hx_tmp = f;
            					}
            					else {
HXLINE( 122)						_hx_tmp = ((this->relPath + HX_("/",2f,00,00,00)) + f);
            					}
HXDLIN( 122)					arr->push(this->fs->open(_hx_tmp,false));
            				}
            				_hx_goto_16:;
            			}
            		}
HXLINE( 125)		return  ::hxd::impl::ArrayIterator_hxd_fs_FileEntry_obj::__alloc( HX_CTX ,arr);
            	}


Float LocalEntry_obj::getModifTime(){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_136_getModifTime)
HXDLIN( 136)		::String _hx_tmp;
HXDLIN( 136)		if (::hx::IsNotNull( this->originalFile )) {
HXDLIN( 136)			_hx_tmp = this->originalFile;
            		}
            		else {
HXDLIN( 136)			_hx_tmp = this->file;
            		}
HXDLIN( 136)		return ( ( ::Date)(::sys::FileSystem_obj::stat(_hx_tmp)->__Field(HX_("mtime",fa,06,aa,0f),::hx::paccDynamic)) )->getTime();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocalEntry_obj,getModifTime,return )

void LocalEntry_obj::watch( ::Dynamic onChanged){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::hxd::fs::LocalEntry,_gthis, ::Dynamic,onChanged) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_209_watch)
HXLINE( 209)			_gthis->fs->convert->run(_gthis);
HXDLIN( 209)			onChanged();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_185_watch)
HXDLIN( 185)		 ::hxd::fs::LocalEntry _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 186)		if (::hx::IsNull( onChanged )) {
HXLINE( 187)			if (::hx::IsNotNull( this->watchCallback )) {
HXLINE( 188)				::hxd::fs::LocalEntry_obj::WATCH_LIST->remove(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 189)				this->watchCallback = null();
            			}
HXLINE( 191)			return;
            		}
HXLINE( 193)		if (::hx::IsNull( this->watchCallback )) {
HXLINE( 194)			if (::hx::IsNull( ::hxd::fs::LocalEntry_obj::WATCH_LIST )) {
HXLINE( 195)				::hxd::fs::LocalEntry_obj::WATCH_LIST = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 197)				::haxe::MainLoop_obj::add(::hxd::fs::LocalEntry_obj::checkFiles_dyn(),null());
            			}
HXLINE( 200)			::String path = this->get_path();
HXLINE( 201)			{
HXLINE( 201)				int _g = 0;
HXDLIN( 201)				::Array< ::Dynamic> _g1 = ::hxd::fs::LocalEntry_obj::WATCH_LIST;
HXDLIN( 201)				while((_g < _g1->length)){
HXLINE( 201)					 ::hxd::fs::LocalEntry w = _g1->__get(_g).StaticCast<  ::hxd::fs::LocalEntry >();
HXDLIN( 201)					_g = (_g + 1);
HXLINE( 202)					if ((w->get_path() == path)) {
HXLINE( 203)						w->watchCallback = null();
HXLINE( 204)						::hxd::fs::LocalEntry_obj::WATCH_LIST->remove(w);
            					}
            				}
            			}
HXLINE( 206)			::hxd::fs::LocalEntry_obj::WATCH_LIST->push(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 208)		::String _hx_tmp;
HXDLIN( 208)		if (::hx::IsNotNull( this->originalFile )) {
HXLINE( 208)			_hx_tmp = this->originalFile;
            		}
            		else {
HXLINE( 208)			_hx_tmp = this->file;
            		}
HXDLIN( 208)		this->watchTime = ( ( ::Date)(::sys::FileSystem_obj::stat(_hx_tmp)->__Field(HX_("mtime",fa,06,aa,0f),::hx::paccDynamic)) )->getTime();
HXLINE( 209)		this->watchCallback =  ::Dynamic(new _hx_Closure_0(_gthis,onChanged));
            	}


int LocalEntry_obj::WATCH_INDEX;

::Array< ::Dynamic> LocalEntry_obj::WATCH_LIST;

::String LocalEntry_obj::tmpDir;

void LocalEntry_obj::checkFiles(){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_143_checkFiles)
HXLINE( 144)		int filesToCheck = ::Math_obj::ceil((( (Float)(::hxd::fs::LocalEntry_obj::WATCH_LIST->length) ) / ( (Float)(60) )));
HXLINE( 145)		if ((filesToCheck > ::hxd::fs::LocalFileSystem_obj::FILES_CHECK_MAX)) {
HXLINE( 146)			filesToCheck = ::hxd::fs::LocalFileSystem_obj::FILES_CHECK_MAX;
            		}
HXLINE( 147)		{
HXLINE( 147)			int _g = 0;
HXDLIN( 147)			int _g1 = filesToCheck;
HXDLIN( 147)			while((_g < _g1)){
HXLINE( 147)				_g = (_g + 1);
HXDLIN( 147)				int i = (_g - 1);
HXLINE( 148)				::hxd::fs::LocalEntry_obj::checkNext();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LocalEntry_obj,checkFiles,(void))

void LocalEntry_obj::checkNext(){
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_151_checkNext)
HXLINE( 152)		 ::hxd::fs::LocalEntry w = ::hxd::fs::LocalEntry_obj::WATCH_LIST->__get(::hxd::fs::LocalEntry_obj::WATCH_INDEX++).StaticCast<  ::hxd::fs::LocalEntry >();
HXLINE( 153)		if (::hx::IsNull( w )) {
HXLINE( 154)			::hxd::fs::LocalEntry_obj::WATCH_INDEX = 0;
HXLINE( 155)			return;
            		}
HXLINE( 157)		Float t;
HXDLIN( 157)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 157)			::String t1;
HXDLIN( 157)			if (::hx::IsNotNull( w->originalFile )) {
HXLINE( 157)				t1 = w->originalFile;
            			}
            			else {
HXLINE( 157)				t1 = w->file;
            			}
HXDLIN( 157)			t = ( ( ::Date)(::sys::FileSystem_obj::stat(t1)->__Field(HX_("mtime",fa,06,aa,0f),::hx::paccDynamic)) )->getTime();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 157)				{
HXLINE( 157)					null();
            				}
HXDLIN( 157)				return;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 158)		if ((t == w->watchTime)) {
HXLINE( 158)			return;
            		}
HXLINE( 161)		if (::hx::IsNull( ::hxd::fs::LocalEntry_obj::tmpDir )) {
HXLINE( 162)			::hxd::fs::LocalEntry_obj::tmpDir = ::Sys_obj::getEnv(HX_("TEMP",14,8b,ba,37));
HXLINE( 163)			if (::hx::IsNull( ::hxd::fs::LocalEntry_obj::tmpDir )) {
HXLINE( 163)				::hxd::fs::LocalEntry_obj::tmpDir = ::Sys_obj::getEnv(HX_("TMPDIR",d6,e4,e9,20));
            			}
HXLINE( 164)			if (::hx::IsNull( ::hxd::fs::LocalEntry_obj::tmpDir )) {
HXLINE( 164)				::hxd::fs::LocalEntry_obj::tmpDir = ::Sys_obj::getEnv(HX_("TMP",b7,00,40,00));
            			}
            		}
HXLINE( 166)		::String lockFile = (::hxd::fs::LocalEntry_obj::tmpDir + HX_("/",2f,00,00,00));
HXDLIN( 166)		::String lockFile1 = ((lockFile + w->file.split(HX_("/",2f,00,00,00))->pop()) + HX_(".lock",19,4b,26,c4));
HXLINE( 167)		if (::sys::FileSystem_obj::exists(lockFile1)) {
HXLINE( 167)			return;
            		}
HXLINE( 168)		if (!(w->get_isDirectory())) {
HXLINE( 169)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 178)					{
HXLINE( 178)						null();
            					}
HXDLIN( 178)					return;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE( 181)		w->watchTime = t;
HXLINE( 182)		w->watchCallback();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LocalEntry_obj,checkNext,(void))


::hx::ObjectPtr< LocalEntry_obj > LocalEntry_obj::__new( ::hxd::fs::LocalFileSystem fs,::String name,::String relPath,::String file) {
	::hx::ObjectPtr< LocalEntry_obj > __this = new LocalEntry_obj();
	__this->__construct(fs,name,relPath,file);
	return __this;
}

::hx::ObjectPtr< LocalEntry_obj > LocalEntry_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::LocalFileSystem fs,::String name,::String relPath,::String file) {
	LocalEntry_obj *__this = (LocalEntry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocalEntry_obj), true, "hxd.fs.LocalEntry"));
	*(void **)__this = LocalEntry_obj::_hx_vtable;
	__this->__construct(fs,name,relPath,file);
	return __this;
}

LocalEntry_obj::LocalEntry_obj()
{
}

void LocalEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocalEntry);
	HX_MARK_MEMBER_NAME(fs,"fs");
	HX_MARK_MEMBER_NAME(relPath,"relPath");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(originalFile,"originalFile");
	HX_MARK_MEMBER_NAME(fread,"fread");
	HX_MARK_MEMBER_NAME(isDirCached,"isDirCached");
	HX_MARK_MEMBER_NAME(watchCallback,"watchCallback");
	HX_MARK_MEMBER_NAME(watchTime,"watchTime");
	 ::hxd::fs::FileEntry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LocalEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fs,"fs");
	HX_VISIT_MEMBER_NAME(relPath,"relPath");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(originalFile,"originalFile");
	HX_VISIT_MEMBER_NAME(fread,"fread");
	HX_VISIT_MEMBER_NAME(isDirCached,"isDirCached");
	HX_VISIT_MEMBER_NAME(watchCallback,"watchCallback");
	HX_VISIT_MEMBER_NAME(watchTime,"watchTime");
	 ::hxd::fs::FileEntry_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LocalEntry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fs") ) { return ::hx::Val( fs ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return ::hx::Val( file ); }
		if (HX_FIELD_EQ(inName,"open") ) { return ::hx::Val( open_dyn() ); }
		if (HX_FIELD_EQ(inName,"skip") ) { return ::hx::Val( skip_dyn() ); }
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fread") ) { return ::hx::Val( fread ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"watch") ) { return ::hx::Val( watch_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"relPath") ) { return ::hx::Val( relPath ); }
		if (HX_FIELD_EQ(inName,"getSign") ) { return ::hx::Val( getSign_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_path") ) { return ::hx::Val( get_path_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"watchTime") ) { return ::hx::Val( watchTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadBitmap") ) { return ::hx::Val( loadBitmap_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDirCached") ) { return ::hx::Val( isDirCached ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"originalFile") ) { return ::hx::Val( originalFile ); }
		if (HX_FIELD_EQ(inName,"getModifTime") ) { return ::hx::Val( getModifTime_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"watchCallback") ) { return ::hx::Val( watchCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isDirectory") ) { return ::hx::Val( get_isDirectory_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LocalEntry_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tmpDir") ) { outValue = ( tmpDir ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checkNext") ) { outValue = checkNext_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"WATCH_LIST") ) { outValue = ( WATCH_LIST ); return true; }
		if (HX_FIELD_EQ(inName,"checkFiles") ) { outValue = checkFiles_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"WATCH_INDEX") ) { outValue = ( WATCH_INDEX ); return true; }
	}
	return false;
}

::hx::Val LocalEntry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fs") ) { fs=inValue.Cast<  ::hxd::fs::LocalFileSystem >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fread") ) { fread=inValue.Cast<  ::sys::io::FileInput >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"relPath") ) { relPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"watchTime") ) { watchTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDirCached") ) { isDirCached=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"originalFile") ) { originalFile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"watchCallback") ) { watchCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LocalEntry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tmpDir") ) { tmpDir=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"WATCH_LIST") ) { WATCH_LIST=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"WATCH_INDEX") ) { WATCH_INDEX=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void LocalEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fs",4d,59,00,00));
	outFields->push(HX_("relPath",9e,0b,0c,4b));
	outFields->push(HX_("file",7c,ce,bb,43));
	outFields->push(HX_("originalFile",6d,2b,1c,1d));
	outFields->push(HX_("fread",bc,76,86,06));
	outFields->push(HX_("isDirCached",c5,3f,94,24));
	outFields->push(HX_("watchTime",fc,e1,e5,40));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LocalEntry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::fs::LocalFileSystem */ ,(int)offsetof(LocalEntry_obj,fs),HX_("fs",4d,59,00,00)},
	{::hx::fsString,(int)offsetof(LocalEntry_obj,relPath),HX_("relPath",9e,0b,0c,4b)},
	{::hx::fsString,(int)offsetof(LocalEntry_obj,file),HX_("file",7c,ce,bb,43)},
	{::hx::fsString,(int)offsetof(LocalEntry_obj,originalFile),HX_("originalFile",6d,2b,1c,1d)},
	{::hx::fsObject /*  ::sys::io::FileInput */ ,(int)offsetof(LocalEntry_obj,fread),HX_("fread",bc,76,86,06)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LocalEntry_obj,isDirCached),HX_("isDirCached",c5,3f,94,24)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LocalEntry_obj,watchCallback),HX_("watchCallback",34,d3,62,22)},
	{::hx::fsFloat,(int)offsetof(LocalEntry_obj,watchTime),HX_("watchTime",fc,e1,e5,40)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LocalEntry_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &LocalEntry_obj::WATCH_INDEX,HX_("WATCH_INDEX",a2,b5,dc,b7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &LocalEntry_obj::WATCH_LIST,HX_("WATCH_LIST",ae,e7,7c,3e)},
	{::hx::fsString,(void *) &LocalEntry_obj::tmpDir,HX_("tmpDir",b6,f0,4e,6e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LocalEntry_obj_sMemberFields[] = {
	HX_("fs",4d,59,00,00),
	HX_("relPath",9e,0b,0c,4b),
	HX_("file",7c,ce,bb,43),
	HX_("originalFile",6d,2b,1c,1d),
	HX_("fread",bc,76,86,06),
	HX_("getSign",f3,3f,d6,1e),
	HX_("getBytes",f5,17,6f,1d),
	HX_("open",ca,03,b4,49),
	HX_("skip",7f,16,55,4c),
	HX_("readByte",7e,f9,1a,69),
	HX_("read",56,4b,a7,4b),
	HX_("close",b8,17,63,48),
	HX_("isDirCached",c5,3f,94,24),
	HX_("get_isDirectory",ba,60,a7,af),
	HX_("load",26,9a,b7,47),
	HX_("loadBitmap",b5,3e,37,a6),
	HX_("get_path",2e,a1,0c,ca),
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("get_size",4a,5c,0e,cc),
	HX_("iterator",ee,49,9a,93),
	HX_("watchCallback",34,d3,62,22),
	HX_("watchTime",fc,e1,e5,40),
	HX_("getModifTime",56,37,90,d9),
	HX_("watch",4f,16,25,c5),
	::String(null()) };

static void LocalEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LocalEntry_obj::WATCH_INDEX,"WATCH_INDEX");
	HX_MARK_MEMBER_NAME(LocalEntry_obj::WATCH_LIST,"WATCH_LIST");
	HX_MARK_MEMBER_NAME(LocalEntry_obj::tmpDir,"tmpDir");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LocalEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LocalEntry_obj::WATCH_INDEX,"WATCH_INDEX");
	HX_VISIT_MEMBER_NAME(LocalEntry_obj::WATCH_LIST,"WATCH_LIST");
	HX_VISIT_MEMBER_NAME(LocalEntry_obj::tmpDir,"tmpDir");
};

#endif

::hx::Class LocalEntry_obj::__mClass;

static ::String LocalEntry_obj_sStaticFields[] = {
	HX_("WATCH_INDEX",a2,b5,dc,b7),
	HX_("WATCH_LIST",ae,e7,7c,3e),
	HX_("tmpDir",b6,f0,4e,6e),
	HX_("checkFiles",8f,e0,88,10),
	HX_("checkNext",db,4d,e2,9c),
	::String(null())
};

void LocalEntry_obj::__register()
{
	LocalEntry_obj _hx_dummy;
	LocalEntry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.LocalEntry",0e,9e,e2,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LocalEntry_obj::__GetStatic;
	__mClass->mSetStaticField = &LocalEntry_obj::__SetStatic;
	__mClass->mMarkFunc = LocalEntry_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LocalEntry_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocalEntry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocalEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LocalEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocalEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocalEntry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LocalEntry_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_131_boot)
HXDLIN( 131)		WATCH_INDEX = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_132_boot)
HXDLIN( 132)		WATCH_LIST = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_de951e305d61f0c4_133_boot)
HXDLIN( 133)		tmpDir = null();
            	}
}

} // end namespace hxd
} // end namespace fs
