#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_Camera
#include <h3d/Camera.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
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
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_scene_fwd_LightSystem
#include <h3d/scene/fwd/LightSystem.h>
#endif
#ifndef INCLUDED_h3d_shader_AmbientLight
#include <h3d/shader/AmbientLight.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7275f0a06cd80a90_3_new,"h3d.scene.fwd.LightSystem","new",0xfbbd4ba5,"h3d.scene.fwd.LightSystem.new","h3d/scene/fwd/LightSystem.hx",3,0x6bf09e6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7275f0a06cd80a90_24_get_additiveLighting,"h3d.scene.fwd.LightSystem","get_additiveLighting",0xf1042d1c,"h3d.scene.fwd.LightSystem.get_additiveLighting","h3d/scene/fwd/LightSystem.hx",24,0x6bf09e6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7275f0a06cd80a90_28_set_additiveLighting,"h3d.scene.fwd.LightSystem","set_additiveLighting",0xbdbbe490,"h3d.scene.fwd.LightSystem.set_additiveLighting","h3d/scene/fwd/LightSystem.hx",28,0x6bf09e6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7275f0a06cd80a90_31_initLights,"h3d.scene.fwd.LightSystem","initLights",0xc76c2d68,"h3d.scene.fwd.LightSystem.initLights","h3d/scene/fwd/LightSystem.hx",31,0x6bf09e6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7275f0a06cd80a90_37_initGlobals,"h3d.scene.fwd.LightSystem","initGlobals",0xb1913cc5,"h3d.scene.fwd.LightSystem.initGlobals","h3d/scene/fwd/LightSystem.hx",37,0x6bf09e6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7275f0a06cd80a90_42_sortLight,"h3d.scene.fwd.LightSystem","sortLight",0x72f1219d,"h3d.scene.fwd.LightSystem.sortLight","h3d/scene/fwd/LightSystem.hx",42,0x6bf09e6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7275f0a06cd80a90_48_computeLight,"h3d.scene.fwd.LightSystem","computeLight",0x47e9bdfa,"h3d.scene.fwd.LightSystem.computeLight","h3d/scene/fwd/LightSystem.hx",48,0x6bf09e6e)
namespace h3d{
namespace scene{
namespace fwd{

void LightSystem_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_7275f0a06cd80a90_3_new)
HXLINE(   8)		this->perPixelLighting = true;
HXLINE(   5)		this->maxLightsPerObject = 6;
HXLINE(  17)		super::__construct();
HXLINE(  18)		{
HXLINE(  18)			 ::h3d::Vector _this = this->ambientLight;
HXDLIN(  18)			_this->x = ((Float)0.5);
HXDLIN(  18)			_this->y = ((Float)0.5);
HXDLIN(  18)			_this->z = ((Float)0.5);
HXDLIN(  18)			_this->w = ((Float)1.);
            		}
HXLINE(  19)		this->ambientShader =  ::h3d::shader::AmbientLight_obj::__alloc( HX_CTX );
HXLINE(  20)		this->set_additiveLighting(true);
            	}

Dynamic LightSystem_obj::__CreateEmpty() { return new LightSystem_obj; }

void *LightSystem_obj::_hx_vtable = 0;

Dynamic LightSystem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LightSystem_obj > _hx_result = new LightSystem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LightSystem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3046418e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3046418e;
	} else {
		return inClassId==(int)0x74a67265;
	}
}

bool LightSystem_obj::get_additiveLighting(){
            	HX_STACKFRAME(&_hx_pos_7275f0a06cd80a90_24_get_additiveLighting)
HXDLIN(  24)		return ( ( ::h3d::shader::AmbientLight)(::Std_obj::downcast(this->ambientShader,::hx::ClassOf< ::h3d::shader::AmbientLight >())) )->additive__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightSystem_obj,get_additiveLighting,return )

bool LightSystem_obj::set_additiveLighting(bool b){
            	HX_STACKFRAME(&_hx_pos_7275f0a06cd80a90_28_set_additiveLighting)
HXDLIN(  28)		 ::h3d::shader::AmbientLight _this = ( ( ::h3d::shader::AmbientLight)(::Std_obj::downcast(this->ambientShader,::hx::ClassOf< ::h3d::shader::AmbientLight >())) );
HXDLIN(  28)		_this->constModified = true;
HXDLIN(  28)		return (_this->additive__ = b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightSystem_obj,set_additiveLighting,return )

void LightSystem_obj::initLights( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_7275f0a06cd80a90_31_initLights)
HXLINE(  32)		this->super::initLights(ctx);
HXLINE(  33)		if ((this->lightCount <= this->maxLightsPerObject)) {
HXLINE(  34)			 ::h3d::scene::Light list = ctx->lights;
HXDLIN(  34)			 ::Dynamic cmp = this->sortLight_dyn();
HXDLIN(  34)			 ::h3d::scene::Light _hx_tmp;
HXDLIN(  34)			if (::hx::IsNull( list )) {
HXLINE(  34)				_hx_tmp = null();
            			}
            			else {
HXLINE(  34)				int insize = 1;
HXDLIN(  34)				int nmerges;
HXDLIN(  34)				int psize = 0;
HXDLIN(  34)				int qsize = 0;
HXDLIN(  34)				 ::h3d::scene::Light p;
HXDLIN(  34)				 ::h3d::scene::Light q;
HXDLIN(  34)				 ::h3d::scene::Light e;
HXDLIN(  34)				 ::h3d::scene::Light tail;
HXDLIN(  34)				while(true){
HXLINE(  34)					p = list;
HXDLIN(  34)					list = null();
HXDLIN(  34)					tail = null();
HXDLIN(  34)					nmerges = 0;
HXDLIN(  34)					while(::hx::IsNotNull( p )){
HXLINE(  34)						nmerges = (nmerges + 1);
HXDLIN(  34)						q = p;
HXDLIN(  34)						psize = 0;
HXDLIN(  34)						{
HXLINE(  34)							int _g = 0;
HXDLIN(  34)							int _g1 = insize;
HXDLIN(  34)							while((_g < _g1)){
HXLINE(  34)								_g = (_g + 1);
HXDLIN(  34)								int i = (_g - 1);
HXDLIN(  34)								psize = (psize + 1);
HXDLIN(  34)								q = q->next;
HXDLIN(  34)								if (::hx::IsNull( q )) {
HXLINE(  34)									goto _hx_goto_5;
            								}
            							}
            							_hx_goto_5:;
            						}
HXDLIN(  34)						qsize = insize;
HXDLIN(  34)						while(true){
HXLINE(  34)							bool _hx_tmp;
HXDLIN(  34)							if ((psize <= 0)) {
HXLINE(  34)								if ((qsize > 0)) {
HXLINE(  34)									_hx_tmp = ::hx::IsNotNull( q );
            								}
            								else {
HXLINE(  34)									_hx_tmp = false;
            								}
            							}
            							else {
HXLINE(  34)								_hx_tmp = true;
            							}
HXDLIN(  34)							if (!(_hx_tmp)) {
HXLINE(  34)								goto _hx_goto_6;
            							}
HXDLIN(  34)							if ((psize == 0)) {
HXLINE(  34)								e = q;
HXDLIN(  34)								q = q->next;
HXDLIN(  34)								qsize = (qsize - 1);
            							}
            							else {
HXLINE(  34)								bool _hx_tmp;
HXDLIN(  34)								bool _hx_tmp1;
HXDLIN(  34)								if ((qsize != 0)) {
HXLINE(  34)									_hx_tmp1 = ::hx::IsNull( q );
            								}
            								else {
HXLINE(  34)									_hx_tmp1 = true;
            								}
HXDLIN(  34)								if (!(_hx_tmp1)) {
HXLINE(  34)									_hx_tmp = ::hx::IsLessEq( cmp(p,q),0 );
            								}
            								else {
HXLINE(  34)									_hx_tmp = true;
            								}
HXDLIN(  34)								if (_hx_tmp) {
HXLINE(  34)									e = p;
HXDLIN(  34)									p = p->next;
HXDLIN(  34)									psize = (psize - 1);
            								}
            								else {
HXLINE(  34)									e = q;
HXDLIN(  34)									q = q->next;
HXDLIN(  34)									qsize = (qsize - 1);
            								}
            							}
HXDLIN(  34)							if (::hx::IsNotNull( tail )) {
HXLINE(  34)								tail->next = e;
            							}
            							else {
HXLINE(  34)								list = e;
            							}
HXDLIN(  34)							tail = e;
            						}
            						_hx_goto_6:;
HXDLIN(  34)						p = q;
            					}
HXDLIN(  34)					tail->next = null();
HXDLIN(  34)					if ((nmerges <= 1)) {
HXLINE(  34)						goto _hx_goto_3;
            					}
HXDLIN(  34)					insize = (insize * 2);
            				}
            				_hx_goto_3:;
HXDLIN(  34)				_hx_tmp = list;
            			}
HXDLIN(  34)			ctx->lights = _hx_tmp;
            		}
            	}


void LightSystem_obj::initGlobals( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_7275f0a06cd80a90_37_initGlobals)
HXLINE(  38)		globals->set(HX_("global.ambientLight",89,0b,13,b2),this->ambientLight);
HXLINE(  39)		globals->set(HX_("global.perPixelLighting",c0,de,9c,60),this->perPixelLighting);
            	}


int LightSystem_obj::sortLight( ::h3d::scene::Light l1, ::h3d::scene::Light l2){
            	HX_STACKFRAME(&_hx_pos_7275f0a06cd80a90_42_sortLight)
HXLINE(  43)		int p = (l1->priority - l2->priority);
HXLINE(  44)		if ((p != 0)) {
HXLINE(  44)			return -(p);
            		}
HXLINE(  45)		if ((l1->objectDistance < l2->objectDistance)) {
HXLINE(  45)			return -1;
            		}
            		else {
HXLINE(  45)			return 1;
            		}
HXDLIN(  45)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(LightSystem_obj,sortLight,return )

 ::hxsl::ShaderList LightSystem_obj::computeLight( ::h3d::scene::Object obj, ::hxsl::ShaderList shaders){
            	HX_STACKFRAME(&_hx_pos_7275f0a06cd80a90_48_computeLight)
HXDLIN(  48)		 ::h3d::scene::fwd::LightSystem _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  49)		if ((this->lightCount > this->maxLightsPerObject)) {
HXLINE(  50)			 ::h3d::scene::Light l = this->ctx->lights;
HXLINE(  51)			while(::hx::IsNotNull( l )){
HXLINE(  52)				if (((obj->flags & 16) != 0)) {
HXLINE(  53)					Float dx = (l->absPos->_41 - this->ctx->camera->target->x);
HXDLIN(  53)					Float dy = (l->absPos->_42 - this->ctx->camera->target->y);
HXDLIN(  53)					Float dz = (l->absPos->_43 - this->ctx->camera->target->z);
HXDLIN(  53)					l->objectDistance = (((dx * dx) + (dy * dy)) + (dz * dz));
            				}
            				else {
HXLINE(  55)					Float dx = (l->absPos->_41 - obj->absPos->_41);
HXDLIN(  55)					Float dy = (l->absPos->_42 - obj->absPos->_42);
HXDLIN(  55)					Float dz = (l->absPos->_43 - obj->absPos->_43);
HXDLIN(  55)					l->objectDistance = (((dx * dx) + (dy * dy)) + (dz * dz));
            				}
HXLINE(  56)				l = l->next;
            			}
HXLINE(  58)			 ::h3d::scene::Light list = this->ctx->lights;
HXDLIN(  58)			 ::Dynamic cmp = this->sortLight_dyn();
HXDLIN(  58)			 ::h3d::scene::Light _hx_tmp;
HXDLIN(  58)			if (::hx::IsNull( list )) {
HXLINE(  58)				_hx_tmp = null();
            			}
            			else {
HXLINE(  58)				int insize = 1;
HXDLIN(  58)				int nmerges;
HXDLIN(  58)				int psize = 0;
HXDLIN(  58)				int qsize = 0;
HXDLIN(  58)				 ::h3d::scene::Light p;
HXDLIN(  58)				 ::h3d::scene::Light q;
HXDLIN(  58)				 ::h3d::scene::Light e;
HXDLIN(  58)				 ::h3d::scene::Light tail;
HXDLIN(  58)				while(true){
HXLINE(  58)					p = list;
HXDLIN(  58)					list = null();
HXDLIN(  58)					tail = null();
HXDLIN(  58)					nmerges = 0;
HXDLIN(  58)					while(::hx::IsNotNull( p )){
HXLINE(  58)						nmerges = (nmerges + 1);
HXDLIN(  58)						q = p;
HXDLIN(  58)						psize = 0;
HXDLIN(  58)						{
HXLINE(  58)							int _g = 0;
HXDLIN(  58)							int _g1 = insize;
HXDLIN(  58)							while((_g < _g1)){
HXLINE(  58)								_g = (_g + 1);
HXDLIN(  58)								int i = (_g - 1);
HXDLIN(  58)								psize = (psize + 1);
HXDLIN(  58)								q = q->next;
HXDLIN(  58)								if (::hx::IsNull( q )) {
HXLINE(  58)									goto _hx_goto_13;
            								}
            							}
            							_hx_goto_13:;
            						}
HXDLIN(  58)						qsize = insize;
HXDLIN(  58)						while(true){
HXLINE(  58)							bool _hx_tmp;
HXDLIN(  58)							if ((psize <= 0)) {
HXLINE(  58)								if ((qsize > 0)) {
HXLINE(  58)									_hx_tmp = ::hx::IsNotNull( q );
            								}
            								else {
HXLINE(  58)									_hx_tmp = false;
            								}
            							}
            							else {
HXLINE(  58)								_hx_tmp = true;
            							}
HXDLIN(  58)							if (!(_hx_tmp)) {
HXLINE(  58)								goto _hx_goto_14;
            							}
HXDLIN(  58)							if ((psize == 0)) {
HXLINE(  58)								e = q;
HXDLIN(  58)								q = q->next;
HXDLIN(  58)								qsize = (qsize - 1);
            							}
            							else {
HXLINE(  58)								bool _hx_tmp;
HXDLIN(  58)								bool _hx_tmp1;
HXDLIN(  58)								if ((qsize != 0)) {
HXLINE(  58)									_hx_tmp1 = ::hx::IsNull( q );
            								}
            								else {
HXLINE(  58)									_hx_tmp1 = true;
            								}
HXDLIN(  58)								if (!(_hx_tmp1)) {
HXLINE(  58)									_hx_tmp = ::hx::IsLessEq( cmp(p,q),0 );
            								}
            								else {
HXLINE(  58)									_hx_tmp = true;
            								}
HXDLIN(  58)								if (_hx_tmp) {
HXLINE(  58)									e = p;
HXDLIN(  58)									p = p->next;
HXDLIN(  58)									psize = (psize - 1);
            								}
            								else {
HXLINE(  58)									e = q;
HXDLIN(  58)									q = q->next;
HXDLIN(  58)									qsize = (qsize - 1);
            								}
            							}
HXDLIN(  58)							if (::hx::IsNotNull( tail )) {
HXLINE(  58)								tail->next = e;
            							}
            							else {
HXLINE(  58)								list = e;
            							}
HXDLIN(  58)							tail = e;
            						}
            						_hx_goto_14:;
HXDLIN(  58)						p = q;
            					}
HXDLIN(  58)					tail->next = null();
HXDLIN(  58)					if ((nmerges <= 1)) {
HXLINE(  58)						goto _hx_goto_11;
            					}
HXDLIN(  58)					insize = (insize * 2);
            				}
            				_hx_goto_11:;
HXDLIN(  58)				_hx_tmp = list;
            			}
HXDLIN(  58)			this->ctx->lights = _hx_tmp;
            		}
HXLINE(  63)		shaders = _gthis->ctx->allocShaderList(this->ambientShader,shaders);
HXLINE(  64)		 ::h3d::scene::Light l = this->ctx->lights;
HXLINE(  65)		int i = 0;
HXLINE(  66)		while(::hx::IsNotNull( l )){
HXLINE(  67)			i = (i + 1);
HXDLIN(  67)			if (((i - 1) == this->maxLightsPerObject)) {
HXLINE(  67)				goto _hx_goto_15;
            			}
HXLINE(  68)			shaders = _gthis->ctx->allocShaderList(l->shader,shaders);
HXLINE(  69)			l = l->next;
            		}
            		_hx_goto_15:;
HXLINE(  71)		return shaders;
            	}



::hx::ObjectPtr< LightSystem_obj > LightSystem_obj::__new() {
	::hx::ObjectPtr< LightSystem_obj > __this = new LightSystem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LightSystem_obj > LightSystem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LightSystem_obj *__this = (LightSystem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LightSystem_obj), true, "h3d.scene.fwd.LightSystem"));
	*(void **)__this = LightSystem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LightSystem_obj::LightSystem_obj()
{
}

void LightSystem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightSystem);
	HX_MARK_MEMBER_NAME(maxLightsPerObject,"maxLightsPerObject");
	HX_MARK_MEMBER_NAME(globals,"globals");
	HX_MARK_MEMBER_NAME(ambientShader,"ambientShader");
	HX_MARK_MEMBER_NAME(perPixelLighting,"perPixelLighting");
	 ::h3d::scene::LightSystem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightSystem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maxLightsPerObject,"maxLightsPerObject");
	HX_VISIT_MEMBER_NAME(globals,"globals");
	HX_VISIT_MEMBER_NAME(ambientShader,"ambientShader");
	HX_VISIT_MEMBER_NAME(perPixelLighting,"perPixelLighting");
	 ::h3d::scene::LightSystem_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LightSystem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { return ::hx::Val( globals ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sortLight") ) { return ::hx::Val( sortLight_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initLights") ) { return ::hx::Val( initLights_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initGlobals") ) { return ::hx::Val( initGlobals_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"computeLight") ) { return ::hx::Val( computeLight_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ambientShader") ) { return ::hx::Val( ambientShader ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"perPixelLighting") ) { return ::hx::Val( perPixelLighting ); }
		if (HX_FIELD_EQ(inName,"additiveLighting") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_additiveLighting() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"maxLightsPerObject") ) { return ::hx::Val( maxLightsPerObject ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_additiveLighting") ) { return ::hx::Val( get_additiveLighting_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_additiveLighting") ) { return ::hx::Val( set_additiveLighting_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LightSystem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { globals=inValue.Cast<  ::hxsl::Globals >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ambientShader") ) { ambientShader=inValue.Cast<  ::hxsl::Shader >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"perPixelLighting") ) { perPixelLighting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"additiveLighting") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_additiveLighting(inValue.Cast< bool >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"maxLightsPerObject") ) { maxLightsPerObject=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("maxLightsPerObject",9b,52,7b,bc));
	outFields->push(HX_("globals",b0,05,39,14));
	outFields->push(HX_("ambientShader",5d,ed,7b,96));
	outFields->push(HX_("perPixelLighting",55,13,61,0b));
	outFields->push(HX_("additiveLighting",f8,40,6e,3b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LightSystem_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(LightSystem_obj,maxLightsPerObject),HX_("maxLightsPerObject",9b,52,7b,bc)},
	{::hx::fsObject /*  ::hxsl::Globals */ ,(int)offsetof(LightSystem_obj,globals),HX_("globals",b0,05,39,14)},
	{::hx::fsObject /*  ::hxsl::Shader */ ,(int)offsetof(LightSystem_obj,ambientShader),HX_("ambientShader",5d,ed,7b,96)},
	{::hx::fsBool,(int)offsetof(LightSystem_obj,perPixelLighting),HX_("perPixelLighting",55,13,61,0b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LightSystem_obj_sStaticStorageInfo = 0;
#endif

static ::String LightSystem_obj_sMemberFields[] = {
	HX_("maxLightsPerObject",9b,52,7b,bc),
	HX_("globals",b0,05,39,14),
	HX_("ambientShader",5d,ed,7b,96),
	HX_("perPixelLighting",55,13,61,0b),
	HX_("get_additiveLighting",01,a6,d8,59),
	HX_("set_additiveLighting",75,5d,90,26),
	HX_("initLights",0d,86,47,ec),
	HX_("initGlobals",80,74,a3,cc),
	HX_("sortLight",98,64,70,7d),
	HX_("computeLight",df,49,c8,dc),
	::String(null()) };

::hx::Class LightSystem_obj::__mClass;

void LightSystem_obj::__register()
{
	LightSystem_obj _hx_dummy;
	LightSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.fwd.LightSystem",33,95,a3,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LightSystem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LightSystem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LightSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LightSystem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
} // end namespace fwd
