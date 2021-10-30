#include <hxcpp.h>

#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_pass_Copy
#include <h3d/pass/Copy.h>
#endif
#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
#ifndef INCLUDED_h3d_pass__Copy_CopyShader
#include <h3d/pass/_Copy/CopyShader.h>
#endif
#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5f220b8dc730d54b_84_new,"h3d.pass.Copy","new",0x3bc5d28f,"h3d.pass.Copy.new","h3d/pass/Copy.hx",84,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_5f220b8dc730d54b_87_apply,"h3d.pass.Copy","apply",0xa1d5b15d,"h3d.pass.Copy.apply","h3d/pass/Copy.hx",87,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_5f220b8dc730d54b_111_run,"h3d.pass.Copy","run",0x3bc8e97a,"h3d.pass.Copy.run","h3d/pass/Copy.hx",111,0xc0a6e361)
namespace h3d{
namespace pass{

void Copy_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5f220b8dc730d54b_84_new)
HXDLIN(  84)		super::__construct( ::h3d::pass::_Copy::CopyShader_obj::__alloc( HX_CTX ),null());
            	}

Dynamic Copy_obj::__CreateEmpty() { return new Copy_obj; }

void *Copy_obj::_hx_vtable = 0;

Dynamic Copy_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Copy_obj > _hx_result = new Copy_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Copy_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x00578117) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x00578117;
	} else {
		return inClassId==(int)0x35a83008;
	}
}

void Copy_obj::apply( ::h3d::mat::Texture from, ::h3d::mat::Texture to, ::h2d::BlendMode blend, ::h3d::mat::Pass customPass, ::Dynamic layer){
            	HX_STACKFRAME(&_hx_pos_5f220b8dc730d54b_87_apply)
HXLINE(  88)		if (::hx::IsNotNull( to )) {
HXLINE(  89)			int _hx_tmp;
HXDLIN(  89)			if (::hx::IsNotNull( layer )) {
HXLINE(  89)				_hx_tmp = ( (int)(layer) );
            			}
            			else {
HXLINE(  89)				_hx_tmp = 0;
            			}
HXDLIN(  89)			this->get_engine()->pushTarget(to,_hx_tmp,null());
            		}
HXLINE(  90)		( ( ::h3d::pass::_Copy::CopyShader)(this->shader) )->texture__ = from;
HXLINE(  91)		if (::hx::IsNotNull( customPass )) {
HXLINE(  92)			 ::h3d::mat::Pass old = this->pass;
HXLINE(  93)			this->pass = customPass;
HXLINE(  94)			if (::hx::IsNotNull( blend )) {
HXLINE(  94)				this->pass->setBlendMode(blend);
            			}
HXLINE(  95)			 ::hxsl::ShaderList h = this->shaders;
HXLINE(  96)			while(::hx::IsNotNull( h->next )){
HXLINE(  97)				h = h->next;
            			}
HXLINE(  98)			h->next = this->pass->shaders;
HXLINE(  99)			this->render();
HXLINE( 100)			this->pass = old;
HXLINE( 101)			h->next = null();
            		}
            		else {
HXLINE( 103)			 ::h2d::BlendMode _hx_tmp;
HXDLIN( 103)			if (::hx::IsNull( blend )) {
HXLINE( 103)				_hx_tmp = ::h2d::BlendMode_obj::None_dyn();
            			}
            			else {
HXLINE( 103)				_hx_tmp = blend;
            			}
HXDLIN( 103)			this->pass->setBlendMode(_hx_tmp);
HXLINE( 104)			this->render();
            		}
HXLINE( 106)		{
HXLINE( 106)			 ::h3d::mat::Texture _v = null();
HXDLIN( 106)			( ( ::h3d::pass::_Copy::CopyShader)(this->shader) )->texture__ = _v;
            		}
HXLINE( 107)		if (::hx::IsNotNull( to )) {
HXLINE( 108)			this->get_engine()->popTarget();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(Copy_obj,apply,(void))

void Copy_obj::run( ::h3d::mat::Texture from, ::h3d::mat::Texture to, ::h2d::BlendMode blend, ::h3d::mat::Pass pass, ::Dynamic layer){
            	HX_GC_STACKFRAME(&_hx_pos_5f220b8dc730d54b_111_run)
HXLINE( 112)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		bool _hx_tmp1;
HXDLIN( 113)		bool _hx_tmp2;
HXDLIN( 113)		bool _hx_tmp3;
HXDLIN( 113)		bool _hx_tmp4;
HXDLIN( 113)		if (::hx::IsNotNull( to )) {
HXLINE( 113)			_hx_tmp4 = ::hx::IsNotNull( from );
            		}
            		else {
HXLINE( 113)			_hx_tmp4 = false;
            		}
HXDLIN( 113)		if (_hx_tmp4) {
HXLINE( 113)			if (::hx::IsNotNull( blend )) {
HXLINE( 113)				_hx_tmp3 = ::hx::IsPointerEq( blend,::h2d::BlendMode_obj::None_dyn() );
            			}
            			else {
HXLINE( 113)				_hx_tmp3 = true;
            			}
            		}
            		else {
HXLINE( 113)			_hx_tmp3 = false;
            		}
HXDLIN( 113)		if (_hx_tmp3) {
HXLINE( 113)			_hx_tmp2 = ::hx::IsNull( pass );
            		}
            		else {
HXLINE( 113)			_hx_tmp2 = false;
            		}
HXDLIN( 113)		if (_hx_tmp2) {
HXLINE( 113)			_hx_tmp1 = ::hx::IsNull( layer );
            		}
            		else {
HXLINE( 113)			_hx_tmp1 = false;
            		}
HXDLIN( 113)		if (_hx_tmp1) {
HXLINE( 113)			_hx_tmp = engine->driver->copyTexture(from,to);
            		}
            		else {
HXLINE( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 114)			return;
            		}
HXLINE( 115)		 ::h3d::pass::Copy inst = ( ( ::h3d::pass::Copy)(engine->resCache->get(::hx::ClassOf< ::h3d::pass::Copy >())) );
HXLINE( 116)		if (::hx::IsNull( inst )) {
HXLINE( 117)			inst =  ::h3d::pass::Copy_obj::__alloc( HX_CTX );
HXLINE( 118)			engine->resCache->set(::hx::ClassOf< ::h3d::pass::Copy >(),inst);
            		}
HXLINE( 120)		inst->apply(from,to,blend,pass,layer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Copy_obj,run,(void))


::hx::ObjectPtr< Copy_obj > Copy_obj::__new() {
	::hx::ObjectPtr< Copy_obj > __this = new Copy_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Copy_obj > Copy_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Copy_obj *__this = (Copy_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Copy_obj), true, "h3d.pass.Copy"));
	*(void **)__this = Copy_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Copy_obj::Copy_obj()
{
}

::hx::Val Copy_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Copy_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Copy_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Copy_obj_sStaticStorageInfo = 0;
#endif

static ::String Copy_obj_sMemberFields[] = {
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class Copy_obj::__mClass;

static ::String Copy_obj_sStaticFields[] = {
	HX_("run",4b,e7,56,00),
	::String(null())
};

void Copy_obj::__register()
{
	Copy_obj _hx_dummy;
	Copy_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.Copy",1d,df,8f,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Copy_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Copy_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Copy_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Copy_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Copy_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Copy_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
