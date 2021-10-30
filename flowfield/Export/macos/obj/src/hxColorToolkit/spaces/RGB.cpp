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
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_682f6b6231638af7_131_new,"hxColorToolkit.spaces.RGB","new",0x45856a21,"hxColorToolkit.spaces.RGB.new","hxColorToolkit/spaces/RGB.hx",131,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_34_getValue,"hxColorToolkit.spaces.RGB","getValue",0x9fd3f99a,"hxColorToolkit.spaces.RGB.getValue","hxColorToolkit/spaces/RGB.hx",34,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_37_setValue,"hxColorToolkit.spaces.RGB","setValue",0x4e31530e,"hxColorToolkit.spaces.RGB.setValue","hxColorToolkit/spaces/RGB.hx",37,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_43_minValue,"hxColorToolkit.spaces.RGB","minValue",0x3734571e,"hxColorToolkit.spaces.RGB.minValue","hxColorToolkit/spaces/RGB.hx",43,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_47_maxValue,"hxColorToolkit.spaces.RGB","maxValue",0xea1a3ccc,"hxColorToolkit.spaces.RGB.maxValue","hxColorToolkit/spaces/RGB.hx",47,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_69_get_red,"hxColorToolkit.spaces.RGB","get_red",0xc793b029,"hxColorToolkit.spaces.RGB.get_red","hxColorToolkit/spaces/RGB.hx",69,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_73_set_red,"hxColorToolkit.spaces.RGB","set_red",0xba954135,"hxColorToolkit.spaces.RGB.set_red","hxColorToolkit/spaces/RGB.hx",73,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_77_get_green,"hxColorToolkit.spaces.RGB","get_green",0x4b2f4b9b,"hxColorToolkit.spaces.RGB.get_green","hxColorToolkit/spaces/RGB.hx",77,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_81_set_green,"hxColorToolkit.spaces.RGB","set_green",0x2e8037a7,"hxColorToolkit.spaces.RGB.set_green","hxColorToolkit/spaces/RGB.hx",81,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_85_get_blue,"hxColorToolkit.spaces.RGB","get_blue",0xcf1868c2,"hxColorToolkit.spaces.RGB.get_blue","hxColorToolkit/spaces/RGB.hx",85,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_89_set_blue,"hxColorToolkit.spaces.RGB","set_blue",0x7d75c236,"hxColorToolkit.spaces.RGB.set_blue","hxColorToolkit/spaces/RGB.hx",89,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_93_toRGB,"hxColorToolkit.spaces.RGB","toRGB",0x3c34bc53,"hxColorToolkit.spaces.RGB.toRGB","hxColorToolkit/spaces/RGB.hx",93,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_102_getColor,"hxColorToolkit.spaces.RGB","getColor",0xb877eb8c,"hxColorToolkit.spaces.RGB.getColor","hxColorToolkit/spaces/RGB.hx",102,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_105_fromRGB,"hxColorToolkit.spaces.RGB","fromRGB",0xf8c99e04,"hxColorToolkit.spaces.RGB.fromRGB","hxColorToolkit/spaces/RGB.hx",105,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_117_setColor,"hxColorToolkit.spaces.RGB","setColor",0x66d54500,"hxColorToolkit.spaces.RGB.setColor","hxColorToolkit/spaces/RGB.hx",117,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_140_clone,"hxColorToolkit.spaces.RGB","clone",0x707f5f5e,"hxColorToolkit.spaces.RGB.clone","hxColorToolkit/spaces/RGB.hx",140,0xe117be8f)
HX_LOCAL_STACK_FRAME(_hx_pos_682f6b6231638af7_143_interpolate,"hxColorToolkit.spaces.RGB","interpolate",0xcd259782,"hxColorToolkit.spaces.RGB.interpolate","hxColorToolkit/spaces/RGB.hx",143,0xe117be8f)
namespace hxColorToolkit{
namespace spaces{

void RGB_obj::__construct( ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b){
            		 ::Dynamic r = __o_r;
            		if (::hx::IsNull(__o_r)) r = 0;
            		 ::Dynamic g = __o_g;
            		if (::hx::IsNull(__o_g)) g = 0;
            		 ::Dynamic b = __o_b;
            		if (::hx::IsNull(__o_b)) b = 0;
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_131_new)
HXLINE( 132)		this->numOfChannels = 3;
HXLINE( 133)		this->data = ::Array_obj< Float >::__new(0);
HXLINE( 134)		this->set_red(( (Float)(r) ));
HXLINE( 135)		this->set_green(( (Float)(g) ));
HXLINE( 136)		this->set_blue(( (Float)(b) ));
            	}

Dynamic RGB_obj::__CreateEmpty() { return new RGB_obj; }

void *RGB_obj::_hx_vtable = 0;

Dynamic RGB_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RGB_obj > _hx_result = new RGB_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool RGB_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e8eb6f5;
}

static ::hxColorToolkit::spaces::Color_obj _hx_hxColorToolkit_spaces_RGB__hx_hxColorToolkit_spaces_Color= {
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::RGB_obj::getValue,
	( Float (::hx::Object::*)(int,Float))&::hxColorToolkit::spaces::RGB_obj::setValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::RGB_obj::minValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::RGB_obj::maxValue,
	( int (::hx::Object::*)())&::hxColorToolkit::spaces::RGB_obj::getColor,
	( ::Dynamic (::hx::Object::*)(int))&::hxColorToolkit::spaces::RGB_obj::setColor_41e3b804,
	(  ::hxColorToolkit::spaces::RGB (::hx::Object::*)())&::hxColorToolkit::spaces::RGB_obj::toRGB,
	( ::Dynamic (::hx::Object::*)( ::hxColorToolkit::spaces::RGB))&::hxColorToolkit::spaces::RGB_obj::fromRGB_488978a0,
	( ::Dynamic (::hx::Object::*)())&::hxColorToolkit::spaces::RGB_obj::clone_ee952b4b,
	( ::Dynamic (::hx::Object::*)(::Dynamic,::hx::Null< Float > ))&::hxColorToolkit::spaces::RGB_obj::interpolate_7d0ba1d9,
};

::Dynamic RGB_obj::interpolate_7d0ba1d9(::Dynamic target,::hx::Null< Float >  ratio) {
			return interpolate(target,ratio);
}

::Dynamic RGB_obj::clone_ee952b4b() {
			return clone();
}

::Dynamic RGB_obj::fromRGB_488978a0( ::hxColorToolkit::spaces::RGB rgb) {
			return fromRGB(rgb);
}

::Dynamic RGB_obj::setColor_41e3b804(int c) {
			return setColor(c);
}
void *RGB_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x98fa9e0b: return &_hx_hxColorToolkit_spaces_RGB__hx_hxColorToolkit_spaces_Color;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float RGB_obj::getValue(int channel){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_34_getValue)
HXDLIN(  34)		return this->data->__get(channel);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,getValue,return )

Float RGB_obj::setValue(int channel,Float val){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_37_setValue)
HXLINE(  38)		this->data[channel] = ::Math_obj::min(( (Float)(255) ),::Math_obj::max(val,( (Float)(0) )));
HXLINE(  39)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC2(RGB_obj,setValue,return )

Float RGB_obj::minValue(int channel){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_43_minValue)
HXDLIN(  43)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,minValue,return )

Float RGB_obj::maxValue(int channel){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_47_maxValue)
HXDLIN(  47)		return ( (Float)(255) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,maxValue,return )

Float RGB_obj::get_red(){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_69_get_red)
HXDLIN(  69)		return this->getValue(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RGB_obj,get_red,return )

Float RGB_obj::set_red(Float value){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_73_set_red)
HXDLIN(  73)		return this->setValue(0,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,set_red,return )

Float RGB_obj::get_green(){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_77_get_green)
HXDLIN(  77)		return this->getValue(1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RGB_obj,get_green,return )

Float RGB_obj::set_green(Float value){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_81_set_green)
HXDLIN(  81)		return this->setValue(1,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,set_green,return )

Float RGB_obj::get_blue(){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_85_get_blue)
HXDLIN(  85)		return this->getValue(2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RGB_obj,get_blue,return )

Float RGB_obj::set_blue(Float value){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_89_set_blue)
HXDLIN(  89)		return this->setValue(2,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,set_blue,return )

 ::hxColorToolkit::spaces::RGB RGB_obj::toRGB(){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_93_toRGB)
HXDLIN(  93)		return this->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RGB_obj,toRGB,return )

int RGB_obj::getColor(){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_102_getColor)
HXDLIN( 102)		int _hx_tmp = (::Math_obj::round(this->get_red()) << 16);
HXDLIN( 102)		int _hx_tmp1 = (_hx_tmp | (::Math_obj::round(this->get_green()) << 8));
HXDLIN( 102)		return (_hx_tmp1 | ::Math_obj::round(this->get_blue()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(RGB_obj,getColor,return )

 ::hxColorToolkit::spaces::RGB RGB_obj::fromRGB( ::hxColorToolkit::spaces::RGB rgb){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_105_fromRGB)
HXLINE( 106)		this->set_red(rgb->get_red());
HXLINE( 107)		this->set_green(rgb->get_green());
HXLINE( 108)		this->set_blue(rgb->get_blue());
HXLINE( 109)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,fromRGB,return )

 ::hxColorToolkit::spaces::RGB RGB_obj::setColor(int color){
            	HX_STACKFRAME(&_hx_pos_682f6b6231638af7_117_setColor)
HXLINE( 118)		this->set_red(( (Float)(((color >> 16) & 255)) ));
HXLINE( 119)		this->set_green(( (Float)(((color >> 8) & 255)) ));
HXLINE( 120)		this->set_blue(( (Float)((color & 255)) ));
HXLINE( 121)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,setColor,return )

 ::hxColorToolkit::spaces::RGB RGB_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_682f6b6231638af7_140_clone)
HXDLIN( 140)		Float _hx_tmp = this->get_red();
HXDLIN( 140)		Float _hx_tmp1 = this->get_green();
HXDLIN( 140)		return  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->get_blue());
            	}


HX_DEFINE_DYNAMIC_FUNC0(RGB_obj,clone,return )

 ::hxColorToolkit::spaces::RGB RGB_obj::interpolate(::Dynamic target,::hx::Null< Float >  __o_ratio){
            		Float ratio = __o_ratio.Default(((Float)0.5));
            	HX_GC_STACKFRAME(&_hx_pos_682f6b6231638af7_143_interpolate)
HXLINE( 144)		 ::hxColorToolkit::spaces::RGB target1;
HXDLIN( 144)		if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::RGB >()) ))) {
HXLINE( 144)			target1 = ( ( ::hxColorToolkit::spaces::RGB)(target) );
            		}
            		else {
HXLINE( 144)			 ::hxColorToolkit::spaces::RGB target2 =  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 144)			target1 = target2->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(target));
            		}
HXLINE( 145)		Float _hx_tmp = this->get_red();
HXDLIN( 145)		Float _hx_tmp1 = target1->get_red();
HXDLIN( 145)		Float _hx_tmp2 = (_hx_tmp + ((_hx_tmp1 - this->get_red()) * ratio));
HXDLIN( 145)		Float _hx_tmp3 = this->get_green();
HXDLIN( 145)		Float _hx_tmp4 = target1->get_green();
HXDLIN( 145)		Float _hx_tmp5 = (_hx_tmp3 + ((_hx_tmp4 - this->get_green()) * ratio));
HXDLIN( 145)		Float _hx_tmp6 = this->get_blue();
HXDLIN( 145)		Float _hx_tmp7 = target1->get_blue();
HXDLIN( 145)		return  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,_hx_tmp2,_hx_tmp5,(_hx_tmp6 + ((_hx_tmp7 - this->get_blue()) * ratio)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(RGB_obj,interpolate,return )


::hx::ObjectPtr< RGB_obj > RGB_obj::__new( ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b) {
	::hx::ObjectPtr< RGB_obj > __this = new RGB_obj();
	__this->__construct(__o_r,__o_g,__o_b);
	return __this;
}

::hx::ObjectPtr< RGB_obj > RGB_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b) {
	RGB_obj *__this = (RGB_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RGB_obj), true, "hxColorToolkit.spaces.RGB"));
	*(void **)__this = RGB_obj::_hx_vtable;
	__this->__construct(__o_r,__o_g,__o_b);
	return __this;
}

RGB_obj::RGB_obj()
{
}

void RGB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RGB);
	HX_MARK_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void RGB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val RGB_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_red() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blue") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blue() ); }
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"green") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_green() ); }
		if (HX_FIELD_EQ(inName,"toRGB") ) { return ::hx::Val( toRGB_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_red") ) { return ::hx::Val( get_red_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_red") ) { return ::hx::Val( set_red_dyn() ); }
		if (HX_FIELD_EQ(inName,"fromRGB") ) { return ::hx::Val( fromRGB_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return ::hx::Val( setValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blue") ) { return ::hx::Val( get_blue_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blue") ) { return ::hx::Val( set_blue_dyn() ); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return ::hx::Val( getColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_green") ) { return ::hx::Val( get_green_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_green") ) { return ::hx::Val( set_green_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return ::hx::Val( interpolate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { return ::hx::Val( numOfChannels ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RGB_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_red(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blue") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blue(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"green") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_green(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { numOfChannels=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RGB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numOfChannels",6d,ec,b1,8b));
	outFields->push(HX_("red",51,d9,56,00));
	outFields->push(HX_("green",c3,0e,ed,99));
	outFields->push(HX_("blue",9a,42,19,41));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RGB_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(RGB_obj,numOfChannels),HX_("numOfChannels",6d,ec,b1,8b)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(RGB_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RGB_obj_sStaticStorageInfo = 0;
#endif

static ::String RGB_obj_sMemberFields[] = {
	HX_("numOfChannels",6d,ec,b1,8b),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("get_red",e8,a1,cb,26),
	HX_("set_red",f4,32,cd,19),
	HX_("get_green",1a,6b,96,dd),
	HX_("set_green",26,57,e7,c0),
	HX_("get_blue",23,fe,d3,c0),
	HX_("set_blue",97,57,31,6f),
	HX_("toRGB",52,70,18,14),
	HX_("getColor",ed,80,33,aa),
	HX_("fromRGB",c3,8f,01,58),
	HX_("setColor",61,da,90,58),
	HX_("clone",5d,13,63,48),
	HX_("interpolate",c1,d4,32,1f),
	HX_("data",2a,56,63,42),
	::String(null()) };

::hx::Class RGB_obj::__mClass;

void RGB_obj::__register()
{
	RGB_obj _hx_dummy;
	RGB_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.spaces.RGB",af,c5,e3,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RGB_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RGB_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RGB_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RGB_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace spaces
