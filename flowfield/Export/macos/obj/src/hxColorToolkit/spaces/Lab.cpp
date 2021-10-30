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
#ifndef INCLUDED_hxColorToolkit_spaces_Lab
#include <hxColorToolkit/spaces/Lab.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_XYZ
#include <hxColorToolkit/spaces/XYZ.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cf42449ac4607728_122_new,"hxColorToolkit.spaces.Lab","new",0x1e1e9361,"hxColorToolkit.spaces.Lab.new","hxColorToolkit/spaces/Lab.hx",122,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_36_getValue,"hxColorToolkit.spaces.Lab","getValue",0x353d485a,"hxColorToolkit.spaces.Lab.getValue","hxColorToolkit/spaces/Lab.hx",36,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_39_setValue,"hxColorToolkit.spaces.Lab","setValue",0xe39aa1ce,"hxColorToolkit.spaces.Lab.setValue","hxColorToolkit/spaces/Lab.hx",39,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_45_minValue,"hxColorToolkit.spaces.Lab","minValue",0xcc9da5de,"hxColorToolkit.spaces.Lab.minValue","hxColorToolkit/spaces/Lab.hx",45,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_49_maxValue,"hxColorToolkit.spaces.Lab","maxValue",0x7f838b8c,"hxColorToolkit.spaces.Lab.maxValue","hxColorToolkit/spaces/Lab.hx",49,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_57_toRGB,"hxColorToolkit.spaces.Lab","toRGB",0x4c5ab593,"hxColorToolkit.spaces.Lab.toRGB","hxColorToolkit/spaces/Lab.hx",57,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_60_toXYZ,"hxColorToolkit.spaces.Lab","toXYZ",0x4c5f52df,"hxColorToolkit.spaces.Lab.toXYZ","hxColorToolkit/spaces/Lab.hx",60,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_85_getColor,"hxColorToolkit.spaces.Lab","getColor",0x4de13a4c,"hxColorToolkit.spaces.Lab.getColor","hxColorToolkit/spaces/Lab.hx",85,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_88_fromRGB,"hxColorToolkit.spaces.Lab","fromRGB",0xd9506744,"hxColorToolkit.spaces.Lab.fromRGB","hxColorToolkit/spaces/Lab.hx",88,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_93_setColor,"hxColorToolkit.spaces.Lab","setColor",0xfc3e93c0,"hxColorToolkit.spaces.Lab.setColor","hxColorToolkit/spaces/Lab.hx",93,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_99_get_lightness,"hxColorToolkit.spaces.Lab","get_lightness",0x8385f685,"hxColorToolkit.spaces.Lab.get_lightness","hxColorToolkit/spaces/Lab.hx",99,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_103_set_lightness,"hxColorToolkit.spaces.Lab","set_lightness",0xc88bd891,"hxColorToolkit.spaces.Lab.set_lightness","hxColorToolkit/spaces/Lab.hx",103,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_107_get_a,"hxColorToolkit.spaces.Lab","get_a",0xc9a2ea79,"hxColorToolkit.spaces.Lab.get_a","hxColorToolkit/spaces/Lab.hx",107,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_111_set_a,"hxColorToolkit.spaces.Lab","set_a",0xb271e085,"hxColorToolkit.spaces.Lab.set_a","hxColorToolkit/spaces/Lab.hx",111,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_115_get_b,"hxColorToolkit.spaces.Lab","get_b",0xc9a2ea7a,"hxColorToolkit.spaces.Lab.get_b","hxColorToolkit/spaces/Lab.hx",115,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_119_set_b,"hxColorToolkit.spaces.Lab","set_b",0xb271e086,"hxColorToolkit.spaces.Lab.set_b","hxColorToolkit/spaces/Lab.hx",119,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_131_clone,"hxColorToolkit.spaces.Lab","clone",0x80a5589e,"hxColorToolkit.spaces.Lab.clone","hxColorToolkit/spaces/Lab.hx",131,0x88857d4f)
HX_LOCAL_STACK_FRAME(_hx_pos_cf42449ac4607728_134_interpolate,"hxColorToolkit.spaces.Lab","interpolate",0xccea00c2,"hxColorToolkit.spaces.Lab.interpolate","hxColorToolkit/spaces/Lab.hx",134,0x88857d4f)
namespace hxColorToolkit{
namespace spaces{

void Lab_obj::__construct( ::Dynamic __o_lightness, ::Dynamic __o_a, ::Dynamic __o_b){
            		 ::Dynamic lightness = __o_lightness;
            		if (::hx::IsNull(__o_lightness)) lightness = 0;
            		 ::Dynamic a = __o_a;
            		if (::hx::IsNull(__o_a)) a = 0;
            		 ::Dynamic b = __o_b;
            		if (::hx::IsNull(__o_b)) b = 0;
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_122_new)
HXLINE( 123)		this->numOfChannels = 3;
HXLINE( 124)		this->data = ::Array_obj< Float >::__new(0);
HXLINE( 125)		this->set_lightness(( (Float)(lightness) ));
HXLINE( 126)		this->set_a(( (Float)(a) ));
HXLINE( 127)		this->set_b(( (Float)(b) ));
            	}

Dynamic Lab_obj::__CreateEmpty() { return new Lab_obj; }

void *Lab_obj::_hx_vtable = 0;

Dynamic Lab_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Lab_obj > _hx_result = new Lab_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Lab_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e8a4035;
}

static ::hxColorToolkit::spaces::Color_obj _hx_hxColorToolkit_spaces_Lab__hx_hxColorToolkit_spaces_Color= {
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::Lab_obj::getValue,
	( Float (::hx::Object::*)(int,Float))&::hxColorToolkit::spaces::Lab_obj::setValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::Lab_obj::minValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::Lab_obj::maxValue,
	( int (::hx::Object::*)())&::hxColorToolkit::spaces::Lab_obj::getColor,
	( ::Dynamic (::hx::Object::*)(int))&::hxColorToolkit::spaces::Lab_obj::setColor_41e3b804,
	(  ::hxColorToolkit::spaces::RGB (::hx::Object::*)())&::hxColorToolkit::spaces::Lab_obj::toRGB,
	( ::Dynamic (::hx::Object::*)( ::hxColorToolkit::spaces::RGB))&::hxColorToolkit::spaces::Lab_obj::fromRGB_488978a0,
	( ::Dynamic (::hx::Object::*)())&::hxColorToolkit::spaces::Lab_obj::clone_ee952b4b,
	( ::Dynamic (::hx::Object::*)(::Dynamic,::hx::Null< Float > ))&::hxColorToolkit::spaces::Lab_obj::interpolate_7d0ba1d9,
};

::Dynamic Lab_obj::interpolate_7d0ba1d9(::Dynamic target,::hx::Null< Float >  ratio) {
			return interpolate(target,ratio);
}

::Dynamic Lab_obj::clone_ee952b4b() {
			return clone();
}

::Dynamic Lab_obj::fromRGB_488978a0( ::hxColorToolkit::spaces::RGB rgb) {
			return fromRGB(rgb);
}

::Dynamic Lab_obj::setColor_41e3b804(int c) {
			return setColor(c);
}
void *Lab_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x98fa9e0b: return &_hx_hxColorToolkit_spaces_Lab__hx_hxColorToolkit_spaces_Color;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float Lab_obj::getValue(int channel){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_36_getValue)
HXDLIN(  36)		return this->data->__get(channel);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Lab_obj,getValue,return )

Float Lab_obj::setValue(int channel,Float val){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_39_setValue)
HXLINE(  40)		Float _hx_tmp;
HXDLIN(  40)		if ((channel == 0)) {
HXLINE(  40)			_hx_tmp = ( (Float)(100) );
            		}
            		else {
HXLINE(  40)			_hx_tmp = ( (Float)(127) );
            		}
HXDLIN(  40)		Float _hx_tmp1;
HXDLIN(  40)		if ((channel == 0)) {
HXLINE(  40)			_hx_tmp1 = ( (Float)(0) );
            		}
            		else {
HXLINE(  40)			_hx_tmp1 = ( (Float)(-128) );
            		}
HXDLIN(  40)		this->data[channel] = ::Math_obj::min(_hx_tmp,::Math_obj::max(val,_hx_tmp1));
HXLINE(  41)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Lab_obj,setValue,return )

Float Lab_obj::minValue(int channel){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_45_minValue)
HXDLIN(  45)		if ((channel == 0)) {
HXDLIN(  45)			return ( (Float)(0) );
            		}
            		else {
HXDLIN(  45)			return ( (Float)(-128) );
            		}
HXDLIN(  45)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Lab_obj,minValue,return )

Float Lab_obj::maxValue(int channel){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_49_maxValue)
HXDLIN(  49)		if ((channel == 0)) {
HXDLIN(  49)			return ( (Float)(100) );
            		}
            		else {
HXDLIN(  49)			return ( (Float)(127) );
            		}
HXDLIN(  49)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Lab_obj,maxValue,return )

 ::hxColorToolkit::spaces::RGB Lab_obj::toRGB(){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_57_toRGB)
HXDLIN(  57)		return this->toXYZ()->toRGB();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Lab_obj,toRGB,return )

 ::hxColorToolkit::spaces::XYZ Lab_obj::toXYZ(){
            	HX_GC_STACKFRAME(&_hx_pos_cf42449ac4607728_60_toXYZ)
HXLINE(  61)		Float y = ((this->get_lightness() + 16) / ( (Float)(116) ));
HXLINE(  62)		Float x = ((this->get_a() * ((Float)0.002)) + y);
HXLINE(  63)		Float z = (y - (this->get_b() * ((Float)0.005)));
HXLINE(  65)		if ((::Math_obj::pow(y,( (Float)(3) )) > ((Float)0.008856))) {
HXLINE(  66)			y = ::Math_obj::pow(y,( (Float)(3) ));
            		}
            		else {
HXLINE(  68)			y = ((y - ((Float)0.137931034482758619)) / ((Float)7.787));
            		}
HXLINE(  70)		if ((::Math_obj::pow(x,( (Float)(3) )) > ((Float)0.008856))) {
HXLINE(  71)			x = ::Math_obj::pow(x,( (Float)(3) ));
            		}
            		else {
HXLINE(  73)			x = ((x - ((Float)0.137931034482758619)) / ((Float)7.787));
            		}
HXLINE(  75)		if ((::Math_obj::pow(z,( (Float)(3) )) > ((Float)0.008856))) {
HXLINE(  76)			z = ::Math_obj::pow(z,( (Float)(3) ));
            		}
            		else {
HXLINE(  78)			z = ((z - ((Float)0.137931034482758619)) / ((Float)7.787));
            		}
HXLINE(  81)		return  ::hxColorToolkit::spaces::XYZ_obj::__alloc( HX_CTX ,(((Float)95.047) * x),(((Float)100.000) * y),(((Float)108.883) * z));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Lab_obj,toXYZ,return )

int Lab_obj::getColor(){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_85_getColor)
HXDLIN(  85)		return this->toXYZ()->getColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Lab_obj,getColor,return )

 ::hxColorToolkit::spaces::Lab Lab_obj::fromRGB( ::hxColorToolkit::spaces::RGB rgb){
            	HX_GC_STACKFRAME(&_hx_pos_cf42449ac4607728_88_fromRGB)
HXLINE(  89)		this->data =  ::hxColorToolkit::spaces::XYZ_obj::__alloc( HX_CTX ,null(),null(),null())->fromRGB(rgb)->toLab()->data;
HXLINE(  90)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Lab_obj,fromRGB,return )

 ::hxColorToolkit::spaces::Lab Lab_obj::setColor(int value){
            	HX_GC_STACKFRAME(&_hx_pos_cf42449ac4607728_93_setColor)
HXLINE(  94)		this->data =  ::hxColorToolkit::spaces::XYZ_obj::__alloc( HX_CTX ,null(),null(),null())->setColor(value)->toLab()->data;
HXLINE(  95)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Lab_obj,setColor,return )

Float Lab_obj::get_lightness(){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_99_get_lightness)
HXDLIN(  99)		return this->getValue(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Lab_obj,get_lightness,return )

Float Lab_obj::set_lightness(Float value){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_103_set_lightness)
HXDLIN( 103)		return this->setValue(0,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Lab_obj,set_lightness,return )

Float Lab_obj::get_a(){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_107_get_a)
HXDLIN( 107)		return this->getValue(1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Lab_obj,get_a,return )

Float Lab_obj::set_a(Float value){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_111_set_a)
HXDLIN( 111)		return this->setValue(1,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Lab_obj,set_a,return )

Float Lab_obj::get_b(){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_115_get_b)
HXDLIN( 115)		return this->getValue(2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Lab_obj,get_b,return )

Float Lab_obj::set_b(Float value){
            	HX_STACKFRAME(&_hx_pos_cf42449ac4607728_119_set_b)
HXDLIN( 119)		return this->setValue(2,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Lab_obj,set_b,return )

 ::hxColorToolkit::spaces::Lab Lab_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_cf42449ac4607728_131_clone)
HXDLIN( 131)		Float _hx_tmp = this->get_lightness();
HXDLIN( 131)		Float _hx_tmp1 = this->get_a();
HXDLIN( 131)		return  ::hxColorToolkit::spaces::Lab_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->get_b());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Lab_obj,clone,return )

 ::hxColorToolkit::spaces::Lab Lab_obj::interpolate(::Dynamic target,::hx::Null< Float >  __o_ratio){
            		Float ratio = __o_ratio.Default(((Float)0.5));
            	HX_GC_STACKFRAME(&_hx_pos_cf42449ac4607728_134_interpolate)
HXLINE( 135)		 ::hxColorToolkit::spaces::Lab target1;
HXDLIN( 135)		if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::Lab >()) ))) {
HXLINE( 135)			target1 = ( ( ::hxColorToolkit::spaces::Lab)(target) );
            		}
            		else {
HXLINE( 135)			 ::hxColorToolkit::spaces::Lab target2 =  ::hxColorToolkit::spaces::Lab_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 135)			target1 = target2->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(target));
            		}
HXLINE( 136)		Float _hx_tmp = this->get_lightness();
HXDLIN( 136)		Float _hx_tmp1 = target1->get_lightness();
HXDLIN( 136)		Float _hx_tmp2 = (_hx_tmp + ((_hx_tmp1 - this->get_lightness()) * ratio));
HXDLIN( 136)		Float _hx_tmp3 = this->get_a();
HXDLIN( 136)		Float _hx_tmp4 = target1->get_a();
HXDLIN( 136)		Float _hx_tmp5 = (_hx_tmp3 + ((_hx_tmp4 - this->get_a()) * ratio));
HXDLIN( 136)		Float _hx_tmp6 = this->get_b();
HXDLIN( 136)		Float _hx_tmp7 = target1->get_b();
HXDLIN( 136)		return  ::hxColorToolkit::spaces::Lab_obj::__alloc( HX_CTX ,_hx_tmp2,_hx_tmp5,(_hx_tmp6 + ((_hx_tmp7 - this->get_b()) * ratio)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Lab_obj,interpolate,return )


::hx::ObjectPtr< Lab_obj > Lab_obj::__new( ::Dynamic __o_lightness, ::Dynamic __o_a, ::Dynamic __o_b) {
	::hx::ObjectPtr< Lab_obj > __this = new Lab_obj();
	__this->__construct(__o_lightness,__o_a,__o_b);
	return __this;
}

::hx::ObjectPtr< Lab_obj > Lab_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_lightness, ::Dynamic __o_a, ::Dynamic __o_b) {
	Lab_obj *__this = (Lab_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Lab_obj), true, "hxColorToolkit.spaces.Lab"));
	*(void **)__this = Lab_obj::_hx_vtable;
	__this->__construct(__o_lightness,__o_a,__o_b);
	return __this;
}

Lab_obj::Lab_obj()
{
}

void Lab_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lab);
	HX_MARK_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void Lab_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val Lab_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_a() ); }
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_b() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toRGB") ) { return ::hx::Val( toRGB_dyn() ); }
		if (HX_FIELD_EQ(inName,"toXYZ") ) { return ::hx::Val( toXYZ_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_a") ) { return ::hx::Val( get_a_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_a") ) { return ::hx::Val( set_a_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_b") ) { return ::hx::Val( get_b_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_b") ) { return ::hx::Val( set_b_dyn() ); }
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
	case 9:
		if (HX_FIELD_EQ(inName,"lightness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightness() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return ::hx::Val( interpolate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { return ::hx::Val( numOfChannels ); }
		if (HX_FIELD_EQ(inName,"get_lightness") ) { return ::hx::Val( get_lightness_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lightness") ) { return ::hx::Val( set_lightness_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Lab_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_a(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_b(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lightness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lightness(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { numOfChannels=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lab_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numOfChannels",6d,ec,b1,8b));
	outFields->push(HX_("lightness",6d,34,47,d7));
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Lab_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Lab_obj,numOfChannels),HX_("numOfChannels",6d,ec,b1,8b)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Lab_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Lab_obj_sStaticStorageInfo = 0;
#endif

static ::String Lab_obj_sMemberFields[] = {
	HX_("numOfChannels",6d,ec,b1,8b),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("toRGB",52,70,18,14),
	HX_("toXYZ",9e,0d,1d,14),
	HX_("getColor",ed,80,33,aa),
	HX_("fromRGB",c3,8f,01,58),
	HX_("setColor",61,da,90,58),
	HX_("get_lightness",44,08,ab,98),
	HX_("set_lightness",50,ea,b0,dd),
	HX_("get_a",38,a5,60,91),
	HX_("set_a",44,9b,2f,7a),
	HX_("get_b",39,a5,60,91),
	HX_("set_b",45,9b,2f,7a),
	HX_("clone",5d,13,63,48),
	HX_("interpolate",c1,d4,32,1f),
	HX_("data",2a,56,63,42),
	::String(null()) };

::hx::Class Lab_obj::__mClass;

void Lab_obj::__register()
{
	Lab_obj _hx_dummy;
	Lab_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.spaces.Lab",ef,4e,df,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Lab_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Lab_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lab_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lab_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace spaces
