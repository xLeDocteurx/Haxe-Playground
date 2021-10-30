#include <hxcpp.h>

#ifndef INCLUDED_hxsl_AllocGlobal
#include <hxsl/AllocGlobal.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Type
#include <hxsl/Type.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e74f8e503a0a3b61_32_new,"hxsl.AllocGlobal","new",0x1edf1dc5,"hxsl.AllocGlobal.new","hxsl/RuntimeShader.hx",32,0xe95fb147)
HX_LOCAL_STACK_FRAME(_hx_pos_e74f8e503a0a3b61_38_clone,"hxsl.AllocGlobal","clone",0x9a684402,"hxsl.AllocGlobal.clone","hxsl/RuntimeShader.hx",38,0xe95fb147)
namespace hxsl{

void AllocGlobal_obj::__construct(int pos,::String path, ::hxsl::Type type){
            	HX_STACKFRAME(&_hx_pos_e74f8e503a0a3b61_32_new)
HXLINE(  33)		this->pos = pos;
HXLINE(  34)		this->path = path;
HXLINE(  35)		this->gid = ::hxsl::Globals_obj::allocID(path);
HXLINE(  36)		this->type = type;
            	}

Dynamic AllocGlobal_obj::__CreateEmpty() { return new AllocGlobal_obj; }

void *AllocGlobal_obj::_hx_vtable = 0;

Dynamic AllocGlobal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AllocGlobal_obj > _hx_result = new AllocGlobal_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AllocGlobal_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x360da8cf;
}

 ::hxsl::AllocGlobal AllocGlobal_obj::clone(::hx::Null< bool >  __o_resetGID){
            		bool resetGID = __o_resetGID.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_e74f8e503a0a3b61_38_clone)
HXLINE(  39)		 ::hxsl::AllocGlobal g =  ::hxsl::AllocGlobal_obj::__alloc( HX_CTX ,this->pos,this->path,this->type);
HXLINE(  40)		if (::hx::IsNotNull( this->next )) {
HXLINE(  40)			g->next = this->next->clone(resetGID);
            		}
HXLINE(  41)		if (resetGID) {
HXLINE(  41)			g->gid = 0;
            		}
HXLINE(  42)		return g;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AllocGlobal_obj,clone,return )


::hx::ObjectPtr< AllocGlobal_obj > AllocGlobal_obj::__new(int pos,::String path, ::hxsl::Type type) {
	::hx::ObjectPtr< AllocGlobal_obj > __this = new AllocGlobal_obj();
	__this->__construct(pos,path,type);
	return __this;
}

::hx::ObjectPtr< AllocGlobal_obj > AllocGlobal_obj::__alloc(::hx::Ctx *_hx_ctx,int pos,::String path, ::hxsl::Type type) {
	AllocGlobal_obj *__this = (AllocGlobal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AllocGlobal_obj), true, "hxsl.AllocGlobal"));
	*(void **)__this = AllocGlobal_obj::_hx_vtable;
	__this->__construct(pos,path,type);
	return __this;
}

AllocGlobal_obj::AllocGlobal_obj()
{
}

void AllocGlobal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AllocGlobal);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(gid,"gid");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void AllocGlobal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(gid,"gid");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val AllocGlobal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		if (HX_FIELD_EQ(inName,"gid") ) { return ::hx::Val( gid ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AllocGlobal_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gid") ) { gid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::hxsl::Type >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxsl::AllocGlobal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AllocGlobal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("gid",02,84,4e,00));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AllocGlobal_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AllocGlobal_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsInt,(int)offsetof(AllocGlobal_obj,gid),HX_("gid",02,84,4e,00)},
	{::hx::fsString,(int)offsetof(AllocGlobal_obj,path),HX_("path",a5,e5,51,4a)},
	{::hx::fsObject /*  ::hxsl::Type */ ,(int)offsetof(AllocGlobal_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::hxsl::AllocGlobal */ ,(int)offsetof(AllocGlobal_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AllocGlobal_obj_sStaticStorageInfo = 0;
#endif

static ::String AllocGlobal_obj_sMemberFields[] = {
	HX_("pos",94,5d,55,00),
	HX_("gid",02,84,4e,00),
	HX_("path",a5,e5,51,4a),
	HX_("type",ba,f2,08,4d),
	HX_("next",f3,84,02,49),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class AllocGlobal_obj::__mClass;

void AllocGlobal_obj::__register()
{
	AllocGlobal_obj _hx_dummy;
	AllocGlobal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.AllocGlobal",53,d7,a9,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AllocGlobal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AllocGlobal_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AllocGlobal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AllocGlobal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
