#include <hxcpp.h>

#ifndef INCLUDED_h3d_pass_PassList
#include <h3d/pass/PassList.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif
#ifndef INCLUDED_h3d_scene_PassObjects
#include <h3d/scene/PassObjects.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb58749bb82c8524_8_new,"h3d.scene.PassObjects","new",0xde9fba3e,"h3d.scene.PassObjects.new","h3d/scene/Renderer.hx",8,0x5ccd7122)
namespace h3d{
namespace scene{

void PassObjects_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_bb58749bb82c8524_8_new)
HXDLIN(   8)		this->passes =  ::h3d::pass::PassList_obj::__alloc( HX_CTX ,null());
            	}

Dynamic PassObjects_obj::__CreateEmpty() { return new PassObjects_obj; }

void *PassObjects_obj::_hx_vtable = 0;

Dynamic PassObjects_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PassObjects_obj > _hx_result = new PassObjects_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PassObjects_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x687fee10;
}


::hx::ObjectPtr< PassObjects_obj > PassObjects_obj::__new() {
	::hx::ObjectPtr< PassObjects_obj > __this = new PassObjects_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PassObjects_obj > PassObjects_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PassObjects_obj *__this = (PassObjects_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PassObjects_obj), true, "h3d.scene.PassObjects"));
	*(void **)__this = PassObjects_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PassObjects_obj::PassObjects_obj()
{
}

void PassObjects_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PassObjects);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(passes,"passes");
	HX_MARK_MEMBER_NAME(rendered,"rendered");
	HX_MARK_END_CLASS();
}

void PassObjects_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(passes,"passes");
	HX_VISIT_MEMBER_NAME(rendered,"rendered");
}

::hx::Val PassObjects_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"passes") ) { return ::hx::Val( passes ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rendered") ) { return ::hx::Val( rendered ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PassObjects_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"passes") ) { passes=inValue.Cast<  ::h3d::pass::PassList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rendered") ) { rendered=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PassObjects_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("passes",7f,d3,31,ee));
	outFields->push(HX_("rendered",35,c5,db,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PassObjects_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(PassObjects_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::h3d::pass::PassList */ ,(int)offsetof(PassObjects_obj,passes),HX_("passes",7f,d3,31,ee)},
	{::hx::fsBool,(int)offsetof(PassObjects_obj,rendered),HX_("rendered",35,c5,db,b2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PassObjects_obj_sStaticStorageInfo = 0;
#endif

static ::String PassObjects_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("passes",7f,d3,31,ee),
	HX_("rendered",35,c5,db,b2),
	::String(null()) };

::hx::Class PassObjects_obj::__mClass;

void PassObjects_obj::__register()
{
	PassObjects_obj _hx_dummy;
	PassObjects_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.PassObjects",4c,83,72,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PassObjects_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PassObjects_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PassObjects_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PassObjects_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
