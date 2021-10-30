#include <hxcpp.h>

#ifndef INCLUDED_hxd__IndexBuffer_IndexBuffer_Impl_
#include <hxd/_IndexBuffer/IndexBuffer_Impl_.h>
#endif
#ifndef INCLUDED_hxd__IndexBuffer_InnerIterator
#include <hxd/_IndexBuffer/InnerIterator.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_463f5283b105165f_26__new,"hxd._IndexBuffer.IndexBuffer_Impl_","_new",0x06c59afe,"hxd._IndexBuffer.IndexBuffer_Impl_._new","hxd/IndexBuffer.hx",26,0x7cad6c07)
HX_LOCAL_STACK_FRAME(_hx_pos_463f5283b105165f_41_push,"hxd._IndexBuffer.IndexBuffer_Impl_","push",0x12079777,"hxd._IndexBuffer.IndexBuffer_Impl_.push","hxd/IndexBuffer.hx",41,0x7cad6c07)
HX_LOCAL_STACK_FRAME(_hx_pos_463f5283b105165f_51_grow,"hxd._IndexBuffer.IndexBuffer_Impl_","grow",0x0c1261b0,"hxd._IndexBuffer.IndexBuffer_Impl_.grow","hxd/IndexBuffer.hx",51,0x7cad6c07)
HX_LOCAL_STACK_FRAME(_hx_pos_463f5283b105165f_56_arrayRead,"hxd._IndexBuffer.IndexBuffer_Impl_","arrayRead",0x90b826d2,"hxd._IndexBuffer.IndexBuffer_Impl_.arrayRead","hxd/IndexBuffer.hx",56,0x7cad6c07)
HX_LOCAL_STACK_FRAME(_hx_pos_463f5283b105165f_60_arrayWrite,"hxd._IndexBuffer.IndexBuffer_Impl_","arrayWrite",0xfa089de3,"hxd._IndexBuffer.IndexBuffer_Impl_.arrayWrite","hxd/IndexBuffer.hx",60,0x7cad6c07)
HX_LOCAL_STACK_FRAME(_hx_pos_463f5283b105165f_64_getNative,"hxd._IndexBuffer.IndexBuffer_Impl_","getNative",0x9a125410,"hxd._IndexBuffer.IndexBuffer_Impl_.getNative","hxd/IndexBuffer.hx",64,0x7cad6c07)
HX_LOCAL_STACK_FRAME(_hx_pos_463f5283b105165f_68_iterator,"hxd._IndexBuffer.IndexBuffer_Impl_","iterator",0xd750620b,"hxd._IndexBuffer.IndexBuffer_Impl_.iterator","hxd/IndexBuffer.hx",68,0x7cad6c07)
HX_LOCAL_STACK_FRAME(_hx_pos_463f5283b105165f_72_get_length,"hxd._IndexBuffer.IndexBuffer_Impl_","get_length",0xbf111e0c,"hxd._IndexBuffer.IndexBuffer_Impl_.get_length","hxd/IndexBuffer.hx",72,0x7cad6c07)
namespace hxd{
namespace _IndexBuffer{

void IndexBuffer_Impl__obj::__construct() { }

Dynamic IndexBuffer_Impl__obj::__CreateEmpty() { return new IndexBuffer_Impl__obj; }

void *IndexBuffer_Impl__obj::_hx_vtable = 0;

Dynamic IndexBuffer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IndexBuffer_Impl__obj > _hx_result = new IndexBuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IndexBuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x058fe36b;
}

::Array< int > IndexBuffer_Impl__obj::_new(::hx::Null< int >  __o_length){
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_463f5283b105165f_26__new)
HXDLIN(  26)		::Array< int > this1 = ::Array_obj< int >::__new();
HXLINE(  33)		if ((length > 0)) {
HXLINE(  33)			if ((length > this1->length)) {
HXLINE(  33)				this1[(length - 1)] = 0;
            			}
            		}
HXLINE(  26)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IndexBuffer_Impl__obj,_new,return )

void IndexBuffer_Impl__obj::push(::Array< int > this1,int v){
            	HX_STACKFRAME(&_hx_pos_463f5283b105165f_41_push)
HXDLIN(  41)		this1->push(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IndexBuffer_Impl__obj,push,(void))

void IndexBuffer_Impl__obj::grow(::Array< int > this1,int v){
            	HX_STACKFRAME(&_hx_pos_463f5283b105165f_51_grow)
HXDLIN(  51)		if ((v > this1->length)) {
HXDLIN(  51)			this1[(v - 1)] = 0;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IndexBuffer_Impl__obj,grow,(void))

int IndexBuffer_Impl__obj::arrayRead(::Array< int > this1,int key){
            	HX_STACKFRAME(&_hx_pos_463f5283b105165f_56_arrayRead)
HXDLIN(  56)		return this1->__get(key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IndexBuffer_Impl__obj,arrayRead,return )

int IndexBuffer_Impl__obj::arrayWrite(::Array< int > this1,int key,int value){
            	HX_STACKFRAME(&_hx_pos_463f5283b105165f_60_arrayWrite)
HXDLIN(  60)		return (this1[key] = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer_Impl__obj,arrayWrite,return )

::Array< int > IndexBuffer_Impl__obj::getNative(::Array< int > this1){
            	HX_STACKFRAME(&_hx_pos_463f5283b105165f_64_getNative)
HXDLIN(  64)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IndexBuffer_Impl__obj,getNative,return )

 ::hxd::_IndexBuffer::InnerIterator IndexBuffer_Impl__obj::iterator(::Array< int > this1){
            	HX_GC_STACKFRAME(&_hx_pos_463f5283b105165f_68_iterator)
HXDLIN(  68)		return  ::hxd::_IndexBuffer::InnerIterator_obj::__alloc( HX_CTX ,this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IndexBuffer_Impl__obj,iterator,return )

int IndexBuffer_Impl__obj::get_length(::Array< int > this1){
            	HX_STACKFRAME(&_hx_pos_463f5283b105165f_72_get_length)
HXDLIN(  72)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IndexBuffer_Impl__obj,get_length,return )


IndexBuffer_Impl__obj::IndexBuffer_Impl__obj()
{
}

bool IndexBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"push") ) { outValue = push_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"grow") ) { outValue = grow_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arrayRead") ) { outValue = arrayRead_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getNative") ) { outValue = getNative_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrayWrite") ) { outValue = arrayWrite_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IndexBuffer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IndexBuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class IndexBuffer_Impl__obj::__mClass;

static ::String IndexBuffer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("push",da,11,61,4a),
	HX_("grow",13,dc,6b,44),
	HX_("arrayRead",8f,25,19,95),
	HX_("arrayWrite",86,84,86,ca),
	HX_("getNative",cd,52,73,9e),
	HX_("iterator",ee,49,9a,93),
	HX_("get_length",af,04,8f,8f),
	::String(null())
};

void IndexBuffer_Impl__obj::__register()
{
	IndexBuffer_Impl__obj _hx_dummy;
	IndexBuffer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd._IndexBuffer.IndexBuffer_Impl_",f1,bf,95,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IndexBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(IndexBuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< IndexBuffer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IndexBuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IndexBuffer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace _IndexBuffer
