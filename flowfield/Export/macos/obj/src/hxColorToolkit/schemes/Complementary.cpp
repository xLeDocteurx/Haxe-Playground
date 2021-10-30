#include <hxcpp.h>

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
#ifndef INCLUDED_hxColorToolkit_schemes_Complementary
#include <hxColorToolkit/schemes/Complementary.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_86bbdf9cd0317cb8_41_new,"hxColorToolkit.schemes.Complementary","new",0x6bd919f1,"hxColorToolkit.schemes.Complementary.new","hxColorToolkit/schemes/Complementary.hx",41,0x39cf3ba1)
HX_LOCAL_STACK_FRAME(_hx_pos_86bbdf9cd0317cb8_37_clone,"hxColorToolkit.schemes.Complementary","clone",0x96faa32e,"hxColorToolkit.schemes.Complementary.clone","hxColorToolkit/schemes/Complementary.hx",37,0x39cf3ba1)
HX_LOCAL_STACK_FRAME(_hx_pos_86bbdf9cd0317cb8_47_generate,"hxColorToolkit.schemes.Complementary","generate",0x9313c804,"hxColorToolkit.schemes.Complementary.generate","hxColorToolkit/schemes/Complementary.hx",47,0x39cf3ba1)
namespace hxColorToolkit{
namespace schemes{

void Complementary_obj::__construct( ::Dynamic primaryColor){
            	HX_STACKFRAME(&_hx_pos_86bbdf9cd0317cb8_41_new)
HXLINE(  42)		super::__construct(primaryColor);
HXLINE(  43)		this->generate();
            	}

Dynamic Complementary_obj::__CreateEmpty() { return new Complementary_obj; }

void *Complementary_obj::_hx_vtable = 0;

Dynamic Complementary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Complementary_obj > _hx_result = new Complementary_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Complementary_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2a0d1b23) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2a0d1b23;
	} else {
		return inClassId==(int)0x49f0ef20;
	}
}

 ::hxColorToolkit::schemes::ColorWheelScheme Complementary_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_86bbdf9cd0317cb8_37_clone)
HXDLIN(  37)		return  ::hxColorToolkit::schemes::Complementary_obj::__alloc( HX_CTX ,this->get_primaryColor());
            	}


void Complementary_obj::generate(){
            	HX_GC_STACKFRAME(&_hx_pos_86bbdf9cd0317cb8_47_generate)
HXLINE(  48)		this->_colors = ::cpp::VirtualArray_obj::__new(1)->init(0,this->get_primaryColor());
HXLINE(  49)		 ::hxColorToolkit::spaces::HSB _primaryHSB;
HXLINE(  50)		if (::Std_obj::isOfType(this->get_primaryColor(),( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::HSB >()) ))) {
HXLINE(  51)			_primaryHSB = ( ( ::hxColorToolkit::spaces::HSB)(this->get_primaryColor()) );
            		}
            		else {
HXLINE(  53)			 ::hxColorToolkit::spaces::HSB _primaryHSB1 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  53)			_primaryHSB = _primaryHSB1->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(this->get_primaryColor()));
            		}
HXLINE(  56)		 ::hxColorToolkit::spaces::HSB contrasting = _primaryHSB->clone();
HXLINE(  58)		if ((_primaryHSB->get_brightness() > 40)) {
HXLINE(  59)			contrasting->set_brightness((10 + (_primaryHSB->get_brightness() * ((Float)0.25))));
            		}
            		else {
HXLINE(  61)			contrasting->set_brightness((( (Float)(100) ) - (_primaryHSB->get_brightness() * ((Float)0.25))));
            		}
HXLINE(  63)		::cpp::VirtualArray _hx_tmp = this->_colors;
HXDLIN(  63)		_hx_tmp->push(this->mutateFromPrimary(contrasting));
HXLINE(  65)		 ::hxColorToolkit::spaces::HSB supporting = _primaryHSB->clone();
HXLINE(  67)		supporting->set_brightness((30 + _primaryHSB->get_brightness()));
HXLINE(  68)		supporting->set_saturation((10 + (_primaryHSB->get_saturation() * ((Float)0.3))));
HXLINE(  69)		::cpp::VirtualArray _hx_tmp1 = this->_colors;
HXDLIN(  69)		_hx_tmp1->push(this->mutateFromPrimary(supporting));
HXLINE(  72)		 ::hxColorToolkit::spaces::HSB complement =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  72)		 ::hxColorToolkit::spaces::HSB complement1 = complement->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(::hxColorToolkit::spaces::Color_obj::getColor(this->_primaryColor),( (Float)(180) )));
HXLINE(  73)		::cpp::VirtualArray _hx_tmp2 = this->_colors;
HXDLIN(  73)		_hx_tmp2->push(this->mutateFromPrimary(complement1));
HXLINE(  75)		 ::hxColorToolkit::spaces::HSB contrastingComplement = complement1->clone();
HXLINE(  77)		if ((complement1->get_brightness() > 30)) {
HXLINE(  78)			contrastingComplement->set_brightness((10 + (complement1->get_brightness() * ((Float)0.25))));
            		}
            		else {
HXLINE(  80)			contrastingComplement->set_brightness((( (Float)(100) ) - (complement1->get_brightness() * ((Float)0.25))));
            		}
HXLINE(  82)		::cpp::VirtualArray _hx_tmp3 = this->_colors;
HXDLIN(  82)		_hx_tmp3->push(this->mutateFromPrimary(contrastingComplement));
HXLINE(  84)		 ::hxColorToolkit::spaces::HSB supportingComplement = complement1->clone();
HXLINE(  86)		supportingComplement->set_brightness((30 + complement1->get_brightness()));
HXLINE(  87)		supportingComplement->set_saturation((10 + (complement1->get_saturation() * ((Float)0.3))));
HXLINE(  88)		::cpp::VirtualArray _hx_tmp4 = this->_colors;
HXDLIN(  88)		_hx_tmp4->push(this->mutateFromPrimary(supportingComplement));
HXLINE(  90)		this->numOfColors = this->_colors->get_length();
            	}



::hx::ObjectPtr< Complementary_obj > Complementary_obj::__new( ::Dynamic primaryColor) {
	::hx::ObjectPtr< Complementary_obj > __this = new Complementary_obj();
	__this->__construct(primaryColor);
	return __this;
}

::hx::ObjectPtr< Complementary_obj > Complementary_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor) {
	Complementary_obj *__this = (Complementary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Complementary_obj), true, "hxColorToolkit.schemes.Complementary"));
	*(void **)__this = Complementary_obj::_hx_vtable;
	__this->__construct(primaryColor);
	return __this;
}

Complementary_obj::Complementary_obj()
{
}

::hx::Val Complementary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Complementary_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Complementary_obj_sStaticStorageInfo = 0;
#endif

static ::String Complementary_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	HX_("generate",35,5f,a2,d9),
	::String(null()) };

::hx::Class Complementary_obj::__mClass;

void Complementary_obj::__register()
{
	Complementary_obj _hx_dummy;
	Complementary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.schemes.Complementary",7f,4d,0f,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Complementary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Complementary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Complementary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Complementary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace schemes
