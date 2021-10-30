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
#ifndef INCLUDED_h3d_scene_fwd_NormalPass
#include <h3d/scene/fwd/NormalPass.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a61b693d87634583_34_new,"h3d.scene.fwd.NormalPass","new",0x0692af7c,"h3d.scene.fwd.NormalPass.new","h3d/scene/fwd/Renderer.hx",34,0x5f2a7f46)
HX_LOCAL_STACK_FRAME(_hx_pos_a61b693d87634583_40_getOutputs,"h3d.scene.fwd.NormalPass","getOutputs",0xc43d14c0,"h3d.scene.fwd.NormalPass.getOutputs","h3d/scene/fwd/Renderer.hx",40,0x5f2a7f46)
HX_LOCAL_STACK_FRAME(_hx_pos_a61b693d87634583_43_draw,"h3d.scene.fwd.NormalPass","draw",0xb3348568,"h3d.scene.fwd.NormalPass.draw","h3d/scene/fwd/Renderer.hx",43,0x5f2a7f46)
namespace h3d{
namespace scene{
namespace fwd{

void NormalPass_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a61b693d87634583_34_new)
HXLINE(  35)		super::__construct(HX_("normal",27,72,69,30));
HXLINE(  36)		this->normalMapId = ::hxsl::Globals_obj::allocID(HX_("normalMap",b5,e2,8b,ab));
            	}

Dynamic NormalPass_obj::__CreateEmpty() { return new NormalPass_obj; }

void *NormalPass_obj::_hx_vtable = 0;

Dynamic NormalPass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NormalPass_obj > _hx_result = new NormalPass_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NormalPass_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2eacfc8f) {
		if (inClassId<=(int)0x19b8d098) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19b8d098;
		} else {
			return inClassId==(int)0x2eacfc8f;
		}
	} else {
		return inClassId==(int)0x6e5907d7;
	}
}

::Array< ::Dynamic> NormalPass_obj::getOutputs(){
            	HX_STACKFRAME(&_hx_pos_a61b693d87634583_40_getOutputs)
HXDLIN(  40)		return ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Output_obj::PackNormal(::hxsl::Output_obj::Value(HX_("output.normal",f4,0b,c6,cc),null())));
            	}


void NormalPass_obj::draw( ::h3d::pass::PassList passes, ::Dynamic sort){
            	HX_STACKFRAME(&_hx_pos_a61b693d87634583_43_draw)
HXLINE(  44)		 ::h3d::mat::Texture texture = this->ctx->textures->allocTarget(HX_("normalMap",b5,e2,8b,ab),this->ctx->engine->width,this->ctx->engine->height,null(),null(),null());
HXLINE(  45)		this->ctx->engine->pushTarget(texture,null(),null());
HXLINE(  46)		this->ctx->engine->clear(8421504,1,null());
HXLINE(  47)		this->super::draw(passes,sort);
HXLINE(  48)		this->ctx->engine->popTarget();
HXLINE(  49)		this->ctx->setGlobalID(this->normalMapId,texture);
            	}



::hx::ObjectPtr< NormalPass_obj > NormalPass_obj::__new() {
	::hx::ObjectPtr< NormalPass_obj > __this = new NormalPass_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NormalPass_obj > NormalPass_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NormalPass_obj *__this = (NormalPass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NormalPass_obj), true, "h3d.scene.fwd.NormalPass"));
	*(void **)__this = NormalPass_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NormalPass_obj::NormalPass_obj()
{
}

::hx::Val NormalPass_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOutputs") ) { return ::hx::Val( getOutputs_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"normalMapId") ) { return ::hx::Val( normalMapId ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NormalPass_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"normalMapId") ) { normalMapId=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NormalPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("normalMapId",f0,f9,51,90));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NormalPass_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(NormalPass_obj,normalMapId),HX_("normalMapId",f0,f9,51,90)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NormalPass_obj_sStaticStorageInfo = 0;
#endif

static ::String NormalPass_obj_sMemberFields[] = {
	HX_("normalMapId",f0,f9,51,90),
	HX_("getOutputs",5c,98,cd,33),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class NormalPass_obj::__mClass;

void NormalPass_obj::__register()
{
	NormalPass_obj _hx_dummy;
	NormalPass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.fwd.NormalPass",8a,81,b6,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NormalPass_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NormalPass_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NormalPass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NormalPass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
} // end namespace fwd
