#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_242e190052f3b972_14_new,"h3d.pass.PassObject","new",0x1c08d8ca,"h3d.pass.PassObject.new","h3d/pass/PassObject.hx",14,0x418a3586)
namespace h3d{
namespace pass{

void PassObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_242e190052f3b972_14_new)
HXDLIN(  14)		this->texture = 0;
            	}

Dynamic PassObject_obj::__CreateEmpty() { return new PassObject_obj; }

void *PassObject_obj::_hx_vtable = 0;

Dynamic PassObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PassObject_obj > _hx_result = new PassObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PassObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0fcbad1a;
}


PassObject_obj::PassObject_obj()
{
}

void PassObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PassObject);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(nextAlloc,"nextAlloc");
	HX_MARK_MEMBER_NAME(pass,"pass");
	HX_MARK_MEMBER_NAME(obj,"obj");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_END_CLASS();
}

void PassObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(nextAlloc,"nextAlloc");
	HX_VISIT_MEMBER_NAME(pass,"pass");
	HX_VISIT_MEMBER_NAME(obj,"obj");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(texture,"texture");
}

::hx::Val PassObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { return ::hx::Val( obj ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"pass") ) { return ::hx::Val( pass ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"depth") ) { return ::hx::Val( depth ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return ::hx::Val( shaders ); }
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextAlloc") ) { return ::hx::Val( nextAlloc ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PassObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { obj=inValue.Cast<  ::h3d::scene::Object >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::h3d::pass::PassObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pass") ) { pass=inValue.Cast<  ::h3d::mat::Pass >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::hxsl::RuntimeShader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextAlloc") ) { nextAlloc=inValue.Cast<  ::h3d::pass::PassObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PassObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("nextAlloc",82,be,d8,c8));
	outFields->push(HX_("pass",d1,e4,51,4a));
	outFields->push(HX_("obj",f7,8f,54,00));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("shaders",ae,81,86,5f));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("texture",db,c8,e0,9e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PassObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::pass::PassObject */ ,(int)offsetof(PassObject_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsObject /*  ::h3d::pass::PassObject */ ,(int)offsetof(PassObject_obj,nextAlloc),HX_("nextAlloc",82,be,d8,c8)},
	{::hx::fsObject /*  ::h3d::mat::Pass */ ,(int)offsetof(PassObject_obj,pass),HX_("pass",d1,e4,51,4a)},
	{::hx::fsObject /*  ::h3d::scene::Object */ ,(int)offsetof(PassObject_obj,obj),HX_("obj",f7,8f,54,00)},
	{::hx::fsInt,(int)offsetof(PassObject_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(PassObject_obj,shaders),HX_("shaders",ae,81,86,5f)},
	{::hx::fsObject /*  ::hxsl::RuntimeShader */ ,(int)offsetof(PassObject_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(PassObject_obj,depth),HX_("depth",03,f1,29,d7)},
	{::hx::fsInt,(int)offsetof(PassObject_obj,texture),HX_("texture",db,c8,e0,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PassObject_obj_sStaticStorageInfo = 0;
#endif

static ::String PassObject_obj_sMemberFields[] = {
	HX_("next",f3,84,02,49),
	HX_("nextAlloc",82,be,d8,c8),
	HX_("pass",d1,e4,51,4a),
	HX_("obj",f7,8f,54,00),
	HX_("index",12,9b,14,be),
	HX_("shaders",ae,81,86,5f),
	HX_("shader",25,bf,20,1d),
	HX_("depth",03,f1,29,d7),
	HX_("texture",db,c8,e0,9e),
	::String(null()) };

::hx::Class PassObject_obj::__mClass;

void PassObject_obj::__register()
{
	PassObject_obj _hx_dummy;
	PassObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.PassObject",d8,6b,ae,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PassObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PassObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PassObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PassObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
