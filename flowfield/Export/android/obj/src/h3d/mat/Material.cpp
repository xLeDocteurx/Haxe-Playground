#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
#ifndef INCLUDED_h3d_mat_Defaults
#include <h3d/mat/Defaults.h>
#endif
#ifndef INCLUDED_h3d_mat_Face
#include <h3d/mat/Face.h>
#endif
#ifndef INCLUDED_h3d_mat_Material
#include <h3d/mat/Material.h>
#endif
#ifndef INCLUDED_h3d_mat_MaterialSetup
#include <h3d/mat/MaterialSetup.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_shader_BaseMesh
#include <h3d/shader/BaseMesh.h>
#endif
#ifndef INCLUDED_h3d_shader_NormalMap
#include <h3d/shader/NormalMap.h>
#endif
#ifndef INCLUDED_h3d_shader_SpecularTexture
#include <h3d/shader/SpecularTexture.h>
#endif
#ifndef INCLUDED_h3d_shader_Texture
#include <h3d/shader/Texture.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_42_new,"h3d.mat.Material","new",0xe68c7c9c,"h3d.mat.Material.new","h3d/mat/Material.hx",42,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_50_get_specularPower,"h3d.mat.Material","get_specularPower",0xe0722ad5,"h3d.mat.Material.get_specularPower","h3d/mat/Material.hx",50,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_54_set_specularPower,"h3d.mat.Material","set_specularPower",0x03e002e1,"h3d.mat.Material.set_specularPower","h3d/mat/Material.hx",54,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_58_get_specularAmount,"h3d.mat.Material","get_specularAmount",0x580e2908,"h3d.mat.Material.get_specularAmount","h3d/mat/Material.hx",58,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_62_set_specularAmount,"h3d.mat.Material","set_specularAmount",0x34bd5b7c,"h3d.mat.Material.set_specularAmount","h3d/mat/Material.hx",62,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_66_get_color,"h3d.mat.Material","get_color",0x190f4ef6,"h3d.mat.Material.get_color","h3d/mat/Material.hx",66,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_70_set_color,"h3d.mat.Material","set_color",0xfc603b02,"h3d.mat.Material.set_color","h3d/mat/Material.hx",70,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_74_get_shadows,"h3d.mat.Material","get_shadows",0x66e1c4e6,"h3d.mat.Material.get_shadows","h3d/mat/Material.hx",74,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_77_set_shadows,"h3d.mat.Material","set_shadows",0x714ecbf2,"h3d.mat.Material.set_shadows","h3d/mat/Material.hx",77,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_83_set_castShadows,"h3d.mat.Material","set_castShadows",0x50bd5673,"h3d.mat.Material.set_castShadows","h3d/mat/Material.hx",83,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_95_set_receiveShadows,"h3d.mat.Material","set_receiveShadows",0xae7bbf71,"h3d.mat.Material.set_receiveShadows","h3d/mat/Material.hx",95,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_108_set_staticShadows,"h3d.mat.Material","set_staticShadows",0x63057a24,"h3d.mat.Material.set_staticShadows","h3d/mat/Material.hx",108,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_114_clone,"h3d.mat.Material","clone",0xaf4c4699,"h3d.mat.Material.clone","h3d/mat/Material.hx",114,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_132_set_blendMode,"h3d.mat.Material","set_blendMode",0x930a6973,"h3d.mat.Material.set_blendMode","h3d/mat/Material.hx",132,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_151_get_specularTexture,"h3d.mat.Material","get_specularTexture",0xc589fbab,"h3d.mat.Material.get_specularTexture","h3d/mat/Material.hx",151,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_155_get_texture,"h3d.mat.Material","get_texture",0xa634712e,"h3d.mat.Material.get_texture","h3d/mat/Material.hx",155,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_158_set_texture,"h3d.mat.Material","set_texture",0xb0a1783a,"h3d.mat.Material.set_texture","h3d/mat/Material.hx",158,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_175_get_normalMap,"h3d.mat.Material","get_normalMap",0xed5885c8,"h3d.mat.Material.get_normalMap","h3d/mat/Material.hx",175,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_178_set_normalMap,"h3d.mat.Material","set_normalMap",0x325e67d4,"h3d.mat.Material.set_normalMap","h3d/mat/Material.hx",178,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_197_set_specularTexture,"h3d.mat.Material","set_specularTexture",0x0226eeb7,"h3d.mat.Material.set_specularTexture","h3d/mat/Material.hx",197,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_219_getDefaultModelProps,"h3d.mat.Material","getDefaultModelProps",0xacdf0df6,"h3d.mat.Material.getDefaultModelProps","h3d/mat/Material.hx",219,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_237_getDefaultProps,"h3d.mat.Material","getDefaultProps",0xa87d8ee1,"h3d.mat.Material.getDefaultProps","h3d/mat/Material.hx",237,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_265_refreshProps,"h3d.mat.Material","refreshProps",0x88d7cfd9,"h3d.mat.Material.refreshProps","h3d/mat/Material.hx",265,0xb750a112)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d498378fa6ee3c_339_create,"h3d.mat.Material","create",0x21330840,"h3d.mat.Material.create","h3d/mat/Material.hx",339,0xb750a112)
namespace h3d{
namespace mat{

void Material_obj::__construct( ::h3d::mat::Texture texture){
            	HX_GC_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_42_new)
HXLINE(  43)		this->mshader =  ::h3d::shader::BaseMesh_obj::__alloc( HX_CTX );
HXLINE(  44)		this->set_blendMode(::h2d::BlendMode_obj::None_dyn());
HXLINE(  45)		super::__construct(this->mshader);
HXLINE(  46)		this->set_texture(texture);
            	}

Dynamic Material_obj::__CreateEmpty() { return new Material_obj; }

void *Material_obj::_hx_vtable = 0;

Dynamic Material_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Material_obj > _hx_result = new Material_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Material_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x531b0df8) {
		if (inClassId<=(int)0x20299172) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x20299172;
		} else {
			return inClassId==(int)0x531b0df8;
		}
	} else {
		return inClassId==(int)0x5e9df023;
	}
}

Float Material_obj::get_specularPower(){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_50_get_specularPower)
HXDLIN(  50)		return this->mshader->specularPower__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_specularPower,return )

Float Material_obj::set_specularPower(Float v){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_54_set_specularPower)
HXDLIN(  54)		return (this->mshader->specularPower__ = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_specularPower,return )

Float Material_obj::get_specularAmount(){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_58_get_specularAmount)
HXDLIN(  58)		return this->mshader->specularAmount__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_specularAmount,return )

Float Material_obj::set_specularAmount(Float v){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_62_set_specularAmount)
HXDLIN(  62)		return (this->mshader->specularAmount__ = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_specularAmount,return )

 ::h3d::Vector Material_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_66_get_color)
HXDLIN(  66)		return this->mshader->color__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_color,return )

 ::h3d::Vector Material_obj::set_color( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_70_set_color)
HXDLIN(  70)		return (this->mshader->color__ = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_color,return )

bool Material_obj::get_shadows(){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_74_get_shadows)
HXDLIN(  74)		if (this->castShadows) {
HXDLIN(  74)			return this->receiveShadows;
            		}
            		else {
HXDLIN(  74)			return false;
            		}
HXDLIN(  74)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_shadows,return )

bool Material_obj::set_shadows(bool v){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_77_set_shadows)
HXLINE(  78)		this->set_castShadows(v);
HXLINE(  79)		this->set_receiveShadows(v);
HXLINE(  80)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_shadows,return )

bool Material_obj::set_castShadows(bool v){
            	HX_GC_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_83_set_castShadows)
HXLINE(  84)		if ((this->castShadows == v)) {
HXLINE(  85)			return v;
            		}
HXLINE(  86)		if (::hx::IsNotNull( this->passes )) {
HXLINE(  87)			if (v) {
HXLINE(  88)				( ( ::h3d::mat::Pass)(this->addPass( ::h3d::mat::Pass_obj::__alloc( HX_CTX ,HX_("shadow",e0,c7,20,1d),null(),this->passes))) )->set_isStatic(this->staticShadows);
            			}
            			else {
HXLINE(  90)				this->removePass(this->getPass(HX_("shadow",e0,c7,20,1d)));
            			}
            		}
HXLINE(  92)		return (this->castShadows = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_castShadows,return )

bool Material_obj::set_receiveShadows(bool v){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_95_set_receiveShadows)
HXLINE(  96)		if ((v == this->receiveShadows)) {
HXLINE(  97)			return v;
            		}
HXLINE(  98)		if (::hx::IsNotNull( this->passes )) {
HXLINE(  99)			 ::hxsl::Shader shadows = ::h3d::mat::Defaults_obj::get_shadowShader();
HXLINE( 100)			if (v) {
HXLINE( 101)				this->passes->addShader(shadows).StaticCast<  ::hxsl::Shader >();
            			}
            			else {
HXLINE( 103)				this->passes->removeShader(shadows);
            			}
            		}
HXLINE( 105)		return (this->receiveShadows = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_receiveShadows,return )

bool Material_obj::set_staticShadows(bool v){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_108_set_staticShadows)
HXLINE( 109)		 ::h3d::mat::Pass p = this->getPass(HX_("shadow",e0,c7,20,1d));
HXLINE( 110)		if (::hx::IsNotNull( p )) {
HXLINE( 110)			p->set_isStatic(v);
            		}
HXLINE( 111)		return (this->staticShadows = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_staticShadows,return )

 ::h3d::mat::BaseMaterial Material_obj::clone( ::h3d::mat::BaseMaterial m){
            	HX_GC_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_114_clone)
HXLINE( 115)		 ::h3d::mat::Material m1;
HXDLIN( 115)		if (::hx::IsNull( m )) {
HXLINE( 115)			m1 =  ::h3d::mat::Material_obj::__alloc( HX_CTX ,null());
            		}
            		else {
HXLINE( 115)			m1 = ( ( ::h3d::mat::Material)(m) );
            		}
HXLINE( 116)		this->super::clone(m1);
HXLINE( 117)		m1->set_castShadows(this->castShadows);
HXLINE( 118)		m1->set_receiveShadows(this->receiveShadows);
HXLINE( 119)		m1->set_texture(this->get_texture());
HXLINE( 120)		m1->set_specularTexture(this->get_specularTexture());
HXLINE( 121)		m1->set_normalMap(this->get_normalMap());
HXLINE( 122)		if (::hx::IsNotNull( this->textureShader )) {
HXLINE( 123)			{
HXLINE( 123)				 ::h3d::shader::Texture _this = m1->textureShader;
HXDLIN( 123)				_this->constModified = true;
HXDLIN( 123)				_this->additive__ = this->textureShader->additive__;
            			}
HXLINE( 124)			{
HXLINE( 124)				 ::h3d::shader::Texture _this1 = m1->textureShader;
HXDLIN( 124)				_this1->constModified = true;
HXDLIN( 124)				_this1->killAlpha__ = this->textureShader->killAlpha__;
            			}
HXLINE( 125)			m1->textureShader->killAlphaThreshold__ = this->textureShader->killAlphaThreshold__;
            		}
HXLINE( 127)		m1->mshader->color__ = this->mshader->color__;
HXLINE( 128)		m1->set_blendMode(this->blendMode);
HXLINE( 129)		return m1;
            	}


 ::h2d::BlendMode Material_obj::set_blendMode( ::h2d::BlendMode v){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_132_set_blendMode)
HXLINE( 133)		if (::hx::IsNotNull( this->passes )) {
HXLINE( 134)			this->passes->setBlendMode(v);
HXLINE( 135)			switch((int)(v->_hx_getIndex())){
            				case (int)0: {
HXLINE( 137)					this->passes->set_depthWrite(true);
HXLINE( 138)					this->passes->setPassName(HX_("default",c1,d8,c3,9b));
            				}
            				break;
            				case (int)1: {
HXLINE( 140)					this->passes->set_depthWrite(true);
HXLINE( 141)					this->passes->setPassName(HX_("alpha",5e,a7,96,21));
            				}
            				break;
            				case (int)2: case (int)3: case (int)4: case (int)5: case (int)6: case (int)7: case (int)8: case (int)9: case (int)10: case (int)11: {
HXLINE( 143)					this->passes->set_depthWrite(false);
HXLINE( 144)					this->passes->setPassName(HX_("additive",0c,73,3f,a8));
            				}
            				break;
            			}
            		}
HXLINE( 147)		return (this->blendMode = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_blendMode,return )

 ::h3d::mat::Texture Material_obj::get_specularTexture(){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_151_get_specularTexture)
HXDLIN( 151)		if (::hx::IsNull( this->specularShader )) {
HXDLIN( 151)			return null();
            		}
            		else {
HXDLIN( 151)			return this->specularShader->texture__;
            		}
HXDLIN( 151)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_specularTexture,return )

 ::h3d::mat::Texture Material_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_155_get_texture)
HXDLIN( 155)		if (::hx::IsNull( this->textureShader )) {
HXDLIN( 155)			return null();
            		}
            		else {
HXDLIN( 155)			return this->textureShader->texture__;
            		}
HXDLIN( 155)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_texture,return )

 ::h3d::mat::Texture Material_obj::set_texture( ::h3d::mat::Texture t){
            	HX_GC_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_158_set_texture)
HXLINE( 159)		if (::hx::IsNull( t )) {
HXLINE( 160)			if (::hx::IsNotNull( this->textureShader )) {
HXLINE( 161)				this->passes->removeShader(this->textureShader);
HXLINE( 162)				this->textureShader = null();
            			}
            		}
            		else {
HXLINE( 165)			if (::hx::IsNull( this->textureShader )) {
HXLINE( 166)				this->textureShader =  ::h3d::shader::Texture_obj::__alloc( HX_CTX ,null());
HXLINE( 167)				this->passes->addShader(this->textureShader).StaticCast<  ::h3d::shader::Texture >();
            			}
HXLINE( 169)			this->textureShader->texture__ = t;
            		}
HXLINE( 171)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_texture,return )

 ::h3d::mat::Texture Material_obj::get_normalMap(){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_175_get_normalMap)
HXDLIN( 175)		if (::hx::IsNull( this->normalShader )) {
HXDLIN( 175)			return null();
            		}
            		else {
HXDLIN( 175)			return this->normalShader->texture__;
            		}
HXDLIN( 175)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_normalMap,return )

 ::h3d::mat::Texture Material_obj::set_normalMap( ::h3d::mat::Texture t){
            	HX_GC_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_178_set_normalMap)
HXLINE( 179)		if (::hx::IsNull( t )) {
HXLINE( 180)			if (::hx::IsNotNull( this->normalShader )) {
HXLINE( 181)				this->passes->removeShader(this->normalShader);
HXLINE( 182)				this->normalShader = null();
            			}
            		}
            		else {
HXLINE( 185)			if (::hx::IsNull( this->normalShader )) {
HXLINE( 186)				this->normalShader =  ::h3d::shader::NormalMap_obj::__alloc( HX_CTX ,null());
HXLINE( 187)				if (::hx::IsNotNull( this->textureShader )) {
HXLINE( 188)					 ::h3d::mat::Pass _hx_tmp = this->passes;
HXDLIN( 188)					 ::h3d::shader::NormalMap _hx_tmp1 = this->normalShader;
HXDLIN( 188)					_hx_tmp->addShaderAtIndex(_hx_tmp1,(this->passes->getShaderIndex(this->textureShader) + 1)).StaticCast<  ::h3d::shader::NormalMap >();
            				}
            				else {
HXLINE( 190)					this->passes->addShader(this->normalShader).StaticCast<  ::h3d::shader::NormalMap >();
            				}
            			}
HXLINE( 192)			this->normalShader->texture__ = t;
            		}
HXLINE( 194)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_normalMap,return )

 ::h3d::mat::Texture Material_obj::set_specularTexture( ::h3d::mat::Texture t){
            	HX_GC_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_197_set_specularTexture)
HXLINE( 198)		if (::hx::IsNull( t )) {
HXLINE( 199)			if (::hx::IsNotNull( this->specularShader )) {
HXLINE( 200)				this->passes->removeShader(this->specularShader);
HXLINE( 201)				this->specularShader = null();
            			}
            		}
            		else {
HXLINE( 204)			if (::hx::IsNull( this->specularShader )) {
HXLINE( 205)				this->specularShader =  ::h3d::shader::SpecularTexture_obj::__alloc( HX_CTX ,null());
HXLINE( 206)				this->passes->addShader(this->specularShader).StaticCast<  ::h3d::shader::SpecularTexture >();
            			}
HXLINE( 208)			this->specularShader->texture__ = t;
            		}
HXLINE( 210)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_specularTexture,return )

 ::Dynamic Material_obj::getDefaultModelProps(){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_219_getDefaultModelProps)
HXLINE( 220)		 ::Dynamic props = this->getDefaultProps(null());
HXLINE( 221)		switch((int)(this->blendMode->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE( 223)				props->__SetField(HX_("kind",54,e1,09,47),HX_("Alpha",3e,17,c4,b4),::hx::paccDynamic);
            			}
            			break;
            			case (int)2: {
HXLINE( 225)				props->__SetField(HX_("kind",54,e1,09,47),HX_("Add",01,aa,31,00),::hx::paccDynamic);
HXLINE( 226)				props->__SetField(HX_("culling",70,e2,87,53),false,::hx::paccDynamic);
HXLINE( 227)				props->__SetField(HX_("shadows",93,1c,8e,5f),false,::hx::paccDynamic);
HXLINE( 228)				props->__SetField(HX_("light",d6,90,fc,74),false,::hx::paccDynamic);
            			}
            			break;
            			default:{
HXLINE( 232)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported HMD material ",0d,bf,ee,75) + ::Std_obj::string(this->blendMode))));
            			}
            		}
HXLINE( 234)		return props;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,getDefaultModelProps,return )

 ::Dynamic Material_obj::getDefaultProps(::String type){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_237_getDefaultProps)
HXLINE( 238)		 ::Dynamic props;
HXLINE( 239)		if (::hx::IsNull( type )) {
HXLINE( 255)			props =  ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("kind",54,e1,09,47),HX_("Opaque",01,51,86,53))
            				->setFixed(1,HX_("culling",70,e2,87,53),true)
            				->setFixed(2,HX_("shadows",93,1c,8e,5f),true)
            				->setFixed(3,HX_("light",d6,90,fc,74),true));
            		}
            		else {
HXLINE( 239)			::String _hx_switch_0 = type;
            			if (  (_hx_switch_0==HX_("particles3D",5e,e1,e5,2d)) ||  (_hx_switch_0==HX_("trail3D",f7,bd,00,8c)) ){
HXLINE( 241)				props =  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("kind",54,e1,09,47),HX_("Alpha",3e,17,c4,b4))
            					->setFixed(1,HX_("culling",70,e2,87,53),false)
            					->setFixed(2,HX_("shadows",93,1c,8e,5f),false)
            					->setFixed(3,HX_("light",d6,90,fc,74),true));
HXDLIN( 241)				goto _hx_goto_21;
            			}
            			if (  (_hx_switch_0==HX_("ui",54,66,00,00)) ){
HXLINE( 248)				props =  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("kind",54,e1,09,47),HX_("Alpha",3e,17,c4,b4))
            					->setFixed(1,HX_("culling",70,e2,87,53),false)
            					->setFixed(2,HX_("shadows",93,1c,8e,5f),false)
            					->setFixed(3,HX_("light",d6,90,fc,74),false));
HXDLIN( 248)				goto _hx_goto_21;
            			}
            			/* default */{
HXLINE( 255)				props =  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("kind",54,e1,09,47),HX_("Opaque",01,51,86,53))
            					->setFixed(1,HX_("culling",70,e2,87,53),true)
            					->setFixed(2,HX_("shadows",93,1c,8e,5f),true)
            					->setFixed(3,HX_("light",d6,90,fc,74),true));
            			}
            			_hx_goto_21:;
            		}
HXLINE( 262)		return props;
            	}


void Material_obj::refreshProps(){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_265_refreshProps)
HXLINE( 266)		bool _hx_tmp;
HXDLIN( 266)		if (::hx::IsNotNull( this->props )) {
HXLINE( 266)			_hx_tmp = ::hx::IsNull( this->passes );
            		}
            		else {
HXLINE( 266)			_hx_tmp = true;
            		}
HXDLIN( 266)		if (_hx_tmp) {
HXLINE( 266)			return;
            		}
HXLINE( 267)		 ::Dynamic props = this->props;
HXLINE( 268)		::String _hx_switch_0 = ( (::String)(props->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("Add",01,aa,31,00)) ){
HXLINE( 271)			this->set_blendMode(::h2d::BlendMode_obj::Add_dyn());
HXDLIN( 271)			goto _hx_goto_23;
            		}
            		if (  (_hx_switch_0==HX_("Alpha",3e,17,c4,b4)) ){
HXLINE( 270)			this->set_blendMode(::h2d::BlendMode_obj::Alpha_dyn());
HXDLIN( 270)			goto _hx_goto_23;
            		}
            		if (  (_hx_switch_0==HX_("AlphaKill",fc,99,d6,82)) ||  (_hx_switch_0==HX_("Hidden",8a,73,2a,81)) ||  (_hx_switch_0==HX_("Opaque",01,51,86,53)) ){
HXLINE( 269)			this->set_blendMode(::h2d::BlendMode_obj::None_dyn());
HXDLIN( 269)			goto _hx_goto_23;
            		}
            		if (  (_hx_switch_0==HX_("SoftAdd",37,23,d0,e4)) ){
HXLINE( 272)			this->set_blendMode(::h2d::BlendMode_obj::SoftAdd_dyn());
HXDLIN( 272)			goto _hx_goto_23;
            		}
            		_hx_goto_23:;
HXLINE( 274)		 ::h3d::shader::Texture tshader = this->textureShader;
HXLINE( 275)		if (::hx::IsNotNull( tshader )) {
HXLINE( 276)			{
HXLINE( 276)				tshader->constModified = true;
HXDLIN( 276)				tshader->killAlpha__ = ::hx::IsEq( props->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),HX_("AlphaKill",fc,99,d6,82) );
            			}
HXLINE( 277)			tshader->killAlphaThreshold__ = ((Float)0.5);
            		}
HXLINE( 279)		 ::h3d::mat::Face _hx_tmp1;
HXDLIN( 279)		if (::hx::IsEq( props->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),HX_("Hidden",8a,73,2a,81) )) {
HXLINE( 279)			_hx_tmp1 = ::h3d::mat::Face_obj::Both_dyn();
            		}
            		else {
HXLINE( 279)			if (( (bool)(props->__Field(HX_("culling",70,e2,87,53),::hx::paccDynamic)) )) {
HXLINE( 279)				_hx_tmp1 = ::h3d::mat::Face_obj::Back_dyn();
            			}
            			else {
HXLINE( 279)				_hx_tmp1 = ::h3d::mat::Face_obj::None_dyn();
            			}
            		}
HXDLIN( 279)		this->passes->set_culling(_hx_tmp1);
HXLINE( 280)		this->passes->set_enableLights(( (bool)(props->__Field(HX_("light",d6,90,fc,74),::hx::paccDynamic)) ));
HXLINE( 281)		{
HXLINE( 281)			bool v = ( (bool)(props->__Field(HX_("shadows",93,1c,8e,5f),::hx::paccDynamic)) );
HXDLIN( 281)			this->set_castShadows(v);
HXDLIN( 281)			this->set_receiveShadows(v);
            		}
HXLINE( 282)		bool _hx_tmp2;
HXDLIN( 282)		if (this->castShadows) {
HXLINE( 282)			_hx_tmp2 = this->receiveShadows;
            		}
            		else {
HXLINE( 282)			_hx_tmp2 = false;
            		}
HXDLIN( 282)		if (_hx_tmp2) {
HXLINE( 283)			this->getPass(HX_("shadow",e0,c7,20,1d))->set_culling(this->passes->culling);
            		}
            	}


 ::h3d::mat::Material Material_obj::create( ::h3d::mat::Texture tex){
            	HX_STACKFRAME(&_hx_pos_c3d498378fa6ee3c_339_create)
HXLINE( 340)		 ::h3d::mat::Material mat = ::h3d::mat::MaterialSetup_obj::current->createMaterial();
HXLINE( 341)		mat->set_texture(tex);
HXLINE( 342)		mat->set_props(mat->getDefaultProps(null()));
HXLINE( 343)		return mat;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Material_obj,create,return )


::hx::ObjectPtr< Material_obj > Material_obj::__new( ::h3d::mat::Texture texture) {
	::hx::ObjectPtr< Material_obj > __this = new Material_obj();
	__this->__construct(texture);
	return __this;
}

::hx::ObjectPtr< Material_obj > Material_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture texture) {
	Material_obj *__this = (Material_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Material_obj), true, "h3d.mat.Material"));
	*(void **)__this = Material_obj::_hx_vtable;
	__this->__construct(texture);
	return __this;
}

Material_obj::Material_obj()
{
}

void Material_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Material);
	HX_MARK_MEMBER_NAME(mshader,"mshader");
	HX_MARK_MEMBER_NAME(normalShader,"normalShader");
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_MEMBER_NAME(castShadows,"castShadows");
	HX_MARK_MEMBER_NAME(receiveShadows,"receiveShadows");
	HX_MARK_MEMBER_NAME(staticShadows,"staticShadows");
	HX_MARK_MEMBER_NAME(textureShader,"textureShader");
	HX_MARK_MEMBER_NAME(specularShader,"specularShader");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	 ::h3d::mat::BaseMaterial_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Material_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mshader,"mshader");
	HX_VISIT_MEMBER_NAME(normalShader,"normalShader");
	HX_VISIT_MEMBER_NAME(model,"model");
	HX_VISIT_MEMBER_NAME(castShadows,"castShadows");
	HX_VISIT_MEMBER_NAME(receiveShadows,"receiveShadows");
	HX_VISIT_MEMBER_NAME(staticShadows,"staticShadows");
	HX_VISIT_MEMBER_NAME(textureShader,"textureShader");
	HX_VISIT_MEMBER_NAME(specularShader,"specularShader");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	 ::h3d::mat::BaseMaterial_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Material_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return ::hx::Val( model ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mshader") ) { return ::hx::Val( mshader ); }
		if (HX_FIELD_EQ(inName,"shadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadows() ); }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_normalMap() ); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return ::hx::Val( blendMode ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"castShadows") ) { return ::hx::Val( castShadows ); }
		if (HX_FIELD_EQ(inName,"get_shadows") ) { return ::hx::Val( get_shadows_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadows") ) { return ::hx::Val( set_shadows_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"normalShader") ) { return ::hx::Val( normalShader ); }
		if (HX_FIELD_EQ(inName,"refreshProps") ) { return ::hx::Val( refreshProps_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"staticShadows") ) { return ::hx::Val( staticShadows ); }
		if (HX_FIELD_EQ(inName,"textureShader") ) { return ::hx::Val( textureShader ); }
		if (HX_FIELD_EQ(inName,"specularPower") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularPower() ); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return ::hx::Val( set_blendMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_normalMap") ) { return ::hx::Val( get_normalMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_normalMap") ) { return ::hx::Val( set_normalMap_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"receiveShadows") ) { return ::hx::Val( receiveShadows ); }
		if (HX_FIELD_EQ(inName,"specularShader") ) { return ::hx::Val( specularShader ); }
		if (HX_FIELD_EQ(inName,"specularAmount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularAmount() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"specularTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularTexture() ); }
		if (HX_FIELD_EQ(inName,"set_castShadows") ) { return ::hx::Val( set_castShadows_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDefaultProps") ) { return ::hx::Val( getDefaultProps_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_specularPower") ) { return ::hx::Val( get_specularPower_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularPower") ) { return ::hx::Val( set_specularPower_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_staticShadows") ) { return ::hx::Val( set_staticShadows_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_specularAmount") ) { return ::hx::Val( get_specularAmount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularAmount") ) { return ::hx::Val( set_specularAmount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_receiveShadows") ) { return ::hx::Val( set_receiveShadows_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_specularTexture") ) { return ::hx::Val( get_specularTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularTexture") ) { return ::hx::Val( set_specularTexture_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getDefaultModelProps") ) { return ::hx::Val( getDefaultModelProps_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Material_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
	}
	return false;
}

::hx::Val Material_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast<  ::hxd::res::Resource >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mshader") ) { mshader=inValue.Cast<  ::h3d::shader::BaseMesh >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadows(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_normalMap(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blendMode(inValue.Cast<  ::h2d::BlendMode >()) );blendMode=inValue.Cast<  ::h2d::BlendMode >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"castShadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_castShadows(inValue.Cast< bool >()) );castShadows=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"normalShader") ) { normalShader=inValue.Cast<  ::h3d::shader::NormalMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"staticShadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_staticShadows(inValue.Cast< bool >()) );staticShadows=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureShader") ) { textureShader=inValue.Cast<  ::h3d::shader::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularPower") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularPower(inValue.Cast< Float >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"receiveShadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_receiveShadows(inValue.Cast< bool >()) );receiveShadows=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularShader") ) { specularShader=inValue.Cast<  ::h3d::shader::SpecularTexture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularAmount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularAmount(inValue.Cast< Float >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"specularTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularTexture(inValue.Cast<  ::h3d::mat::Texture >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Material_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mshader",52,4f,c4,d1));
	outFields->push(HX_("normalShader",ac,3c,85,1b));
	outFields->push(HX_("model",a9,23,58,0c));
	outFields->push(HX_("shadows",93,1c,8e,5f));
	outFields->push(HX_("castShadows",94,0b,68,8c));
	outFields->push(HX_("receiveShadows",f0,34,80,52));
	outFields->push(HX_("staticShadows",85,79,a0,e6));
	outFields->push(HX_("textureShader",60,92,38,b0));
	outFields->push(HX_("specularShader",48,7e,df,20));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("specularTexture",58,48,09,e2));
	outFields->push(HX_("normalMap",b5,e2,8b,ab));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("specularAmount",fb,d0,c1,d8));
	outFields->push(HX_("specularPower",42,02,7b,87));
	outFields->push(HX_("blendMode",54,e4,37,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Material_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::shader::BaseMesh */ ,(int)offsetof(Material_obj,mshader),HX_("mshader",52,4f,c4,d1)},
	{::hx::fsObject /*  ::h3d::shader::NormalMap */ ,(int)offsetof(Material_obj,normalShader),HX_("normalShader",ac,3c,85,1b)},
	{::hx::fsObject /*  ::hxd::res::Resource */ ,(int)offsetof(Material_obj,model),HX_("model",a9,23,58,0c)},
	{::hx::fsBool,(int)offsetof(Material_obj,castShadows),HX_("castShadows",94,0b,68,8c)},
	{::hx::fsBool,(int)offsetof(Material_obj,receiveShadows),HX_("receiveShadows",f0,34,80,52)},
	{::hx::fsBool,(int)offsetof(Material_obj,staticShadows),HX_("staticShadows",85,79,a0,e6)},
	{::hx::fsObject /*  ::h3d::shader::Texture */ ,(int)offsetof(Material_obj,textureShader),HX_("textureShader",60,92,38,b0)},
	{::hx::fsObject /*  ::h3d::shader::SpecularTexture */ ,(int)offsetof(Material_obj,specularShader),HX_("specularShader",48,7e,df,20)},
	{::hx::fsObject /*  ::h2d::BlendMode */ ,(int)offsetof(Material_obj,blendMode),HX_("blendMode",54,e4,37,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Material_obj_sStaticStorageInfo = 0;
#endif

static ::String Material_obj_sMemberFields[] = {
	HX_("mshader",52,4f,c4,d1),
	HX_("normalShader",ac,3c,85,1b),
	HX_("model",a9,23,58,0c),
	HX_("castShadows",94,0b,68,8c),
	HX_("receiveShadows",f0,34,80,52),
	HX_("staticShadows",85,79,a0,e6),
	HX_("textureShader",60,92,38,b0),
	HX_("specularShader",48,7e,df,20),
	HX_("blendMode",54,e4,37,0c),
	HX_("get_specularPower",99,0d,eb,8d),
	HX_("set_specularPower",a5,e5,58,b1),
	HX_("get_specularAmount",c4,b1,5b,74),
	HX_("set_specularAmount",38,e4,0a,51),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_shadows",aa,7c,88,e5),
	HX_("set_shadows",b6,83,f5,ef),
	HX_("set_castShadows",37,40,15,49),
	HX_("set_receiveShadows",2d,48,c9,ca),
	HX_("set_staticShadows",e8,5c,7e,10),
	HX_("clone",5d,13,63,48),
	HX_("set_blendMode",37,9a,a1,12),
	HX_("get_specularTexture",6f,17,14,6d),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("get_normalMap",8c,b6,ef,6c),
	HX_("set_normalMap",98,98,f5,b1),
	HX_("set_specularTexture",7b,0a,b1,a9),
	HX_("getDefaultModelProps",b2,3d,2d,9e),
	HX_("getDefaultProps",a5,78,d5,a0),
	HX_("refreshProps",95,e3,11,dc),
	::String(null()) };

::hx::Class Material_obj::__mClass;

static ::String Material_obj_sStaticFields[] = {
	HX_("create",fc,66,0f,7c),
	::String(null())
};

void Material_obj::__register()
{
	Material_obj _hx_dummy;
	Material_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.mat.Material",aa,3e,3b,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Material_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Material_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Material_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Material_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Material_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Material_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace mat
