#include <hxcpp.h>

#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
#ifndef INCLUDED_h3d_mat_Material
#include <h3d/mat/Material.h>
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
#ifndef INCLUDED_h3d_scene_MultiMaterial
#include <h3d/scene/MultiMaterial.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_032abc83c6161120_7_new,"h3d.scene.MultiMaterial","new",0x62754d3b,"h3d.scene.MultiMaterial.new","h3d/scene/MultiMaterial.hx",7,0x61ba0d57)
HX_LOCAL_STACK_FRAME(_hx_pos_032abc83c6161120_13_getMeshMaterials,"h3d.scene.MultiMaterial","getMeshMaterials",0xed8d260e,"h3d.scene.MultiMaterial.getMeshMaterials","h3d/scene/MultiMaterial.hx",13,0x61ba0d57)
HX_LOCAL_STACK_FRAME(_hx_pos_032abc83c6161120_16_clone,"h3d.scene.MultiMaterial","clone",0x9381bcf8,"h3d.scene.MultiMaterial.clone","h3d/scene/MultiMaterial.hx",16,0x61ba0d57)
HX_LOCAL_STACK_FRAME(_hx_pos_032abc83c6161120_27_emit,"h3d.scene.MultiMaterial","emit",0xbe416118,"h3d.scene.MultiMaterial.emit","h3d/scene/MultiMaterial.hx",27,0x61ba0d57)
HX_LOCAL_STACK_FRAME(_hx_pos_032abc83c6161120_34_getMaterialByName,"h3d.scene.MultiMaterial","getMaterialByName",0xd56d491a,"h3d.scene.MultiMaterial.getMaterialByName","h3d/scene/MultiMaterial.hx",34,0x61ba0d57)
HX_LOCAL_STACK_FRAME(_hx_pos_032abc83c6161120_41_getMaterials,"h3d.scene.MultiMaterial","getMaterials",0x12e5e23b,"h3d.scene.MultiMaterial.getMaterials","h3d/scene/MultiMaterial.hx",41,0x61ba0d57)
HX_LOCAL_STACK_FRAME(_hx_pos_032abc83c6161120_53_draw,"h3d.scene.MultiMaterial","draw",0xbd9beec9,"h3d.scene.MultiMaterial.draw","h3d/scene/MultiMaterial.hx",53,0x61ba0d57)
namespace h3d{
namespace scene{

void MultiMaterial_obj::__construct( ::h3d::prim::Primitive prim,::Array< ::Dynamic> mats, ::h3d::scene::Object parent){
            	HX_STACKFRAME(&_hx_pos_032abc83c6161120_7_new)
HXLINE(   8)		 ::h3d::mat::Material _hx_tmp;
HXDLIN(   8)		if (::hx::IsNull( mats )) {
HXLINE(   8)			_hx_tmp = null();
            		}
            		else {
HXLINE(   8)			_hx_tmp = mats->__get(0).StaticCast<  ::h3d::mat::Material >();
            		}
HXDLIN(   8)		super::__construct(prim,_hx_tmp,parent);
HXLINE(   9)		::Array< ::Dynamic> _hx_tmp1;
HXDLIN(   9)		if (::hx::IsNull( mats )) {
HXLINE(   9)			_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->material);
            		}
            		else {
HXLINE(   9)			_hx_tmp1 = mats;
            		}
HXDLIN(   9)		this->materials = _hx_tmp1;
            	}

Dynamic MultiMaterial_obj::__CreateEmpty() { return new MultiMaterial_obj; }

void *MultiMaterial_obj::_hx_vtable = 0;

Dynamic MultiMaterial_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MultiMaterial_obj > _hx_result = new MultiMaterial_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MultiMaterial_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6cfff440) {
		if (inClassId<=(int)0x1797ae36) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1797ae36;
		} else {
			return inClassId==(int)0x6cfff440;
		}
	} else {
		return inClassId==(int)0x70ba378d;
	}
}

::Array< ::Dynamic> MultiMaterial_obj::getMeshMaterials(){
            	HX_STACKFRAME(&_hx_pos_032abc83c6161120_13_getMeshMaterials)
HXDLIN(  13)		return this->materials->copy();
            	}


 ::h3d::scene::Object MultiMaterial_obj::clone( ::h3d::scene::Object o){
            	HX_GC_STACKFRAME(&_hx_pos_032abc83c6161120_16_clone)
HXLINE(  17)		 ::h3d::scene::MultiMaterial m;
HXDLIN(  17)		if (::hx::IsNull( o )) {
HXLINE(  17)			m =  ::h3d::scene::MultiMaterial_obj::__alloc( HX_CTX ,null(),this->materials,null());
            		}
            		else {
HXLINE(  17)			m = ( ( ::h3d::scene::MultiMaterial)(o) );
            		}
HXLINE(  18)		m->materials = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  19)		{
HXLINE(  19)			int _g = 0;
HXDLIN(  19)			::Array< ::Dynamic> _g1 = this->materials;
HXDLIN(  19)			while((_g < _g1->length)){
HXLINE(  19)				 ::h3d::mat::Material mat = _g1->__get(_g).StaticCast<  ::h3d::mat::Material >();
HXDLIN(  19)				_g = (_g + 1);
HXLINE(  20)				::Array< ::Dynamic> m1 = m->materials;
HXDLIN(  20)				 ::h3d::mat::Material _hx_tmp;
HXDLIN(  20)				if (::hx::IsNull( mat )) {
HXLINE(  20)					_hx_tmp = null();
            				}
            				else {
HXLINE(  20)					_hx_tmp = ( ( ::h3d::mat::Material)(mat->clone(null())) );
            				}
HXDLIN(  20)				m1->push(_hx_tmp);
            			}
            		}
HXLINE(  21)		this->super::clone(m);
HXLINE(  22)		m->material = m->materials->__get(0).StaticCast<  ::h3d::mat::Material >();
HXLINE(  23)		return m;
            	}


void MultiMaterial_obj::emit( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_032abc83c6161120_27_emit)
HXDLIN(  27)		int _g = 0;
HXDLIN(  27)		int _g1 = this->materials->length;
HXDLIN(  27)		while((_g < _g1)){
HXDLIN(  27)			_g = (_g + 1);
HXDLIN(  27)			int i = (_g - 1);
HXLINE(  28)			 ::h3d::mat::Material m = this->materials->__get(i).StaticCast<  ::h3d::mat::Material >();
HXLINE(  29)			if (::hx::IsNotNull( m )) {
HXLINE(  30)				 ::h3d::mat::Pass p = m->passes;
HXDLIN(  30)				while(::hx::IsNotNull( p )){
HXLINE(  30)					ctx->emitPass(p,::hx::ObjectPtr<OBJ_>(this))->index = i;
HXDLIN(  30)					p = p->nextPass;
            				}
            			}
            		}
            	}


 ::h3d::mat::Material MultiMaterial_obj::getMaterialByName(::String name){
            	HX_STACKFRAME(&_hx_pos_032abc83c6161120_34_getMaterialByName)
HXLINE(  35)		{
HXLINE(  35)			int _g = 0;
HXDLIN(  35)			::Array< ::Dynamic> _g1 = this->materials;
HXDLIN(  35)			while((_g < _g1->length)){
HXLINE(  35)				 ::h3d::mat::Material m = _g1->__get(_g).StaticCast<  ::h3d::mat::Material >();
HXDLIN(  35)				_g = (_g + 1);
HXLINE(  36)				bool _hx_tmp;
HXDLIN(  36)				if (::hx::IsNotNull( m )) {
HXLINE(  36)					_hx_tmp = (m->name == name);
            				}
            				else {
HXLINE(  36)					_hx_tmp = false;
            				}
HXDLIN(  36)				if (_hx_tmp) {
HXLINE(  37)					return m;
            				}
            			}
            		}
HXLINE(  38)		return this->super::getMaterialByName(name);
            	}


::Array< ::Dynamic> MultiMaterial_obj::getMaterials(::Array< ::Dynamic> a,::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(true);
            	HX_STACKFRAME(&_hx_pos_032abc83c6161120_41_getMaterials)
HXLINE(  42)		if (::hx::IsNull( a )) {
HXLINE(  42)			a = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  43)		{
HXLINE(  43)			int _g = 0;
HXDLIN(  43)			::Array< ::Dynamic> _g1 = this->materials;
HXDLIN(  43)			while((_g < _g1->length)){
HXLINE(  43)				 ::h3d::mat::Material m = _g1->__get(_g).StaticCast<  ::h3d::mat::Material >();
HXDLIN(  43)				_g = (_g + 1);
HXLINE(  44)				bool _hx_tmp;
HXDLIN(  44)				if (::hx::IsNotNull( m )) {
HXLINE(  44)					_hx_tmp = (a->indexOf(m,null()) < 0);
            				}
            				else {
HXLINE(  44)					_hx_tmp = false;
            				}
HXDLIN(  44)				if (_hx_tmp) {
HXLINE(  45)					a->push(m);
            				}
            			}
            		}
HXLINE(  46)		if (recursive) {
HXLINE(  47)			int _g = 0;
HXDLIN(  47)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN(  47)			while((_g < _g1->length)){
HXLINE(  47)				 ::h3d::scene::Object o = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN(  47)				_g = (_g + 1);
HXLINE(  48)				o->getMaterials(a,null());
            			}
            		}
HXLINE(  50)		return a;
            	}


void MultiMaterial_obj::draw( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_032abc83c6161120_53_draw)
HXLINE(  54)		if ((this->materials->length > 1)) {
HXLINE(  55)			this->primitive->selectMaterial(ctx->drawPass->index);
            		}
HXLINE(  56)		this->super::draw(ctx);
            	}



::hx::ObjectPtr< MultiMaterial_obj > MultiMaterial_obj::__new( ::h3d::prim::Primitive prim,::Array< ::Dynamic> mats, ::h3d::scene::Object parent) {
	::hx::ObjectPtr< MultiMaterial_obj > __this = new MultiMaterial_obj();
	__this->__construct(prim,mats,parent);
	return __this;
}

::hx::ObjectPtr< MultiMaterial_obj > MultiMaterial_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::prim::Primitive prim,::Array< ::Dynamic> mats, ::h3d::scene::Object parent) {
	MultiMaterial_obj *__this = (MultiMaterial_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MultiMaterial_obj), true, "h3d.scene.MultiMaterial"));
	*(void **)__this = MultiMaterial_obj::_hx_vtable;
	__this->__construct(prim,mats,parent);
	return __this;
}

MultiMaterial_obj::MultiMaterial_obj()
{
}

void MultiMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MultiMaterial);
	HX_MARK_MEMBER_NAME(materials,"materials");
	 ::h3d::scene::Mesh_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MultiMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(materials,"materials");
	 ::h3d::scene::Mesh_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MultiMaterial_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"emit") ) { return ::hx::Val( emit_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"materials") ) { return ::hx::Val( materials ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMaterials") ) { return ::hx::Val( getMaterials_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getMeshMaterials") ) { return ::hx::Val( getMeshMaterials_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getMaterialByName") ) { return ::hx::Val( getMaterialByName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MultiMaterial_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"materials") ) { materials=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MultiMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("materials",ec,b5,0b,a0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MultiMaterial_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MultiMaterial_obj,materials),HX_("materials",ec,b5,0b,a0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MultiMaterial_obj_sStaticStorageInfo = 0;
#endif

static ::String MultiMaterial_obj_sMemberFields[] = {
	HX_("materials",ec,b5,0b,a0),
	HX_("getMeshMaterials",c9,cf,a5,51),
	HX_("clone",5d,13,63,48),
	HX_("emit",53,9e,15,43),
	HX_("getMaterialByName",ff,22,e9,06),
	HX_("getMaterials",76,52,62,af),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class MultiMaterial_obj::__mClass;

void MultiMaterial_obj::__register()
{
	MultiMaterial_obj _hx_dummy;
	MultiMaterial_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.MultiMaterial",c9,93,69,b8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MultiMaterial_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MultiMaterial_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MultiMaterial_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MultiMaterial_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
