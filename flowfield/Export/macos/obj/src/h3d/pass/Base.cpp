#include <hxcpp.h>

#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_pass_Base
#include <h3d/pass/Base.h>
#endif
#ifndef INCLUDED_h3d_pass_PassList
#include <h3d/pass/PassList.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8e76838db16824d5_9_new,"h3d.pass.Base","new",0x6b755ceb,"h3d.pass.Base.new","h3d/pass/Base.hx",9,0xab0dd885)
HX_LOCAL_STACK_FRAME(_hx_pos_8e76838db16824d5_13_compileShader,"h3d.pass.Base","compileShader",0x747f3943,"h3d.pass.Base.compileShader","h3d/pass/Base.hx",13,0xab0dd885)
HX_LOCAL_STACK_FRAME(_hx_pos_8e76838db16824d5_18_setContext,"h3d.pass.Base","setContext",0xbc22a542,"h3d.pass.Base.setContext","h3d/pass/Base.hx",18,0xab0dd885)
HX_LOCAL_STACK_FRAME(_hx_pos_8e76838db16824d5_21_dispose,"h3d.pass.Base","dispose",0xecd6aeaa,"h3d.pass.Base.dispose","h3d/pass/Base.hx",21,0xab0dd885)
HX_LOCAL_STACK_FRAME(_hx_pos_8e76838db16824d5_24_draw,"h3d.pass.Base","draw",0x94a99919,"h3d.pass.Base.draw","h3d/pass/Base.hx",24,0xab0dd885)
namespace h3d{
namespace pass{

void Base_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_8e76838db16824d5_9_new)
HXDLIN(   9)		this->name = name;
            	}

Dynamic Base_obj::__CreateEmpty() { return new Base_obj; }

void *Base_obj::_hx_vtable = 0;

Dynamic Base_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Base_obj > _hx_result = new Base_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Base_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2eacfc8f;
}

 ::hxsl::RuntimeShader Base_obj::compileShader( ::h3d::mat::Pass p){
            	HX_STACKFRAME(&_hx_pos_8e76838db16824d5_13_compileShader)
HXDLIN(  13)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented for this pass",b1,06,25,be)));
HXDLIN(  13)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base_obj,compileShader,return )

void Base_obj::setContext( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_8e76838db16824d5_18_setContext)
HXDLIN(  18)		this->ctx = ctx;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Base_obj,setContext,(void))

void Base_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_8e76838db16824d5_21_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Base_obj,dispose,(void))

void Base_obj::draw( ::h3d::pass::PassList passes, ::Dynamic sort){
            	HX_STACKFRAME(&_hx_pos_8e76838db16824d5_24_draw)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Base_obj,draw,(void))


::hx::ObjectPtr< Base_obj > Base_obj::__new(::String name) {
	::hx::ObjectPtr< Base_obj > __this = new Base_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< Base_obj > Base_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	Base_obj *__this = (Base_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Base_obj), true, "h3d.pass.Base"));
	*(void **)__this = Base_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

Base_obj::Base_obj()
{
}

void Base_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Base);
	HX_MARK_MEMBER_NAME(ctx,"ctx");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Base_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ctx,"ctx");
	HX_VISIT_MEMBER_NAME(name,"name");
}

::hx::Val Base_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { return ::hx::Val( ctx ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setContext") ) { return ::hx::Val( setContext_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"compileShader") ) { return ::hx::Val( compileShader_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Base_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { ctx=inValue.Cast<  ::h3d::scene::RenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Base_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ctx",a7,84,4b,00));
	outFields->push(HX_("name",4b,72,ff,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Base_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::scene::RenderContext */ ,(int)offsetof(Base_obj,ctx),HX_("ctx",a7,84,4b,00)},
	{::hx::fsString,(int)offsetof(Base_obj,name),HX_("name",4b,72,ff,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Base_obj_sStaticStorageInfo = 0;
#endif

static ::String Base_obj_sMemberFields[] = {
	HX_("ctx",a7,84,4b,00),
	HX_("name",4b,72,ff,48),
	HX_("compileShader",f8,70,b2,da),
	HX_("setContext",6d,ba,56,6c),
	HX_("dispose",9f,80,4c,bb),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class Base_obj::__mClass;

void Base_obj::__register()
{
	Base_obj _hx_dummy;
	Base_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.Base",79,0b,dc,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Base_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Base_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Base_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Base_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
