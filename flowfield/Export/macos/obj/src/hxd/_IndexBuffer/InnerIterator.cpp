#include <hxcpp.h>

#ifndef INCLUDED_hxd__IndexBuffer_InnerIterator
#include <hxd/_IndexBuffer/InnerIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_18b8913ea890b8c3_9_new,"hxd._IndexBuffer.InnerIterator","new",0x2229ccb5,"hxd._IndexBuffer.InnerIterator.new","hxd/IndexBuffer.hx",9,0x7cad6c07)
HX_LOCAL_STACK_FRAME(_hx_pos_18b8913ea890b8c3_15_hasNext,"hxd._IndexBuffer.InnerIterator","hasNext",0x33d9f042,"hxd._IndexBuffer.InnerIterator.hasNext","hxd/IndexBuffer.hx",15,0x7cad6c07)
HX_LOCAL_STACK_FRAME(_hx_pos_18b8913ea890b8c3_18_next,"hxd._IndexBuffer.InnerIterator","next",0xc26952fe,"hxd._IndexBuffer.InnerIterator.next","hxd/IndexBuffer.hx",18,0x7cad6c07)
namespace hxd{
namespace _IndexBuffer{

void InnerIterator_obj::__construct(::Array< int > b){
            	HX_STACKFRAME(&_hx_pos_18b8913ea890b8c3_9_new)
HXLINE(  10)		this->b = b;
HXLINE(  11)		this->len = this->b->length;
HXLINE(  12)		this->pos = 0;
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x01de8f85;
}

bool InnerIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_18b8913ea890b8c3_15_hasNext)
HXDLIN(  15)		return (this->pos < this->len);
            	}


HX_DEFINE_DYNAMIC_FUNC0(InnerIterator_obj,hasNext,return )

int InnerIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_18b8913ea890b8c3_18_next)
HXDLIN(  18)		return this->b->__get(this->pos++);
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
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< int > >(); return inValue; }
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
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(InnerIterator_obj,b),HX_("b",62,00,00,00)},
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
	__mClass->mName = HX_("hxd._IndexBuffer.InnerIterator",43,4e,56,cb);
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
} // end namespace _IndexBuffer
