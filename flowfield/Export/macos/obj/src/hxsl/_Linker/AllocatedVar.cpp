#include <hxcpp.h>

#ifndef INCLUDED_hxsl_FunctionKind
#include <hxsl/FunctionKind.h>
#endif
#ifndef INCLUDED_hxsl__Linker_AllocatedVar
#include <hxsl/_Linker/AllocatedVar.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_08ad6d5cd49e1452_13_new,"hxsl._Linker.AllocatedVar","new",0x858b7f5f,"hxsl._Linker.AllocatedVar.new","hxsl/Linker.hx",13,0x2bdefcf1)
namespace hxsl{
namespace _Linker{

void AllocatedVar_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_08ad6d5cd49e1452_13_new)
            	}

Dynamic AllocatedVar_obj::__CreateEmpty() { return new AllocatedVar_obj; }

void *AllocatedVar_obj::_hx_vtable = 0;

Dynamic AllocatedVar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AllocatedVar_obj > _hx_result = new AllocatedVar_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AllocatedVar_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x198a5539;
}


AllocatedVar_obj::AllocatedVar_obj()
{
}

void AllocatedVar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AllocatedVar);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(merged,"merged");
	HX_MARK_MEMBER_NAME(kind,"kind");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(rootShaderName,"rootShaderName");
	HX_MARK_MEMBER_NAME(instanceIndex,"instanceIndex");
	HX_MARK_END_CLASS();
}

void AllocatedVar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(merged,"merged");
	HX_VISIT_MEMBER_NAME(kind,"kind");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(rootShaderName,"rootShaderName");
	HX_VISIT_MEMBER_NAME(instanceIndex,"instanceIndex");
}

::hx::Val AllocatedVar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { return ::hx::Val( v ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		if (HX_FIELD_EQ(inName,"kind") ) { return ::hx::Val( kind ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"merged") ) { return ::hx::Val( merged ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"instanceIndex") ) { return ::hx::Val( instanceIndex ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rootShaderName") ) { return ::hx::Val( rootShaderName ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AllocatedVar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kind") ) { kind=inValue.Cast<  ::hxsl::FunctionKind >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"merged") ) { merged=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::hxsl::_Linker::AllocatedVar >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"instanceIndex") ) { instanceIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rootShaderName") ) { rootShaderName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AllocatedVar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("v",76,00,00,00));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("merged",ac,be,07,08));
	outFields->push(HX_("kind",54,e1,09,47));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("rootShaderName",d2,04,b8,04));
	outFields->push(HX_("instanceIndex",3d,4f,1d,2b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AllocatedVar_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AllocatedVar_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AllocatedVar_obj,v),HX_("v",76,00,00,00)},
	{::hx::fsString,(int)offsetof(AllocatedVar_obj,path),HX_("path",a5,e5,51,4a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AllocatedVar_obj,merged),HX_("merged",ac,be,07,08)},
	{::hx::fsObject /*  ::hxsl::FunctionKind */ ,(int)offsetof(AllocatedVar_obj,kind),HX_("kind",54,e1,09,47)},
	{::hx::fsObject /*  ::hxsl::_Linker::AllocatedVar */ ,(int)offsetof(AllocatedVar_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsString,(int)offsetof(AllocatedVar_obj,rootShaderName),HX_("rootShaderName",d2,04,b8,04)},
	{::hx::fsInt,(int)offsetof(AllocatedVar_obj,instanceIndex),HX_("instanceIndex",3d,4f,1d,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AllocatedVar_obj_sStaticStorageInfo = 0;
#endif

static ::String AllocatedVar_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("v",76,00,00,00),
	HX_("path",a5,e5,51,4a),
	HX_("merged",ac,be,07,08),
	HX_("kind",54,e1,09,47),
	HX_("parent",2a,05,7e,ed),
	HX_("rootShaderName",d2,04,b8,04),
	HX_("instanceIndex",3d,4f,1d,2b),
	::String(null()) };

::hx::Class AllocatedVar_obj::__mClass;

void AllocatedVar_obj::__register()
{
	AllocatedVar_obj _hx_dummy;
	AllocatedVar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl._Linker.AllocatedVar",ed,e3,2a,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AllocatedVar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AllocatedVar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AllocatedVar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AllocatedVar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
} // end namespace _Linker
