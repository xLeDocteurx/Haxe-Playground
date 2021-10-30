#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_ColorScheme
#include <hxColorToolkit/schemes/ColorScheme.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_ColorWheelScheme
#include <hxColorToolkit/schemes/ColorWheelScheme.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_Monochrome
#include <hxColorToolkit/schemes/Monochrome.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bd4473ca14d00cbb_40_new,"hxColorToolkit.schemes.Monochrome","new",0xb2ec9c72,"hxColorToolkit.schemes.Monochrome.new","hxColorToolkit/schemes/Monochrome.hx",40,0x1343d4fc)
HX_LOCAL_STACK_FRAME(_hx_pos_bd4473ca14d00cbb_36_clone,"hxColorToolkit.schemes.Monochrome","clone",0x6bd487ef,"hxColorToolkit.schemes.Monochrome.clone","hxColorToolkit/schemes/Monochrome.hx",36,0x1343d4fc)
HX_LOCAL_STACK_FRAME(_hx_pos_bd4473ca14d00cbb_46_generate,"hxColorToolkit.schemes.Monochrome","generate",0xc01291e3,"hxColorToolkit.schemes.Monochrome.generate","hxColorToolkit/schemes/Monochrome.hx",46,0x1343d4fc)
namespace hxColorToolkit{
namespace schemes{

void Monochrome_obj::__construct( ::Dynamic primaryColor){
            	HX_STACKFRAME(&_hx_pos_bd4473ca14d00cbb_40_new)
HXLINE(  41)		super::__construct(primaryColor);
HXLINE(  42)		this->generate();
            	}

Dynamic Monochrome_obj::__CreateEmpty() { return new Monochrome_obj; }

void *Monochrome_obj::_hx_vtable = 0;

Dynamic Monochrome_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Monochrome_obj > _hx_result = new Monochrome_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Monochrome_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x28de3f5c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x28de3f5c;
	} else {
		return inClassId==(int)0x49f0ef20;
	}
}

 ::hxColorToolkit::schemes::ColorWheelScheme Monochrome_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_bd4473ca14d00cbb_36_clone)
HXDLIN(  36)		return  ::hxColorToolkit::schemes::Monochrome_obj::__alloc( HX_CTX ,this->get_primaryColor());
            	}


void Monochrome_obj::generate(){
            	HX_GC_STACKFRAME(&_hx_pos_bd4473ca14d00cbb_46_generate)
HXLINE(  47)		this->_colors = ::cpp::VirtualArray_obj::__new(1)->init(0,this->get_primaryColor());
HXLINE(  48)		 ::hxColorToolkit::spaces::HSB _primaryHSB;
HXLINE(  49)		if (::Std_obj::isOfType(this->get_primaryColor(),( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::HSB >()) ))) {
HXLINE(  50)			_primaryHSB = ( ( ::hxColorToolkit::spaces::HSB)(this->get_primaryColor()) );
            		}
            		else {
HXLINE(  52)			 ::hxColorToolkit::spaces::HSB _primaryHSB1 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  52)			_primaryHSB = _primaryHSB1->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(this->get_primaryColor()));
            		}
HXLINE(  55)		 ::hxColorToolkit::spaces::HSB c1 = _primaryHSB->clone();
HXLINE(  56)		Float x = _primaryHSB->get_brightness();
HXDLIN(  56)		Float _hx_tmp;
HXDLIN(  56)		if (((x - ( (Float)(50) )) < 20)) {
HXLINE(  56)			_hx_tmp = (x + 30);
            		}
            		else {
HXLINE(  56)			_hx_tmp = (x - ( (Float)(50) ));
            		}
HXDLIN(  56)		c1->set_brightness(_hx_tmp);
HXLINE(  57)		Float x1 = _primaryHSB->get_saturation();
HXDLIN(  57)		Float _hx_tmp1;
HXDLIN(  57)		if (((x1 - ( (Float)(30) )) < 10)) {
HXLINE(  57)			_hx_tmp1 = (x1 + 20);
            		}
            		else {
HXLINE(  57)			_hx_tmp1 = (x1 - ( (Float)(30) ));
            		}
HXDLIN(  57)		c1->set_saturation(_hx_tmp1);
HXLINE(  58)		::cpp::VirtualArray _hx_tmp2 = this->_colors;
HXDLIN(  58)		_hx_tmp2->push(this->mutateFromPrimary(c1));
HXLINE(  60)		 ::hxColorToolkit::spaces::HSB c2 = _primaryHSB->clone();
HXLINE(  61)		Float x2 = _primaryHSB->get_brightness();
HXDLIN(  61)		Float _hx_tmp3;
HXDLIN(  61)		if (((x2 - ( (Float)(20) )) < 20)) {
HXLINE(  61)			_hx_tmp3 = (x2 + 60);
            		}
            		else {
HXLINE(  61)			_hx_tmp3 = (x2 - ( (Float)(20) ));
            		}
HXDLIN(  61)		c2->set_brightness(_hx_tmp3);
HXLINE(  62)		::cpp::VirtualArray _hx_tmp4 = this->_colors;
HXDLIN(  62)		_hx_tmp4->push(this->mutateFromPrimary(c2));
HXLINE(  64)		 ::hxColorToolkit::spaces::HSB c3 = _primaryHSB->clone();
HXLINE(  65)		Float _hx_tmp5 = _primaryHSB->get_brightness();
HXDLIN(  65)		c3->set_brightness(::Math_obj::max(( (Float)(20) ),(_hx_tmp5 + ((( (Float)(100) ) - _primaryHSB->get_brightness()) * ((Float)0.2)))));
HXLINE(  66)		Float x3 = _primaryHSB->get_saturation();
HXDLIN(  66)		Float _hx_tmp6;
HXDLIN(  66)		if (((x3 - ( (Float)(30) )) < 10)) {
HXLINE(  66)			_hx_tmp6 = (x3 + 30);
            		}
            		else {
HXLINE(  66)			_hx_tmp6 = (x3 - ( (Float)(30) ));
            		}
HXDLIN(  66)		c3->set_saturation(_hx_tmp6);
HXLINE(  67)		::cpp::VirtualArray _hx_tmp7 = this->_colors;
HXDLIN(  67)		_hx_tmp7->push(this->mutateFromPrimary(c3));
HXLINE(  69)		 ::hxColorToolkit::spaces::HSB c4 = _primaryHSB->clone();
HXLINE(  70)		Float x4 = _primaryHSB->get_brightness();
HXDLIN(  70)		Float _hx_tmp8;
HXDLIN(  70)		if (((x4 - ( (Float)(50) )) < 20)) {
HXLINE(  70)			_hx_tmp8 = (x4 + 30);
            		}
            		else {
HXLINE(  70)			_hx_tmp8 = (x4 - ( (Float)(50) ));
            		}
HXDLIN(  70)		c4->set_brightness(_hx_tmp8);
HXLINE(  71)		::cpp::VirtualArray _hx_tmp9 = this->_colors;
HXDLIN(  71)		_hx_tmp9->push(this->mutateFromPrimary(c4));
HXLINE(  73)		this->numOfColors = this->_colors->get_length();
            	}



::hx::ObjectPtr< Monochrome_obj > Monochrome_obj::__new( ::Dynamic primaryColor) {
	::hx::ObjectPtr< Monochrome_obj > __this = new Monochrome_obj();
	__this->__construct(primaryColor);
	return __this;
}

::hx::ObjectPtr< Monochrome_obj > Monochrome_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor) {
	Monochrome_obj *__this = (Monochrome_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Monochrome_obj), true, "hxColorToolkit.schemes.Monochrome"));
	*(void **)__this = Monochrome_obj::_hx_vtable;
	__this->__construct(primaryColor);
	return __this;
}

Monochrome_obj::Monochrome_obj()
{
}

::hx::Val Monochrome_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"generate") ) { return ::hx::Val( generate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Monochrome_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Monochrome_obj_sStaticStorageInfo = 0;
#endif

static ::String Monochrome_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	HX_("generate",35,5f,a2,d9),
	::String(null()) };

::hx::Class Monochrome_obj::__mClass;

void Monochrome_obj::__register()
{
	Monochrome_obj _hx_dummy;
	Monochrome_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.schemes.Monochrome",80,3b,2d,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Monochrome_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Monochrome_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Monochrome_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Monochrome_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace schemes
