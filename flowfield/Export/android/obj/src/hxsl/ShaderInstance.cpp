#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxsl_ShaderInstance
#include <hxsl/ShaderInstance.h>
#endif
#ifndef INCLUDED_hxsl_Tools
#include <hxsl/Tools.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7e82ee65ed9c7816_8_new,"hxsl.ShaderInstance","new",0xb3190f91,"hxsl.ShaderInstance.new","hxsl/SharedShader.hx",8,0xe9aca78e)
namespace hxsl{

void ShaderInstance_obj::__construct( ::Dynamic shader){
            	HX_GC_STACKFRAME(&_hx_pos_7e82ee65ed9c7816_8_new)
HXLINE(   9)		this->id = ::hxsl::Tools_obj::allocVarId();
HXLINE(  10)		this->shader = shader;
HXLINE(  11)		this->params =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic ShaderInstance_obj::__CreateEmpty() { return new ShaderInstance_obj; }

void *ShaderInstance_obj::_hx_vtable = 0;

Dynamic ShaderInstance_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderInstance_obj > _hx_result = new ShaderInstance_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ShaderInstance_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x060a794f;
}


::hx::ObjectPtr< ShaderInstance_obj > ShaderInstance_obj::__new( ::Dynamic shader) {
	::hx::ObjectPtr< ShaderInstance_obj > __this = new ShaderInstance_obj();
	__this->__construct(shader);
	return __this;
}

::hx::ObjectPtr< ShaderInstance_obj > ShaderInstance_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic shader) {
	ShaderInstance_obj *__this = (ShaderInstance_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderInstance_obj), true, "hxsl.ShaderInstance"));
	*(void **)__this = ShaderInstance_obj::_hx_vtable;
	__this->__construct(shader);
	return __this;
}

ShaderInstance_obj::ShaderInstance_obj()
{
}

void ShaderInstance_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderInstance);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_END_CLASS();
}

void ShaderInstance_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(params,"params");
}

::hx::Val ShaderInstance_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderInstance_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderInstance_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("params",46,fb,7a,ed));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderInstance_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ShaderInstance_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderInstance_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(ShaderInstance_obj,params),HX_("params",46,fb,7a,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderInstance_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderInstance_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("shader",25,bf,20,1d),
	HX_("params",46,fb,7a,ed),
	::String(null()) };

::hx::Class ShaderInstance_obj::__mClass;

void ShaderInstance_obj::__register()
{
	ShaderInstance_obj _hx_dummy;
	ShaderInstance_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.ShaderInstance",1f,f3,7b,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderInstance_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderInstance_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderInstance_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderInstance_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
