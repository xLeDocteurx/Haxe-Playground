#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
#ifndef INCLUDED_h2d_Layers
#include <h2d/Layers.h>
#endif
#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
#ifndef INCLUDED_h2d_RenderContext
#include <h2d/RenderContext.h>
#endif
#ifndef INCLUDED_h2d_Scene
#include <h2d/Scene.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_pass_ShaderManager
#include <h3d/pass/ShaderManager.h>
#endif
#ifndef INCLUDED_h3d_shader_Base2d
#include <h3d/shader/Base2d.h>
#endif
#ifndef INCLUDED_h3d_shader_ColorAdd
#include <h3d/shader/ColorAdd.h>
#endif
#ifndef INCLUDED_h3d_shader_ColorKey
#include <h3d/shader/ColorKey.h>
#endif
#ifndef INCLUDED_h3d_shader_ColorMatrix
#include <h3d/shader/ColorMatrix.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
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
#ifndef INCLUDED_hxsl__ShaderList_ShaderIterator
#include <hxsl/_ShaderList/ShaderIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3a28ba1c41751e13_52_new,"h2d.Drawable","new",0x69690644,"h2d.Drawable.new","h2d/Drawable.hx",52,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_58_set_tileWrap,"h2d.Drawable","set_tileWrap",0x4c872531,"h2d.Drawable.set_tileWrap","h2d/Drawable.hx",58,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_61_get_colorAdd,"h2d.Drawable","get_colorAdd",0x386a9a23,"h2d.Drawable.get_colorAdd","h2d/Drawable.hx",61,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_66_set_colorAdd,"h2d.Drawable","set_colorAdd",0x4d63bd97,"h2d.Drawable.set_colorAdd","h2d/Drawable.hx",66,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_82_drawFiltered,"h2d.Drawable","drawFiltered",0xe3e94fd7,"h2d.Drawable.drawFiltered","h2d/Drawable.hx",82,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_89_set_colorKey,"h2d.Drawable","set_colorKey",0x4d6b5515,"h2d.Drawable.set_colorKey","h2d/Drawable.hx",89,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_108_adjustColor,"h2d.Drawable","adjustColor",0x3a48e838,"h2d.Drawable.adjustColor","h2d/Drawable.hx",108,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_121_get_colorMatrix,"h2d.Drawable","get_colorMatrix",0x64d2fb7f,"h2d.Drawable.get_colorMatrix","h2d/Drawable.hx",121,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_126_set_colorMatrix,"h2d.Drawable","set_colorMatrix",0x609e788b,"h2d.Drawable.set_colorMatrix","h2d/Drawable.hx",126,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_146_getDebugShaderCode,"h2d.Drawable","getDebugShaderCode",0xea1dd9cb,"h2d.Drawable.getDebugShaderCode","h2d/Drawable.hx",146,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_152_getDebugShaderCode,"h2d.Drawable","getDebugShaderCode",0xea1dd9cb,"h2d.Drawable.getDebugShaderCode","h2d/Drawable.hx",152,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_163_getShader,"h2d.Drawable","getShader",0x7b00013f,"h2d.Drawable.getShader","h2d/Drawable.hx",163,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_176_getShaders,"h2d.Drawable","getShaders",0x25011654,"h2d.Drawable.getShaders","h2d/Drawable.hx",176,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_184_addShader,"h2d.Drawable","addShader",0xb6cdad0a,"h2d.Drawable.addShader","h2d/Drawable.hx",184,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_193_removeShader,"h2d.Drawable","removeShader",0x85bd4825,"h2d.Drawable.removeShader","h2d/Drawable.hx",193,0xa05adb4b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a28ba1c41751e13_209_emitTile,"h2d.Drawable","emitTile",0xe19daabd,"h2d.Drawable.emitTile","h2d/Drawable.hx",209,0xa05adb4b)
namespace h2d{

void Drawable_obj::__construct( ::h2d::Object parent){
            	HX_GC_STACKFRAME(&_hx_pos_3a28ba1c41751e13_52_new)
HXLINE(  53)		super::__construct(parent);
HXLINE(  54)		this->color =  ::h3d::Vector_obj::__alloc( HX_CTX ,1,1,1,1);
            	}

Dynamic Drawable_obj::__CreateEmpty() { return new Drawable_obj; }

void *Drawable_obj::_hx_vtable = 0;

Dynamic Drawable_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Drawable_obj > _hx_result = new Drawable_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Drawable_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0af28419) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0af28419;
	} else {
		return inClassId==(int)0x6c6b2aec;
	}
}

bool Drawable_obj::set_tileWrap(bool b){
            	HX_STACKFRAME(&_hx_pos_3a28ba1c41751e13_58_set_tileWrap)
HXDLIN(  58)		return (this->tileWrap = b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Drawable_obj,set_tileWrap,return )

 ::h3d::Vector Drawable_obj::get_colorAdd(){
            	HX_STACKFRAME(&_hx_pos_3a28ba1c41751e13_61_get_colorAdd)
HXLINE(  62)		 ::h3d::shader::ColorAdd s = ( ( ::h3d::shader::ColorAdd)(this->getShader(::hx::ClassOf< ::h3d::shader::ColorAdd >())) );
HXLINE(  63)		if (::hx::IsNull( s )) {
HXLINE(  63)			return null();
            		}
            		else {
HXLINE(  63)			return s->color__;
            		}
HXDLIN(  63)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Drawable_obj,get_colorAdd,return )

 ::h3d::Vector Drawable_obj::set_colorAdd( ::h3d::Vector c){
            	HX_GC_STACKFRAME(&_hx_pos_3a28ba1c41751e13_66_set_colorAdd)
HXLINE(  67)		 ::h3d::shader::ColorAdd s = ( ( ::h3d::shader::ColorAdd)(this->getShader(::hx::ClassOf< ::h3d::shader::ColorAdd >())) );
HXLINE(  68)		if (::hx::IsNull( s )) {
HXLINE(  69)			if (::hx::IsNotNull( c )) {
HXLINE(  70)				s = ( ( ::h3d::shader::ColorAdd)(this->addShader( ::h3d::shader::ColorAdd_obj::__alloc( HX_CTX ,null()))) );
HXLINE(  71)				s->color__ = c;
            			}
            		}
            		else {
HXLINE(  74)			if (::hx::IsNull( c )) {
HXLINE(  75)				this->removeShader(s);
            			}
            			else {
HXLINE(  77)				s->color__ = c;
            			}
            		}
HXLINE(  79)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Drawable_obj,set_colorAdd,return )

void Drawable_obj::drawFiltered( ::h2d::RenderContext ctx, ::h2d::Tile tile){
            	HX_STACKFRAME(&_hx_pos_3a28ba1c41751e13_82_drawFiltered)
HXLINE(  83)		 ::hxsl::ShaderList old = this->shaders;
HXLINE(  84)		this->shaders = null();
HXLINE(  85)		this->super::drawFiltered(ctx,tile);
HXLINE(  86)		this->shaders = old;
            	}


 ::Dynamic Drawable_obj::set_colorKey( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_3a28ba1c41751e13_89_set_colorKey)
HXLINE(  90)		 ::h3d::shader::ColorKey s = ( ( ::h3d::shader::ColorKey)(this->getShader(::hx::ClassOf< ::h3d::shader::ColorKey >())) );
HXLINE(  91)		if (::hx::IsNull( s )) {
HXLINE(  92)			if (::hx::IsNotNull( v )) {
HXLINE(  93)				s = ( ( ::h3d::shader::ColorKey)(this->addShader( ::h3d::shader::ColorKey_obj::__alloc( HX_CTX ,(-16777216 | ( (int)(v) ))))) );
            			}
            		}
            		else {
HXLINE(  95)			if (::hx::IsNull( v )) {
HXLINE(  96)				this->removeShader(s);
            			}
            			else {
HXLINE(  98)				 ::h3d::Vector _this = s->colorKey__;
HXDLIN(  98)				int c = (-16777216 | ( (int)(v) ));
HXDLIN(  98)				_this->x = (( (Float)(((c >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN(  98)				_this->y = (( (Float)(((c >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN(  98)				_this->z = (( (Float)((c & 255)) ) / ( (Float)(255) ));
HXDLIN(  98)				_this->w = (( (Float)(::hx::UShr(c,24)) ) / ( (Float)(255) ));
            			}
            		}
HXLINE( 100)		return (this->colorKey = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Drawable_obj,set_colorKey,return )

void Drawable_obj::adjustColor( ::Dynamic col){
            	HX_GC_STACKFRAME(&_hx_pos_3a28ba1c41751e13_108_adjustColor)
HXDLIN( 108)		if (::hx::IsNull( col )) {
HXLINE( 109)			this->set_colorMatrix(null());
            		}
            		else {
HXLINE( 111)			 ::h3d::Matrix m = this->get_colorMatrix();
HXLINE( 112)			if (::hx::IsNull( m )) {
HXLINE( 113)				m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 114)				this->set_colorMatrix(m);
            			}
HXLINE( 116)			m->identity();
HXLINE( 117)			m->adjustColor(col);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Drawable_obj,adjustColor,(void))

 ::h3d::Matrix Drawable_obj::get_colorMatrix(){
            	HX_STACKFRAME(&_hx_pos_3a28ba1c41751e13_121_get_colorMatrix)
HXLINE( 122)		 ::h3d::shader::ColorMatrix s = ( ( ::h3d::shader::ColorMatrix)(this->getShader(::hx::ClassOf< ::h3d::shader::ColorMatrix >())) );
HXLINE( 123)		if (::hx::IsNull( s )) {
HXLINE( 123)			return null();
            		}
            		else {
HXLINE( 123)			return s->matrix__;
            		}
HXDLIN( 123)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Drawable_obj,get_colorMatrix,return )

 ::h3d::Matrix Drawable_obj::set_colorMatrix( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_3a28ba1c41751e13_126_set_colorMatrix)
HXLINE( 127)		 ::h3d::shader::ColorMatrix s = ( ( ::h3d::shader::ColorMatrix)(this->getShader(::hx::ClassOf< ::h3d::shader::ColorMatrix >())) );
HXLINE( 128)		if (::hx::IsNull( s )) {
HXLINE( 129)			if (::hx::IsNotNull( m )) {
HXLINE( 130)				s = ( ( ::h3d::shader::ColorMatrix)(this->addShader( ::h3d::shader::ColorMatrix_obj::__alloc( HX_CTX ,null()))) );
HXLINE( 131)				s->matrix__ = m;
            			}
            		}
            		else {
HXLINE( 134)			if (::hx::IsNull( m )) {
HXLINE( 135)				this->removeShader(s);
            			}
            			else {
HXLINE( 137)				s->matrix__ = m;
            			}
            		}
HXLINE( 139)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Drawable_obj,set_colorMatrix,return )

::String Drawable_obj::getDebugShaderCode(::hx::Null< bool >  __o_toHxsl){
            		bool toHxsl = __o_toHxsl.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_3a28ba1c41751e13_146_getDebugShaderCode)
HXLINE( 148)		 ::h2d::RenderContext ctx = this->getScene()->ctx;
HXLINE( 149)		 ::h3d::pass::ShaderManager ctx1 = ctx->manager;
HXLINE( 147)		 ::hxsl::RuntimeShader shader = ctx1->compileShaders( ::hxsl::ShaderList_obj::__alloc( HX_CTX ,ctx->baseShader,this->shaders),null());
HXLINE( 151)		if (toHxsl) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,bool,varId) HXARGC(1)
            			::String _hx_run( ::Dynamic s){
            				HX_GC_STACKFRAME(&_hx_pos_3a28ba1c41751e13_152_getDebugShaderCode)
HXLINE( 152)				return ::hxsl::Printer_obj::shaderToString(s,varId);
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 152)			bool varId = true;
HXDLIN( 152)			 ::Dynamic toString =  ::Dynamic(new _hx_Closure_0(varId));
HXLINE( 153)			::String _hx_tmp = ((HX_("// vertex:\n",f4,81,2f,bc) + toString(shader->vertex->data)) + HX_("\n\nfragment:\n",20,9f,03,94));
HXDLIN( 153)			return (_hx_tmp + toString(shader->fragment->data));
            		}
            		else {
HXLINE( 155)			return ::h3d::Engine_obj::CURRENT->driver->getNativeShaderCode(shader);
            		}
HXLINE( 151)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Drawable_obj,getDebugShaderCode,return )

 ::Dynamic Drawable_obj::getShader(::hx::Class stype){
            	HX_STACKFRAME(&_hx_pos_3a28ba1c41751e13_163_getShader)
HXLINE( 164)		if (::hx::IsNotNull( this->shaders )) {
HXLINE( 164)			 ::hxsl::ShaderList last = null();
HXDLIN( 164)			 ::hxsl::ShaderList _g_l = this->shaders;
HXDLIN( 164)			 ::hxsl::ShaderList _g_last = last;
HXDLIN( 164)			while(::hx::IsInstanceNotEq( _g_l,_g_last )){
HXLINE( 164)				 ::hxsl::Shader s = _g_l->s;
HXDLIN( 164)				_g_l = _g_l->next;
HXDLIN( 164)				 ::hxsl::Shader s1 = s;
HXLINE( 165)				 ::Dynamic s2 = ::Std_obj::downcast(s1,stype);
HXLINE( 166)				if (::hx::IsNotNull( s2 )) {
HXLINE( 167)					return s2;
            				}
            			}
            		}
HXLINE( 169)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Drawable_obj,getShader,return )

 ::hxsl::_ShaderList::ShaderIterator Drawable_obj::getShaders(){
            	HX_GC_STACKFRAME(&_hx_pos_3a28ba1c41751e13_176_getShaders)
HXDLIN( 176)		return  ::hxsl::_ShaderList::ShaderIterator_obj::__alloc( HX_CTX ,this->shaders,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Drawable_obj,getShaders,return )

 ::Dynamic Drawable_obj::addShader( ::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_3a28ba1c41751e13_184_addShader)
HXLINE( 185)		if (::hx::IsNull( s )) {
HXLINE( 185)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Can't add null shader",5c,53,0c,a8)));
            		}
HXLINE( 186)		this->shaders = ::hxsl::ShaderList_obj::addSort(( ( ::hxsl::Shader)(s) ),this->shaders);
HXLINE( 187)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Drawable_obj,addShader,return )

bool Drawable_obj::removeShader( ::hxsl::Shader s){
            	HX_STACKFRAME(&_hx_pos_3a28ba1c41751e13_193_removeShader)
HXLINE( 194)		 ::hxsl::ShaderList prev = null();
HXDLIN( 194)		 ::hxsl::ShaderList cur = this->shaders;
HXLINE( 195)		while(::hx::IsNotNull( cur )){
HXLINE( 196)			if (::hx::IsInstanceEq( cur->s,s )) {
HXLINE( 197)				if (::hx::IsNull( prev )) {
HXLINE( 198)					this->shaders = cur->next;
            				}
            				else {
HXLINE( 200)					prev->next = cur->next;
            				}
HXLINE( 201)				return true;
            			}
HXLINE( 203)			prev = cur;
HXLINE( 204)			cur = cur->next;
            		}
HXLINE( 206)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Drawable_obj,removeShader,return )

void Drawable_obj::emitTile( ::h2d::RenderContext ctx, ::h2d::Tile tile){
            	HX_GC_STACKFRAME(&_hx_pos_3a28ba1c41751e13_209_emitTile)
HXLINE( 210)		if (::hx::IsNull( tile )) {
HXLINE( 211)			tile =  ::h2d::Tile_obj::__alloc( HX_CTX ,null(),( (Float)(0) ),( (Float)(0) ),( (Float)(5) ),( (Float)(5) ),null(),null());
            		}
HXLINE( 213)		if (!(ctx->drawTile(::hx::ObjectPtr<OBJ_>(this),tile))) {
HXLINE( 213)			return;
            		}
            	}



::hx::ObjectPtr< Drawable_obj > Drawable_obj::__new( ::h2d::Object parent) {
	::hx::ObjectPtr< Drawable_obj > __this = new Drawable_obj();
	__this->__construct(parent);
	return __this;
}

::hx::ObjectPtr< Drawable_obj > Drawable_obj::__alloc(::hx::Ctx *_hx_ctx, ::h2d::Object parent) {
	Drawable_obj *__this = (Drawable_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Drawable_obj), true, "h2d.Drawable"));
	*(void **)__this = Drawable_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

Drawable_obj::Drawable_obj()
{
}

void Drawable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Drawable);
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(tileWrap,"tileWrap");
	HX_MARK_MEMBER_NAME(colorKey,"colorKey");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	 ::h2d::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Drawable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(tileWrap,"tileWrap");
	HX_VISIT_MEMBER_NAME(colorKey,"colorKey");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	 ::h2d::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Drawable_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return ::hx::Val( smooth ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return ::hx::Val( shaders ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileWrap") ) { return ::hx::Val( tileWrap ); }
		if (HX_FIELD_EQ(inName,"colorKey") ) { return ::hx::Val( colorKey ); }
		if (HX_FIELD_EQ(inName,"colorAdd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colorAdd() ); }
		if (HX_FIELD_EQ(inName,"emitTile") ) { return ::hx::Val( emitTile_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getShader") ) { return ::hx::Val( getShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"addShader") ) { return ::hx::Val( addShader_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getShaders") ) { return ::hx::Val( getShaders_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorMatrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colorMatrix() ); }
		if (HX_FIELD_EQ(inName,"adjustColor") ) { return ::hx::Val( adjustColor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_tileWrap") ) { return ::hx::Val( set_tileWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_colorAdd") ) { return ::hx::Val( get_colorAdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorAdd") ) { return ::hx::Val( set_colorAdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawFiltered") ) { return ::hx::Val( drawFiltered_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorKey") ) { return ::hx::Val( set_colorKey_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeShader") ) { return ::hx::Val( removeShader_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_colorMatrix") ) { return ::hx::Val( get_colorMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorMatrix") ) { return ::hx::Val( set_colorMatrix_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getDebugShaderCode") ) { return ::hx::Val( getDebugShaderCode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Drawable_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tileWrap(inValue.Cast< bool >()) );tileWrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorKey") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorKey(inValue.Cast<  ::Dynamic >()) );colorKey=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorAdd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorAdd(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorMatrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorMatrix(inValue.Cast<  ::h3d::Matrix >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Drawable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("smooth",2e,08,6b,07));
	outFields->push(HX_("tileWrap",18,60,05,89));
	outFields->push(HX_("colorKey",fc,8f,e9,89));
	outFields->push(HX_("colorMatrix",04,c8,f0,75));
	outFields->push(HX_("colorAdd",7e,f8,e1,89));
	outFields->push(HX_("shaders",ae,81,86,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Drawable_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Drawable_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Drawable_obj,smooth),HX_("smooth",2e,08,6b,07)},
	{::hx::fsBool,(int)offsetof(Drawable_obj,tileWrap),HX_("tileWrap",18,60,05,89)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Drawable_obj,colorKey),HX_("colorKey",fc,8f,e9,89)},
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(Drawable_obj,shaders),HX_("shaders",ae,81,86,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Drawable_obj_sStaticStorageInfo = 0;
#endif

static ::String Drawable_obj_sMemberFields[] = {
	HX_("color",63,71,5c,4a),
	HX_("smooth",2e,08,6b,07),
	HX_("tileWrap",18,60,05,89),
	HX_("colorKey",fc,8f,e9,89),
	HX_("shaders",ae,81,86,5f),
	HX_("set_tileWrap",95,37,18,53),
	HX_("get_colorAdd",87,ac,fb,3e),
	HX_("set_colorAdd",fb,cf,f4,53),
	HX_("drawFiltered",3b,62,7a,ea),
	HX_("set_colorKey",79,67,fc,53),
	HX_("adjustColor",54,2e,75,5a),
	HX_("get_colorMatrix",9b,7f,d2,36),
	HX_("set_colorMatrix",a7,fc,9d,32),
	HX_("getDebugShaderCode",2f,cf,2a,74),
	HX_("getShader",5b,48,77,99),
	HX_("getShaders",b8,07,e8,ae),
	HX_("addShader",26,f4,44,d5),
	HX_("removeShader",89,5a,4e,8c),
	HX_("emitTile",21,bb,54,43),
	::String(null()) };

::hx::Class Drawable_obj::__mClass;

void Drawable_obj::__register()
{
	Drawable_obj _hx_dummy;
	Drawable_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Drawable",52,d4,57,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Drawable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Drawable_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Drawable_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Drawable_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
