#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
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
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af81447acbbc4d82_61_new,"hxColorToolkit.schemes.ColorWheelScheme","new",0x5fa1b152,"hxColorToolkit.schemes.ColorWheelScheme.new","hxColorToolkit/schemes/ColorWheelScheme.hx",61,0xcf12de9c)
HX_LOCAL_STACK_FRAME(_hx_pos_af81447acbbc4d82_34_clone,"hxColorToolkit.schemes.ColorWheelScheme","clone",0x7fa094cf,"hxColorToolkit.schemes.ColorWheelScheme.clone","hxColorToolkit/schemes/ColorWheelScheme.hx",34,0xcf12de9c)
HX_LOCAL_STACK_FRAME(_hx_pos_af81447acbbc4d82_40_getColor,"hxColorToolkit.schemes.ColorWheelScheme","getColor",0x66f6f2bb,"hxColorToolkit.schemes.ColorWheelScheme.getColor","hxColorToolkit/schemes/ColorWheelScheme.hx",40,0xcf12de9c)
HX_LOCAL_STACK_FRAME(_hx_pos_af81447acbbc4d82_44_iterator,"hxColorToolkit.schemes.ColorWheelScheme","iterator",0x505dbbbc,"hxColorToolkit.schemes.ColorWheelScheme.iterator","hxColorToolkit/schemes/ColorWheelScheme.hx",44,0xcf12de9c)
HX_LOCAL_STACK_FRAME(_hx_pos_af81447acbbc4d82_52_get_primaryColor,"hxColorToolkit.schemes.ColorWheelScheme","get_primaryColor",0x4f831e98,"hxColorToolkit.schemes.ColorWheelScheme.get_primaryColor","hxColorToolkit/schemes/ColorWheelScheme.hx",52,0xcf12de9c)
HX_LOCAL_STACK_FRAME(_hx_pos_af81447acbbc4d82_55_set_primaryColor,"hxColorToolkit.schemes.ColorWheelScheme","set_primaryColor",0xa5c50c0c,"hxColorToolkit.schemes.ColorWheelScheme.set_primaryColor","hxColorToolkit/schemes/ColorWheelScheme.hx",55,0xcf12de9c)
HX_LOCAL_STACK_FRAME(_hx_pos_af81447acbbc4d82_71_generate,"hxColorToolkit.schemes.ColorWheelScheme","generate",0x9665d103,"hxColorToolkit.schemes.ColorWheelScheme.generate","hxColorToolkit/schemes/ColorWheelScheme.hx",71,0xcf12de9c)
HX_LOCAL_STACK_FRAME(_hx_pos_af81447acbbc4d82_75_wrap,"hxColorToolkit.schemes.ColorWheelScheme","wrap",0x53d62c98,"hxColorToolkit.schemes.ColorWheelScheme.wrap","hxColorToolkit/schemes/ColorWheelScheme.hx",75,0xcf12de9c)
HX_LOCAL_STACK_FRAME(_hx_pos_af81447acbbc4d82_79_mutateFromPrimary,"hxColorToolkit.schemes.ColorWheelScheme","mutateFromPrimary",0x49e56e04,"hxColorToolkit.schemes.ColorWheelScheme.mutateFromPrimary","hxColorToolkit/schemes/ColorWheelScheme.hx",79,0xcf12de9c)
namespace hxColorToolkit{
namespace schemes{

void ColorWheelScheme_obj::__construct( ::Dynamic primaryColor){
            	HX_STACKFRAME(&_hx_pos_af81447acbbc4d82_61_new)
HXLINE(  62)		this->_colors = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  63)		this->_primaryColor = primaryColor;
HXLINE(  64)		this->numOfColors = 1;
            	}

Dynamic ColorWheelScheme_obj::__CreateEmpty() { return new ColorWheelScheme_obj; }

void *ColorWheelScheme_obj::_hx_vtable = 0;

Dynamic ColorWheelScheme_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorWheelScheme_obj > _hx_result = new ColorWheelScheme_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ColorWheelScheme_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x49f0ef20;
}

static ::hxColorToolkit::schemes::ColorScheme_obj _hx_hxColorToolkit_schemes_ColorWheelScheme__hx_hxColorToolkit_schemes_ColorScheme= {
	( ::Dynamic (::hx::Object::*)())&::hxColorToolkit::schemes::ColorWheelScheme_obj::clone_ee952b4b,
	(  ::Dynamic (::hx::Object::*)(int))&::hxColorToolkit::schemes::ColorWheelScheme_obj::getColor,
	(  ::Dynamic (::hx::Object::*)())&::hxColorToolkit::schemes::ColorWheelScheme_obj::iterator,
};

::Dynamic ColorWheelScheme_obj::clone_ee952b4b() {
			return clone();
}
void *ColorWheelScheme_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc3924d65: return &_hx_hxColorToolkit_schemes_ColorWheelScheme__hx_hxColorToolkit_schemes_ColorScheme;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::hxColorToolkit::schemes::ColorWheelScheme ColorWheelScheme_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_af81447acbbc4d82_34_clone)
HXDLIN(  34)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("need to be overrided",f6,81,a0,b5)));
HXDLIN(  34)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorWheelScheme_obj,clone,return )

 ::Dynamic ColorWheelScheme_obj::getColor(int index){
            	HX_STACKFRAME(&_hx_pos_af81447acbbc4d82_40_getColor)
HXDLIN(  40)		return this->_colors->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorWheelScheme_obj,getColor,return )

 ::Dynamic ColorWheelScheme_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_af81447acbbc4d82_44_iterator)
HXDLIN(  44)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,this->_colors);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorWheelScheme_obj,iterator,return )

 ::Dynamic ColorWheelScheme_obj::get_primaryColor(){
            	HX_STACKFRAME(&_hx_pos_af81447acbbc4d82_52_get_primaryColor)
HXDLIN(  52)		return this->_primaryColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorWheelScheme_obj,get_primaryColor,return )

 ::Dynamic ColorWheelScheme_obj::set_primaryColor( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_af81447acbbc4d82_55_set_primaryColor)
HXLINE(  56)		this->_primaryColor = val;
HXLINE(  57)		this->generate();
HXLINE(  58)		return this->get_primaryColor();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorWheelScheme_obj,set_primaryColor,return )

void ColorWheelScheme_obj::generate(){
            	HX_STACKFRAME(&_hx_pos_af81447acbbc4d82_71_generate)
HXDLIN(  71)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Method must be called by child class",a9,ce,3d,92)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorWheelScheme_obj,generate,(void))

Float ColorWheelScheme_obj::wrap(Float x,Float min,Float threshold,Float plus){
            	HX_STACKFRAME(&_hx_pos_af81447acbbc4d82_75_wrap)
HXDLIN(  75)		if (((x - min) < threshold)) {
HXDLIN(  75)			return (x + plus);
            		}
            		else {
HXDLIN(  75)			return (x - min);
            		}
HXDLIN(  75)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ColorWheelScheme_obj,wrap,return )

 ::Dynamic ColorWheelScheme_obj::mutateFromPrimary(::Dynamic newColor){
            	HX_STACKFRAME(&_hx_pos_af81447acbbc4d82_79_mutateFromPrimary)
HXDLIN(  79)		if (::Std_obj::isOfType(newColor,( ( ::Dynamic)(this->_class) ))) {
HXLINE(  80)			return ::hxColorToolkit::spaces::Color_obj::clone(newColor);
            		}
            		else {
HXLINE(  82)			::Dynamic _hx_tmp = ::hxColorToolkit::spaces::Color_obj::clone(this->get_primaryColor());
HXDLIN(  82)			return ::hxColorToolkit::spaces::Color_obj::fromRGB(_hx_tmp,::hxColorToolkit::spaces::Color_obj::toRGB(newColor));
            		}
HXLINE(  79)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorWheelScheme_obj,mutateFromPrimary,return )


::hx::ObjectPtr< ColorWheelScheme_obj > ColorWheelScheme_obj::__new( ::Dynamic primaryColor) {
	::hx::ObjectPtr< ColorWheelScheme_obj > __this = new ColorWheelScheme_obj();
	__this->__construct(primaryColor);
	return __this;
}

::hx::ObjectPtr< ColorWheelScheme_obj > ColorWheelScheme_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor) {
	ColorWheelScheme_obj *__this = (ColorWheelScheme_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorWheelScheme_obj), true, "hxColorToolkit.schemes.ColorWheelScheme"));
	*(void **)__this = ColorWheelScheme_obj::_hx_vtable;
	__this->__construct(primaryColor);
	return __this;
}

ColorWheelScheme_obj::ColorWheelScheme_obj()
{
}

void ColorWheelScheme_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorWheelScheme);
	HX_MARK_MEMBER_NAME(numOfColors,"numOfColors");
	HX_MARK_MEMBER_NAME(_primaryColor,"_primaryColor");
	HX_MARK_MEMBER_NAME(_colors,"_colors");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_END_CLASS();
}

void ColorWheelScheme_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numOfColors,"numOfColors");
	HX_VISIT_MEMBER_NAME(_primaryColor,"_primaryColor");
	HX_VISIT_MEMBER_NAME(_colors,"_colors");
	HX_VISIT_MEMBER_NAME(_class,"_class");
}

::hx::Val ColorWheelScheme_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { return ::hx::Val( wrap_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { return ::hx::Val( _class ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colors") ) { return ::hx::Val( _colors ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getColor") ) { return ::hx::Val( getColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"generate") ) { return ::hx::Val( generate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numOfColors") ) { return ::hx::Val( numOfColors ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"primaryColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_primaryColor() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_primaryColor") ) { return ::hx::Val( _primaryColor ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_primaryColor") ) { return ::hx::Val( get_primaryColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_primaryColor") ) { return ::hx::Val( set_primaryColor_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"mutateFromPrimary") ) { return ::hx::Val( mutateFromPrimary_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ColorWheelScheme_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colors") ) { _colors=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numOfColors") ) { numOfColors=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"primaryColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_primaryColor(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_primaryColor") ) { _primaryColor=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorWheelScheme_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numOfColors",8d,56,9e,45));
	outFields->push(HX_("primaryColor",41,42,85,45));
	outFields->push(HX_("_primaryColor",20,d5,f3,27));
	outFields->push(HX_("_colors",4f,d7,fd,34));
	outFields->push(HX_("_class",79,bf,3f,44));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorWheelScheme_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ColorWheelScheme_obj,numOfColors),HX_("numOfColors",8d,56,9e,45)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ColorWheelScheme_obj,_primaryColor),HX_("_primaryColor",20,d5,f3,27)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ColorWheelScheme_obj,_colors),HX_("_colors",4f,d7,fd,34)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(ColorWheelScheme_obj,_class),HX_("_class",79,bf,3f,44)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ColorWheelScheme_obj_sStaticStorageInfo = 0;
#endif

static ::String ColorWheelScheme_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	HX_("numOfColors",8d,56,9e,45),
	HX_("getColor",ed,80,33,aa),
	HX_("iterator",ee,49,9a,93),
	HX_("_primaryColor",20,d5,f3,27),
	HX_("get_primaryColor",ca,2e,24,4a),
	HX_("set_primaryColor",3e,1c,66,a0),
	HX_("_colors",4f,d7,fd,34),
	HX_("_class",79,bf,3f,44),
	HX_("generate",35,5f,a2,d9),
	HX_("wrap",ca,39,ff,4e),
	HX_("mutateFromPrimary",92,89,32,9c),
	::String(null()) };

::hx::Class ColorWheelScheme_obj::__mClass;

void ColorWheelScheme_obj::__register()
{
	ColorWheelScheme_obj _hx_dummy;
	ColorWheelScheme_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.schemes.ColorWheelScheme",60,60,be,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorWheelScheme_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorWheelScheme_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorWheelScheme_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorWheelScheme_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace schemes
