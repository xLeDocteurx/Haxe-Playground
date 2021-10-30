#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_Feature
#include <h3d/impl/Feature.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_Compare
#include <h3d/mat/Compare.h>
#endif
#ifndef INCLUDED_h3d_mat_Face
#include <h3d/mat/Face.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_pass_Copy
#include <h3d/pass/Copy.h>
#endif
#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
#ifndef INCLUDED_h3d_pass_ShaderManager
#include <h3d/pass/ShaderManager.h>
#endif
#ifndef INCLUDED_h3d_prim_Plane2D
#include <h3d/prim/Plane2D.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_scene__RenderContext_SharedGlobal
#include <h3d/scene/_RenderContext/SharedGlobal.h>
#endif
#ifndef INCLUDED_h3d_shader_Buffers
#include <h3d/shader/Buffers.h>
#endif
#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
#endif
#ifndef INCLUDED_h3d_shader_ShaderBuffers
#include <h3d/shader/ShaderBuffers.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a6416bab42338e0b_14_new,"h3d.pass.ScreenFx","new",0x2c8edf38,"h3d.pass.ScreenFx.new","h3d/pass/ScreenFx.hx",14,0xee3a2ed8)
HX_LOCAL_STACK_FRAME(_hx_pos_a6416bab42338e0b_23_get_engine,"h3d.pass.ScreenFx","get_engine",0x92feb3b3,"h3d.pass.ScreenFx.get_engine","h3d/pass/ScreenFx.hx",23,0xee3a2ed8)
HX_LOCAL_STACK_FRAME(_hx_pos_a6416bab42338e0b_29_copy,"h3d.pass.ScreenFx","copy",0xc936a9dd,"h3d.pass.ScreenFx.copy","h3d/pass/ScreenFx.hx",29,0xee3a2ed8)
HX_LOCAL_STACK_FRAME(_hx_pos_a6416bab42338e0b_33_setGlobals,"h3d.pass.ScreenFx","setGlobals",0x0d0b2656,"h3d.pass.ScreenFx.setGlobals","h3d/pass/ScreenFx.hx",33,0xee3a2ed8)
HX_LOCAL_STACK_FRAME(_hx_pos_a6416bab42338e0b_37_addShader,"h3d.pass.ScreenFx","addShader",0xa25ab4fe,"h3d.pass.ScreenFx.addShader","h3d/pass/ScreenFx.hx",37,0xee3a2ed8)
HX_LOCAL_STACK_FRAME(_hx_pos_a6416bab42338e0b_42_removeShader,"h3d.pass.ScreenFx","removeShader",0xd216b0b1,"h3d.pass.ScreenFx.removeShader","h3d/pass/ScreenFx.hx",42,0xee3a2ed8)
HX_LOCAL_STACK_FRAME(_hx_pos_a6416bab42338e0b_56_getShader,"h3d.pass.ScreenFx","getShader",0x668d0933,"h3d.pass.ScreenFx.getShader","h3d/pass/ScreenFx.hx",56,0xee3a2ed8)
HX_LOCAL_STACK_FRAME(_hx_pos_a6416bab42338e0b_64_render,"h3d.pass.ScreenFx","render",0xbf91337e,"h3d.pass.ScreenFx.render","h3d/pass/ScreenFx.hx",64,0xee3a2ed8)
HX_LOCAL_STACK_FRAME(_hx_pos_a6416bab42338e0b_83_dispose,"h3d.pass.ScreenFx","dispose",0x1bb3db77,"h3d.pass.ScreenFx.dispose","h3d/pass/ScreenFx.hx",83,0xee3a2ed8)
HX_LOCAL_STACK_FRAME(_hx_pos_a6416bab42338e0b_86_run,"h3d.pass.ScreenFx","run",0x2c91f623,"h3d.pass.ScreenFx.run","h3d/pass/ScreenFx.hx",86,0xee3a2ed8)
namespace h3d{
namespace pass{

void ScreenFx_obj::__construct( ::Dynamic shader,::Array< ::Dynamic> output){
            	HX_GC_STACKFRAME(&_hx_pos_a6416bab42338e0b_14_new)
HXLINE(  15)		this->shader = shader;
HXLINE(  16)		this->shaders =  ::hxsl::ShaderList_obj::__alloc( HX_CTX ,( ( ::hxsl::Shader)(shader) ),null());
HXLINE(  17)		this->manager =  ::h3d::pass::ShaderManager_obj::__alloc( HX_CTX ,output);
HXLINE(  18)		this->pass =  ::h3d::mat::Pass_obj::__alloc( HX_CTX ,HX_("screenfx",be,47,b4,c5), ::hxsl::ShaderList_obj::__alloc( HX_CTX ,( ( ::hxsl::Shader)(shader) ),null()),null());
HXLINE(  19)		this->pass->set_culling(::h3d::mat::Face_obj::None_dyn());
HXLINE(  20)		this->pass->depth(false,::h3d::mat::Compare_obj::Always_dyn());
            	}

Dynamic ScreenFx_obj::__CreateEmpty() { return new ScreenFx_obj; }

void *ScreenFx_obj::_hx_vtable = 0;

Dynamic ScreenFx_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenFx_obj > _hx_result = new ScreenFx_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ScreenFx_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x35a83008;
}

 ::h3d::Engine ScreenFx_obj::get_engine(){
            	HX_STACKFRAME(&_hx_pos_a6416bab42338e0b_23_get_engine)
HXLINE(  24)		if (::hx::IsNull( this->_engine )) {
HXLINE(  24)			this->_engine = ::h3d::Engine_obj::CURRENT;
            		}
HXLINE(  25)		return this->_engine;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenFx_obj,get_engine,return )

void ScreenFx_obj::copy( ::h3d::mat::Texture src, ::h3d::mat::Texture dst){
            	HX_STACKFRAME(&_hx_pos_a6416bab42338e0b_29_copy)
HXDLIN(  29)		::h3d::pass::Copy_obj::run(src,dst,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenFx_obj,copy,(void))

void ScreenFx_obj::setGlobals( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_a6416bab42338e0b_33_setGlobals)
HXDLIN(  33)		int _g = 0;
HXDLIN(  33)		::Array< ::Dynamic> _g1 = ctx->sharedGlobals;
HXDLIN(  33)		while((_g < _g1->length)){
HXDLIN(  33)			 ::h3d::scene::_RenderContext::SharedGlobal g = _g1->__get(_g).StaticCast<  ::h3d::scene::_RenderContext::SharedGlobal >();
HXDLIN(  33)			_g = (_g + 1);
HXLINE(  34)			this->manager->globals->map->set(g->gid,g->value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenFx_obj,setGlobals,(void))

 ::Dynamic ScreenFx_obj::addShader( ::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_a6416bab42338e0b_37_addShader)
HXLINE(  38)		this->shaders = ::hxsl::ShaderList_obj::addSort(( ( ::hxsl::Shader)(s) ),this->shaders);
HXLINE(  39)		return this->pass->addShader(s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenFx_obj,addShader,return )

bool ScreenFx_obj::removeShader( ::hxsl::Shader s){
            	HX_STACKFRAME(&_hx_pos_a6416bab42338e0b_42_removeShader)
HXLINE(  43)		 ::hxsl::ShaderList prev = null();
HXLINE(  44)		 ::hxsl::ShaderList cur = this->shaders;
HXLINE(  45)		while(::hx::IsNotNull( cur )){
HXLINE(  46)			if (::hx::IsInstanceEq( cur->s,s )) {
HXLINE(  47)				if (::hx::IsNull( prev )) {
HXLINE(  47)					this->shaders = cur->next;
            				}
            				else {
HXLINE(  47)					prev->next = cur->next;
            				}
HXLINE(  48)				return true;
            			}
HXLINE(  50)			prev = cur;
HXLINE(  51)			cur = cur->next;
            		}
HXLINE(  53)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenFx_obj,removeShader,return )

 ::Dynamic ScreenFx_obj::getShader(::hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_a6416bab42338e0b_56_getShader)
HXLINE(  57)		{
HXLINE(  57)			 ::hxsl::ShaderList last = null();
HXDLIN(  57)			 ::hxsl::ShaderList _g_l = this->shaders;
HXDLIN(  57)			 ::hxsl::ShaderList _g_last = last;
HXDLIN(  57)			while(::hx::IsInstanceNotEq( _g_l,_g_last )){
HXLINE(  57)				 ::hxsl::Shader s = _g_l->s;
HXDLIN(  57)				_g_l = _g_l->next;
HXDLIN(  57)				 ::hxsl::Shader s1 = s;
HXLINE(  58)				 ::Dynamic si = ::Std_obj::downcast(s1,cl);
HXLINE(  59)				if (::hx::IsNotNull( si )) {
HXLINE(  59)					return si;
            				}
            			}
            		}
HXLINE(  61)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenFx_obj,getShader,return )

void ScreenFx_obj::render(){
            	HX_GC_STACKFRAME(&_hx_pos_a6416bab42338e0b_64_render)
HXLINE(  65)		if (::hx::IsNull( this->primitive )) {
HXLINE(  66)			this->primitive = ( ( ::h3d::prim::Primitive)(::h3d::prim::Plane2D_obj::get()) );
            		}
HXLINE(  67)		{
HXLINE(  67)			 ::Dynamic _this = this->shader;
HXDLIN(  67)			Float _v;
HXDLIN(  67)			bool _v1;
HXDLIN(  67)			if (this->get_engine()->driver->hasFeature(::h3d::impl::Feature_obj::BottomLeftCoords_dyn())) {
HXLINE(  67)				_v1 = ::hx::IsNotNull( this->get_engine()->getCurrentTarget() );
            			}
            			else {
HXLINE(  67)				_v1 = false;
            			}
HXDLIN(  67)			if (_v1) {
HXLINE(  67)				_v = ( (Float)(-1) );
            			}
            			else {
HXLINE(  67)				_v = ( (Float)(1) );
            			}
HXDLIN(  67)			( ( ::h3d::shader::ScreenShader)(_this) )->flipY__ = _v;
            		}
HXLINE(  68)		 ::hxsl::RuntimeShader rts = this->manager->compileShaders(this->shaders,null());
HXLINE(  69)		this->get_engine()->selectMaterial(this->pass);
HXLINE(  70)		this->get_engine()->selectShader(rts);
HXLINE(  71)		if (::hx::IsNull( this->buffers )) {
HXLINE(  72)			this->buffers =  ::h3d::shader::Buffers_obj::__alloc( HX_CTX ,rts);
            		}
            		else {
HXLINE(  74)			 ::h3d::shader::Buffers _this = this->buffers;
HXDLIN(  74)			_this->vertex->grow(rts->vertex);
HXDLIN(  74)			_this->fragment->grow(rts->fragment);
            		}
HXLINE(  75)		this->manager->fillGlobals(this->buffers,rts);
HXLINE(  76)		this->manager->fillParams(this->buffers,rts,this->shaders);
HXLINE(  77)		this->get_engine()->uploadShaderBuffers(this->buffers,0);
HXLINE(  78)		this->get_engine()->uploadShaderBuffers(this->buffers,1);
HXLINE(  79)		this->get_engine()->uploadShaderBuffers(this->buffers,2);
HXLINE(  80)		 ::h3d::prim::Primitive _hx_tmp = this->primitive;
HXDLIN(  80)		_hx_tmp->render(this->get_engine());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenFx_obj,render,(void))

void ScreenFx_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a6416bab42338e0b_83_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenFx_obj,dispose,(void))

void ScreenFx_obj::run( ::h3d::shader::ScreenShader shader, ::h3d::mat::Texture output, ::Dynamic layer){
            	HX_GC_STACKFRAME(&_hx_pos_a6416bab42338e0b_86_run)
HXLINE(  87)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE(  88)		engine->pushTarget(output,layer,null());
HXLINE(  89)		 ::h3d::pass::ScreenFx_obj::__alloc( HX_CTX ,shader,null())->render();
HXLINE(  90)		engine->popTarget();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ScreenFx_obj,run,(void))


::hx::ObjectPtr< ScreenFx_obj > ScreenFx_obj::__new( ::Dynamic shader,::Array< ::Dynamic> output) {
	::hx::ObjectPtr< ScreenFx_obj > __this = new ScreenFx_obj();
	__this->__construct(shader,output);
	return __this;
}

::hx::ObjectPtr< ScreenFx_obj > ScreenFx_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic shader,::Array< ::Dynamic> output) {
	ScreenFx_obj *__this = (ScreenFx_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScreenFx_obj), true, "h3d.pass.ScreenFx"));
	*(void **)__this = ScreenFx_obj::_hx_vtable;
	__this->__construct(shader,output);
	return __this;
}

ScreenFx_obj::ScreenFx_obj()
{
}

void ScreenFx_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenFx);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(pass,"pass");
	HX_MARK_MEMBER_NAME(primitive,"primitive");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(_engine,"_engine");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_END_CLASS();
}

void ScreenFx_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(pass,"pass");
	HX_VISIT_MEMBER_NAME(primitive,"primitive");
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(_engine,"_engine");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
}

::hx::Val ScreenFx_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pass") ) { return ::hx::Val( pass ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"engine") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_engine() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return ::hx::Val( manager ); }
		if (HX_FIELD_EQ(inName,"_engine") ) { return ::hx::Val( _engine ); }
		if (HX_FIELD_EQ(inName,"shaders") ) { return ::hx::Val( shaders ); }
		if (HX_FIELD_EQ(inName,"buffers") ) { return ::hx::Val( buffers ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"primitive") ) { return ::hx::Val( primitive ); }
		if (HX_FIELD_EQ(inName,"addShader") ) { return ::hx::Val( addShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"getShader") ) { return ::hx::Val( getShader_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_engine") ) { return ::hx::Val( get_engine_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGlobals") ) { return ::hx::Val( setGlobals_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeShader") ) { return ::hx::Val( removeShader_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ScreenFx_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
	}
	return false;
}

::hx::Val ScreenFx_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pass") ) { pass=inValue.Cast<  ::h3d::mat::Pass >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast<  ::h3d::pass::ShaderManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_engine") ) { _engine=inValue.Cast<  ::h3d::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast<  ::h3d::shader::Buffers >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"primitive") ) { primitive=inValue.Cast<  ::h3d::prim::Primitive >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenFx_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("pass",d1,e4,51,4a));
	outFields->push(HX_("primitive",a7,88,58,27));
	outFields->push(HX_("manager",6d,92,c1,13));
	outFields->push(HX_("_engine",61,59,fb,6a));
	outFields->push(HX_("engine",c2,47,84,fc));
	outFields->push(HX_("shaders",ae,81,86,5f));
	outFields->push(HX_("buffers",73,a3,90,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenFx_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScreenFx_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::h3d::mat::Pass */ ,(int)offsetof(ScreenFx_obj,pass),HX_("pass",d1,e4,51,4a)},
	{::hx::fsObject /*  ::h3d::prim::Primitive */ ,(int)offsetof(ScreenFx_obj,primitive),HX_("primitive",a7,88,58,27)},
	{::hx::fsObject /*  ::h3d::pass::ShaderManager */ ,(int)offsetof(ScreenFx_obj,manager),HX_("manager",6d,92,c1,13)},
	{::hx::fsObject /*  ::h3d::Engine */ ,(int)offsetof(ScreenFx_obj,_engine),HX_("_engine",61,59,fb,6a)},
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(ScreenFx_obj,shaders),HX_("shaders",ae,81,86,5f)},
	{::hx::fsObject /*  ::h3d::shader::Buffers */ ,(int)offsetof(ScreenFx_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScreenFx_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenFx_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("pass",d1,e4,51,4a),
	HX_("primitive",a7,88,58,27),
	HX_("manager",6d,92,c1,13),
	HX_("_engine",61,59,fb,6a),
	HX_("shaders",ae,81,86,5f),
	HX_("buffers",73,a3,90,b1),
	HX_("get_engine",8b,b7,0b,ed),
	HX_("copy",b5,bb,c4,41),
	HX_("setGlobals",2e,2a,18,67),
	HX_("addShader",26,f4,44,d5),
	HX_("removeShader",89,5a,4e,8c),
	HX_("getShader",5b,48,77,99),
	HX_("render",56,6b,29,05),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class ScreenFx_obj::__mClass;

static ::String ScreenFx_obj_sStaticFields[] = {
	HX_("run",4b,e7,56,00),
	::String(null())
};

void ScreenFx_obj::__register()
{
	ScreenFx_obj _hx_dummy;
	ScreenFx_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.ScreenFx",46,23,f9,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ScreenFx_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ScreenFx_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenFx_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenFx_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenFx_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenFx_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
