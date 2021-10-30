#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_mat_Blend
#include <h3d/mat/Blend.h>
#endif
#ifndef INCLUDED_h3d_mat_Compare
#include <h3d/mat/Compare.h>
#endif
#ifndef INCLUDED_h3d_mat_Face
#include <h3d/mat/Face.h>
#endif
#ifndef INCLUDED_h3d_mat_Operation
#include <h3d/mat/Operation.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Stencil
#include <h3d/mat/Stencil.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_Renderer
#include <h3d/scene/Renderer.h>
#endif
#ifndef INCLUDED_h3d_scene_Scene
#include <h3d/scene/Scene.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Channel
#include <hxsl/Channel.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Printer
#include <hxsl/Printer.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShaderData
#include <hxsl/RuntimeShaderData.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif
#ifndef INCLUDED_hxsl_SharedShader
#include <hxsl/SharedShader.h>
#endif
#ifndef INCLUDED_hxsl__ShaderList_ShaderIterator
#include <hxsl/_ShaderList/ShaderIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfc369b9d2687492_8_new,"h3d.mat.Pass","new",0xfc24a446,"h3d.mat.Pass.new","h3d/mat/Pass.hx",8,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_63_load,"h3d.mat.Pass","load",0xa2a02f80,"h3d.mat.Pass.load","h3d/mat/Pass.hx",63,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_85_setPassName,"h3d.mat.Pass","setPassName",0x284cb364,"h3d.mat.Pass.setPassName","h3d/mat/Pass.hx",85,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_90_blend,"h3d.mat.Pass","blend",0xe58f01b7,"h3d.mat.Pass.blend","h3d/mat/Pass.hx",90,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_98_setBlendMode,"h3d.mat.Pass","setBlendMode",0x5e6c23ac,"h3d.mat.Pass.setBlendMode","h3d/mat/Pass.hx",98,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_163_depth,"h3d.mat.Pass","depth",0x07c40a69,"h3d.mat.Pass.depth","h3d/mat/Pass.hx",163,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_169_setColorMask,"h3d.mat.Pass","setColorMask",0x75f80b47,"h3d.mat.Pass.setColorMask","h3d/mat/Pass.hx",169,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_173_setColorChannel,"h3d.mat.Pass","setColorChannel",0xdb10e148,"h3d.mat.Pass.setColorChannel","h3d/mat/Pass.hx",173,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_182_addShader,"h3d.mat.Pass","addShader",0x1a3eb88c,"h3d.mat.Pass.addShader","h3d/mat/Pass.hx",182,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_192_addShaderAtIndex,"h3d.mat.Pass","addShaderAtIndex",0x94b9bdf3,"h3d.mat.Pass.addShaderAtIndex","h3d/mat/Pass.hx",192,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_207_getShaderIndex,"h3d.mat.Pass","getShaderIndex",0xec662291,"h3d.mat.Pass.getShaderIndex","h3d/mat/Pass.hx",207,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_218_removeShader,"h3d.mat.Pass","removeShader",0xba32d9e3,"h3d.mat.Pass.removeShader","h3d/mat/Pass.hx",218,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_234_getShader,"h3d.mat.Pass","getShader",0xde710cc1,"h3d.mat.Pass.getShader","h3d/mat/Pass.hx",234,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_245_getShaderByName,"h3d.mat.Pass","getShaderByName",0x67533363,"h3d.mat.Pass.getShaderByName","h3d/mat/Pass.hx",245,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_256_getShaders,"h3d.mat.Pass","getShaders",0xc47a1c92,"h3d.mat.Pass.getShaders","h3d/mat/Pass.hx",256,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_259_getShadersRec,"h3d.mat.Pass","getShadersRec",0xa67f1bde,"h3d.mat.Pass.getShadersRec","h3d/mat/Pass.hx",259,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_276_clone,"h3d.mat.Pass","clone",0x78fd2cc3,"h3d.mat.Pass.clone","h3d/mat/Pass.hx",276,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_285_getDebugShaderCode,"h3d.mat.Pass","getDebugShaderCode",0xe9844e09,"h3d.mat.Pass.getDebugShaderCode","h3d/mat/Pass.hx",285,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_bfc369b9d2687492_288_getDebugShaderCode,"h3d.mat.Pass","getDebugShaderCode",0xe9844e09,"h3d.mat.Pass.getDebugShaderCode","h3d/mat/Pass.hx",288,0xbb36e5a8)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_enableLights,"h3d.mat.Pass","set_enableLights",0x9311a017,"h3d.mat.Pass.set_enableLights","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_dynamicParameters,"h3d.mat.Pass","set_dynamicParameters",0x3171ed52,"h3d.mat.Pass.set_dynamicParameters","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_isStatic,"h3d.mat.Pass","set_isStatic",0x565ccf0f,"h3d.mat.Pass.set_isStatic","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_batchMode,"h3d.mat.Pass","set_batchMode",0xeef0f186,"h3d.mat.Pass.set_batchMode","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_culling,"h3d.mat.Pass","set_culling",0xae2f7379,"h3d.mat.Pass.set_culling","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_depthWrite,"h3d.mat.Pass","set_depthWrite",0x92615b73,"h3d.mat.Pass.set_depthWrite","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_depthTest,"h3d.mat.Pass","set_depthTest",0xa3f1c83e,"h3d.mat.Pass.set_depthTest","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_blendSrc,"h3d.mat.Pass","set_blendSrc",0x62cd15ea,"h3d.mat.Pass.set_blendSrc","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_blendDst,"h3d.mat.Pass","set_blendDst",0x62c1b50b,"h3d.mat.Pass.set_blendDst","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_blendAlphaSrc,"h3d.mat.Pass","set_blendAlphaSrc",0xb9c98160,"h3d.mat.Pass.set_blendAlphaSrc","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_blendAlphaDst,"h3d.mat.Pass","set_blendAlphaDst",0xb9be2081,"h3d.mat.Pass.set_blendAlphaDst","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_blendOp,"h3d.mat.Pass","set_blendOp",0xe4e434db,"h3d.mat.Pass.set_blendOp","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_blendAlphaOp,"h3d.mat.Pass","set_blendAlphaOp",0xe1d66a25,"h3d.mat.Pass.set_blendAlphaOp","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_wireframe,"h3d.mat.Pass","set_wireframe",0x717b0f11,"h3d.mat.Pass.set_wireframe","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_87_set_reserved,"h3d.mat.Pass","set_reserved",0x469d4d7f,"h3d.mat.Pass.set_reserved","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_140_loadFlags,"h3d.mat.Pass","loadFlags",0x62bd3ba7,"h3d.mat.Pass.loadFlags","hxd/impl/BitsBuilder.hx",140,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_140_loadBits,"h3d.mat.Pass","loadBits",0x271e16a6,"h3d.mat.Pass.loadBits","hxd/impl/BitsBuilder.hx",140,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getEnableLights,"h3d.mat.Pass","getEnableLights",0x7bacfc5c,"h3d.mat.Pass.getEnableLights","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getDynamicParameters,"h3d.mat.Pass","getDynamicParameters",0xa2c8f6ed,"h3d.mat.Pass.getDynamicParameters","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getIsStatic,"h3d.mat.Pass","getIsStatic",0x4e9964d4,"h3d.mat.Pass.getIsStatic","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getBatchMode,"h3d.mat.Pass","getBatchMode",0x2bb76821,"h3d.mat.Pass.getBatchMode","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getCulling,"h3d.mat.Pass","getCulling",0xb87b7d54,"h3d.mat.Pass.getCulling","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getDepthWrite,"h3d.mat.Pass","getDepthWrite",0x8342ac78,"h3d.mat.Pass.getDepthWrite","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getDepthTest,"h3d.mat.Pass","getDepthTest",0xe0b83ed9,"h3d.mat.Pass.getDepthTest","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getBlendSrc,"h3d.mat.Pass","getBlendSrc",0x5b09abaf,"h3d.mat.Pass.getBlendSrc","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getBlendDst,"h3d.mat.Pass","getBlendDst",0x5afe4ad0,"h3d.mat.Pass.getBlendDst","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getBlendAlphaSrc,"h3d.mat.Pass","getBlendAlphaSrc",0x591ee17b,"h3d.mat.Pass.getBlendAlphaSrc","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getBlendAlphaDst,"h3d.mat.Pass","getBlendAlphaDst",0x5913809c,"h3d.mat.Pass.getBlendAlphaDst","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getBlendOp,"h3d.mat.Pass","getBlendOp",0xef303eb6,"h3d.mat.Pass.getBlendOp","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getBlendAlphaOp,"h3d.mat.Pass","getBlendAlphaOp",0xca71c66a,"h3d.mat.Pass.getBlendAlphaOp","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getWireframe,"h3d.mat.Pass","getWireframe",0xae4185ac,"h3d.mat.Pass.getWireframe","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_101_getReserved,"h3d.mat.Pass","getReserved",0x3ed9e344,"h3d.mat.Pass.getReserved","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_108_boot,"h3d.mat.Pass","boot",0x9c04198c,"h3d.mat.Pass.boot","hxd/impl/BitsBuilder.hx",108,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_114_boot,"h3d.mat.Pass","boot",0x9c04198c,"h3d.mat.Pass.boot","hxd/impl/BitsBuilder.hx",114,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_22096ee855c19fc3_120_boot,"h3d.mat.Pass","boot",0x9c04198c,"h3d.mat.Pass.boot","hxd/impl/BitsBuilder.hx",120,0xc714215d)
namespace h3d{
namespace mat{

void Pass_obj::__construct(::String name, ::hxsl::ShaderList shaders, ::h3d::mat::Pass parent){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_8_new)
HXLINE(  45)		this->layer = 0;
HXLINE(  13)		this->bits = 0;
HXLINE(  53)		this->parentPass = parent;
HXLINE(  54)		this->shaders = shaders;
HXLINE(  55)		this->setPassName(name);
HXLINE(  56)		this->set_culling(::h3d::mat::Face_obj::Back_dyn());
HXLINE(  57)		{
HXLINE(  57)			 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::One_dyn();
HXDLIN(  57)			 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::Zero_dyn();
HXDLIN(  57)			this->set_blendSrc(src);
HXDLIN(  57)			this->set_blendAlphaSrc(src);
HXDLIN(  57)			this->set_blendDst(dst);
HXDLIN(  57)			this->set_blendAlphaDst(dst);
            		}
HXLINE(  58)		this->depth(true,::h3d::mat::Compare_obj::Less_dyn());
HXLINE(  59)		this->set_blendOp(this->set_blendAlphaOp(::h3d::mat::Operation_obj::Add_dyn()));
HXLINE(  60)		this->colorMask = 15;
            	}

Dynamic Pass_obj::__CreateEmpty() { return new Pass_obj; }

void *Pass_obj::_hx_vtable = 0;

Dynamic Pass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Pass_obj > _hx_result = new Pass_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Pass_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6f750fb8;
}

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_mat_Pass__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *Pass_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa6f1a21a: return &_hx_h3d_mat_Pass__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void Pass_obj::load( ::h3d::mat::Pass p){
            	HX_GC_STACKFRAME(&_hx_pos_bfc369b9d2687492_63_load)
HXLINE(  64)		this->name = p->name;
HXLINE(  65)		this->passId = p->passId;
HXLINE(  66)		this->bits = p->bits;
HXLINE(  67)		this->set_enableLights(p->enableLights);
HXLINE(  68)		this->set_dynamicParameters(p->dynamicParameters);
HXLINE(  69)		this->set_culling(p->culling);
HXLINE(  70)		this->set_depthWrite(p->depthWrite);
HXLINE(  71)		this->set_depthTest(p->depthTest);
HXLINE(  72)		this->set_blendSrc(p->blendSrc);
HXLINE(  73)		this->set_blendDst(p->blendDst);
HXLINE(  74)		this->set_blendOp(p->blendOp);
HXLINE(  75)		this->set_blendAlphaSrc(p->blendAlphaSrc);
HXLINE(  76)		this->set_blendAlphaDst(p->blendAlphaDst);
HXLINE(  77)		this->set_blendAlphaOp(p->blendAlphaOp);
HXLINE(  78)		this->colorMask = p->colorMask;
HXLINE(  79)		if (::hx::IsNotNull( p->stencil )) {
HXLINE(  80)			if (::hx::IsNull( this->stencil )) {
HXLINE(  80)				this->stencil =  ::h3d::mat::Stencil_obj::__alloc( HX_CTX );
            			}
HXLINE(  81)			this->stencil->load(p->stencil);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,load,(void))

void Pass_obj::setPassName(::String name){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_85_setPassName)
HXLINE(  86)		this->name = name;
HXLINE(  87)		this->passId = ::hxsl::Globals_obj::allocID(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,setPassName,(void))

void Pass_obj::blend( ::h3d::mat::Blend src, ::h3d::mat::Blend dst){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_90_blend)
HXLINE(  91)		this->set_blendSrc(src);
HXLINE(  92)		this->set_blendAlphaSrc(src);
HXLINE(  93)		this->set_blendDst(dst);
HXLINE(  94)		this->set_blendAlphaDst(dst);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Pass_obj,blend,(void))

void Pass_obj::setBlendMode( ::h2d::BlendMode b){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_98_setBlendMode)
HXDLIN(  98)		switch((int)(b->_hx_getIndex())){
            			case (int)0: {
HXLINE( 100)				{
HXLINE( 100)					 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::One_dyn();
HXDLIN( 100)					 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::Zero_dyn();
HXDLIN( 100)					this->set_blendSrc(src);
HXDLIN( 100)					this->set_blendAlphaSrc(src);
HXDLIN( 100)					this->set_blendDst(dst);
HXDLIN( 100)					this->set_blendAlphaDst(dst);
            				}
HXLINE( 101)				this->set_blendOp(::h3d::mat::Operation_obj::Add_dyn());
HXLINE( 102)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::Add_dyn());
            			}
            			break;
            			case (int)1: {
HXLINE( 104)				{
HXLINE( 104)					 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::SrcAlpha_dyn();
HXDLIN( 104)					 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::OneMinusSrcAlpha_dyn();
HXDLIN( 104)					this->set_blendSrc(src);
HXDLIN( 104)					this->set_blendAlphaSrc(src);
HXDLIN( 104)					this->set_blendDst(dst);
HXDLIN( 104)					this->set_blendAlphaDst(dst);
            				}
HXLINE( 105)				this->set_blendOp(::h3d::mat::Operation_obj::Add_dyn());
HXLINE( 106)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::Add_dyn());
            			}
            			break;
            			case (int)2: {
HXLINE( 108)				{
HXLINE( 108)					 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::SrcAlpha_dyn();
HXDLIN( 108)					 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::One_dyn();
HXDLIN( 108)					this->set_blendSrc(src);
HXDLIN( 108)					this->set_blendAlphaSrc(src);
HXDLIN( 108)					this->set_blendDst(dst);
HXDLIN( 108)					this->set_blendAlphaDst(dst);
            				}
HXLINE( 109)				this->set_blendOp(::h3d::mat::Operation_obj::Add_dyn());
HXLINE( 110)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::Add_dyn());
            			}
            			break;
            			case (int)3: {
HXLINE( 112)				{
HXLINE( 112)					 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::One_dyn();
HXDLIN( 112)					 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::OneMinusSrcAlpha_dyn();
HXDLIN( 112)					this->set_blendSrc(src);
HXDLIN( 112)					this->set_blendAlphaSrc(src);
HXDLIN( 112)					this->set_blendDst(dst);
HXDLIN( 112)					this->set_blendAlphaDst(dst);
            				}
HXLINE( 113)				this->set_blendOp(::h3d::mat::Operation_obj::Add_dyn());
HXLINE( 114)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::Add_dyn());
            			}
            			break;
            			case (int)4: {
HXLINE( 116)				{
HXLINE( 116)					 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::OneMinusDstColor_dyn();
HXDLIN( 116)					 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::One_dyn();
HXDLIN( 116)					this->set_blendSrc(src);
HXDLIN( 116)					this->set_blendAlphaSrc(src);
HXDLIN( 116)					this->set_blendDst(dst);
HXDLIN( 116)					this->set_blendAlphaDst(dst);
            				}
HXLINE( 117)				this->set_blendOp(::h3d::mat::Operation_obj::Add_dyn());
HXLINE( 118)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::Add_dyn());
            			}
            			break;
            			case (int)5: {
HXLINE( 120)				{
HXLINE( 120)					 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::DstColor_dyn();
HXDLIN( 120)					 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::Zero_dyn();
HXDLIN( 120)					this->set_blendSrc(src);
HXDLIN( 120)					this->set_blendAlphaSrc(src);
HXDLIN( 120)					this->set_blendDst(dst);
HXDLIN( 120)					this->set_blendAlphaDst(dst);
            				}
HXLINE( 121)				this->set_blendOp(::h3d::mat::Operation_obj::Add_dyn());
HXLINE( 122)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::Add_dyn());
            			}
            			break;
            			case (int)6: {
HXLINE( 124)				{
HXLINE( 124)					 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::DstColor_dyn();
HXDLIN( 124)					 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::OneMinusSrcAlpha_dyn();
HXDLIN( 124)					this->set_blendSrc(src);
HXDLIN( 124)					this->set_blendAlphaSrc(src);
HXDLIN( 124)					this->set_blendDst(dst);
HXDLIN( 124)					this->set_blendAlphaDst(dst);
            				}
HXLINE( 125)				this->set_blendOp(::h3d::mat::Operation_obj::Add_dyn());
HXLINE( 126)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::Add_dyn());
            			}
            			break;
            			case (int)7: {
HXLINE( 128)				{
HXLINE( 128)					 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::Zero_dyn();
HXDLIN( 128)					 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::OneMinusSrcColor_dyn();
HXDLIN( 128)					this->set_blendSrc(src);
HXDLIN( 128)					this->set_blendAlphaSrc(src);
HXDLIN( 128)					this->set_blendDst(dst);
HXDLIN( 128)					this->set_blendAlphaDst(dst);
            				}
HXLINE( 129)				this->set_blendOp(::h3d::mat::Operation_obj::Add_dyn());
HXLINE( 130)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::Add_dyn());
            			}
            			break;
            			case (int)8: {
HXLINE( 132)				{
HXLINE( 132)					 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::One_dyn();
HXDLIN( 132)					 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::OneMinusSrcColor_dyn();
HXDLIN( 132)					this->set_blendSrc(src);
HXDLIN( 132)					this->set_blendAlphaSrc(src);
HXDLIN( 132)					this->set_blendDst(dst);
HXDLIN( 132)					this->set_blendAlphaDst(dst);
            				}
HXLINE( 133)				this->set_blendOp(::h3d::mat::Operation_obj::Add_dyn());
HXLINE( 134)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::Add_dyn());
            			}
            			break;
            			case (int)9: {
HXLINE( 136)				{
HXLINE( 136)					 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::SrcAlpha_dyn();
HXDLIN( 136)					 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::One_dyn();
HXDLIN( 136)					this->set_blendSrc(src);
HXDLIN( 136)					this->set_blendAlphaSrc(src);
HXDLIN( 136)					this->set_blendDst(dst);
HXDLIN( 136)					this->set_blendAlphaDst(dst);
            				}
HXLINE( 137)				this->set_blendOp(::h3d::mat::Operation_obj::ReverseSub_dyn());
HXLINE( 138)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::ReverseSub_dyn());
            			}
            			break;
            			case (int)10: {
HXLINE( 143)				this->set_blendSrc(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 144)				this->set_blendAlphaSrc(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 145)				this->set_blendDst(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 146)				this->set_blendAlphaDst(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 147)				this->set_blendAlphaSrc(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 148)				this->set_blendAlphaDst(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 149)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::Max_dyn());
HXLINE( 150)				this->set_blendOp(::h3d::mat::Operation_obj::Max_dyn());
            			}
            			break;
            			case (int)11: {
HXLINE( 152)				this->set_blendSrc(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 153)				this->set_blendAlphaSrc(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 154)				this->set_blendDst(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 155)				this->set_blendAlphaDst(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 156)				this->set_blendAlphaSrc(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 157)				this->set_blendAlphaDst(::h3d::mat::Blend_obj::Zero_dyn());
HXLINE( 158)				this->set_blendAlphaOp(::h3d::mat::Operation_obj::Min_dyn());
HXLINE( 159)				this->set_blendOp(::h3d::mat::Operation_obj::Min_dyn());
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,setBlendMode,(void))

void Pass_obj::depth(bool write, ::h3d::mat::Compare test){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_163_depth)
HXLINE( 164)		this->set_depthWrite(write);
HXLINE( 165)		this->set_depthTest(test);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Pass_obj,depth,(void))

void Pass_obj::setColorMask(bool r,bool g,bool b,bool a){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_169_setColorMask)
HXDLIN( 169)		int _hx_tmp;
HXDLIN( 169)		if (r) {
HXDLIN( 169)			_hx_tmp = 1;
            		}
            		else {
HXDLIN( 169)			_hx_tmp = 0;
            		}
HXDLIN( 169)		int _hx_tmp1;
HXDLIN( 169)		if (g) {
HXDLIN( 169)			_hx_tmp1 = 2;
            		}
            		else {
HXDLIN( 169)			_hx_tmp1 = 0;
            		}
HXDLIN( 169)		int _hx_tmp2;
HXDLIN( 169)		if (b) {
HXDLIN( 169)			_hx_tmp2 = 4;
            		}
            		else {
HXDLIN( 169)			_hx_tmp2 = 0;
            		}
HXDLIN( 169)		int _hx_tmp3;
HXDLIN( 169)		if (a) {
HXDLIN( 169)			_hx_tmp3 = 8;
            		}
            		else {
HXDLIN( 169)			_hx_tmp3 = 0;
            		}
HXDLIN( 169)		this->colorMask = (((_hx_tmp | _hx_tmp1) | _hx_tmp2) | _hx_tmp3);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Pass_obj,setColorMask,(void))

void Pass_obj::setColorChannel( ::hxsl::Channel c){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_173_setColorChannel)
HXDLIN( 173)		switch((int)(c->_hx_getIndex())){
            			case (int)1: {
HXLINE( 174)				this->setColorMask(true,false,false,false);
            			}
            			break;
            			case (int)2: {
HXLINE( 175)				this->setColorMask(false,true,false,false);
            			}
            			break;
            			case (int)3: {
HXLINE( 176)				this->setColorMask(false,false,true,false);
            			}
            			break;
            			case (int)4: {
HXLINE( 177)				this->setColorMask(false,false,false,true);
            			}
            			break;
            			default:{
HXLINE( 178)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported channel ",e8,2a,14,9c) + ::Std_obj::string(c))));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,setColorChannel,(void))

 ::Dynamic Pass_obj::addShader( ::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_182_addShader)
HXLINE( 184)		if (::hx::IsNull( s )) {
HXLINE( 184)			return null();
            		}
HXLINE( 185)		this->shaders = ::hxsl::ShaderList_obj::addSort(( ( ::hxsl::Shader)(s) ),this->shaders);
HXLINE( 186)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,addShader,return )

 ::Dynamic Pass_obj::addShaderAtIndex( ::Dynamic s,int index){
            	HX_GC_STACKFRAME(&_hx_pos_bfc369b9d2687492_192_addShaderAtIndex)
HXLINE( 193)		 ::hxsl::ShaderList prev = null();
HXLINE( 194)		 ::hxsl::ShaderList cur = this->shaders;
HXLINE( 195)		while(true){
HXLINE( 195)			bool _hx_tmp;
HXDLIN( 195)			if ((index > 0)) {
HXLINE( 195)				_hx_tmp = ::hx::IsInstanceNotEq( cur,this->parentShaders );
            			}
            			else {
HXLINE( 195)				_hx_tmp = false;
            			}
HXDLIN( 195)			if (!(_hx_tmp)) {
HXLINE( 195)				goto _hx_goto_9;
            			}
HXLINE( 196)			prev = cur;
HXLINE( 197)			cur = cur->next;
HXLINE( 198)			index = (index - 1);
            		}
            		_hx_goto_9:;
HXLINE( 200)		if (::hx::IsNull( prev )) {
HXLINE( 201)			this->shaders =  ::hxsl::ShaderList_obj::__alloc( HX_CTX ,( ( ::hxsl::Shader)(s) ),cur);
            		}
            		else {
HXLINE( 203)			prev->next =  ::hxsl::ShaderList_obj::__alloc( HX_CTX ,( ( ::hxsl::Shader)(s) ),cur);
            		}
HXLINE( 204)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Pass_obj,addShaderAtIndex,return )

int Pass_obj::getShaderIndex( ::hxsl::Shader s){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_207_getShaderIndex)
HXLINE( 208)		int index = 0;
HXLINE( 209)		 ::hxsl::ShaderList cur = this->shaders;
HXLINE( 210)		while(::hx::IsInstanceNotEq( cur,this->parentShaders )){
HXLINE( 211)			if (::hx::IsInstanceEq( cur->s,s )) {
HXLINE( 211)				return index;
            			}
HXLINE( 212)			cur = cur->next;
HXLINE( 213)			index = (index + 1);
            		}
HXLINE( 215)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getShaderIndex,return )

bool Pass_obj::removeShader( ::hxsl::Shader s){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_218_removeShader)
HXLINE( 219)		 ::hxsl::ShaderList sl = this->shaders;
HXDLIN( 219)		 ::hxsl::ShaderList prev = null();
HXLINE( 220)		while(::hx::IsNotNull( sl )){
HXLINE( 221)			if (::hx::IsInstanceEq( sl->s,s )) {
HXLINE( 222)				if (::hx::IsNull( prev )) {
HXLINE( 223)					this->shaders = sl->next;
            				}
            				else {
HXLINE( 225)					prev->next = sl->next;
            				}
HXLINE( 226)				return true;
            			}
HXLINE( 228)			prev = sl;
HXLINE( 229)			sl = sl->next;
            		}
HXLINE( 231)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,removeShader,return )

 ::Dynamic Pass_obj::getShader(::hx::Class t){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_234_getShader)
HXLINE( 235)		 ::hxsl::ShaderList s = this->shaders;
HXLINE( 236)		while(::hx::IsInstanceNotEq( s,this->parentShaders )){
HXLINE( 237)			 ::Dynamic sh = ::Std_obj::downcast(s->s,t);
HXLINE( 238)			if (::hx::IsNotNull( sh )) {
HXLINE( 239)				return sh;
            			}
HXLINE( 240)			s = s->next;
            		}
HXLINE( 242)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getShader,return )

 ::hxsl::Shader Pass_obj::getShaderByName(::String name){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_245_getShaderByName)
HXLINE( 246)		 ::hxsl::ShaderList s = this->shaders;
HXLINE( 247)		while(::hx::IsInstanceNotEq( s,this->parentShaders )){
HXLINE( 248)			if (::hx::IsEq( s->s->shader->data->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 249)				return s->s;
            			}
HXLINE( 250)			s = s->next;
            		}
HXLINE( 252)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getShaderByName,return )

 ::hxsl::_ShaderList::ShaderIterator Pass_obj::getShaders(){
            	HX_GC_STACKFRAME(&_hx_pos_bfc369b9d2687492_256_getShaders)
HXDLIN( 256)		return  ::hxsl::_ShaderList::ShaderIterator_obj::__alloc( HX_CTX ,this->shaders,this->parentShaders);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pass_obj,getShaders,return )

 ::hxsl::ShaderList Pass_obj::getShadersRec(){
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_259_getShadersRec)
HXLINE( 260)		bool _hx_tmp;
HXDLIN( 260)		if (::hx::IsNotNull( this->parentPass )) {
HXLINE( 260)			_hx_tmp = ::hx::IsInstanceEq( this->parentShaders,this->parentPass->shaders );
            		}
            		else {
HXLINE( 260)			_hx_tmp = true;
            		}
HXDLIN( 260)		if (_hx_tmp) {
HXLINE( 261)			return this->shaders;
            		}
HXLINE( 263)		 ::hxsl::ShaderList s = this->shaders;
HXDLIN( 263)		 ::hxsl::ShaderList prev = null();
HXLINE( 264)		while(true){
HXLINE( 264)			bool _hx_tmp;
HXDLIN( 264)			if (::hx::IsNotNull( s )) {
HXLINE( 264)				_hx_tmp = ::hx::IsInstanceNotEq( s,this->parentShaders );
            			}
            			else {
HXLINE( 264)				_hx_tmp = false;
            			}
HXDLIN( 264)			if (!(_hx_tmp)) {
HXLINE( 264)				goto _hx_goto_20;
            			}
HXLINE( 265)			prev = s;
HXLINE( 266)			s = s->next;
            		}
            		_hx_goto_20:;
HXLINE( 268)		this->parentShaders = this->parentPass->shaders;
HXLINE( 269)		if (::hx::IsNull( prev )) {
HXLINE( 270)			this->shaders = this->parentShaders;
            		}
            		else {
HXLINE( 272)			prev->next = this->parentShaders;
            		}
HXLINE( 273)		return this->shaders;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pass_obj,getShadersRec,return )

 ::h3d::mat::Pass Pass_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_bfc369b9d2687492_276_clone)
HXLINE( 277)		::String p = this->name;
HXDLIN( 277)		 ::h3d::mat::Pass p1 =  ::h3d::mat::Pass_obj::__alloc( HX_CTX ,p,this->shaders->clone(),null());
HXLINE( 278)		p1->bits = this->bits;
HXLINE( 279)		p1->set_enableLights(this->enableLights);
HXLINE( 280)		if (::hx::IsNotNull( this->stencil )) {
HXLINE( 280)			p1->stencil = this->stencil->clone();
            		}
HXLINE( 281)		return p1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pass_obj,clone,return )

::String Pass_obj::getDebugShaderCode( ::h3d::scene::Scene scene,::hx::Null< bool >  __o_toHxsl){
            		bool toHxsl = __o_toHxsl.Default(true);
            	HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_285_getDebugShaderCode)
HXLINE( 286)		 ::hxsl::RuntimeShader shader = scene->renderer->debugCompileShader(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 287)		if (toHxsl) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,bool,varId) HXARGC(1)
            			::String _hx_run( ::Dynamic s){
            				HX_STACKFRAME(&_hx_pos_bfc369b9d2687492_288_getDebugShaderCode)
HXLINE( 288)				return ::hxsl::Printer_obj::shaderToString(s,varId);
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 288)			bool varId = true;
HXDLIN( 288)			 ::Dynamic toString =  ::Dynamic(new _hx_Closure_0(varId));
HXLINE( 289)			::String _hx_tmp = ((HX_("// vertex:\n",f4,81,2f,bc) + toString(shader->vertex->data)) + HX_("\n\nfragment:\n",20,9f,03,94));
HXDLIN( 289)			return (_hx_tmp + toString(shader->fragment->data));
            		}
            		else {
HXLINE( 291)			return ::h3d::Engine_obj::CURRENT->driver->getNativeShaderCode(shader);
            		}
HXLINE( 287)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Pass_obj,getDebugShaderCode,return )

bool Pass_obj::set_enableLights(bool v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_enableLights)
HXDLIN(  87)		int _hx_tmp;
HXDLIN(  87)		if (v) {
HXDLIN(  87)			_hx_tmp = 1;
            		}
            		else {
HXDLIN(  87)			_hx_tmp = 0;
            		}
HXDLIN(  87)		this->flags = ((this->flags & -2) | _hx_tmp);
HXDLIN(  87)		return (this->enableLights = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_enableLights,return )

bool Pass_obj::set_dynamicParameters(bool v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_dynamicParameters)
HXLINE(  59)		int _hx_tmp;
HXDLIN(  59)		if (v) {
HXLINE(  59)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  59)			_hx_tmp = 0;
            		}
HXLINE(  87)		this->flags = ((this->flags & -3) | (_hx_tmp << 1));
HXDLIN(  87)		return (this->dynamicParameters = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_dynamicParameters,return )

bool Pass_obj::set_isStatic(bool v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_isStatic)
HXLINE(  59)		int _hx_tmp;
HXDLIN(  59)		if (v) {
HXLINE(  59)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  59)			_hx_tmp = 0;
            		}
HXLINE(  87)		this->flags = ((this->flags & -5) | (_hx_tmp << 2));
HXDLIN(  87)		return (this->isStatic = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_isStatic,return )

bool Pass_obj::set_batchMode(bool v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_batchMode)
HXLINE(  59)		int _hx_tmp;
HXDLIN(  59)		if (v) {
HXLINE(  59)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  59)			_hx_tmp = 0;
            		}
HXLINE(  87)		this->flags = ((this->flags & -9) | (_hx_tmp << 3));
HXDLIN(  87)		return (this->batchMode = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_batchMode,return )

 ::h3d::mat::Face Pass_obj::set_culling( ::h3d::mat::Face v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_culling)
HXDLIN(  87)		int _hx_tmp = (this->bits & -4);
HXDLIN(  87)		this->bits = (_hx_tmp | _hx_getEnumValueIndex(v));
HXDLIN(  87)		return (this->culling = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_culling,return )

bool Pass_obj::set_depthWrite(bool v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_depthWrite)
HXLINE(  59)		int _hx_tmp;
HXDLIN(  59)		if (v) {
HXLINE(  59)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  59)			_hx_tmp = 0;
            		}
HXLINE(  87)		this->bits = ((this->bits & -5) | (_hx_tmp << 2));
HXDLIN(  87)		return (this->depthWrite = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_depthWrite,return )

 ::h3d::mat::Compare Pass_obj::set_depthTest( ::h3d::mat::Compare v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_depthTest)
HXDLIN(  87)		int _hx_tmp = (this->bits & -57);
HXDLIN(  87)		this->bits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 3));
HXDLIN(  87)		return (this->depthTest = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_depthTest,return )

 ::h3d::mat::Blend Pass_obj::set_blendSrc( ::h3d::mat::Blend v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_blendSrc)
HXDLIN(  87)		int _hx_tmp = (this->bits & -961);
HXDLIN(  87)		this->bits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 6));
HXDLIN(  87)		return (this->blendSrc = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_blendSrc,return )

 ::h3d::mat::Blend Pass_obj::set_blendDst( ::h3d::mat::Blend v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_blendDst)
HXDLIN(  87)		int _hx_tmp = (this->bits & -15361);
HXDLIN(  87)		this->bits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 10));
HXDLIN(  87)		return (this->blendDst = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_blendDst,return )

 ::h3d::mat::Blend Pass_obj::set_blendAlphaSrc( ::h3d::mat::Blend v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_blendAlphaSrc)
HXDLIN(  87)		int _hx_tmp = (this->bits & -245761);
HXDLIN(  87)		this->bits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 14));
HXDLIN(  87)		return (this->blendAlphaSrc = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_blendAlphaSrc,return )

 ::h3d::mat::Blend Pass_obj::set_blendAlphaDst( ::h3d::mat::Blend v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_blendAlphaDst)
HXDLIN(  87)		int _hx_tmp = (this->bits & -3932161);
HXDLIN(  87)		this->bits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 18));
HXDLIN(  87)		return (this->blendAlphaDst = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_blendAlphaDst,return )

 ::h3d::mat::Operation Pass_obj::set_blendOp( ::h3d::mat::Operation v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_blendOp)
HXDLIN(  87)		int _hx_tmp = (this->bits & -29360129);
HXDLIN(  87)		this->bits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 22));
HXDLIN(  87)		return (this->blendOp = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_blendOp,return )

 ::h3d::mat::Operation Pass_obj::set_blendAlphaOp( ::h3d::mat::Operation v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_blendAlphaOp)
HXDLIN(  87)		int _hx_tmp = (this->bits & -234881025);
HXDLIN(  87)		this->bits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 25));
HXDLIN(  87)		return (this->blendAlphaOp = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_blendAlphaOp,return )

bool Pass_obj::set_wireframe(bool v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_wireframe)
HXLINE(  59)		int _hx_tmp;
HXDLIN(  59)		if (v) {
HXLINE(  59)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  59)			_hx_tmp = 0;
            		}
HXLINE(  87)		this->bits = ((this->bits & -268435457) | (_hx_tmp << 28));
HXDLIN(  87)		return (this->wireframe = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_wireframe,return )

bool Pass_obj::set_reserved(bool v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_87_set_reserved)
HXLINE(  59)		int _hx_tmp;
HXDLIN(  59)		if (v) {
HXLINE(  59)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  59)			_hx_tmp = 0;
            		}
HXLINE(  87)		this->bits = ((this->bits & -536870913) | (_hx_tmp << 29));
HXDLIN(  87)		return (this->reserved = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,set_reserved,return )

void Pass_obj::loadFlags(int bits){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_140_loadFlags)
HXDLIN( 140)		this->flags = bits;
HXDLIN( 140)		{
HXLINE(  93)			this->set_enableLights(((this->flags & 1) != 0));
HXDLIN(  93)			this->set_dynamicParameters((((this->flags >> 1) & 1) != 0));
HXDLIN(  93)			this->set_isStatic((((this->flags >> 2) & 1) != 0));
HXDLIN(  93)			this->set_batchMode((((this->flags >> 3) & 1) != 0));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,loadFlags,(void))

void Pass_obj::loadBits(int bits){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_140_loadBits)
HXDLIN( 140)		this->bits = bits;
HXDLIN( 140)		{
HXLINE(  93)			this->set_culling(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::Face >(),(this->bits & 3),null()));
HXDLIN(  93)			this->set_depthWrite((((this->bits >> 2) & 1) != 0));
HXDLIN(  93)			this->set_depthTest(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::Compare >(),((this->bits >> 3) & 7),null()));
HXDLIN(  93)			this->set_blendSrc(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::Blend >(),((this->bits >> 6) & 15),null()));
HXDLIN(  93)			this->set_blendDst(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::Blend >(),((this->bits >> 10) & 15),null()));
HXDLIN(  93)			this->set_blendAlphaSrc(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::Blend >(),((this->bits >> 14) & 15),null()));
HXDLIN(  93)			this->set_blendAlphaDst(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::Blend >(),((this->bits >> 18) & 15),null()));
HXDLIN(  93)			this->set_blendOp(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::Operation >(),((this->bits >> 22) & 7),null()));
HXDLIN(  93)			this->set_blendAlphaOp(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::Operation >(),((this->bits >> 25) & 7),null()));
HXDLIN(  93)			this->set_wireframe((((this->bits >> 28) & 1) != 0));
HXDLIN(  93)			this->set_reserved((((this->bits >> 29) & 1) != 0));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,loadBits,(void))

int Pass_obj::getEnableLights(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getEnableLights)
HXDLIN( 101)		return (v & 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getEnableLights,return )

int Pass_obj::enableLights_bits;

int Pass_obj::enableLights_offset;

int Pass_obj::enableLights_mask;

int Pass_obj::getDynamicParameters(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getDynamicParameters)
HXDLIN( 101)		return ((v >> 1) & 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getDynamicParameters,return )

int Pass_obj::dynamicParameters_bits;

int Pass_obj::dynamicParameters_offset;

int Pass_obj::dynamicParameters_mask;

int Pass_obj::getIsStatic(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getIsStatic)
HXDLIN( 101)		return ((v >> 2) & 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getIsStatic,return )

int Pass_obj::isStatic_bits;

int Pass_obj::isStatic_offset;

int Pass_obj::isStatic_mask;

int Pass_obj::getBatchMode(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getBatchMode)
HXDLIN( 101)		return ((v >> 3) & 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getBatchMode,return )

int Pass_obj::batchMode_bits;

int Pass_obj::batchMode_offset;

int Pass_obj::batchMode_mask;

int Pass_obj::getCulling(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getCulling)
HXDLIN( 101)		return (v & 3);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getCulling,return )

int Pass_obj::culling_bits;

int Pass_obj::culling_offset;

int Pass_obj::culling_mask;

int Pass_obj::getDepthWrite(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getDepthWrite)
HXDLIN( 101)		return ((v >> 2) & 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getDepthWrite,return )

int Pass_obj::depthWrite_bits;

int Pass_obj::depthWrite_offset;

int Pass_obj::depthWrite_mask;

int Pass_obj::getDepthTest(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getDepthTest)
HXDLIN( 101)		return ((v >> 3) & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getDepthTest,return )

int Pass_obj::depthTest_bits;

int Pass_obj::depthTest_offset;

int Pass_obj::depthTest_mask;

int Pass_obj::getBlendSrc(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getBlendSrc)
HXDLIN( 101)		return ((v >> 6) & 15);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getBlendSrc,return )

int Pass_obj::blendSrc_bits;

int Pass_obj::blendSrc_offset;

int Pass_obj::blendSrc_mask;

int Pass_obj::getBlendDst(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getBlendDst)
HXDLIN( 101)		return ((v >> 10) & 15);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getBlendDst,return )

int Pass_obj::blendDst_bits;

int Pass_obj::blendDst_offset;

int Pass_obj::blendDst_mask;

int Pass_obj::getBlendAlphaSrc(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getBlendAlphaSrc)
HXDLIN( 101)		return ((v >> 14) & 15);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getBlendAlphaSrc,return )

int Pass_obj::blendAlphaSrc_bits;

int Pass_obj::blendAlphaSrc_offset;

int Pass_obj::blendAlphaSrc_mask;

int Pass_obj::getBlendAlphaDst(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getBlendAlphaDst)
HXDLIN( 101)		return ((v >> 18) & 15);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getBlendAlphaDst,return )

int Pass_obj::blendAlphaDst_bits;

int Pass_obj::blendAlphaDst_offset;

int Pass_obj::blendAlphaDst_mask;

int Pass_obj::getBlendOp(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getBlendOp)
HXDLIN( 101)		return ((v >> 22) & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getBlendOp,return )

int Pass_obj::blendOp_bits;

int Pass_obj::blendOp_offset;

int Pass_obj::blendOp_mask;

int Pass_obj::getBlendAlphaOp(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getBlendAlphaOp)
HXDLIN( 101)		return ((v >> 25) & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getBlendAlphaOp,return )

int Pass_obj::blendAlphaOp_bits;

int Pass_obj::blendAlphaOp_offset;

int Pass_obj::blendAlphaOp_mask;

int Pass_obj::getWireframe(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getWireframe)
HXDLIN( 101)		return ((v >> 28) & 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getWireframe,return )

int Pass_obj::wireframe_bits;

int Pass_obj::wireframe_offset;

int Pass_obj::wireframe_mask;

int Pass_obj::getReserved(int v){
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_101_getReserved)
HXDLIN( 101)		return ((v >> 29) & 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pass_obj,getReserved,return )

int Pass_obj::reserved_bits;

int Pass_obj::reserved_offset;

int Pass_obj::reserved_mask;


::hx::ObjectPtr< Pass_obj > Pass_obj::__new(::String name, ::hxsl::ShaderList shaders, ::h3d::mat::Pass parent) {
	::hx::ObjectPtr< Pass_obj > __this = new Pass_obj();
	__this->__construct(name,shaders,parent);
	return __this;
}

::hx::ObjectPtr< Pass_obj > Pass_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::hxsl::ShaderList shaders, ::h3d::mat::Pass parent) {
	Pass_obj *__this = (Pass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pass_obj), true, "h3d.mat.Pass"));
	*(void **)__this = Pass_obj::_hx_vtable;
	__this->__construct(name,shaders,parent);
	return __this;
}

Pass_obj::Pass_obj()
{
}

void Pass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pass);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(passId,"passId");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_MEMBER_NAME(parentPass,"parentPass");
	HX_MARK_MEMBER_NAME(parentShaders,"parentShaders");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(nextPass,"nextPass");
	HX_MARK_MEMBER_NAME(enableLights,"enableLights");
	HX_MARK_MEMBER_NAME(dynamicParameters,"dynamicParameters");
	HX_MARK_MEMBER_NAME(isStatic,"isStatic");
	HX_MARK_MEMBER_NAME(batchMode,"batchMode");
	HX_MARK_MEMBER_NAME(culling,"culling");
	HX_MARK_MEMBER_NAME(depthWrite,"depthWrite");
	HX_MARK_MEMBER_NAME(depthTest,"depthTest");
	HX_MARK_MEMBER_NAME(blendSrc,"blendSrc");
	HX_MARK_MEMBER_NAME(blendDst,"blendDst");
	HX_MARK_MEMBER_NAME(blendAlphaSrc,"blendAlphaSrc");
	HX_MARK_MEMBER_NAME(blendAlphaDst,"blendAlphaDst");
	HX_MARK_MEMBER_NAME(blendOp,"blendOp");
	HX_MARK_MEMBER_NAME(blendAlphaOp,"blendAlphaOp");
	HX_MARK_MEMBER_NAME(wireframe,"wireframe");
	HX_MARK_MEMBER_NAME(colorMask,"colorMask");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(stencil,"stencil");
	HX_MARK_MEMBER_NAME(reserved,"reserved");
	HX_MARK_END_CLASS();
}

void Pass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(passId,"passId");
	HX_VISIT_MEMBER_NAME(bits,"bits");
	HX_VISIT_MEMBER_NAME(parentPass,"parentPass");
	HX_VISIT_MEMBER_NAME(parentShaders,"parentShaders");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(nextPass,"nextPass");
	HX_VISIT_MEMBER_NAME(enableLights,"enableLights");
	HX_VISIT_MEMBER_NAME(dynamicParameters,"dynamicParameters");
	HX_VISIT_MEMBER_NAME(isStatic,"isStatic");
	HX_VISIT_MEMBER_NAME(batchMode,"batchMode");
	HX_VISIT_MEMBER_NAME(culling,"culling");
	HX_VISIT_MEMBER_NAME(depthWrite,"depthWrite");
	HX_VISIT_MEMBER_NAME(depthTest,"depthTest");
	HX_VISIT_MEMBER_NAME(blendSrc,"blendSrc");
	HX_VISIT_MEMBER_NAME(blendDst,"blendDst");
	HX_VISIT_MEMBER_NAME(blendAlphaSrc,"blendAlphaSrc");
	HX_VISIT_MEMBER_NAME(blendAlphaDst,"blendAlphaDst");
	HX_VISIT_MEMBER_NAME(blendOp,"blendOp");
	HX_VISIT_MEMBER_NAME(blendAlphaOp,"blendAlphaOp");
	HX_VISIT_MEMBER_NAME(wireframe,"wireframe");
	HX_VISIT_MEMBER_NAME(colorMask,"colorMask");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(stencil,"stencil");
	HX_VISIT_MEMBER_NAME(reserved,"reserved");
}

::hx::Val Pass_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"bits") ) { return ::hx::Val( bits ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		if (HX_FIELD_EQ(inName,"layer") ) { return ::hx::Val( layer ); }
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend_dyn() ); }
		if (HX_FIELD_EQ(inName,"depth") ) { return ::hx::Val( depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"passId") ) { return ::hx::Val( passId ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return ::hx::Val( shaders ); }
		if (HX_FIELD_EQ(inName,"culling") ) { return ::hx::Val( culling ); }
		if (HX_FIELD_EQ(inName,"blendOp") ) { return ::hx::Val( blendOp ); }
		if (HX_FIELD_EQ(inName,"stencil") ) { return ::hx::Val( stencil ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextPass") ) { return ::hx::Val( nextPass ); }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return ::hx::Val( isStatic ); }
		if (HX_FIELD_EQ(inName,"blendSrc") ) { return ::hx::Val( blendSrc ); }
		if (HX_FIELD_EQ(inName,"blendDst") ) { return ::hx::Val( blendDst ); }
		if (HX_FIELD_EQ(inName,"reserved") ) { return ::hx::Val( reserved ); }
		if (HX_FIELD_EQ(inName,"loadBits") ) { return ::hx::Val( loadBits_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"batchMode") ) { return ::hx::Val( batchMode ); }
		if (HX_FIELD_EQ(inName,"depthTest") ) { return ::hx::Val( depthTest ); }
		if (HX_FIELD_EQ(inName,"wireframe") ) { return ::hx::Val( wireframe ); }
		if (HX_FIELD_EQ(inName,"colorMask") ) { return ::hx::Val( colorMask ); }
		if (HX_FIELD_EQ(inName,"addShader") ) { return ::hx::Val( addShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"getShader") ) { return ::hx::Val( getShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadFlags") ) { return ::hx::Val( loadFlags_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentPass") ) { return ::hx::Val( parentPass ); }
		if (HX_FIELD_EQ(inName,"depthWrite") ) { return ::hx::Val( depthWrite ); }
		if (HX_FIELD_EQ(inName,"getShaders") ) { return ::hx::Val( getShaders_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPassName") ) { return ::hx::Val( setPassName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_culling") ) { return ::hx::Val( set_culling_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blendOp") ) { return ::hx::Val( set_blendOp_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"enableLights") ) { return ::hx::Val( enableLights ); }
		if (HX_FIELD_EQ(inName,"blendAlphaOp") ) { return ::hx::Val( blendAlphaOp ); }
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return ::hx::Val( setBlendMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColorMask") ) { return ::hx::Val( setColorMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeShader") ) { return ::hx::Val( removeShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_isStatic") ) { return ::hx::Val( set_isStatic_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blendSrc") ) { return ::hx::Val( set_blendSrc_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blendDst") ) { return ::hx::Val( set_blendDst_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_reserved") ) { return ::hx::Val( set_reserved_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parentShaders") ) { return ::hx::Val( parentShaders ); }
		if (HX_FIELD_EQ(inName,"blendAlphaSrc") ) { return ::hx::Val( blendAlphaSrc ); }
		if (HX_FIELD_EQ(inName,"blendAlphaDst") ) { return ::hx::Val( blendAlphaDst ); }
		if (HX_FIELD_EQ(inName,"getShadersRec") ) { return ::hx::Val( getShadersRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_batchMode") ) { return ::hx::Val( set_batchMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depthTest") ) { return ::hx::Val( set_depthTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wireframe") ) { return ::hx::Val( set_wireframe_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getShaderIndex") ) { return ::hx::Val( getShaderIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depthWrite") ) { return ::hx::Val( set_depthWrite_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setColorChannel") ) { return ::hx::Val( setColorChannel_dyn() ); }
		if (HX_FIELD_EQ(inName,"getShaderByName") ) { return ::hx::Val( getShaderByName_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addShaderAtIndex") ) { return ::hx::Val( addShaderAtIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enableLights") ) { return ::hx::Val( set_enableLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blendAlphaOp") ) { return ::hx::Val( set_blendAlphaOp_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dynamicParameters") ) { return ::hx::Val( dynamicParameters ); }
		if (HX_FIELD_EQ(inName,"set_blendAlphaSrc") ) { return ::hx::Val( set_blendAlphaSrc_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blendAlphaDst") ) { return ::hx::Val( set_blendAlphaDst_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getDebugShaderCode") ) { return ::hx::Val( getDebugShaderCode_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"set_dynamicParameters") ) { return ::hx::Val( set_dynamicParameters_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Pass_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getCulling") ) { outValue = getCulling_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBlendOp") ) { outValue = getBlendOp_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getIsStatic") ) { outValue = getIsStatic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBlendSrc") ) { outValue = getBlendSrc_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBlendDst") ) { outValue = getBlendDst_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getReserved") ) { outValue = getReserved_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBatchMode") ) { outValue = getBatchMode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getDepthTest") ) { outValue = getDepthTest_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getWireframe") ) { outValue = getWireframe_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDepthWrite") ) { outValue = getDepthWrite_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getEnableLights") ) { outValue = getEnableLights_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBlendAlphaOp") ) { outValue = getBlendAlphaOp_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getBlendAlphaSrc") ) { outValue = getBlendAlphaSrc_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBlendAlphaDst") ) { outValue = getBlendAlphaDst_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getDynamicParameters") ) { outValue = getDynamicParameters_dyn(); return true; }
	}
	return false;
}

::hx::Val Pass_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"passId") ) { passId=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"culling") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_culling(inValue.Cast<  ::h3d::mat::Face >()) );culling=inValue.Cast<  ::h3d::mat::Face >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendOp") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blendOp(inValue.Cast<  ::h3d::mat::Operation >()) );blendOp=inValue.Cast<  ::h3d::mat::Operation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencil") ) { stencil=inValue.Cast<  ::h3d::mat::Stencil >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextPass") ) { nextPass=inValue.Cast<  ::h3d::mat::Pass >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isStatic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isStatic(inValue.Cast< bool >()) );isStatic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendSrc") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blendSrc(inValue.Cast<  ::h3d::mat::Blend >()) );blendSrc=inValue.Cast<  ::h3d::mat::Blend >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendDst") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blendDst(inValue.Cast<  ::h3d::mat::Blend >()) );blendDst=inValue.Cast<  ::h3d::mat::Blend >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reserved") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_reserved(inValue.Cast< bool >()) );reserved=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"batchMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_batchMode(inValue.Cast< bool >()) );batchMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depthTest") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depthTest(inValue.Cast<  ::h3d::mat::Compare >()) );depthTest=inValue.Cast<  ::h3d::mat::Compare >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wireframe") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wireframe(inValue.Cast< bool >()) );wireframe=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorMask") ) { colorMask=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentPass") ) { parentPass=inValue.Cast<  ::h3d::mat::Pass >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depthWrite") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depthWrite(inValue.Cast< bool >()) );depthWrite=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"enableLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enableLights(inValue.Cast< bool >()) );enableLights=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendAlphaOp") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blendAlphaOp(inValue.Cast<  ::h3d::mat::Operation >()) );blendAlphaOp=inValue.Cast<  ::h3d::mat::Operation >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parentShaders") ) { parentShaders=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendAlphaSrc") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blendAlphaSrc(inValue.Cast<  ::h3d::mat::Blend >()) );blendAlphaSrc=inValue.Cast<  ::h3d::mat::Blend >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendAlphaDst") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blendAlphaDst(inValue.Cast<  ::h3d::mat::Blend >()) );blendAlphaDst=inValue.Cast<  ::h3d::mat::Blend >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dynamicParameters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dynamicParameters(inValue.Cast< bool >()) );dynamicParameters=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("flags",47,2b,8c,02));
	outFields->push(HX_("passId",0c,bb,31,ee));
	outFields->push(HX_("bits",06,fb,16,41));
	outFields->push(HX_("parentPass",1b,f3,63,e9));
	outFields->push(HX_("parentShaders",a4,fd,9a,69));
	outFields->push(HX_("shaders",ae,81,86,5f));
	outFields->push(HX_("nextPass",64,8b,1e,f6));
	outFields->push(HX_("enableLights",c0,91,90,92));
	outFields->push(HX_("dynamicParameters",09,57,79,dd));
	outFields->push(HX_("isStatic",38,78,65,5e));
	outFields->push(HX_("batchMode",3d,4c,7c,ee));
	outFields->push(HX_("culling",70,e2,87,53));
	outFields->push(HX_("depthWrite",dc,60,c5,2c));
	outFields->push(HX_("depthTest",f5,22,7d,a3));
	outFields->push(HX_("blendSrc",13,bf,d5,6a));
	outFields->push(HX_("blendDst",34,5e,ca,6a));
	outFields->push(HX_("blendAlphaSrc",97,03,5e,49));
	outFields->push(HX_("blendAlphaDst",b8,a2,52,49));
	outFields->push(HX_("blendOp",d2,a3,3c,8a));
	outFields->push(HX_("blendAlphaOp",ce,5b,55,e1));
	outFields->push(HX_("wireframe",c8,69,06,71));
	outFields->push(HX_("colorMask",ef,cb,c3,23));
	outFields->push(HX_("layer",d1,81,c0,6f));
	outFields->push(HX_("stencil",fc,bd,03,80));
	outFields->push(HX_("reserved",a8,f6,a5,4e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Pass_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Pass_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(Pass_obj,flags),HX_("flags",47,2b,8c,02)},
	{::hx::fsInt,(int)offsetof(Pass_obj,passId),HX_("passId",0c,bb,31,ee)},
	{::hx::fsInt,(int)offsetof(Pass_obj,bits),HX_("bits",06,fb,16,41)},
	{::hx::fsObject /*  ::h3d::mat::Pass */ ,(int)offsetof(Pass_obj,parentPass),HX_("parentPass",1b,f3,63,e9)},
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(Pass_obj,parentShaders),HX_("parentShaders",a4,fd,9a,69)},
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(Pass_obj,shaders),HX_("shaders",ae,81,86,5f)},
	{::hx::fsObject /*  ::h3d::mat::Pass */ ,(int)offsetof(Pass_obj,nextPass),HX_("nextPass",64,8b,1e,f6)},
	{::hx::fsBool,(int)offsetof(Pass_obj,enableLights),HX_("enableLights",c0,91,90,92)},
	{::hx::fsBool,(int)offsetof(Pass_obj,dynamicParameters),HX_("dynamicParameters",09,57,79,dd)},
	{::hx::fsBool,(int)offsetof(Pass_obj,isStatic),HX_("isStatic",38,78,65,5e)},
	{::hx::fsBool,(int)offsetof(Pass_obj,batchMode),HX_("batchMode",3d,4c,7c,ee)},
	{::hx::fsObject /*  ::h3d::mat::Face */ ,(int)offsetof(Pass_obj,culling),HX_("culling",70,e2,87,53)},
	{::hx::fsBool,(int)offsetof(Pass_obj,depthWrite),HX_("depthWrite",dc,60,c5,2c)},
	{::hx::fsObject /*  ::h3d::mat::Compare */ ,(int)offsetof(Pass_obj,depthTest),HX_("depthTest",f5,22,7d,a3)},
	{::hx::fsObject /*  ::h3d::mat::Blend */ ,(int)offsetof(Pass_obj,blendSrc),HX_("blendSrc",13,bf,d5,6a)},
	{::hx::fsObject /*  ::h3d::mat::Blend */ ,(int)offsetof(Pass_obj,blendDst),HX_("blendDst",34,5e,ca,6a)},
	{::hx::fsObject /*  ::h3d::mat::Blend */ ,(int)offsetof(Pass_obj,blendAlphaSrc),HX_("blendAlphaSrc",97,03,5e,49)},
	{::hx::fsObject /*  ::h3d::mat::Blend */ ,(int)offsetof(Pass_obj,blendAlphaDst),HX_("blendAlphaDst",b8,a2,52,49)},
	{::hx::fsObject /*  ::h3d::mat::Operation */ ,(int)offsetof(Pass_obj,blendOp),HX_("blendOp",d2,a3,3c,8a)},
	{::hx::fsObject /*  ::h3d::mat::Operation */ ,(int)offsetof(Pass_obj,blendAlphaOp),HX_("blendAlphaOp",ce,5b,55,e1)},
	{::hx::fsBool,(int)offsetof(Pass_obj,wireframe),HX_("wireframe",c8,69,06,71)},
	{::hx::fsInt,(int)offsetof(Pass_obj,colorMask),HX_("colorMask",ef,cb,c3,23)},
	{::hx::fsInt,(int)offsetof(Pass_obj,layer),HX_("layer",d1,81,c0,6f)},
	{::hx::fsObject /*  ::h3d::mat::Stencil */ ,(int)offsetof(Pass_obj,stencil),HX_("stencil",fc,bd,03,80)},
	{::hx::fsBool,(int)offsetof(Pass_obj,reserved),HX_("reserved",a8,f6,a5,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Pass_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Pass_obj::enableLights_bits,HX_("enableLights_bits",25,2d,6f,9b)},
	{::hx::fsInt,(void *) &Pass_obj::enableLights_offset,HX_("enableLights_offset",72,cf,9f,26)},
	{::hx::fsInt,(void *) &Pass_obj::enableLights_mask,HX_("enableLights_mask",0b,73,ae,a2)},
	{::hx::fsInt,(void *) &Pass_obj::dynamicParameters_bits,HX_("dynamicParameters_bits",3c,9f,a9,45)},
	{::hx::fsInt,(void *) &Pass_obj::dynamicParameters_offset,HX_("dynamicParameters_offset",49,35,ec,a9)},
	{::hx::fsInt,(void *) &Pass_obj::dynamicParameters_mask,HX_("dynamicParameters_mask",22,e5,e8,4c)},
	{::hx::fsInt,(void *) &Pass_obj::isStatic_bits,HX_("isStatic_bits",ad,d3,eb,7e)},
	{::hx::fsInt,(void *) &Pass_obj::isStatic_offset,HX_("isStatic_offset",fa,27,79,5f)},
	{::hx::fsInt,(void *) &Pass_obj::isStatic_mask,HX_("isStatic_mask",93,19,2b,86)},
	{::hx::fsInt,(void *) &Pass_obj::batchMode_bits,HX_("batchMode_bits",88,4d,5d,87)},
	{::hx::fsInt,(void *) &Pass_obj::batchMode_offset,HX_("batchMode_offset",95,0e,a1,82)},
	{::hx::fsInt,(void *) &Pass_obj::batchMode_mask,HX_("batchMode_mask",6e,93,9c,8e)},
	{::hx::fsInt,(void *) &Pass_obj::culling_bits,HX_("culling_bits",75,5e,c5,e6)},
	{::hx::fsInt,(void *) &Pass_obj::culling_offset,HX_("culling_offset",c2,f4,e0,98)},
	{::hx::fsInt,(void *) &Pass_obj::culling_mask,HX_("culling_mask",5b,a4,04,ee)},
	{::hx::fsInt,(void *) &Pass_obj::depthWrite_bits,HX_("depthWrite_bits",89,18,6a,96)},
	{::hx::fsInt,(void *) &Pass_obj::depthWrite_offset,HX_("depthWrite_offset",d6,5b,b7,06)},
	{::hx::fsInt,(void *) &Pass_obj::depthWrite_mask,HX_("depthWrite_mask",6f,5e,a9,9d)},
	{::hx::fsInt,(void *) &Pass_obj::depthTest_bits,HX_("depthTest_bits",d0,1b,3f,a3)},
	{::hx::fsInt,(void *) &Pass_obj::depthTest_offset,HX_("depthTest_offset",dd,fe,48,b5)},
	{::hx::fsInt,(void *) &Pass_obj::depthTest_mask,HX_("depthTest_mask",b6,61,7e,aa)},
	{::hx::fsInt,(void *) &Pass_obj::blendSrc_bits,HX_("blendSrc_bits",f2,d2,e5,e7)},
	{::hx::fsInt,(void *) &Pass_obj::blendSrc_offset,HX_("blendSrc_offset",7f,42,65,7a)},
	{::hx::fsInt,(void *) &Pass_obj::blendSrc_mask,HX_("blendSrc_mask",d8,18,25,ef)},
	{::hx::fsInt,(void *) &Pass_obj::blendDst_bits,HX_("blendDst_bits",31,bc,97,83)},
	{::hx::fsInt,(void *) &Pass_obj::blendDst_offset,HX_("blendDst_offset",7e,39,53,d5)},
	{::hx::fsInt,(void *) &Pass_obj::blendDst_mask,HX_("blendDst_mask",17,02,d7,8a)},
	{::hx::fsInt,(void *) &Pass_obj::blendAlphaSrc_bits,HX_("blendAlphaSrc_bits",ee,af,02,68)},
	{::hx::fsInt,(void *) &Pass_obj::blendAlphaSrc_offset,HX_("blendAlphaSrc_offset",7b,56,30,e1)},
	{::hx::fsInt,(void *) &Pass_obj::blendAlphaSrc_mask,HX_("blendAlphaSrc_mask",d4,f5,41,6f)},
	{::hx::fsInt,(void *) &Pass_obj::blendAlphaDst_bits,HX_("blendAlphaDst_bits",2d,99,b4,03)},
	{::hx::fsInt,(void *) &Pass_obj::blendAlphaDst_offset,HX_("blendAlphaDst_offset",7a,4d,1e,3c)},
	{::hx::fsInt,(void *) &Pass_obj::blendAlphaDst_mask,HX_("blendAlphaDst_mask",13,df,f3,0a)},
	{::hx::fsInt,(void *) &Pass_obj::blendOp_bits,HX_("blendOp_bits",d3,59,2e,f3)},
	{::hx::fsInt,(void *) &Pass_obj::blendOp_offset,HX_("blendOp_offset",a0,03,06,4e)},
	{::hx::fsInt,(void *) &Pass_obj::blendOp_mask,HX_("blendOp_mask",b9,9f,6d,fa)},
	{::hx::fsInt,(void *) &Pass_obj::blendAlphaOp_bits,HX_("blendAlphaOp_bits",57,30,0d,f6)},
	{::hx::fsInt,(void *) &Pass_obj::blendAlphaOp_offset,HX_("blendAlphaOp_offset",24,83,2a,e7)},
	{::hx::fsInt,(void *) &Pass_obj::blendAlphaOp_mask,HX_("blendAlphaOp_mask",3d,76,4c,fd)},
	{::hx::fsInt,(void *) &Pass_obj::wireframe_bits,HX_("wireframe_bits",1d,38,a5,7d)},
	{::hx::fsInt,(void *) &Pass_obj::wireframe_offset,HX_("wireframe_offset",6a,88,a8,8a)},
	{::hx::fsInt,(void *) &Pass_obj::wireframe_mask,HX_("wireframe_mask",03,7e,e4,84)},
	{::hx::fsInt,(void *) &Pass_obj::reserved_bits,HX_("reserved_bits",3d,ff,1a,66)},
	{::hx::fsInt,(void *) &Pass_obj::reserved_offset,HX_("reserved_offset",8a,57,76,d1)},
	{::hx::fsInt,(void *) &Pass_obj::reserved_mask,HX_("reserved_mask",23,45,5a,6d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Pass_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("flags",47,2b,8c,02),
	HX_("passId",0c,bb,31,ee),
	HX_("bits",06,fb,16,41),
	HX_("parentPass",1b,f3,63,e9),
	HX_("parentShaders",a4,fd,9a,69),
	HX_("shaders",ae,81,86,5f),
	HX_("nextPass",64,8b,1e,f6),
	HX_("enableLights",c0,91,90,92),
	HX_("dynamicParameters",09,57,79,dd),
	HX_("isStatic",38,78,65,5e),
	HX_("batchMode",3d,4c,7c,ee),
	HX_("culling",70,e2,87,53),
	HX_("depthWrite",dc,60,c5,2c),
	HX_("depthTest",f5,22,7d,a3),
	HX_("blendSrc",13,bf,d5,6a),
	HX_("blendDst",34,5e,ca,6a),
	HX_("blendAlphaSrc",97,03,5e,49),
	HX_("blendAlphaDst",b8,a2,52,49),
	HX_("blendOp",d2,a3,3c,8a),
	HX_("blendAlphaOp",ce,5b,55,e1),
	HX_("wireframe",c8,69,06,71),
	HX_("colorMask",ef,cb,c3,23),
	HX_("layer",d1,81,c0,6f),
	HX_("stencil",fc,bd,03,80),
	HX_("reserved",a8,f6,a5,4e),
	HX_("load",26,9a,b7,47),
	HX_("setPassName",7e,89,0c,5e),
	HX_("blend",51,e8,f4,b4),
	HX_("setBlendMode",52,a4,87,30),
	HX_("depth",03,f1,29,d7),
	HX_("setColorMask",ed,8b,13,48),
	HX_("setColorChannel",62,cc,de,14),
	HX_("addShader",26,f4,44,d5),
	HX_("addShaderAtIndex",99,89,19,ef),
	HX_("getShaderIndex",b7,98,df,1c),
	HX_("removeShader",89,5a,4e,8c),
	HX_("getShader",5b,48,77,99),
	HX_("getShaderByName",7d,1e,21,a1),
	HX_("getShaders",b8,07,e8,ae),
	HX_("getShadersRec",78,2c,74,ac),
	HX_("clone",5d,13,63,48),
	HX_("getDebugShaderCode",2f,cf,2a,74),
	HX_("set_enableLights",bd,6b,71,ed),
	HX_("set_dynamicParameters",ec,27,30,b0),
	HX_("set_isStatic",b5,4f,78,28),
	HX_("set_batchMode",20,02,e6,f4),
	HX_("set_culling",93,49,ef,e3),
	HX_("set_depthWrite",99,d1,da,c2),
	HX_("set_depthTest",d8,d8,e6,a9),
	HX_("set_blendSrc",90,96,e8,34),
	HX_("set_blendDst",b1,35,dd,34),
	HX_("set_blendAlphaSrc",fa,e6,3b,73),
	HX_("set_blendAlphaDst",1b,86,30,73),
	HX_("set_blendOp",f5,0a,a4,1a),
	HX_("set_blendAlphaOp",cb,35,36,3c),
	HX_("set_wireframe",ab,1f,70,77),
	HX_("set_reserved",25,ce,b8,18),
	HX_("loadFlags",41,77,c3,1d),
	HX_("loadBits",4c,cc,b6,b1),
	::String(null()) };

static void Pass_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pass_obj::enableLights_bits,"enableLights_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::enableLights_offset,"enableLights_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::enableLights_mask,"enableLights_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::dynamicParameters_bits,"dynamicParameters_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::dynamicParameters_offset,"dynamicParameters_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::dynamicParameters_mask,"dynamicParameters_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::isStatic_bits,"isStatic_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::isStatic_offset,"isStatic_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::isStatic_mask,"isStatic_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::batchMode_bits,"batchMode_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::batchMode_offset,"batchMode_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::batchMode_mask,"batchMode_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::culling_bits,"culling_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::culling_offset,"culling_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::culling_mask,"culling_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::depthWrite_bits,"depthWrite_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::depthWrite_offset,"depthWrite_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::depthWrite_mask,"depthWrite_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::depthTest_bits,"depthTest_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::depthTest_offset,"depthTest_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::depthTest_mask,"depthTest_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::blendSrc_bits,"blendSrc_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::blendSrc_offset,"blendSrc_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::blendSrc_mask,"blendSrc_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::blendDst_bits,"blendDst_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::blendDst_offset,"blendDst_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::blendDst_mask,"blendDst_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::blendAlphaSrc_bits,"blendAlphaSrc_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::blendAlphaSrc_offset,"blendAlphaSrc_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::blendAlphaSrc_mask,"blendAlphaSrc_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::blendAlphaDst_bits,"blendAlphaDst_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::blendAlphaDst_offset,"blendAlphaDst_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::blendAlphaDst_mask,"blendAlphaDst_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::blendOp_bits,"blendOp_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::blendOp_offset,"blendOp_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::blendOp_mask,"blendOp_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::blendAlphaOp_bits,"blendAlphaOp_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::blendAlphaOp_offset,"blendAlphaOp_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::blendAlphaOp_mask,"blendAlphaOp_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::wireframe_bits,"wireframe_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::wireframe_offset,"wireframe_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::wireframe_mask,"wireframe_mask");
	HX_MARK_MEMBER_NAME(Pass_obj::reserved_bits,"reserved_bits");
	HX_MARK_MEMBER_NAME(Pass_obj::reserved_offset,"reserved_offset");
	HX_MARK_MEMBER_NAME(Pass_obj::reserved_mask,"reserved_mask");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Pass_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pass_obj::enableLights_bits,"enableLights_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::enableLights_offset,"enableLights_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::enableLights_mask,"enableLights_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::dynamicParameters_bits,"dynamicParameters_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::dynamicParameters_offset,"dynamicParameters_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::dynamicParameters_mask,"dynamicParameters_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::isStatic_bits,"isStatic_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::isStatic_offset,"isStatic_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::isStatic_mask,"isStatic_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::batchMode_bits,"batchMode_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::batchMode_offset,"batchMode_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::batchMode_mask,"batchMode_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::culling_bits,"culling_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::culling_offset,"culling_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::culling_mask,"culling_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::depthWrite_bits,"depthWrite_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::depthWrite_offset,"depthWrite_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::depthWrite_mask,"depthWrite_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::depthTest_bits,"depthTest_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::depthTest_offset,"depthTest_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::depthTest_mask,"depthTest_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendSrc_bits,"blendSrc_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendSrc_offset,"blendSrc_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendSrc_mask,"blendSrc_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendDst_bits,"blendDst_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendDst_offset,"blendDst_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendDst_mask,"blendDst_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendAlphaSrc_bits,"blendAlphaSrc_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendAlphaSrc_offset,"blendAlphaSrc_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendAlphaSrc_mask,"blendAlphaSrc_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendAlphaDst_bits,"blendAlphaDst_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendAlphaDst_offset,"blendAlphaDst_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendAlphaDst_mask,"blendAlphaDst_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendOp_bits,"blendOp_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendOp_offset,"blendOp_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendOp_mask,"blendOp_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendAlphaOp_bits,"blendAlphaOp_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendAlphaOp_offset,"blendAlphaOp_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::blendAlphaOp_mask,"blendAlphaOp_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::wireframe_bits,"wireframe_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::wireframe_offset,"wireframe_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::wireframe_mask,"wireframe_mask");
	HX_VISIT_MEMBER_NAME(Pass_obj::reserved_bits,"reserved_bits");
	HX_VISIT_MEMBER_NAME(Pass_obj::reserved_offset,"reserved_offset");
	HX_VISIT_MEMBER_NAME(Pass_obj::reserved_mask,"reserved_mask");
};

#endif

::hx::Class Pass_obj::__mClass;

static ::String Pass_obj_sStaticFields[] = {
	HX_("getEnableLights",76,e7,7a,b5),
	HX_("enableLights_bits",25,2d,6f,9b),
	HX_("enableLights_offset",72,cf,9f,26),
	HX_("enableLights_mask",0b,73,ae,a2),
	HX_("getDynamicParameters",93,8d,ee,04),
	HX_("dynamicParameters_bits",3c,9f,a9,45),
	HX_("dynamicParameters_offset",49,35,ec,a9),
	HX_("dynamicParameters_mask",22,e5,e8,4c),
	HX_("getIsStatic",ee,3a,59,84),
	HX_("isStatic_bits",ad,d3,eb,7e),
	HX_("isStatic_offset",fa,27,79,5f),
	HX_("isStatic_mask",93,19,2b,86),
	HX_("getBatchMode",c7,e8,d2,fd),
	HX_("batchMode_bits",88,4d,5d,87),
	HX_("batchMode_offset",95,0e,a1,82),
	HX_("batchMode_mask",6e,93,9c,8e),
	HX_("getCulling",7a,68,e9,a2),
	HX_("culling_bits",75,5e,c5,e6),
	HX_("culling_offset",c2,f4,e0,98),
	HX_("culling_mask",5b,a4,04,ee),
	HX_("getDepthWrite",12,bd,37,89),
	HX_("depthWrite_bits",89,18,6a,96),
	HX_("depthWrite_offset",d6,5b,b7,06),
	HX_("depthWrite_mask",6f,5e,a9,9d),
	HX_("getDepthTest",7f,bf,d3,b2),
	HX_("depthTest_bits",d0,1b,3f,a3),
	HX_("depthTest_offset",dd,fe,48,b5),
	HX_("depthTest_mask",b6,61,7e,aa),
	HX_("getBlendSrc",c9,81,c9,90),
	HX_("blendSrc_bits",f2,d2,e5,e7),
	HX_("blendSrc_offset",7f,42,65,7a),
	HX_("blendSrc_mask",d8,18,25,ef),
	HX_("getBlendDst",ea,20,be,90),
	HX_("blendDst_bits",31,bc,97,83),
	HX_("blendDst_offset",7e,39,53,d5),
	HX_("blendDst_mask",17,02,d7,8a),
	HX_("getBlendAlphaSrc",21,ad,7e,b3),
	HX_("blendAlphaSrc_bits",ee,af,02,68),
	HX_("blendAlphaSrc_offset",7b,56,30,e1),
	HX_("blendAlphaSrc_mask",d4,f5,41,6f),
	HX_("getBlendAlphaDst",42,4c,73,b3),
	HX_("blendAlphaDst_bits",2d,99,b4,03),
	HX_("blendAlphaDst_offset",7a,4d,1e,3c),
	HX_("blendAlphaDst_mask",13,df,f3,0a),
	HX_("getBlendOp",dc,29,9e,d9),
	HX_("blendOp_bits",d3,59,2e,f3),
	HX_("blendOp_offset",a0,03,06,4e),
	HX_("blendOp_mask",b9,9f,6d,fa),
	HX_("getBlendAlphaOp",84,b1,3f,04),
	HX_("blendAlphaOp_bits",57,30,0d,f6),
	HX_("blendAlphaOp_offset",24,83,2a,e7),
	HX_("blendAlphaOp_mask",3d,76,4c,fd),
	HX_("getWireframe",52,06,5d,80),
	HX_("wireframe_bits",1d,38,a5,7d),
	HX_("wireframe_offset",6a,88,a8,8a),
	HX_("wireframe_mask",03,7e,e4,84),
	HX_("getReserved",5e,b9,99,74),
	HX_("reserved_bits",3d,ff,1a,66),
	HX_("reserved_offset",8a,57,76,d1),
	HX_("reserved_mask",23,45,5a,6d),
	::String(null())
};

void Pass_obj::__register()
{
	Pass_obj _hx_dummy;
	Pass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.mat.Pass",54,c9,a7,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Pass_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Pass_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Pass_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Pass_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Pass_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Pass_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Pass_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		enableLights_bits = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		enableLights_offset = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		enableLights_mask = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		dynamicParameters_bits = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		dynamicParameters_offset = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		dynamicParameters_mask = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		isStatic_bits = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		isStatic_offset = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		isStatic_mask = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		batchMode_bits = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		batchMode_offset = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		batchMode_mask = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		culling_bits = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		culling_offset = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		culling_mask = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		depthWrite_bits = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		depthWrite_offset = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		depthWrite_mask = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		depthTest_bits = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		depthTest_offset = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		depthTest_mask = 56;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		blendSrc_bits = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		blendSrc_offset = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		blendSrc_mask = 960;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		blendDst_bits = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		blendDst_offset = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		blendDst_mask = 15360;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		blendAlphaSrc_bits = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		blendAlphaSrc_offset = 14;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		blendAlphaSrc_mask = 245760;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		blendAlphaDst_bits = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		blendAlphaDst_offset = 18;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		blendAlphaDst_mask = 3932160;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		blendOp_bits = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		blendOp_offset = 22;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		blendOp_mask = 29360128;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		blendAlphaOp_bits = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		blendAlphaOp_offset = 25;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		blendAlphaOp_mask = 234881024;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		wireframe_bits = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		wireframe_offset = 28;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		wireframe_mask = 268435456;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_108_boot)
HXDLIN( 108)		reserved_bits = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_114_boot)
HXDLIN( 114)		reserved_offset = 29;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22096ee855c19fc3_120_boot)
HXDLIN( 120)		reserved_mask = 536870912;
            	}
}

} // end namespace h3d
} // end namespace mat
