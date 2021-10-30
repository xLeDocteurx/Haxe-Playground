#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxColorToolkit_ColorToolkit
#include <hxColorToolkit/ColorToolkit.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_ColorScheme
#include <hxColorToolkit/schemes/ColorScheme.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_ColorWheelScheme
#include <hxColorToolkit/schemes/ColorWheelScheme.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_Tetrad
#include <hxColorToolkit/schemes/Tetrad.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_HSB
#include <hxColorToolkit/spaces/HSB.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b75c74a47e2b0a35_67_new,"hxColorToolkit.schemes.Tetrad","new",0xb3732367,"hxColorToolkit.schemes.Tetrad.new","hxColorToolkit/schemes/Tetrad.hx",67,0x1cf4eca7)
HX_LOCAL_STACK_FRAME(_hx_pos_b75c74a47e2b0a35_36_clone,"hxColorToolkit.schemes.Tetrad","clone",0x80427624,"hxColorToolkit.schemes.Tetrad.clone","hxColorToolkit/schemes/Tetrad.hx",36,0x1cf4eca7)
HX_LOCAL_STACK_FRAME(_hx_pos_b75c74a47e2b0a35_44_get_angle,"hxColorToolkit.schemes.Tetrad","get_angle",0x53817271,"hxColorToolkit.schemes.Tetrad.get_angle","hxColorToolkit/schemes/Tetrad.hx",44,0x1cf4eca7)
HX_LOCAL_STACK_FRAME(_hx_pos_b75c74a47e2b0a35_47_set_angle,"hxColorToolkit.schemes.Tetrad","set_angle",0x36d25e7d,"hxColorToolkit.schemes.Tetrad.set_angle","hxColorToolkit/schemes/Tetrad.hx",47,0x1cf4eca7)
HX_LOCAL_STACK_FRAME(_hx_pos_b75c74a47e2b0a35_58_get_alt,"hxColorToolkit.schemes.Tetrad","get_alt",0x9f51a447,"hxColorToolkit.schemes.Tetrad.get_alt","hxColorToolkit/schemes/Tetrad.hx",58,0x1cf4eca7)
HX_LOCAL_STACK_FRAME(_hx_pos_b75c74a47e2b0a35_61_set_alt,"hxColorToolkit.schemes.Tetrad","set_alt",0x92533553,"hxColorToolkit.schemes.Tetrad.set_alt","hxColorToolkit/schemes/Tetrad.hx",61,0x1cf4eca7)
HX_LOCAL_STACK_FRAME(_hx_pos_b75c74a47e2b0a35_74_generate,"hxColorToolkit.schemes.Tetrad","generate",0xe195b2ce,"hxColorToolkit.schemes.Tetrad.generate","hxColorToolkit/schemes/Tetrad.hx",74,0x1cf4eca7)
namespace hxColorToolkit{
namespace schemes{

void Tetrad_obj::__construct( ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_alt){
            		 ::Dynamic angle = __o_angle;
            		if (::hx::IsNull(__o_angle)) angle = 90;
            		 ::Dynamic alt = __o_alt;
            		if (::hx::IsNull(__o_alt)) alt = false;
            	HX_STACKFRAME(&_hx_pos_b75c74a47e2b0a35_67_new)
HXLINE(  68)		super::__construct(primaryColor);
HXLINE(  69)		this->_angle = ( (Float)(angle) );
HXLINE(  70)		this->_alt = ( (bool)(alt) );
HXLINE(  71)		this->generate();
            	}

Dynamic Tetrad_obj::__CreateEmpty() { return new Tetrad_obj; }

void *Tetrad_obj::_hx_vtable = 0;

Dynamic Tetrad_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tetrad_obj > _hx_result = new Tetrad_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Tetrad_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x49f0ef20) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x49f0ef20;
	} else {
		return inClassId==(int)0x508e82b5;
	}
}

 ::hxColorToolkit::schemes::ColorWheelScheme Tetrad_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b75c74a47e2b0a35_36_clone)
HXDLIN(  36)		 ::Dynamic _hx_tmp = this->get_primaryColor();
HXDLIN(  36)		Float _hx_tmp1 = this->get_angle();
HXDLIN(  36)		return  ::hxColorToolkit::schemes::Tetrad_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->get_alt());
            	}


Float Tetrad_obj::get_angle(){
            	HX_STACKFRAME(&_hx_pos_b75c74a47e2b0a35_44_get_angle)
HXDLIN(  44)		return this->_angle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tetrad_obj,get_angle,return )

Float Tetrad_obj::set_angle(Float value){
            	HX_STACKFRAME(&_hx_pos_b75c74a47e2b0a35_47_set_angle)
HXLINE(  48)		this->_angle = value;
HXLINE(  49)		this->generate();
HXLINE(  50)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tetrad_obj,set_angle,return )

bool Tetrad_obj::get_alt(){
            	HX_STACKFRAME(&_hx_pos_b75c74a47e2b0a35_58_get_alt)
HXDLIN(  58)		return this->_alt;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tetrad_obj,get_alt,return )

bool Tetrad_obj::set_alt(bool val){
            	HX_STACKFRAME(&_hx_pos_b75c74a47e2b0a35_61_set_alt)
HXLINE(  62)		this->_alt = val;
HXLINE(  63)		this->generate();
HXLINE(  64)		return this->get_alt();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tetrad_obj,set_alt,return )

void Tetrad_obj::generate(){
            	HX_GC_STACKFRAME(&_hx_pos_b75c74a47e2b0a35_74_generate)
HXLINE(  75)		this->_colors = ::cpp::VirtualArray_obj::__new(1)->init(0,this->get_primaryColor());
HXLINE(  76)		 ::hxColorToolkit::spaces::HSB _primaryHSB;
HXLINE(  77)		if (::Std_obj::isOfType(this->get_primaryColor(),( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::HSB >()) ))) {
HXLINE(  78)			_primaryHSB = ( ( ::hxColorToolkit::spaces::HSB)(this->get_primaryColor()) );
            		}
            		else {
HXLINE(  80)			 ::hxColorToolkit::spaces::HSB _primaryHSB1 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  80)			_primaryHSB = _primaryHSB1->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(this->get_primaryColor()));
            		}
HXLINE(  82)		int _primary = ::hxColorToolkit::spaces::Color_obj::getColor(this->_primaryColor);
HXLINE(  84)		 ::hxColorToolkit::spaces::HSB c1 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  84)		 ::hxColorToolkit::spaces::HSB c11 = c1->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,this->_angle));
HXLINE(  85)		Float multiplier;
HXLINE(  86)		if (!(this->get_alt())) {
HXLINE(  87)			if ((_primaryHSB->get_brightness() < 50)) {
HXLINE(  88)				c11->set_brightness((c11->get_brightness() + 20));
            			}
            			else {
HXLINE(  90)				c11->set_brightness((c11->get_brightness() - ( (Float)(20) )));
            			}
            		}
            		else {
HXLINE(  93)			multiplier = ((( (Float)(50) ) - _primaryHSB->get_brightness()) / ( (Float)(50) ));
HXLINE(  94)			Float _hx_tmp = c11->get_brightness();
HXDLIN(  94)			c11->set_brightness((_hx_tmp + ::Math_obj::min(( (Float)(20) ),::Math_obj::max(( (Float)(-20) ),(( (Float)(20) ) * multiplier)))));
            		}
HXLINE(  97)		::cpp::VirtualArray _hx_tmp = this->_colors;
HXDLIN(  97)		_hx_tmp->push(this->mutateFromPrimary(c11));
HXLINE(  99)		 ::hxColorToolkit::spaces::HSB c2 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  99)		 ::hxColorToolkit::spaces::HSB c21 = c2->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,(this->_angle * ( (Float)(2) ))));
HXLINE( 100)		if (!(this->get_alt())) {
HXLINE( 101)			if ((_primaryHSB->get_brightness() > 50)) {
HXLINE( 102)				c21->set_brightness((c21->get_brightness() + 10));
            			}
            			else {
HXLINE( 104)				c21->set_brightness((c21->get_brightness() - ( (Float)(10) )));
            			}
            		}
            		else {
HXLINE( 107)			multiplier = ((( (Float)(50) ) - _primaryHSB->get_brightness()) / ( (Float)(50) ));
HXLINE( 108)			Float _hx_tmp = c21->get_brightness();
HXDLIN( 108)			c21->set_brightness((_hx_tmp + ::Math_obj::min(( (Float)(10) ),::Math_obj::max(( (Float)(-10) ),(( (Float)(10) ) * multiplier)))));
            		}
HXLINE( 111)		::cpp::VirtualArray _hx_tmp1 = this->_colors;
HXDLIN( 111)		_hx_tmp1->push(this->mutateFromPrimary(c21));
HXLINE( 113)		 ::hxColorToolkit::spaces::HSB c3 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 113)		 ::hxColorToolkit::spaces::HSB c31 = c3->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,(this->_angle * ( (Float)(3) ))));
HXLINE( 114)		c31->set_brightness((c31->get_brightness() + 10));
HXLINE( 115)		::cpp::VirtualArray _hx_tmp2 = this->_colors;
HXDLIN( 115)		_hx_tmp2->push(this->mutateFromPrimary(c31));
HXLINE( 117)		this->numOfColors = this->_colors->get_length();
            	}



::hx::ObjectPtr< Tetrad_obj > Tetrad_obj::__new( ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_alt) {
	::hx::ObjectPtr< Tetrad_obj > __this = new Tetrad_obj();
	__this->__construct(primaryColor,__o_angle,__o_alt);
	return __this;
}

::hx::ObjectPtr< Tetrad_obj > Tetrad_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_alt) {
	Tetrad_obj *__this = (Tetrad_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tetrad_obj), true, "hxColorToolkit.schemes.Tetrad"));
	*(void **)__this = Tetrad_obj::_hx_vtable;
	__this->__construct(primaryColor,__o_angle,__o_alt);
	return __this;
}

Tetrad_obj::Tetrad_obj()
{
}

::hx::Val Tetrad_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"alt") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alt() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_alt") ) { return ::hx::Val( _alt ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_angle() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { return ::hx::Val( _angle ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_alt") ) { return ::hx::Val( get_alt_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alt") ) { return ::hx::Val( set_alt_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"generate") ) { return ::hx::Val( generate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_angle") ) { return ::hx::Val( get_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Tetrad_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"alt") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alt(inValue.Cast< bool >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_alt") ) { _alt=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tetrad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("_angle",14,8b,c9,1e));
	outFields->push(HX_("alt",29,f9,49,00));
	outFields->push(HX_("_alt",2a,3e,15,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tetrad_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Tetrad_obj,_angle),HX_("_angle",14,8b,c9,1e)},
	{::hx::fsBool,(int)offsetof(Tetrad_obj,_alt),HX_("_alt",2a,3e,15,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tetrad_obj_sStaticStorageInfo = 0;
#endif

static ::String Tetrad_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	HX_("_angle",14,8b,c9,1e),
	HX_("get_angle",2a,a0,8b,66),
	HX_("set_angle",36,8c,dc,49),
	HX_("_alt",2a,3e,15,3f),
	HX_("get_alt",c0,c1,be,26),
	HX_("set_alt",cc,52,c0,19),
	HX_("generate",35,5f,a2,d9),
	::String(null()) };

::hx::Class Tetrad_obj::__mClass;

void Tetrad_obj::__register()
{
	Tetrad_obj _hx_dummy;
	Tetrad_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.schemes.Tetrad",f5,e3,5d,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tetrad_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tetrad_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tetrad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tetrad_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace schemes
