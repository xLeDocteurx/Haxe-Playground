#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_anim_AnimatedObject
#include <h3d/anim/AnimatedObject.h>
#endif
#ifndef INCLUDED_h3d_anim_BufferObject
#include <h3d/anim/BufferObject.h>
#endif
#ifndef INCLUDED_h3d_anim_DataLayout
#include <h3d/anim/DataLayout.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fa4ac7cefcd029af_23_new,"h3d.anim.BufferObject","new",0x626c8279,"h3d.anim.BufferObject.new","h3d/anim/BufferAnimation.hx",23,0xf0b87be2)
HX_LOCAL_STACK_FRAME(_hx_pos_fa4ac7cefcd029af_28_getStride,"h3d.anim.BufferObject","getStride",0x8dc97428,"h3d.anim.BufferObject.getStride","h3d/anim/BufferAnimation.hx",28,0xf0b87be2)
HX_LOCAL_STACK_FRAME(_hx_pos_fa4ac7cefcd029af_39_clone,"h3d.anim.BufferObject","clone",0xe79f3db6,"h3d.anim.BufferObject.clone","h3d/anim/BufferAnimation.hx",39,0xf0b87be2)
namespace h3d{
namespace anim{

void BufferObject_obj::__construct(::String objectName,int dataOffset){
            	HX_STACKFRAME(&_hx_pos_fa4ac7cefcd029af_23_new)
HXLINE(  24)		super::__construct(objectName);
HXLINE(  25)		this->dataOffset = dataOffset;
            	}

Dynamic BufferObject_obj::__CreateEmpty() { return new BufferObject_obj; }

void *BufferObject_obj::_hx_vtable = 0;

Dynamic BufferObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BufferObject_obj > _hx_result = new BufferObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BufferObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c82ecc8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c82ecc8;
	} else {
		return inClassId==(int)0x1bc5ed65;
	}
}

int BufferObject_obj::getStride(){
            	HX_STACKFRAME(&_hx_pos_fa4ac7cefcd029af_28_getStride)
HXLINE(  29)		int stride = 0;
HXLINE(  30)		int this1 = this->layout;
HXDLIN(  30)		if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Position_dyn()))) != 0)) {
HXLINE(  30)			stride = (stride + 3);
            		}
HXLINE(  31)		int this2 = this->layout;
HXDLIN(  31)		if (((this2 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Rotation_dyn()))) != 0)) {
HXLINE(  31)			stride = (stride + 3);
            		}
HXLINE(  32)		int this3 = this->layout;
HXDLIN(  32)		if (((this3 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Scale_dyn()))) != 0)) {
HXLINE(  32)			stride = (stride + 3);
            		}
HXLINE(  33)		int this4 = this->layout;
HXDLIN(  33)		if (((this4 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::UV_dyn()))) != 0)) {
HXLINE(  33)			stride = (stride + 2);
            		}
HXLINE(  34)		int this5 = this->layout;
HXDLIN(  34)		if (((this5 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Alpha_dyn()))) != 0)) {
HXLINE(  34)			stride = (stride + 1);
            		}
HXLINE(  35)		int this6 = this->layout;
HXDLIN(  35)		if (((this6 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Property_dyn()))) != 0)) {
HXLINE(  35)			stride = (stride + 1);
            		}
HXLINE(  36)		return stride;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BufferObject_obj,getStride,return )

 ::h3d::anim::AnimatedObject BufferObject_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_fa4ac7cefcd029af_39_clone)
HXLINE(  40)		 ::h3d::anim::BufferObject o =  ::h3d::anim::BufferObject_obj::__alloc( HX_CTX ,this->objectName,this->dataOffset);
HXLINE(  41)		o->layout = this->layout;
HXLINE(  42)		o->propName = this->propName;
HXLINE(  43)		return o;
            	}



::hx::ObjectPtr< BufferObject_obj > BufferObject_obj::__new(::String objectName,int dataOffset) {
	::hx::ObjectPtr< BufferObject_obj > __this = new BufferObject_obj();
	__this->__construct(objectName,dataOffset);
	return __this;
}

::hx::ObjectPtr< BufferObject_obj > BufferObject_obj::__alloc(::hx::Ctx *_hx_ctx,::String objectName,int dataOffset) {
	BufferObject_obj *__this = (BufferObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BufferObject_obj), true, "h3d.anim.BufferObject"));
	*(void **)__this = BufferObject_obj::_hx_vtable;
	__this->__construct(objectName,dataOffset);
	return __this;
}

BufferObject_obj::BufferObject_obj()
{
}

void BufferObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BufferObject);
	HX_MARK_MEMBER_NAME(layout,"layout");
	HX_MARK_MEMBER_NAME(dataOffset,"dataOffset");
	HX_MARK_MEMBER_NAME(propCurrentValue,"propCurrentValue");
	HX_MARK_MEMBER_NAME(propName,"propName");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	 ::h3d::anim::AnimatedObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BufferObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layout,"layout");
	HX_VISIT_MEMBER_NAME(dataOffset,"dataOffset");
	HX_VISIT_MEMBER_NAME(propCurrentValue,"propCurrentValue");
	HX_VISIT_MEMBER_NAME(propName,"propName");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	 ::h3d::anim::AnimatedObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BufferObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return ::hx::Val( layout ); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return ::hx::Val( matrix ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"propName") ) { return ::hx::Val( propName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getStride") ) { return ::hx::Val( getStride_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataOffset") ) { return ::hx::Val( dataOffset ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"propCurrentValue") ) { return ::hx::Val( propCurrentValue ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BufferObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { layout=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"propName") ) { propName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataOffset") ) { dataOffset=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"propCurrentValue") ) { propCurrentValue=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BufferObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("layout",aa,ae,b8,58));
	outFields->push(HX_("dataOffset",5d,5d,e1,4b));
	outFields->push(HX_("propCurrentValue",bb,e0,53,ab));
	outFields->push(HX_("propName",8e,73,f7,9c));
	outFields->push(HX_("matrix",41,36,c8,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BufferObject_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BufferObject_obj,layout),HX_("layout",aa,ae,b8,58)},
	{::hx::fsInt,(int)offsetof(BufferObject_obj,dataOffset),HX_("dataOffset",5d,5d,e1,4b)},
	{::hx::fsFloat,(int)offsetof(BufferObject_obj,propCurrentValue),HX_("propCurrentValue",bb,e0,53,ab)},
	{::hx::fsString,(int)offsetof(BufferObject_obj,propName),HX_("propName",8e,73,f7,9c)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(BufferObject_obj,matrix),HX_("matrix",41,36,c8,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BufferObject_obj_sStaticStorageInfo = 0;
#endif

static ::String BufferObject_obj_sMemberFields[] = {
	HX_("layout",aa,ae,b8,58),
	HX_("dataOffset",5d,5d,e1,4b),
	HX_("propCurrentValue",bb,e0,53,ab),
	HX_("propName",8e,73,f7,9c),
	HX_("matrix",41,36,c8,bb),
	HX_("getStride",4f,a9,86,8d),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class BufferObject_obj::__mClass;

void BufferObject_obj::__register()
{
	BufferObject_obj _hx_dummy;
	BufferObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.anim.BufferObject",07,d2,91,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BufferObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BufferObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BufferObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BufferObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace anim
