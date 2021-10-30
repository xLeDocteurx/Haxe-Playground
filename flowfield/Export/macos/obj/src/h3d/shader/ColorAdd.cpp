#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_shader_ColorAdd
#include <h3d/shader/ColorAdd.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_SharedShader
#include <hxsl/SharedShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_741baa376576b86b_3_new,"h3d.shader.ColorAdd","new",0x0a8475c4,"h3d.shader.ColorAdd.new","h3d/shader/ColorAdd.hx",3,0xe0acf00c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b428d2052d7d9dc_174_get_color,"h3d.shader.ColorAdd","get_color",0xf022961e,"h3d.shader.ColorAdd.get_color","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1b428d2052d7d9dc_191_set_color,"h3d.shader.ColorAdd","set_color",0xd373822a,"h3d.shader.ColorAdd.set_color","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1b428d2052d7d9dc_270_updateConstants,"h3d.shader.ColorAdd","updateConstants",0x763b72aa,"h3d.shader.ColorAdd.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_741baa376576b86b_5_getParamValue,"h3d.shader.ColorAdd","getParamValue",0x5697763e,"h3d.shader.ColorAdd.getParamValue","h3d/shader/ColorAdd.hx",5,0xe0acf00c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b428d2052d7d9dc_304_getParamFloatValue,"h3d.shader.ColorAdd","getParamFloatValue",0x889f9648,"h3d.shader.ColorAdd.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_741baa376576b86b_5_clone,"h3d.shader.ColorAdd","clone",0xbc12d9c1,"h3d.shader.ColorAdd.clone","h3d/shader/ColorAdd.hx",5,0xe0acf00c)
HX_LOCAL_STACK_FRAME(_hx_pos_741baa376576b86b_5_boot,"h3d.shader.ColorAdd","boot",0x217b964e,"h3d.shader.ColorAdd.boot","h3d/shader/ColorAdd.hx",5,0xe0acf00c)
namespace h3d{
namespace shader{

void ColorAdd_obj::__construct(::hx::Null< int >  __o_color){
            		int color = __o_color.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_741baa376576b86b_3_new)
HXLINE(  63)		this->color__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  17)		super::__construct();
HXLINE(  18)		{
HXLINE(  18)			 ::h3d::Vector _this = this->color__;
HXDLIN(  18)			_this->x = (( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN(  18)			_this->y = (( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN(  18)			_this->z = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXDLIN(  18)			_this->w = (( (Float)(::hx::UShr(color,24)) ) / ( (Float)(255) ));
            		}
            	}

Dynamic ColorAdd_obj::__CreateEmpty() { return new ColorAdd_obj; }

void *ColorAdd_obj::_hx_vtable = 0;

Dynamic ColorAdd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorAdd_obj > _hx_result = new ColorAdd_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ColorAdd_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x46219458;
	}
}

 ::h3d::Vector ColorAdd_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_1b428d2052d7d9dc_174_get_color)
HXDLIN( 174)		return this->color__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorAdd_obj,get_color,return )

 ::h3d::Vector ColorAdd_obj::set_color( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_1b428d2052d7d9dc_191_set_color)
HXDLIN( 191)		return (this->color__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorAdd_obj,set_color,return )

void ColorAdd_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_1b428d2052d7d9dc_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic ColorAdd_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_741baa376576b86b_5_getParamValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 287)			return this->color__;
            		}
HXLINE( 288)		return null();
            	}


Float ColorAdd_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_1b428d2052d7d9dc_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader ColorAdd_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_741baa376576b86b_5_clone)
HXLINE( 315)		 ::h3d::shader::ColorAdd s = ( ( ::h3d::shader::ColorAdd)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::ColorAdd >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->color__ = this->color__;
HXLINE( 322)		return s;
            	}


::String ColorAdd_obj::SRC;

 ::hxsl::SharedShader ColorAdd_obj::_SHADER;


::hx::ObjectPtr< ColorAdd_obj > ColorAdd_obj::__new(::hx::Null< int >  __o_color) {
	::hx::ObjectPtr< ColorAdd_obj > __this = new ColorAdd_obj();
	__this->__construct(__o_color);
	return __this;
}

::hx::ObjectPtr< ColorAdd_obj > ColorAdd_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_color) {
	ColorAdd_obj *__this = (ColorAdd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorAdd_obj), true, "h3d.shader.ColorAdd"));
	*(void **)__this = ColorAdd_obj::_hx_vtable;
	__this->__construct(__o_color);
	return __this;
}

ColorAdd_obj::ColorAdd_obj()
{
}

void ColorAdd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorAdd);
	HX_MARK_MEMBER_NAME(color__,"color__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorAdd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color__,"color__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ColorAdd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"color__") ) { return ::hx::Val( color__ ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColorAdd_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"SRC") ) { outValue = ( SRC ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_SHADER") ) { outValue = ( _SHADER ); return true; }
	}
	return false;
}

::hx::Val ColorAdd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"color__") ) { color__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorAdd_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"SRC") ) { SRC=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_SHADER") ) { _SHADER=ioValue.Cast<  ::hxsl::SharedShader >(); return true; }
	}
	return false;
}

void ColorAdd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("color__",43,23,66,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorAdd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(ColorAdd_obj,color__),HX_("color__",43,23,66,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ColorAdd_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ColorAdd_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &ColorAdd_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ColorAdd_obj_sMemberFields[] = {
	HX_("color__",43,23,66,ef),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void ColorAdd_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorAdd_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(ColorAdd_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorAdd_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorAdd_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(ColorAdd_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class ColorAdd_obj::__mClass;

static ::String ColorAdd_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void ColorAdd_obj::__register()
{
	ColorAdd_obj _hx_dummy;
	ColorAdd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.ColorAdd",d2,83,25,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorAdd_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorAdd_obj::__SetStatic;
	__mClass->mMarkFunc = ColorAdd_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorAdd_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorAdd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorAdd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorAdd_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorAdd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorAdd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ColorAdd_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_741baa376576b86b_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLE2gzZC5zaGFkZXIuQ29sb3JBZGQDAQpwaXhlbENvbG9yBQwEAAACBWNvbG9yBQsCAAADCGZyYWdtZW50DgYAAAEBAwAABQEGgAoCAQUMkgAFCwICBQsFCwA",b9,0c,3e,fb);
            	}
}

} // end namespace h3d
} // end namespace shader
