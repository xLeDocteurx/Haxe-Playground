#include <hxcpp.h>

#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
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
#ifndef INCLUDED_h3d_pass_RenderMode
#include <h3d/pass/RenderMode.h>
#endif
#ifndef INCLUDED_h3d_pass_Shadows
#include <h3d/pass/Shadows.h>
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
#ifndef INCLUDED_h3d_shader_DirShadow
#include <h3d/shader/DirShadow.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Channel
#include <hxsl/Channel.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_afb50ba745520750_13_new,"h3d.pass.DefaultShadowMap","new",0xa9c90b75,"h3d.pass.DefaultShadowMap.new","h3d/pass/DefaultShadowMap.hx",13,0x0445b93b)
HX_LOCAL_STACK_FRAME(_hx_pos_afb50ba745520750_27_draw,"h3d.pass.DefaultShadowMap","draw",0xdf8ea34f,"h3d.pass.DefaultShadowMap.draw","h3d/pass/DefaultShadowMap.hx",27,0x0445b93b)
namespace h3d{
namespace pass{

void DefaultShadowMap_obj::__construct(::hx::Null< int >  __o_size, ::hxd::PixelFormat format){
            		int size = __o_size.Default(1024);
            	HX_GC_STACKFRAME(&_hx_pos_afb50ba745520750_13_new)
HXLINE(  14)		if (::hx::IsNotNull( format )) {
HXLINE(  15)			this->format = format;
            		}
HXLINE(  16)		super::__construct(null());
HXLINE(  17)		this->set_size(size);
HXLINE(  18)		this->color =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  19)		this->set_mode(::h3d::pass::RenderMode_obj::Dynamic_dyn());
HXLINE(  20)		this->shadowMapId = ::hxsl::Globals_obj::allocID(HX_("shadow.map",0e,13,0d,03));
HXLINE(  21)		this->shadowProjId = ::hxsl::Globals_obj::allocID(HX_("shadow.proj",eb,22,6c,aa));
HXLINE(  22)		this->shadowColorId = ::hxsl::Globals_obj::allocID(HX_("shadow.color",55,fa,fe,f5));
HXLINE(  23)		this->shadowPowerId = ::hxsl::Globals_obj::allocID(HX_("shadow.power",f7,d4,3c,72));
HXLINE(  24)		this->shadowBiasId = ::hxsl::Globals_obj::allocID(HX_("shadow.bias",c7,45,24,a1));
            	}

Dynamic DefaultShadowMap_obj::__CreateEmpty() { return new DefaultShadowMap_obj; }

void *DefaultShadowMap_obj::_hx_vtable = 0;

Dynamic DefaultShadowMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultShadowMap_obj > _hx_result = new DefaultShadowMap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DefaultShadowMap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2eacfc8f) {
		if (inClassId<=(int)0x1e11f035) {
			if (inClassId<=(int)0x04b798b9) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x04b798b9;
			} else {
				return inClassId==(int)0x1e11f035;
			}
		} else {
			return inClassId==(int)0x2eacfc8f;
		}
	} else {
		return inClassId==(int)0x32234ba9 || inClassId==(int)0x6e5907d7;
	}
}

void DefaultShadowMap_obj::draw( ::h3d::pass::PassList passes, ::Dynamic sort){
            	HX_STACKFRAME(&_hx_pos_afb50ba745520750_27_draw)
HXLINE(  28)		this->super::draw(passes,sort);
HXLINE(  29)		 ::hxsl::Channel _hx_tmp;
HXDLIN(  29)		if (::hx::IsPointerEq( this->format,::h3d::mat::Texture_obj::nativeFormat )) {
HXLINE(  29)			_hx_tmp = ::hxsl::Channel_obj::PackedFloat_dyn();
            		}
            		else {
HXLINE(  29)			_hx_tmp = ::hxsl::Channel_obj::R_dyn();
            		}
HXDLIN(  29)		this->ctx->setGlobalID(this->shadowMapId, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("texture",db,c8,e0,9e),this->dshader->shadowMap__)
            			->setFixed(1,HX_("channel",c3,00,d2,cc),_hx_tmp)));
HXLINE(  30)		 ::h3d::scene::RenderContext _hx_tmp1 = this->ctx;
HXDLIN(  30)		int _hx_tmp2 = this->shadowProjId;
HXDLIN(  30)		_hx_tmp1->setGlobalID(_hx_tmp2,this->getShadowProj());
HXLINE(  31)		this->ctx->setGlobalID(this->shadowColorId,this->color);
HXLINE(  32)		this->ctx->setGlobalID(this->shadowPowerId,this->power);
HXLINE(  33)		this->ctx->setGlobalID(this->shadowBiasId,this->bias);
            	}



::hx::ObjectPtr< DefaultShadowMap_obj > DefaultShadowMap_obj::__new(::hx::Null< int >  __o_size, ::hxd::PixelFormat format) {
	::hx::ObjectPtr< DefaultShadowMap_obj > __this = new DefaultShadowMap_obj();
	__this->__construct(__o_size,format);
	return __this;
}

::hx::ObjectPtr< DefaultShadowMap_obj > DefaultShadowMap_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_size, ::hxd::PixelFormat format) {
	DefaultShadowMap_obj *__this = (DefaultShadowMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultShadowMap_obj), true, "h3d.pass.DefaultShadowMap"));
	*(void **)__this = DefaultShadowMap_obj::_hx_vtable;
	h3d::pass::DirShadowMap_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(__o_size,format);
	return __this;
}

DefaultShadowMap_obj::DefaultShadowMap_obj()
{
}

void DefaultShadowMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultShadowMap);
	HX_MARK_MEMBER_NAME(shadowMapId,"shadowMapId");
	HX_MARK_MEMBER_NAME(shadowProjId,"shadowProjId");
	HX_MARK_MEMBER_NAME(shadowColorId,"shadowColorId");
	HX_MARK_MEMBER_NAME(shadowPowerId,"shadowPowerId");
	HX_MARK_MEMBER_NAME(shadowBiasId,"shadowBiasId");
	HX_MARK_MEMBER_NAME(color,"color");
	 ::h3d::pass::DirShadowMap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultShadowMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shadowMapId,"shadowMapId");
	HX_VISIT_MEMBER_NAME(shadowProjId,"shadowProjId");
	HX_VISIT_MEMBER_NAME(shadowColorId,"shadowColorId");
	HX_VISIT_MEMBER_NAME(shadowPowerId,"shadowPowerId");
	HX_VISIT_MEMBER_NAME(shadowBiasId,"shadowBiasId");
	HX_VISIT_MEMBER_NAME(color,"color");
	 ::h3d::pass::DirShadowMap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DefaultShadowMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shadowMapId") ) { return ::hx::Val( shadowMapId ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowProjId") ) { return ::hx::Val( shadowProjId ); }
		if (HX_FIELD_EQ(inName,"shadowBiasId") ) { return ::hx::Val( shadowBiasId ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shadowColorId") ) { return ::hx::Val( shadowColorId ); }
		if (HX_FIELD_EQ(inName,"shadowPowerId") ) { return ::hx::Val( shadowPowerId ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DefaultShadowMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shadowMapId") ) { shadowMapId=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowProjId") ) { shadowProjId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowBiasId") ) { shadowBiasId=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shadowColorId") ) { shadowColorId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowPowerId") ) { shadowPowerId=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultShadowMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shadowMapId",97,45,ec,79));
	outFields->push(HX_("shadowProjId",d8,4c,22,31));
	outFields->push(HX_("shadowColorId",1e,2c,71,c6));
	outFields->push(HX_("shadowPowerId",40,73,d4,31));
	outFields->push(HX_("shadowBiasId",b4,de,4d,60));
	outFields->push(HX_("color",63,71,5c,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DefaultShadowMap_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(DefaultShadowMap_obj,shadowMapId),HX_("shadowMapId",97,45,ec,79)},
	{::hx::fsInt,(int)offsetof(DefaultShadowMap_obj,shadowProjId),HX_("shadowProjId",d8,4c,22,31)},
	{::hx::fsInt,(int)offsetof(DefaultShadowMap_obj,shadowColorId),HX_("shadowColorId",1e,2c,71,c6)},
	{::hx::fsInt,(int)offsetof(DefaultShadowMap_obj,shadowPowerId),HX_("shadowPowerId",40,73,d4,31)},
	{::hx::fsInt,(int)offsetof(DefaultShadowMap_obj,shadowBiasId),HX_("shadowBiasId",b4,de,4d,60)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(DefaultShadowMap_obj,color),HX_("color",63,71,5c,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DefaultShadowMap_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultShadowMap_obj_sMemberFields[] = {
	HX_("shadowMapId",97,45,ec,79),
	HX_("shadowProjId",d8,4c,22,31),
	HX_("shadowColorId",1e,2c,71,c6),
	HX_("shadowPowerId",40,73,d4,31),
	HX_("shadowBiasId",b4,de,4d,60),
	HX_("color",63,71,5c,4a),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class DefaultShadowMap_obj::__mClass;

void DefaultShadowMap_obj::__register()
{
	DefaultShadowMap_obj _hx_dummy;
	DefaultShadowMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.DefaultShadowMap",03,2d,3f,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DefaultShadowMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DefaultShadowMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultShadowMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultShadowMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
