#include <hxcpp.h>

#ifndef INCLUDED_h3d_Camera
#include <h3d/Camera.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_col_Frustum
#include <h3d/col/Frustum.h>
#endif
#ifndef INCLUDED_h3d_col_Sphere
#include <h3d/col/Sphere.h>
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
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e88a547ba8d5519_3_new,"h3d.scene.LightSystem","new",0xafb71ba0,"h3d.scene.LightSystem.new","h3d/scene/LightSystem.hx",3,0xfd653e12)
HX_LOCAL_STACK_FRAME(_hx_pos_4e88a547ba8d5519_16_initGlobals,"h3d.scene.LightSystem","initGlobals",0x8d23ffc0,"h3d.scene.LightSystem.initGlobals","h3d/scene/LightSystem.hx",16,0xfd653e12)
HX_LOCAL_STACK_FRAME(_hx_pos_4e88a547ba8d5519_19_cullLights,"h3d.scene.LightSystem","cullLights",0xf516d2ef,"h3d.scene.LightSystem.cullLights","h3d/scene/LightSystem.hx",19,0xfd653e12)
HX_LOCAL_STACK_FRAME(_hx_pos_4e88a547ba8d5519_45_initLights,"h3d.scene.LightSystem","initLights",0x535022cd,"h3d.scene.LightSystem.initLights","h3d/scene/LightSystem.hx",45,0xfd653e12)
HX_LOCAL_STACK_FRAME(_hx_pos_4e88a547ba8d5519_63_computeLight,"h3d.scene.LightSystem","computeLight",0x8cc1969f,"h3d.scene.LightSystem.computeLight","h3d/scene/LightSystem.hx",63,0xfd653e12)
namespace h3d{
namespace scene{

void LightSystem_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4e88a547ba8d5519_3_new)
HXLINE(   5)		this->drawPasses = 0;
HXLINE(  13)		this->ambientLight =  ::h3d::Vector_obj::__alloc( HX_CTX ,1,1,1,null());
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x3046418e;
}

void LightSystem_obj::initGlobals( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_4e88a547ba8d5519_16_initGlobals)
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightSystem_obj,initGlobals,(void))

void LightSystem_obj::cullLights(){
            	HX_GC_STACKFRAME(&_hx_pos_4e88a547ba8d5519_19_cullLights)
HXLINE(  21)		 ::h3d::scene::Light l = this->ctx->lights;
HXDLIN(  21)		 ::h3d::scene::Light prev = null();
HXLINE(  22)		 ::h3d::col::Sphere s =  ::h3d::col::Sphere_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  23)		while(::hx::IsNotNull( l )){
HXLINE(  24)			s->x = l->absPos->_41;
HXLINE(  25)			s->y = l->absPos->_42;
HXLINE(  26)			s->z = l->absPos->_43;
HXLINE(  27)			s->r = l->cullingDistance;
HXLINE(  29)			bool _hx_tmp;
HXDLIN(  29)			bool _hx_tmp1;
HXDLIN(  29)			if ((l->cullingDistance > 0)) {
HXLINE(  29)				_hx_tmp1 = !(this->ctx->computingStatic);
            			}
            			else {
HXLINE(  29)				_hx_tmp1 = false;
            			}
HXDLIN(  29)			if (_hx_tmp1) {
HXLINE(  29)				_hx_tmp = !(this->ctx->camera->frustum->hasSphere(s));
            			}
            			else {
HXLINE(  29)				_hx_tmp = false;
            			}
HXDLIN(  29)			if (_hx_tmp) {
HXLINE(  30)				if (::hx::IsNull( prev )) {
HXLINE(  31)					this->ctx->lights = l->next;
            				}
            				else {
HXLINE(  33)					prev->next = l->next;
            				}
HXLINE(  34)				l = l->next;
HXLINE(  35)				continue;
            			}
HXLINE(  38)			this->lightCount++;
HXLINE(  39)			l->objectDistance = ((Float)0.);
HXLINE(  40)			prev = l;
HXLINE(  41)			l = l->next;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightSystem_obj,cullLights,(void))

void LightSystem_obj::initLights( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_4e88a547ba8d5519_45_initLights)
HXLINE(  46)		this->lightCount = 0;
HXLINE(  47)		this->ctx = ctx;
HXLINE(  48)		this->cullLights();
HXLINE(  49)		bool _hx_tmp;
HXDLIN(  49)		if (::hx::IsNotNull( this->shadowLight )) {
HXLINE(  49)			_hx_tmp = ((this->shadowLight->flags & 32) == 0);
            		}
            		else {
HXLINE(  49)			_hx_tmp = true;
            		}
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  50)			 ::h3d::scene::Light l = ctx->lights;
HXLINE(  51)			while(::hx::IsNotNull( l )){
HXLINE(  52)				 ::h3d::Vector dir = l->getShadowDirection();
HXLINE(  53)				if (::hx::IsNotNull( dir )) {
HXLINE(  54)					this->shadowLight = l;
HXLINE(  55)					goto _hx_goto_4;
            				}
HXLINE(  57)				l = l->next;
            			}
            			_hx_goto_4:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightSystem_obj,initLights,(void))

 ::hxsl::ShaderList LightSystem_obj::computeLight( ::h3d::scene::Object obj, ::hxsl::ShaderList shaders){
            	HX_STACKFRAME(&_hx_pos_4e88a547ba8d5519_63_computeLight)
HXDLIN(  63)		return shaders;
            	}


HX_DEFINE_DYNAMIC_FUNC2(LightSystem_obj,computeLight,return )


::hx::ObjectPtr< LightSystem_obj > LightSystem_obj::__new() {
	::hx::ObjectPtr< LightSystem_obj > __this = new LightSystem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LightSystem_obj > LightSystem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LightSystem_obj *__this = (LightSystem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LightSystem_obj), true, "h3d.scene.LightSystem"));
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
	HX_MARK_MEMBER_NAME(drawPasses,"drawPasses");
	HX_MARK_MEMBER_NAME(ambientLight,"ambientLight");
	HX_MARK_MEMBER_NAME(shadowLight,"shadowLight");
	HX_MARK_MEMBER_NAME(lightCount,"lightCount");
	HX_MARK_MEMBER_NAME(ctx,"ctx");
	HX_MARK_END_CLASS();
}

void LightSystem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(drawPasses,"drawPasses");
	HX_VISIT_MEMBER_NAME(ambientLight,"ambientLight");
	HX_VISIT_MEMBER_NAME(shadowLight,"shadowLight");
	HX_VISIT_MEMBER_NAME(lightCount,"lightCount");
	HX_VISIT_MEMBER_NAME(ctx,"ctx");
}

::hx::Val LightSystem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { return ::hx::Val( ctx ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawPasses") ) { return ::hx::Val( drawPasses ); }
		if (HX_FIELD_EQ(inName,"lightCount") ) { return ::hx::Val( lightCount ); }
		if (HX_FIELD_EQ(inName,"cullLights") ) { return ::hx::Val( cullLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"initLights") ) { return ::hx::Val( initLights_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shadowLight") ) { return ::hx::Val( shadowLight ); }
		if (HX_FIELD_EQ(inName,"initGlobals") ) { return ::hx::Val( initGlobals_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ambientLight") ) { return ::hx::Val( ambientLight ); }
		if (HX_FIELD_EQ(inName,"computeLight") ) { return ::hx::Val( computeLight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LightSystem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { ctx=inValue.Cast<  ::h3d::scene::RenderContext >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawPasses") ) { drawPasses=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lightCount") ) { lightCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shadowLight") ) { shadowLight=inValue.Cast<  ::h3d::scene::Light >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ambientLight") ) { ambientLight=inValue.Cast<  ::h3d::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("drawPasses",a3,4e,f5,2f));
	outFields->push(HX_("ambientLight",9e,11,72,c2));
	outFields->push(HX_("shadowLight",d6,ac,c8,eb));
	outFields->push(HX_("lightCount",19,5c,69,cb));
	outFields->push(HX_("ctx",a7,84,4b,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LightSystem_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(LightSystem_obj,drawPasses),HX_("drawPasses",a3,4e,f5,2f)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(LightSystem_obj,ambientLight),HX_("ambientLight",9e,11,72,c2)},
	{::hx::fsObject /*  ::h3d::scene::Light */ ,(int)offsetof(LightSystem_obj,shadowLight),HX_("shadowLight",d6,ac,c8,eb)},
	{::hx::fsInt,(int)offsetof(LightSystem_obj,lightCount),HX_("lightCount",19,5c,69,cb)},
	{::hx::fsObject /*  ::h3d::scene::RenderContext */ ,(int)offsetof(LightSystem_obj,ctx),HX_("ctx",a7,84,4b,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LightSystem_obj_sStaticStorageInfo = 0;
#endif

static ::String LightSystem_obj_sMemberFields[] = {
	HX_("drawPasses",a3,4e,f5,2f),
	HX_("ambientLight",9e,11,72,c2),
	HX_("shadowLight",d6,ac,c8,eb),
	HX_("lightCount",19,5c,69,cb),
	HX_("ctx",a7,84,4b,00),
	HX_("initGlobals",80,74,a3,cc),
	HX_("cullLights",2f,36,0e,8e),
	HX_("initLights",0d,86,47,ec),
	HX_("computeLight",df,49,c8,dc),
	::String(null()) };

::hx::Class LightSystem_obj::__mClass;

void LightSystem_obj::__register()
{
	LightSystem_obj _hx_dummy;
	LightSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.LightSystem",ae,0b,61,b4);
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
