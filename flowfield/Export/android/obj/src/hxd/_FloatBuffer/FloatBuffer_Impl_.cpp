#include <hxcpp.h>

#ifndef INCLUDED_hxd__FloatBuffer_FloatBuffer_Impl_
#include <hxd/_FloatBuffer/FloatBuffer_Impl_.h>
#endif
#ifndef INCLUDED_hxd__FloatBuffer_InnerIterator
#include <hxd/_FloatBuffer/InnerIterator.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5b0ff02f32cde504_67__new,"hxd._FloatBuffer.FloatBuffer_Impl_","_new",0xd999c86a,"hxd._FloatBuffer.FloatBuffer_Impl_._new","hxd/FloatBuffer.hx",67,0x77baa03d)
HX_LOCAL_STACK_FRAME(_hx_pos_5b0ff02f32cde504_80_push,"hxd._FloatBuffer.FloatBuffer_Impl_","push",0xe4dbc4e3,"hxd._FloatBuffer.FloatBuffer_Impl_.push","hxd/FloatBuffer.hx",80,0x77baa03d)
HX_LOCAL_STACK_FRAME(_hx_pos_5b0ff02f32cde504_91_grow,"hxd._FloatBuffer.FloatBuffer_Impl_","grow",0xdee68f1c,"hxd._FloatBuffer.FloatBuffer_Impl_.grow","hxd/FloatBuffer.hx",91,0x77baa03d)
HX_LOCAL_STACK_FRAME(_hx_pos_5b0ff02f32cde504_99_resize,"hxd._FloatBuffer.FloatBuffer_Impl_","resize",0x3d4fa13d,"hxd._FloatBuffer.FloatBuffer_Impl_.resize","hxd/FloatBuffer.hx",99,0x77baa03d)
HX_LOCAL_STACK_FRAME(_hx_pos_5b0ff02f32cde504_105_arrayRead,"hxd._FloatBuffer.FloatBuffer_Impl_","arrayRead",0x3b2bd1e6,"hxd._FloatBuffer.FloatBuffer_Impl_.arrayRead","hxd/FloatBuffer.hx",105,0x77baa03d)
HX_LOCAL_STACK_FRAME(_hx_pos_5b0ff02f32cde504_109_arrayWrite,"hxd._FloatBuffer.FloatBuffer_Impl_","arrayWrite",0x74caa44f,"hxd._FloatBuffer.FloatBuffer_Impl_.arrayWrite","hxd/FloatBuffer.hx",109,0x77baa03d)
HX_LOCAL_STACK_FRAME(_hx_pos_5b0ff02f32cde504_113_getNative,"hxd._FloatBuffer.FloatBuffer_Impl_","getNative",0x4485ff24,"hxd._FloatBuffer.FloatBuffer_Impl_.getNative","hxd/FloatBuffer.hx",113,0x77baa03d)
HX_LOCAL_STACK_FRAME(_hx_pos_5b0ff02f32cde504_117_iterator,"hxd._FloatBuffer.FloatBuffer_Impl_","iterator",0xdb85b577,"hxd._FloatBuffer.FloatBuffer_Impl_.iterator","hxd/FloatBuffer.hx",117,0x77baa03d)
HX_LOCAL_STACK_FRAME(_hx_pos_5b0ff02f32cde504_121_get_length,"hxd._FloatBuffer.FloatBuffer_Impl_","get_length",0x39d32478,"hxd._FloatBuffer.FloatBuffer_Impl_.get_length","hxd/FloatBuffer.hx",121,0x77baa03d)
namespace hxd{
namespace _FloatBuffer{

void FloatBuffer_Impl__obj::__construct() { }

Dynamic FloatBuffer_Impl__obj::__CreateEmpty() { return new FloatBuffer_Impl__obj; }

void *FloatBuffer_Impl__obj::_hx_vtable = 0;

Dynamic FloatBuffer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FloatBuffer_Impl__obj > _hx_result = new FloatBuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FloatBuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5e451bf3;
}

::Array< Float > FloatBuffer_Impl__obj::_new(::hx::Null< int >  __o_length){
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_5b0ff02f32cde504_67__new)
HXDLIN(  67)		::Array< Float > this1 = ::Array_obj< Float >::__new();
HXLINE(  72)		if ((length > 0)) {
HXLINE(  72)			if ((length > this1->length)) {
HXLINE(  72)				this1[(length - 1)] = ((Float)0.);
            			}
            		}
HXLINE(  67)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatBuffer_Impl__obj,_new,return )

void FloatBuffer_Impl__obj::push(::Array< Float > this1,Float v){
            	HX_STACKFRAME(&_hx_pos_5b0ff02f32cde504_80_push)
HXDLIN(  80)		this1->push(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FloatBuffer_Impl__obj,push,(void))

void FloatBuffer_Impl__obj::grow(::Array< Float > this1,int v){
            	HX_STACKFRAME(&_hx_pos_5b0ff02f32cde504_91_grow)
HXDLIN(  91)		if ((v > this1->length)) {
HXDLIN(  91)			this1[(v - 1)] = ((Float)0.);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FloatBuffer_Impl__obj,grow,(void))

void FloatBuffer_Impl__obj::resize(::Array< Float > this1,int v){
            	HX_STACKFRAME(&_hx_pos_5b0ff02f32cde504_99_resize)
HXDLIN(  99)		if ((this1->length > v)) {
HXDLIN(  99)			this1->removeRange(v,(this1->length - v));
            		}
            		else {
HXDLIN(  99)			if ((v > this1->length)) {
HXDLIN(  99)				this1[(v - 1)] = ((Float)0.);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FloatBuffer_Impl__obj,resize,(void))

Float FloatBuffer_Impl__obj::arrayRead(::Array< Float > this1,int key){
            	HX_STACKFRAME(&_hx_pos_5b0ff02f32cde504_105_arrayRead)
HXDLIN( 105)		return this1->__get(key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FloatBuffer_Impl__obj,arrayRead,return )

Float FloatBuffer_Impl__obj::arrayWrite(::Array< Float > this1,int key,Float value){
            	HX_STACKFRAME(&_hx_pos_5b0ff02f32cde504_109_arrayWrite)
HXDLIN( 109)		return (this1[key] = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FloatBuffer_Impl__obj,arrayWrite,return )

::Array< Float > FloatBuffer_Impl__obj::getNative(::Array< Float > this1){
            	HX_STACKFRAME(&_hx_pos_5b0ff02f32cde504_113_getNative)
HXDLIN( 113)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatBuffer_Impl__obj,getNative,return )

 ::hxd::_FloatBuffer::InnerIterator FloatBuffer_Impl__obj::iterator(::Array< Float > this1){
            	HX_GC_STACKFRAME(&_hx_pos_5b0ff02f32cde504_117_iterator)
HXDLIN( 117)		return  ::hxd::_FloatBuffer::InnerIterator_obj::__alloc( HX_CTX ,this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatBuffer_Impl__obj,iterator,return )

int FloatBuffer_Impl__obj::get_length(::Array< Float > this1){
            	HX_STACKFRAME(&_hx_pos_5b0ff02f32cde504_121_get_length)
HXDLIN( 121)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatBuffer_Impl__obj,get_length,return )


FloatBuffer_Impl__obj::FloatBuffer_Impl__obj()
{
}

bool FloatBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"push") ) { outValue = push_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"grow") ) { outValue = grow_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true; }
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
static ::hx::StorageInfo *FloatBuffer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FloatBuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class FloatBuffer_Impl__obj::__mClass;

static ::String FloatBuffer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("push",da,11,61,4a),
	HX_("grow",13,dc,6b,44),
	HX_("resize",f4,59,7b,08),
	HX_("arrayRead",8f,25,19,95),
	HX_("arrayWrite",86,84,86,ca),
	HX_("getNative",cd,52,73,9e),
	HX_("iterator",ee,49,9a,93),
	HX_("get_length",af,04,8f,8f),
	::String(null())
};

void FloatBuffer_Impl__obj::__register()
{
	FloatBuffer_Impl__obj _hx_dummy;
	FloatBuffer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd._FloatBuffer.FloatBuffer_Impl_",05,8a,88,b4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FloatBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FloatBuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FloatBuffer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FloatBuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FloatBuffer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace _FloatBuffer
