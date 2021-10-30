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
#ifndef INCLUDED_h3d_shader_DirShadow
#include <h3d/shader/DirShadow.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxsl_Channel
#include <hxsl/Channel.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5f9b01f1542be2ec_3_new,"h3d.shader.DirShadow","new",0x0e7e80ab,"h3d.shader.DirShadow.new","h3d/shader/DirShadow.hx",3,0xdeb89f45)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_enable,"h3d.shader.DirShadow","get_enable",0xc461dd61,"h3d.shader.DirShadow.get_enable","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_193_set_enable,"h3d.shader.DirShadow","set_enable",0xc7df7bd5,"h3d.shader.DirShadow.set_enable","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_USE_ESM,"h3d.shader.DirShadow","get_USE_ESM",0x8af42429,"h3d.shader.DirShadow.get_USE_ESM","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_193_set_USE_ESM,"h3d.shader.DirShadow","set_USE_ESM",0x95612b35,"h3d.shader.DirShadow.set_USE_ESM","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_shadowPower,"h3d.shader.DirShadow","get_shadowPower",0x691f9467,"h3d.shader.DirShadow.get_shadowPower","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_191_set_shadowPower,"h3d.shader.DirShadow","set_shadowPower",0x64eb1173,"h3d.shader.DirShadow.set_shadowPower","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_USE_PCF,"h3d.shader.DirShadow","get_USE_PCF",0x8afc6efd,"h3d.shader.DirShadow.get_USE_PCF","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_193_set_USE_PCF,"h3d.shader.DirShadow","set_USE_PCF",0x95697609,"h3d.shader.DirShadow.set_USE_PCF","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_pcfQuality,"h3d.shader.DirShadow","get_pcfQuality",0x9224a7ca,"h3d.shader.DirShadow.get_pcfQuality","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_193_set_pcfQuality,"h3d.shader.DirShadow","set_pcfQuality",0xb244903e,"h3d.shader.DirShadow.set_pcfQuality","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_pcfScale,"h3d.shader.DirShadow","get_pcfScale",0x092c08d5,"h3d.shader.DirShadow.get_pcfScale","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_191_set_pcfScale,"h3d.shader.DirShadow","set_pcfScale",0x1e252c49,"h3d.shader.DirShadow.set_pcfScale","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_shadowRes,"h3d.shader.DirShadow","get_shadowRes",0x8797e542,"h3d.shader.DirShadow.get_shadowRes","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_191_set_shadowRes,"h3d.shader.DirShadow","set_shadowRes",0xcc9dc74e,"h3d.shader.DirShadow.set_shadowRes","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_shadowMap,"h3d.shader.DirShadow","get_shadowMap",0x8794167e,"h3d.shader.DirShadow.get_shadowMap","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_193_set_shadowMap,"h3d.shader.DirShadow","set_shadowMap",0xcc99f88a,"h3d.shader.DirShadow.set_shadowMap","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_216_get_shadowMapChannel,"h3d.shader.DirShadow","get_shadowMapChannel",0x69b1fde5,"h3d.shader.DirShadow.get_shadowMapChannel","hxsl/Macros.hx",216,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_217_set_shadowMapChannel,"h3d.shader.DirShadow","set_shadowMapChannel",0x3669b559,"h3d.shader.DirShadow.set_shadowMapChannel","hxsl/Macros.hx",217,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_shadowProj,"h3d.shader.DirShadow","get_shadowProj",0x1c08217b,"h3d.shader.DirShadow.get_shadowProj","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_191_set_shadowProj,"h3d.shader.DirShadow","set_shadowProj",0x3c2809ef,"h3d.shader.DirShadow.set_shadowProj","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_shadowBias,"h3d.shader.DirShadow","get_shadowBias",0x12c04457,"h3d.shader.DirShadow.get_shadowBias","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_191_set_shadowBias,"h3d.shader.DirShadow","set_shadowBias",0x32e02ccb,"h3d.shader.DirShadow.set_shadowBias","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_poissonDiskLow,"h3d.shader.DirShadow","get_poissonDiskLow",0xbaccb4cc,"h3d.shader.DirShadow.get_poissonDiskLow","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_191_set_poissonDiskLow,"h3d.shader.DirShadow","set_poissonDiskLow",0x977be740,"h3d.shader.DirShadow.set_poissonDiskLow","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_poissonDiskHigh,"h3d.shader.DirShadow","get_poissonDiskHigh",0xb5a8082a,"h3d.shader.DirShadow.get_poissonDiskHigh","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_191_set_poissonDiskHigh,"h3d.shader.DirShadow","set_poissonDiskHigh",0xf244fb36,"h3d.shader.DirShadow.set_poissonDiskHigh","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_174_get_poissonDiskVeryHigh,"h3d.shader.DirShadow","get_poissonDiskVeryHigh",0xe7310000,"h3d.shader.DirShadow.get_poissonDiskVeryHigh","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_191_set_poissonDiskVeryHigh,"h3d.shader.DirShadow","set_poissonDiskVeryHigh",0xe992690c,"h3d.shader.DirShadow.set_poissonDiskVeryHigh","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f751bc878fe5d2_270_updateConstants,"h3d.shader.DirShadow","updateConstants",0xfecdbc11,"h3d.shader.DirShadow.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5f9b01f1542be2ec_5_getParamValue,"h3d.shader.DirShadow","getParamValue",0xcff4c7e5,"h3d.shader.DirShadow.getParamValue","h3d/shader/DirShadow.hx",5,0xdeb89f45)
HX_LOCAL_STACK_FRAME(_hx_pos_5f9b01f1542be2ec_5_getParamFloatValue,"h3d.shader.DirShadow","getParamFloatValue",0xabf5e741,"h3d.shader.DirShadow.getParamFloatValue","h3d/shader/DirShadow.hx",5,0xdeb89f45)
HX_LOCAL_STACK_FRAME(_hx_pos_5f9b01f1542be2ec_5_clone,"h3d.shader.DirShadow","clone",0x3ad2ac68,"h3d.shader.DirShadow.clone","h3d/shader/DirShadow.hx",5,0xdeb89f45)
HX_LOCAL_STACK_FRAME(_hx_pos_5f9b01f1542be2ec_5_boot,"h3d.shader.DirShadow","boot",0x984b1587,"h3d.shader.DirShadow.boot","h3d/shader/DirShadow.hx",5,0xdeb89f45)
namespace h3d{
namespace shader{

void DirShadow_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5f9b01f1542be2ec_3_new)
HXLINE(  72)		this->poissonDiskVeryHigh__ = ::Array_obj< ::Dynamic>::__new();
HXDLIN(  72)		this->poissonDiskHigh__ = ::Array_obj< ::Dynamic>::__new();
HXDLIN(  72)		this->poissonDiskLow__ = ::Array_obj< ::Dynamic>::__new();
HXLINE(  59)		this->shadowBias__ = ((Float)0);
HXLINE(  74)		this->shadowProj__ =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 214)		this->shadowMapChannel__ = ::hxsl::Channel_obj::Unknown_dyn();
HXLINE(  63)		this->shadowRes__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  59)		this->pcfScale__ = ((Float)0);
HXDLIN(  59)		this->pcfQuality__ = 0;
HXDLIN(  59)		this->shadowPower__ = ((Float)0);
HXLINE(  94)		super::__construct();
HXLINE(  95)		{
HXLINE(  95)			 ::h3d::Vector _v =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.942),((Float)-0.399),null(),null());
HXLINE(  96)			 ::h3d::Vector _v1 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.945),((Float)-0.768),null(),null());
HXLINE(  97)			 ::h3d::Vector _v2 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.094),((Float)-0.929),null(),null());
HXLINE(  95)			this->poissonDiskLow__ = ::Array_obj< ::Dynamic>::__new(4)->init(0,_v)->init(1,_v1)->init(2,_v2)->init(3, ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.344),((Float)0.293),null(),null()));
            		}
HXLINE( 100)		{
HXLINE( 100)			 ::h3d::Vector _v3 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.326),((Float)-0.406),null(),null());
HXLINE( 101)			 ::h3d::Vector _v4 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.840),((Float)-0.074),null(),null());
HXLINE( 102)			 ::h3d::Vector _v5 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.696),((Float)0.457),null(),null());
HXLINE( 103)			 ::h3d::Vector _v6 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.203),((Float)0.621),null(),null());
HXLINE( 104)			 ::h3d::Vector _v7 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.962),((Float)-0.195),null(),null());
HXLINE( 105)			 ::h3d::Vector _v8 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.473),((Float)-0.480),null(),null());
HXLINE( 106)			 ::h3d::Vector _v9 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.519),((Float)0.767),null(),null());
HXLINE( 107)			 ::h3d::Vector _v10 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.185),((Float)-0.893),null(),null());
HXLINE( 108)			 ::h3d::Vector _v11 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.507),((Float)0.064),null(),null());
HXLINE( 109)			 ::h3d::Vector _v12 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.896),((Float)0.412),null(),null());
HXLINE( 110)			 ::h3d::Vector _v13 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.322),((Float)-0.933),null(),null());
HXLINE( 100)			this->poissonDiskHigh__ = ::Array_obj< ::Dynamic>::__new(12)->init(0,_v3)->init(1,_v4)->init(2,_v5)->init(3,_v6)->init(4,_v7)->init(5,_v8)->init(6,_v9)->init(7,_v10)->init(8,_v11)->init(9,_v12)->init(10,_v13)->init(11, ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.792),((Float)-0.598),null(),null()));
            		}
HXLINE( 113)		{
HXLINE( 113)			 ::h3d::Vector _v14 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.613392),((Float)0.617481),null(),null());
HXLINE( 114)			 ::h3d::Vector _v15 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.170019),((Float)-0.040254),null(),null());
HXLINE( 115)			 ::h3d::Vector _v16 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.299417),((Float)0.791925),null(),null());
HXLINE( 116)			 ::h3d::Vector _v17 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.645680),((Float)0.493210),null(),null());
HXLINE( 117)			 ::h3d::Vector _v18 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.651784),((Float)0.717887),null(),null());
HXLINE( 118)			 ::h3d::Vector _v19 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.421003),((Float)0.027070),null(),null());
HXLINE( 119)			 ::h3d::Vector _v20 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.817194),((Float)-0.271096),null(),null());
HXLINE( 120)			 ::h3d::Vector _v21 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.705374),((Float)-0.668203),null(),null());
HXLINE( 121)			 ::h3d::Vector _v22 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.977050),((Float)-0.108615),null(),null());
HXLINE( 122)			 ::h3d::Vector _v23 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.063326),((Float)0.142369),null(),null());
HXLINE( 123)			 ::h3d::Vector _v24 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.203528),((Float)0.214331),null(),null());
HXLINE( 124)			 ::h3d::Vector _v25 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.667531),((Float)0.326090),null(),null());
HXLINE( 125)			 ::h3d::Vector _v26 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.098422),((Float)-0.295755),null(),null());
HXLINE( 126)			 ::h3d::Vector _v27 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.885922),((Float)0.215369),null(),null());
HXLINE( 127)			 ::h3d::Vector _v28 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.566637),((Float)0.605213),null(),null());
HXLINE( 128)			 ::h3d::Vector _v29 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.039766),((Float)-0.396100),null(),null());
HXLINE( 129)			 ::h3d::Vector _v30 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.751946),((Float)0.453352),null(),null());
HXLINE( 130)			 ::h3d::Vector _v31 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.078707),((Float)-0.715323),null(),null());
HXLINE( 131)			 ::h3d::Vector _v32 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.075838),((Float)-0.529344),null(),null());
HXLINE( 132)			 ::h3d::Vector _v33 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.724479),((Float)-0.580798),null(),null());
HXLINE( 133)			 ::h3d::Vector _v34 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.222999),((Float)-0.215125),null(),null());
HXLINE( 134)			 ::h3d::Vector _v35 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.467574),((Float)-0.405438),null(),null());
HXLINE( 135)			 ::h3d::Vector _v36 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.248268),((Float)-0.814753),null(),null());
HXLINE( 136)			 ::h3d::Vector _v37 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.354411),((Float)-0.887570),null(),null());
HXLINE( 137)			 ::h3d::Vector _v38 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.175817),((Float)0.382366),null(),null());
HXLINE( 138)			 ::h3d::Vector _v39 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.487472),((Float)-0.063082),null(),null());
HXLINE( 139)			 ::h3d::Vector _v40 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.084078),((Float)0.898312),null(),null());
HXLINE( 140)			 ::h3d::Vector _v41 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.488876),((Float)-0.783441),null(),null());
HXLINE( 141)			 ::h3d::Vector _v42 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.470016),((Float)0.217933),null(),null());
HXLINE( 142)			 ::h3d::Vector _v43 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.696890),((Float)-0.549791),null(),null());
HXLINE( 143)			 ::h3d::Vector _v44 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.149693),((Float)0.605762),null(),null());
HXLINE( 144)			 ::h3d::Vector _v45 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.034211),((Float)0.979980),null(),null());
HXLINE( 145)			 ::h3d::Vector _v46 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.503098),((Float)-0.308878),null(),null());
HXLINE( 146)			 ::h3d::Vector _v47 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.016205),((Float)-0.872921),null(),null());
HXLINE( 147)			 ::h3d::Vector _v48 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.385784),((Float)-0.393902),null(),null());
HXLINE( 148)			 ::h3d::Vector _v49 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.146886),((Float)-0.859249),null(),null());
HXLINE( 149)			 ::h3d::Vector _v50 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.643361),((Float)0.164098),null(),null());
HXLINE( 150)			 ::h3d::Vector _v51 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.634388),((Float)-0.049471),null(),null());
HXLINE( 151)			 ::h3d::Vector _v52 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.688894),((Float)0.007843),null(),null());
HXLINE( 152)			 ::h3d::Vector _v53 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.464034),((Float)-0.188818),null(),null());
HXLINE( 153)			 ::h3d::Vector _v54 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.440840),((Float)0.137486),null(),null());
HXLINE( 154)			 ::h3d::Vector _v55 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.364483),((Float)0.511704),null(),null());
HXLINE( 155)			 ::h3d::Vector _v56 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.034028),((Float)0.325968),null(),null());
HXLINE( 156)			 ::h3d::Vector _v57 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.099094),((Float)-0.308023),null(),null());
HXLINE( 157)			 ::h3d::Vector _v58 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.693960),((Float)-0.366253),null(),null());
HXLINE( 158)			 ::h3d::Vector _v59 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.678884),((Float)-0.204688),null(),null());
HXLINE( 159)			 ::h3d::Vector _v60 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.001801),((Float)0.780328),null(),null());
HXLINE( 160)			 ::h3d::Vector _v61 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.145177),((Float)-0.898984),null(),null());
HXLINE( 161)			 ::h3d::Vector _v62 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.062655),((Float)-0.611866),null(),null());
HXLINE( 162)			 ::h3d::Vector _v63 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.315226),((Float)-0.604297),null(),null());
HXLINE( 163)			 ::h3d::Vector _v64 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.780145),((Float)0.486251),null(),null());
HXLINE( 164)			 ::h3d::Vector _v65 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.371868),((Float)0.882138),null(),null());
HXLINE( 165)			 ::h3d::Vector _v66 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.200476),((Float)0.494430),null(),null());
HXLINE( 166)			 ::h3d::Vector _v67 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.494552),((Float)-0.711051),null(),null());
HXLINE( 167)			 ::h3d::Vector _v68 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.612476),((Float)0.705252),null(),null());
HXLINE( 168)			 ::h3d::Vector _v69 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.578845),((Float)-0.768792),null(),null());
HXLINE( 169)			 ::h3d::Vector _v70 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.772454),((Float)-0.090976),null(),null());
HXLINE( 170)			 ::h3d::Vector _v71 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.504440),((Float)0.372295),null(),null());
HXLINE( 171)			 ::h3d::Vector _v72 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.155736),((Float)0.065157),null(),null());
HXLINE( 172)			 ::h3d::Vector _v73 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.391522),((Float)0.849605),null(),null());
HXLINE( 173)			 ::h3d::Vector _v74 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.620106),((Float)-0.328104),null(),null());
HXLINE( 174)			 ::h3d::Vector _v75 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)0.789239),((Float)-0.419965),null(),null());
HXLINE( 175)			 ::h3d::Vector _v76 =  ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.545396),((Float)0.538133),null(),null());
HXLINE( 113)			this->poissonDiskVeryHigh__ = ::Array_obj< ::Dynamic>::__new(64)->init(0,_v14)->init(1,_v15)->init(2,_v16)->init(3,_v17)->init(4,_v18)->init(5,_v19)->init(6,_v20)->init(7,_v21)->init(8,_v22)->init(9,_v23)->init(10,_v24)->init(11,_v25)->init(12,_v26)->init(13,_v27)->init(14,_v28)->init(15,_v29)->init(16,_v30)->init(17,_v31)->init(18,_v32)->init(19,_v33)->init(20,_v34)->init(21,_v35)->init(22,_v36)->init(23,_v37)->init(24,_v38)->init(25,_v39)->init(26,_v40)->init(27,_v41)->init(28,_v42)->init(29,_v43)->init(30,_v44)->init(31,_v45)->init(32,_v46)->init(33,_v47)->init(34,_v48)->init(35,_v49)->init(36,_v50)->init(37,_v51)->init(38,_v52)->init(39,_v53)->init(40,_v54)->init(41,_v55)->init(42,_v56)->init(43,_v57)->init(44,_v58)->init(45,_v59)->init(46,_v60)->init(47,_v61)->init(48,_v62)->init(49,_v63)->init(50,_v64)->init(51,_v65)->init(52,_v66)->init(53,_v67)->init(54,_v68)->init(55,_v69)->init(56,_v70)->init(57,_v71)->init(58,_v72)->init(59,_v73)->init(60,_v74)->init(61,_v75)->init(62,_v76)->init(63, ::h3d::Vector_obj::__alloc( HX_CTX ,((Float)-0.178564),((Float)-0.596057),null(),null()));
            		}
            	}

Dynamic DirShadow_obj::__CreateEmpty() { return new DirShadow_obj; }

void *DirShadow_obj::_hx_vtable = 0;

Dynamic DirShadow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DirShadow_obj > _hx_result = new DirShadow_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DirShadow_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x26d7a78f;
	}
}

bool DirShadow_obj::get_enable(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_enable)
HXDLIN( 174)		return this->enable__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_enable,return )

bool DirShadow_obj::set_enable(bool _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_193_set_enable)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->enable__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_enable,return )

bool DirShadow_obj::get_USE_ESM(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_USE_ESM)
HXDLIN( 174)		return this->USE_ESM__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_USE_ESM,return )

bool DirShadow_obj::set_USE_ESM(bool _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_193_set_USE_ESM)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->USE_ESM__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_USE_ESM,return )

Float DirShadow_obj::get_shadowPower(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_shadowPower)
HXDLIN( 174)		return this->shadowPower__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_shadowPower,return )

Float DirShadow_obj::set_shadowPower(Float _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_191_set_shadowPower)
HXDLIN( 191)		return (this->shadowPower__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_shadowPower,return )

bool DirShadow_obj::get_USE_PCF(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_USE_PCF)
HXDLIN( 174)		return this->USE_PCF__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_USE_PCF,return )

bool DirShadow_obj::set_USE_PCF(bool _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_193_set_USE_PCF)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->USE_PCF__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_USE_PCF,return )

int DirShadow_obj::get_pcfQuality(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_pcfQuality)
HXDLIN( 174)		return this->pcfQuality__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_pcfQuality,return )

int DirShadow_obj::set_pcfQuality(int _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_193_set_pcfQuality)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->pcfQuality__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_pcfQuality,return )

Float DirShadow_obj::get_pcfScale(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_pcfScale)
HXDLIN( 174)		return this->pcfScale__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_pcfScale,return )

Float DirShadow_obj::set_pcfScale(Float _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_191_set_pcfScale)
HXDLIN( 191)		return (this->pcfScale__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_pcfScale,return )

 ::h3d::Vector DirShadow_obj::get_shadowRes(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_shadowRes)
HXDLIN( 174)		return this->shadowRes__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_shadowRes,return )

 ::h3d::Vector DirShadow_obj::set_shadowRes( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_191_set_shadowRes)
HXDLIN( 191)		return (this->shadowRes__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_shadowRes,return )

 ::h3d::mat::Texture DirShadow_obj::get_shadowMap(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_shadowMap)
HXDLIN( 174)		return this->shadowMap__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_shadowMap,return )

 ::h3d::mat::Texture DirShadow_obj::set_shadowMap( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_193_set_shadowMap)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->shadowMap__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_shadowMap,return )

 ::hxsl::Channel DirShadow_obj::get_shadowMapChannel(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_216_get_shadowMapChannel)
HXDLIN( 216)		return this->shadowMapChannel__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_shadowMapChannel,return )

 ::hxsl::Channel DirShadow_obj::set_shadowMapChannel( ::hxsl::Channel v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_217_set_shadowMapChannel)
HXDLIN( 217)		this->constModified = true;
HXDLIN( 217)		return (this->shadowMapChannel__ = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_shadowMapChannel,return )

 ::h3d::Matrix DirShadow_obj::get_shadowProj(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_shadowProj)
HXDLIN( 174)		return this->shadowProj__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_shadowProj,return )

 ::h3d::Matrix DirShadow_obj::set_shadowProj( ::h3d::Matrix _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_191_set_shadowProj)
HXDLIN( 191)		return (this->shadowProj__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_shadowProj,return )

Float DirShadow_obj::get_shadowBias(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_shadowBias)
HXDLIN( 174)		return this->shadowBias__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_shadowBias,return )

Float DirShadow_obj::set_shadowBias(Float _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_191_set_shadowBias)
HXDLIN( 191)		return (this->shadowBias__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_shadowBias,return )

::Array< ::Dynamic> DirShadow_obj::get_poissonDiskLow(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_poissonDiskLow)
HXDLIN( 174)		return this->poissonDiskLow__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_poissonDiskLow,return )

::Array< ::Dynamic> DirShadow_obj::set_poissonDiskLow(::Array< ::Dynamic> _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_191_set_poissonDiskLow)
HXDLIN( 191)		return (this->poissonDiskLow__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_poissonDiskLow,return )

::Array< ::Dynamic> DirShadow_obj::get_poissonDiskHigh(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_poissonDiskHigh)
HXDLIN( 174)		return this->poissonDiskHigh__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_poissonDiskHigh,return )

::Array< ::Dynamic> DirShadow_obj::set_poissonDiskHigh(::Array< ::Dynamic> _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_191_set_poissonDiskHigh)
HXDLIN( 191)		return (this->poissonDiskHigh__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_poissonDiskHigh,return )

::Array< ::Dynamic> DirShadow_obj::get_poissonDiskVeryHigh(){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_174_get_poissonDiskVeryHigh)
HXDLIN( 174)		return this->poissonDiskVeryHigh__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirShadow_obj,get_poissonDiskVeryHigh,return )

::Array< ::Dynamic> DirShadow_obj::set_poissonDiskVeryHigh(::Array< ::Dynamic> _v){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_191_set_poissonDiskVeryHigh)
HXDLIN( 191)		return (this->poissonDiskVeryHigh__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirShadow_obj,set_poissonDiskVeryHigh,return )

void DirShadow_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_b8f751bc878fe5d2_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 272)		{
HXLINE( 247)			if (this->enable__) {
HXLINE( 247)				 ::h3d::shader::DirShadow _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 1);
            			}
HXDLIN( 247)			if (this->USE_ESM__) {
HXLINE( 247)				 ::h3d::shader::DirShadow _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 2);
            			}
HXDLIN( 247)			if (this->USE_PCF__) {
HXLINE( 247)				 ::h3d::shader::DirShadow _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 4);
            			}
HXLINE( 241)			{
HXLINE( 242)				int v = this->pcfQuality__;
HXLINE( 243)				if ((::hx::UShr(v,8) != 0)) {
HXLINE( 243)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("pcfQuality",ec,b1,a6,8f) + HX_(" is out of range ",04,9f,ff,37)) + v) + HX_(">",3e,00,00,00)) + 255)));
            				}
HXLINE( 244)				 ::h3d::shader::DirShadow _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 244)				_hx_tmp->constBits = (_hx_tmp->constBits | (v << 3));
            			}
HXLINE( 256)			{
HXLINE( 257)				if (::hx::IsNull( this->shadowMap__ )) {
HXLINE( 257)					this->shadowMapChannel__ = ::hxsl::Channel_obj::Unknown_dyn();
            				}
            				else {
HXLINE( 257)					if (::hx::IsPointerEq( this->shadowMapChannel__,::hxsl::Channel_obj::Unknown_dyn() )) {
HXLINE( 252)						if (::hx::IsPointerEq( this->shadowMap__->format,::h3d::mat::Texture_obj::nativeFormat )) {
HXLINE( 252)							this->shadowMapChannel__ = ::hxsl::Channel_obj::PackedFloat_dyn();
            						}
            						else {
HXLINE( 250)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("shadowMap",9c,26,a0,f4) + HX_("Channel is not set",3c,74,a9,6b))));
            						}
            					}
            				}
HXLINE( 258)				 ::h3d::shader::DirShadow _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 258)				int _hx_tmp2 = _hx_tmp1->constBits;
HXDLIN( 258)				int _hx_tmp3 = (globals->allocChannelID(this->shadowMap__) << 3);
HXDLIN( 258)				_hx_tmp1->constBits = (_hx_tmp2 | ((_hx_tmp3 | _hx_getEnumValueIndex(this->shadowMapChannel__)) << 11));
            			}
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic DirShadow_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_5f9b01f1542be2ec_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->enable__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->USE_ESM__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->shadowPower__;
            			}
            			break;
            			case (int)3: {
HXLINE( 287)				return this->USE_PCF__;
            			}
            			break;
            			case (int)4: {
HXLINE( 287)				return this->pcfQuality__;
            			}
            			break;
            			case (int)5: {
HXLINE( 287)				return this->pcfScale__;
            			}
            			break;
            			case (int)6: {
HXLINE( 287)				return this->shadowRes__;
            			}
            			break;
            			case (int)7: {
HXLINE( 287)				return this->shadowMap__;
            			}
            			break;
            			case (int)8: {
HXLINE( 287)				return this->shadowProj__;
            			}
            			break;
            			case (int)9: {
HXLINE( 287)				return this->shadowBias__;
            			}
            			break;
            			case (int)10: {
HXLINE( 287)				return this->poissonDiskLow__;
            			}
            			break;
            			case (int)11: {
HXLINE( 287)				return this->poissonDiskHigh__;
            			}
            			break;
            			case (int)12: {
HXLINE( 287)				return this->poissonDiskVeryHigh__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float DirShadow_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_5f9b01f1542be2ec_5_getParamFloatValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)2: {
HXLINE( 303)				return this->shadowPower__;
            			}
            			break;
            			case (int)5: {
HXLINE( 303)				return this->pcfScale__;
            			}
            			break;
            			case (int)9: {
HXLINE( 303)				return this->shadowBias__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader DirShadow_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_5f9b01f1542be2ec_5_clone)
HXLINE( 315)		 ::h3d::shader::DirShadow s = ( ( ::h3d::shader::DirShadow)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::DirShadow >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->enable__ = this->enable__;
HXDLIN( 320)		s->USE_ESM__ = this->USE_ESM__;
HXDLIN( 320)		s->shadowPower__ = this->shadowPower__;
HXDLIN( 320)		s->USE_PCF__ = this->USE_PCF__;
HXDLIN( 320)		s->pcfQuality__ = this->pcfQuality__;
HXDLIN( 320)		s->pcfScale__ = this->pcfScale__;
HXDLIN( 320)		s->shadowRes__ = this->shadowRes__;
HXDLIN( 320)		s->shadowMap__ = this->shadowMap__;
HXDLIN( 320)		s->shadowProj__ = this->shadowProj__;
HXDLIN( 320)		s->shadowBias__ = this->shadowBias__;
HXDLIN( 320)		s->poissonDiskLow__ = this->poissonDiskLow__;
HXDLIN( 320)		s->poissonDiskHigh__ = this->poissonDiskHigh__;
HXDLIN( 320)		s->poissonDiskVeryHigh__ = this->poissonDiskVeryHigh__;
HXLINE( 322)		return s;
            	}


::String DirShadow_obj::SRC;

 ::hxsl::SharedShader DirShadow_obj::_SHADER;


::hx::ObjectPtr< DirShadow_obj > DirShadow_obj::__new() {
	::hx::ObjectPtr< DirShadow_obj > __this = new DirShadow_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DirShadow_obj > DirShadow_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DirShadow_obj *__this = (DirShadow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DirShadow_obj), true, "h3d.shader.DirShadow"));
	*(void **)__this = DirShadow_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DirShadow_obj::DirShadow_obj()
{
}

void DirShadow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirShadow);
	HX_MARK_MEMBER_NAME(enable__,"enable__");
	HX_MARK_MEMBER_NAME(USE_ESM__,"USE_ESM__");
	HX_MARK_MEMBER_NAME(shadowPower__,"shadowPower__");
	HX_MARK_MEMBER_NAME(USE_PCF__,"USE_PCF__");
	HX_MARK_MEMBER_NAME(pcfQuality__,"pcfQuality__");
	HX_MARK_MEMBER_NAME(pcfScale__,"pcfScale__");
	HX_MARK_MEMBER_NAME(shadowRes__,"shadowRes__");
	HX_MARK_MEMBER_NAME(shadowMap__,"shadowMap__");
	HX_MARK_MEMBER_NAME(shadowMapChannel__,"shadowMapChannel__");
	HX_MARK_MEMBER_NAME(shadowProj__,"shadowProj__");
	HX_MARK_MEMBER_NAME(shadowBias__,"shadowBias__");
	HX_MARK_MEMBER_NAME(poissonDiskLow__,"poissonDiskLow__");
	HX_MARK_MEMBER_NAME(poissonDiskHigh__,"poissonDiskHigh__");
	HX_MARK_MEMBER_NAME(poissonDiskVeryHigh__,"poissonDiskVeryHigh__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirShadow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enable__,"enable__");
	HX_VISIT_MEMBER_NAME(USE_ESM__,"USE_ESM__");
	HX_VISIT_MEMBER_NAME(shadowPower__,"shadowPower__");
	HX_VISIT_MEMBER_NAME(USE_PCF__,"USE_PCF__");
	HX_VISIT_MEMBER_NAME(pcfQuality__,"pcfQuality__");
	HX_VISIT_MEMBER_NAME(pcfScale__,"pcfScale__");
	HX_VISIT_MEMBER_NAME(shadowRes__,"shadowRes__");
	HX_VISIT_MEMBER_NAME(shadowMap__,"shadowMap__");
	HX_VISIT_MEMBER_NAME(shadowMapChannel__,"shadowMapChannel__");
	HX_VISIT_MEMBER_NAME(shadowProj__,"shadowProj__");
	HX_VISIT_MEMBER_NAME(shadowBias__,"shadowBias__");
	HX_VISIT_MEMBER_NAME(poissonDiskLow__,"poissonDiskLow__");
	HX_VISIT_MEMBER_NAME(poissonDiskHigh__,"poissonDiskHigh__");
	HX_VISIT_MEMBER_NAME(poissonDiskVeryHigh__,"poissonDiskVeryHigh__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DirShadow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enable() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"USE_ESM") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_USE_ESM() ); }
		if (HX_FIELD_EQ(inName,"USE_PCF") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_USE_PCF() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"enable__") ) { return ::hx::Val( enable__ ); }
		if (HX_FIELD_EQ(inName,"pcfScale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pcfScale() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"USE_ESM__") ) { return ::hx::Val( USE_ESM__ ); }
		if (HX_FIELD_EQ(inName,"USE_PCF__") ) { return ::hx::Val( USE_PCF__ ); }
		if (HX_FIELD_EQ(inName,"shadowRes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadowRes() ); }
		if (HX_FIELD_EQ(inName,"shadowMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadowMap() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_enable") ) { return ::hx::Val( get_enable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enable") ) { return ::hx::Val( set_enable_dyn() ); }
		if (HX_FIELD_EQ(inName,"pcfQuality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pcfQuality() ); }
		if (HX_FIELD_EQ(inName,"pcfScale__") ) { return ::hx::Val( pcfScale__ ); }
		if (HX_FIELD_EQ(inName,"shadowProj") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadowProj() ); }
		if (HX_FIELD_EQ(inName,"shadowBias") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadowBias() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_USE_ESM") ) { return ::hx::Val( get_USE_ESM_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_USE_ESM") ) { return ::hx::Val( set_USE_ESM_dyn() ); }
		if (HX_FIELD_EQ(inName,"shadowPower") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadowPower() ); }
		if (HX_FIELD_EQ(inName,"get_USE_PCF") ) { return ::hx::Val( get_USE_PCF_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_USE_PCF") ) { return ::hx::Val( set_USE_PCF_dyn() ); }
		if (HX_FIELD_EQ(inName,"shadowRes__") ) { return ::hx::Val( shadowRes__ ); }
		if (HX_FIELD_EQ(inName,"shadowMap__") ) { return ::hx::Val( shadowMap__ ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pcfQuality__") ) { return ::hx::Val( pcfQuality__ ); }
		if (HX_FIELD_EQ(inName,"get_pcfScale") ) { return ::hx::Val( get_pcfScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pcfScale") ) { return ::hx::Val( set_pcfScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"shadowProj__") ) { return ::hx::Val( shadowProj__ ); }
		if (HX_FIELD_EQ(inName,"shadowBias__") ) { return ::hx::Val( shadowBias__ ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shadowPower__") ) { return ::hx::Val( shadowPower__ ); }
		if (HX_FIELD_EQ(inName,"get_shadowRes") ) { return ::hx::Val( get_shadowRes_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowRes") ) { return ::hx::Val( set_shadowRes_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shadowMap") ) { return ::hx::Val( get_shadowMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowMap") ) { return ::hx::Val( set_shadowMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_pcfQuality") ) { return ::hx::Val( get_pcfQuality_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pcfQuality") ) { return ::hx::Val( set_pcfQuality_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shadowProj") ) { return ::hx::Val( get_shadowProj_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowProj") ) { return ::hx::Val( set_shadowProj_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shadowBias") ) { return ::hx::Val( get_shadowBias_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowBias") ) { return ::hx::Val( set_shadowBias_dyn() ); }
		if (HX_FIELD_EQ(inName,"poissonDiskLow") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_poissonDiskLow() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_shadowPower") ) { return ::hx::Val( get_shadowPower_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowPower") ) { return ::hx::Val( set_shadowPower_dyn() ); }
		if (HX_FIELD_EQ(inName,"poissonDiskHigh") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_poissonDiskHigh() ); }
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"shadowMapChannel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadowMapChannel() ); }
		if (HX_FIELD_EQ(inName,"poissonDiskLow__") ) { return ::hx::Val( poissonDiskLow__ ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"poissonDiskHigh__") ) { return ::hx::Val( poissonDiskHigh__ ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"shadowMapChannel__") ) { return ::hx::Val( shadowMapChannel__ ); }
		if (HX_FIELD_EQ(inName,"get_poissonDiskLow") ) { return ::hx::Val( get_poissonDiskLow_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_poissonDiskLow") ) { return ::hx::Val( set_poissonDiskLow_dyn() ); }
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_poissonDiskHigh") ) { return ::hx::Val( get_poissonDiskHigh_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_poissonDiskHigh") ) { return ::hx::Val( set_poissonDiskHigh_dyn() ); }
		if (HX_FIELD_EQ(inName,"poissonDiskVeryHigh") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_poissonDiskVeryHigh() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_shadowMapChannel") ) { return ::hx::Val( get_shadowMapChannel_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowMapChannel") ) { return ::hx::Val( set_shadowMapChannel_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"poissonDiskVeryHigh__") ) { return ::hx::Val( poissonDiskVeryHigh__ ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_poissonDiskVeryHigh") ) { return ::hx::Val( get_poissonDiskVeryHigh_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_poissonDiskVeryHigh") ) { return ::hx::Val( set_poissonDiskVeryHigh_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DirShadow_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val DirShadow_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enable(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"USE_ESM") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_USE_ESM(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"USE_PCF") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_USE_PCF(inValue.Cast< bool >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"enable__") ) { enable__=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pcfScale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pcfScale(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"USE_ESM__") ) { USE_ESM__=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"USE_PCF__") ) { USE_PCF__=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowRes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowRes(inValue.Cast<  ::h3d::Vector >()) ); }
		if (HX_FIELD_EQ(inName,"shadowMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowMap(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pcfQuality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pcfQuality(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"pcfScale__") ) { pcfScale__=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowProj") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowProj(inValue.Cast<  ::h3d::Matrix >()) ); }
		if (HX_FIELD_EQ(inName,"shadowBias") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowBias(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shadowPower") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowPower(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"shadowRes__") ) { shadowRes__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowMap__") ) { shadowMap__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pcfQuality__") ) { pcfQuality__=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowProj__") ) { shadowProj__=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowBias__") ) { shadowBias__=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shadowPower__") ) { shadowPower__=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"poissonDiskLow") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_poissonDiskLow(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"poissonDiskHigh") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_poissonDiskHigh(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"shadowMapChannel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowMapChannel(inValue.Cast<  ::hxsl::Channel >()) ); }
		if (HX_FIELD_EQ(inName,"poissonDiskLow__") ) { poissonDiskLow__=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"poissonDiskHigh__") ) { poissonDiskHigh__=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"shadowMapChannel__") ) { shadowMapChannel__=inValue.Cast<  ::hxsl::Channel >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"poissonDiskVeryHigh") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_poissonDiskVeryHigh(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"poissonDiskVeryHigh__") ) { poissonDiskVeryHigh__=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DirShadow_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void DirShadow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enable",83,ae,87,f8));
	outFields->push(HX_("enable__",63,e8,b2,ec));
	outFields->push(HX_("USE_ESM",c7,50,e5,f7));
	outFields->push(HX_("USE_ESM__",a7,a3,70,b8));
	outFields->push(HX_("shadowPower",05,68,66,3d));
	outFields->push(HX_("shadowPower__",65,86,d4,31));
	outFields->push(HX_("USE_PCF",9b,9b,ed,f7));
	outFields->push(HX_("USE_PCF__",7b,4b,40,03));
	outFields->push(HX_("pcfQuality",ec,b1,a6,8f));
	outFields->push(HX_("pcfQuality__",0c,58,28,cc));
	outFields->push(HX_("pcfScale",77,e6,41,ef));
	outFields->push(HX_("pcfScale__",57,05,62,b0));
	outFields->push(HX_("shadowRes",60,f5,a3,f4));
	outFields->push(HX_("shadowRes__",80,60,94,5d));
	outFields->push(HX_("shadowMap",9c,26,a0,f4));
	outFields->push(HX_("shadowMap__",bc,58,ec,79));
	outFields->push(HX_("shadowMapChannel__",67,50,45,7a));
	outFields->push(HX_("shadowMapChannel",87,4d,31,d1));
	outFields->push(HX_("shadowProj",9d,2b,8a,19));
	outFields->push(HX_("shadowProj__",fd,5f,22,31));
	outFields->push(HX_("shadowBias",79,4e,42,10));
	outFields->push(HX_("shadowBias__",d9,f1,4d,60));
	outFields->push(HX_("poissonDiskLow",ee,77,bb,36));
	outFields->push(HX_("poissonDiskLow__",8e,22,7c,f6));
	outFields->push(HX_("poissonDiskHigh",c8,02,a4,aa));
	outFields->push(HX_("poissonDiskHigh__",e8,97,c0,9d));
	outFields->push(HX_("poissonDiskVeryHigh",9e,a1,01,9c));
	outFields->push(HX_("poissonDiskVeryHigh__",3e,18,e4,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DirShadow_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DirShadow_obj,enable__),HX_("enable__",63,e8,b2,ec)},
	{::hx::fsBool,(int)offsetof(DirShadow_obj,USE_ESM__),HX_("USE_ESM__",a7,a3,70,b8)},
	{::hx::fsFloat,(int)offsetof(DirShadow_obj,shadowPower__),HX_("shadowPower__",65,86,d4,31)},
	{::hx::fsBool,(int)offsetof(DirShadow_obj,USE_PCF__),HX_("USE_PCF__",7b,4b,40,03)},
	{::hx::fsInt,(int)offsetof(DirShadow_obj,pcfQuality__),HX_("pcfQuality__",0c,58,28,cc)},
	{::hx::fsFloat,(int)offsetof(DirShadow_obj,pcfScale__),HX_("pcfScale__",57,05,62,b0)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(DirShadow_obj,shadowRes__),HX_("shadowRes__",80,60,94,5d)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(DirShadow_obj,shadowMap__),HX_("shadowMap__",bc,58,ec,79)},
	{::hx::fsObject /*  ::hxsl::Channel */ ,(int)offsetof(DirShadow_obj,shadowMapChannel__),HX_("shadowMapChannel__",67,50,45,7a)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(DirShadow_obj,shadowProj__),HX_("shadowProj__",fd,5f,22,31)},
	{::hx::fsFloat,(int)offsetof(DirShadow_obj,shadowBias__),HX_("shadowBias__",d9,f1,4d,60)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DirShadow_obj,poissonDiskLow__),HX_("poissonDiskLow__",8e,22,7c,f6)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DirShadow_obj,poissonDiskHigh__),HX_("poissonDiskHigh__",e8,97,c0,9d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DirShadow_obj,poissonDiskVeryHigh__),HX_("poissonDiskVeryHigh__",3e,18,e4,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DirShadow_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &DirShadow_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &DirShadow_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DirShadow_obj_sMemberFields[] = {
	HX_("enable__",63,e8,b2,ec),
	HX_("get_enable",4c,1e,0f,e9),
	HX_("set_enable",c0,bc,8c,ec),
	HX_("USE_ESM__",a7,a3,70,b8),
	HX_("get_USE_ESM",de,b0,df,7d),
	HX_("set_USE_ESM",ea,b7,4c,88),
	HX_("shadowPower__",65,86,d4,31),
	HX_("get_shadowPower",9c,1f,48,fe),
	HX_("set_shadowPower",a8,9c,13,fa),
	HX_("USE_PCF__",7b,4b,40,03),
	HX_("get_USE_PCF",b2,fb,e7,7d),
	HX_("set_USE_PCF",be,02,55,88),
	HX_("pcfQuality__",0c,58,28,cc),
	HX_("get_pcfQuality",35,3a,9c,05),
	HX_("set_pcfQuality",a9,22,bc,25),
	HX_("pcfScale__",57,05,62,b0),
	HX_("get_pcfScale",80,9a,5b,a4),
	HX_("set_pcfScale",f4,bd,54,b9),
	HX_("shadowRes__",80,60,94,5d),
	HX_("get_shadowRes",37,c9,07,b6),
	HX_("set_shadowRes",43,ab,0d,fb),
	HX_("shadowMap__",bc,58,ec,79),
	HX_("get_shadowMap",73,fa,03,b6),
	HX_("set_shadowMap",7f,dc,09,fb),
	HX_("shadowMapChannel__",67,50,45,7a),
	HX_("get_shadowMapChannel",90,b2,9b,ef),
	HX_("set_shadowMapChannel",04,6a,53,bc),
	HX_("shadowProj__",fd,5f,22,31),
	HX_("get_shadowProj",e6,b3,7f,8f),
	HX_("set_shadowProj",5a,9c,9f,af),
	HX_("shadowBias__",d9,f1,4d,60),
	HX_("get_shadowBias",c2,d6,37,86),
	HX_("set_shadowBias",36,bf,57,a6),
	HX_("poissonDiskLow__",8e,22,7c,f6),
	HX_("get_poissonDiskLow",b7,58,55,d2),
	HX_("set_poissonDiskLow",2b,8b,04,af),
	HX_("poissonDiskHigh__",e8,97,c0,9d),
	HX_("get_poissonDiskHigh",df,d1,ae,35),
	HX_("set_poissonDiskHigh",eb,c4,4b,72),
	HX_("poissonDiskVeryHigh__",3e,18,e4,d8),
	HX_("get_poissonDiskVeryHigh",35,48,57,a4),
	HX_("set_poissonDiskVeryHigh",41,b1,b8,a6),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void DirShadow_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirShadow_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(DirShadow_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DirShadow_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirShadow_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(DirShadow_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class DirShadow_obj::__mClass;

static ::String DirShadow_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void DirShadow_obj::__register()
{
	DirShadow_obj _hx_dummy;
	DirShadow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.DirShadow",39,4f,18,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DirShadow_obj::__GetStatic;
	__mClass->mSetStaticField = &DirShadow_obj::__SetStatic;
	__mClass->mMarkFunc = DirShadow_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DirShadow_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DirShadow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DirShadow_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DirShadow_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DirShadow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DirShadow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DirShadow_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5f9b01f1542be2ec_5_boot)
HXDLIN(   5)		SRC = HX_("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",1e,5e,9f,6c);
            	}
}

} // end namespace h3d
} // end namespace shader
