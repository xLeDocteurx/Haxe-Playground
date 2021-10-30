#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_shader_Base2d
#include <h3d/shader/Base2d.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6146e09543f578b0_3_new,"h3d.shader.Base2d","new",0x57fd8109,"h3d.shader.Base2d.new","h3d/shader/Base2d.hx",3,0xa4117c67)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_zValue,"h3d.shader.Base2d","get_zValue",0xcd310ad7,"h3d.shader.Base2d.get_zValue","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_191_set_zValue,"h3d.shader.Base2d","set_zValue",0xd0aea94b,"h3d.shader.Base2d.set_zValue","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_texture,"h3d.shader.Base2d","get_texture",0x07132a9b,"h3d.shader.Base2d.get_texture","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_191_set_texture,"h3d.shader.Base2d","set_texture",0x118031a7,"h3d.shader.Base2d.set_texture","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_isRelative,"h3d.shader.Base2d","get_isRelative",0x902d0516,"h3d.shader.Base2d.get_isRelative","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_193_set_isRelative,"h3d.shader.Base2d","set_isRelative",0xb04ced8a,"h3d.shader.Base2d.set_isRelative","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_color,"h3d.shader.Base2d","get_color",0xbfbee323,"h3d.shader.Base2d.get_color","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_191_set_color,"h3d.shader.Base2d","set_color",0xa30fcf2f,"h3d.shader.Base2d.set_color","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_absoluteMatrixA,"h3d.shader.Base2d","get_absoluteMatrixA",0x30158ae9,"h3d.shader.Base2d.get_absoluteMatrixA","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_191_set_absoluteMatrixA,"h3d.shader.Base2d","set_absoluteMatrixA",0x6cb27df5,"h3d.shader.Base2d.set_absoluteMatrixA","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_absoluteMatrixB,"h3d.shader.Base2d","get_absoluteMatrixB",0x30158aea,"h3d.shader.Base2d.get_absoluteMatrixB","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_191_set_absoluteMatrixB,"h3d.shader.Base2d","set_absoluteMatrixB",0x6cb27df6,"h3d.shader.Base2d.set_absoluteMatrixB","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_filterMatrixA,"h3d.shader.Base2d","get_filterMatrixA",0xc00163c8,"h3d.shader.Base2d.get_filterMatrixA","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_191_set_filterMatrixA,"h3d.shader.Base2d","set_filterMatrixA",0xe36f3bd4,"h3d.shader.Base2d.set_filterMatrixA","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_filterMatrixB,"h3d.shader.Base2d","get_filterMatrixB",0xc00163c9,"h3d.shader.Base2d.get_filterMatrixB","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_191_set_filterMatrixB,"h3d.shader.Base2d","set_filterMatrixB",0xe36f3bd5,"h3d.shader.Base2d.set_filterMatrixB","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_hasUVPos,"h3d.shader.Base2d","get_hasUVPos",0xe732be59,"h3d.shader.Base2d.get_hasUVPos","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_193_set_hasUVPos,"h3d.shader.Base2d","set_hasUVPos",0xfc2be1cd,"h3d.shader.Base2d.set_hasUVPos","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_uvPos,"h3d.shader.Base2d","get_uvPos",0x21809373,"h3d.shader.Base2d.get_uvPos","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_191_set_uvPos,"h3d.shader.Base2d","set_uvPos",0x04d17f7f,"h3d.shader.Base2d.set_uvPos","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_killAlpha,"h3d.shader.Base2d","get_killAlpha",0xb1d32ca0,"h3d.shader.Base2d.get_killAlpha","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_193_set_killAlpha,"h3d.shader.Base2d","set_killAlpha",0xf6d90eac,"h3d.shader.Base2d.set_killAlpha","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_pixelAlign,"h3d.shader.Base2d","get_pixelAlign",0xa028d09f,"h3d.shader.Base2d.get_pixelAlign","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_193_set_pixelAlign,"h3d.shader.Base2d","set_pixelAlign",0xc048b913,"h3d.shader.Base2d.set_pixelAlign","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_halfPixelInverse,"h3d.shader.Base2d","get_halfPixelInverse",0xab4a465d,"h3d.shader.Base2d.get_halfPixelInverse","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_191_set_halfPixelInverse,"h3d.shader.Base2d","set_halfPixelInverse",0x7801fdd1,"h3d.shader.Base2d.set_halfPixelInverse","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_viewportA,"h3d.shader.Base2d","get_viewportA",0x16dbdedb,"h3d.shader.Base2d.get_viewportA","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_191_set_viewportA,"h3d.shader.Base2d","set_viewportA",0x5be1c0e7,"h3d.shader.Base2d.set_viewportA","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_174_get_viewportB,"h3d.shader.Base2d","get_viewportB",0x16dbdedc,"h3d.shader.Base2d.get_viewportB","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_191_set_viewportB,"h3d.shader.Base2d","set_viewportB",0x5be1c0e8,"h3d.shader.Base2d.set_viewportB","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_28d107a28ef4cf6e_270_updateConstants,"h3d.shader.Base2d","updateConstants",0xa77ad16f,"h3d.shader.Base2d.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6146e09543f578b0_5_getParamValue,"h3d.shader.Base2d","getParamValue",0xdfdf29c3,"h3d.shader.Base2d.getParamValue","h3d/shader/Base2d.hx",5,0xa4117c67)
HX_LOCAL_STACK_FRAME(_hx_pos_6146e09543f578b0_5_getParamFloatValue,"h3d.shader.Base2d","getParamFloatValue",0x0d0600a3,"h3d.shader.Base2d.getParamFloatValue","h3d/shader/Base2d.hx",5,0xa4117c67)
HX_LOCAL_STACK_FRAME(_hx_pos_6146e09543f578b0_5_clone,"h3d.shader.Base2d","clone",0x22590046,"h3d.shader.Base2d.clone","h3d/shader/Base2d.hx",5,0xa4117c67)
HX_LOCAL_STACK_FRAME(_hx_pos_6146e09543f578b0_5_boot,"h3d.shader.Base2d","boot",0x9dec6769,"h3d.shader.Base2d.boot","h3d/shader/Base2d.hx",5,0xa4117c67)
namespace h3d{
namespace shader{

void Base2d_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6146e09543f578b0_3_new)
HXLINE(  63)		this->viewportB__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->viewportA__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->halfPixelInverse__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->uvPos__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->filterMatrixB__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->filterMatrixA__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->absoluteMatrixB__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->absoluteMatrixA__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->color__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  59)		this->zValue__ = ((Float)0);
HXLINE(   3)		super::__construct();
            	}

Dynamic Base2d_obj::__CreateEmpty() { return new Base2d_obj; }

void *Base2d_obj::_hx_vtable = 0;

Dynamic Base2d_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Base2d_obj > _hx_result = new Base2d_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Base2d_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x539218b9;
	}
}

Float Base2d_obj::get_zValue(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_zValue)
HXDLIN( 174)		return this->zValue__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_zValue,return )

Float Base2d_obj::set_zValue(Float _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_191_set_zValue)
HXDLIN( 191)		return (this->zValue__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_zValue,return )

 ::h3d::mat::Texture Base2d_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_texture)
HXDLIN( 174)		return this->texture__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_texture,return )

 ::h3d::mat::Texture Base2d_obj::set_texture( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_191_set_texture)
HXDLIN( 191)		return (this->texture__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_texture,return )

bool Base2d_obj::get_isRelative(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_isRelative)
HXDLIN( 174)		return this->isRelative__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_isRelative,return )

bool Base2d_obj::set_isRelative(bool _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_193_set_isRelative)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->isRelative__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_isRelative,return )

 ::h3d::Vector Base2d_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_color)
HXDLIN( 174)		return this->color__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_color,return )

 ::h3d::Vector Base2d_obj::set_color( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_191_set_color)
HXDLIN( 191)		return (this->color__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_color,return )

 ::h3d::Vector Base2d_obj::get_absoluteMatrixA(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_absoluteMatrixA)
HXDLIN( 174)		return this->absoluteMatrixA__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_absoluteMatrixA,return )

 ::h3d::Vector Base2d_obj::set_absoluteMatrixA( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_191_set_absoluteMatrixA)
HXDLIN( 191)		return (this->absoluteMatrixA__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_absoluteMatrixA,return )

 ::h3d::Vector Base2d_obj::get_absoluteMatrixB(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_absoluteMatrixB)
HXDLIN( 174)		return this->absoluteMatrixB__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_absoluteMatrixB,return )

 ::h3d::Vector Base2d_obj::set_absoluteMatrixB( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_191_set_absoluteMatrixB)
HXDLIN( 191)		return (this->absoluteMatrixB__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_absoluteMatrixB,return )

 ::h3d::Vector Base2d_obj::get_filterMatrixA(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_filterMatrixA)
HXDLIN( 174)		return this->filterMatrixA__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_filterMatrixA,return )

 ::h3d::Vector Base2d_obj::set_filterMatrixA( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_191_set_filterMatrixA)
HXDLIN( 191)		return (this->filterMatrixA__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_filterMatrixA,return )

 ::h3d::Vector Base2d_obj::get_filterMatrixB(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_filterMatrixB)
HXDLIN( 174)		return this->filterMatrixB__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_filterMatrixB,return )

 ::h3d::Vector Base2d_obj::set_filterMatrixB( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_191_set_filterMatrixB)
HXDLIN( 191)		return (this->filterMatrixB__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_filterMatrixB,return )

bool Base2d_obj::get_hasUVPos(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_hasUVPos)
HXDLIN( 174)		return this->hasUVPos__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_hasUVPos,return )

bool Base2d_obj::set_hasUVPos(bool _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_193_set_hasUVPos)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->hasUVPos__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_hasUVPos,return )

 ::h3d::Vector Base2d_obj::get_uvPos(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_uvPos)
HXDLIN( 174)		return this->uvPos__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_uvPos,return )

 ::h3d::Vector Base2d_obj::set_uvPos( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_191_set_uvPos)
HXDLIN( 191)		return (this->uvPos__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_uvPos,return )

bool Base2d_obj::get_killAlpha(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_killAlpha)
HXDLIN( 174)		return this->killAlpha__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_killAlpha,return )

bool Base2d_obj::set_killAlpha(bool _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_193_set_killAlpha)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->killAlpha__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_killAlpha,return )

bool Base2d_obj::get_pixelAlign(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_pixelAlign)
HXDLIN( 174)		return this->pixelAlign__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_pixelAlign,return )

bool Base2d_obj::set_pixelAlign(bool _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_193_set_pixelAlign)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->pixelAlign__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_pixelAlign,return )

 ::h3d::Vector Base2d_obj::get_halfPixelInverse(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_halfPixelInverse)
HXDLIN( 174)		return this->halfPixelInverse__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_halfPixelInverse,return )

 ::h3d::Vector Base2d_obj::set_halfPixelInverse( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_191_set_halfPixelInverse)
HXDLIN( 191)		return (this->halfPixelInverse__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_halfPixelInverse,return )

 ::h3d::Vector Base2d_obj::get_viewportA(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_viewportA)
HXDLIN( 174)		return this->viewportA__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_viewportA,return )

 ::h3d::Vector Base2d_obj::set_viewportA( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_191_set_viewportA)
HXDLIN( 191)		return (this->viewportA__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_viewportA,return )

 ::h3d::Vector Base2d_obj::get_viewportB(){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_174_get_viewportB)
HXDLIN( 174)		return this->viewportB__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base2d_obj,get_viewportB,return )

 ::h3d::Vector Base2d_obj::set_viewportB( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_191_set_viewportB)
HXDLIN( 191)		return (this->viewportB__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base2d_obj,set_viewportB,return )

void Base2d_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_28d107a28ef4cf6e_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 272)		{
HXLINE( 247)			if (this->isRelative__) {
HXLINE( 247)				 ::h3d::shader::Base2d _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 1);
            			}
HXDLIN( 247)			if (this->hasUVPos__) {
HXLINE( 247)				 ::h3d::shader::Base2d _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 2);
            			}
HXDLIN( 247)			if (this->killAlpha__) {
HXLINE( 247)				 ::h3d::shader::Base2d _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 4);
            			}
HXDLIN( 247)			if (this->pixelAlign__) {
HXLINE( 247)				 ::h3d::shader::Base2d _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 8);
            			}
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic Base2d_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_6146e09543f578b0_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->zValue__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->texture__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->isRelative__;
            			}
            			break;
            			case (int)3: {
HXLINE( 287)				return this->color__;
            			}
            			break;
            			case (int)4: {
HXLINE( 287)				return this->absoluteMatrixA__;
            			}
            			break;
            			case (int)5: {
HXLINE( 287)				return this->absoluteMatrixB__;
            			}
            			break;
            			case (int)6: {
HXLINE( 287)				return this->filterMatrixA__;
            			}
            			break;
            			case (int)7: {
HXLINE( 287)				return this->filterMatrixB__;
            			}
            			break;
            			case (int)8: {
HXLINE( 287)				return this->hasUVPos__;
            			}
            			break;
            			case (int)9: {
HXLINE( 287)				return this->uvPos__;
            			}
            			break;
            			case (int)10: {
HXLINE( 287)				return this->killAlpha__;
            			}
            			break;
            			case (int)11: {
HXLINE( 287)				return this->pixelAlign__;
            			}
            			break;
            			case (int)12: {
HXLINE( 287)				return this->halfPixelInverse__;
            			}
            			break;
            			case (int)13: {
HXLINE( 287)				return this->viewportA__;
            			}
            			break;
            			case (int)14: {
HXLINE( 287)				return this->viewportB__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float Base2d_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_6146e09543f578b0_5_getParamFloatValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 303)			return this->zValue__;
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader Base2d_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_6146e09543f578b0_5_clone)
HXLINE( 315)		 ::h3d::shader::Base2d s = ( ( ::h3d::shader::Base2d)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::Base2d >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->zValue__ = this->zValue__;
HXDLIN( 320)		s->texture__ = this->texture__;
HXDLIN( 320)		s->isRelative__ = this->isRelative__;
HXDLIN( 320)		s->color__ = this->color__;
HXDLIN( 320)		s->absoluteMatrixA__ = this->absoluteMatrixA__;
HXDLIN( 320)		s->absoluteMatrixB__ = this->absoluteMatrixB__;
HXDLIN( 320)		s->filterMatrixA__ = this->filterMatrixA__;
HXDLIN( 320)		s->filterMatrixB__ = this->filterMatrixB__;
HXDLIN( 320)		s->hasUVPos__ = this->hasUVPos__;
HXDLIN( 320)		s->uvPos__ = this->uvPos__;
HXDLIN( 320)		s->killAlpha__ = this->killAlpha__;
HXDLIN( 320)		s->pixelAlign__ = this->pixelAlign__;
HXDLIN( 320)		s->halfPixelInverse__ = this->halfPixelInverse__;
HXDLIN( 320)		s->viewportA__ = this->viewportA__;
HXDLIN( 320)		s->viewportB__ = this->viewportB__;
HXLINE( 322)		return s;
            	}


::String Base2d_obj::SRC;

 ::hxsl::SharedShader Base2d_obj::_SHADER;


::hx::ObjectPtr< Base2d_obj > Base2d_obj::__new() {
	::hx::ObjectPtr< Base2d_obj > __this = new Base2d_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Base2d_obj > Base2d_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Base2d_obj *__this = (Base2d_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Base2d_obj), true, "h3d.shader.Base2d"));
	*(void **)__this = Base2d_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Base2d_obj::Base2d_obj()
{
}

void Base2d_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Base2d);
	HX_MARK_MEMBER_NAME(zValue__,"zValue__");
	HX_MARK_MEMBER_NAME(texture__,"texture__");
	HX_MARK_MEMBER_NAME(isRelative__,"isRelative__");
	HX_MARK_MEMBER_NAME(color__,"color__");
	HX_MARK_MEMBER_NAME(absoluteMatrixA__,"absoluteMatrixA__");
	HX_MARK_MEMBER_NAME(absoluteMatrixB__,"absoluteMatrixB__");
	HX_MARK_MEMBER_NAME(filterMatrixA__,"filterMatrixA__");
	HX_MARK_MEMBER_NAME(filterMatrixB__,"filterMatrixB__");
	HX_MARK_MEMBER_NAME(hasUVPos__,"hasUVPos__");
	HX_MARK_MEMBER_NAME(uvPos__,"uvPos__");
	HX_MARK_MEMBER_NAME(killAlpha__,"killAlpha__");
	HX_MARK_MEMBER_NAME(pixelAlign__,"pixelAlign__");
	HX_MARK_MEMBER_NAME(halfPixelInverse__,"halfPixelInverse__");
	HX_MARK_MEMBER_NAME(viewportA__,"viewportA__");
	HX_MARK_MEMBER_NAME(viewportB__,"viewportB__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Base2d_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zValue__,"zValue__");
	HX_VISIT_MEMBER_NAME(texture__,"texture__");
	HX_VISIT_MEMBER_NAME(isRelative__,"isRelative__");
	HX_VISIT_MEMBER_NAME(color__,"color__");
	HX_VISIT_MEMBER_NAME(absoluteMatrixA__,"absoluteMatrixA__");
	HX_VISIT_MEMBER_NAME(absoluteMatrixB__,"absoluteMatrixB__");
	HX_VISIT_MEMBER_NAME(filterMatrixA__,"filterMatrixA__");
	HX_VISIT_MEMBER_NAME(filterMatrixB__,"filterMatrixB__");
	HX_VISIT_MEMBER_NAME(hasUVPos__,"hasUVPos__");
	HX_VISIT_MEMBER_NAME(uvPos__,"uvPos__");
	HX_VISIT_MEMBER_NAME(killAlpha__,"killAlpha__");
	HX_VISIT_MEMBER_NAME(pixelAlign__,"pixelAlign__");
	HX_VISIT_MEMBER_NAME(halfPixelInverse__,"halfPixelInverse__");
	HX_VISIT_MEMBER_NAME(viewportA__,"viewportA__");
	HX_VISIT_MEMBER_NAME(viewportB__,"viewportB__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Base2d_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"uvPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvPos() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"zValue") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_zValue() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		if (HX_FIELD_EQ(inName,"color__") ) { return ::hx::Val( color__ ); }
		if (HX_FIELD_EQ(inName,"uvPos__") ) { return ::hx::Val( uvPos__ ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zValue__") ) { return ::hx::Val( zValue__ ); }
		if (HX_FIELD_EQ(inName,"hasUVPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hasUVPos() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture__") ) { return ::hx::Val( texture__ ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_uvPos") ) { return ::hx::Val( get_uvPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_uvPos") ) { return ::hx::Val( set_uvPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"killAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_killAlpha() ); }
		if (HX_FIELD_EQ(inName,"viewportA") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewportA() ); }
		if (HX_FIELD_EQ(inName,"viewportB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewportB() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_zValue") ) { return ::hx::Val( get_zValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_zValue") ) { return ::hx::Val( set_zValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"isRelative") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isRelative() ); }
		if (HX_FIELD_EQ(inName,"hasUVPos__") ) { return ::hx::Val( hasUVPos__ ); }
		if (HX_FIELD_EQ(inName,"pixelAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pixelAlign() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"killAlpha__") ) { return ::hx::Val( killAlpha__ ); }
		if (HX_FIELD_EQ(inName,"viewportA__") ) { return ::hx::Val( viewportA__ ); }
		if (HX_FIELD_EQ(inName,"viewportB__") ) { return ::hx::Val( viewportB__ ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isRelative__") ) { return ::hx::Val( isRelative__ ); }
		if (HX_FIELD_EQ(inName,"get_hasUVPos") ) { return ::hx::Val( get_hasUVPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hasUVPos") ) { return ::hx::Val( set_hasUVPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"pixelAlign__") ) { return ::hx::Val( pixelAlign__ ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterMatrixA") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_filterMatrixA() ); }
		if (HX_FIELD_EQ(inName,"filterMatrixB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_filterMatrixB() ); }
		if (HX_FIELD_EQ(inName,"get_killAlpha") ) { return ::hx::Val( get_killAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_killAlpha") ) { return ::hx::Val( set_killAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewportA") ) { return ::hx::Val( get_viewportA_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewportA") ) { return ::hx::Val( set_viewportA_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewportB") ) { return ::hx::Val( get_viewportB_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewportB") ) { return ::hx::Val( set_viewportB_dyn() ); }
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isRelative") ) { return ::hx::Val( get_isRelative_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_isRelative") ) { return ::hx::Val( set_isRelative_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pixelAlign") ) { return ::hx::Val( get_pixelAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pixelAlign") ) { return ::hx::Val( set_pixelAlign_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"absoluteMatrixA") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_absoluteMatrixA() ); }
		if (HX_FIELD_EQ(inName,"absoluteMatrixB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_absoluteMatrixB() ); }
		if (HX_FIELD_EQ(inName,"filterMatrixA__") ) { return ::hx::Val( filterMatrixA__ ); }
		if (HX_FIELD_EQ(inName,"filterMatrixB__") ) { return ::hx::Val( filterMatrixB__ ); }
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"halfPixelInverse") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_halfPixelInverse() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"absoluteMatrixA__") ) { return ::hx::Val( absoluteMatrixA__ ); }
		if (HX_FIELD_EQ(inName,"absoluteMatrixB__") ) { return ::hx::Val( absoluteMatrixB__ ); }
		if (HX_FIELD_EQ(inName,"get_filterMatrixA") ) { return ::hx::Val( get_filterMatrixA_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filterMatrixA") ) { return ::hx::Val( set_filterMatrixA_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_filterMatrixB") ) { return ::hx::Val( get_filterMatrixB_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filterMatrixB") ) { return ::hx::Val( set_filterMatrixB_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"halfPixelInverse__") ) { return ::hx::Val( halfPixelInverse__ ); }
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_absoluteMatrixA") ) { return ::hx::Val( get_absoluteMatrixA_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_absoluteMatrixA") ) { return ::hx::Val( set_absoluteMatrixA_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_absoluteMatrixB") ) { return ::hx::Val( get_absoluteMatrixB_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_absoluteMatrixB") ) { return ::hx::Val( set_absoluteMatrixB_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_halfPixelInverse") ) { return ::hx::Val( get_halfPixelInverse_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_halfPixelInverse") ) { return ::hx::Val( set_halfPixelInverse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Base2d_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val Base2d_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast<  ::h3d::Vector >()) ); }
		if (HX_FIELD_EQ(inName,"uvPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_uvPos(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"zValue") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_zValue(inValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		if (HX_FIELD_EQ(inName,"color__") ) { color__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvPos__") ) { uvPos__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zValue__") ) { zValue__=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasUVPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hasUVPos(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture__") ) { texture__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"killAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_killAlpha(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"viewportA") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewportA(inValue.Cast<  ::h3d::Vector >()) ); }
		if (HX_FIELD_EQ(inName,"viewportB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewportB(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isRelative") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isRelative(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"hasUVPos__") ) { hasUVPos__=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pixelAlign(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killAlpha__") ) { killAlpha__=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewportA__") ) { viewportA__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewportB__") ) { viewportB__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isRelative__") ) { isRelative__=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelAlign__") ) { pixelAlign__=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterMatrixA") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filterMatrixA(inValue.Cast<  ::h3d::Vector >()) ); }
		if (HX_FIELD_EQ(inName,"filterMatrixB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filterMatrixB(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"absoluteMatrixA") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_absoluteMatrixA(inValue.Cast<  ::h3d::Vector >()) ); }
		if (HX_FIELD_EQ(inName,"absoluteMatrixB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_absoluteMatrixB(inValue.Cast<  ::h3d::Vector >()) ); }
		if (HX_FIELD_EQ(inName,"filterMatrixA__") ) { filterMatrixA__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterMatrixB__") ) { filterMatrixB__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"halfPixelInverse") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_halfPixelInverse(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"absoluteMatrixA__") ) { absoluteMatrixA__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"absoluteMatrixB__") ) { absoluteMatrixB__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"halfPixelInverse__") ) { halfPixelInverse__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Base2d_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void Base2d_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zValue",97,f4,6f,8c));
	outFields->push(HX_("zValue__",77,db,c7,7f));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("texture__",bb,48,49,af));
	outFields->push(HX_("isRelative",d6,ce,83,b0));
	outFields->push(HX_("isRelative__",76,03,36,b4));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("color__",43,23,66,ef));
	outFields->push(HX_("absoluteMatrixA",29,69,0b,98));
	outFields->push(HX_("absoluteMatrixA__",89,18,97,40));
	outFields->push(HX_("absoluteMatrixB",2a,69,0b,98));
	outFields->push(HX_("absoluteMatrixB__",ca,da,97,40));
	outFields->push(HX_("filterMatrixA",08,32,37,54));
	outFields->push(HX_("filterMatrixA__",28,17,ee,35));
	outFields->push(HX_("filterMatrixB",09,32,37,54));
	outFields->push(HX_("filterMatrixB__",69,d9,ee,35));
	outFields->push(HX_("hasUVPos",19,98,4f,23));
	outFields->push(HX_("hasUVPos__",79,e3,78,48));
	outFields->push(HX_("uvPos",b3,21,1e,ac));
	outFields->push(HX_("uvPos__",93,87,30,89));
	outFields->push(HX_("killAlpha",e0,da,f4,0e));
	outFields->push(HX_("killAlpha__",00,a6,09,5a));
	outFields->push(HX_("pixelAlign",5f,9a,7f,c0));
	outFields->push(HX_("pixelAlign__",3f,83,62,93));
	outFields->push(HX_("halfPixelInverse",1d,e0,76,3a));
	outFields->push(HX_("halfPixelInverse__",7d,34,05,ee));
	outFields->push(HX_("viewportA",1b,8d,fd,73));
	outFields->push(HX_("viewportA__",fb,9c,4f,98));
	outFields->push(HX_("viewportB",1c,8d,fd,73));
	outFields->push(HX_("viewportB__",3c,5f,50,98));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Base2d_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Base2d_obj,zValue__),HX_("zValue__",77,db,c7,7f)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(Base2d_obj,texture__),HX_("texture__",bb,48,49,af)},
	{::hx::fsBool,(int)offsetof(Base2d_obj,isRelative__),HX_("isRelative__",76,03,36,b4)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Base2d_obj,color__),HX_("color__",43,23,66,ef)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Base2d_obj,absoluteMatrixA__),HX_("absoluteMatrixA__",89,18,97,40)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Base2d_obj,absoluteMatrixB__),HX_("absoluteMatrixB__",ca,da,97,40)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Base2d_obj,filterMatrixA__),HX_("filterMatrixA__",28,17,ee,35)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Base2d_obj,filterMatrixB__),HX_("filterMatrixB__",69,d9,ee,35)},
	{::hx::fsBool,(int)offsetof(Base2d_obj,hasUVPos__),HX_("hasUVPos__",79,e3,78,48)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Base2d_obj,uvPos__),HX_("uvPos__",93,87,30,89)},
	{::hx::fsBool,(int)offsetof(Base2d_obj,killAlpha__),HX_("killAlpha__",00,a6,09,5a)},
	{::hx::fsBool,(int)offsetof(Base2d_obj,pixelAlign__),HX_("pixelAlign__",3f,83,62,93)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Base2d_obj,halfPixelInverse__),HX_("halfPixelInverse__",7d,34,05,ee)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Base2d_obj,viewportA__),HX_("viewportA__",fb,9c,4f,98)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Base2d_obj,viewportB__),HX_("viewportB__",3c,5f,50,98)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Base2d_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Base2d_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &Base2d_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Base2d_obj_sMemberFields[] = {
	HX_("zValue__",77,db,c7,7f),
	HX_("get_zValue",60,64,f7,7c),
	HX_("set_zValue",d4,02,75,80),
	HX_("texture__",bb,48,49,af),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("isRelative__",76,03,36,b4),
	HX_("get_isRelative",1f,57,79,26),
	HX_("set_isRelative",93,3f,99,46),
	HX_("color__",43,23,66,ef),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("absoluteMatrixA__",89,18,97,40),
	HX_("get_absoluteMatrixA",40,38,16,23),
	HX_("set_absoluteMatrixA",4c,2b,b3,5f),
	HX_("absoluteMatrixB__",ca,da,97,40),
	HX_("get_absoluteMatrixB",41,38,16,23),
	HX_("set_absoluteMatrixB",4d,2b,b3,5f),
	HX_("filterMatrixA__",28,17,ee,35),
	HX_("get_filterMatrixA",5f,3d,a7,5a),
	HX_("set_filterMatrixA",6b,15,15,7e),
	HX_("filterMatrixB__",69,d9,ee,35),
	HX_("get_filterMatrixB",60,3d,a7,5a),
	HX_("set_filterMatrixB",6c,15,15,7e),
	HX_("hasUVPos__",79,e3,78,48),
	HX_("get_hasUVPos",22,4c,69,d8),
	HX_("set_hasUVPos",96,6f,62,ed),
	HX_("uvPos__",93,87,30,89),
	HX_("get_uvPos",0a,7e,c7,ef),
	HX_("set_uvPos",16,6a,18,d3),
	HX_("killAlpha__",00,a6,09,5a),
	HX_("get_killAlpha",b7,ae,58,d0),
	HX_("set_killAlpha",c3,90,5e,15),
	HX_("pixelAlign__",3f,83,62,93),
	HX_("get_pixelAlign",a8,22,75,36),
	HX_("set_pixelAlign",1c,0b,95,56),
	HX_("halfPixelInverse__",7d,34,05,ee),
	HX_("get_halfPixelInverse",26,45,e1,58),
	HX_("set_halfPixelInverse",9a,fc,98,25),
	HX_("viewportA__",fb,9c,4f,98),
	HX_("get_viewportA",f2,60,61,35),
	HX_("set_viewportA",fe,42,67,7a),
	HX_("viewportB__",3c,5f,50,98),
	HX_("get_viewportB",f3,60,61,35),
	HX_("set_viewportB",ff,42,67,7a),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void Base2d_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Base2d_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(Base2d_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Base2d_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Base2d_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(Base2d_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class Base2d_obj::__mClass;

static ::String Base2d_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void Base2d_obj::__register()
{
	Base2d_obj _hx_dummy;
	Base2d_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.Base2d",97,48,fc,bf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Base2d_obj::__GetStatic;
	__mClass->mSetStaticField = &Base2d_obj::__SetStatic;
	__mClass->mMarkFunc = Base2d_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Base2d_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Base2d_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Base2d_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Base2d_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Base2d_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Base2d_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Base2d_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6146e09543f578b0_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLEWgzZC5zaGFkZXIuQmFzZTJkGwEFaW5wdXQNAQMCCHBvc2l0aW9uBQoBAQADAnV2BQoBAQAEBWNvbG9yBQwBAQABAAAFBm91dHB1dA0CAgYIcG9zaXRpb24FDAQFAAcFY29sb3IFDAQFAAQAAAgEdGltZQMAAAAJBnpWYWx1ZQMCAAAKB3RleHR1cmUKAgAACw5zcHJpdGVQb3NpdGlvbgUMBAAADBBhYnNvbHV0ZVBvc2l0aW9uBQwEAAANCnBpeGVsQ29sb3IFDAQAAA4MdGV4dHVyZUNvbG9yBQwEAAAPDGNhbGN1bGF0ZWRVVgUKAwAAEAppc1JlbGF0aXZlAgIAAQAAAAAAEQVjb2xvcgUMAgAAEg9hYnNvbHV0ZU1hdHJpeEEFCwIAABMPYWJzb2x1dGVNYXRyaXhCBQsCAAAUDWZpbHRlck1hdHJpeEEFCwIAABUNZmlsdGVyTWF0cml4QgULAgAAFghoYXNVVlBvcwICAAEAAAAAABcFdXZQb3MFDAIAABgJa2lsbEFscGhhAgIAAQAAAAAAGQpwaXhlbEFsaWduAgIAAQAAAAAAGhBoYWxmUGl4ZWxJbnZlcnNlBQoCAAAbCXZpZXdwb3J0QQULAgAAHAl2aWV3cG9ydEIFCwIAAB0Ob3V0cHV0UG9zaXRpb24FDAQAAB4IX19pbml0X18OBgAAHwZ2ZXJ0ZXgOBgAAIAhmcmFnbWVudA4GAAADAh4AAAUGBgQCCwUMCQMqDgMCAgUKAgkDAQMAAAAAAADwPwMFDAUMCwIQAgUDBgQKAgwFDAAAAwkDHQ4CCQMpDgIKAgsFDBEABQoBAwAAAAAAAPA/AwULAhIFCwMDBgQKAgwFDAQAAwkDHQ4CCQMpDgIKAgsFDBEABQoBAwAAAAAAAPA/AwULAhMFCwMDBgQKAgwFDDkABQoKAgsFDDkABQoFCgAGBAIMBQwCCwUMBQwABgQCDwUKCwIWAgYABgECAwUKCgIXBQw5AAUKBQoKAhcFDBEABQoFCgIDBQoFCgUKBgQCDQUMCwIQAgYBAhEFDAIEBQwFDAIEBQwFDAUMBgQCDgUMCQMhDgICCgoCDwUKBQwFDAaBAg0FDAIOBQwFDAAAHwAABQUIIQN0bXAFCwQAAAkDKQ4CCgIMBQwRAAUKAQMAAAAAAADwPwMFCwAGBAIhBQsJAykOAwkDHQ4CAiEFCwIUBQsDCQMdDgICIQULAhUFCwMBAwAAAAAAAPA/AwULBQsGBAIdBQwJAyoOAwkDHQ4CAiEFCwIbBQsDCQMdDgICIQULAhwFCwMKAgwFDDkABQoFDAUMCwIZAgaDCgIdBQwRAAUKAhoFCgUKAAAGBAIGBQwCHQUMBQwAASAAAAUCCwYOAhgCBgkKAg0FDAwAAwED/Knx0k1iUD8DAgIMAAAABgQCBwUMAg0FDAUMAA",43,54,69,47);
            	}
}

} // end namespace h3d
} // end namespace shader
