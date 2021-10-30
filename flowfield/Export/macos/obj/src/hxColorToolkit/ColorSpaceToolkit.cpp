#include <hxcpp.h>

#ifndef INCLUDED_hxColorToolkit_ColorSpaceToolkit
#include <hxColorToolkit/ColorSpaceToolkit.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_ARGB
#include <hxColorToolkit/spaces/ARGB.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_CMYK
#include <hxColorToolkit/spaces/CMYK.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Gray
#include <hxColorToolkit/spaces/Gray.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_HSB
#include <hxColorToolkit/spaces/HSB.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_HSL
#include <hxColorToolkit/spaces/HSL.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Hex
#include <hxColorToolkit/spaces/Hex.h>
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
#ifndef INCLUDED_hxColorToolkit_spaces_YUV
#include <hxColorToolkit/spaces/YUV.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_bf67f45b53807b95_188_toLab,"hxColorToolkit.ColorSpaceToolkit","toLab",0x4209bebc,"hxColorToolkit.ColorSpaceToolkit.toLab","hxColorToolkit/ColorToolkit.hx",188,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf67f45b53807b95_193_toGray,"hxColorToolkit.ColorSpaceToolkit","toGray",0x833bfa94,"hxColorToolkit.ColorSpaceToolkit.toGray","hxColorToolkit/ColorToolkit.hx",193,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf67f45b53807b95_198_toHSB,"hxColorToolkit.ColorSpaceToolkit","toHSB",0x4206a966,"hxColorToolkit.ColorSpaceToolkit.toHSB","hxColorToolkit/ColorToolkit.hx",198,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf67f45b53807b95_203_toHSL,"hxColorToolkit.ColorSpaceToolkit","toHSL",0x4206a970,"hxColorToolkit.ColorSpaceToolkit.toHSL","hxColorToolkit/ColorToolkit.hx",203,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf67f45b53807b95_208_toCMYK,"hxColorToolkit.ColorSpaceToolkit","toCMYK",0x807b058d,"hxColorToolkit.ColorSpaceToolkit.toCMYK","hxColorToolkit/ColorToolkit.hx",208,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf67f45b53807b95_213_toXYZ,"hxColorToolkit.ColorSpaceToolkit","toXYZ",0x4212d2c8,"hxColorToolkit.ColorSpaceToolkit.toXYZ","hxColorToolkit/ColorToolkit.hx",213,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf67f45b53807b95_218_toYUV,"hxColorToolkit.ColorSpaceToolkit","toYUV",0x42139189,"hxColorToolkit.ColorSpaceToolkit.toYUV","hxColorToolkit/ColorToolkit.hx",218,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf67f45b53807b95_223_toARGB,"hxColorToolkit.ColorSpaceToolkit","toARGB",0x7f2c53dd,"hxColorToolkit.ColorSpaceToolkit.toARGB","hxColorToolkit/ColorToolkit.hx",223,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf67f45b53807b95_228_toHex,"hxColorToolkit.ColorSpaceToolkit","toHex",0x4206b94a,"hxColorToolkit.ColorSpaceToolkit.toHex","hxColorToolkit/ColorToolkit.hx",228,0x68c20f5f)
namespace hxColorToolkit{

void ColorSpaceToolkit_obj::__construct() { }

Dynamic ColorSpaceToolkit_obj::__CreateEmpty() { return new ColorSpaceToolkit_obj; }

void *ColorSpaceToolkit_obj::_hx_vtable = 0;

Dynamic ColorSpaceToolkit_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorSpaceToolkit_obj > _hx_result = new ColorSpaceToolkit_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorSpaceToolkit_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0be0a92c;
}

 ::hxColorToolkit::spaces::Lab ColorSpaceToolkit_obj::toLab(::Dynamic color){
            	HX_GC_STACKFRAME(&_hx_pos_bf67f45b53807b95_188_toLab)
HXDLIN( 188)		 ::hxColorToolkit::spaces::Lab _hx_tmp =  ::hxColorToolkit::spaces::Lab_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 188)		return _hx_tmp->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorSpaceToolkit_obj,toLab,return )

 ::hxColorToolkit::spaces::Gray ColorSpaceToolkit_obj::toGray(::Dynamic color){
            	HX_GC_STACKFRAME(&_hx_pos_bf67f45b53807b95_193_toGray)
HXDLIN( 193)		 ::hxColorToolkit::spaces::Gray _hx_tmp =  ::hxColorToolkit::spaces::Gray_obj::__alloc( HX_CTX ,null());
HXDLIN( 193)		return _hx_tmp->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorSpaceToolkit_obj,toGray,return )

 ::hxColorToolkit::spaces::HSB ColorSpaceToolkit_obj::toHSB(::Dynamic color){
            	HX_GC_STACKFRAME(&_hx_pos_bf67f45b53807b95_198_toHSB)
HXDLIN( 198)		 ::hxColorToolkit::spaces::HSB _hx_tmp =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 198)		return _hx_tmp->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorSpaceToolkit_obj,toHSB,return )

 ::hxColorToolkit::spaces::HSL ColorSpaceToolkit_obj::toHSL(::Dynamic color){
            	HX_GC_STACKFRAME(&_hx_pos_bf67f45b53807b95_203_toHSL)
HXDLIN( 203)		 ::hxColorToolkit::spaces::HSL _hx_tmp =  ::hxColorToolkit::spaces::HSL_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 203)		return _hx_tmp->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorSpaceToolkit_obj,toHSL,return )

 ::hxColorToolkit::spaces::CMYK ColorSpaceToolkit_obj::toCMYK(::Dynamic color){
            	HX_GC_STACKFRAME(&_hx_pos_bf67f45b53807b95_208_toCMYK)
HXDLIN( 208)		 ::hxColorToolkit::spaces::CMYK _hx_tmp =  ::hxColorToolkit::spaces::CMYK_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN( 208)		return _hx_tmp->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorSpaceToolkit_obj,toCMYK,return )

 ::hxColorToolkit::spaces::XYZ ColorSpaceToolkit_obj::toXYZ(::Dynamic color){
            	HX_GC_STACKFRAME(&_hx_pos_bf67f45b53807b95_213_toXYZ)
HXDLIN( 213)		 ::hxColorToolkit::spaces::XYZ _hx_tmp =  ::hxColorToolkit::spaces::XYZ_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 213)		return _hx_tmp->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorSpaceToolkit_obj,toXYZ,return )

 ::hxColorToolkit::spaces::YUV ColorSpaceToolkit_obj::toYUV(::Dynamic color){
            	HX_GC_STACKFRAME(&_hx_pos_bf67f45b53807b95_218_toYUV)
HXDLIN( 218)		 ::hxColorToolkit::spaces::YUV _hx_tmp =  ::hxColorToolkit::spaces::YUV_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 218)		return _hx_tmp->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorSpaceToolkit_obj,toYUV,return )

 ::hxColorToolkit::spaces::ARGB ColorSpaceToolkit_obj::toARGB(::Dynamic color){
            	HX_GC_STACKFRAME(&_hx_pos_bf67f45b53807b95_223_toARGB)
HXDLIN( 223)		 ::hxColorToolkit::spaces::ARGB _hx_tmp =  ::hxColorToolkit::spaces::ARGB_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN( 223)		return Dynamic( _hx_tmp->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(color))).StaticCast<  ::hxColorToolkit::spaces::ARGB >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorSpaceToolkit_obj,toARGB,return )

 ::hxColorToolkit::spaces::Hex ColorSpaceToolkit_obj::toHex(::Dynamic color){
            	HX_GC_STACKFRAME(&_hx_pos_bf67f45b53807b95_228_toHex)
HXDLIN( 228)		return  ::hxColorToolkit::spaces::Hex_obj::__alloc( HX_CTX ,::hxColorToolkit::spaces::Color_obj::getColor(color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorSpaceToolkit_obj,toHex,return )


ColorSpaceToolkit_obj::ColorSpaceToolkit_obj()
{
}

bool ColorSpaceToolkit_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toLab") ) { outValue = toLab_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHSB") ) { outValue = toHSB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHSL") ) { outValue = toHSL_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toXYZ") ) { outValue = toXYZ_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toYUV") ) { outValue = toYUV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHex") ) { outValue = toHex_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGray") ) { outValue = toGray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toCMYK") ) { outValue = toCMYK_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toARGB") ) { outValue = toARGB_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ColorSpaceToolkit_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ColorSpaceToolkit_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ColorSpaceToolkit_obj::__mClass;

static ::String ColorSpaceToolkit_obj_sStaticFields[] = {
	HX_("toLab",92,f9,13,14),
	HX_("toGray",fe,3a,25,7a),
	HX_("toHSB",3c,e4,10,14),
	HX_("toHSL",46,e4,10,14),
	HX_("toCMYK",f7,45,64,77),
	HX_("toXYZ",9e,0d,1d,14),
	HX_("toYUV",5f,cc,1d,14),
	HX_("toARGB",47,94,15,76),
	HX_("toHex",20,f4,10,14),
	::String(null())
};

void ColorSpaceToolkit_obj::__register()
{
	ColorSpaceToolkit_obj _hx_dummy;
	ColorSpaceToolkit_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.ColorSpaceToolkit",18,8a,84,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorSpaceToolkit_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorSpaceToolkit_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ColorSpaceToolkit_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorSpaceToolkit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorSpaceToolkit_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
