#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_BitmapData
#include <hxd/BitmapData.h>
#endif
#ifndef INCLUDED_hxd_fs_BytesFileEntry
#include <hxd/fs/BytesFileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_hxd_fs_FileEntry
#include <hxd/impl/ArrayIterator_hxd_fs_FileEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c54cf7988cab6185_11_new,"hxd.fs.BytesFileEntry","new",0x7dee1ee4,"hxd.fs.BytesFileEntry.new","hxd/fs/BytesFileSystem.hx",11,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_18_get_path,"hxd.fs.BytesFileEntry","get_path",0x5b73342a,"hxd.fs.BytesFileEntry.get_path","hxd/fs/BytesFileSystem.hx",18,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_22_getSign,"hxd.fs.BytesFileEntry","getSign",0xb3942077,"hxd.fs.BytesFileEntry.getSign","hxd/fs/BytesFileSystem.hx",22,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_26_getBytes,"hxd.fs.BytesFileEntry","getBytes",0xaed5aaf1,"hxd.fs.BytesFileEntry.getBytes","hxd/fs/BytesFileSystem.hx",26,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_30_open,"hxd.fs.BytesFileEntry","open",0xb31e68c6,"hxd.fs.BytesFileEntry.open","hxd/fs/BytesFileSystem.hx",30,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_34_skip,"hxd.fs.BytesFileEntry","skip",0xb5bf7b7b,"hxd.fs.BytesFileEntry.skip","hxd/fs/BytesFileSystem.hx",34,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_37_readByte,"hxd.fs.BytesFileEntry","readByte",0xfa818c7a,"hxd.fs.BytesFileEntry.readByte","hxd/fs/BytesFileSystem.hx",37,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_40_read,"hxd.fs.BytesFileEntry","read",0xb511b052,"hxd.fs.BytesFileEntry.read","hxd/fs/BytesFileSystem.hx",40,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_45_close,"hxd.fs.BytesFileEntry","close",0x1c110f3c,"hxd.fs.BytesFileEntry.close","hxd/fs/BytesFileSystem.hx",45,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_49_load,"hxd.fs.BytesFileEntry","load",0xb121ff22,"hxd.fs.BytesFileEntry.load","hxd/fs/BytesFileSystem.hx",49,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_75_loadBitmap,"hxd.fs.BytesFileEntry","loadBitmap",0x4ca588b1,"hxd.fs.BytesFileEntry.loadBitmap","hxd/fs/BytesFileSystem.hx",75,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_79_exists,"hxd.fs.BytesFileEntry","exists",0x246ab9d8,"hxd.fs.BytesFileEntry.exists","hxd/fs/BytesFileSystem.hx",79,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_80_get,"hxd.fs.BytesFileEntry","get",0x7de8cf1a,"hxd.fs.BytesFileEntry.get","hxd/fs/BytesFileSystem.hx",80,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_82_iterator,"hxd.fs.BytesFileEntry","iterator",0x2500dcea,"hxd.fs.BytesFileEntry.iterator","hxd/fs/BytesFileSystem.hx",82,0x0e39ae4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c54cf7988cab6185_84_get_size,"hxd.fs.BytesFileEntry","get_size",0x5d74ef46,"hxd.fs.BytesFileEntry.get_size","hxd/fs/BytesFileSystem.hx",84,0x0e39ae4f)
namespace hxd{
namespace fs{

void BytesFileEntry_obj::__construct(::String path, ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_11_new)
HXLINE(  12)		this->fullPath = path;
HXLINE(  13)		this->name = ( (::String)(path.split(HX_("/",2f,00,00,00))->pop()) );
HXLINE(  14)		this->bytes = bytes;
            	}

Dynamic BytesFileEntry_obj::__CreateEmpty() { return new BytesFileEntry_obj; }

void *BytesFileEntry_obj::_hx_vtable = 0;

Dynamic BytesFileEntry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BytesFileEntry_obj > _hx_result = new BytesFileEntry_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BytesFileEntry_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09333075) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09333075;
	} else {
		return inClassId==(int)0x33dc21ec;
	}
}

::String BytesFileEntry_obj::get_path(){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_18_get_path)
HXDLIN(  18)		return this->fullPath;
            	}


int BytesFileEntry_obj::getSign(){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_22_getSign)
HXDLIN(  22)		return (((( (int)(this->bytes->b->__get(0)) ) | (( (int)(this->bytes->b->__get(1)) ) << 8)) | (( (int)(this->bytes->b->__get(2)) ) << 16)) | (( (int)(this->bytes->b->__get(3)) ) << 24));
            	}


 ::haxe::io::Bytes BytesFileEntry_obj::getBytes(){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_26_getBytes)
HXDLIN(  26)		return this->bytes;
            	}


void BytesFileEntry_obj::open(){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_30_open)
HXDLIN(  30)		this->pos = 0;
            	}


void BytesFileEntry_obj::skip(int nbytes){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_34_skip)
HXDLIN(  34)		 ::hxd::fs::BytesFileEntry _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  34)		_hx_tmp->pos = (_hx_tmp->pos + nbytes);
            	}


int BytesFileEntry_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_37_readByte)
HXDLIN(  37)		return ( (int)(this->bytes->b->__get(this->pos++)) );
            	}


void BytesFileEntry_obj::read( ::haxe::io::Bytes out,int pos,int size){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_40_read)
HXLINE(  41)		out->blit(pos,this->bytes,this->pos,size);
HXLINE(  42)		 ::hxd::fs::BytesFileEntry _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  42)		_hx_tmp->pos = (_hx_tmp->pos + size);
            	}


void BytesFileEntry_obj::close(){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_45_close)
            	}


void BytesFileEntry_obj::load( ::Dynamic onReady){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_49_load)
HXDLIN(  49)		::haxe::Timer_obj::delay(onReady,1);
            	}


void BytesFileEntry_obj::loadBitmap( ::Dynamic onLoaded){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_75_loadBitmap)
HXDLIN(  75)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            	}


bool BytesFileEntry_obj::exists(::String name){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_79_exists)
HXDLIN(  79)		return false;
            	}


 ::hxd::fs::FileEntry BytesFileEntry_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_80_get)
HXDLIN(  80)		return null();
            	}


 ::hxd::impl::ArrayIterator_hxd_fs_FileEntry BytesFileEntry_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_c54cf7988cab6185_82_iterator)
HXDLIN(  82)		return  ::hxd::impl::ArrayIterator_hxd_fs_FileEntry_obj::__alloc( HX_CTX ,::Array_obj< ::Dynamic>::__new());
            	}


int BytesFileEntry_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_c54cf7988cab6185_84_get_size)
HXDLIN(  84)		return this->bytes->length;
            	}



::hx::ObjectPtr< BytesFileEntry_obj > BytesFileEntry_obj::__new(::String path, ::haxe::io::Bytes bytes) {
	::hx::ObjectPtr< BytesFileEntry_obj > __this = new BytesFileEntry_obj();
	__this->__construct(path,bytes);
	return __this;
}

::hx::ObjectPtr< BytesFileEntry_obj > BytesFileEntry_obj::__alloc(::hx::Ctx *_hx_ctx,::String path, ::haxe::io::Bytes bytes) {
	BytesFileEntry_obj *__this = (BytesFileEntry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BytesFileEntry_obj), true, "hxd.fs.BytesFileEntry"));
	*(void **)__this = BytesFileEntry_obj::_hx_vtable;
	__this->__construct(path,bytes);
	return __this;
}

BytesFileEntry_obj::BytesFileEntry_obj()
{
}

void BytesFileEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesFileEntry);
	HX_MARK_MEMBER_NAME(fullPath,"fullPath");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(pos,"pos");
	 ::hxd::fs::FileEntry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BytesFileEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fullPath,"fullPath");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	 ::hxd::fs::FileEntry_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BytesFileEntry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return ::hx::Val( open_dyn() ); }
		if (HX_FIELD_EQ(inName,"skip") ) { return ::hx::Val( skip_dyn() ); }
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return ::hx::Val( bytes ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getSign") ) { return ::hx::Val( getSign_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullPath") ) { return ::hx::Val( fullPath ); }
		if (HX_FIELD_EQ(inName,"get_path") ) { return ::hx::Val( get_path_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadBitmap") ) { return ::hx::Val( loadBitmap_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BytesFileEntry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullPath") ) { fullPath=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesFileEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fullPath",d4,6e,65,5e));
	outFields->push(HX_("bytes",6b,08,98,bd));
	outFields->push(HX_("pos",94,5d,55,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BytesFileEntry_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(BytesFileEntry_obj,fullPath),HX_("fullPath",d4,6e,65,5e)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(BytesFileEntry_obj,bytes),HX_("bytes",6b,08,98,bd)},
	{::hx::fsInt,(int)offsetof(BytesFileEntry_obj,pos),HX_("pos",94,5d,55,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BytesFileEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String BytesFileEntry_obj_sMemberFields[] = {
	HX_("fullPath",d4,6e,65,5e),
	HX_("bytes",6b,08,98,bd),
	HX_("pos",94,5d,55,00),
	HX_("get_path",2e,a1,0c,ca),
	HX_("getSign",f3,3f,d6,1e),
	HX_("getBytes",f5,17,6f,1d),
	HX_("open",ca,03,b4,49),
	HX_("skip",7f,16,55,4c),
	HX_("readByte",7e,f9,1a,69),
	HX_("read",56,4b,a7,4b),
	HX_("close",b8,17,63,48),
	HX_("load",26,9a,b7,47),
	HX_("loadBitmap",b5,3e,37,a6),
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("iterator",ee,49,9a,93),
	HX_("get_size",4a,5c,0e,cc),
	::String(null()) };

::hx::Class BytesFileEntry_obj::__mClass;

void BytesFileEntry_obj::__register()
{
	BytesFileEntry_obj _hx_dummy;
	BytesFileEntry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.BytesFileEntry",f2,1c,fc,21);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BytesFileEntry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BytesFileEntry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BytesFileEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BytesFileEntry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fs
