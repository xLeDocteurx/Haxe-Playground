#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxsl__Dce_VarDeps
#include <hxsl/_Dce/VarDeps.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2765d5b146af9065_14_new,"hxsl._Dce.VarDeps","new",0xa552b0fb,"hxsl._Dce.VarDeps.new","hxsl/Dce.hx",14,0x7744a77e)
namespace hxsl{
namespace _Dce{

void VarDeps_obj::__construct( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_2765d5b146af9065_14_new)
HXLINE(  15)		this->v = v;
HXLINE(  16)		this->used = false;
HXLINE(  17)		this->deps =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic VarDeps_obj::__CreateEmpty() { return new VarDeps_obj; }

void *VarDeps_obj::_hx_vtable = 0;

Dynamic VarDeps_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VarDeps_obj > _hx_result = new VarDeps_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VarDeps_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3678269b;
}


::hx::ObjectPtr< VarDeps_obj > VarDeps_obj::__new( ::Dynamic v) {
	::hx::ObjectPtr< VarDeps_obj > __this = new VarDeps_obj();
	__this->__construct(v);
	return __this;
}

::hx::ObjectPtr< VarDeps_obj > VarDeps_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic v) {
	VarDeps_obj *__this = (VarDeps_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VarDeps_obj), true, "hxsl._Dce.VarDeps"));
	*(void **)__this = VarDeps_obj::_hx_vtable;
	__this->__construct(v);
	return __this;
}

VarDeps_obj::VarDeps_obj()
{
}

void VarDeps_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VarDeps);
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(keep,"keep");
	HX_MARK_MEMBER_NAME(used,"used");
	HX_MARK_MEMBER_NAME(deps,"deps");
	HX_MARK_END_CLASS();
}

void VarDeps_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(keep,"keep");
	HX_VISIT_MEMBER_NAME(used,"used");
	HX_VISIT_MEMBER_NAME(deps,"deps");
}

::hx::Val VarDeps_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { return ::hx::Val( v ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keep") ) { return ::hx::Val( keep ); }
		if (HX_FIELD_EQ(inName,"used") ) { return ::hx::Val( used ); }
		if (HX_FIELD_EQ(inName,"deps") ) { return ::hx::Val( deps ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VarDeps_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keep") ) { keep=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"used") ) { used=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"deps") ) { deps=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VarDeps_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("v",76,00,00,00));
	outFields->push(HX_("keep",85,d0,06,47));
	outFields->push(HX_("used",3d,92,ad,4d));
	outFields->push(HX_("deps",c4,5b,66,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VarDeps_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VarDeps_obj,v),HX_("v",76,00,00,00)},
	{::hx::fsBool,(int)offsetof(VarDeps_obj,keep),HX_("keep",85,d0,06,47)},
	{::hx::fsBool,(int)offsetof(VarDeps_obj,used),HX_("used",3d,92,ad,4d)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(VarDeps_obj,deps),HX_("deps",c4,5b,66,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VarDeps_obj_sStaticStorageInfo = 0;
#endif

static ::String VarDeps_obj_sMemberFields[] = {
	HX_("v",76,00,00,00),
	HX_("keep",85,d0,06,47),
	HX_("used",3d,92,ad,4d),
	HX_("deps",c4,5b,66,42),
	::String(null()) };

::hx::Class VarDeps_obj::__mClass;

void VarDeps_obj::__register()
{
	VarDeps_obj _hx_dummy;
	VarDeps_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl._Dce.VarDeps",89,17,5a,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VarDeps_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VarDeps_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VarDeps_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VarDeps_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
} // end namespace _Dce
