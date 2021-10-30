#include <hxcpp.h>

#ifndef INCLUDED_h3d_Camera
#include <h3d/Camera.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
#ifndef INCLUDED_h3d_mat_Material
#include <h3d/mat/Material.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif
#ifndef INCLUDED_h3d_pass_ShaderManager
#include <h3d/pass/ShaderManager.h>
#endif
#ifndef INCLUDED_h3d_scene_Light
#include <h3d/scene/Light.h>
#endif
#ifndef INCLUDED_h3d_scene_LightSystem
#include <h3d/scene/LightSystem.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_PassObjects
#include <h3d/scene/PassObjects.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_scene_Scene
#include <h3d/scene/Scene.h>
#endif
#ifndef INCLUDED_h3d_scene__RenderContext_SharedGlobal
#include <h3d/scene/_RenderContext/SharedGlobal.h>
#endif
#ifndef INCLUDED_h3d_shader_Buffers
#include <h3d/shader/Buffers.h>
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
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_36_new,"h3d.scene.RenderContext","new",0x0f7182b4,"h3d.scene.RenderContext.new","h3d/scene/RenderContext.hx",36,0x10fee9fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_43_emit,"h3d.scene.RenderContext","emit",0x6df3f57f,"h3d.scene.RenderContext.emit","h3d/scene/RenderContext.hx",43,0x10fee9fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_51_start,"h3d.scene.RenderContext","start",0xdbb963b6,"h3d.scene.RenderContext.start","h3d/scene/RenderContext.hx",51,0x10fee9fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_63_nextPass,"h3d.scene.RenderContext","nextPass",0x1a15e890,"h3d.scene.RenderContext.nextPass","h3d/scene/RenderContext.hx",63,0x10fee9fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_68_getGlobal,"h3d.scene.RenderContext","getGlobal",0x7882e3ed,"h3d.scene.RenderContext.getGlobal","h3d/scene/RenderContext.hx",68,0x10fee9fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_77_setGlobal,"h3d.scene.RenderContext","setGlobal",0x5bd3cff9,"h3d.scene.RenderContext.setGlobal","h3d/scene/RenderContext.hx",77,0x10fee9fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_80_setGlobalID,"h3d.scene.RenderContext","setGlobalID",0xd462c014,"h3d.scene.RenderContext.setGlobalID","h3d/scene/RenderContext.hx",80,0x10fee9fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_89_emitPass,"h3d.scene.RenderContext","emitPass",0x64a131f0,"h3d.scene.RenderContext.emitPass","h3d/scene/RenderContext.hx",89,0x10fee9fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_104_allocShaderList,"h3d.scene.RenderContext","allocShaderList",0x07b68b4c,"h3d.scene.RenderContext.allocShaderList","h3d/scene/RenderContext.hx",104,0x10fee9fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_115_emitLight,"h3d.scene.RenderContext","emitLight",0x6010bed7,"h3d.scene.RenderContext.emitLight","h3d/scene/RenderContext.hx",115,0x10fee9fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_120_uploadParams,"h3d.scene.RenderContext","uploadParams",0x957d9353,"h3d.scene.RenderContext.uploadParams","h3d/scene/RenderContext.hx",120,0x10fee9fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a45a3e937f7c0f_127_done,"h3d.scene.RenderContext","done",0x6d4c47ae,"h3d.scene.RenderContext.done","h3d/scene/RenderContext.hx",127,0x10fee9fe)
namespace h3d{
namespace scene{

void RenderContext_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_36_new)
HXLINE(  37)		super::__construct();
HXLINE(  38)		this->cachedShaderList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  39)		this->cachedPassObjects = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic RenderContext_obj::__CreateEmpty() { return new RenderContext_obj; }

void *RenderContext_obj::_hx_vtable = 0;

Dynamic RenderContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RenderContext_obj > _hx_result = new RenderContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RenderContext_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4786bba0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4786bba0;
	} else {
		return inClassId==(int)0x6773c6a2;
	}
}

void RenderContext_obj::emit( ::h3d::mat::Material mat, ::h3d::scene::Object obj,::hx::Null< int >  __o_index){
            		int index = __o_index.Default(0);
            	HX_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_43_emit)
HXLINE(  44)		 ::h3d::mat::Pass p = mat->passes;
HXLINE(  45)		while(::hx::IsNotNull( p )){
HXLINE(  46)			this->emitPass(p,obj)->index = index;
HXLINE(  47)			p = p->nextPass;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(RenderContext_obj,emit,(void))

void RenderContext_obj::start(){
            	HX_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_51_start)
HXLINE(  52)		this->sharedGlobals = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  53)		this->lights = null();
HXLINE(  54)		this->drawPass = null();
HXLINE(  55)		this->passes = null();
HXLINE(  56)		this->lights = null();
HXLINE(  57)		this->cachedPos = 0;
HXLINE(  58)		this->visibleFlag = true;
HXLINE(  59)		 ::h3d::scene::RenderContext _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  59)		_hx_tmp->time = (_hx_tmp->time + this->elapsedTime);
HXLINE(  60)		this->frame++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,start,(void))

void RenderContext_obj::nextPass(){
            	HX_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_63_nextPass)
HXLINE(  64)		this->cachedPos = 0;
HXLINE(  65)		this->drawPass = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,nextPass,(void))

 ::Dynamic RenderContext_obj::getGlobal(::String name){
            	HX_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_68_getGlobal)
HXLINE(  69)		int id = ::hxsl::Globals_obj::allocID(name);
HXLINE(  70)		{
HXLINE(  70)			int _g = 0;
HXDLIN(  70)			::Array< ::Dynamic> _g1 = this->sharedGlobals;
HXDLIN(  70)			while((_g < _g1->length)){
HXLINE(  70)				 ::h3d::scene::_RenderContext::SharedGlobal g = _g1->__get(_g).StaticCast<  ::h3d::scene::_RenderContext::SharedGlobal >();
HXDLIN(  70)				_g = (_g + 1);
HXLINE(  71)				if ((g->gid == id)) {
HXLINE(  72)					return g->value;
            				}
            			}
            		}
HXLINE(  73)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,getGlobal,return )

void RenderContext_obj::setGlobal(::String name, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_77_setGlobal)
HXDLIN(  77)		this->setGlobalID(::hxsl::Globals_obj::allocID(name),value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,setGlobal,(void))

void RenderContext_obj::setGlobalID(int gid, ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_80_setGlobalID)
HXLINE(  81)		{
HXLINE(  81)			int _g = 0;
HXDLIN(  81)			::Array< ::Dynamic> _g1 = this->sharedGlobals;
HXDLIN(  81)			while((_g < _g1->length)){
HXLINE(  81)				 ::h3d::scene::_RenderContext::SharedGlobal g = _g1->__get(_g).StaticCast<  ::h3d::scene::_RenderContext::SharedGlobal >();
HXDLIN(  81)				_g = (_g + 1);
HXLINE(  82)				if ((g->gid == gid)) {
HXLINE(  83)					g->value = value;
HXLINE(  84)					return;
            				}
            			}
            		}
HXLINE(  86)		::Array< ::Dynamic> _hx_tmp = this->sharedGlobals;
HXDLIN(  86)		_hx_tmp->push( ::h3d::scene::_RenderContext::SharedGlobal_obj::__alloc( HX_CTX ,gid,value));
            	}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,setGlobalID,(void))

 ::h3d::pass::PassObject RenderContext_obj::emitPass( ::h3d::mat::Pass pass, ::h3d::scene::Object obj){
            	HX_GC_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_89_emitPass)
HXLINE(  90)		 ::h3d::pass::PassObject o = this->allocPool;
HXLINE(  91)		if (::hx::IsNull( o )) {
HXLINE(  92)			o =  ::h3d::pass::PassObject_obj::__alloc( HX_CTX );
HXLINE(  93)			o->nextAlloc = this->allocFirst;
HXLINE(  94)			this->allocFirst = o;
            		}
            		else {
HXLINE(  96)			this->allocPool = o->nextAlloc;
            		}
HXLINE(  97)		o->pass = pass;
HXLINE(  98)		o->obj = obj;
HXLINE(  99)		o->next = this->passes;
HXLINE( 100)		this->passes = o;
HXLINE( 101)		return o;
            	}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,emitPass,return )

 ::hxsl::ShaderList RenderContext_obj::allocShaderList( ::hxsl::Shader s, ::hxsl::ShaderList next){
            	HX_GC_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_104_allocShaderList)
HXLINE( 105)		 ::hxsl::ShaderList sl = this->cachedShaderList->__get(this->cachedPos++).StaticCast<  ::hxsl::ShaderList >();
HXLINE( 106)		if (::hx::IsNull( sl )) {
HXLINE( 107)			sl =  ::hxsl::ShaderList_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 108)			this->cachedShaderList[(this->cachedPos - 1)] = sl;
            		}
HXLINE( 110)		sl->s = s;
HXLINE( 111)		sl->next = next;
HXLINE( 112)		return sl;
            	}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,allocShaderList,return )

void RenderContext_obj::emitLight( ::h3d::scene::Light l){
            	HX_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_115_emitLight)
HXLINE( 116)		l->next = this->lights;
HXLINE( 117)		this->lights = l;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,emitLight,(void))

void RenderContext_obj::uploadParams(){
            	HX_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_120_uploadParams)
HXLINE( 121)		this->currentManager->fillParams(this->shaderBuffers,this->drawPass->shader,this->drawPass->shaders);
HXLINE( 122)		this->engine->uploadShaderBuffers(this->shaderBuffers,1);
HXLINE( 123)		this->engine->uploadShaderBuffers(this->shaderBuffers,2);
HXLINE( 124)		this->engine->uploadShaderBuffers(this->shaderBuffers,3);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,uploadParams,(void))

void RenderContext_obj::done(){
            	HX_STACKFRAME(&_hx_pos_c9a45a3e937f7c0f_127_done)
HXLINE( 128)		this->drawPass = null();
HXLINE( 130)		 ::h3d::pass::PassObject p = this->allocFirst;
HXLINE( 131)		while(true){
HXLINE( 131)			bool _hx_tmp;
HXDLIN( 131)			if (::hx::IsNotNull( p )) {
HXLINE( 131)				_hx_tmp = ::hx::IsInstanceNotEq( p,this->allocPool );
            			}
            			else {
HXLINE( 131)				_hx_tmp = false;
            			}
HXDLIN( 131)			if (!(_hx_tmp)) {
HXLINE( 131)				goto _hx_goto_14;
            			}
HXLINE( 132)			p->obj = null();
HXLINE( 133)			p->pass = null();
HXLINE( 134)			p->shader = null();
HXLINE( 135)			p->shaders = null();
HXLINE( 136)			p->next = null();
HXLINE( 137)			p->index = 0;
HXLINE( 138)			p->texture = 0;
HXLINE( 139)			p = p->nextAlloc;
            		}
            		_hx_goto_14:;
HXLINE( 142)		if (::hx::IsNotNull( this->allocPool )) {
HXLINE( 143)			this->allocFirst = this->allocFirst->nextAlloc;
            		}
HXLINE( 144)		this->allocPool = this->allocFirst;
HXLINE( 145)		{
HXLINE( 145)			int _g = 0;
HXDLIN( 145)			::Array< ::Dynamic> _g1 = this->cachedShaderList;
HXDLIN( 145)			while((_g < _g1->length)){
HXLINE( 145)				 ::hxsl::ShaderList c = _g1->__get(_g).StaticCast<  ::hxsl::ShaderList >();
HXDLIN( 145)				_g = (_g + 1);
HXLINE( 146)				c->s = null();
HXLINE( 147)				c->next = null();
            			}
            		}
HXLINE( 149)		this->passes = null();
HXLINE( 150)		this->lights = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,done,(void))


::hx::ObjectPtr< RenderContext_obj > RenderContext_obj::__new() {
	::hx::ObjectPtr< RenderContext_obj > __this = new RenderContext_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RenderContext_obj > RenderContext_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RenderContext_obj *__this = (RenderContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderContext_obj), true, "h3d.scene.RenderContext"));
	*(void **)__this = RenderContext_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RenderContext_obj::RenderContext_obj()
{
}

void RenderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderContext);
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(drawPass,"drawPass");
	HX_MARK_MEMBER_NAME(pbrLightPass,"pbrLightPass");
	HX_MARK_MEMBER_NAME(computingStatic,"computingStatic");
	HX_MARK_MEMBER_NAME(sharedGlobals,"sharedGlobals");
	HX_MARK_MEMBER_NAME(lightSystem,"lightSystem");
	HX_MARK_MEMBER_NAME(extraShaders,"extraShaders");
	HX_MARK_MEMBER_NAME(visibleFlag,"visibleFlag");
	HX_MARK_MEMBER_NAME(shaderBuffers,"shaderBuffers");
	HX_MARK_MEMBER_NAME(cullingCollider,"cullingCollider");
	HX_MARK_MEMBER_NAME(allocPool,"allocPool");
	HX_MARK_MEMBER_NAME(allocFirst,"allocFirst");
	HX_MARK_MEMBER_NAME(cachedShaderList,"cachedShaderList");
	HX_MARK_MEMBER_NAME(cachedPassObjects,"cachedPassObjects");
	HX_MARK_MEMBER_NAME(cachedPos,"cachedPos");
	HX_MARK_MEMBER_NAME(passes,"passes");
	HX_MARK_MEMBER_NAME(lights,"lights");
	HX_MARK_MEMBER_NAME(currentManager,"currentManager");
	 ::h3d::impl::RenderContext_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(drawPass,"drawPass");
	HX_VISIT_MEMBER_NAME(pbrLightPass,"pbrLightPass");
	HX_VISIT_MEMBER_NAME(computingStatic,"computingStatic");
	HX_VISIT_MEMBER_NAME(sharedGlobals,"sharedGlobals");
	HX_VISIT_MEMBER_NAME(lightSystem,"lightSystem");
	HX_VISIT_MEMBER_NAME(extraShaders,"extraShaders");
	HX_VISIT_MEMBER_NAME(visibleFlag,"visibleFlag");
	HX_VISIT_MEMBER_NAME(shaderBuffers,"shaderBuffers");
	HX_VISIT_MEMBER_NAME(cullingCollider,"cullingCollider");
	HX_VISIT_MEMBER_NAME(allocPool,"allocPool");
	HX_VISIT_MEMBER_NAME(allocFirst,"allocFirst");
	HX_VISIT_MEMBER_NAME(cachedShaderList,"cachedShaderList");
	HX_VISIT_MEMBER_NAME(cachedPassObjects,"cachedPassObjects");
	HX_VISIT_MEMBER_NAME(cachedPos,"cachedPos");
	HX_VISIT_MEMBER_NAME(passes,"passes");
	HX_VISIT_MEMBER_NAME(lights,"lights");
	HX_VISIT_MEMBER_NAME(currentManager,"currentManager");
	 ::h3d::impl::RenderContext_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RenderContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"emit") ) { return ::hx::Val( emit_dyn() ); }
		if (HX_FIELD_EQ(inName,"done") ) { return ::hx::Val( done_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return ::hx::Val( scene ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return ::hx::Val( camera ); }
		if (HX_FIELD_EQ(inName,"passes") ) { return ::hx::Val( passes ); }
		if (HX_FIELD_EQ(inName,"lights") ) { return ::hx::Val( lights ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawPass") ) { return ::hx::Val( drawPass ); }
		if (HX_FIELD_EQ(inName,"nextPass") ) { return ::hx::Val( nextPass_dyn() ); }
		if (HX_FIELD_EQ(inName,"emitPass") ) { return ::hx::Val( emitPass_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocPool") ) { return ::hx::Val( allocPool ); }
		if (HX_FIELD_EQ(inName,"cachedPos") ) { return ::hx::Val( cachedPos ); }
		if (HX_FIELD_EQ(inName,"getGlobal") ) { return ::hx::Val( getGlobal_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGlobal") ) { return ::hx::Val( setGlobal_dyn() ); }
		if (HX_FIELD_EQ(inName,"emitLight") ) { return ::hx::Val( emitLight_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allocFirst") ) { return ::hx::Val( allocFirst ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightSystem") ) { return ::hx::Val( lightSystem ); }
		if (HX_FIELD_EQ(inName,"visibleFlag") ) { return ::hx::Val( visibleFlag ); }
		if (HX_FIELD_EQ(inName,"setGlobalID") ) { return ::hx::Val( setGlobalID_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pbrLightPass") ) { return ::hx::Val( pbrLightPass ); }
		if (HX_FIELD_EQ(inName,"extraShaders") ) { return ::hx::Val( extraShaders ); }
		if (HX_FIELD_EQ(inName,"uploadParams") ) { return ::hx::Val( uploadParams_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sharedGlobals") ) { return ::hx::Val( sharedGlobals ); }
		if (HX_FIELD_EQ(inName,"shaderBuffers") ) { return ::hx::Val( shaderBuffers ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentManager") ) { return ::hx::Val( currentManager ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computingStatic") ) { return ::hx::Val( computingStatic ); }
		if (HX_FIELD_EQ(inName,"cullingCollider") ) { return ::hx::Val( cullingCollider ); }
		if (HX_FIELD_EQ(inName,"allocShaderList") ) { return ::hx::Val( allocShaderList_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedShaderList") ) { return ::hx::Val( cachedShaderList ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cachedPassObjects") ) { return ::hx::Val( cachedPassObjects ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RenderContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast<  ::h3d::scene::Scene >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast<  ::h3d::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"passes") ) { passes=inValue.Cast<  ::h3d::pass::PassObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lights") ) { lights=inValue.Cast<  ::h3d::scene::Light >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawPass") ) { drawPass=inValue.Cast<  ::h3d::pass::PassObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocPool") ) { allocPool=inValue.Cast<  ::h3d::pass::PassObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cachedPos") ) { cachedPos=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allocFirst") ) { allocFirst=inValue.Cast<  ::h3d::pass::PassObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightSystem") ) { lightSystem=inValue.Cast<  ::h3d::scene::LightSystem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visibleFlag") ) { visibleFlag=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pbrLightPass") ) { pbrLightPass=inValue.Cast<  ::h3d::mat::Pass >(); return inValue; }
		if (HX_FIELD_EQ(inName,"extraShaders") ) { extraShaders=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sharedGlobals") ) { sharedGlobals=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaderBuffers") ) { shaderBuffers=inValue.Cast<  ::h3d::shader::Buffers >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentManager") ) { currentManager=inValue.Cast<  ::h3d::pass::ShaderManager >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computingStatic") ) { computingStatic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cullingCollider") ) { cullingCollider=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedShaderList") ) { cachedShaderList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cachedPassObjects") ) { cachedPassObjects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("camera",a5,46,8c,b7));
	outFields->push(HX_("scene",4c,d9,d1,78));
	outFields->push(HX_("drawPass",f5,8e,bb,5e));
	outFields->push(HX_("pbrLightPass",67,0a,51,1f));
	outFields->push(HX_("computingStatic",42,dc,f4,92));
	outFields->push(HX_("sharedGlobals",8b,1d,2a,f3));
	outFields->push(HX_("lightSystem",65,e0,30,57));
	outFields->push(HX_("extraShaders",fe,80,fc,42));
	outFields->push(HX_("visibleFlag",3e,d1,05,ed));
	outFields->push(HX_("shaderBuffers",ce,6a,31,2d));
	outFields->push(HX_("cullingCollider",c4,6d,5f,be));
	outFields->push(HX_("allocPool",f1,2f,4d,31));
	outFields->push(HX_("allocFirst",7b,fb,45,2c));
	outFields->push(HX_("cachedShaderList",a5,d0,96,8e));
	outFields->push(HX_("cachedPassObjects",41,b7,6f,ea));
	outFields->push(HX_("cachedPos",d2,4e,32,53));
	outFields->push(HX_("passes",7f,d3,31,ee));
	outFields->push(HX_("lights",dd,2a,02,e8));
	outFields->push(HX_("currentManager",34,07,56,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RenderContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Camera */ ,(int)offsetof(RenderContext_obj,camera),HX_("camera",a5,46,8c,b7)},
	{::hx::fsObject /*  ::h3d::scene::Scene */ ,(int)offsetof(RenderContext_obj,scene),HX_("scene",4c,d9,d1,78)},
	{::hx::fsObject /*  ::h3d::pass::PassObject */ ,(int)offsetof(RenderContext_obj,drawPass),HX_("drawPass",f5,8e,bb,5e)},
	{::hx::fsObject /*  ::h3d::mat::Pass */ ,(int)offsetof(RenderContext_obj,pbrLightPass),HX_("pbrLightPass",67,0a,51,1f)},
	{::hx::fsBool,(int)offsetof(RenderContext_obj,computingStatic),HX_("computingStatic",42,dc,f4,92)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(RenderContext_obj,sharedGlobals),HX_("sharedGlobals",8b,1d,2a,f3)},
	{::hx::fsObject /*  ::h3d::scene::LightSystem */ ,(int)offsetof(RenderContext_obj,lightSystem),HX_("lightSystem",65,e0,30,57)},
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(RenderContext_obj,extraShaders),HX_("extraShaders",fe,80,fc,42)},
	{::hx::fsBool,(int)offsetof(RenderContext_obj,visibleFlag),HX_("visibleFlag",3e,d1,05,ed)},
	{::hx::fsObject /*  ::h3d::shader::Buffers */ ,(int)offsetof(RenderContext_obj,shaderBuffers),HX_("shaderBuffers",ce,6a,31,2d)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(RenderContext_obj,cullingCollider),HX_("cullingCollider",c4,6d,5f,be)},
	{::hx::fsObject /*  ::h3d::pass::PassObject */ ,(int)offsetof(RenderContext_obj,allocPool),HX_("allocPool",f1,2f,4d,31)},
	{::hx::fsObject /*  ::h3d::pass::PassObject */ ,(int)offsetof(RenderContext_obj,allocFirst),HX_("allocFirst",7b,fb,45,2c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(RenderContext_obj,cachedShaderList),HX_("cachedShaderList",a5,d0,96,8e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(RenderContext_obj,cachedPassObjects),HX_("cachedPassObjects",41,b7,6f,ea)},
	{::hx::fsInt,(int)offsetof(RenderContext_obj,cachedPos),HX_("cachedPos",d2,4e,32,53)},
	{::hx::fsObject /*  ::h3d::pass::PassObject */ ,(int)offsetof(RenderContext_obj,passes),HX_("passes",7f,d3,31,ee)},
	{::hx::fsObject /*  ::h3d::scene::Light */ ,(int)offsetof(RenderContext_obj,lights),HX_("lights",dd,2a,02,e8)},
	{::hx::fsObject /*  ::h3d::pass::ShaderManager */ ,(int)offsetof(RenderContext_obj,currentManager),HX_("currentManager",34,07,56,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RenderContext_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderContext_obj_sMemberFields[] = {
	HX_("camera",a5,46,8c,b7),
	HX_("scene",4c,d9,d1,78),
	HX_("drawPass",f5,8e,bb,5e),
	HX_("pbrLightPass",67,0a,51,1f),
	HX_("computingStatic",42,dc,f4,92),
	HX_("sharedGlobals",8b,1d,2a,f3),
	HX_("lightSystem",65,e0,30,57),
	HX_("extraShaders",fe,80,fc,42),
	HX_("visibleFlag",3e,d1,05,ed),
	HX_("shaderBuffers",ce,6a,31,2d),
	HX_("cullingCollider",c4,6d,5f,be),
	HX_("allocPool",f1,2f,4d,31),
	HX_("allocFirst",7b,fb,45,2c),
	HX_("cachedShaderList",a5,d0,96,8e),
	HX_("cachedPassObjects",41,b7,6f,ea),
	HX_("cachedPos",d2,4e,32,53),
	HX_("passes",7f,d3,31,ee),
	HX_("lights",dd,2a,02,e8),
	HX_("currentManager",34,07,56,21),
	HX_("emit",53,9e,15,43),
	HX_("start",62,74,0b,84),
	HX_("nextPass",64,8b,1e,f6),
	HX_("getGlobal",99,ba,08,24),
	HX_("setGlobal",a5,a6,59,07),
	HX_("setGlobalID",c0,99,0c,ce),
	HX_("emitPass",c4,d4,a9,40),
	HX_("allocShaderList",f8,aa,ac,86),
	HX_("emitLight",83,95,96,0b),
	HX_("uploadParams",27,30,72,10),
	HX_("done",82,f0,6d,42),
	::String(null()) };

::hx::Class RenderContext_obj::__mClass;

void RenderContext_obj::__register()
{
	RenderContext_obj _hx_dummy;
	RenderContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.RenderContext",c2,58,6d,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RenderContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RenderContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
