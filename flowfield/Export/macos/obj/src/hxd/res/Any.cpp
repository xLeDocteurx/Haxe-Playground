#include <hxcpp.h>

#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_fs_BytesFileSystem
#include <hxd/fs/BytesFileSystem.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_FileSystem
#include <hxd/fs/FileSystem.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_hxd_fs_FileEntry
#include <hxd/impl/ArrayIterator_hxd_fs_FileEntry.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_hxd_res_Any
#include <hxd/impl/ArrayIterator_hxd_res_Any.h>
#endif
#ifndef INCLUDED_hxd_res_Any
#include <hxd/res/Any.h>
#endif
#ifndef INCLUDED_hxd_res_Image
#include <hxd/res/Image.h>
#endif
#ifndef INCLUDED_hxd_res_Loader
#include <hxd/res/Loader.h>
#endif
#ifndef INCLUDED_hxd_res_Model
#include <hxd/res/Model.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
#ifndef INCLUDED_hxd_res_Sound
#include <hxd/res/Sound.h>
#endif
#ifndef INCLUDED_hxd_res__Any_SingleFileSystem
#include <hxd/res/_Any/SingleFileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_23872685d50b14c5_25_new,"hxd.res.Any","new",0x756b1896,"hxd.res.Any.new","hxd/res/Any.hx",25,0xf2276d9c)
HX_LOCAL_STACK_FRAME(_hx_pos_23872685d50b14c5_31_toModel,"hxd.res.Any","toModel",0x16db0b64,"hxd.res.Any.toModel","hxd/res/Any.hx",31,0xf2276d9c)
HX_LOCAL_STACK_FRAME(_hx_pos_23872685d50b14c5_35_toTexture,"hxd.res.Any","toTexture",0x7db95556,"hxd.res.Any.toTexture","hxd/res/Any.hx",35,0xf2276d9c)
HX_LOCAL_STACK_FRAME(_hx_pos_23872685d50b14c5_39_toTile,"hxd.res.Any","toTile",0xd10d73d3,"hxd.res.Any.toTile","hxd/res/Any.hx",39,0xf2276d9c)
HX_LOCAL_STACK_FRAME(_hx_pos_23872685d50b14c5_43_toText,"hxd.res.Any","toText",0xd10a7552,"hxd.res.Any.toText","hxd/res/Any.hx",43,0xf2276d9c)
HX_LOCAL_STACK_FRAME(_hx_pos_23872685d50b14c5_47_toImage,"hxd.res.Any","toImage",0xc7ec0716,"hxd.res.Any.toImage","hxd/res/Any.hx",47,0xf2276d9c)
HX_LOCAL_STACK_FRAME(_hx_pos_23872685d50b14c5_51_toSound,"hxd.res.Any","toSound",0x8b4f748a,"hxd.res.Any.toSound","hxd/res/Any.hx",51,0xf2276d9c)
HX_LOCAL_STACK_FRAME(_hx_pos_23872685d50b14c5_55_toPrefab,"hxd.res.Any","toPrefab",0xd6beae69,"hxd.res.Any.toPrefab","hxd/res/Any.hx",55,0xf2276d9c)
HX_LOCAL_STACK_FRAME(_hx_pos_23872685d50b14c5_59_to,"hxd.res.Any","to",0x47b39605,"hxd.res.Any.to","hxd/res/Any.hx",59,0xf2276d9c)
HX_LOCAL_STACK_FRAME(_hx_pos_23872685d50b14c5_63_iterator,"hxd.res.Any","iterator",0x94637df8,"hxd.res.Any.iterator","hxd/res/Any.hx",63,0xf2276d9c)
HX_LOCAL_STACK_FRAME(_hx_pos_23872685d50b14c5_66_fromBytes,"hxd.res.Any","fromBytes",0x21654757,"hxd.res.Any.fromBytes","hxd/res/Any.hx",66,0xf2276d9c)
namespace hxd{
namespace res{

void Any_obj::__construct( ::hxd::res::Loader loader, ::hxd::fs::FileEntry entry){
            	HX_STACKFRAME(&_hx_pos_23872685d50b14c5_25_new)
HXLINE(  26)		super::__construct(entry);
HXLINE(  27)		this->loader = loader;
            	}

Dynamic Any_obj::__CreateEmpty() { return new Any_obj; }

void *Any_obj::_hx_vtable = 0;

Dynamic Any_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Any_obj > _hx_result = new Any_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Any_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09c9e03a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09c9e03a;
	} else {
		return inClassId==(int)0x1de72f00;
	}
}

 ::hxd::res::Model Any_obj::toModel(){
            	HX_STACKFRAME(&_hx_pos_23872685d50b14c5_31_toModel)
HXDLIN(  31)		 ::hxd::res::Loader _hx_tmp = this->loader;
HXDLIN(  31)		return _hx_tmp->loadCache(this->entry->get_path(),::hx::ClassOf< ::hxd::res::Model >()).StaticCast<  ::hxd::res::Model >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Any_obj,toModel,return )

 ::h3d::mat::Texture Any_obj::toTexture(){
            	HX_STACKFRAME(&_hx_pos_23872685d50b14c5_35_toTexture)
HXDLIN(  35)		return this->toImage()->toTexture();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Any_obj,toTexture,return )

 ::h2d::Tile Any_obj::toTile(){
            	HX_STACKFRAME(&_hx_pos_23872685d50b14c5_39_toTile)
HXDLIN(  39)		return this->toImage()->toTile();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Any_obj,toTile,return )

::String Any_obj::toText(){
            	HX_STACKFRAME(&_hx_pos_23872685d50b14c5_43_toText)
HXDLIN(  43)		return this->entry->getBytes()->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Any_obj,toText,return )

 ::hxd::res::Image Any_obj::toImage(){
            	HX_STACKFRAME(&_hx_pos_23872685d50b14c5_47_toImage)
HXDLIN(  47)		 ::hxd::res::Loader _hx_tmp = this->loader;
HXDLIN(  47)		return _hx_tmp->loadCache(this->entry->get_path(),::hx::ClassOf< ::hxd::res::Image >()).StaticCast<  ::hxd::res::Image >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Any_obj,toImage,return )

 ::hxd::res::Sound Any_obj::toSound(){
            	HX_STACKFRAME(&_hx_pos_23872685d50b14c5_51_toSound)
HXDLIN(  51)		 ::hxd::res::Loader _hx_tmp = this->loader;
HXDLIN(  51)		return _hx_tmp->loadCache(this->entry->get_path(),::hx::ClassOf< ::hxd::res::Sound >()).StaticCast<  ::hxd::res::Sound >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Any_obj,toSound,return )

 ::hxd::res::Resource Any_obj::toPrefab(){
            	HX_STACKFRAME(&_hx_pos_23872685d50b14c5_55_toPrefab)
HXDLIN(  55)		 ::hxd::res::Loader _hx_tmp = this->loader;
HXDLIN(  55)		return _hx_tmp->loadCache(this->entry->get_path(),::hx::ClassOf< ::hxd::res::Resource >()).StaticCast<  ::hxd::res::Resource >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Any_obj,toPrefab,return )

 ::Dynamic Any_obj::to(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_23872685d50b14c5_59_to)
HXDLIN(  59)		 ::hxd::res::Loader _hx_tmp = this->loader;
HXDLIN(  59)		return _hx_tmp->loadCache(this->entry->get_path(),c);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Any_obj,to,return )

 ::hxd::impl::ArrayIterator_hxd_res_Any Any_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_23872685d50b14c5_63_iterator)
HXDLIN(  63)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  63)		{
HXDLIN(  63)			 ::hxd::impl::ArrayIterator_hxd_fs_FileEntry _g1 = this->entry->iterator();
HXDLIN(  63)			while((_g1->i < _g1->l)){
HXDLIN(  63)				 ::hxd::fs::FileEntry f = _g1->a->__get(_g1->i++).StaticCast<  ::hxd::fs::FileEntry >();
HXDLIN(  63)				_g->push( ::hxd::res::Any_obj::__alloc( HX_CTX ,this->loader,f));
            			}
            		}
HXDLIN(  63)		return  ::hxd::impl::ArrayIterator_hxd_res_Any_obj::__alloc( HX_CTX ,_g);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Any_obj,iterator,return )

 ::hxd::res::Any Any_obj::fromBytes(::String path, ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_23872685d50b14c5_66_fromBytes)
HXLINE(  67)		 ::hxd::res::_Any::SingleFileSystem fs =  ::hxd::res::_Any::SingleFileSystem_obj::__alloc( HX_CTX ,path,bytes);
HXLINE(  68)		return  ::hxd::res::Loader_obj::__alloc( HX_CTX ,fs)->load(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Any_obj,fromBytes,return )


::hx::ObjectPtr< Any_obj > Any_obj::__new( ::hxd::res::Loader loader, ::hxd::fs::FileEntry entry) {
	::hx::ObjectPtr< Any_obj > __this = new Any_obj();
	__this->__construct(loader,entry);
	return __this;
}

::hx::ObjectPtr< Any_obj > Any_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::res::Loader loader, ::hxd::fs::FileEntry entry) {
	Any_obj *__this = (Any_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Any_obj), true, "hxd.res.Any"));
	*(void **)__this = Any_obj::_hx_vtable;
	__this->__construct(loader,entry);
	return __this;
}

Any_obj::Any_obj()
{
}

void Any_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Any);
	HX_MARK_MEMBER_NAME(loader,"loader");
	 ::hxd::res::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Any_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loader,"loader");
	 ::hxd::res::Resource_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Any_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { return ::hx::Val( to_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { return ::hx::Val( loader ); }
		if (HX_FIELD_EQ(inName,"toTile") ) { return ::hx::Val( toTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"toText") ) { return ::hx::Val( toText_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toModel") ) { return ::hx::Val( toModel_dyn() ); }
		if (HX_FIELD_EQ(inName,"toImage") ) { return ::hx::Val( toImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"toSound") ) { return ::hx::Val( toSound_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toPrefab") ) { return ::hx::Val( toPrefab_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toTexture") ) { return ::hx::Val( toTexture_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Any_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
	}
	return false;
}

::hx::Val Any_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast<  ::hxd::res::Loader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Any_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("loader",13,48,6f,58));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Any_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::res::Loader */ ,(int)offsetof(Any_obj,loader),HX_("loader",13,48,6f,58)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Any_obj_sStaticStorageInfo = 0;
#endif

static ::String Any_obj_sMemberFields[] = {
	HX_("loader",13,48,6f,58),
	HX_("toModel",2e,70,dc,d8),
	HX_("toTexture",a0,00,75,ce),
	HX_("toTile",49,36,b6,82),
	HX_("toText",c8,37,b3,82),
	HX_("toImage",e0,6b,ed,89),
	HX_("toSound",54,d9,50,4d),
	HX_("toPrefab",5f,7a,f5,d5),
	HX_("to",7b,65,00,00),
	HX_("iterator",ee,49,9a,93),
	::String(null()) };

::hx::Class Any_obj::__mClass;

static ::String Any_obj_sStaticFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	::String(null())
};

void Any_obj::__register()
{
	Any_obj _hx_dummy;
	Any_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res.Any",a4,d5,e9,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Any_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Any_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Any_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Any_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Any_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Any_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace res
