#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_Segment
#include <h2d/col/Segment.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_h2d_col_Segment
#include <hxd/impl/ArrayIterator_h2d_col_Segment.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e5316ea48e4a0ed0_7_new,"hxd.impl.ArrayIterator_h2d_col_Segment","new",0x3f2066f5,"hxd.impl.ArrayIterator_h2d_col_Segment.new","hxd/impl/ArrayIterator.hx",7,0x093c79ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e5316ea48e4a0ed0_13_hasNext,"hxd.impl.ArrayIterator_h2d_col_Segment","hasNext",0x92caaa82,"hxd.impl.ArrayIterator_h2d_col_Segment.hasNext","hxd/impl/ArrayIterator.hx",13,0x093c79ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e5316ea48e4a0ed0_16_next,"hxd.impl.ArrayIterator_h2d_col_Segment","next",0xfd39b0be,"hxd.impl.ArrayIterator_h2d_col_Segment.next","hxd/impl/ArrayIterator.hx",16,0x093c79ab)
namespace hxd{
namespace impl{

void ArrayIterator_h2d_col_Segment_obj::__construct(::Array< ::Dynamic> a){
            	HX_STACKFRAME(&_hx_pos_e5316ea48e4a0ed0_7_new)
HXLINE(   8)		this->i = 0;
HXLINE(   9)		this->a = a;
HXLINE(  10)		this->l = this->a->length;
            	}

Dynamic ArrayIterator_h2d_col_Segment_obj::__CreateEmpty() { return new ArrayIterator_h2d_col_Segment_obj; }

void *ArrayIterator_h2d_col_Segment_obj::_hx_vtable = 0;

Dynamic ArrayIterator_h2d_col_Segment_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayIterator_h2d_col_Segment_obj > _hx_result = new ArrayIterator_h2d_col_Segment_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArrayIterator_h2d_col_Segment_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2905c5a7;
}

bool ArrayIterator_h2d_col_Segment_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_e5316ea48e4a0ed0_13_hasNext)
HXDLIN(  13)		return (this->i < this->l);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayIterator_h2d_col_Segment_obj,hasNext,return )

 ::h2d::col::Segment ArrayIterator_h2d_col_Segment_obj::next(){
            	HX_STACKFRAME(&_hx_pos_e5316ea48e4a0ed0_16_next)
HXDLIN(  16)		return this->a->__get(this->i++).StaticCast<  ::h2d::col::Segment >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayIterator_h2d_col_Segment_obj,next,return )


::hx::ObjectPtr< ArrayIterator_h2d_col_Segment_obj > ArrayIterator_h2d_col_Segment_obj::__new(::Array< ::Dynamic> a) {
	::hx::ObjectPtr< ArrayIterator_h2d_col_Segment_obj > __this = new ArrayIterator_h2d_col_Segment_obj();
	__this->__construct(a);
	return __this;
}

::hx::ObjectPtr< ArrayIterator_h2d_col_Segment_obj > ArrayIterator_h2d_col_Segment_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> a) {
	ArrayIterator_h2d_col_Segment_obj *__this = (ArrayIterator_h2d_col_Segment_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayIterator_h2d_col_Segment_obj), true, "hxd.impl.ArrayIterator_h2d_col_Segment"));
	*(void **)__this = ArrayIterator_h2d_col_Segment_obj::_hx_vtable;
	__this->__construct(a);
	return __this;
}

ArrayIterator_h2d_col_Segment_obj::ArrayIterator_h2d_col_Segment_obj()
{
}

void ArrayIterator_h2d_col_Segment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayIterator_h2d_col_Segment);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(l,"l");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void ArrayIterator_h2d_col_Segment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(l,"l");
	HX_VISIT_MEMBER_NAME(a,"a");
}

::hx::Val ArrayIterator_h2d_col_Segment_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		if (HX_FIELD_EQ(inName,"l") ) { return ::hx::Val( l ); }
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ArrayIterator_h2d_col_Segment_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"l") ) { l=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayIterator_h2d_col_Segment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("l",6c,00,00,00));
	outFields->push(HX_("a",61,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArrayIterator_h2d_col_Segment_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ArrayIterator_h2d_col_Segment_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsInt,(int)offsetof(ArrayIterator_h2d_col_Segment_obj,l),HX_("l",6c,00,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ArrayIterator_h2d_col_Segment_obj,a),HX_("a",61,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArrayIterator_h2d_col_Segment_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayIterator_h2d_col_Segment_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("l",6c,00,00,00),
	HX_("a",61,00,00,00),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class ArrayIterator_h2d_col_Segment_obj::__mClass;

void ArrayIterator_h2d_col_Segment_obj::__register()
{
	ArrayIterator_h2d_col_Segment_obj _hx_dummy;
	ArrayIterator_h2d_col_Segment_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.impl.ArrayIterator_h2d_col_Segment",83,c8,e2,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayIterator_h2d_col_Segment_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayIterator_h2d_col_Segment_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayIterator_h2d_col_Segment_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayIterator_h2d_col_Segment_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace impl
