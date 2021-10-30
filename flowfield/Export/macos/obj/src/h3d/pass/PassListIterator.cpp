#include <hxcpp.h>

#ifndef INCLUDED_h3d_pass_PassListIterator
#include <h3d/pass/PassListIterator.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_376bc3ed9cd923dd_6_new,"h3d.pass.PassListIterator","new",0x1aab9db7,"h3d.pass.PassListIterator.new","h3d/pass/PassList.hx",6,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_376bc3ed9cd923dd_9_hasNext,"h3d.pass.PassListIterator","hasNext",0xe6e56a44,"h3d.pass.PassListIterator.hasNext","h3d/pass/PassList.hx",9,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_376bc3ed9cd923dd_11_next,"h3d.pass.PassListIterator","next",0x3b7e63bc,"h3d.pass.PassListIterator.next","h3d/pass/PassList.hx",11,0xb5bf7d87)
namespace h3d{
namespace pass{

void PassListIterator_obj::__construct( ::h3d::pass::PassObject o){
            	HX_STACKFRAME(&_hx_pos_376bc3ed9cd923dd_6_new)
HXDLIN(   6)		this->o = o;
            	}

Dynamic PassListIterator_obj::__CreateEmpty() { return new PassListIterator_obj; }

void *PassListIterator_obj::_hx_vtable = 0;

Dynamic PassListIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PassListIterator_obj > _hx_result = new PassListIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PassListIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b239507;
}

bool PassListIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_376bc3ed9cd923dd_9_hasNext)
HXDLIN(   9)		return ::hx::IsNotNull( this->o );
            	}


HX_DEFINE_DYNAMIC_FUNC0(PassListIterator_obj,hasNext,return )

 ::h3d::pass::PassObject PassListIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_376bc3ed9cd923dd_11_next)
HXLINE(  12)		 ::h3d::pass::PassObject tmp = this->o;
HXLINE(  13)		this->o = this->o->next;
HXLINE(  14)		return tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PassListIterator_obj,next,return )


::hx::ObjectPtr< PassListIterator_obj > PassListIterator_obj::__new( ::h3d::pass::PassObject o) {
	::hx::ObjectPtr< PassListIterator_obj > __this = new PassListIterator_obj();
	__this->__construct(o);
	return __this;
}

::hx::ObjectPtr< PassListIterator_obj > PassListIterator_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::pass::PassObject o) {
	PassListIterator_obj *__this = (PassListIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PassListIterator_obj), true, "h3d.pass.PassListIterator"));
	*(void **)__this = PassListIterator_obj::_hx_vtable;
	__this->__construct(o);
	return __this;
}

PassListIterator_obj::PassListIterator_obj()
{
}

void PassListIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PassListIterator);
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_END_CLASS();
}

void PassListIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(o,"o");
}

::hx::Val PassListIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return ::hx::Val( o ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PassListIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast<  ::h3d::pass::PassObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PassListIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("o",6f,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PassListIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::pass::PassObject */ ,(int)offsetof(PassListIterator_obj,o),HX_("o",6f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PassListIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String PassListIterator_obj_sMemberFields[] = {
	HX_("o",6f,00,00,00),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class PassListIterator_obj::__mClass;

void PassListIterator_obj::__register()
{
	PassListIterator_obj _hx_dummy;
	PassListIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.PassListIterator",45,f6,96,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PassListIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PassListIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PassListIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PassListIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
