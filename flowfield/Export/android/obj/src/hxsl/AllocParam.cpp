#include <hxcpp.h>

#ifndef INCLUDED_hxsl_AllocGlobal
#include <hxsl/AllocGlobal.h>
#endif
#ifndef INCLUDED_hxsl_AllocParam
#include <hxsl/AllocParam.h>
#endif
#ifndef INCLUDED_hxsl_Type
#include <hxsl/Type.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_844c982906a683c9_11_new,"hxsl.AllocParam","new",0xe8919c0f,"hxsl.AllocParam.new","hxsl/RuntimeShader.hx",11,0xe95fb147)
HX_LOCAL_STACK_FRAME(_hx_pos_844c982906a683c9_18_clone,"hxsl.AllocParam","clone",0x146e68cc,"hxsl.AllocParam.clone","hxsl/RuntimeShader.hx",18,0xe95fb147)
namespace hxsl{

void AllocParam_obj::__construct(::String name,int pos,int instance,int index, ::hxsl::Type type){
            	HX_STACKFRAME(&_hx_pos_844c982906a683c9_11_new)
HXLINE(  12)		this->name = name;
HXLINE(  13)		this->pos = pos;
HXLINE(  14)		this->instance = instance;
HXLINE(  15)		this->index = index;
HXLINE(  16)		this->type = type;
            	}

Dynamic AllocParam_obj::__CreateEmpty() { return new AllocParam_obj; }

void *AllocParam_obj::_hx_vtable = 0;

Dynamic AllocParam_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AllocParam_obj > _hx_result = new AllocParam_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool AllocParam_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6fe8daa1;
}

 ::hxsl::AllocParam AllocParam_obj::clone(::hx::Null< bool >  __o_resetGID){
            		bool resetGID = __o_resetGID.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_844c982906a683c9_18_clone)
HXLINE(  19)		 ::hxsl::AllocParam p =  ::hxsl::AllocParam_obj::__alloc( HX_CTX ,this->name,this->pos,this->instance,this->index,this->type);
HXLINE(  20)		if (::hx::IsNotNull( this->perObjectGlobal )) {
HXLINE(  20)			p->perObjectGlobal = this->perObjectGlobal->clone(resetGID);
            		}
HXLINE(  21)		if (::hx::IsNotNull( this->next )) {
HXLINE(  21)			p->next = this->next->clone(resetGID);
            		}
HXLINE(  22)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AllocParam_obj,clone,return )


::hx::ObjectPtr< AllocParam_obj > AllocParam_obj::__new(::String name,int pos,int instance,int index, ::hxsl::Type type) {
	::hx::ObjectPtr< AllocParam_obj > __this = new AllocParam_obj();
	__this->__construct(name,pos,instance,index,type);
	return __this;
}

::hx::ObjectPtr< AllocParam_obj > AllocParam_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,int pos,int instance,int index, ::hxsl::Type type) {
	AllocParam_obj *__this = (AllocParam_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AllocParam_obj), true, "hxsl.AllocParam"));
	*(void **)__this = AllocParam_obj::_hx_vtable;
	__this->__construct(name,pos,instance,index,type);
	return __this;
}

AllocParam_obj::AllocParam_obj()
{
}

void AllocParam_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AllocParam);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(instance,"instance");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(perObjectGlobal,"perObjectGlobal");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void AllocParam_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(instance,"instance");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(perObjectGlobal,"perObjectGlobal");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val AllocParam_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return ::hx::Val( instance ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"perObjectGlobal") ) { return ::hx::Val( perObjectGlobal ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AllocParam_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::hxsl::Type >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxsl::AllocParam >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"perObjectGlobal") ) { perObjectGlobal=inValue.Cast<  ::hxsl::AllocGlobal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AllocParam_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("instance",95,1f,e1,59));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("perObjectGlobal",ff,35,fe,55));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AllocParam_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AllocParam_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(AllocParam_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsInt,(int)offsetof(AllocParam_obj,instance),HX_("instance",95,1f,e1,59)},
	{::hx::fsInt,(int)offsetof(AllocParam_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsObject /*  ::hxsl::Type */ ,(int)offsetof(AllocParam_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::hxsl::AllocGlobal */ ,(int)offsetof(AllocParam_obj,perObjectGlobal),HX_("perObjectGlobal",ff,35,fe,55)},
	{::hx::fsObject /*  ::hxsl::AllocParam */ ,(int)offsetof(AllocParam_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AllocParam_obj_sStaticStorageInfo = 0;
#endif

static ::String AllocParam_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("pos",94,5d,55,00),
	HX_("instance",95,1f,e1,59),
	HX_("index",12,9b,14,be),
	HX_("type",ba,f2,08,4d),
	HX_("perObjectGlobal",ff,35,fe,55),
	HX_("next",f3,84,02,49),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class AllocParam_obj::__mClass;

void AllocParam_obj::__register()
{
	AllocParam_obj _hx_dummy;
	AllocParam_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.AllocParam",9d,e8,58,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AllocParam_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AllocParam_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AllocParam_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AllocParam_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
