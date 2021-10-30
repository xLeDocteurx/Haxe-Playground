#include <hxcpp.h>

#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_impl_TextureCache
#include <h3d/impl/TextureCache.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_pass_Base
#include <h3d/pass/Base.h>
#endif
#ifndef INCLUDED_h3d_pass_Default
#include <h3d/pass/Default.h>
#endif
#ifndef INCLUDED_h3d_pass_PassList
#include <h3d/pass/PassList.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_scene_fwd_DepthPass
#include <h3d/scene/fwd/DepthPass.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dd872f69f9dd6acb_5_new,"h3d.scene.fwd.DepthPass","new",0x473baeb4,"h3d.scene.fwd.DepthPass.new","h3d/scene/fwd/Renderer.hx",5,0x5f2a7f46)
HX_LOCAL_STACK_FRAME(_hx_pos_dd872f69f9dd6acb_16_getOutputs,"h3d.scene.fwd.DepthPass","getOutputs",0x2b4aec88,"h3d.scene.fwd.DepthPass.getOutputs","h3d/scene/fwd/Renderer.hx",16,0x5f2a7f46)
HX_LOCAL_STACK_FRAME(_hx_pos_dd872f69f9dd6acb_19_draw,"h3d.scene.fwd.DepthPass","draw",0x066ad730,"h3d.scene.fwd.DepthPass.draw","h3d/scene/fwd/Renderer.hx",19,0x5f2a7f46)
namespace h3d{
namespace scene{
namespace fwd{

void DepthPass_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dd872f69f9dd6acb_5_new)
HXLINE(   8)		this->enableSky = false;
HXLINE(  11)		super::__construct(HX_("depth",03,f1,29,d7));
HXLINE(  12)		this->depthMapId = ::hxsl::Globals_obj::allocID(HX_("depthMap",59,15,19,97));
            	}

Dynamic DepthPass_obj::__CreateEmpty() { return new DepthPass_obj; }

void *DepthPass_obj::_hx_vtable = 0;

Dynamic DepthPass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DepthPass_obj > _hx_result = new DepthPass_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DepthPass_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33625174) {
		if (inClassId<=(int)0x2eacfc8f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2eacfc8f;
		} else {
			return inClassId==(int)0x33625174;
		}
	} else {
		return inClassId==(int)0x6e5907d7;
	}
}

::Array< ::Dynamic> DepthPass_obj::getOutputs(){
            	HX_STACKFRAME(&_hx_pos_dd872f69f9dd6acb_16_getOutputs)
HXDLIN(  16)		return ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Output_obj::PackFloat(::hxsl::Output_obj::Value(HX_("output.depth",d6,4f,60,0a),null())));
            	}


void DepthPass_obj::draw( ::h3d::pass::PassList passes, ::Dynamic sort){
            	HX_STACKFRAME(&_hx_pos_dd872f69f9dd6acb_19_draw)
HXLINE(  20)		 ::h3d::mat::Texture texture = this->ctx->textures->allocTarget(HX_("depthMap",59,15,19,97),this->ctx->engine->width,this->ctx->engine->height,true,null(),null());
HXLINE(  21)		this->ctx->engine->pushTarget(texture,null(),null());
HXLINE(  22)		 ::Dynamic _hx_tmp;
HXDLIN(  22)		if (this->enableSky) {
HXLINE(  22)			_hx_tmp = 0;
            		}
            		else {
HXLINE(  22)			_hx_tmp = 16711680;
            		}
HXDLIN(  22)		this->ctx->engine->clear(_hx_tmp,1,null());
HXLINE(  23)		this->super::draw(passes,sort);
HXLINE(  24)		this->ctx->engine->popTarget();
HXLINE(  25)		this->ctx->setGlobalID(this->depthMapId, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("texture",db,c8,e0,9e),texture)));
            	}



::hx::ObjectPtr< DepthPass_obj > DepthPass_obj::__new() {
	::hx::ObjectPtr< DepthPass_obj > __this = new DepthPass_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DepthPass_obj > DepthPass_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DepthPass_obj *__this = (DepthPass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DepthPass_obj), true, "h3d.scene.fwd.DepthPass"));
	*(void **)__this = DepthPass_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DepthPass_obj::DepthPass_obj()
{
}

::hx::Val DepthPass_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"enableSky") ) { return ::hx::Val( enableSky ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"depthMapId") ) { return ::hx::Val( depthMapId ); }
		if (HX_FIELD_EQ(inName,"getOutputs") ) { return ::hx::Val( getOutputs_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DepthPass_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"enableSky") ) { enableSky=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"depthMapId") ) { depthMapId=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DepthPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("depthMapId",94,1d,8c,5f));
	outFields->push(HX_("enableSky",1e,5e,cf,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DepthPass_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(DepthPass_obj,depthMapId),HX_("depthMapId",94,1d,8c,5f)},
	{::hx::fsBool,(int)offsetof(DepthPass_obj,enableSky),HX_("enableSky",1e,5e,cf,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DepthPass_obj_sStaticStorageInfo = 0;
#endif

static ::String DepthPass_obj_sMemberFields[] = {
	HX_("depthMapId",94,1d,8c,5f),
	HX_("enableSky",1e,5e,cf,2f),
	HX_("getOutputs",5c,98,cd,33),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class DepthPass_obj::__mClass;

void DepthPass_obj::__register()
{
	DepthPass_obj _hx_dummy;
	DepthPass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.fwd.DepthPass",c2,84,b1,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DepthPass_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DepthPass_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DepthPass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DepthPass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
} // end namespace fwd
