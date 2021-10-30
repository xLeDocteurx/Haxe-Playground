#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxColorToolkit_ColorToolkit
#include <hxColorToolkit/ColorToolkit.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_Analogous
#include <hxColorToolkit/schemes/Analogous.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_ColorScheme
#include <hxColorToolkit/schemes/ColorScheme.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_ColorWheelScheme
#include <hxColorToolkit/schemes/ColorWheelScheme.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_87ab418a7dcd6c5e_65_new,"hxColorToolkit.schemes.Analogous","new",0x9d179a0c,"hxColorToolkit.schemes.Analogous.new","hxColorToolkit/schemes/Analogous.hx",65,0x63764ee6)
HX_LOCAL_STACK_FRAME(_hx_pos_87ab418a7dcd6c5e_35_clone,"hxColorToolkit.schemes.Analogous","clone",0x74eda009,"hxColorToolkit.schemes.Analogous.clone","hxColorToolkit/schemes/Analogous.hx",35,0x63764ee6)
HX_LOCAL_STACK_FRAME(_hx_pos_87ab418a7dcd6c5e_44_get_angle,"hxColorToolkit.schemes.Analogous","get_angle",0xc237f2d6,"hxColorToolkit.schemes.Analogous.get_angle","hxColorToolkit/schemes/Analogous.hx",44,0x63764ee6)
HX_LOCAL_STACK_FRAME(_hx_pos_87ab418a7dcd6c5e_47_set_angle,"hxColorToolkit.schemes.Analogous","set_angle",0xa588dee2,"hxColorToolkit.schemes.Analogous.set_angle","hxColorToolkit/schemes/Analogous.hx",47,0x63764ee6)
HX_LOCAL_STACK_FRAME(_hx_pos_87ab418a7dcd6c5e_56_get_contrast,"hxColorToolkit.schemes.Analogous","get_contrast",0xc9cf41df,"hxColorToolkit.schemes.Analogous.get_contrast","hxColorToolkit/schemes/Analogous.hx",56,0x63764ee6)
HX_LOCAL_STACK_FRAME(_hx_pos_87ab418a7dcd6c5e_59_set_contrast,"hxColorToolkit.schemes.Analogous","set_contrast",0xdec86553,"hxColorToolkit.schemes.Analogous.set_contrast","hxColorToolkit/schemes/Analogous.hx",59,0x63764ee6)
HX_LOCAL_STACK_FRAME(_hx_pos_87ab418a7dcd6c5e_72_generate,"hxColorToolkit.schemes.Analogous","generate",0x9ae80609,"hxColorToolkit.schemes.Analogous.generate","hxColorToolkit/schemes/Analogous.hx",72,0x63764ee6)
static const Float _hx_array_data_3aaee41a_8[] = {
	1.0,2.2,
};
static const Float _hx_array_data_3aaee41a_9[] = {
	2.0,1.0,
};
static const Float _hx_array_data_3aaee41a_10[] = {
	-1.0,-0.5,
};
static const Float _hx_array_data_3aaee41a_11[] = {
	-2.0,1.0,
};
namespace hxColorToolkit{
namespace schemes{

void Analogous_obj::__construct( ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_contrast){
            		 ::Dynamic angle = __o_angle;
            		if (::hx::IsNull(__o_angle)) angle = 10;
            		 ::Dynamic contrast = __o_contrast;
            		if (::hx::IsNull(__o_contrast)) contrast = 25;
            	HX_STACKFRAME(&_hx_pos_87ab418a7dcd6c5e_65_new)
HXLINE(  66)		super::__construct(primaryColor);
HXLINE(  67)		this->_angle = ( (Float)(angle) );
HXLINE(  68)		this->_contrast = ( (Float)(contrast) );
HXLINE(  69)		this->generate();
            	}

Dynamic Analogous_obj::__CreateEmpty() { return new Analogous_obj; }

void *Analogous_obj::_hx_vtable = 0;

Dynamic Analogous_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Analogous_obj > _hx_result = new Analogous_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Analogous_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x49f0ef20) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x49f0ef20;
	} else {
		return inClassId==(int)0x521dfd5a;
	}
}

 ::hxColorToolkit::schemes::ColorWheelScheme Analogous_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_87ab418a7dcd6c5e_35_clone)
HXDLIN(  35)		 ::Dynamic _hx_tmp = this->get_primaryColor();
HXDLIN(  35)		Float _hx_tmp1 = this->get_angle();
HXDLIN(  35)		return  ::hxColorToolkit::schemes::Analogous_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->get_contrast());
            	}


Float Analogous_obj::get_angle(){
            	HX_STACKFRAME(&_hx_pos_87ab418a7dcd6c5e_44_get_angle)
HXDLIN(  44)		return this->_angle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Analogous_obj,get_angle,return )

Float Analogous_obj::set_angle(Float val){
            	HX_STACKFRAME(&_hx_pos_87ab418a7dcd6c5e_47_set_angle)
HXLINE(  48)		this->_angle = val;
HXLINE(  49)		this->generate();
HXLINE(  50)		return this->get_angle();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Analogous_obj,set_angle,return )

Float Analogous_obj::get_contrast(){
            	HX_STACKFRAME(&_hx_pos_87ab418a7dcd6c5e_56_get_contrast)
HXDLIN(  56)		return this->_contrast;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Analogous_obj,get_contrast,return )

Float Analogous_obj::set_contrast(Float val){
            	HX_STACKFRAME(&_hx_pos_87ab418a7dcd6c5e_59_set_contrast)
HXLINE(  60)		this->_contrast = val;
HXLINE(  61)		this->generate();
HXLINE(  62)		return this->_contrast;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Analogous_obj,set_contrast,return )

void Analogous_obj::generate(){
            	HX_GC_STACKFRAME(&_hx_pos_87ab418a7dcd6c5e_72_generate)
HXLINE(  73)		this->_colors = ::cpp::VirtualArray_obj::__new(1)->init(0,this->get_primaryColor());
HXLINE(  74)		 ::hxColorToolkit::spaces::HSB _primaryHSB;
HXLINE(  75)		if (::Std_obj::isOfType(this->get_primaryColor(),( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::HSB >()) ))) {
HXLINE(  76)			_primaryHSB = ( ( ::hxColorToolkit::spaces::HSB)(this->get_primaryColor()) );
            		}
            		else {
HXLINE(  78)			 ::hxColorToolkit::spaces::HSB _primaryHSB1 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  78)			_primaryHSB = _primaryHSB1->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(this->get_primaryColor()));
            		}
HXLINE(  80)		 ::hxColorToolkit::spaces::HSB newHSB =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  81)		::Array< ::Dynamic> array = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< Float >::fromData( _hx_array_data_3aaee41a_8,2))->init(1,::Array_obj< Float >::fromData( _hx_array_data_3aaee41a_9,2))->init(2,::Array_obj< Float >::fromData( _hx_array_data_3aaee41a_10,2))->init(3,::Array_obj< Float >::fromData( _hx_array_data_3aaee41a_11,2));
HXLINE(  82)		{
HXLINE(  82)			int _g = 0;
HXDLIN(  82)			int _g1 = array->length;
HXDLIN(  82)			while((_g < _g1)){
HXLINE(  82)				_g = (_g + 1);
HXDLIN(  82)				int i = (_g - 1);
HXLINE(  83)				Float one = array->__get(i).StaticCast< ::Array< Float > >()->__get(0);
HXLINE(  84)				Float two = array->__get(i).StaticCast< ::Array< Float > >()->__get(1);
HXLINE(  86)				int _hx_tmp = _primaryHSB->getColor();
HXDLIN(  86)				newHSB->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_hx_tmp,(this->get_angle() * one)));
HXLINE(  87)				Float t = (((Float)0.44) - (two * ((Float)0.1)));
HXLINE(  88)				Float _hx_tmp1 = _primaryHSB->get_brightness();
HXDLIN(  88)				if (((_hx_tmp1 - (this->get_contrast() * two)) < t)) {
HXLINE(  89)					newHSB->set_brightness((t * ( (Float)(100) )));
            				}
            				else {
HXLINE(  91)					Float _hx_tmp = _primaryHSB->get_brightness();
HXDLIN(  91)					newHSB->set_brightness((_hx_tmp - (this->get_contrast() * two)));
            				}
HXLINE(  93)				newHSB->set_saturation((newHSB->get_saturation() - ( (Float)(5) )));
HXLINE(  94)				::cpp::VirtualArray _hx_tmp2 = this->_colors;
HXDLIN(  94)				_hx_tmp2->push(this->mutateFromPrimary(newHSB));
            			}
            		}
HXLINE(  96)		this->numOfColors = this->_colors->get_length();
            	}



::hx::ObjectPtr< Analogous_obj > Analogous_obj::__new( ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_contrast) {
	::hx::ObjectPtr< Analogous_obj > __this = new Analogous_obj();
	__this->__construct(primaryColor,__o_angle,__o_contrast);
	return __this;
}

::hx::ObjectPtr< Analogous_obj > Analogous_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_contrast) {
	Analogous_obj *__this = (Analogous_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Analogous_obj), true, "hxColorToolkit.schemes.Analogous"));
	*(void **)__this = Analogous_obj::_hx_vtable;
	__this->__construct(primaryColor,__o_angle,__o_contrast);
	return __this;
}

Analogous_obj::Analogous_obj()
{
}

::hx::Val Analogous_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_angle() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { return ::hx::Val( _angle ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contrast") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contrast() ); }
		if (HX_FIELD_EQ(inName,"generate") ) { return ::hx::Val( generate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_angle") ) { return ::hx::Val( get_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"_contrast") ) { return ::hx::Val( _contrast ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_contrast") ) { return ::hx::Val( get_contrast_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contrast") ) { return ::hx::Val( set_contrast_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Analogous_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contrast") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_contrast(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_contrast") ) { _contrast=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Analogous_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("contrast",02,ed,b1,37));
	outFields->push(HX_("_angle",14,8b,c9,1e));
	outFields->push(HX_("_contrast",61,e4,47,7f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Analogous_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Analogous_obj,_angle),HX_("_angle",14,8b,c9,1e)},
	{::hx::fsFloat,(int)offsetof(Analogous_obj,_contrast),HX_("_contrast",61,e4,47,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Analogous_obj_sStaticStorageInfo = 0;
#endif

static ::String Analogous_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	HX_("_angle",14,8b,c9,1e),
	HX_("get_angle",2a,a0,8b,66),
	HX_("set_angle",36,8c,dc,49),
	HX_("_contrast",61,e4,47,7f),
	HX_("get_contrast",0b,a1,cb,ec),
	HX_("set_contrast",7f,c4,c4,01),
	HX_("generate",35,5f,a2,d9),
	::String(null()) };

::hx::Class Analogous_obj::__mClass;

void Analogous_obj::__register()
{
	Analogous_obj _hx_dummy;
	Analogous_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.schemes.Analogous",1a,e4,ae,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Analogous_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Analogous_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Analogous_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Analogous_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace schemes
