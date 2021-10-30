#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
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
#ifndef INCLUDED_hxd_fs_NotFound
#include <hxd/fs/NotFound.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f968858aa6dabf27_214_new,"hxd.fs.LocalFileSystem","new",0x167467e1,"hxd.fs.LocalFileSystem.new","hxd/fs/LocalFileSystem.hx",214,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_f968858aa6dabf27_250_getAbsolutePath,"hxd.fs.LocalFileSystem","getAbsolutePath",0x907f9273,"hxd.fs.LocalFileSystem.getAbsolutePath","hxd/fs/LocalFileSystem.hx",250,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_f968858aa6dabf27_256_getRoot,"hxd.fs.LocalFileSystem","getRoot",0x8c9a89d9,"hxd.fs.LocalFileSystem.getRoot","hxd/fs/LocalFileSystem.hx",256,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_f968858aa6dabf27_261_checkPath,"hxd.fs.LocalFileSystem","checkPath",0x29ae5cce,"hxd.fs.LocalFileSystem.checkPath","hxd/fs/LocalFileSystem.hx",261,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_f968858aa6dabf27_284_open,"hxd.fs.LocalFileSystem","open",0x9017fd29,"hxd.fs.LocalFileSystem.open","hxd/fs/LocalFileSystem.hx",284,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_f968858aa6dabf27_303_clearCache,"hxd.fs.LocalFileSystem","clearCache",0x97baa414,"hxd.fs.LocalFileSystem.clearCache","hxd/fs/LocalFileSystem.hx",303,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_f968858aa6dabf27_309_exists,"hxd.fs.LocalFileSystem","exists",0x623c6cfb,"hxd.fs.LocalFileSystem.exists","hxd/fs/LocalFileSystem.hx",309,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_f968858aa6dabf27_314_get,"hxd.fs.LocalFileSystem","get",0x166f1817,"hxd.fs.LocalFileSystem.get","hxd/fs/LocalFileSystem.hx",314,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_f968858aa6dabf27_322_dispose,"hxd.fs.LocalFileSystem","dispose",0x29b56ca0,"hxd.fs.LocalFileSystem.dispose","hxd/fs/LocalFileSystem.hx",322,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_f968858aa6dabf27_325_dir,"hxd.fs.LocalFileSystem","dir",0x166cd4ce,"hxd.fs.LocalFileSystem.dir","hxd/fs/LocalFileSystem.hx",325,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_f968858aa6dabf27_220_boot,"hxd.fs.LocalFileSystem","boot",0x877f7d91,"hxd.fs.LocalFileSystem.boot","hxd/fs/LocalFileSystem.hx",220,0xc7bc4d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_f968858aa6dabf27_221_boot,"hxd.fs.LocalFileSystem","boot",0x877f7d91,"hxd.fs.LocalFileSystem.boot","hxd/fs/LocalFileSystem.hx",221,0xc7bc4d4f)
namespace hxd{
namespace fs{

void LocalFileSystem_obj::__construct(::String dir,::String configuration){
            	HX_GC_STACKFRAME(&_hx_pos_f968858aa6dabf27_214_new)
HXLINE( 259)		this->directoryCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 217)		this->fileCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 224)		this->baseDir = dir;
HXLINE( 225)		if (::hx::IsNull( configuration )) {
HXLINE( 226)			configuration = HX_("default",c1,d8,c3,9b);
            		}
HXLINE( 231)		::String pr = ::Sys_obj::programPath();
HXLINE( 232)		::Array< ::String > exePath;
HXDLIN( 232)		if (::hx::IsNull( pr )) {
HXLINE( 232)			exePath = null();
            		}
            		else {
HXLINE( 232)			exePath = pr.split(HX_("\\",5c,00,00,00))->join(HX_("/",2f,00,00,00)).split(HX_("/",2f,00,00,00));
            		}
HXLINE( 237)		if (::hx::IsNotNull( exePath )) {
HXLINE( 237)			exePath->pop();
            		}
HXLINE( 238)		::String froot;
HXDLIN( 238)		if (::hx::IsNull( exePath )) {
HXLINE( 238)			froot = this->baseDir;
            		}
            		else {
HXLINE( 238)			::String froot1 = (exePath->join(HX_("/",2f,00,00,00)) + HX_("/",2f,00,00,00));
HXDLIN( 238)			froot = ::sys::FileSystem_obj::fullPath((froot1 + this->baseDir));
            		}
HXLINE( 239)		bool _hx_tmp;
HXDLIN( 239)		bool _hx_tmp1;
HXDLIN( 239)		if (::hx::IsNotNull( froot )) {
HXLINE( 239)			_hx_tmp1 = !(::sys::FileSystem_obj::exists(froot));
            		}
            		else {
HXLINE( 239)			_hx_tmp1 = true;
            		}
HXDLIN( 239)		if (!(_hx_tmp1)) {
HXLINE( 239)			_hx_tmp = !(::sys::FileSystem_obj::isDirectory(froot));
            		}
            		else {
HXLINE( 239)			_hx_tmp = true;
            		}
HXDLIN( 239)		if (_hx_tmp) {
HXLINE( 240)			froot = ::sys::FileSystem_obj::fullPath(this->baseDir);
HXLINE( 241)			bool _hx_tmp;
HXDLIN( 241)			bool _hx_tmp1;
HXDLIN( 241)			if (::hx::IsNotNull( froot )) {
HXLINE( 241)				_hx_tmp1 = !(::sys::FileSystem_obj::exists(froot));
            			}
            			else {
HXLINE( 241)				_hx_tmp1 = true;
            			}
HXDLIN( 241)			if (!(_hx_tmp1)) {
HXLINE( 241)				_hx_tmp = !(::sys::FileSystem_obj::isDirectory(froot));
            			}
            			else {
HXLINE( 241)				_hx_tmp = true;
            			}
HXDLIN( 241)			if (_hx_tmp) {
HXLINE( 242)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Could not find dir ",ae,c8,49,a9) + dir)));
            			}
            		}
HXLINE( 244)		this->baseDir = froot.split(HX_("\\",5c,00,00,00))->join(HX_("/",2f,00,00,00));
HXLINE( 245)		if (!(::StringTools_obj::endsWith(this->baseDir,HX_("/",2f,00,00,00)))) {
HXLINE( 245)			 ::hxd::fs::LocalFileSystem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)			_hx_tmp->baseDir = (_hx_tmp->baseDir + HX_("/",2f,00,00,00));
            		}
HXLINE( 246)		this->convert =  ::hxd::fs::FileConverter_obj::__alloc( HX_CTX ,this->baseDir,configuration);
HXLINE( 247)		this->root =  ::hxd::fs::LocalEntry_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),HX_("root",22,ee,ae,4b),null(),this->baseDir);
            	}

Dynamic LocalFileSystem_obj::__CreateEmpty() { return new LocalFileSystem_obj; }

void *LocalFileSystem_obj::_hx_vtable = 0;

Dynamic LocalFileSystem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocalFileSystem_obj > _hx_result = new LocalFileSystem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LocalFileSystem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x22b53935;
}

static ::hxd::fs::FileSystem_obj _hx_hxd_fs_LocalFileSystem__hx_hxd_fs_FileSystem= {
	(  ::hxd::fs::FileEntry (::hx::Object::*)())&::hxd::fs::LocalFileSystem_obj::getRoot,
	(  ::hxd::fs::FileEntry (::hx::Object::*)(::String))&::hxd::fs::LocalFileSystem_obj::get_76056e86,
	( bool (::hx::Object::*)(::String))&::hxd::fs::LocalFileSystem_obj::exists,
	( void (::hx::Object::*)())&::hxd::fs::LocalFileSystem_obj::dispose,
	( ::Array< ::Dynamic> (::hx::Object::*)(::String))&::hxd::fs::LocalFileSystem_obj::dir,
};

 ::hxd::fs::FileEntry LocalFileSystem_obj::get_76056e86(::String path) {
			return get(path);
}
void *LocalFileSystem_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x7db45c4c: return &_hx_hxd_fs_LocalFileSystem__hx_hxd_fs_FileSystem;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::String LocalFileSystem_obj::getAbsolutePath( ::hxd::fs::FileEntry f){
            	HX_STACKFRAME(&_hx_pos_f968858aa6dabf27_250_getAbsolutePath)
HXLINE( 251)		 ::hxd::fs::LocalEntry f1 = ::hx::TCast<  ::hxd::fs::LocalEntry >::cast(f);
HXLINE( 252)		return f1->file;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalFileSystem_obj,getAbsolutePath,return )

 ::hxd::fs::FileEntry LocalFileSystem_obj::getRoot(){
            	HX_STACKFRAME(&_hx_pos_f968858aa6dabf27_256_getRoot)
HXDLIN( 256)		return this->root;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocalFileSystem_obj,getRoot,return )

bool LocalFileSystem_obj::checkPath(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_f968858aa6dabf27_261_checkPath)
HXLINE( 263)		::String baseDir =  ::haxe::io::Path_obj::__alloc( HX_CTX ,path)->dir;
HXLINE( 264)		 ::haxe::ds::StringMap c = ( ( ::haxe::ds::StringMap)(this->directoryCache->get(baseDir)) );
HXLINE( 265)		bool isNew = false;
HXLINE( 266)		if (::hx::IsNull( c )) {
HXLINE( 267)			isNew = true;
HXLINE( 268)			c =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 269)			{
HXLINE( 269)				int _g = 0;
HXDLIN( 269)				::Array< ::String > _g1;
HXDLIN( 269)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 269)					_g1 = ::sys::FileSystem_obj::readDirectory(baseDir);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 269)						{
HXLINE( 269)							null();
            						}
HXDLIN( 269)						_g1 = ::Array_obj< ::String >::__new(0);
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN( 269)				while((_g < _g1->length)){
HXLINE( 269)					::String f = _g1->__get(_g);
HXDLIN( 269)					_g = (_g + 1);
HXLINE( 270)					c->set(f,true);
            				}
            			}
HXLINE( 271)			this->directoryCache->set(baseDir,c);
            		}
HXLINE( 273)		if (!(c->exists(path.substr((baseDir.length + 1),null())))) {
HXLINE( 275)			if (!(isNew)) {
HXLINE( 276)				this->directoryCache->remove(baseDir);
HXLINE( 277)				return this->checkPath(path);
            			}
HXLINE( 279)			return false;
            		}
HXLINE( 281)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalFileSystem_obj,checkPath,return )

 ::hxd::fs::LocalEntry LocalFileSystem_obj::open(::String path,::hx::Null< bool >  __o_check){
            		bool check = __o_check.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_f968858aa6dabf27_284_open)
HXLINE( 285)		 ::Dynamic r = this->fileCache->get(path);
HXLINE( 286)		if (::hx::IsNotNull( r )) {
HXLINE( 287)			return ( ( ::hxd::fs::LocalEntry)(r->__Field(HX_("r",72,00,00,00),::hx::paccDynamic)) );
            		}
HXLINE( 288)		 ::hxd::fs::LocalEntry e = null();
HXLINE( 289)		::String f = ::sys::FileSystem_obj::fullPath((this->baseDir + path));
HXLINE( 290)		if (::hx::IsNull( f )) {
HXLINE( 291)			return null();
            		}
HXLINE( 292)		f = f.split(HX_("\\",5c,00,00,00))->join(HX_("/",2f,00,00,00));
HXLINE( 293)		bool _hx_tmp;
HXDLIN( 293)		if (check) {
HXLINE( 293)			bool _hx_tmp1;
HXDLIN( 293)			bool _hx_tmp2;
HXDLIN( 293)			if (::hxd::fs::LocalFileSystem_obj::isWindows) {
HXLINE( 293)				if (::hxd::fs::LocalFileSystem_obj::isWindows) {
HXLINE( 293)					_hx_tmp2 = (f == (this->baseDir + path));
            				}
            				else {
HXLINE( 293)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE( 293)				_hx_tmp2 = true;
            			}
HXDLIN( 293)			if (_hx_tmp2) {
HXLINE( 293)				_hx_tmp1 = ::sys::FileSystem_obj::exists(f);
            			}
            			else {
HXLINE( 293)				_hx_tmp1 = false;
            			}
HXDLIN( 293)			if (_hx_tmp1) {
HXLINE( 293)				_hx_tmp = this->checkPath(f);
            			}
            			else {
HXLINE( 293)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 293)			_hx_tmp = true;
            		}
HXDLIN( 293)		if (_hx_tmp) {
HXLINE( 294)			e =  ::hxd::fs::LocalEntry_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),( (::String)(path.split(HX_("/",2f,00,00,00))->pop()) ),path,f);
HXLINE( 295)			this->convert->run(e);
HXLINE( 296)			if (::hx::IsNull( e->file )) {
HXLINE( 296)				e = null();
            			}
            		}
HXLINE( 298)		this->fileCache->set(path, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("r",72,00,00,00),e)));
HXLINE( 299)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocalFileSystem_obj,open,return )

void LocalFileSystem_obj::clearCache(){
            	HX_STACKFRAME(&_hx_pos_f968858aa6dabf27_303_clearCache)
HXDLIN( 303)		 ::Dynamic path = this->fileCache->keys();
HXDLIN( 303)		while(( (bool)(path->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 303)			::String path1 = ( (::String)(path->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 304)			 ::Dynamic r = this->fileCache->get(path1);
HXLINE( 305)			if (::hx::IsNull( r->__Field(HX_("r",72,00,00,00),::hx::paccDynamic) )) {
HXLINE( 305)				this->fileCache->remove(path1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocalFileSystem_obj,clearCache,(void))

bool LocalFileSystem_obj::exists(::String path){
            	HX_STACKFRAME(&_hx_pos_f968858aa6dabf27_309_exists)
HXLINE( 310)		 ::hxd::fs::LocalEntry f = this->open(path,null());
HXLINE( 311)		return ::hx::IsNotNull( f );
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalFileSystem_obj,exists,return )

 ::hxd::fs::LocalEntry LocalFileSystem_obj::get(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_f968858aa6dabf27_314_get)
HXLINE( 315)		 ::hxd::fs::LocalEntry f = this->open(path,null());
HXLINE( 316)		if (::hx::IsNull( f )) {
HXLINE( 317)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hxd::fs::NotFound_obj::__alloc( HX_CTX ,path)));
            		}
HXLINE( 318)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalFileSystem_obj,get,return )

void LocalFileSystem_obj::dispose(){
            	HX_GC_STACKFRAME(&_hx_pos_f968858aa6dabf27_322_dispose)
HXDLIN( 322)		this->fileCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocalFileSystem_obj,dispose,(void))

::Array< ::Dynamic> LocalFileSystem_obj::dir(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_f968858aa6dabf27_325_dir)
HXLINE( 326)		bool _hx_tmp;
HXDLIN( 326)		if (::sys::FileSystem_obj::exists((this->baseDir + path))) {
HXLINE( 326)			_hx_tmp = !(::sys::FileSystem_obj::isDirectory((this->baseDir + path)));
            		}
            		else {
HXLINE( 326)			_hx_tmp = true;
            		}
HXDLIN( 326)		if (_hx_tmp) {
HXLINE( 327)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hxd::fs::NotFound_obj::__alloc( HX_CTX ,(this->baseDir + path))));
            		}
HXLINE( 328)		::Array< ::String > files = ::sys::FileSystem_obj::readDirectory((this->baseDir + path));
HXLINE( 329)		::Array< ::Dynamic> r = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 330)		{
HXLINE( 330)			int _g = 0;
HXDLIN( 330)			while((_g < files->length)){
HXLINE( 330)				::String f = files->__get(_g);
HXDLIN( 330)				_g = (_g + 1);
HXLINE( 331)				r->push(this->open(((path + HX_("/",2f,00,00,00)) + f),false));
            			}
            		}
HXLINE( 332)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalFileSystem_obj,dir,return )

bool LocalFileSystem_obj::isWindows;

int LocalFileSystem_obj::FILES_CHECK_MAX;


::hx::ObjectPtr< LocalFileSystem_obj > LocalFileSystem_obj::__new(::String dir,::String configuration) {
	::hx::ObjectPtr< LocalFileSystem_obj > __this = new LocalFileSystem_obj();
	__this->__construct(dir,configuration);
	return __this;
}

::hx::ObjectPtr< LocalFileSystem_obj > LocalFileSystem_obj::__alloc(::hx::Ctx *_hx_ctx,::String dir,::String configuration) {
	LocalFileSystem_obj *__this = (LocalFileSystem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocalFileSystem_obj), true, "hxd.fs.LocalFileSystem"));
	*(void **)__this = LocalFileSystem_obj::_hx_vtable;
	__this->__construct(dir,configuration);
	return __this;
}

LocalFileSystem_obj::LocalFileSystem_obj()
{
}

void LocalFileSystem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocalFileSystem);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(fileCache,"fileCache");
	HX_MARK_MEMBER_NAME(baseDir,"baseDir");
	HX_MARK_MEMBER_NAME(convert,"convert");
	HX_MARK_MEMBER_NAME(directoryCache,"directoryCache");
	HX_MARK_END_CLASS();
}

void LocalFileSystem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(fileCache,"fileCache");
	HX_VISIT_MEMBER_NAME(baseDir,"baseDir");
	HX_VISIT_MEMBER_NAME(convert,"convert");
	HX_VISIT_MEMBER_NAME(directoryCache,"directoryCache");
}

::hx::Val LocalFileSystem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"dir") ) { return ::hx::Val( dir_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return ::hx::Val( root ); }
		if (HX_FIELD_EQ(inName,"open") ) { return ::hx::Val( open_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"baseDir") ) { return ::hx::Val( baseDir ); }
		if (HX_FIELD_EQ(inName,"convert") ) { return ::hx::Val( convert ); }
		if (HX_FIELD_EQ(inName,"getRoot") ) { return ::hx::Val( getRoot_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fileCache") ) { return ::hx::Val( fileCache ); }
		if (HX_FIELD_EQ(inName,"checkPath") ) { return ::hx::Val( checkPath_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return ::hx::Val( clearCache_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"directoryCache") ) { return ::hx::Val( directoryCache ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getAbsolutePath") ) { return ::hx::Val( getAbsolutePath_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LocalFileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { outValue = ( isWindows ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FILES_CHECK_MAX") ) { outValue = ( FILES_CHECK_MAX ); return true; }
	}
	return false;
}

::hx::Val LocalFileSystem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast<  ::hxd::fs::FileEntry >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"baseDir") ) { baseDir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"convert") ) { convert=inValue.Cast<  ::hxd::fs::FileConverter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fileCache") ) { fileCache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"directoryCache") ) { directoryCache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LocalFileSystem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { isWindows=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FILES_CHECK_MAX") ) { FILES_CHECK_MAX=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void LocalFileSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("root",22,ee,ae,4b));
	outFields->push(HX_("fileCache",26,3a,3c,43));
	outFields->push(HX_("baseDir",bc,ad,e0,2d));
	outFields->push(HX_("convert",f3,fd,c9,1a));
	outFields->push(HX_("directoryCache",95,2c,b6,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LocalFileSystem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::fs::FileEntry */ ,(int)offsetof(LocalFileSystem_obj,root),HX_("root",22,ee,ae,4b)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LocalFileSystem_obj,fileCache),HX_("fileCache",26,3a,3c,43)},
	{::hx::fsString,(int)offsetof(LocalFileSystem_obj,baseDir),HX_("baseDir",bc,ad,e0,2d)},
	{::hx::fsObject /*  ::hxd::fs::FileConverter */ ,(int)offsetof(LocalFileSystem_obj,convert),HX_("convert",f3,fd,c9,1a)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LocalFileSystem_obj,directoryCache),HX_("directoryCache",95,2c,b6,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LocalFileSystem_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &LocalFileSystem_obj::isWindows,HX_("isWindows",b9,5b,73,ec)},
	{::hx::fsInt,(void *) &LocalFileSystem_obj::FILES_CHECK_MAX,HX_("FILES_CHECK_MAX",05,b5,5b,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LocalFileSystem_obj_sMemberFields[] = {
	HX_("root",22,ee,ae,4b),
	HX_("fileCache",26,3a,3c,43),
	HX_("baseDir",bc,ad,e0,2d),
	HX_("convert",f3,fd,c9,1a),
	HX_("getAbsolutePath",72,3d,59,1a),
	HX_("getRoot",d8,9d,31,1e),
	HX_("directoryCache",95,2c,b6,3f),
	HX_("checkPath",8d,ae,31,9e),
	HX_("open",ca,03,b4,49),
	HX_("clearCache",75,d9,1e,16),
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("dispose",9f,80,4c,bb),
	HX_("dir",4d,3d,4c,00),
	::String(null()) };

static void LocalFileSystem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LocalFileSystem_obj::isWindows,"isWindows");
	HX_MARK_MEMBER_NAME(LocalFileSystem_obj::FILES_CHECK_MAX,"FILES_CHECK_MAX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LocalFileSystem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LocalFileSystem_obj::isWindows,"isWindows");
	HX_VISIT_MEMBER_NAME(LocalFileSystem_obj::FILES_CHECK_MAX,"FILES_CHECK_MAX");
};

#endif

::hx::Class LocalFileSystem_obj::__mClass;

static ::String LocalFileSystem_obj_sStaticFields[] = {
	HX_("isWindows",b9,5b,73,ec),
	HX_("FILES_CHECK_MAX",05,b5,5b,8a),
	::String(null())
};

void LocalFileSystem_obj::__register()
{
	LocalFileSystem_obj _hx_dummy;
	LocalFileSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.LocalFileSystem",6f,e3,90,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LocalFileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &LocalFileSystem_obj::__SetStatic;
	__mClass->mMarkFunc = LocalFileSystem_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LocalFileSystem_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocalFileSystem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocalFileSystem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LocalFileSystem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocalFileSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocalFileSystem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LocalFileSystem_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f968858aa6dabf27_220_boot)
HXDLIN( 220)		isWindows = (::Sys_obj::systemName() == HX_("Windows",63,06,c6,b5));
            	}
{
            	HX_STACKFRAME(&_hx_pos_f968858aa6dabf27_221_boot)
HXDLIN( 221)		FILES_CHECK_MAX = 5;
            	}
}

} // end namespace hxd
} // end namespace fs
