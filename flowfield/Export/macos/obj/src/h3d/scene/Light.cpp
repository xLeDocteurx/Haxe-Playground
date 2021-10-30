#include <hxcpp.h>

#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_scene_Light
#include <h3d/scene/Light.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
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
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0eb82ffe94072ae7_3_new,"h3d.scene.Light","new",0x5855ebd1,"h3d.scene.Light.new","h3d/scene/Light.hx",3,0x73cd4181)
HX_LOCAL_STACK_FRAME(_hx_pos_0eb82ffe94072ae7_21_get_color,"h3d.scene.Light","get_color",0xf20793eb,"h3d.scene.Light.get_color","h3d/scene/Light.hx",21,0x73cd4181)
HX_LOCAL_STACK_FRAME(_hx_pos_0eb82ffe94072ae7_25_set_color,"h3d.scene.Light","set_color",0xd5587ff7,"h3d.scene.Light.set_color","h3d/scene/Light.hx",25,0x73cd4181)
HX_LOCAL_STACK_FRAME(_hx_pos_0eb82ffe94072ae7_29_get_enableSpecular,"h3d.scene.Light","get_enableSpecular",0x61fcc8de,"h3d.scene.Light.get_enableSpecular","h3d/scene/Light.hx",29,0x73cd4181)
HX_LOCAL_STACK_FRAME(_hx_pos_0eb82ffe94072ae7_32_set_enableSpecular,"h3d.scene.Light","set_enableSpecular",0x3eabfb52,"h3d.scene.Light.set_enableSpecular","h3d/scene/Light.hx",32,0x73cd4181)
HX_LOCAL_STACK_FRAME(_hx_pos_0eb82ffe94072ae7_38_emit,"h3d.scene.Light","emit",0xeceb85c2,"h3d.scene.Light.emit","h3d/scene/Light.hx",38,0x73cd4181)
HX_LOCAL_STACK_FRAME(_hx_pos_0eb82ffe94072ae7_42_getShadowDirection,"h3d.scene.Light","getShadowDirection",0xc2e689f8,"h3d.scene.Light.getShadowDirection","h3d/scene/Light.hx",42,0x73cd4181)
namespace h3d{
namespace scene{

void Light_obj::__construct( ::hxsl::Shader shader, ::h3d::scene::Object parent){
            	HX_STACKFRAME(&_hx_pos_0eb82ffe94072ae7_3_new)
HXLINE(  10)		this->priority = 0;
HXLINE(   9)		this->cullingDistance = ((Float)-1);
HXLINE(  15)		super::__construct(parent);
HXLINE(  16)		this->shader = shader;
            	}

Dynamic Light_obj::__CreateEmpty() { return new Light_obj; }

void *Light_obj::_hx_vtable = 0;

Dynamic Light_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Light_obj > _hx_result = new Light_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Light_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1797ae36) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1797ae36;
	} else {
		return inClassId==(int)0x622aef23;
	}
}

 ::h3d::Vector Light_obj::get_color(){
            	HX_GC_STACKFRAME(&_hx_pos_0eb82ffe94072ae7_21_get_color)
HXDLIN(  21)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,get_color,return )

 ::h3d::Vector Light_obj::set_color( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_0eb82ffe94072ae7_25_set_color)
HXDLIN(  25)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Light_obj,set_color,return )

bool Light_obj::get_enableSpecular(){
            	HX_STACKFRAME(&_hx_pos_0eb82ffe94072ae7_29_get_enableSpecular)
HXDLIN(  29)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,get_enableSpecular,return )

bool Light_obj::set_enableSpecular(bool b){
            	HX_STACKFRAME(&_hx_pos_0eb82ffe94072ae7_32_set_enableSpecular)
HXLINE(  33)		if (b) {
HXLINE(  33)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented for this light",f6,12,e7,59)));
            		}
HXLINE(  34)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Light_obj,set_enableSpecular,return )

void Light_obj::emit( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_0eb82ffe94072ae7_38_emit)
HXDLIN(  38)		ctx->emitLight(::hx::ObjectPtr<OBJ_>(this));
            	}


 ::h3d::Vector Light_obj::getShadowDirection(){
            	HX_STACKFRAME(&_hx_pos_0eb82ffe94072ae7_42_getShadowDirection)
HXDLIN(  42)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getShadowDirection,return )


::hx::ObjectPtr< Light_obj > Light_obj::__new( ::hxsl::Shader shader, ::h3d::scene::Object parent) {
	::hx::ObjectPtr< Light_obj > __this = new Light_obj();
	__this->__construct(shader,parent);
	return __this;
}

::hx::ObjectPtr< Light_obj > Light_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxsl::Shader shader, ::h3d::scene::Object parent) {
	Light_obj *__this = (Light_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Light_obj), true, "h3d.scene.Light"));
	*(void **)__this = Light_obj::_hx_vtable;
	__this->__construct(shader,parent);
	return __this;
}

Light_obj::Light_obj()
{
}

void Light_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Light);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(objectDistance,"objectDistance");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(cullingDistance,"cullingDistance");
	HX_MARK_MEMBER_NAME(priority,"priority");
	 ::h3d::scene::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Light_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(objectDistance,"objectDistance");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(cullingDistance,"cullingDistance");
	HX_VISIT_MEMBER_NAME(priority,"priority");
	 ::h3d::scene::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Light_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"emit") ) { return ::hx::Val( emit_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return ::hx::Val( priority ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectDistance") ) { return ::hx::Val( objectDistance ); }
		if (HX_FIELD_EQ(inName,"enableSpecular") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enableSpecular() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cullingDistance") ) { return ::hx::Val( cullingDistance ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_enableSpecular") ) { return ::hx::Val( get_enableSpecular_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enableSpecular") ) { return ::hx::Val( set_enableSpecular_dyn() ); }
		if (HX_FIELD_EQ(inName,"getShadowDirection") ) { return ::hx::Val( getShadowDirection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Light_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::h3d::scene::Light >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::hxsl::Shader >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectDistance") ) { objectDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enableSpecular") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enableSpecular(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cullingDistance") ) { cullingDistance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Light_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("objectDistance",14,25,b6,65));
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("cullingDistance",c5,21,83,60));
	outFields->push(HX_("priority",64,7b,3e,bb));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("enableSpecular",66,7c,8c,cb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Light_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxsl::Shader */ ,(int)offsetof(Light_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(Light_obj,objectDistance),HX_("objectDistance",14,25,b6,65)},
	{::hx::fsObject /*  ::h3d::scene::Light */ ,(int)offsetof(Light_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsFloat,(int)offsetof(Light_obj,cullingDistance),HX_("cullingDistance",c5,21,83,60)},
	{::hx::fsInt,(int)offsetof(Light_obj,priority),HX_("priority",64,7b,3e,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Light_obj_sStaticStorageInfo = 0;
#endif

static ::String Light_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("objectDistance",14,25,b6,65),
	HX_("next",f3,84,02,49),
	HX_("cullingDistance",c5,21,83,60),
	HX_("priority",64,7b,3e,bb),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_enableSpecular",2f,5d,26,67),
	HX_("set_enableSpecular",a3,8f,d5,43),
	HX_("emit",53,9e,15,43),
	HX_("getShadowDirection",49,1e,10,c8),
	::String(null()) };

::hx::Class Light_obj::__mClass;

void Light_obj::__register()
{
	Light_obj _hx_dummy;
	Light_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.Light",5f,af,85,40);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Light_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Light_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Light_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Light_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
