#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_BitmapData
#include <hxd/BitmapData.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_hxd_fs_FileEntry
#include <hxd/impl/ArrayIterator_hxd_fs_FileEntry.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_14_getSign,"hxd.fs.FileEntry","getSign",0x61e51bb4,"hxd.fs.FileEntry.getSign","hxd/fs/FileEntry.hx",14,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_16_getBytes,"hxd.fs.FileEntry","getBytes",0x87608514,"hxd.fs.FileEntry.getBytes","hxd/fs/FileEntry.hx",16,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_18_getText,"hxd.fs.FileEntry","getText",0x628b5824,"hxd.fs.FileEntry.getText","hxd/fs/FileEntry.hx",18,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_20_open,"hxd.fs.FileEntry","open",0x5b42b569,"hxd.fs.FileEntry.open","hxd/fs/FileEntry.hx",20,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_21_skip,"hxd.fs.FileEntry","skip",0x5de3c81e,"hxd.fs.FileEntry.skip","hxd/fs/FileEntry.hx",21,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_22_readByte,"hxd.fs.FileEntry","readByte",0xd30c669d,"hxd.fs.FileEntry.readByte","hxd/fs/FileEntry.hx",22,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_23_read,"hxd.fs.FileEntry","read",0x5d35fcf5,"hxd.fs.FileEntry.read","hxd/fs/FileEntry.hx",23,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_24_close,"hxd.fs.FileEntry","close",0x93afd139,"hxd.fs.FileEntry.close","hxd/fs/FileEntry.hx",24,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_26_load,"hxd.fs.FileEntry","load",0x59464bc5,"hxd.fs.FileEntry.load","hxd/fs/FileEntry.hx",26,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_27_loadBitmap,"hxd.fs.FileEntry","loadBitmap",0x81357194,"hxd.fs.FileEntry.loadBitmap","hxd/fs/FileEntry.hx",27,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_28_watch,"hxd.fs.FileEntry","watch",0x1071cfd0,"hxd.fs.FileEntry.watch","hxd/fs/FileEntry.hx",28,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_29_exists,"hxd.fs.FileEntry","exists",0x57b5b53b,"hxd.fs.FileEntry.exists","hxd/fs/FileEntry.hx",29,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_30_get,"hxd.fs.FileEntry","get",0xddf227d7,"hxd.fs.FileEntry.get","hxd/fs/FileEntry.hx",30,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_32_iterator,"hxd.fs.FileEntry","iterator",0xfd8bb70d,"hxd.fs.FileEntry.iterator","hxd/fs/FileEntry.hx",32,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_34_get_isAvailable,"hxd.fs.FileEntry","get_isAvailable",0xa4c7ccd7,"hxd.fs.FileEntry.get_isAvailable","hxd/fs/FileEntry.hx",34,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_35_get_isDirectory,"hxd.fs.FileEntry","get_isDirectory",0x3d89657b,"hxd.fs.FileEntry.get_isDirectory","hxd/fs/FileEntry.hx",35,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_36_get_size,"hxd.fs.FileEntry","get_size",0x35ffc969,"hxd.fs.FileEntry.get_size","hxd/fs/FileEntry.hx",36,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_37_get_path,"hxd.fs.FileEntry","get_path",0x33fe0e4d,"hxd.fs.FileEntry.get_path","hxd/fs/FileEntry.hx",37,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_39_get_directory,"hxd.fs.FileEntry","get_directory",0x097c68c5,"hxd.fs.FileEntry.get_directory","hxd/fs/FileEntry.hx",39,0xcff1bd8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2613f45f00d2d838_45_get_extension,"hxd.fs.FileEntry","get_extension",0xde4809d7,"hxd.fs.FileEntry.get_extension","hxd/fs/FileEntry.hx",45,0xcff1bd8f)
namespace hxd{
namespace fs{

void FileEntry_obj::__construct() { }

Dynamic FileEntry_obj::__CreateEmpty() { return new FileEntry_obj; }

void *FileEntry_obj::_hx_vtable = 0;

Dynamic FileEntry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileEntry_obj > _hx_result = new FileEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FileEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09333075;
}

int FileEntry_obj::getSign(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_14_getSign)
HXDLIN(  14)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,getSign,return )

 ::haxe::io::Bytes FileEntry_obj::getBytes(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_16_getBytes)
HXDLIN(  16)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,getBytes,return )

::String FileEntry_obj::getText(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_18_getText)
HXDLIN(  18)		return this->getBytes()->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,getText,return )

void FileEntry_obj::open(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_20_open)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,open,(void))

void FileEntry_obj::skip(int nbytes){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_21_skip)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileEntry_obj,skip,(void))

int FileEntry_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_22_readByte)
HXDLIN(  22)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,readByte,return )

void FileEntry_obj::read( ::haxe::io::Bytes out,int pos,int size){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_23_read)
            	}


HX_DEFINE_DYNAMIC_FUNC3(FileEntry_obj,read,(void))

void FileEntry_obj::close(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_24_close)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,close,(void))

void FileEntry_obj::load( ::Dynamic onReady){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_26_load)
HXDLIN(  26)		if (!(this->get_isAvailable())) {
HXDLIN(  26)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("load() not implemented",bc,4a,ec,b1)));
            		}
            		else {
HXDLIN(  26)			if (::hx::IsNotNull( onReady )) {
HXDLIN(  26)				onReady();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileEntry_obj,load,(void))

void FileEntry_obj::loadBitmap( ::Dynamic onLoaded){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_27_loadBitmap)
HXDLIN(  27)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("loadBitmap() not implemented",0b,3f,73,cf)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileEntry_obj,loadBitmap,(void))

void FileEntry_obj::watch( ::Dynamic onChanged){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_28_watch)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileEntry_obj,watch,(void))

bool FileEntry_obj::exists(::String name){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_29_exists)
HXDLIN(  29)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileEntry_obj,exists,return )

 ::hxd::fs::FileEntry FileEntry_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_30_get)
HXDLIN(  30)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileEntry_obj,get,return )

 ::hxd::impl::ArrayIterator_hxd_fs_FileEntry FileEntry_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_32_iterator)
HXDLIN(  32)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,iterator,return )

bool FileEntry_obj::get_isAvailable(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_34_get_isAvailable)
HXDLIN(  34)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,get_isAvailable,return )

bool FileEntry_obj::get_isDirectory(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_35_get_isDirectory)
HXDLIN(  35)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,get_isDirectory,return )

int FileEntry_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_36_get_size)
HXDLIN(  36)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,get_size,return )

::String FileEntry_obj::get_path(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_37_get_path)
HXDLIN(  37)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("path() not implemented",fb,61,72,b9)));
HXDLIN(  37)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,get_path,return )

::String FileEntry_obj::get_directory(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_39_get_directory)
HXLINE(  40)		int idx = this->get_path().lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE(  41)		if ((idx < 0)) {
HXLINE(  41)			return HX_("",00,00,00,00);
            		}
HXLINE(  42)		return this->get_path().substr(0,idx);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,get_directory,return )

::String FileEntry_obj::get_extension(){
            	HX_STACKFRAME(&_hx_pos_2613f45f00d2d838_45_get_extension)
HXLINE(  46)		int idx = this->name.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE(  47)		if ((idx < 0)) {
HXLINE(  47)			return HX_("",00,00,00,00);
            		}
HXLINE(  48)		return this->name.substr((idx + 1),null()).toLowerCase();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileEntry_obj,get_extension,return )


FileEntry_obj::FileEntry_obj()
{
}

void FileEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileEntry);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void FileEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
}

::hx::Val FileEntry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_path() ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"open") ) { return ::hx::Val( open_dyn() ); }
		if (HX_FIELD_EQ(inName,"skip") ) { return ::hx::Val( skip_dyn() ); }
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"watch") ) { return ::hx::Val( watch_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getSign") ) { return ::hx::Val( getSign_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_path") ) { return ::hx::Val( get_path_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_directory() ); }
		if (HX_FIELD_EQ(inName,"extension") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_extension() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadBitmap") ) { return ::hx::Val( loadBitmap_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDirectory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isDirectory() ); }
		if (HX_FIELD_EQ(inName,"isAvailable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isAvailable() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_directory") ) { return ::hx::Val( get_directory_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_extension") ) { return ::hx::Val( get_extension_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isAvailable") ) { return ::hx::Val( get_isAvailable_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isDirectory") ) { return ::hx::Val( get_isDirectory_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FileEntry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("directory",6d,f2,44,10));
	outFields->push(HX_("extension",7f,93,10,e5));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("isDirectory",23,a9,c5,ee));
	outFields->push(HX_("isAvailable",7f,10,04,56));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FileEntry_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FileEntry_obj,name),HX_("name",4b,72,ff,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FileEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String FileEntry_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("getSign",f3,3f,d6,1e),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getText",63,7c,7c,1f),
	HX_("open",ca,03,b4,49),
	HX_("skip",7f,16,55,4c),
	HX_("readByte",7e,f9,1a,69),
	HX_("read",56,4b,a7,4b),
	HX_("close",b8,17,63,48),
	HX_("load",26,9a,b7,47),
	HX_("loadBitmap",b5,3e,37,a6),
	HX_("watch",4f,16,25,c5),
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("iterator",ee,49,9a,93),
	HX_("get_isAvailable",16,c8,e5,16),
	HX_("get_isDirectory",ba,60,a7,af),
	HX_("get_size",4a,5c,0e,cc),
	HX_("get_path",2e,a1,0c,ca),
	HX_("get_directory",44,c6,a8,d1),
	HX_("get_extension",56,67,74,a6),
	::String(null()) };

::hx::Class FileEntry_obj::__mClass;

void FileEntry_obj::__register()
{
	FileEntry_obj _hx_dummy;
	FileEntry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.FileEntry",2f,13,e1,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileEntry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileEntry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileEntry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fs
