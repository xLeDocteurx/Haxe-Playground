#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_shader_ColorMatrix
#include <h3d/shader/ColorMatrix.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cd854e929ba626fe_3_new,"h3d.shader.ColorMatrix","new",0x21ec0222,"h3d.shader.ColorMatrix.new","h3d/shader/ColorMatrix.hx",3,0x12d701ae)
HX_LOCAL_STACK_FRAME(_hx_pos_3a21f794840a15b7_174_get_matrix,"h3d.shader.ColorMatrix","get_matrix",0x6dca1088,"h3d.shader.ColorMatrix.get_matrix","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_3a21f794840a15b7_191_set_matrix,"h3d.shader.ColorMatrix","set_matrix",0x7147aefc,"h3d.shader.ColorMatrix.set_matrix","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_3a21f794840a15b7_270_updateConstants,"h3d.shader.ColorMatrix","updateConstants",0x6d731408,"h3d.shader.ColorMatrix.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_cd854e929ba626fe_5_getParamValue,"h3d.shader.ColorMatrix","getParamValue",0x4911641c,"h3d.shader.ColorMatrix.getParamValue","h3d/shader/ColorMatrix.hx",5,0x12d701ae)
HX_LOCAL_STACK_FRAME(_hx_pos_3a21f794840a15b7_304_getParamFloatValue,"h3d.shader.ColorMatrix","getParamFloatValue",0x5744a3aa,"h3d.shader.ColorMatrix.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_cd854e929ba626fe_5_clone,"h3d.shader.ColorMatrix","clone",0x25bcb99f,"h3d.shader.ColorMatrix.clone","h3d/shader/ColorMatrix.hx",5,0x12d701ae)
HX_LOCAL_STACK_FRAME(_hx_pos_cd854e929ba626fe_5_boot,"h3d.shader.ColorMatrix","boot",0x84aedc30,"h3d.shader.ColorMatrix.boot","h3d/shader/ColorMatrix.hx",5,0x12d701ae)
namespace h3d{
namespace shader{

void ColorMatrix_obj::__construct(::Array< Float > m){
            	HX_GC_STACKFRAME(&_hx_pos_cd854e929ba626fe_3_new)
HXLINE(  74)		this->matrix__ =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  17)		super::__construct();
HXLINE(  18)		if (::hx::IsNotNull( m )) {
HXLINE(  18)			this->matrix__->loadValues(m);
            		}
            		else {
HXLINE(  18)			this->matrix__->identity();
            		}
            	}

Dynamic ColorMatrix_obj::__CreateEmpty() { return new ColorMatrix_obj; }

void *ColorMatrix_obj::_hx_vtable = 0;

Dynamic ColorMatrix_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorMatrix_obj > _hx_result = new ColorMatrix_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ColorMatrix_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x05306b32) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x05306b32;
	} else {
		return inClassId==(int)0x19343d6e;
	}
}

 ::h3d::Matrix ColorMatrix_obj::get_matrix(){
            	HX_STACKFRAME(&_hx_pos_3a21f794840a15b7_174_get_matrix)
HXDLIN( 174)		return this->matrix__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorMatrix_obj,get_matrix,return )

 ::h3d::Matrix ColorMatrix_obj::set_matrix( ::h3d::Matrix _v){
            	HX_STACKFRAME(&_hx_pos_3a21f794840a15b7_191_set_matrix)
HXDLIN( 191)		return (this->matrix__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,set_matrix,return )

void ColorMatrix_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_3a21f794840a15b7_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic ColorMatrix_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_cd854e929ba626fe_5_getParamValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 287)			return this->matrix__;
            		}
HXLINE( 288)		return null();
            	}


Float ColorMatrix_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_3a21f794840a15b7_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader ColorMatrix_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_cd854e929ba626fe_5_clone)
HXLINE( 315)		 ::h3d::shader::ColorMatrix s = ( ( ::h3d::shader::ColorMatrix)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::ColorMatrix >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->matrix__ = this->matrix__;
HXLINE( 322)		return s;
            	}


::String ColorMatrix_obj::SRC;

 ::hxsl::SharedShader ColorMatrix_obj::_SHADER;


::hx::ObjectPtr< ColorMatrix_obj > ColorMatrix_obj::__new(::Array< Float > m) {
	::hx::ObjectPtr< ColorMatrix_obj > __this = new ColorMatrix_obj();
	__this->__construct(m);
	return __this;
}

::hx::ObjectPtr< ColorMatrix_obj > ColorMatrix_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< Float > m) {
	ColorMatrix_obj *__this = (ColorMatrix_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorMatrix_obj), true, "h3d.shader.ColorMatrix"));
	*(void **)__this = ColorMatrix_obj::_hx_vtable;
	__this->__construct(m);
	return __this;
}

ColorMatrix_obj::ColorMatrix_obj()
{
}

void ColorMatrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorMatrix);
	HX_MARK_MEMBER_NAME(matrix__,"matrix__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorMatrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(matrix__,"matrix__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ColorMatrix_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_matrix() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix__") ) { return ::hx::Val( matrix__ ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return ::hx::Val( get_matrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return ::hx::Val( set_matrix_dyn() ); }
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

bool ColorMatrix_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val ColorMatrix_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_matrix(inValue.Cast<  ::h3d::Matrix >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix__") ) { matrix__=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorMatrix_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void ColorMatrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("matrix__",a1,5b,f3,66));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorMatrix_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(ColorMatrix_obj,matrix__),HX_("matrix__",a1,5b,f3,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ColorMatrix_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ColorMatrix_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &ColorMatrix_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ColorMatrix_obj_sMemberFields[] = {
	HX_("matrix__",a1,5b,f3,66),
	HX_("get_matrix",0a,a6,4f,ac),
	HX_("set_matrix",7e,44,cd,af),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void ColorMatrix_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrix_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(ColorMatrix_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorMatrix_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrix_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(ColorMatrix_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class ColorMatrix_obj::__mClass;

static ::String ColorMatrix_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void ColorMatrix_obj::__register()
{
	ColorMatrix_obj _hx_dummy;
	ColorMatrix_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.ColorMatrix",30,09,bc,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorMatrix_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorMatrix_obj::__SetStatic;
	__mClass->mMarkFunc = ColorMatrix_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorMatrix_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorMatrix_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorMatrix_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorMatrix_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorMatrix_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorMatrix_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ColorMatrix_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cd854e929ba626fe_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLFmgzZC5zaGFkZXIuQ29sb3JNYXRyaXgDAQpwaXhlbENvbG9yBQwEAAACBm1hdHJpeAcCAAADCGZyYWdtZW50DgYAAAEBAwAABQEGBAIBBQwJAyoOAgoEBgEJAyoOAgoCAQUMkgAFCwEDAAAAAAAA8D8DBQwCAgcFDAUMkgAFCwoEBgECAQUMAgIHBQwFDAwAAwUMBQwA",52,a4,0b,e1);
            	}
}

} // end namespace h3d
} // end namespace shader
