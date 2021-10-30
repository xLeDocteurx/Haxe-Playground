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
#ifndef INCLUDED_hxsl_SearchMap
#include <hxsl/SearchMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb263f4c6a0c1f29_8_new,"hxsl.SearchMap","new",0xe43a9361,"hxsl.SearchMap.new","hxsl/Cache.hx",8,0x59522042)
namespace hxsl{

void SearchMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cb263f4c6a0c1f29_8_new)
            	}

Dynamic SearchMap_obj::__CreateEmpty() { return new SearchMap_obj; }

void *SearchMap_obj::_hx_vtable = 0;

Dynamic SearchMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SearchMap_obj > _hx_result = new SearchMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SearchMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2947d887;
}


SearchMap_obj::SearchMap_obj()
{
}

void SearchMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SearchMap);
	HX_MARK_MEMBER_NAME(linked,"linked");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void SearchMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(linked,"linked");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val SearchMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"linked") ) { return ::hx::Val( linked ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SearchMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"linked") ) { linked=inValue.Cast<  ::hxsl::RuntimeShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SearchMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("linked",d9,e2,a4,ec));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SearchMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxsl::RuntimeShader */ ,(int)offsetof(SearchMap_obj,linked),HX_("linked",d9,e2,a4,ec)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(SearchMap_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SearchMap_obj_sStaticStorageInfo = 0;
#endif

static ::String SearchMap_obj_sMemberFields[] = {
	HX_("linked",d9,e2,a4,ec),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class SearchMap_obj::__mClass;

void SearchMap_obj::__register()
{
	SearchMap_obj _hx_dummy;
	SearchMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.SearchMap",ef,4e,fb,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SearchMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SearchMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SearchMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SearchMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
