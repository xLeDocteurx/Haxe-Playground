#include <hxcpp.h>

#ifndef INCLUDED_hxd__FloatBuffer_InnerIterator
#include <hxd/_FloatBuffer/InnerIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5463c8a2a9c3cb85_50_new,"hxd._FloatBuffer.InnerIterator","new",0x6a3fc53f,"hxd._FloatBuffer.InnerIterator.new","hxd/FloatBuffer.hx",50,0x77baa03d)
HX_LOCAL_STACK_FRAME(_hx_pos_5463c8a2a9c3cb85_56_hasNext,"hxd._FloatBuffer.InnerIterator","hasNext",0x7f97f5cc,"hxd._FloatBuffer.InnerIterator.hasNext","hxd/FloatBuffer.hx",56,0x77baa03d)
HX_LOCAL_STACK_FRAME(_hx_pos_5463c8a2a9c3cb85_59_next,"hxd._FloatBuffer.InnerIterator","next",0x8d8cd334,"hxd._FloatBuffer.InnerIterator.next","hxd/FloatBuffer.hx",59,0x77baa03d)
namespace hxd{
namespace _FloatBuffer{

void InnerIterator_obj::__construct(::Array< Float > b){
            	HX_STACKFRAME(&_hx_pos_5463c8a2a9c3cb85_50_new)
HXLINE(  51)		this->b = b;
HXLINE(  52)		this->len = this->b->length;
HXLINE(  53)		this->pos = 0;
            	}

Dynamic InnerIterator_obj::__CreateEmpty() { return new InnerIterator_obj; }

void *InnerIterator_obj::_hx_vtable = 0;

Dynamic InnerIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InnerIterator_obj > _hx_result = new InnerIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool InnerIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4b8c59f3;
}

bool InnerIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_5463c8a2a9c3cb85_56_hasNext)
HXDLIN(  56)		return (this->pos < this->len);
            	}


HX_DEFINE_DYNAMIC_FUNC0(InnerIterator_obj,hasNext,return )

Float InnerIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_5463c8a2a9c3cb85_59_next)
HXDLIN(  59)		return this->b->__get(this->pos++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(InnerIterator_obj,next,return )


InnerIterator_obj::InnerIterator_obj()
{
}

void InnerIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InnerIterator);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(len,"len");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void InnerIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(len,"len");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

::hx::Val InnerIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { return ::hx::Val( len ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InnerIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { len=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InnerIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("len",d5,4b,52,00));
	outFields->push(HX_("pos",94,5d,55,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InnerIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(InnerIterator_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsInt,(int)offsetof(InnerIterator_obj,len),HX_("len",d5,4b,52,00)},
	{::hx::fsInt,(int)offsetof(InnerIterator_obj,pos),HX_("pos",94,5d,55,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InnerIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String InnerIterator_obj_sMemberFields[] = {
	HX_("b",62,00,00,00),
	HX_("len",d5,4b,52,00),
	HX_("pos",94,5d,55,00),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class InnerIterator_obj::__mClass;

void InnerIterator_obj::__register()
{
	InnerIterator_obj _hx_dummy;
	InnerIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd._FloatBuffer.InnerIterator",cd,b9,0e,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InnerIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InnerIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InnerIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InnerIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace _FloatBuffer
