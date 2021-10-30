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
#ifndef INCLUDED_hxd_System
#include <hxd/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb9db60f31b6f8e7_11_new,"h3d.impl.RenderContext","new",0xc3306012,"h3d.impl.RenderContext.new","h3d/impl/RenderContext.hx",11,0x5e84e3fe)
HX_LOCAL_STACK_FRAME(_hx_pos_bb9db60f31b6f8e7_20_dispose,"h3d.impl.RenderContext","dispose",0xe66fd151,"h3d.impl.RenderContext.dispose","h3d/impl/RenderContext.hx",20,0x5e84e3fe)
namespace h3d{
namespace impl{

void RenderContext_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_bb9db60f31b6f8e7_11_new)
HXLINE(  12)		this->engine = ::h3d::Engine_obj::CURRENT;
HXLINE(  13)		this->frame = 0;
HXLINE(  14)		this->time = ((Float)0.);
HXLINE(  15)		this->elapsedTime = (((Float)1.) / ::hxd::System_obj::getDefaultFrameRate());
HXLINE(  16)		this->textures =  ::h3d::impl::TextureCache_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x4786bba0;
}

void RenderContext_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_bb9db60f31b6f8e7_20_dispose)
HXDLIN(  20)		this->textures->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,dispose,(void))


::hx::ObjectPtr< RenderContext_obj > RenderContext_obj::__new() {
	::hx::ObjectPtr< RenderContext_obj > __this = new RenderContext_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RenderContext_obj > RenderContext_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RenderContext_obj *__this = (RenderContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderContext_obj), true, "h3d.impl.RenderContext"));
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
	HX_MARK_MEMBER_NAME(engine,"engine");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(elapsedTime,"elapsedTime");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(textures,"textures");
	HX_MARK_END_CLASS();
}

void RenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(engine,"engine");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(elapsedTime,"elapsedTime");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(textures,"textures");
}

::hx::Val RenderContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"engine") ) { return ::hx::Val( engine ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { return ::hx::Val( textures ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { return ::hx::Val( elapsedTime ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RenderContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast<  ::h3d::Engine >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast<  ::h3d::impl::TextureCache >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { elapsedTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("engine",c2,47,84,fc));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("elapsedTime",69,5e,cd,c6));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("textures",38,f7,ce,65));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RenderContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Engine */ ,(int)offsetof(RenderContext_obj,engine),HX_("engine",c2,47,84,fc)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,elapsedTime),HX_("elapsedTime",69,5e,cd,c6)},
	{::hx::fsInt,(int)offsetof(RenderContext_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsObject /*  ::h3d::impl::TextureCache */ ,(int)offsetof(RenderContext_obj,textures),HX_("textures",38,f7,ce,65)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RenderContext_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderContext_obj_sMemberFields[] = {
	HX_("engine",c2,47,84,fc),
	HX_("time",0d,cc,fc,4c),
	HX_("elapsedTime",69,5e,cd,c6),
	HX_("frame",2d,78,83,06),
	HX_("textures",38,f7,ce,65),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class RenderContext_obj::__mClass;

void RenderContext_obj::__register()
{
	RenderContext_obj _hx_dummy;
	RenderContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.impl.RenderContext",20,af,1e,31);
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
} // end namespace impl
