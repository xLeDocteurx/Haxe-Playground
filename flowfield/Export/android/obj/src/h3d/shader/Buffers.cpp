#include <hxcpp.h>

#ifndef INCLUDED_h3d_shader_Buffers
#include <h3d/shader/Buffers.h>
#endif
#ifndef INCLUDED_h3d_shader_ShaderBuffers
#include <h3d/shader/ShaderBuffers.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShaderData
#include <hxsl/RuntimeShaderData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_741d9079fba5b2a6_44_new,"h3d.shader.Buffers","new",0xa0b9bb11,"h3d.shader.Buffers.new","h3d/shader/Buffers.hx",44,0x495c6b9f)
HX_LOCAL_STACK_FRAME(_hx_pos_741d9079fba5b2a6_49_grow,"h3d.shader.Buffers","grow",0xfd334c42,"h3d.shader.Buffers.grow","h3d/shader/Buffers.hx",49,0x495c6b9f)
namespace h3d{
namespace shader{

void Buffers_obj::__construct( ::hxsl::RuntimeShader s){
            	HX_GC_STACKFRAME(&_hx_pos_741d9079fba5b2a6_44_new)
HXLINE(  45)		this->vertex =  ::h3d::shader::ShaderBuffers_obj::__alloc( HX_CTX ,s->vertex);
HXLINE(  46)		this->fragment =  ::h3d::shader::ShaderBuffers_obj::__alloc( HX_CTX ,s->fragment);
            	}

Dynamic Buffers_obj::__CreateEmpty() { return new Buffers_obj; }

void *Buffers_obj::_hx_vtable = 0;

Dynamic Buffers_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Buffers_obj > _hx_result = new Buffers_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Buffers_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28545575;
}

void Buffers_obj::grow( ::hxsl::RuntimeShader s){
            	HX_STACKFRAME(&_hx_pos_741d9079fba5b2a6_49_grow)
HXLINE(  50)		this->vertex->grow(s->vertex);
HXLINE(  51)		this->fragment->grow(s->fragment);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Buffers_obj,grow,(void))


::hx::ObjectPtr< Buffers_obj > Buffers_obj::__new( ::hxsl::RuntimeShader s) {
	::hx::ObjectPtr< Buffers_obj > __this = new Buffers_obj();
	__this->__construct(s);
	return __this;
}

::hx::ObjectPtr< Buffers_obj > Buffers_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxsl::RuntimeShader s) {
	Buffers_obj *__this = (Buffers_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Buffers_obj), true, "h3d.shader.Buffers"));
	*(void **)__this = Buffers_obj::_hx_vtable;
	__this->__construct(s);
	return __this;
}

Buffers_obj::Buffers_obj()
{
}

void Buffers_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Buffers);
	HX_MARK_MEMBER_NAME(vertex,"vertex");
	HX_MARK_MEMBER_NAME(fragment,"fragment");
	HX_MARK_END_CLASS();
}

void Buffers_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertex,"vertex");
	HX_VISIT_MEMBER_NAME(fragment,"fragment");
}

::hx::Val Buffers_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grow") ) { return ::hx::Val( grow_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { return ::hx::Val( vertex ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragment") ) { return ::hx::Val( fragment ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Buffers_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { vertex=inValue.Cast<  ::h3d::shader::ShaderBuffers >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragment") ) { fragment=inValue.Cast<  ::h3d::shader::ShaderBuffers >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Buffers_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("vertex",64,db,47,a1));
	outFields->push(HX_("fragment",d0,5f,e5,ad));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Buffers_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::shader::ShaderBuffers */ ,(int)offsetof(Buffers_obj,vertex),HX_("vertex",64,db,47,a1)},
	{::hx::fsObject /*  ::h3d::shader::ShaderBuffers */ ,(int)offsetof(Buffers_obj,fragment),HX_("fragment",d0,5f,e5,ad)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Buffers_obj_sStaticStorageInfo = 0;
#endif

static ::String Buffers_obj_sMemberFields[] = {
	HX_("vertex",64,db,47,a1),
	HX_("fragment",d0,5f,e5,ad),
	HX_("grow",13,dc,6b,44),
	::String(null()) };

::hx::Class Buffers_obj::__mClass;

void Buffers_obj::__register()
{
	Buffers_obj _hx_dummy;
	Buffers_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.Buffers",9f,de,80,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Buffers_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Buffers_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Buffers_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Buffers_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace shader
