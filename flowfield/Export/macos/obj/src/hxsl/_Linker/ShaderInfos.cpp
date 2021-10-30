#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxsl__Linker_ShaderInfos
#include <hxsl/_Linker/ShaderInfos.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4bb2dfbfcc453cd5_32_new,"hxsl._Linker.ShaderInfos","new",0x3a404025,"hxsl._Linker.ShaderInfos.new","hxsl/Linker.hx",32,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_4bb2dfbfcc453cd5_18_boot,"hxsl._Linker.ShaderInfos","boot",0xb610e0cd,"hxsl._Linker.ShaderInfos.boot","hxsl/Linker.hx",18,0x2bdefcf1)
namespace hxsl{
namespace _Linker{

void ShaderInfos_obj::__construct(::String n, ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_4bb2dfbfcc453cd5_32_new)
HXLINE(  33)		this->name = n;
HXLINE(  34)		this->uid = ::hxsl::_Linker::ShaderInfos_obj::UID++;
HXLINE(  35)		this->vertex = v;
HXLINE(  36)		this->processed =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  37)		this->usedFunctions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  38)		this->read =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  39)		this->write =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic ShaderInfos_obj::__CreateEmpty() { return new ShaderInfos_obj; }

void *ShaderInfos_obj::_hx_vtable = 0;

Dynamic ShaderInfos_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderInfos_obj > _hx_result = new ShaderInfos_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShaderInfos_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d4c7783;
}

int ShaderInfos_obj::UID;


::hx::ObjectPtr< ShaderInfos_obj > ShaderInfos_obj::__new(::String n, ::Dynamic v) {
	::hx::ObjectPtr< ShaderInfos_obj > __this = new ShaderInfos_obj();
	__this->__construct(n,v);
	return __this;
}

::hx::ObjectPtr< ShaderInfos_obj > ShaderInfos_obj::__alloc(::hx::Ctx *_hx_ctx,::String n, ::Dynamic v) {
	ShaderInfos_obj *__this = (ShaderInfos_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderInfos_obj), true, "hxsl._Linker.ShaderInfos"));
	*(void **)__this = ShaderInfos_obj::_hx_vtable;
	__this->__construct(n,v);
	return __this;
}

ShaderInfos_obj::ShaderInfos_obj()
{
}

void ShaderInfos_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderInfos);
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(usedFunctions,"usedFunctions");
	HX_MARK_MEMBER_NAME(deps,"deps");
	HX_MARK_MEMBER_NAME(read,"read");
	HX_MARK_MEMBER_NAME(write,"write");
	HX_MARK_MEMBER_NAME(processed,"processed");
	HX_MARK_MEMBER_NAME(vertex,"vertex");
	HX_MARK_MEMBER_NAME(onStack,"onStack");
	HX_MARK_MEMBER_NAME(hasDiscard,"hasDiscard");
	HX_MARK_MEMBER_NAME(marked,"marked");
	HX_MARK_END_CLASS();
}

void ShaderInfos_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(usedFunctions,"usedFunctions");
	HX_VISIT_MEMBER_NAME(deps,"deps");
	HX_VISIT_MEMBER_NAME(read,"read");
	HX_VISIT_MEMBER_NAME(write,"write");
	HX_VISIT_MEMBER_NAME(processed,"processed");
	HX_VISIT_MEMBER_NAME(vertex,"vertex");
	HX_VISIT_MEMBER_NAME(onStack,"onStack");
	HX_VISIT_MEMBER_NAME(hasDiscard,"hasDiscard");
	HX_VISIT_MEMBER_NAME(marked,"marked");
}

::hx::Val ShaderInfos_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uid") ) { return ::hx::Val( uid ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"body") ) { return ::hx::Val( body ); }
		if (HX_FIELD_EQ(inName,"deps") ) { return ::hx::Val( deps ); }
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { return ::hx::Val( vertex ); }
		if (HX_FIELD_EQ(inName,"marked") ) { return ::hx::Val( marked ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStack") ) { return ::hx::Val( onStack ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return ::hx::Val( priority ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"processed") ) { return ::hx::Val( processed ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasDiscard") ) { return ::hx::Val( hasDiscard ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"usedFunctions") ) { return ::hx::Val( usedFunctions ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShaderInfos_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { outValue = ( UID ); return true; }
	}
	return false;
}

::hx::Val ShaderInfos_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"deps") ) { deps=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"read") ) { read=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { write=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { vertex=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marked") ) { marked=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStack") ) { onStack=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"processed") ) { processed=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasDiscard") ) { hasDiscard=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"usedFunctions") ) { usedFunctions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ShaderInfos_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { UID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ShaderInfos_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("uid",90,23,59,00));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("priority",64,7b,3e,bb));
	outFields->push(HX_("body",a2,7a,1b,41));
	outFields->push(HX_("usedFunctions",5e,a8,a4,b4));
	outFields->push(HX_("deps",c4,5b,66,42));
	outFields->push(HX_("read",56,4b,a7,4b));
	outFields->push(HX_("write",df,6c,59,d0));
	outFields->push(HX_("processed",8e,b4,0b,d3));
	outFields->push(HX_("vertex",64,db,47,a1));
	outFields->push(HX_("onStack",a9,05,49,1a));
	outFields->push(HX_("hasDiscard",e4,01,5e,3d));
	outFields->push(HX_("marked",ac,75,70,ba));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderInfos_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ShaderInfos_obj,uid),HX_("uid",90,23,59,00)},
	{::hx::fsString,(int)offsetof(ShaderInfos_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(ShaderInfos_obj,priority),HX_("priority",64,7b,3e,bb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderInfos_obj,body),HX_("body",a2,7a,1b,41)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderInfos_obj,usedFunctions),HX_("usedFunctions",5e,a8,a4,b4)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(ShaderInfos_obj,deps),HX_("deps",c4,5b,66,42)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(ShaderInfos_obj,read),HX_("read",56,4b,a7,4b)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(ShaderInfos_obj,write),HX_("write",df,6c,59,d0)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(ShaderInfos_obj,processed),HX_("processed",8e,b4,0b,d3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderInfos_obj,vertex),HX_("vertex",64,db,47,a1)},
	{::hx::fsBool,(int)offsetof(ShaderInfos_obj,onStack),HX_("onStack",a9,05,49,1a)},
	{::hx::fsBool,(int)offsetof(ShaderInfos_obj,hasDiscard),HX_("hasDiscard",e4,01,5e,3d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderInfos_obj,marked),HX_("marked",ac,75,70,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ShaderInfos_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ShaderInfos_obj::UID,HX_("UID",70,bf,40,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ShaderInfos_obj_sMemberFields[] = {
	HX_("uid",90,23,59,00),
	HX_("name",4b,72,ff,48),
	HX_("priority",64,7b,3e,bb),
	HX_("body",a2,7a,1b,41),
	HX_("usedFunctions",5e,a8,a4,b4),
	HX_("deps",c4,5b,66,42),
	HX_("read",56,4b,a7,4b),
	HX_("write",df,6c,59,d0),
	HX_("processed",8e,b4,0b,d3),
	HX_("vertex",64,db,47,a1),
	HX_("onStack",a9,05,49,1a),
	HX_("hasDiscard",e4,01,5e,3d),
	HX_("marked",ac,75,70,ba),
	::String(null()) };

static void ShaderInfos_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderInfos_obj::UID,"UID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderInfos_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderInfos_obj::UID,"UID");
};

#endif

::hx::Class ShaderInfos_obj::__mClass;

static ::String ShaderInfos_obj_sStaticFields[] = {
	HX_("UID",70,bf,40,00),
	::String(null())
};

void ShaderInfos_obj::__register()
{
	ShaderInfos_obj _hx_dummy;
	ShaderInfos_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl._Linker.ShaderInfos",b3,49,72,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderInfos_obj::__GetStatic;
	__mClass->mSetStaticField = &ShaderInfos_obj::__SetStatic;
	__mClass->mMarkFunc = ShaderInfos_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShaderInfos_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderInfos_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderInfos_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderInfos_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderInfos_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderInfos_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShaderInfos_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4bb2dfbfcc453cd5_18_boot)
HXDLIN(  18)		UID = 0;
            	}
}

} // end namespace hxsl
} // end namespace _Linker
