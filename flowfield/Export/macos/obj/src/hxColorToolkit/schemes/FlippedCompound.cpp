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
#ifndef INCLUDED_hxColorToolkit_schemes_FlippedCompound
#include <hxColorToolkit/schemes/FlippedCompound.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3f29dc97940771a8_41_new,"hxColorToolkit.schemes.FlippedCompound","new",0xd233133c,"hxColorToolkit.schemes.FlippedCompound.new","hxColorToolkit/schemes/FlippedCompound.hx",41,0xfe0df936)
HX_LOCAL_STACK_FRAME(_hx_pos_3f29dc97940771a8_37_clone,"hxColorToolkit.schemes.FlippedCompound","clone",0xc2bdc539,"hxColorToolkit.schemes.FlippedCompound.clone","hxColorToolkit/schemes/FlippedCompound.hx",37,0xfe0df936)
HX_LOCAL_STACK_FRAME(_hx_pos_3f29dc97940771a8_47_generate,"hxColorToolkit.schemes.FlippedCompound","generate",0x63b73ed9,"hxColorToolkit.schemes.FlippedCompound.generate","hxColorToolkit/schemes/FlippedCompound.hx",47,0xfe0df936)
namespace hxColorToolkit{
namespace schemes{

void FlippedCompound_obj::__construct( ::Dynamic primaryColor){
            	HX_STACKFRAME(&_hx_pos_3f29dc97940771a8_41_new)
HXLINE(  42)		super::__construct(primaryColor);
HXLINE(  43)		this->generate();
            	}

Dynamic FlippedCompound_obj::__CreateEmpty() { return new FlippedCompound_obj; }

void *FlippedCompound_obj::_hx_vtable = 0;

Dynamic FlippedCompound_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlippedCompound_obj > _hx_result = new FlippedCompound_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlippedCompound_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x47d37952) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x47d37952;
	} else {
		return inClassId==(int)0x49f0ef20;
	}
}

 ::hxColorToolkit::schemes::ColorWheelScheme FlippedCompound_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_3f29dc97940771a8_37_clone)
HXDLIN(  37)		return  ::hxColorToolkit::schemes::FlippedCompound_obj::__alloc( HX_CTX ,this->get_primaryColor());
            	}


void FlippedCompound_obj::generate(){
            	HX_GC_STACKFRAME(&_hx_pos_3f29dc97940771a8_47_generate)
HXLINE(  48)		this->_colors = ::cpp::VirtualArray_obj::__new(1)->init(0,this->get_primaryColor());
HXLINE(  49)		 ::hxColorToolkit::spaces::HSB _primaryHSB;
HXLINE(  50)		if (::Std_obj::isOfType(this->get_primaryColor(),( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::HSB >()) ))) {
HXLINE(  51)			_primaryHSB = ( ( ::hxColorToolkit::spaces::HSB)(this->get_primaryColor()) );
            		}
            		else {
HXLINE(  53)			 ::hxColorToolkit::spaces::HSB _primaryHSB1 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  53)			_primaryHSB = _primaryHSB1->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(this->get_primaryColor()));
            		}
HXLINE(  55)		int _primary = ::hxColorToolkit::spaces::Color_obj::getColor(this->_primaryColor);
HXLINE(  56)		int d = 1;
HXLINE(  58)		 ::hxColorToolkit::spaces::HSB c1 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  58)		 ::hxColorToolkit::spaces::HSB c11 = c1->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,( (Float)(-30) )));
HXLINE(  59)		Float x = _primaryHSB->get_brightness();
HXDLIN(  59)		Float _hx_tmp;
HXDLIN(  59)		if (((x - ( (Float)(25) )) < 60)) {
HXLINE(  59)			_hx_tmp = (x + 25);
            		}
            		else {
HXLINE(  59)			_hx_tmp = (x - ( (Float)(25) ));
            		}
HXDLIN(  59)		c11->set_brightness(_hx_tmp);
HXLINE(  60)		::cpp::VirtualArray _hx_tmp1 = this->_colors;
HXDLIN(  60)		_hx_tmp1->push(this->mutateFromPrimary(c11));
HXLINE(  62)		 ::hxColorToolkit::spaces::HSB c2 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  62)		 ::hxColorToolkit::spaces::HSB c21 = c2->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,( (Float)(-30) )));
HXLINE(  63)		Float x1 = _primaryHSB->get_brightness();
HXDLIN(  63)		Float _hx_tmp2;
HXDLIN(  63)		if (((x1 - ( (Float)(40) )) < 10)) {
HXLINE(  63)			_hx_tmp2 = (x1 + 40);
            		}
            		else {
HXLINE(  63)			_hx_tmp2 = (x1 - ( (Float)(40) ));
            		}
HXDLIN(  63)		c21->set_brightness(_hx_tmp2);
HXLINE(  64)		Float x2 = _primaryHSB->get_saturation();
HXDLIN(  64)		Float _hx_tmp3;
HXDLIN(  64)		if (((x2 - ( (Float)(40) )) < 20)) {
HXLINE(  64)			_hx_tmp3 = (x2 + 40);
            		}
            		else {
HXLINE(  64)			_hx_tmp3 = (x2 - ( (Float)(40) ));
            		}
HXDLIN(  64)		c21->set_saturation(_hx_tmp3);
HXLINE(  65)		::cpp::VirtualArray _hx_tmp4 = this->_colors;
HXDLIN(  65)		_hx_tmp4->push(this->mutateFromPrimary(c21));
HXLINE(  67)		 ::hxColorToolkit::spaces::HSB c3 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  67)		 ::hxColorToolkit::spaces::HSB c31 = c3->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,( (Float)(-160) )));
HXLINE(  68)		c31->set_brightness(::Math_obj::max(( (Float)(20) ),_primaryHSB->get_brightness()));
HXLINE(  69)		Float x3 = _primaryHSB->get_saturation();
HXDLIN(  69)		Float _hx_tmp5;
HXDLIN(  69)		if (((x3 - ( (Float)(25) )) < 10)) {
HXLINE(  69)			_hx_tmp5 = (x3 + 25);
            		}
            		else {
HXLINE(  69)			_hx_tmp5 = (x3 - ( (Float)(25) ));
            		}
HXDLIN(  69)		c31->set_saturation(_hx_tmp5);
HXLINE(  70)		::cpp::VirtualArray _hx_tmp6 = this->_colors;
HXDLIN(  70)		_hx_tmp6->push(this->mutateFromPrimary(c31));
HXLINE(  72)		 ::hxColorToolkit::spaces::HSB c4 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  72)		 ::hxColorToolkit::spaces::HSB c41 = c4->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,( (Float)(-150) )));
HXLINE(  73)		Float x4 = _primaryHSB->get_brightness();
HXDLIN(  73)		Float _hx_tmp7;
HXDLIN(  73)		if (((x4 - ( (Float)(30) )) < 60)) {
HXLINE(  73)			_hx_tmp7 = (x4 + 30);
            		}
            		else {
HXLINE(  73)			_hx_tmp7 = (x4 - ( (Float)(30) ));
            		}
HXDLIN(  73)		c41->set_brightness(_hx_tmp7);
HXLINE(  74)		Float x5 = _primaryHSB->get_saturation();
HXDLIN(  74)		Float _hx_tmp8;
HXDLIN(  74)		if (((x5 - ( (Float)(10) )) < 80)) {
HXLINE(  74)			_hx_tmp8 = (x5 + 10);
            		}
            		else {
HXLINE(  74)			_hx_tmp8 = (x5 - ( (Float)(10) ));
            		}
HXDLIN(  74)		c41->set_saturation(_hx_tmp8);
HXLINE(  75)		::cpp::VirtualArray _hx_tmp9 = this->_colors;
HXDLIN(  75)		_hx_tmp9->push(this->mutateFromPrimary(c41));
HXLINE(  77)		 ::hxColorToolkit::spaces::HSB c5 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  77)		 ::hxColorToolkit::spaces::HSB c51 = c5->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,( (Float)(-150) )));
HXLINE(  78)		Float x6 = _primaryHSB->get_brightness();
HXDLIN(  78)		Float _hx_tmp10;
HXDLIN(  78)		if (((x6 - ( (Float)(40) )) < 20)) {
HXLINE(  78)			_hx_tmp10 = (x6 + 40);
            		}
            		else {
HXLINE(  78)			_hx_tmp10 = (x6 - ( (Float)(40) ));
            		}
HXDLIN(  78)		c51->set_brightness(_hx_tmp10);
HXLINE(  79)		Float x7 = _primaryHSB->get_saturation();
HXDLIN(  79)		Float _hx_tmp11;
HXDLIN(  79)		if (((x7 - ( (Float)(10) )) < 80)) {
HXLINE(  79)			_hx_tmp11 = (x7 + 10);
            		}
            		else {
HXLINE(  79)			_hx_tmp11 = (x7 - ( (Float)(10) ));
            		}
HXDLIN(  79)		c51->set_saturation(_hx_tmp11);
HXLINE(  80)		::cpp::VirtualArray _hx_tmp12 = this->_colors;
HXDLIN(  80)		_hx_tmp12->push(this->mutateFromPrimary(c51));
HXLINE(  82)		this->numOfColors = this->_colors->get_length();
            	}



::hx::ObjectPtr< FlippedCompound_obj > FlippedCompound_obj::__new( ::Dynamic primaryColor) {
	::hx::ObjectPtr< FlippedCompound_obj > __this = new FlippedCompound_obj();
	__this->__construct(primaryColor);
	return __this;
}

::hx::ObjectPtr< FlippedCompound_obj > FlippedCompound_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor) {
	FlippedCompound_obj *__this = (FlippedCompound_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlippedCompound_obj), true, "hxColorToolkit.schemes.FlippedCompound"));
	*(void **)__this = FlippedCompound_obj::_hx_vtable;
	__this->__construct(primaryColor);
	return __this;
}

FlippedCompound_obj::FlippedCompound_obj()
{
}

::hx::Val FlippedCompound_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *FlippedCompound_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlippedCompound_obj_sStaticStorageInfo = 0;
#endif

static ::String FlippedCompound_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	HX_("generate",35,5f,a2,d9),
	::String(null()) };

::hx::Class FlippedCompound_obj::__mClass;

void FlippedCompound_obj::__register()
{
	FlippedCompound_obj _hx_dummy;
	FlippedCompound_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.schemes.FlippedCompound",4a,05,ea,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlippedCompound_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlippedCompound_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlippedCompound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlippedCompound_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace schemes
