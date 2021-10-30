#include <hxcpp.h>

#ifndef INCLUDED_h3d_pass_Base
#include <h3d/pass/Base.h>
#endif
#ifndef INCLUDED_h3d_pass_Default
#include <h3d/pass/Default.h>
#endif
#ifndef INCLUDED_h3d_pass_DefaultShadowMap
#include <h3d/pass/DefaultShadowMap.h>
#endif
#ifndef INCLUDED_h3d_pass_DirShadowMap
#include <h3d/pass/DirShadowMap.h>
#endif
#ifndef INCLUDED_h3d_pass_PassList
#include <h3d/pass/PassList.h>
#endif
#ifndef INCLUDED_h3d_pass_Shadows
#include <h3d/pass/Shadows.h>
#endif
#ifndef INCLUDED_h3d_scene_Renderer
#include <h3d/scene/Renderer.h>
#endif
#ifndef INCLUDED_h3d_scene_fwd_DepthPass
#include <h3d/scene/fwd/DepthPass.h>
#endif
#ifndef INCLUDED_h3d_scene_fwd_NormalPass
#include <h3d/scene/fwd/NormalPass.h>
#endif
#ifndef INCLUDED_h3d_scene_fwd_Renderer
#include <h3d/scene/fwd/Renderer.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_83c820362d709dc3_54_new,"h3d.scene.fwd.Renderer","new",0x9d224327,"h3d.scene.fwd.Renderer.new","h3d/scene/fwd/Renderer.hx",54,0x5f2a7f46)
HX_LOCAL_STACK_FRAME(_hx_pos_83c820362d709dc3_67_get_def,"h3d.scene.fwd.Renderer","get_def",0x856de4a3,"h3d.scene.fwd.Renderer.get_def","h3d/scene/fwd/Renderer.hx",67,0x5f2a7f46)
HX_LOCAL_STACK_FRAME(_hx_pos_83c820362d709dc3_71_renderPass,"h3d.scene.fwd.Renderer","renderPass",0x8d566360,"h3d.scene.fwd.Renderer.renderPass","h3d/scene/fwd/Renderer.hx",71,0x5f2a7f46)
HX_LOCAL_STACK_FRAME(_hx_pos_83c820362d709dc3_74_getPassByName,"h3d.scene.fwd.Renderer","getPassByName",0x30262530,"h3d.scene.fwd.Renderer.getPassByName","h3d/scene/fwd/Renderer.hx",74,0x5f2a7f46)
HX_LOCAL_STACK_FRAME(_hx_pos_83c820362d709dc3_80_render,"h3d.scene.fwd.Renderer","render",0xbaf7aeef,"h3d.scene.fwd.Renderer.render","h3d/scene/fwd/Renderer.hx",80,0x5f2a7f46)
namespace h3d{
namespace scene{
namespace fwd{

void Renderer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_83c820362d709dc3_54_new)
HXLINE(  59)		this->shadow =  ::h3d::pass::DefaultShadowMap_obj::__alloc( HX_CTX ,1024,null());
HXLINE(  58)		this->normal = ( ( ::h3d::pass::Base)( ::h3d::scene::fwd::NormalPass_obj::__alloc( HX_CTX )) );
HXLINE(  57)		this->depth = ( ( ::h3d::pass::Base)( ::h3d::scene::fwd::DepthPass_obj::__alloc( HX_CTX )) );
HXLINE(  62)		super::__construct();
HXLINE(  63)		this->defaultPass =  ::h3d::pass::Default_obj::__alloc( HX_CTX ,HX_("default",c1,d8,c3,9b));
HXLINE(  64)		this->allPasses = ::Array_obj< ::Dynamic>::__new(4)->init(0,this->defaultPass)->init(1,this->depth)->init(2,this->normal)->init(3,this->shadow);
            	}

Dynamic Renderer_obj::__CreateEmpty() { return new Renderer_obj; }

void *Renderer_obj::_hx_vtable = 0;

Dynamic Renderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Renderer_obj > _hx_result = new Renderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Renderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3416f343) {
		if (inClassId<=(int)0x0b619516) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b619516;
		} else {
			return inClassId==(int)0x3416f343;
		}
	} else {
		return inClassId==(int)0x531b0df8;
	}
}

 ::h3d::pass::Base Renderer_obj::get_def(){
            	HX_STACKFRAME(&_hx_pos_83c820362d709dc3_67_get_def)
HXDLIN(  67)		return this->defaultPass;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,get_def,return )

void Renderer_obj::renderPass( ::h3d::pass::Base p, ::h3d::pass::PassList passes, ::Dynamic sort){
            	HX_STACKFRAME(&_hx_pos_83c820362d709dc3_71_renderPass)
HXDLIN(  71)		p->draw(passes,sort);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Renderer_obj,renderPass,(void))

 ::h3d::pass::Base Renderer_obj::getPassByName(::String name){
            	HX_STACKFRAME(&_hx_pos_83c820362d709dc3_74_getPassByName)
HXLINE(  75)		bool _hx_tmp;
HXDLIN(  75)		if ((name != HX_("alpha",5e,a7,96,21))) {
HXLINE(  75)			_hx_tmp = (name == HX_("additive",0c,73,3f,a8));
            		}
            		else {
HXLINE(  75)			_hx_tmp = true;
            		}
HXDLIN(  75)		if (_hx_tmp) {
HXLINE(  76)			return this->defaultPass;
            		}
HXLINE(  77)		return this->super::getPassByName(name);
            	}


void Renderer_obj::render(){
            	HX_STACKFRAME(&_hx_pos_83c820362d709dc3_80_render)
HXLINE(  81)		if (this->has(HX_("shadow",e0,c7,20,1d))) {
HXLINE(  82)			 ::h3d::pass::DefaultShadowMap _hx_tmp = this->shadow;
HXDLIN(  82)			this->renderPass(_hx_tmp,this->get(HX_("shadow",e0,c7,20,1d)),null());
            		}
HXLINE(  84)		if (this->has(HX_("depth",03,f1,29,d7))) {
HXLINE(  85)			 ::h3d::pass::Base _hx_tmp = this->depth;
HXDLIN(  85)			this->renderPass(_hx_tmp,this->get(HX_("depth",03,f1,29,d7)),null());
            		}
HXLINE(  87)		if (this->has(HX_("normal",27,72,69,30))) {
HXLINE(  88)			 ::h3d::pass::Base _hx_tmp = this->normal;
HXDLIN(  88)			this->renderPass(_hx_tmp,this->get(HX_("normal",27,72,69,30)),null());
            		}
HXLINE(  90)		 ::h3d::pass::Base _hx_tmp = this->defaultPass;
HXDLIN(  90)		this->renderPass(_hx_tmp,this->get(HX_("default",c1,d8,c3,9b)),null());
HXLINE(  91)		 ::h3d::pass::Base _hx_tmp1 = this->defaultPass;
HXDLIN(  91)		 ::h3d::pass::PassList _hx_tmp2 = this->get(HX_("alpha",5e,a7,96,21));
HXDLIN(  91)		this->renderPass(_hx_tmp1,_hx_tmp2,this->backToFront);
HXLINE(  92)		 ::h3d::pass::Base _hx_tmp3 = this->defaultPass;
HXDLIN(  92)		this->renderPass(_hx_tmp3,this->get(HX_("additive",0c,73,3f,a8)),null());
            	}



::hx::ObjectPtr< Renderer_obj > Renderer_obj::__new() {
	::hx::ObjectPtr< Renderer_obj > __this = new Renderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Renderer_obj > Renderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Renderer_obj *__this = (Renderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Renderer_obj), true, "h3d.scene.fwd.Renderer"));
	*(void **)__this = Renderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Renderer_obj::Renderer_obj()
{
}

void Renderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderer);
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_MEMBER_NAME(shadow,"shadow");
	 ::h3d::scene::Renderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Renderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(normal,"normal");
	HX_VISIT_MEMBER_NAME(shadow,"shadow");
	 ::h3d::scene::Renderer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Renderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"def") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_def() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return ::hx::Val( depth ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return ::hx::Val( normal ); }
		if (HX_FIELD_EQ(inName,"shadow") ) { return ::hx::Val( shadow ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_def") ) { return ::hx::Val( get_def_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderPass") ) { return ::hx::Val( renderPass_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getPassByName") ) { return ::hx::Val( getPassByName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Renderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast<  ::h3d::pass::Base >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast<  ::h3d::pass::Base >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow") ) { shadow=inValue.Cast<  ::h3d::pass::DefaultShadowMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Renderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("def",c5,39,4c,00));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("normal",27,72,69,30));
	outFields->push(HX_("shadow",e0,c7,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Renderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::pass::Base */ ,(int)offsetof(Renderer_obj,depth),HX_("depth",03,f1,29,d7)},
	{::hx::fsObject /*  ::h3d::pass::Base */ ,(int)offsetof(Renderer_obj,normal),HX_("normal",27,72,69,30)},
	{::hx::fsObject /*  ::h3d::pass::DefaultShadowMap */ ,(int)offsetof(Renderer_obj,shadow),HX_("shadow",e0,c7,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Renderer_obj_sStaticStorageInfo = 0;
#endif

static ::String Renderer_obj_sMemberFields[] = {
	HX_("depth",03,f1,29,d7),
	HX_("normal",27,72,69,30),
	HX_("shadow",e0,c7,20,1d),
	HX_("get_def",5c,02,c1,26),
	HX_("renderPass",47,df,5b,e7),
	HX_("getPassByName",a9,d3,2f,0d),
	HX_("render",56,6b,29,05),
	::String(null()) };

::hx::Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	Renderer_obj _hx_dummy;
	Renderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.fwd.Renderer",b5,23,92,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Renderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Renderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Renderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Renderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
} // end namespace fwd
