#include <hxcpp.h>

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif
#ifndef INCLUDED_hxsl__ShaderList_ShaderIterator
#include <hxsl/_ShaderList/ShaderIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30a83ae200955e95_39_new,"hxsl._ShaderList.ShaderIterator","new",0x7dc07776,"hxsl._ShaderList.ShaderIterator.new","hxsl/ShaderList.hx",39,0xbb7c7435)
HX_LOCAL_STACK_FRAME(_hx_pos_30a83ae200955e95_44_hasNext,"hxsl._ShaderList.ShaderIterator","hasNext",0x51638f83,"hxsl._ShaderList.ShaderIterator.hasNext","hxsl/ShaderList.hx",44,0xbb7c7435)
HX_LOCAL_STACK_FRAME(_hx_pos_30a83ae200955e95_46_next,"hxsl._ShaderList.ShaderIterator","next",0x8aa8111d,"hxsl._ShaderList.ShaderIterator.next","hxsl/ShaderList.hx",46,0xbb7c7435)
namespace hxsl{
namespace _ShaderList{

void ShaderIterator_obj::__construct( ::hxsl::ShaderList l, ::hxsl::ShaderList last){
            	HX_STACKFRAME(&_hx_pos_30a83ae200955e95_39_new)
HXLINE(  40)		this->l = l;
HXLINE(  41)		this->last = last;
            	}

Dynamic ShaderIterator_obj::__CreateEmpty() { return new ShaderIterator_obj; }

void *ShaderIterator_obj::_hx_vtable = 0;

Dynamic ShaderIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderIterator_obj > _hx_result = new ShaderIterator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShaderIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a1567e4;
}

bool ShaderIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_30a83ae200955e95_44_hasNext)
HXDLIN(  44)		return ::hx::IsInstanceNotEq( this->l,this->last );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderIterator_obj,hasNext,return )

 ::hxsl::Shader ShaderIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_30a83ae200955e95_46_next)
HXLINE(  47)		 ::hxsl::Shader s = this->l->s;
HXLINE(  48)		this->l = this->l->next;
HXLINE(  49)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderIterator_obj,next,return )


::hx::ObjectPtr< ShaderIterator_obj > ShaderIterator_obj::__new( ::hxsl::ShaderList l, ::hxsl::ShaderList last) {
	::hx::ObjectPtr< ShaderIterator_obj > __this = new ShaderIterator_obj();
	__this->__construct(l,last);
	return __this;
}

::hx::ObjectPtr< ShaderIterator_obj > ShaderIterator_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxsl::ShaderList l, ::hxsl::ShaderList last) {
	ShaderIterator_obj *__this = (ShaderIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderIterator_obj), true, "hxsl._ShaderList.ShaderIterator"));
	*(void **)__this = ShaderIterator_obj::_hx_vtable;
	__this->__construct(l,last);
	return __this;
}

ShaderIterator_obj::ShaderIterator_obj()
{
}

void ShaderIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderIterator);
	HX_MARK_MEMBER_NAME(l,"l");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_END_CLASS();
}

void ShaderIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(l,"l");
	HX_VISIT_MEMBER_NAME(last,"last");
}

::hx::Val ShaderIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { return ::hx::Val( l ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return ::hx::Val( last ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { l=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("l",6c,00,00,00));
	outFields->push(HX_("last",56,0a,ad,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(ShaderIterator_obj,l),HX_("l",6c,00,00,00)},
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(ShaderIterator_obj,last),HX_("last",56,0a,ad,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderIterator_obj_sMemberFields[] = {
	HX_("l",6c,00,00,00),
	HX_("last",56,0a,ad,47),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class ShaderIterator_obj::__mClass;

void ShaderIterator_obj::__register()
{
	ShaderIterator_obj _hx_dummy;
	ShaderIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl._ShaderList.ShaderIterator",84,44,ae,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
} // end namespace _ShaderList
