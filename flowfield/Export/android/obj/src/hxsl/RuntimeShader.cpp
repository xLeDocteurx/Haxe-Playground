#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShaderData
#include <hxsl/RuntimeShaderData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b579d6869f4b730f_90_new,"hxsl.RuntimeShader","new",0x37fbfb6a,"hxsl.RuntimeShader.new","hxsl/RuntimeShader.hx",90,0xe95fb147)
HX_LOCAL_STACK_FRAME(_hx_pos_b579d6869f4b730f_94_hasGlobal,"hxsl.RuntimeShader","hasGlobal",0x090bf2e7,"hxsl.RuntimeShader.hasGlobal","hxsl/RuntimeShader.hx",94,0xe95fb147)
HX_LOCAL_STACK_FRAME(_hx_pos_b579d6869f4b730f_75_boot,"hxsl.RuntimeShader","boot",0xbc9901e8,"hxsl.RuntimeShader.boot","hxsl/RuntimeShader.hx",75,0xe95fb147)
namespace hxsl{

void RuntimeShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b579d6869f4b730f_90_new)
HXDLIN(  90)		this->id = ::hxsl::RuntimeShader_obj::UID++;
            	}

Dynamic RuntimeShader_obj::__CreateEmpty() { return new RuntimeShader_obj; }

void *RuntimeShader_obj::_hx_vtable = 0;

Dynamic RuntimeShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RuntimeShader_obj > _hx_result = new RuntimeShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RuntimeShader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x568be6f4;
}

bool RuntimeShader_obj::hasGlobal(int gid){
            	HX_STACKFRAME(&_hx_pos_b579d6869f4b730f_94_hasGlobal)
HXDLIN(  94)		return this->globals->exists(gid);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RuntimeShader_obj,hasGlobal,return )

int RuntimeShader_obj::UID;


::hx::ObjectPtr< RuntimeShader_obj > RuntimeShader_obj::__new() {
	::hx::ObjectPtr< RuntimeShader_obj > __this = new RuntimeShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RuntimeShader_obj > RuntimeShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RuntimeShader_obj *__this = (RuntimeShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RuntimeShader_obj), true, "hxsl.RuntimeShader"));
	*(void **)__this = RuntimeShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RuntimeShader_obj::RuntimeShader_obj()
{
}

void RuntimeShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RuntimeShader);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(vertex,"vertex");
	HX_MARK_MEMBER_NAME(fragment,"fragment");
	HX_MARK_MEMBER_NAME(globals,"globals");
	HX_MARK_MEMBER_NAME(signature,"signature");
	HX_MARK_MEMBER_NAME(batchMode,"batchMode");
	HX_MARK_MEMBER_NAME(spec,"spec");
	HX_MARK_END_CLASS();
}

void RuntimeShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(vertex,"vertex");
	HX_VISIT_MEMBER_NAME(fragment,"fragment");
	HX_VISIT_MEMBER_NAME(globals,"globals");
	HX_VISIT_MEMBER_NAME(signature,"signature");
	HX_VISIT_MEMBER_NAME(batchMode,"batchMode");
	HX_VISIT_MEMBER_NAME(spec,"spec");
}

::hx::Val RuntimeShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"spec") ) { return ::hx::Val( spec ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { return ::hx::Val( vertex ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { return ::hx::Val( globals ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragment") ) { return ::hx::Val( fragment ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"signature") ) { return ::hx::Val( signature ); }
		if (HX_FIELD_EQ(inName,"batchMode") ) { return ::hx::Val( batchMode ); }
		if (HX_FIELD_EQ(inName,"hasGlobal") ) { return ::hx::Val( hasGlobal_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool RuntimeShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { outValue = ( UID ); return true; }
	}
	return false;
}

::hx::Val RuntimeShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"spec") ) { spec=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { vertex=inValue.Cast<  ::hxsl::RuntimeShaderData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { globals=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragment") ) { fragment=inValue.Cast<  ::hxsl::RuntimeShaderData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"signature") ) { signature=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batchMode") ) { batchMode=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RuntimeShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { UID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void RuntimeShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("vertex",64,db,47,a1));
	outFields->push(HX_("fragment",d0,5f,e5,ad));
	outFields->push(HX_("globals",b0,05,39,14));
	outFields->push(HX_("signature",f8,a2,6b,15));
	outFields->push(HX_("batchMode",3d,4c,7c,ee));
	outFields->push(HX_("spec",3b,de,58,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RuntimeShader_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(RuntimeShader_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::hxsl::RuntimeShaderData */ ,(int)offsetof(RuntimeShader_obj,vertex),HX_("vertex",64,db,47,a1)},
	{::hx::fsObject /*  ::hxsl::RuntimeShaderData */ ,(int)offsetof(RuntimeShader_obj,fragment),HX_("fragment",d0,5f,e5,ad)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(RuntimeShader_obj,globals),HX_("globals",b0,05,39,14)},
	{::hx::fsString,(int)offsetof(RuntimeShader_obj,signature),HX_("signature",f8,a2,6b,15)},
	{::hx::fsBool,(int)offsetof(RuntimeShader_obj,batchMode),HX_("batchMode",3d,4c,7c,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(RuntimeShader_obj,spec),HX_("spec",3b,de,58,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo RuntimeShader_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &RuntimeShader_obj::UID,HX_("UID",70,bf,40,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String RuntimeShader_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("vertex",64,db,47,a1),
	HX_("fragment",d0,5f,e5,ad),
	HX_("globals",b0,05,39,14),
	HX_("signature",f8,a2,6b,15),
	HX_("batchMode",3d,4c,7c,ee),
	HX_("spec",3b,de,58,4c),
	HX_("hasGlobal",5d,e4,9a,e8),
	::String(null()) };

static void RuntimeShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RuntimeShader_obj::UID,"UID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RuntimeShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RuntimeShader_obj::UID,"UID");
};

#endif

::hx::Class RuntimeShader_obj::__mClass;

static ::String RuntimeShader_obj_sStaticFields[] = {
	HX_("UID",70,bf,40,00),
	::String(null())
};

void RuntimeShader_obj::__register()
{
	RuntimeShader_obj _hx_dummy;
	RuntimeShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.RuntimeShader",78,be,73,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RuntimeShader_obj::__GetStatic;
	__mClass->mSetStaticField = &RuntimeShader_obj::__SetStatic;
	__mClass->mMarkFunc = RuntimeShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RuntimeShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RuntimeShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RuntimeShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RuntimeShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RuntimeShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RuntimeShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RuntimeShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b579d6869f4b730f_75_boot)
HXDLIN(  75)		UID = 0;
            	}
}

} // end namespace hxsl
