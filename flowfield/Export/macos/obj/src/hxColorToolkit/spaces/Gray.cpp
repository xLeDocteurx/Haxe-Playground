#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Gray
#include <hxColorToolkit/spaces/Gray.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_92_new,"hxColorToolkit.spaces.Gray","new",0x7ffe4c73,"hxColorToolkit.spaces.Gray.new","hxColorToolkit/spaces/Gray.hx",92,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_34_getValue,"hxColorToolkit.spaces.Gray","getValue",0xe32b6e08,"hxColorToolkit.spaces.Gray.getValue","hxColorToolkit/spaces/Gray.hx",34,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_37_setValue,"hxColorToolkit.spaces.Gray","setValue",0x9188c77c,"hxColorToolkit.spaces.Gray.setValue","hxColorToolkit/spaces/Gray.hx",37,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_43_minValue,"hxColorToolkit.spaces.Gray","minValue",0x7a8bcb8c,"hxColorToolkit.spaces.Gray.minValue","hxColorToolkit/spaces/Gray.hx",43,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_47_maxValue,"hxColorToolkit.spaces.Gray","maxValue",0x2d71b13a,"hxColorToolkit.spaces.Gray.maxValue","hxColorToolkit/spaces/Gray.hx",47,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_58_get_gray,"hxColorToolkit.spaces.Gray","get_gray",0x15c26a79,"hxColorToolkit.spaces.Gray.get_gray","hxColorToolkit/spaces/Gray.hx",58,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_62_set_gray,"hxColorToolkit.spaces.Gray","set_gray",0xc41fc3ed,"hxColorToolkit.spaces.Gray.set_gray","hxColorToolkit/spaces/Gray.hx",62,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_66_toRGB,"hxColorToolkit.spaces.Gray","toRGB",0xb0685725,"hxColorToolkit.spaces.Gray.toRGB","hxColorToolkit/spaces/Gray.hx",66,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_75_getColor,"hxColorToolkit.spaces.Gray","getColor",0xfbcf5ffa,"hxColorToolkit.spaces.Gray.getColor","hxColorToolkit/spaces/Gray.hx",75,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_78_fromRGB,"hxColorToolkit.spaces.Gray","fromRGB",0x95371156,"hxColorToolkit.spaces.Gray.fromRGB","hxColorToolkit/spaces/Gray.hx",78,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_84_setColor,"hxColorToolkit.spaces.Gray","setColor",0xaa2cb96e,"hxColorToolkit.spaces.Gray.setColor","hxColorToolkit/spaces/Gray.hx",84,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_99_clone,"hxColorToolkit.spaces.Gray","clone",0xe4b2fa30,"hxColorToolkit.spaces.Gray.clone","hxColorToolkit/spaces/Gray.hx",99,0x866e543d)
HX_LOCAL_STACK_FRAME(_hx_pos_81b92b7a3cc17a84_102_interpolate,"hxColorToolkit.spaces.Gray","interpolate",0xefa41bd4,"hxColorToolkit.spaces.Gray.interpolate","hxColorToolkit/spaces/Gray.hx",102,0x866e543d)
namespace hxColorToolkit{
namespace spaces{

void Gray_obj::__construct( ::Dynamic __o_gray){
            		 ::Dynamic gray = __o_gray;
            		if (::hx::IsNull(__o_gray)) gray = 0;
            	HX_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_92_new)
HXLINE(  93)		this->numOfChannels = 1;
HXLINE(  94)		this->data = ::Array_obj< Float >::__new(0);
HXLINE(  95)		this->set_gray(( (Float)(gray) ));
            	}

Dynamic Gray_obj::__CreateEmpty() { return new Gray_obj; }

void *Gray_obj::_hx_vtable = 0;

Dynamic Gray_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Gray_obj > _hx_result = new Gray_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Gray_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2346808b;
}

static ::hxColorToolkit::spaces::Color_obj _hx_hxColorToolkit_spaces_Gray__hx_hxColorToolkit_spaces_Color= {
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::Gray_obj::getValue,
	( Float (::hx::Object::*)(int,Float))&::hxColorToolkit::spaces::Gray_obj::setValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::Gray_obj::minValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::Gray_obj::maxValue,
	( int (::hx::Object::*)())&::hxColorToolkit::spaces::Gray_obj::getColor,
	( ::Dynamic (::hx::Object::*)(int))&::hxColorToolkit::spaces::Gray_obj::setColor_41e3b804,
	(  ::hxColorToolkit::spaces::RGB (::hx::Object::*)())&::hxColorToolkit::spaces::Gray_obj::toRGB,
	( ::Dynamic (::hx::Object::*)( ::hxColorToolkit::spaces::RGB))&::hxColorToolkit::spaces::Gray_obj::fromRGB_488978a0,
	( ::Dynamic (::hx::Object::*)())&::hxColorToolkit::spaces::Gray_obj::clone_ee952b4b,
	( ::Dynamic (::hx::Object::*)(::Dynamic,::hx::Null< Float > ))&::hxColorToolkit::spaces::Gray_obj::interpolate_7d0ba1d9,
};

::Dynamic Gray_obj::interpolate_7d0ba1d9(::Dynamic target,::hx::Null< Float >  ratio) {
			return interpolate(target,ratio);
}

::Dynamic Gray_obj::clone_ee952b4b() {
			return clone();
}

::Dynamic Gray_obj::fromRGB_488978a0( ::hxColorToolkit::spaces::RGB rgb) {
			return fromRGB(rgb);
}

::Dynamic Gray_obj::setColor_41e3b804(int c) {
			return setColor(c);
}
void *Gray_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x98fa9e0b: return &_hx_hxColorToolkit_spaces_Gray__hx_hxColorToolkit_spaces_Color;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float Gray_obj::getValue(int channel){
            	HX_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_34_getValue)
HXDLIN(  34)		return this->data->__get(channel);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Gray_obj,getValue,return )

Float Gray_obj::setValue(int channel,Float val){
            	HX_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_37_setValue)
HXLINE(  38)		this->data[channel] = ::Math_obj::min(( (Float)(255) ),::Math_obj::max(val,( (Float)(0) )));
HXLINE(  39)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Gray_obj,setValue,return )

Float Gray_obj::minValue(int channel){
            	HX_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_43_minValue)
HXDLIN(  43)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Gray_obj,minValue,return )

Float Gray_obj::maxValue(int channel){
            	HX_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_47_maxValue)
HXDLIN(  47)		return ( (Float)(255) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Gray_obj,maxValue,return )

Float Gray_obj::get_gray(){
            	HX_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_58_get_gray)
HXDLIN(  58)		return this->getValue(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gray_obj,get_gray,return )

Float Gray_obj::set_gray(Float value){
            	HX_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_62_set_gray)
HXDLIN(  62)		return this->setValue(0,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Gray_obj,set_gray,return )

 ::hxColorToolkit::spaces::RGB Gray_obj::toRGB(){
            	HX_GC_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_66_toRGB)
HXDLIN(  66)		Float _hx_tmp = this->get_gray();
HXDLIN(  66)		Float _hx_tmp1 = this->get_gray();
HXDLIN(  66)		return  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->get_gray());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gray_obj,toRGB,return )

int Gray_obj::getColor(){
            	HX_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_75_getColor)
HXDLIN(  75)		return this->toRGB()->getColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gray_obj,getColor,return )

 ::hxColorToolkit::spaces::Gray Gray_obj::fromRGB( ::hxColorToolkit::spaces::RGB rgb){
            	HX_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_78_fromRGB)
HXLINE(  79)		Float _hx_tmp = (((Float)0.3) * rgb->get_red());
HXDLIN(  79)		Float _hx_tmp1 = (_hx_tmp + (((Float)0.59) * rgb->get_green()));
HXDLIN(  79)		this->set_gray((_hx_tmp1 + (((Float)0.11) * rgb->get_blue())));
HXLINE(  80)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Gray_obj,fromRGB,return )

 ::hxColorToolkit::spaces::Gray Gray_obj::setColor(int color){
            	HX_GC_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_84_setColor)
HXDLIN(  84)		return this->fromRGB( ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,((color >> 16) & 255),((color >> 8) & 255),(color & 255)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Gray_obj,setColor,return )

 ::hxColorToolkit::spaces::Gray Gray_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_99_clone)
HXDLIN(  99)		return  ::hxColorToolkit::spaces::Gray_obj::__alloc( HX_CTX ,this->get_gray());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gray_obj,clone,return )

 ::hxColorToolkit::spaces::Gray Gray_obj::interpolate(::Dynamic target,::hx::Null< Float >  __o_ratio){
            		Float ratio = __o_ratio.Default(((Float)0.5));
            	HX_GC_STACKFRAME(&_hx_pos_81b92b7a3cc17a84_102_interpolate)
HXLINE( 103)		 ::hxColorToolkit::spaces::Gray target1;
HXDLIN( 103)		if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::Gray >()) ))) {
HXLINE( 103)			target1 = ( ( ::hxColorToolkit::spaces::Gray)(target) );
            		}
            		else {
HXLINE( 103)			 ::hxColorToolkit::spaces::Gray target2 =  ::hxColorToolkit::spaces::Gray_obj::__alloc( HX_CTX ,null());
HXDLIN( 103)			target1 = target2->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(target));
            		}
HXLINE( 104)		Float _hx_tmp = this->get_gray();
HXDLIN( 104)		Float _hx_tmp1 = target1->get_gray();
HXDLIN( 104)		return  ::hxColorToolkit::spaces::Gray_obj::__alloc( HX_CTX ,(_hx_tmp + ((_hx_tmp1 - this->get_gray()) * ratio)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Gray_obj,interpolate,return )


::hx::ObjectPtr< Gray_obj > Gray_obj::__new( ::Dynamic __o_gray) {
	::hx::ObjectPtr< Gray_obj > __this = new Gray_obj();
	__this->__construct(__o_gray);
	return __this;
}

::hx::ObjectPtr< Gray_obj > Gray_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_gray) {
	Gray_obj *__this = (Gray_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Gray_obj), true, "hxColorToolkit.spaces.Gray"));
	*(void **)__this = Gray_obj::_hx_vtable;
	__this->__construct(__o_gray);
	return __this;
}

Gray_obj::Gray_obj()
{
}

void Gray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gray);
	HX_MARK_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void Gray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val Gray_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gray") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gray() ); }
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toRGB") ) { return ::hx::Val( toRGB_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromRGB") ) { return ::hx::Val( fromRGB_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return ::hx::Val( setValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_gray") ) { return ::hx::Val( get_gray_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gray") ) { return ::hx::Val( set_gray_dyn() ); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return ::hx::Val( getColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return ::hx::Val( interpolate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { return ::hx::Val( numOfChannels ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Gray_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gray") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_gray(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { numOfChannels=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Gray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numOfChannels",6d,ec,b1,8b));
	outFields->push(HX_("gray",e3,cf,6b,44));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Gray_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Gray_obj,numOfChannels),HX_("numOfChannels",6d,ec,b1,8b)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Gray_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Gray_obj_sStaticStorageInfo = 0;
#endif

static ::String Gray_obj_sMemberFields[] = {
	HX_("numOfChannels",6d,ec,b1,8b),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("get_gray",6c,8b,26,c4),
	HX_("set_gray",e0,e4,83,72),
	HX_("toRGB",52,70,18,14),
	HX_("getColor",ed,80,33,aa),
	HX_("fromRGB",c3,8f,01,58),
	HX_("setColor",61,da,90,58),
	HX_("clone",5d,13,63,48),
	HX_("interpolate",c1,d4,32,1f),
	HX_("data",2a,56,63,42),
	::String(null()) };

::hx::Class Gray_obj::__mClass;

void Gray_obj::__register()
{
	Gray_obj _hx_dummy;
	Gray_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.spaces.Gray",01,97,44,da);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Gray_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Gray_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Gray_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Gray_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace spaces
