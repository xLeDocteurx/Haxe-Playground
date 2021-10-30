#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_FileSystem
#include <hxd/fs/FileSystem.h>
#endif
#ifndef INCLUDED_hxd_res_Any
#include <hxd/res/Any.h>
#endif
#ifndef INCLUDED_hxd_res_Loader
#include <hxd/res/Loader.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eae18316dbde6418_14_new,"hxd.res.Loader","new",0xf1bd5acd,"hxd.res.Loader.new","hxd/res/Loader.hx",14,0x50648881)
HX_LOCAL_STACK_FRAME(_hx_pos_eae18316dbde6418_20_cleanCache,"hxd.res.Loader","cleanCache",0x0667b52c,"hxd.res.Loader.cleanCache","hxd/res/Loader.hx",20,0x50648881)
HX_LOCAL_STACK_FRAME(_hx_pos_eae18316dbde6418_23_dir,"hxd.res.Loader","dir",0xf1b5c7ba,"hxd.res.Loader.dir","hxd/res/Loader.hx",23,0x50648881)
HX_LOCAL_STACK_FRAME(_hx_pos_eae18316dbde6418_32_exists,"hxd.res.Loader","exists",0x5595158f,"hxd.res.Loader.exists","hxd/res/Loader.hx",32,0x50648881)
HX_LOCAL_STACK_FRAME(_hx_pos_eae18316dbde6418_36_load,"hxd.res.Loader","load",0x92a72f19,"hxd.res.Loader.load","hxd/res/Loader.hx",36,0x50648881)
HX_LOCAL_STACK_FRAME(_hx_pos_eae18316dbde6418_39_loadCache,"hxd.res.Loader","loadCache",0x091c8069,"hxd.res.Loader.loadCache","hxd/res/Loader.hx",39,0x50648881)
HX_LOCAL_STACK_FRAME(_hx_pos_eae18316dbde6418_55_dispose,"hxd.res.Loader","dispose",0x23f0458c,"hxd.res.Loader.dispose","hxd/res/Loader.hx",55,0x50648881)
namespace hxd{
namespace res{

void Loader_obj::__construct(::Dynamic fs){
            	HX_GC_STACKFRAME(&_hx_pos_eae18316dbde6418_14_new)
HXLINE(  15)		this->fs = fs;
HXLINE(  16)		this->cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic Loader_obj::__CreateEmpty() { return new Loader_obj; }

void *Loader_obj::_hx_vtable = 0;

Dynamic Loader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Loader_obj > _hx_result = new Loader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Loader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4742d87f;
}

void Loader_obj::cleanCache(){
            	HX_GC_STACKFRAME(&_hx_pos_eae18316dbde6418_20_cleanCache)
HXDLIN(  20)		this->cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,cleanCache,(void))

::Array< ::Dynamic> Loader_obj::dir(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_eae18316dbde6418_23_dir)
HXLINE(  24)		::Array< ::Dynamic> r = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		::Array< ::Dynamic> entries = ::hxd::fs::FileSystem_obj::dir(this->fs,path);
HXLINE(  26)		{
HXLINE(  26)			int _g = 0;
HXDLIN(  26)			while((_g < entries->length)){
HXLINE(  26)				 ::hxd::fs::FileEntry e = entries->__get(_g).StaticCast<  ::hxd::fs::FileEntry >();
HXDLIN(  26)				_g = (_g + 1);
HXLINE(  27)				r->push( ::hxd::res::Any_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),e));
            			}
            		}
HXLINE(  28)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,dir,return )

bool Loader_obj::exists(::String path){
            	HX_STACKFRAME(&_hx_pos_eae18316dbde6418_32_exists)
HXDLIN(  32)		return ::hxd::fs::FileSystem_obj::exists(this->fs,path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,exists,return )

 ::hxd::res::Any Loader_obj::load(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_eae18316dbde6418_36_load)
HXDLIN(  36)		return  ::hxd::res::Any_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),::hxd::fs::FileSystem_obj::get(this->fs,path));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,load,return )

 ::Dynamic Loader_obj::loadCache(::String path,::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_eae18316dbde6418_39_loadCache)
HXLINE(  40)		 ::Dynamic res = this->cache->get(path);
HXLINE(  41)		if (::hx::IsNull( res )) {
HXLINE(  42)			 ::hxd::fs::FileEntry entry = ::hxd::fs::FileSystem_obj::get(this->fs,path);
HXLINE(  43)			 ::hxd::res::Loader old = ::hxd::res::Loader_obj::currentInstance;
HXLINE(  44)			::hxd::res::Loader_obj::currentInstance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  45)			res = ::Type_obj::createInstance(c,::cpp::VirtualArray_obj::__new(1)->init(0,entry));
HXLINE(  46)			::hxd::res::Loader_obj::currentInstance = old;
HXLINE(  47)			this->cache->set(path,res);
            		}
            		else {
HXLINE(  49)			if (::hx::IsNull( ::Std_obj::downcast(res,c) )) {
HXLINE(  50)				::String _hx_tmp = (((path + HX_(" has been reintrepreted from ",a7,b5,f0,8a)) + ::Std_obj::string(::Type_obj::getClass(res))) + HX_(" to ",25,3a,7f,15));
HXDLIN(  50)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(c))));
            			}
            		}
HXLINE(  52)		return res;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadCache,return )

void Loader_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_eae18316dbde6418_55_dispose)
HXLINE(  56)		this->cleanCache();
HXLINE(  57)		::hxd::fs::FileSystem_obj::dispose(this->fs);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,dispose,(void))

 ::hxd::res::Loader Loader_obj::currentInstance;


::hx::ObjectPtr< Loader_obj > Loader_obj::__new(::Dynamic fs) {
	::hx::ObjectPtr< Loader_obj > __this = new Loader_obj();
	__this->__construct(fs);
	return __this;
}

::hx::ObjectPtr< Loader_obj > Loader_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic fs) {
	Loader_obj *__this = (Loader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Loader_obj), true, "hxd.res.Loader"));
	*(void **)__this = Loader_obj::_hx_vtable;
	__this->__construct(fs);
	return __this;
}

Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(fs,"fs");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fs,"fs");
	HX_VISIT_MEMBER_NAME(cache,"cache");
}

::hx::Val Loader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fs") ) { return ::hx::Val( fs ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return ::hx::Val( dir_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadCache") ) { return ::hx::Val( loadCache_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cleanCache") ) { return ::hx::Val( cleanCache_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Loader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"currentInstance") ) { outValue = ( currentInstance ); return true; }
	}
	return false;
}

::hx::Val Loader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fs") ) { fs=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Loader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"currentInstance") ) { currentInstance=ioValue.Cast<  ::hxd::res::Loader >(); return true; }
	}
	return false;
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fs",4d,59,00,00));
	outFields->push(HX_("cache",42,9a,14,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Loader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Loader_obj,fs),HX_("fs",4d,59,00,00)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Loader_obj,cache),HX_("cache",42,9a,14,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Loader_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::res::Loader */ ,(void *) &Loader_obj::currentInstance,HX_("currentInstance",ee,d8,32,2e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Loader_obj_sMemberFields[] = {
	HX_("fs",4d,59,00,00),
	HX_("cache",42,9a,14,41),
	HX_("cleanCache",f9,67,b1,7c),
	HX_("dir",4d,3d,4c,00),
	HX_("exists",dc,1d,e0,bf),
	HX_("load",26,9a,b7,47),
	HX_("loadCache",3c,e6,4b,5c),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

static void Loader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::currentInstance,"currentInstance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Loader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::currentInstance,"currentInstance");
};

#endif

::hx::Class Loader_obj::__mClass;

static ::String Loader_obj_sStaticFields[] = {
	HX_("currentInstance",ee,d8,32,2e),
	::String(null())
};

void Loader_obj::__register()
{
	Loader_obj _hx_dummy;
	Loader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res.Loader",5b,f0,52,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Loader_obj::__GetStatic;
	__mClass->mSetStaticField = &Loader_obj::__SetStatic;
	__mClass->mMarkFunc = Loader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Loader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Loader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Loader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Loader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Loader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Loader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace res
