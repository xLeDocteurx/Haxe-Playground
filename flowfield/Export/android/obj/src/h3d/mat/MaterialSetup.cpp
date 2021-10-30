#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
#ifndef INCLUDED_h3d_mat_Material
#include <h3d/mat/Material.h>
#endif
#ifndef INCLUDED_h3d_mat_MaterialDatabase
#include <h3d/mat/MaterialDatabase.h>
#endif
#ifndef INCLUDED_h3d_mat_MaterialSetup
#include <h3d/mat/MaterialSetup.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_scene_LightSystem
#include <h3d/scene/LightSystem.h>
#endif
#ifndef INCLUDED_h3d_scene_Mesh
#include <h3d/scene/Mesh.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_Renderer
#include <h3d/scene/Renderer.h>
#endif
#ifndef INCLUDED_h3d_scene_fwd_LightSystem
#include <h3d/scene/fwd/LightSystem.h>
#endif
#ifndef INCLUDED_h3d_scene_fwd_Renderer
#include <h3d/scene/fwd/Renderer.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_601fc76b837c7772_10_new,"h3d.mat.MaterialSetup","new",0x37244de5,"h3d.mat.MaterialSetup.new","h3d/mat/MaterialSetup.hx",10,0x445dedad)
HX_LOCAL_STACK_FRAME(_hx_pos_601fc76b837c7772_17_createRenderer,"h3d.mat.MaterialSetup","createRenderer",0x4140dafa,"h3d.mat.MaterialSetup.createRenderer","h3d/mat/MaterialSetup.hx",17,0x445dedad)
HX_LOCAL_STACK_FRAME(_hx_pos_601fc76b837c7772_21_createLightSystem,"h3d.mat.MaterialSetup","createLightSystem",0x705cf70e,"h3d.mat.MaterialSetup.createLightSystem","h3d/mat/MaterialSetup.hx",21,0x445dedad)
HX_LOCAL_STACK_FRAME(_hx_pos_601fc76b837c7772_25_createMaterial,"h3d.mat.MaterialSetup","createMaterial",0x7f0a725e,"h3d.mat.MaterialSetup.createMaterial","h3d/mat/MaterialSetup.hx",25,0x445dedad)
HX_LOCAL_STACK_FRAME(_hx_pos_601fc76b837c7772_28_getDefaults,"h3d.mat.MaterialSetup","getDefaults",0xd40e9dcd,"h3d.mat.MaterialSetup.getDefaults","h3d/mat/MaterialSetup.hx",28,0x445dedad)
HX_LOCAL_STACK_FRAME(_hx_pos_601fc76b837c7772_34_loadMaterialProps,"h3d.mat.MaterialSetup","loadMaterialProps",0xba09cf88,"h3d.mat.MaterialSetup.loadMaterialProps","h3d/mat/MaterialSetup.hx",34,0x445dedad)
HX_LOCAL_STACK_FRAME(_hx_pos_601fc76b837c7772_38_saveMaterialProps,"h3d.mat.MaterialSetup","saveMaterialProps",0x6563bc11,"h3d.mat.MaterialSetup.saveMaterialProps","h3d/mat/MaterialSetup.hx",38,0x445dedad)
HX_LOCAL_STACK_FRAME(_hx_pos_601fc76b837c7772_45_customMeshInit,"h3d.mat.MaterialSetup","customMeshInit",0x2e751f09,"h3d.mat.MaterialSetup.customMeshInit","h3d/mat/MaterialSetup.hx",45,0x445dedad)
HX_LOCAL_STACK_FRAME(_hx_pos_601fc76b837c7772_48_boot,"h3d.mat.MaterialSetup","boot",0x00b8db0d,"h3d.mat.MaterialSetup.boot","h3d/mat/MaterialSetup.hx",48,0x445dedad)
namespace h3d{
namespace mat{

void MaterialSetup_obj::__construct(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_601fc76b837c7772_10_new)
HXLINE(  11)		if (::hx::IsNull( this->database )) {
HXLINE(  12)			this->database =  ::h3d::mat::MaterialDatabase_obj::__alloc( HX_CTX );
            		}
HXLINE(  13)		this->name = name;
            	}

Dynamic MaterialSetup_obj::__CreateEmpty() { return new MaterialSetup_obj; }

void *MaterialSetup_obj::_hx_vtable = 0;

Dynamic MaterialSetup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MaterialSetup_obj > _hx_result = new MaterialSetup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MaterialSetup_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c950fab;
}

 ::h3d::scene::Renderer MaterialSetup_obj::createRenderer(){
            	HX_GC_STACKFRAME(&_hx_pos_601fc76b837c7772_17_createRenderer)
HXDLIN(  17)		return  ::h3d::scene::fwd::Renderer_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialSetup_obj,createRenderer,return )

 ::h3d::scene::LightSystem MaterialSetup_obj::createLightSystem(){
            	HX_GC_STACKFRAME(&_hx_pos_601fc76b837c7772_21_createLightSystem)
HXDLIN(  21)		return  ::h3d::scene::fwd::LightSystem_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialSetup_obj,createLightSystem,return )

 ::h3d::mat::Material MaterialSetup_obj::createMaterial(){
            	HX_GC_STACKFRAME(&_hx_pos_601fc76b837c7772_25_createMaterial)
HXDLIN(  25)		return  ::h3d::mat::Material_obj::__alloc( HX_CTX ,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialSetup_obj,createMaterial,return )

 ::Dynamic MaterialSetup_obj::getDefaults(::String kind){
            	HX_STACKFRAME(&_hx_pos_601fc76b837c7772_28_getDefaults)
HXLINE(  29)		if (::hx::IsNull( this->emptyMat )) {
HXLINE(  29)			this->emptyMat = this->createMaterial();
            		}
HXLINE(  30)		return this->emptyMat->getDefaultProps(kind);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialSetup_obj,getDefaults,return )

 ::Dynamic MaterialSetup_obj::loadMaterialProps( ::h3d::mat::Material material){
            	HX_STACKFRAME(&_hx_pos_601fc76b837c7772_34_loadMaterialProps)
HXDLIN(  34)		return this->database->loadMatProps(material,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialSetup_obj,loadMaterialProps,return )

void MaterialSetup_obj::saveMaterialProps( ::h3d::mat::Material material){
            	HX_STACKFRAME(&_hx_pos_601fc76b837c7772_38_saveMaterialProps)
HXDLIN(  38)		this->database->saveMatProps(material,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialSetup_obj,saveMaterialProps,(void))

void MaterialSetup_obj::customMeshInit( ::h3d::scene::Mesh mesh){
            	HX_STACKFRAME(&_hx_pos_601fc76b837c7772_45_customMeshInit)
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialSetup_obj,customMeshInit,(void))

 ::h3d::mat::MaterialSetup MaterialSetup_obj::current;


::hx::ObjectPtr< MaterialSetup_obj > MaterialSetup_obj::__new(::String name) {
	::hx::ObjectPtr< MaterialSetup_obj > __this = new MaterialSetup_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< MaterialSetup_obj > MaterialSetup_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	MaterialSetup_obj *__this = (MaterialSetup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MaterialSetup_obj), true, "h3d.mat.MaterialSetup"));
	*(void **)__this = MaterialSetup_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

MaterialSetup_obj::MaterialSetup_obj()
{
}

void MaterialSetup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaterialSetup);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(displayName,"displayName");
	HX_MARK_MEMBER_NAME(database,"database");
	HX_MARK_MEMBER_NAME(emptyMat,"emptyMat");
	HX_MARK_END_CLASS();
}

void MaterialSetup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(displayName,"displayName");
	HX_VISIT_MEMBER_NAME(database,"database");
	HX_VISIT_MEMBER_NAME(emptyMat,"emptyMat");
}

::hx::Val MaterialSetup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"database") ) { return ::hx::Val( database ); }
		if (HX_FIELD_EQ(inName,"emptyMat") ) { return ::hx::Val( emptyMat ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayName") ) { return ::hx::Val( displayName ); }
		if (HX_FIELD_EQ(inName,"getDefaults") ) { return ::hx::Val( getDefaults_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createRenderer") ) { return ::hx::Val( createRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"createMaterial") ) { return ::hx::Val( createMaterial_dyn() ); }
		if (HX_FIELD_EQ(inName,"customMeshInit") ) { return ::hx::Val( customMeshInit_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createLightSystem") ) { return ::hx::Val( createLightSystem_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadMaterialProps") ) { return ::hx::Val( loadMaterialProps_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveMaterialProps") ) { return ::hx::Val( saveMaterialProps_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MaterialSetup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = ( current ); return true; }
	}
	return false;
}

::hx::Val MaterialSetup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"database") ) { database=inValue.Cast<  ::h3d::mat::MaterialDatabase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyMat") ) { emptyMat=inValue.Cast<  ::h3d::mat::Material >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayName") ) { displayName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MaterialSetup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast<  ::h3d::mat::MaterialSetup >(); return true; }
	}
	return false;
}

void MaterialSetup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("displayName",ad,11,f2,30));
	outFields->push(HX_("database",3b,9b,ab,95));
	outFields->push(HX_("emptyMat",13,de,33,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MaterialSetup_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(MaterialSetup_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(MaterialSetup_obj,displayName),HX_("displayName",ad,11,f2,30)},
	{::hx::fsObject /*  ::h3d::mat::MaterialDatabase */ ,(int)offsetof(MaterialSetup_obj,database),HX_("database",3b,9b,ab,95)},
	{::hx::fsObject /*  ::h3d::mat::Material */ ,(int)offsetof(MaterialSetup_obj,emptyMat),HX_("emptyMat",13,de,33,28)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MaterialSetup_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::MaterialSetup */ ,(void *) &MaterialSetup_obj::current,HX_("current",39,9c,e3,cb)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MaterialSetup_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("displayName",ad,11,f2,30),
	HX_("database",3b,9b,ab,95),
	HX_("emptyMat",13,de,33,28),
	HX_("createRenderer",5f,44,16,05),
	HX_("createLightSystem",c9,ba,d1,a9),
	HX_("createMaterial",c3,db,df,42),
	HX_("getDefaults",48,93,8d,d5),
	HX_("loadMaterialProps",43,93,7e,f3),
	HX_("saveMaterialProps",cc,7f,d8,9e),
	HX_("customMeshInit",6e,88,4a,f2),
	::String(null()) };

static void MaterialSetup_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaterialSetup_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MaterialSetup_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaterialSetup_obj::current,"current");
};

#endif

::hx::Class MaterialSetup_obj::__mClass;

static ::String MaterialSetup_obj_sStaticFields[] = {
	HX_("current",39,9c,e3,cb),
	::String(null())
};

void MaterialSetup_obj::__register()
{
	MaterialSetup_obj _hx_dummy;
	MaterialSetup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.mat.MaterialSetup",73,77,4c,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MaterialSetup_obj::__GetStatic;
	__mClass->mSetStaticField = &MaterialSetup_obj::__SetStatic;
	__mClass->mMarkFunc = MaterialSetup_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MaterialSetup_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MaterialSetup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MaterialSetup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MaterialSetup_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MaterialSetup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MaterialSetup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MaterialSetup_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_601fc76b837c7772_48_boot)
HXDLIN(  48)		current =  ::h3d::mat::MaterialSetup_obj::__alloc( HX_CTX ,HX_("Default",a1,00,15,69));
            	}
}

} // end namespace h3d
} // end namespace mat
