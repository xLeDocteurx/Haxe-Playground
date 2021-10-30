#include <hxcpp.h>

#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
#ifndef INCLUDED_h3d_mat_Material
#include <h3d/mat/Material.h>
#endif
#ifndef INCLUDED_h3d_mat_MaterialSetup
#include <h3d/mat/MaterialSetup.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_h3d_scene_Mesh
#include <h3d/scene/Mesh.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_be4c17e67d7fb299_23_new,"h3d.scene.Mesh","new",0x3cf0c276,"h3d.scene.Mesh.new","h3d/scene/Mesh.hx",23,0x25798338)
HX_LOCAL_STACK_FRAME(_hx_pos_be4c17e67d7fb299_37_getMeshMaterials,"h3d.scene.Mesh","getMeshMaterials",0xf73ec7f3,"h3d.scene.Mesh.getMeshMaterials","h3d/scene/Mesh.hx",37,0x25798338)
HX_LOCAL_STACK_FRAME(_hx_pos_be4c17e67d7fb299_40_getBoundsRec,"h3d.scene.Mesh","getBoundsRec",0xb520798f,"h3d.scene.Mesh.getBoundsRec","h3d/scene/Mesh.hx",40,0x25798338)
HX_LOCAL_STACK_FRAME(_hx_pos_be4c17e67d7fb299_50_clone,"h3d.scene.Mesh","clone",0x9bb136f3,"h3d.scene.Mesh.clone","h3d/scene/Mesh.hx",50,0x25798338)
HX_LOCAL_STACK_FRAME(_hx_pos_be4c17e67d7fb299_59_getLocalCollider,"h3d.scene.Mesh","getLocalCollider",0x5289e973,"h3d.scene.Mesh.getLocalCollider","h3d/scene/Mesh.hx",59,0x25798338)
HX_LOCAL_STACK_FRAME(_hx_pos_be4c17e67d7fb299_63_draw,"h3d.scene.Mesh","draw",0x0f270d2e,"h3d.scene.Mesh.draw","h3d/scene/Mesh.hx",63,0x25798338)
HX_LOCAL_STACK_FRAME(_hx_pos_be4c17e67d7fb299_67_emit,"h3d.scene.Mesh","emit",0x0fcc7f7d,"h3d.scene.Mesh.emit","h3d/scene/Mesh.hx",67,0x25798338)
HX_LOCAL_STACK_FRAME(_hx_pos_be4c17e67d7fb299_70_getMaterialByName,"h3d.scene.Mesh","getMaterialByName",0x47294f95,"h3d.scene.Mesh.getMaterialByName","h3d/scene/Mesh.hx",70,0x25798338)
HX_LOCAL_STACK_FRAME(_hx_pos_be4c17e67d7fb299_76_getMaterials,"h3d.scene.Mesh","getMaterials",0xeafd6da0,"h3d.scene.Mesh.getMaterials","h3d/scene/Mesh.hx",76,0x25798338)
HX_LOCAL_STACK_FRAME(_hx_pos_be4c17e67d7fb299_96_onAdd,"h3d.scene.Mesh","onAdd",0x85afa9d8,"h3d.scene.Mesh.onAdd","h3d/scene/Mesh.hx",96,0x25798338)
HX_LOCAL_STACK_FRAME(_hx_pos_be4c17e67d7fb299_102_onRemove,"h3d.scene.Mesh","onRemove",0x9b4550ed,"h3d.scene.Mesh.onRemove","h3d/scene/Mesh.hx",102,0x25798338)
HX_LOCAL_STACK_FRAME(_hx_pos_be4c17e67d7fb299_107_set_primitive,"h3d.scene.Mesh","set_primitive",0x19dee820,"h3d.scene.Mesh.set_primitive","h3d/scene/Mesh.hx",107,0x25798338)
namespace h3d{
namespace scene{

void Mesh_obj::__construct( ::h3d::prim::Primitive primitive, ::h3d::mat::Material material, ::h3d::scene::Object parent){
            	HX_STACKFRAME(&_hx_pos_be4c17e67d7fb299_23_new)
HXLINE(  24)		super::__construct(parent);
HXLINE(  25)		this->set_primitive(primitive);
HXLINE(  26)		if (::hx::IsNull( material )) {
HXLINE(  27)			material = ::h3d::mat::MaterialSetup_obj::current->createMaterial();
HXLINE(  28)			material->set_props(material->getDefaultProps(null()));
            		}
HXLINE(  30)		this->material = material;
            	}

Dynamic Mesh_obj::__CreateEmpty() { return new Mesh_obj; }

void *Mesh_obj::_hx_vtable = 0;

Dynamic Mesh_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mesh_obj > _hx_result = new Mesh_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Mesh_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1797ae36) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1797ae36;
	} else {
		return inClassId==(int)0x6cfff440;
	}
}

::Array< ::Dynamic> Mesh_obj::getMeshMaterials(){
            	HX_STACKFRAME(&_hx_pos_be4c17e67d7fb299_37_getMeshMaterials)
HXDLIN(  37)		return ::Array_obj< ::Dynamic>::__new(1)->init(0,this->material);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getMeshMaterials,return )

 ::h3d::col::Bounds Mesh_obj::getBoundsRec( ::h3d::col::Bounds b){
            	HX_GC_STACKFRAME(&_hx_pos_be4c17e67d7fb299_40_getBoundsRec)
HXLINE(  41)		b = this->super::getBoundsRec(b);
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		if (::hx::IsNotNull( this->primitive )) {
HXLINE(  42)			_hx_tmp = ((this->flags & 512) != 0);
            		}
            		else {
HXLINE(  42)			_hx_tmp = true;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  43)			return b;
            		}
HXLINE(  44)		 ::h3d::col::Bounds _this = this->primitive->getBounds();
HXDLIN(  44)		 ::h3d::col::Bounds b1 =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
HXDLIN(  44)		b1->xMin = _this->xMin;
HXDLIN(  44)		b1->xMax = _this->xMax;
HXDLIN(  44)		b1->yMin = _this->yMin;
HXDLIN(  44)		b1->yMax = _this->yMax;
HXDLIN(  44)		b1->zMin = _this->zMin;
HXDLIN(  44)		b1->zMax = _this->zMax;
HXDLIN(  44)		 ::h3d::col::Bounds tmp = b1;
HXLINE(  45)		tmp->transform(this->absPos);
HXLINE(  46)		{
HXLINE(  46)			if ((tmp->xMin < b->xMin)) {
HXLINE(  46)				b->xMin = tmp->xMin;
            			}
HXDLIN(  46)			if ((tmp->xMax > b->xMax)) {
HXLINE(  46)				b->xMax = tmp->xMax;
            			}
HXDLIN(  46)			if ((tmp->yMin < b->yMin)) {
HXLINE(  46)				b->yMin = tmp->yMin;
            			}
HXDLIN(  46)			if ((tmp->yMax > b->yMax)) {
HXLINE(  46)				b->yMax = tmp->yMax;
            			}
HXDLIN(  46)			if ((tmp->zMin < b->zMin)) {
HXLINE(  46)				b->zMin = tmp->zMin;
            			}
HXDLIN(  46)			if ((tmp->zMax > b->zMax)) {
HXLINE(  46)				b->zMax = tmp->zMax;
            			}
            		}
HXLINE(  47)		return b;
            	}


 ::h3d::scene::Object Mesh_obj::clone( ::h3d::scene::Object o){
            	HX_GC_STACKFRAME(&_hx_pos_be4c17e67d7fb299_50_clone)
HXLINE(  51)		 ::h3d::scene::Mesh m;
HXDLIN(  51)		if (::hx::IsNull( o )) {
HXLINE(  51)			m =  ::h3d::scene::Mesh_obj::__alloc( HX_CTX ,null(),this->material,null());
            		}
            		else {
HXLINE(  51)			m = ( ( ::h3d::scene::Mesh)(o) );
            		}
HXLINE(  52)		m->set_primitive(this->primitive);
HXLINE(  53)		m->material = ( ( ::h3d::mat::Material)(this->material->clone(null())) );
HXLINE(  54)		this->super::clone(m);
HXLINE(  55)		return m;
            	}


::Dynamic Mesh_obj::getLocalCollider(){
            	HX_STACKFRAME(&_hx_pos_be4c17e67d7fb299_59_getLocalCollider)
HXDLIN(  59)		return this->primitive->getCollider();
            	}


void Mesh_obj::draw( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_be4c17e67d7fb299_63_draw)
HXDLIN(  63)		this->primitive->render(ctx->engine);
            	}


void Mesh_obj::emit( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_be4c17e67d7fb299_67_emit)
HXDLIN(  67)		int index = 0;
HXDLIN(  67)		 ::h3d::mat::Pass p = this->material->passes;
HXDLIN(  67)		while(::hx::IsNotNull( p )){
HXDLIN(  67)			ctx->emitPass(p,::hx::ObjectPtr<OBJ_>(this))->index = index;
HXDLIN(  67)			p = p->nextPass;
            		}
            	}


 ::h3d::mat::Material Mesh_obj::getMaterialByName(::String name){
            	HX_STACKFRAME(&_hx_pos_be4c17e67d7fb299_70_getMaterialByName)
HXLINE(  71)		bool _hx_tmp;
HXDLIN(  71)		if (::hx::IsNotNull( this->material )) {
HXLINE(  71)			_hx_tmp = (this->material->name == name);
            		}
            		else {
HXLINE(  71)			_hx_tmp = false;
            		}
HXDLIN(  71)		if (_hx_tmp) {
HXLINE(  72)			return this->material;
            		}
HXLINE(  73)		return this->super::getMaterialByName(name);
            	}


::Array< ::Dynamic> Mesh_obj::getMaterials(::Array< ::Dynamic> a,::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(true);
            	HX_STACKFRAME(&_hx_pos_be4c17e67d7fb299_76_getMaterials)
HXLINE(  77)		if (::hx::IsNull( a )) {
HXLINE(  77)			a = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  78)		bool _hx_tmp;
HXDLIN(  78)		if (::hx::IsNotNull( this->material )) {
HXLINE(  78)			_hx_tmp = (a->indexOf(this->material,null()) < 0);
            		}
            		else {
HXLINE(  78)			_hx_tmp = false;
            		}
HXDLIN(  78)		if (_hx_tmp) {
HXLINE(  78)			a->push(this->material);
            		}
HXLINE(  79)		return this->super::getMaterials(a,recursive);
            	}


void Mesh_obj::onAdd(){
            	HX_STACKFRAME(&_hx_pos_be4c17e67d7fb299_96_onAdd)
HXLINE(  97)		this->super::onAdd();
HXLINE(  98)		if (::hx::IsNotNull( this->primitive )) {
HXLINE(  98)			this->primitive->incref();
            		}
            	}


void Mesh_obj::onRemove(){
            	HX_STACKFRAME(&_hx_pos_be4c17e67d7fb299_102_onRemove)
HXLINE( 103)		if (::hx::IsNotNull( this->primitive )) {
HXLINE( 103)			this->primitive->decref();
            		}
HXLINE( 104)		this->super::onRemove();
            	}


 ::h3d::prim::Primitive Mesh_obj::set_primitive( ::h3d::prim::Primitive prim){
            	HX_STACKFRAME(&_hx_pos_be4c17e67d7fb299_107_set_primitive)
HXLINE( 108)		bool _hx_tmp;
HXDLIN( 108)		if (::hx::IsInstanceNotEq( prim,this->primitive )) {
HXLINE( 108)			_hx_tmp = ((this->flags & 32) != 0);
            		}
            		else {
HXLINE( 108)			_hx_tmp = false;
            		}
HXDLIN( 108)		if (_hx_tmp) {
HXLINE( 109)			if (::hx::IsNotNull( this->primitive )) {
HXLINE( 109)				this->primitive->decref();
            			}
HXLINE( 110)			if (::hx::IsNotNull( prim )) {
HXLINE( 110)				prim->incref();
            			}
            		}
HXLINE( 112)		return (this->primitive = prim);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_primitive,return )


::hx::ObjectPtr< Mesh_obj > Mesh_obj::__new( ::h3d::prim::Primitive primitive, ::h3d::mat::Material material, ::h3d::scene::Object parent) {
	::hx::ObjectPtr< Mesh_obj > __this = new Mesh_obj();
	__this->__construct(primitive,material,parent);
	return __this;
}

::hx::ObjectPtr< Mesh_obj > Mesh_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::prim::Primitive primitive, ::h3d::mat::Material material, ::h3d::scene::Object parent) {
	Mesh_obj *__this = (Mesh_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mesh_obj), true, "h3d.scene.Mesh"));
	*(void **)__this = Mesh_obj::_hx_vtable;
	__this->__construct(primitive,material,parent);
	return __this;
}

Mesh_obj::Mesh_obj()
{
}

void Mesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mesh);
	HX_MARK_MEMBER_NAME(primitive,"primitive");
	HX_MARK_MEMBER_NAME(material,"material");
	 ::h3d::scene::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(primitive,"primitive");
	HX_VISIT_MEMBER_NAME(material,"material");
	 ::h3d::scene::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Mesh_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"emit") ) { return ::hx::Val( emit_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"onAdd") ) { return ::hx::Val( onAdd_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { return ::hx::Val( material ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"primitive") ) { return ::hx::Val( primitive ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBoundsRec") ) { return ::hx::Val( getBoundsRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMaterials") ) { return ::hx::Val( getMaterials_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_primitive") ) { return ::hx::Val( set_primitive_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getMeshMaterials") ) { return ::hx::Val( getMeshMaterials_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLocalCollider") ) { return ::hx::Val( getLocalCollider_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getMaterialByName") ) { return ::hx::Val( getMaterialByName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Mesh_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast<  ::h3d::mat::Material >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"primitive") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_primitive(inValue.Cast<  ::h3d::prim::Primitive >()) );primitive=inValue.Cast<  ::h3d::prim::Primitive >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("primitive",a7,88,58,27));
	outFields->push(HX_("material",a7,5c,a5,f0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Mesh_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::prim::Primitive */ ,(int)offsetof(Mesh_obj,primitive),HX_("primitive",a7,88,58,27)},
	{::hx::fsObject /*  ::h3d::mat::Material */ ,(int)offsetof(Mesh_obj,material),HX_("material",a7,5c,a5,f0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Mesh_obj_sStaticStorageInfo = 0;
#endif

static ::String Mesh_obj_sMemberFields[] = {
	HX_("primitive",a7,88,58,27),
	HX_("material",a7,5c,a5,f0),
	HX_("getMeshMaterials",c9,cf,a5,51),
	HX_("getBoundsRec",65,5e,85,79),
	HX_("clone",5d,13,63,48),
	HX_("getLocalCollider",49,f1,f0,ac),
	HX_("draw",04,2c,70,42),
	HX_("emit",53,9e,15,43),
	HX_("getMaterialByName",ff,22,e9,06),
	HX_("getMaterials",76,52,62,af),
	HX_("onAdd",42,86,61,32),
	HX_("onRemove",c3,92,35,e4),
	HX_("set_primitive",8a,3e,c2,2d),
	::String(null()) };

::hx::Class Mesh_obj::__mClass;

void Mesh_obj::__register()
{
	Mesh_obj _hx_dummy;
	Mesh_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.Mesh",84,0f,1d,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Mesh_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Mesh_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mesh_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mesh_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
