#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_shader_Blur
#include <h3d/shader/Blur.h>
#endif
#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fe0e042ff644d8fc_3_new,"h3d.shader.Blur","new",0xfdcc4e6d,"h3d.shader.Blur.new","h3d/shader/Blur.hx",3,0xa0402f83)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_cameraInverseViewProj,"h3d.shader.Blur","get_cameraInverseViewProj",0x2a80e171,"h3d.shader.Blur.get_cameraInverseViewProj","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_191_set_cameraInverseViewProj,"h3d.shader.Blur","set_cameraInverseViewProj",0x96d7a57d,"h3d.shader.Blur.set_cameraInverseViewProj","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_texture,"h3d.shader.Blur","get_texture",0xe243fbff,"h3d.shader.Blur.get_texture","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_191_set_texture,"h3d.shader.Blur","set_texture",0xecb1030b,"h3d.shader.Blur.set_texture","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_depthTexture,"h3d.shader.Blur","get_depthTexture",0x132c6074,"h3d.shader.Blur.get_depthTexture","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_191_set_depthTexture,"h3d.shader.Blur","set_depthTexture",0x696e4de8,"h3d.shader.Blur.set_depthTexture","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_Quality,"h3d.shader.Blur","get_Quality",0x55005fc3,"h3d.shader.Blur.get_Quality","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_193_set_Quality,"h3d.shader.Blur","set_Quality",0x5f6d66cf,"h3d.shader.Blur.set_Quality","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_isDepth,"h3d.shader.Blur","get_isDepth",0xb712c7dd,"h3d.shader.Blur.get_isDepth","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_193_set_isDepth,"h3d.shader.Blur","set_isDepth",0xc17fcee9,"h3d.shader.Blur.set_isDepth","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_values,"h3d.shader.Blur","get_values",0x1d81813e,"h3d.shader.Blur.get_values","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_191_set_values,"h3d.shader.Blur","set_values",0x20ff1fb2,"h3d.shader.Blur.set_values","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_offsets,"h3d.shader.Blur","get_offsets",0x1ac83ca4,"h3d.shader.Blur.get_offsets","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_191_set_offsets,"h3d.shader.Blur","set_offsets",0x253543b0,"h3d.shader.Blur.set_offsets","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_pixel,"h3d.shader.Blur","get_pixel",0x1acf28aa,"h3d.shader.Blur.get_pixel","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_191_set_pixel,"h3d.shader.Blur","set_pixel",0xfe2014b6,"h3d.shader.Blur.set_pixel","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_hasFixedColor,"h3d.shader.Blur","get_hasFixedColor",0x5d2e016d,"h3d.shader.Blur.get_hasFixedColor","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_193_set_hasFixedColor,"h3d.shader.Blur","set_hasFixedColor",0x809bd979,"h3d.shader.Blur.set_hasFixedColor","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_smoothFixedColor,"h3d.shader.Blur","get_smoothFixedColor",0x794bbd79,"h3d.shader.Blur.get_smoothFixedColor","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_193_set_smoothFixedColor,"h3d.shader.Blur","set_smoothFixedColor",0x460374ed,"h3d.shader.Blur.set_smoothFixedColor","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_fixedColor,"h3d.shader.Blur","get_fixedColor",0xbdb17eab,"h3d.shader.Blur.get_fixedColor","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_191_set_fixedColor,"h3d.shader.Blur","set_fixedColor",0xddd1671f,"h3d.shader.Blur.set_fixedColor","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_isDepthDependant,"h3d.shader.Blur","get_isDepthDependant",0x7f13455e,"h3d.shader.Blur.get_isDepthDependant","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_193_set_isDepthDependant,"h3d.shader.Blur","set_isDepthDependant",0x4bcafcd2,"h3d.shader.Blur.set_isDepthDependant","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_hasNormal,"h3d.shader.Blur","get_hasNormal",0xba436945,"h3d.shader.Blur.get_hasNormal","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_193_set_hasNormal,"h3d.shader.Blur","set_hasNormal",0xff494b51,"h3d.shader.Blur.set_hasNormal","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_normalTexture,"h3d.shader.Blur","get_normalTexture",0x47ba4798,"h3d.shader.Blur.get_normalTexture","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_191_set_normalTexture,"h3d.shader.Blur","set_normalTexture",0x6b281fa4,"h3d.shader.Blur.set_normalTexture","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_isCube,"h3d.shader.Blur","get_isCube",0x2cfa7f5b,"h3d.shader.Blur.get_isCube","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_193_set_isCube,"h3d.shader.Blur","set_isCube",0x30781dcf,"h3d.shader.Blur.set_isCube","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_cubeTexture,"h3d.shader.Blur","get_cubeTexture",0xd075018a,"h3d.shader.Blur.get_cubeTexture","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_191_set_cubeTexture,"h3d.shader.Blur","set_cubeTexture",0xcc407e96,"h3d.shader.Blur.set_cubeTexture","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_174_get_cubeDir,"h3d.shader.Blur","get_cubeDir",0xd02cb27c,"h3d.shader.Blur.get_cubeDir","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_191_set_cubeDir,"h3d.shader.Blur","set_cubeDir",0xda99b988,"h3d.shader.Blur.set_cubeDir","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fb186581b9414f97_270_updateConstants,"h3d.shader.Blur","updateConstants",0x2dfa24d3,"h3d.shader.Blur.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fe0e042ff644d8fc_5_getParamValue,"h3d.shader.Blur","getParamValue",0x85f21c27,"h3d.shader.Blur.getParamValue","h3d/shader/Blur.hx",5,0xa0402f83)
HX_LOCAL_STACK_FRAME(_hx_pos_fe0e042ff644d8fc_5_getParamFloatValue,"h3d.shader.Blur","getParamFloatValue",0x7eb5e3bf,"h3d.shader.Blur.getParamFloatValue","h3d/shader/Blur.hx",5,0xa0402f83)
HX_LOCAL_STACK_FRAME(_hx_pos_fe0e042ff644d8fc_5_clone,"h3d.shader.Blur","clone",0xf380eeaa,"h3d.shader.Blur.clone","h3d/shader/Blur.hx",5,0xa0402f83)
HX_LOCAL_STACK_FRAME(_hx_pos_fe0e042ff644d8fc_5_boot,"h3d.shader.Blur","boot",0x0d115185,"h3d.shader.Blur.boot","h3d/shader/Blur.hx",5,0xa0402f83)
namespace h3d{
namespace shader{

void Blur_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_fe0e042ff644d8fc_3_new)
HXLINE(  74)		this->cubeDir__ =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  63)		this->fixedColor__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->pixel__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  72)		this->offsets__ = ::Array_obj< Float >::__new();
HXDLIN(  72)		this->values__ = ::Array_obj< Float >::__new();
HXLINE(  59)		this->Quality__ = 0;
HXLINE(  74)		this->cameraInverseViewProj__ =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(   3)		super::__construct();
            	}

Dynamic Blur_obj::__CreateEmpty() { return new Blur_obj; }

void *Blur_obj::_hx_vtable = 0;

Dynamic Blur_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Blur_obj > _hx_result = new Blur_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Blur_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x49a31b65) {
		if (inClassId<=(int)0x19343d6e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
		} else {
			return inClassId==(int)0x49a31b65;
		}
	} else {
		return inClassId==(int)0x738c8e6f;
	}
}

 ::h3d::Matrix Blur_obj::get_cameraInverseViewProj(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_cameraInverseViewProj)
HXDLIN( 174)		return this->cameraInverseViewProj__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_cameraInverseViewProj,return )

 ::h3d::Matrix Blur_obj::set_cameraInverseViewProj( ::h3d::Matrix _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_191_set_cameraInverseViewProj)
HXDLIN( 191)		return (this->cameraInverseViewProj__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_cameraInverseViewProj,return )

 ::h3d::mat::Texture Blur_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_texture)
HXDLIN( 174)		return this->texture__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_texture,return )

 ::h3d::mat::Texture Blur_obj::set_texture( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_191_set_texture)
HXDLIN( 191)		return (this->texture__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_texture,return )

 ::h3d::mat::Texture Blur_obj::get_depthTexture(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_depthTexture)
HXDLIN( 174)		return this->depthTexture__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_depthTexture,return )

 ::h3d::mat::Texture Blur_obj::set_depthTexture( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_191_set_depthTexture)
HXDLIN( 191)		return (this->depthTexture__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_depthTexture,return )

int Blur_obj::get_Quality(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_Quality)
HXDLIN( 174)		return this->Quality__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_Quality,return )

int Blur_obj::set_Quality(int _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_193_set_Quality)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->Quality__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_Quality,return )

bool Blur_obj::get_isDepth(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_isDepth)
HXDLIN( 174)		return this->isDepth__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_isDepth,return )

bool Blur_obj::set_isDepth(bool _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_193_set_isDepth)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->isDepth__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_isDepth,return )

::Array< Float > Blur_obj::get_values(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_values)
HXDLIN( 174)		return this->values__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_values,return )

::Array< Float > Blur_obj::set_values(::Array< Float > _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_191_set_values)
HXDLIN( 191)		return (this->values__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_values,return )

::Array< Float > Blur_obj::get_offsets(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_offsets)
HXDLIN( 174)		return this->offsets__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_offsets,return )

::Array< Float > Blur_obj::set_offsets(::Array< Float > _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_191_set_offsets)
HXDLIN( 191)		return (this->offsets__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_offsets,return )

 ::h3d::Vector Blur_obj::get_pixel(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_pixel)
HXDLIN( 174)		return this->pixel__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_pixel,return )

 ::h3d::Vector Blur_obj::set_pixel( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_191_set_pixel)
HXDLIN( 191)		return (this->pixel__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_pixel,return )

bool Blur_obj::get_hasFixedColor(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_hasFixedColor)
HXDLIN( 174)		return this->hasFixedColor__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_hasFixedColor,return )

bool Blur_obj::set_hasFixedColor(bool _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_193_set_hasFixedColor)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->hasFixedColor__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_hasFixedColor,return )

bool Blur_obj::get_smoothFixedColor(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_smoothFixedColor)
HXDLIN( 174)		return this->smoothFixedColor__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_smoothFixedColor,return )

bool Blur_obj::set_smoothFixedColor(bool _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_193_set_smoothFixedColor)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->smoothFixedColor__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_smoothFixedColor,return )

 ::h3d::Vector Blur_obj::get_fixedColor(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_fixedColor)
HXDLIN( 174)		return this->fixedColor__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_fixedColor,return )

 ::h3d::Vector Blur_obj::set_fixedColor( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_191_set_fixedColor)
HXDLIN( 191)		return (this->fixedColor__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_fixedColor,return )

bool Blur_obj::get_isDepthDependant(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_isDepthDependant)
HXDLIN( 174)		return this->isDepthDependant__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_isDepthDependant,return )

bool Blur_obj::set_isDepthDependant(bool _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_193_set_isDepthDependant)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->isDepthDependant__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_isDepthDependant,return )

bool Blur_obj::get_hasNormal(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_hasNormal)
HXDLIN( 174)		return this->hasNormal__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_hasNormal,return )

bool Blur_obj::set_hasNormal(bool _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_193_set_hasNormal)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->hasNormal__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_hasNormal,return )

 ::h3d::mat::Texture Blur_obj::get_normalTexture(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_normalTexture)
HXDLIN( 174)		return this->normalTexture__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_normalTexture,return )

 ::h3d::mat::Texture Blur_obj::set_normalTexture( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_191_set_normalTexture)
HXDLIN( 191)		return (this->normalTexture__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_normalTexture,return )

bool Blur_obj::get_isCube(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_isCube)
HXDLIN( 174)		return this->isCube__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_isCube,return )

bool Blur_obj::set_isCube(bool _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_193_set_isCube)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->isCube__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_isCube,return )

 ::h3d::mat::Texture Blur_obj::get_cubeTexture(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_cubeTexture)
HXDLIN( 174)		return this->cubeTexture__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_cubeTexture,return )

 ::h3d::mat::Texture Blur_obj::set_cubeTexture( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_191_set_cubeTexture)
HXDLIN( 191)		return (this->cubeTexture__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_cubeTexture,return )

 ::h3d::Matrix Blur_obj::get_cubeDir(){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_174_get_cubeDir)
HXDLIN( 174)		return this->cubeDir__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,get_cubeDir,return )

 ::h3d::Matrix Blur_obj::set_cubeDir( ::h3d::Matrix _v){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_191_set_cubeDir)
HXDLIN( 191)		return (this->cubeDir__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_cubeDir,return )

void Blur_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_fb186581b9414f97_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 272)		{
HXLINE( 241)			{
HXLINE( 242)				int v = this->Quality__;
HXLINE( 243)				if ((::hx::UShr(v,8) != 0)) {
HXLINE( 243)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Quality",9f,2c,9d,11) + HX_(" is out of range ",04,9f,ff,37)) + v) + HX_(">",3e,00,00,00)) + 255)));
            				}
HXLINE( 244)				 ::h3d::shader::Blur _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 244)				_hx_tmp->constBits = (_hx_tmp->constBits | v);
            			}
HXLINE( 247)			if (this->isDepth__) {
HXLINE( 247)				 ::h3d::shader::Blur _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 256);
            			}
HXDLIN( 247)			if (this->hasFixedColor__) {
HXLINE( 247)				 ::h3d::shader::Blur _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 512);
            			}
HXDLIN( 247)			if (this->smoothFixedColor__) {
HXLINE( 247)				 ::h3d::shader::Blur _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 1024);
            			}
HXDLIN( 247)			if (this->isDepthDependant__) {
HXLINE( 247)				 ::h3d::shader::Blur _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 2048);
            			}
HXDLIN( 247)			if (this->hasNormal__) {
HXLINE( 247)				 ::h3d::shader::Blur _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 4096);
            			}
HXDLIN( 247)			if (this->isCube__) {
HXLINE( 247)				 ::h3d::shader::Blur _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 8192);
            			}
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic Blur_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_fe0e042ff644d8fc_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->flipY__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->cameraInverseViewProj__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->texture__;
            			}
            			break;
            			case (int)3: {
HXLINE( 287)				return this->depthTexture__;
            			}
            			break;
            			case (int)4: {
HXLINE( 287)				return this->Quality__;
            			}
            			break;
            			case (int)5: {
HXLINE( 287)				return this->isDepth__;
            			}
            			break;
            			case (int)6: {
HXLINE( 287)				return this->values__;
            			}
            			break;
            			case (int)7: {
HXLINE( 287)				return this->offsets__;
            			}
            			break;
            			case (int)8: {
HXLINE( 287)				return this->pixel__;
            			}
            			break;
            			case (int)9: {
HXLINE( 287)				return this->hasFixedColor__;
            			}
            			break;
            			case (int)10: {
HXLINE( 287)				return this->smoothFixedColor__;
            			}
            			break;
            			case (int)11: {
HXLINE( 287)				return this->fixedColor__;
            			}
            			break;
            			case (int)12: {
HXLINE( 287)				return this->isDepthDependant__;
            			}
            			break;
            			case (int)13: {
HXLINE( 287)				return this->hasNormal__;
            			}
            			break;
            			case (int)14: {
HXLINE( 287)				return this->normalTexture__;
            			}
            			break;
            			case (int)15: {
HXLINE( 287)				return this->isCube__;
            			}
            			break;
            			case (int)16: {
HXLINE( 287)				return this->cubeTexture__;
            			}
            			break;
            			case (int)17: {
HXLINE( 287)				return this->cubeDir__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float Blur_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_fe0e042ff644d8fc_5_getParamFloatValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 303)			return this->flipY__;
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader Blur_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_fe0e042ff644d8fc_5_clone)
HXLINE( 315)		 ::h3d::shader::Blur s = ( ( ::h3d::shader::Blur)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::Blur >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->flipY__ = this->flipY__;
HXDLIN( 320)		s->cameraInverseViewProj__ = this->cameraInverseViewProj__;
HXDLIN( 320)		s->texture__ = this->texture__;
HXDLIN( 320)		s->depthTexture__ = this->depthTexture__;
HXDLIN( 320)		s->Quality__ = this->Quality__;
HXDLIN( 320)		s->isDepth__ = this->isDepth__;
HXDLIN( 320)		s->values__ = this->values__;
HXDLIN( 320)		s->offsets__ = this->offsets__;
HXDLIN( 320)		s->pixel__ = this->pixel__;
HXDLIN( 320)		s->hasFixedColor__ = this->hasFixedColor__;
HXDLIN( 320)		s->smoothFixedColor__ = this->smoothFixedColor__;
HXDLIN( 320)		s->fixedColor__ = this->fixedColor__;
HXDLIN( 320)		s->isDepthDependant__ = this->isDepthDependant__;
HXDLIN( 320)		s->hasNormal__ = this->hasNormal__;
HXDLIN( 320)		s->normalTexture__ = this->normalTexture__;
HXDLIN( 320)		s->isCube__ = this->isCube__;
HXDLIN( 320)		s->cubeTexture__ = this->cubeTexture__;
HXDLIN( 320)		s->cubeDir__ = this->cubeDir__;
HXLINE( 322)		return s;
            	}


::String Blur_obj::SRC;

 ::hxsl::SharedShader Blur_obj::_SHADER;


::hx::ObjectPtr< Blur_obj > Blur_obj::__new() {
	::hx::ObjectPtr< Blur_obj > __this = new Blur_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Blur_obj > Blur_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Blur_obj *__this = (Blur_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Blur_obj), true, "h3d.shader.Blur"));
	*(void **)__this = Blur_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Blur_obj::Blur_obj()
{
}

void Blur_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Blur);
	HX_MARK_MEMBER_NAME(cameraInverseViewProj__,"cameraInverseViewProj__");
	HX_MARK_MEMBER_NAME(texture__,"texture__");
	HX_MARK_MEMBER_NAME(depthTexture__,"depthTexture__");
	HX_MARK_MEMBER_NAME(Quality__,"Quality__");
	HX_MARK_MEMBER_NAME(isDepth__,"isDepth__");
	HX_MARK_MEMBER_NAME(values__,"values__");
	HX_MARK_MEMBER_NAME(offsets__,"offsets__");
	HX_MARK_MEMBER_NAME(pixel__,"pixel__");
	HX_MARK_MEMBER_NAME(hasFixedColor__,"hasFixedColor__");
	HX_MARK_MEMBER_NAME(smoothFixedColor__,"smoothFixedColor__");
	HX_MARK_MEMBER_NAME(fixedColor__,"fixedColor__");
	HX_MARK_MEMBER_NAME(isDepthDependant__,"isDepthDependant__");
	HX_MARK_MEMBER_NAME(hasNormal__,"hasNormal__");
	HX_MARK_MEMBER_NAME(normalTexture__,"normalTexture__");
	HX_MARK_MEMBER_NAME(isCube__,"isCube__");
	HX_MARK_MEMBER_NAME(cubeTexture__,"cubeTexture__");
	HX_MARK_MEMBER_NAME(cubeDir__,"cubeDir__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Blur_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cameraInverseViewProj__,"cameraInverseViewProj__");
	HX_VISIT_MEMBER_NAME(texture__,"texture__");
	HX_VISIT_MEMBER_NAME(depthTexture__,"depthTexture__");
	HX_VISIT_MEMBER_NAME(Quality__,"Quality__");
	HX_VISIT_MEMBER_NAME(isDepth__,"isDepth__");
	HX_VISIT_MEMBER_NAME(values__,"values__");
	HX_VISIT_MEMBER_NAME(offsets__,"offsets__");
	HX_VISIT_MEMBER_NAME(pixel__,"pixel__");
	HX_VISIT_MEMBER_NAME(hasFixedColor__,"hasFixedColor__");
	HX_VISIT_MEMBER_NAME(smoothFixedColor__,"smoothFixedColor__");
	HX_VISIT_MEMBER_NAME(fixedColor__,"fixedColor__");
	HX_VISIT_MEMBER_NAME(isDepthDependant__,"isDepthDependant__");
	HX_VISIT_MEMBER_NAME(hasNormal__,"hasNormal__");
	HX_VISIT_MEMBER_NAME(normalTexture__,"normalTexture__");
	HX_VISIT_MEMBER_NAME(isCube__,"isCube__");
	HX_VISIT_MEMBER_NAME(cubeTexture__,"cubeTexture__");
	HX_VISIT_MEMBER_NAME(cubeDir__,"cubeDir__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Blur_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pixel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pixel() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_values() ); }
		if (HX_FIELD_EQ(inName,"isCube") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isCube() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		if (HX_FIELD_EQ(inName,"Quality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_Quality() ); }
		if (HX_FIELD_EQ(inName,"isDepth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isDepth() ); }
		if (HX_FIELD_EQ(inName,"offsets") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_offsets() ); }
		if (HX_FIELD_EQ(inName,"pixel__") ) { return ::hx::Val( pixel__ ); }
		if (HX_FIELD_EQ(inName,"cubeDir") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cubeDir() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"values__") ) { return ::hx::Val( values__ ); }
		if (HX_FIELD_EQ(inName,"isCube__") ) { return ::hx::Val( isCube__ ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture__") ) { return ::hx::Val( texture__ ); }
		if (HX_FIELD_EQ(inName,"Quality__") ) { return ::hx::Val( Quality__ ); }
		if (HX_FIELD_EQ(inName,"isDepth__") ) { return ::hx::Val( isDepth__ ); }
		if (HX_FIELD_EQ(inName,"offsets__") ) { return ::hx::Val( offsets__ ); }
		if (HX_FIELD_EQ(inName,"get_pixel") ) { return ::hx::Val( get_pixel_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pixel") ) { return ::hx::Val( set_pixel_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasNormal") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hasNormal() ); }
		if (HX_FIELD_EQ(inName,"cubeDir__") ) { return ::hx::Val( cubeDir__ ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_values") ) { return ::hx::Val( get_values_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_values") ) { return ::hx::Val( set_values_dyn() ); }
		if (HX_FIELD_EQ(inName,"fixedColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fixedColor() ); }
		if (HX_FIELD_EQ(inName,"get_isCube") ) { return ::hx::Val( get_isCube_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_isCube") ) { return ::hx::Val( set_isCube_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_Quality") ) { return ::hx::Val( get_Quality_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_Quality") ) { return ::hx::Val( set_Quality_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isDepth") ) { return ::hx::Val( get_isDepth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_isDepth") ) { return ::hx::Val( set_isDepth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_offsets") ) { return ::hx::Val( get_offsets_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_offsets") ) { return ::hx::Val( set_offsets_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasNormal__") ) { return ::hx::Val( hasNormal__ ); }
		if (HX_FIELD_EQ(inName,"cubeTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cubeTexture() ); }
		if (HX_FIELD_EQ(inName,"get_cubeDir") ) { return ::hx::Val( get_cubeDir_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cubeDir") ) { return ::hx::Val( set_cubeDir_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"depthTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depthTexture() ); }
		if (HX_FIELD_EQ(inName,"fixedColor__") ) { return ::hx::Val( fixedColor__ ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasFixedColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hasFixedColor() ); }
		if (HX_FIELD_EQ(inName,"get_hasNormal") ) { return ::hx::Val( get_hasNormal_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hasNormal") ) { return ::hx::Val( set_hasNormal_dyn() ); }
		if (HX_FIELD_EQ(inName,"normalTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_normalTexture() ); }
		if (HX_FIELD_EQ(inName,"cubeTexture__") ) { return ::hx::Val( cubeTexture__ ); }
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"depthTexture__") ) { return ::hx::Val( depthTexture__ ); }
		if (HX_FIELD_EQ(inName,"get_fixedColor") ) { return ::hx::Val( get_fixedColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fixedColor") ) { return ::hx::Val( set_fixedColor_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasFixedColor__") ) { return ::hx::Val( hasFixedColor__ ); }
		if (HX_FIELD_EQ(inName,"normalTexture__") ) { return ::hx::Val( normalTexture__ ); }
		if (HX_FIELD_EQ(inName,"get_cubeTexture") ) { return ::hx::Val( get_cubeTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cubeTexture") ) { return ::hx::Val( set_cubeTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_depthTexture") ) { return ::hx::Val( get_depthTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depthTexture") ) { return ::hx::Val( set_depthTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"smoothFixedColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_smoothFixedColor() ); }
		if (HX_FIELD_EQ(inName,"isDepthDependant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isDepthDependant() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_hasFixedColor") ) { return ::hx::Val( get_hasFixedColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hasFixedColor") ) { return ::hx::Val( set_hasFixedColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_normalTexture") ) { return ::hx::Val( get_normalTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_normalTexture") ) { return ::hx::Val( set_normalTexture_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"smoothFixedColor__") ) { return ::hx::Val( smoothFixedColor__ ); }
		if (HX_FIELD_EQ(inName,"isDepthDependant__") ) { return ::hx::Val( isDepthDependant__ ); }
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_smoothFixedColor") ) { return ::hx::Val( get_smoothFixedColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_smoothFixedColor") ) { return ::hx::Val( set_smoothFixedColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isDepthDependant") ) { return ::hx::Val( get_isDepthDependant_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_isDepthDependant") ) { return ::hx::Val( set_isDepthDependant_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"cameraInverseViewProj") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameraInverseViewProj() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cameraInverseViewProj__") ) { return ::hx::Val( cameraInverseViewProj__ ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_cameraInverseViewProj") ) { return ::hx::Val( get_cameraInverseViewProj_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameraInverseViewProj") ) { return ::hx::Val( set_cameraInverseViewProj_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Blur_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val Blur_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pixel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pixel(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_values(inValue.Cast< ::Array< Float > >()) ); }
		if (HX_FIELD_EQ(inName,"isCube") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isCube(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		if (HX_FIELD_EQ(inName,"Quality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_Quality(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"isDepth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isDepth(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"offsets") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_offsets(inValue.Cast< ::Array< Float > >()) ); }
		if (HX_FIELD_EQ(inName,"pixel__") ) { pixel__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cubeDir") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cubeDir(inValue.Cast<  ::h3d::Matrix >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"values__") ) { values__=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isCube__") ) { isCube__=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture__") ) { texture__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Quality__") ) { Quality__=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDepth__") ) { isDepth__=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsets__") ) { offsets__=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasNormal") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hasNormal(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"cubeDir__") ) { cubeDir__=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fixedColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fixedColor(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasNormal__") ) { hasNormal__=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cubeTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cubeTexture(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"depthTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depthTexture(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		if (HX_FIELD_EQ(inName,"fixedColor__") ) { fixedColor__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasFixedColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hasFixedColor(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"normalTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_normalTexture(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		if (HX_FIELD_EQ(inName,"cubeTexture__") ) { cubeTexture__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"depthTexture__") ) { depthTexture__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasFixedColor__") ) { hasFixedColor__=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalTexture__") ) { normalTexture__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"smoothFixedColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_smoothFixedColor(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"isDepthDependant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isDepthDependant(inValue.Cast< bool >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"smoothFixedColor__") ) { smoothFixedColor__=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDepthDependant__") ) { isDepthDependant__=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"cameraInverseViewProj") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameraInverseViewProj(inValue.Cast<  ::h3d::Matrix >()) ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cameraInverseViewProj__") ) { cameraInverseViewProj__=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Blur_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void Blur_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cameraInverseViewProj",4d,f7,a7,cb));
	outFields->push(HX_("cameraInverseViewProj__",ad,77,0e,ff));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("texture__",bb,48,49,af));
	outFields->push(HX_("depthTexture",18,76,2f,e5));
	outFields->push(HX_("depthTexture__",38,7f,8b,28));
	outFields->push(HX_("Quality",9f,2c,9d,11));
	outFields->push(HX_("Quality__",7f,25,b9,94));
	outFields->push(HX_("isDepth",b9,94,af,73));
	outFields->push(HX_("isDepth__",19,48,49,6e));
	outFields->push(HX_("values",e2,03,b7,4f));
	outFields->push(HX_("values__",82,93,69,ee));
	outFields->push(HX_("offsets",80,09,65,d7));
	outFields->push(HX_("offsets__",a0,bc,da,41));
	outFields->push(HX_("pixel",86,c6,a3,c2));
	outFields->push(HX_("pixel__",26,47,07,88));
	outFields->push(HX_("hasFixedColor",49,db,dd,4d));
	outFields->push(HX_("hasFixedColor__",a9,52,82,e5));
	outFields->push(HX_("smoothFixedColor",1d,75,b4,e0));
	outFields->push(HX_("smoothFixedColor__",7d,09,92,ce));
	outFields->push(HX_("fixedColor",4f,23,87,33));
	outFields->push(HX_("fixedColor__",2f,28,12,7e));
	outFields->push(HX_("isDepthDependant",02,fd,7b,e6));
	outFields->push(HX_("isDepthDependant__",a2,14,37,7b));
	outFields->push(HX_("hasNormal",21,25,52,71));
	outFields->push(HX_("hasNormal__",81,c2,fe,05));
	outFields->push(HX_("normalTexture",74,21,6a,38));
	outFields->push(HX_("normalTexture__",94,b9,4c,c0));
	outFields->push(HX_("isCube",ff,01,30,5f));
	outFields->push(HX_("isCube__",df,12,b4,8c));
	outFields->push(HX_("cubeTexture",66,6c,8f,75));
	outFields->push(HX_("cubeTexture__",06,25,90,89));
	outFields->push(HX_("cubeDir",58,7f,c9,8c));
	outFields->push(HX_("cubeDir__",78,58,aa,71));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Blur_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Blur_obj,cameraInverseViewProj__),HX_("cameraInverseViewProj__",ad,77,0e,ff)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(Blur_obj,texture__),HX_("texture__",bb,48,49,af)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(Blur_obj,depthTexture__),HX_("depthTexture__",38,7f,8b,28)},
	{::hx::fsInt,(int)offsetof(Blur_obj,Quality__),HX_("Quality__",7f,25,b9,94)},
	{::hx::fsBool,(int)offsetof(Blur_obj,isDepth__),HX_("isDepth__",19,48,49,6e)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Blur_obj,values__),HX_("values__",82,93,69,ee)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Blur_obj,offsets__),HX_("offsets__",a0,bc,da,41)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Blur_obj,pixel__),HX_("pixel__",26,47,07,88)},
	{::hx::fsBool,(int)offsetof(Blur_obj,hasFixedColor__),HX_("hasFixedColor__",a9,52,82,e5)},
	{::hx::fsBool,(int)offsetof(Blur_obj,smoothFixedColor__),HX_("smoothFixedColor__",7d,09,92,ce)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Blur_obj,fixedColor__),HX_("fixedColor__",2f,28,12,7e)},
	{::hx::fsBool,(int)offsetof(Blur_obj,isDepthDependant__),HX_("isDepthDependant__",a2,14,37,7b)},
	{::hx::fsBool,(int)offsetof(Blur_obj,hasNormal__),HX_("hasNormal__",81,c2,fe,05)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(Blur_obj,normalTexture__),HX_("normalTexture__",94,b9,4c,c0)},
	{::hx::fsBool,(int)offsetof(Blur_obj,isCube__),HX_("isCube__",df,12,b4,8c)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(Blur_obj,cubeTexture__),HX_("cubeTexture__",06,25,90,89)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Blur_obj,cubeDir__),HX_("cubeDir__",78,58,aa,71)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Blur_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Blur_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &Blur_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Blur_obj_sMemberFields[] = {
	HX_("cameraInverseViewProj__",ad,77,0e,ff),
	HX_("get_cameraInverseViewProj",a4,b1,a5,d1),
	HX_("set_cameraInverseViewProj",b0,75,fc,3d),
	HX_("texture__",bb,48,49,af),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("depthTexture__",38,7f,8b,28),
	HX_("get_depthTexture",a1,62,ce,e9),
	HX_("set_depthTexture",15,50,10,40),
	HX_("Quality__",7f,25,b9,94),
	HX_("get_Quality",b6,8c,97,97),
	HX_("set_Quality",c2,93,04,a2),
	HX_("isDepth__",19,48,49,6e),
	HX_("get_isDepth",d0,f4,a9,f9),
	HX_("set_isDepth",dc,fb,16,04),
	HX_("values__",82,93,69,ee),
	HX_("get_values",ab,73,3e,40),
	HX_("set_values",1f,12,bc,43),
	HX_("offsets__",a0,bc,da,41),
	HX_("get_offsets",97,69,5f,5d),
	HX_("set_offsets",a3,70,cc,67),
	HX_("pixel__",26,47,07,88),
	HX_("get_pixel",dd,22,4d,06),
	HX_("set_pixel",e9,0e,9e,e9),
	HX_("hasFixedColor__",a9,52,82,e5),
	HX_("get_hasFixedColor",a0,e6,4d,54),
	HX_("set_hasFixedColor",ac,be,bb,77),
	HX_("smoothFixedColor__",7d,09,92,ce),
	HX_("get_smoothFixedColor",26,da,1e,ff),
	HX_("set_smoothFixedColor",9a,91,d6,cb),
	HX_("fixedColor__",2f,28,12,7e),
	HX_("get_fixedColor",98,ab,7c,a9),
	HX_("set_fixedColor",0c,94,9c,c9),
	HX_("isDepthDependant__",a2,14,37,7b),
	HX_("get_isDepthDependant",0b,62,e6,04),
	HX_("set_isDepthDependant",7f,19,9e,d1),
	HX_("hasNormal__",81,c2,fe,05),
	HX_("get_hasNormal",f8,f8,b5,32),
	HX_("set_hasNormal",04,db,bb,77),
	HX_("normalTexture__",94,b9,4c,c0),
	HX_("get_normalTexture",cb,2c,da,3e),
	HX_("set_normalTexture",d7,04,48,62),
	HX_("isCube__",df,12,b4,8c),
	HX_("get_isCube",c8,71,b7,4f),
	HX_("set_isCube",3c,10,35,53),
	HX_("cubeTexture__",06,25,90,89),
	HX_("get_cubeTexture",fd,23,71,36),
	HX_("set_cubeTexture",09,a1,3c,32),
	HX_("cubeDir__",78,58,aa,71),
	HX_("get_cubeDir",6f,df,c3,12),
	HX_("set_cubeDir",7b,e6,30,1d),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void Blur_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Blur_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(Blur_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Blur_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Blur_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(Blur_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class Blur_obj::__mClass;

static ::String Blur_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void Blur_obj::__register()
{
	Blur_obj _hx_dummy;
	Blur_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.Blur",fb,93,b7,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Blur_obj::__GetStatic;
	__mClass->mSetStaticField = &Blur_obj::__SetStatic;
	__mClass->mMarkFunc = Blur_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Blur_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Blur_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Blur_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Blur_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Blur_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Blur_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Blur_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fe0e042ff644d8fc_5_boot)
HXDLIN(   5)		SRC = HX_("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",a6,8b,08,13);
            	}
}

} // end namespace h3d
} // end namespace shader
