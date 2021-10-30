#include <hxcpp.h>

#ifndef INCLUDED_hxColorToolkit_ColorToolkit
#include <hxColorToolkit/ColorToolkit.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_ColorScheme
#include <hxColorToolkit/schemes/ColorScheme.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_ColorWheelScheme
#include <hxColorToolkit/schemes/ColorWheelScheme.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_SplitComplementary
#include <hxColorToolkit/schemes/SplitComplementary.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_HSB
#include <hxColorToolkit/spaces/HSB.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_43884a42ce1439cb_41_new,"hxColorToolkit.schemes.SplitComplementary","new",0xa7260b1d,"hxColorToolkit.schemes.SplitComplementary.new","hxColorToolkit/schemes/SplitComplementary.hx",41,0x696112b1)
HX_LOCAL_STACK_FRAME(_hx_pos_43884a42ce1439cb_37_clone,"hxColorToolkit.schemes.SplitComplementary","clone",0xf447375a,"hxColorToolkit.schemes.SplitComplementary.clone","hxColorToolkit/schemes/SplitComplementary.hx",37,0x696112b1)
HX_LOCAL_STACK_FRAME(_hx_pos_43884a42ce1439cb_47_generate,"hxColorToolkit.schemes.SplitComplementary","generate",0x7df11758,"hxColorToolkit.schemes.SplitComplementary.generate","hxColorToolkit/schemes/SplitComplementary.hx",47,0x696112b1)
namespace hxColorToolkit{
namespace schemes{

void SplitComplementary_obj::__construct( ::Dynamic primaryColor){
            	HX_STACKFRAME(&_hx_pos_43884a42ce1439cb_41_new)
HXLINE(  42)		super::__construct(primaryColor);
HXLINE(  43)		this->generate();
            	}

Dynamic SplitComplementary_obj::__CreateEmpty() { return new SplitComplementary_obj; }

void *SplitComplementary_obj::_hx_vtable = 0;

Dynamic SplitComplementary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SplitComplementary_obj > _hx_result = new SplitComplementary_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SplitComplementary_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x49f0ef20) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x49f0ef20;
	} else {
		return inClassId==(int)0x54ecf76b;
	}
}

 ::hxColorToolkit::schemes::ColorWheelScheme SplitComplementary_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_43884a42ce1439cb_37_clone)
HXDLIN(  37)		return  ::hxColorToolkit::schemes::SplitComplementary_obj::__alloc( HX_CTX ,this->get_primaryColor());
            	}


void SplitComplementary_obj::generate(){
            	HX_GC_STACKFRAME(&_hx_pos_43884a42ce1439cb_47_generate)
HXLINE(  48)		this->_colors = ::cpp::VirtualArray_obj::__new(1)->init(0,this->get_primaryColor());
HXLINE(  49)		int _primary = ::hxColorToolkit::spaces::Color_obj::getColor(this->_primaryColor);
HXLINE(  50)		 ::hxColorToolkit::spaces::HSB c1 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  50)		 ::hxColorToolkit::spaces::HSB c11 = c1->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,( (Float)(150) )));
HXLINE(  51)		 ::hxColorToolkit::spaces::HSB c2 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  51)		 ::hxColorToolkit::spaces::HSB c21 = c2->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,( (Float)(210) )));
HXLINE(  53)		c11->set_brightness((c11->get_brightness() + 10));
HXLINE(  54)		c21->set_brightness((c21->get_brightness() + 10));
HXLINE(  56)		::cpp::VirtualArray _hx_tmp = this->_colors;
HXDLIN(  56)		_hx_tmp->push(this->mutateFromPrimary(c11));
HXLINE(  57)		::cpp::VirtualArray _hx_tmp1 = this->_colors;
HXDLIN(  57)		_hx_tmp1->push(this->mutateFromPrimary(c21));
HXLINE(  59)		this->numOfColors = this->_colors->get_length();
            	}



::hx::ObjectPtr< SplitComplementary_obj > SplitComplementary_obj::__new( ::Dynamic primaryColor) {
	::hx::ObjectPtr< SplitComplementary_obj > __this = new SplitComplementary_obj();
	__this->__construct(primaryColor);
	return __this;
}

::hx::ObjectPtr< SplitComplementary_obj > SplitComplementary_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor) {
	SplitComplementary_obj *__this = (SplitComplementary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SplitComplementary_obj), true, "hxColorToolkit.schemes.SplitComplementary"));
	*(void **)__this = SplitComplementary_obj::_hx_vtable;
	__this->__construct(primaryColor);
	return __this;
}

SplitComplementary_obj::SplitComplementary_obj()
{
}

::hx::Val SplitComplementary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *SplitComplementary_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SplitComplementary_obj_sStaticStorageInfo = 0;
#endif

static ::String SplitComplementary_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	HX_("generate",35,5f,a2,d9),
	::String(null()) };

::hx::Class SplitComplementary_obj::__mClass;

void SplitComplementary_obj::__register()
{
	SplitComplementary_obj _hx_dummy;
	SplitComplementary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.schemes.SplitComplementary",ab,38,e9,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SplitComplementary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SplitComplementary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SplitComplementary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SplitComplementary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace schemes
