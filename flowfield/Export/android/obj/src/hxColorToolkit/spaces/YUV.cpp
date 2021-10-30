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
#ifndef INCLUDED_hxColorToolkit_spaces_YUV
#include <hxColorToolkit/spaces/YUV.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_103_new,"hxColorToolkit.spaces.YUV","new",0x859e50ae,"hxColorToolkit.spaces.YUV.new","hxColorToolkit/spaces/YUV.hx",103,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_36_getValue,"hxColorToolkit.spaces.YUV","getValue",0x7e0b33ed,"hxColorToolkit.spaces.YUV.getValue","hxColorToolkit/spaces/YUV.hx",36,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_39_setValue,"hxColorToolkit.spaces.YUV","setValue",0x2c688d61,"hxColorToolkit.spaces.YUV.setValue","hxColorToolkit/spaces/YUV.hx",39,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_45_minValue,"hxColorToolkit.spaces.YUV","minValue",0x156b9171,"hxColorToolkit.spaces.YUV.minValue","hxColorToolkit/spaces/YUV.hx",45,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_49_maxValue,"hxColorToolkit.spaces.YUV","maxValue",0xc851771f,"hxColorToolkit.spaces.YUV.maxValue","hxColorToolkit/spaces/YUV.hx",49,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_57_get_y,"hxColorToolkit.spaces.YUV","get_y",0xde86551e,"hxColorToolkit.spaces.YUV.get_y","hxColorToolkit/spaces/YUV.hx",57,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_61_set_y,"hxColorToolkit.spaces.YUV","set_y",0xc7554b2a,"hxColorToolkit.spaces.YUV.set_y","hxColorToolkit/spaces/YUV.hx",61,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_65_get_u,"hxColorToolkit.spaces.YUV","get_u",0xde86551a,"hxColorToolkit.spaces.YUV.get_u","hxColorToolkit/spaces/YUV.hx",65,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_69_set_u,"hxColorToolkit.spaces.YUV","set_u",0xc7554b26,"hxColorToolkit.spaces.YUV.set_u","hxColorToolkit/spaces/YUV.hx",69,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_73_get_v,"hxColorToolkit.spaces.YUV","get_v",0xde86551b,"hxColorToolkit.spaces.YUV.get_v","hxColorToolkit/spaces/YUV.hx",73,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_77_set_v,"hxColorToolkit.spaces.YUV","set_v",0xc7554b27,"hxColorToolkit.spaces.YUV.set_v","hxColorToolkit/spaces/YUV.hx",77,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_81_toRGB,"hxColorToolkit.spaces.YUV","toRGB",0x613e2020,"hxColorToolkit.spaces.YUV.toRGB","hxColorToolkit/spaces/YUV.hx",81,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_86_getColor,"hxColorToolkit.spaces.YUV","getColor",0x96af25df,"hxColorToolkit.spaces.YUV.getColor","hxColorToolkit/spaces/YUV.hx",86,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_89_fromRGB,"hxColorToolkit.spaces.YUV","fromRGB",0x7dcd4f11,"hxColorToolkit.spaces.YUV.fromRGB","hxColorToolkit/spaces/YUV.hx",89,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_100_setColor,"hxColorToolkit.spaces.YUV","setColor",0x450c7f53,"hxColorToolkit.spaces.YUV.setColor","hxColorToolkit/spaces/YUV.hx",100,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_112_clone,"hxColorToolkit.spaces.YUV","clone",0x9588c32b,"hxColorToolkit.spaces.YUV.clone","hxColorToolkit/spaces/YUV.hx",112,0xca6ba8a2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc80fa4d74a2072a_115_interpolate,"hxColorToolkit.spaces.YUV","interpolate",0xf88b530f,"hxColorToolkit.spaces.YUV.interpolate","hxColorToolkit/spaces/YUV.hx",115,0xca6ba8a2)
namespace hxColorToolkit{
namespace spaces{

void YUV_obj::__construct( ::Dynamic __o_y, ::Dynamic __o_u, ::Dynamic __o_v){
            		 ::Dynamic y = __o_y;
            		if (::hx::IsNull(__o_y)) y = 0;
            		 ::Dynamic u = __o_u;
            		if (::hx::IsNull(__o_u)) u = 0;
            		 ::Dynamic v = __o_v;
            		if (::hx::IsNull(__o_v)) v = 0;
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_103_new)
HXLINE( 104)		this->numOfChannels = 3;
HXLINE( 105)		this->data = ::Array_obj< Float >::__new(0);
HXLINE( 106)		this->set_y(( (Float)(y) ));
HXLINE( 107)		this->set_u(( (Float)(u) ));
HXLINE( 108)		this->set_v(( (Float)(v) ));
            	}

Dynamic YUV_obj::__CreateEmpty() { return new YUV_obj; }

void *YUV_obj::_hx_vtable = 0;

Dynamic YUV_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< YUV_obj > _hx_result = new YUV_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool YUV_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e941302;
}

static ::hxColorToolkit::spaces::Color_obj _hx_hxColorToolkit_spaces_YUV__hx_hxColorToolkit_spaces_Color= {
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::YUV_obj::getValue,
	( Float (::hx::Object::*)(int,Float))&::hxColorToolkit::spaces::YUV_obj::setValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::YUV_obj::minValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::YUV_obj::maxValue,
	( int (::hx::Object::*)())&::hxColorToolkit::spaces::YUV_obj::getColor,
	( ::Dynamic (::hx::Object::*)(int))&::hxColorToolkit::spaces::YUV_obj::setColor_41e3b804,
	(  ::hxColorToolkit::spaces::RGB (::hx::Object::*)())&::hxColorToolkit::spaces::YUV_obj::toRGB,
	( ::Dynamic (::hx::Object::*)( ::hxColorToolkit::spaces::RGB))&::hxColorToolkit::spaces::YUV_obj::fromRGB_488978a0,
	( ::Dynamic (::hx::Object::*)())&::hxColorToolkit::spaces::YUV_obj::clone_ee952b4b,
	( ::Dynamic (::hx::Object::*)(::Dynamic,::hx::Null< Float > ))&::hxColorToolkit::spaces::YUV_obj::interpolate_7d0ba1d9,
};

::Dynamic YUV_obj::interpolate_7d0ba1d9(::Dynamic target,::hx::Null< Float >  ratio) {
			return interpolate(target,ratio);
}

::Dynamic YUV_obj::clone_ee952b4b() {
			return clone();
}

::Dynamic YUV_obj::fromRGB_488978a0( ::hxColorToolkit::spaces::RGB rgb) {
			return fromRGB(rgb);
}

::Dynamic YUV_obj::setColor_41e3b804(int c) {
			return setColor(c);
}
void *YUV_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x98fa9e0b: return &_hx_hxColorToolkit_spaces_YUV__hx_hxColorToolkit_spaces_Color;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float YUV_obj::getValue(int channel){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_36_getValue)
HXDLIN(  36)		return this->data->__get(channel);
            	}


HX_DEFINE_DYNAMIC_FUNC1(YUV_obj,getValue,return )

Float YUV_obj::setValue(int channel,Float val){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_39_setValue)
HXLINE(  40)		this->data[channel] = ::Math_obj::min(( (Float)(255) ),::Math_obj::max(val,( (Float)(0) )));
HXLINE(  41)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC2(YUV_obj,setValue,return )

Float YUV_obj::minValue(int channel){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_45_minValue)
HXDLIN(  45)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(YUV_obj,minValue,return )

Float YUV_obj::maxValue(int channel){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_49_maxValue)
HXDLIN(  49)		return ( (Float)(255) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(YUV_obj,maxValue,return )

Float YUV_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_57_get_y)
HXDLIN(  57)		return this->getValue(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(YUV_obj,get_y,return )

Float YUV_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_61_set_y)
HXDLIN(  61)		return this->setValue(0,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(YUV_obj,set_y,return )

Float YUV_obj::get_u(){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_65_get_u)
HXDLIN(  65)		return this->getValue(1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(YUV_obj,get_u,return )

Float YUV_obj::set_u(Float value){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_69_set_u)
HXDLIN(  69)		return this->setValue(1,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(YUV_obj,set_u,return )

Float YUV_obj::get_v(){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_73_get_v)
HXDLIN(  73)		return this->getValue(2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(YUV_obj,get_v,return )

Float YUV_obj::set_v(Float value){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_77_set_v)
HXDLIN(  77)		return this->setValue(2,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(YUV_obj,set_v,return )

 ::hxColorToolkit::spaces::RGB YUV_obj::toRGB(){
            	HX_GC_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_81_toRGB)
HXDLIN(  81)		Float _hx_tmp = this->get_y();
HXDLIN(  81)		Float _hx_tmp1 = ::Math_obj::max(( (Float)(0) ),::Math_obj::min((_hx_tmp + (((Float)1.402) * (this->get_v() - ( (Float)(128) )))),( (Float)(255) )));
HXDLIN(  81)		Float _hx_tmp2 = this->get_y();
HXDLIN(  81)		Float _hx_tmp3 = (_hx_tmp2 - (((Float)0.344) * (this->get_u() - ( (Float)(128) ))));
HXDLIN(  81)		Float _hx_tmp4 = ::Math_obj::max(( (Float)(0) ),::Math_obj::min((_hx_tmp3 - (((Float)0.714) * (this->get_v() - ( (Float)(128) )))),( (Float)(255) )));
HXLINE(  82)		Float _hx_tmp5 = this->get_y();
HXLINE(  81)		return  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp4,::Math_obj::max(( (Float)(0) ),::Math_obj::min((_hx_tmp5 + (((Float)1.772) * (this->get_u() - ( (Float)(128) )))),( (Float)(255) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(YUV_obj,toRGB,return )

int YUV_obj::getColor(){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_86_getColor)
HXDLIN(  86)		return this->toRGB()->getColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(YUV_obj,getColor,return )

 ::hxColorToolkit::spaces::YUV YUV_obj::fromRGB( ::hxColorToolkit::spaces::RGB rgb){
            	HX_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_89_fromRGB)
HXLINE(  90)		Float r = rgb->get_red();
HXLINE(  91)		Float g = rgb->get_green();
HXLINE(  92)		Float b = rgb->get_blue();
HXLINE(  93)		this->set_y((((((Float)0.299) * r) + (((Float)0.587) * g)) + (((Float)0.114) * b)));
HXLINE(  94)		this->set_u(((((r * ((Float)-0.169)) + (g * ((Float)-0.331))) + (b * ((Float)0.499))) + 128));
HXLINE(  95)		this->set_v(((((r * ((Float)0.499)) + (g * ((Float)-0.418))) + (b * ((Float)-0.0813))) + 128));
HXLINE(  96)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(YUV_obj,fromRGB,return )

 ::hxColorToolkit::spaces::YUV YUV_obj::setColor(int color){
            	HX_GC_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_100_setColor)
HXDLIN( 100)		return this->fromRGB( ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,((color >> 16) & 255),((color >> 8) & 255),(color & 255)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(YUV_obj,setColor,return )

 ::hxColorToolkit::spaces::YUV YUV_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_112_clone)
HXDLIN( 112)		Float _hx_tmp = this->get_y();
HXDLIN( 112)		Float _hx_tmp1 = this->get_u();
HXDLIN( 112)		return  ::hxColorToolkit::spaces::YUV_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->get_v());
            	}


HX_DEFINE_DYNAMIC_FUNC0(YUV_obj,clone,return )

 ::hxColorToolkit::spaces::YUV YUV_obj::interpolate(::Dynamic target,::hx::Null< Float >  __o_ratio){
            		Float ratio = __o_ratio.Default(((Float)0.5));
            	HX_GC_STACKFRAME(&_hx_pos_bc80fa4d74a2072a_115_interpolate)
HXLINE( 116)		 ::hxColorToolkit::spaces::YUV target1;
HXDLIN( 116)		if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::YUV >()) ))) {
HXLINE( 116)			target1 = ( ( ::hxColorToolkit::spaces::YUV)(target) );
            		}
            		else {
HXLINE( 116)			 ::hxColorToolkit::spaces::YUV target2 =  ::hxColorToolkit::spaces::YUV_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 116)			target1 = target2->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(target));
            		}
HXLINE( 117)		Float _hx_tmp = this->get_y();
HXDLIN( 117)		Float _hx_tmp1 = target1->get_y();
HXDLIN( 117)		Float _hx_tmp2 = (_hx_tmp + ((_hx_tmp1 - this->get_y()) * ratio));
HXDLIN( 117)		Float _hx_tmp3 = this->get_u();
HXDLIN( 117)		Float _hx_tmp4 = target1->get_u();
HXDLIN( 117)		Float _hx_tmp5 = (_hx_tmp3 + ((_hx_tmp4 - this->get_u()) * ratio));
HXDLIN( 117)		Float _hx_tmp6 = this->get_v();
HXDLIN( 117)		Float _hx_tmp7 = target1->get_v();
HXDLIN( 117)		return  ::hxColorToolkit::spaces::YUV_obj::__alloc( HX_CTX ,_hx_tmp2,_hx_tmp5,(_hx_tmp6 + ((_hx_tmp7 - this->get_v()) * ratio)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(YUV_obj,interpolate,return )


::hx::ObjectPtr< YUV_obj > YUV_obj::__new( ::Dynamic __o_y, ::Dynamic __o_u, ::Dynamic __o_v) {
	::hx::ObjectPtr< YUV_obj > __this = new YUV_obj();
	__this->__construct(__o_y,__o_u,__o_v);
	return __this;
}

::hx::ObjectPtr< YUV_obj > YUV_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_y, ::Dynamic __o_u, ::Dynamic __o_v) {
	YUV_obj *__this = (YUV_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(YUV_obj), true, "hxColorToolkit.spaces.YUV"));
	*(void **)__this = YUV_obj::_hx_vtable;
	__this->__construct(__o_y,__o_u,__o_v);
	return __this;
}

YUV_obj::YUV_obj()
{
}

void YUV_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(YUV);
	HX_MARK_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void YUV_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val YUV_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_u() ); }
		if (HX_FIELD_EQ(inName,"v") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_v() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_u") ) { return ::hx::Val( get_u_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_u") ) { return ::hx::Val( set_u_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_v") ) { return ::hx::Val( get_v_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_v") ) { return ::hx::Val( set_v_dyn() ); }
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

::hx::Val YUV_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_u(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"v") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_v(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { numOfChannels=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void YUV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numOfChannels",6d,ec,b1,8b));
	outFields->push(HX_("u",75,00,00,00));
	outFields->push(HX_("v",76,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo YUV_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(YUV_obj,numOfChannels),HX_("numOfChannels",6d,ec,b1,8b)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(YUV_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *YUV_obj_sStaticStorageInfo = 0;
#endif

static ::String YUV_obj_sMemberFields[] = {
	HX_("numOfChannels",6d,ec,b1,8b),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_u",4c,a5,60,91),
	HX_("set_u",58,9b,2f,7a),
	HX_("get_v",4d,a5,60,91),
	HX_("set_v",59,9b,2f,7a),
	HX_("toRGB",52,70,18,14),
	HX_("getColor",ed,80,33,aa),
	HX_("fromRGB",c3,8f,01,58),
	HX_("setColor",61,da,90,58),
	HX_("clone",5d,13,63,48),
	HX_("interpolate",c1,d4,32,1f),
	HX_("data",2a,56,63,42),
	::String(null()) };

::hx::Class YUV_obj::__mClass;

void YUV_obj::__register()
{
	YUV_obj _hx_dummy;
	YUV_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.spaces.YUV",bc,21,e9,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(YUV_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< YUV_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = YUV_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = YUV_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace spaces
