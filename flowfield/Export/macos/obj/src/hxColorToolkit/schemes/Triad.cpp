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
#ifndef INCLUDED_hxColorToolkit_schemes_Triad
#include <hxColorToolkit/schemes/Triad.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_HSB
#include <hxColorToolkit/spaces/HSB.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4855a5c532cafdd4_53_new,"hxColorToolkit.schemes.Triad","new",0x330bda7d,"hxColorToolkit.schemes.Triad.new","hxColorToolkit/schemes/Triad.hx",53,0x5e28fe95)
HX_LOCAL_STACK_FRAME(_hx_pos_4855a5c532cafdd4_36_clone,"hxColorToolkit.schemes.Triad","clone",0xa0c79eba,"hxColorToolkit.schemes.Triad.clone","hxColorToolkit/schemes/Triad.hx",36,0x5e28fe95)
HX_LOCAL_STACK_FRAME(_hx_pos_4855a5c532cafdd4_44_get_angle,"hxColorToolkit.schemes.Triad","get_angle",0xffd59e07,"hxColorToolkit.schemes.Triad.get_angle","hxColorToolkit/schemes/Triad.hx",44,0x5e28fe95)
HX_LOCAL_STACK_FRAME(_hx_pos_4855a5c532cafdd4_47_set_angle,"hxColorToolkit.schemes.Triad","set_angle",0xe3268a13,"hxColorToolkit.schemes.Triad.set_angle","hxColorToolkit/schemes/Triad.hx",47,0x5e28fe95)
HX_LOCAL_STACK_FRAME(_hx_pos_4855a5c532cafdd4_59_generate,"hxColorToolkit.schemes.Triad","generate",0xf5df8bf8,"hxColorToolkit.schemes.Triad.generate","hxColorToolkit/schemes/Triad.hx",59,0x5e28fe95)
namespace hxColorToolkit{
namespace schemes{

void Triad_obj::__construct( ::Dynamic primaryColor, ::Dynamic __o_angle){
            		 ::Dynamic angle = __o_angle;
            		if (::hx::IsNull(__o_angle)) angle = 120;
            	HX_STACKFRAME(&_hx_pos_4855a5c532cafdd4_53_new)
HXLINE(  54)		super::__construct(primaryColor);
HXLINE(  55)		this->_angle = ( (Float)(angle) );
HXLINE(  56)		this->generate();
            	}

Dynamic Triad_obj::__CreateEmpty() { return new Triad_obj; }

void *Triad_obj::_hx_vtable = 0;

Dynamic Triad_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Triad_obj > _hx_result = new Triad_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Triad_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4935514b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4935514b;
	} else {
		return inClassId==(int)0x49f0ef20;
	}
}

 ::hxColorToolkit::schemes::ColorWheelScheme Triad_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_4855a5c532cafdd4_36_clone)
HXDLIN(  36)		 ::Dynamic _hx_tmp = this->get_primaryColor();
HXDLIN(  36)		return  ::hxColorToolkit::schemes::Triad_obj::__alloc( HX_CTX ,_hx_tmp,this->get_angle());
            	}


Float Triad_obj::get_angle(){
            	HX_STACKFRAME(&_hx_pos_4855a5c532cafdd4_44_get_angle)
HXDLIN(  44)		return this->_angle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Triad_obj,get_angle,return )

Float Triad_obj::set_angle(Float value){
            	HX_STACKFRAME(&_hx_pos_4855a5c532cafdd4_47_set_angle)
HXLINE(  48)		this->_angle = value;
HXLINE(  49)		this->generate();
HXLINE(  50)		return this->get_angle();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Triad_obj,set_angle,return )

void Triad_obj::generate(){
            	HX_GC_STACKFRAME(&_hx_pos_4855a5c532cafdd4_59_generate)
HXLINE(  60)		this->_colors = ::cpp::VirtualArray_obj::__new(1)->init(0,this->get_primaryColor());
HXLINE(  61)		int _primary = ::hxColorToolkit::spaces::Color_obj::getColor(this->_primaryColor);
HXLINE(  63)		 ::hxColorToolkit::spaces::HSB c1 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  63)		 ::hxColorToolkit::spaces::HSB c11 = c1->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,this->_angle));
HXLINE(  65)		c11->set_brightness((c11->get_brightness() + 10));
HXLINE(  66)		::cpp::VirtualArray _hx_tmp = this->_colors;
HXDLIN(  66)		_hx_tmp->push(this->mutateFromPrimary(c11));
HXLINE(  68)		 ::hxColorToolkit::spaces::HSB c2 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  68)		 ::hxColorToolkit::spaces::HSB c21 = c2->setColor(::hxColorToolkit::ColorToolkit_obj::rybRotate(_primary,-(this->_angle)));
HXLINE(  70)		c21->set_brightness((c21->get_brightness() + 10));
HXLINE(  71)		::cpp::VirtualArray _hx_tmp1 = this->_colors;
HXDLIN(  71)		_hx_tmp1->push(this->mutateFromPrimary(c21));
HXLINE(  73)		this->numOfColors = this->_colors->get_length();
            	}



::hx::ObjectPtr< Triad_obj > Triad_obj::__new( ::Dynamic primaryColor, ::Dynamic __o_angle) {
	::hx::ObjectPtr< Triad_obj > __this = new Triad_obj();
	__this->__construct(primaryColor,__o_angle);
	return __this;
}

::hx::ObjectPtr< Triad_obj > Triad_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor, ::Dynamic __o_angle) {
	Triad_obj *__this = (Triad_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Triad_obj), true, "hxColorToolkit.schemes.Triad"));
	*(void **)__this = Triad_obj::_hx_vtable;
	__this->__construct(primaryColor,__o_angle);
	return __this;
}

Triad_obj::Triad_obj()
{
}

::hx::Val Triad_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"generate") ) { return ::hx::Val( generate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_angle") ) { return ::hx::Val( get_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Triad_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Triad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("_angle",14,8b,c9,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Triad_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Triad_obj,_angle),HX_("_angle",14,8b,c9,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Triad_obj_sStaticStorageInfo = 0;
#endif

static ::String Triad_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	HX_("_angle",14,8b,c9,1e),
	HX_("get_angle",2a,a0,8b,66),
	HX_("set_angle",36,8c,dc,49),
	HX_("generate",35,5f,a2,d9),
	::String(null()) };

::hx::Class Triad_obj::__mClass;

void Triad_obj::__register()
{
	Triad_obj _hx_dummy;
	Triad_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.schemes.Triad",0b,d8,1b,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Triad_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Triad_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Triad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Triad_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace schemes
