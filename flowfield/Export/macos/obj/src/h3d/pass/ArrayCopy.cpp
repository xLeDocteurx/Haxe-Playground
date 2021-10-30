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
#ifndef INCLUDED_h3d_mat_TextureArray
#include <h3d/mat/TextureArray.h>
#endif
#ifndef INCLUDED_h3d_pass_ArrayCopy
#include <h3d/pass/ArrayCopy.h>
#endif
#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
#ifndef INCLUDED_h3d_pass__Copy_ArrayCopyShader
#include <h3d/pass/_Copy/ArrayCopyShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6744908bf415b8ad_29_new,"h3d.pass.ArrayCopy","new",0x1c37f578,"h3d.pass.ArrayCopy.new","h3d/pass/Copy.hx",29,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_6744908bf415b8ad_32_apply,"h3d.pass.ArrayCopy","apply",0x1d452086,"h3d.pass.ArrayCopy.apply","h3d/pass/Copy.hx",32,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_6744908bf415b8ad_58_run,"h3d.pass.ArrayCopy","run",0x1c3b0c63,"h3d.pass.ArrayCopy.run","h3d/pass/Copy.hx",58,0xc0a6e361)
namespace h3d{
namespace pass{

void ArrayCopy_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6744908bf415b8ad_29_new)
HXDLIN(  29)		super::__construct( ::h3d::pass::_Copy::ArrayCopyShader_obj::__alloc( HX_CTX ),null());
            	}

Dynamic ArrayCopy_obj::__CreateEmpty() { return new ArrayCopy_obj; }

void *ArrayCopy_obj::_hx_vtable = 0;

Dynamic ArrayCopy_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayCopy_obj > _hx_result = new ArrayCopy_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayCopy_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x10c63684) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x10c63684;
	} else {
		return inClassId==(int)0x35a83008;
	}
}

void ArrayCopy_obj::apply( ::h3d::mat::TextureArray from,int fromLayer, ::h3d::mat::Texture to, ::h2d::BlendMode blend, ::h3d::mat::Pass customPass, ::Dynamic layer){
            	HX_STACKFRAME(&_hx_pos_6744908bf415b8ad_32_apply)
HXLINE(  33)		if (::hx::IsNotNull( to )) {
HXLINE(  34)			int _hx_tmp;
HXDLIN(  34)			if (::hx::IsNotNull( layer )) {
HXLINE(  34)				_hx_tmp = ( (int)(layer) );
            			}
            			else {
HXLINE(  34)				_hx_tmp = 0;
            			}
HXDLIN(  34)			this->get_engine()->pushTarget(to,_hx_tmp,null());
            		}
HXLINE(  35)		( ( ::h3d::pass::_Copy::ArrayCopyShader)(this->shader) )->texture__ = from;
HXLINE(  36)		( ( ::h3d::pass::_Copy::ArrayCopyShader)(this->shader) )->layer__ = fromLayer;
HXLINE(  37)		if (::hx::IsNotNull( customPass )) {
HXLINE(  38)			 ::h3d::mat::Pass old = this->pass;
HXLINE(  39)			this->pass = customPass;
HXLINE(  40)			if (::hx::IsNotNull( blend )) {
HXLINE(  40)				this->pass->setBlendMode(blend);
            			}
HXLINE(  41)			 ::hxsl::ShaderList h = this->shaders;
HXLINE(  42)			while(::hx::IsNotNull( h->next )){
HXLINE(  43)				h = h->next;
            			}
HXLINE(  44)			h->next = this->pass->shaders;
HXLINE(  45)			this->render();
HXLINE(  46)			this->pass = old;
HXLINE(  47)			h->next = null();
            		}
            		else {
HXLINE(  49)			 ::h2d::BlendMode _hx_tmp;
HXDLIN(  49)			if (::hx::IsNull( blend )) {
HXLINE(  49)				_hx_tmp = ::h2d::BlendMode_obj::None_dyn();
            			}
            			else {
HXLINE(  49)				_hx_tmp = blend;
            			}
HXDLIN(  49)			this->pass->setBlendMode(_hx_tmp);
HXLINE(  50)			this->render();
            		}
HXLINE(  52)		{
HXLINE(  52)			 ::h3d::mat::TextureArray _v = null();
HXDLIN(  52)			( ( ::h3d::pass::_Copy::ArrayCopyShader)(this->shader) )->texture__ = _v;
            		}
HXLINE(  53)		( ( ::h3d::pass::_Copy::ArrayCopyShader)(this->shader) )->layer__ = 0;
HXLINE(  54)		if (::hx::IsNotNull( to )) {
HXLINE(  55)			this->get_engine()->popTarget();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(ArrayCopy_obj,apply,(void))

void ArrayCopy_obj::run( ::h3d::mat::TextureArray from,int fromLayer, ::h3d::mat::Texture to, ::h2d::BlendMode blend, ::h3d::mat::Pass pass, ::Dynamic layer){
            	HX_GC_STACKFRAME(&_hx_pos_6744908bf415b8ad_58_run)
HXLINE(  59)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE(  60)		bool _hx_tmp;
HXDLIN(  60)		bool _hx_tmp1;
HXDLIN(  60)		bool _hx_tmp2;
HXDLIN(  60)		bool _hx_tmp3;
HXDLIN(  60)		if (::hx::IsNotNull( to )) {
HXLINE(  60)			_hx_tmp3 = ::hx::IsNotNull( from );
            		}
            		else {
HXLINE(  60)			_hx_tmp3 = false;
            		}
HXDLIN(  60)		if (_hx_tmp3) {
HXLINE(  60)			if (::hx::IsNotNull( blend )) {
HXLINE(  60)				_hx_tmp2 = ::hx::IsPointerEq( blend,::h2d::BlendMode_obj::None_dyn() );
            			}
            			else {
HXLINE(  60)				_hx_tmp2 = true;
            			}
            		}
            		else {
HXLINE(  60)			_hx_tmp2 = false;
            		}
HXDLIN(  60)		if (_hx_tmp2) {
HXLINE(  60)			_hx_tmp1 = ::hx::IsNull( pass );
            		}
            		else {
HXLINE(  60)			_hx_tmp1 = false;
            		}
HXDLIN(  60)		if (_hx_tmp1) {
HXLINE(  60)			_hx_tmp = engine->driver->copyTexture(from,to);
            		}
            		else {
HXLINE(  60)			_hx_tmp = false;
            		}
HXDLIN(  60)		if (_hx_tmp) {
HXLINE(  61)			return;
            		}
HXLINE(  62)		 ::h3d::pass::ArrayCopy inst = ( ( ::h3d::pass::ArrayCopy)(engine->resCache->get(::hx::ClassOf< ::h3d::pass::ArrayCopy >())) );
HXLINE(  63)		if (::hx::IsNull( inst )) {
HXLINE(  64)			inst =  ::h3d::pass::ArrayCopy_obj::__alloc( HX_CTX );
HXLINE(  65)			engine->resCache->set(::hx::ClassOf< ::h3d::pass::ArrayCopy >(),inst);
            		}
HXLINE(  67)		inst->apply(from,fromLayer,to,blend,pass,layer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ArrayCopy_obj,run,(void))


::hx::ObjectPtr< ArrayCopy_obj > ArrayCopy_obj::__new() {
	::hx::ObjectPtr< ArrayCopy_obj > __this = new ArrayCopy_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ArrayCopy_obj > ArrayCopy_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ArrayCopy_obj *__this = (ArrayCopy_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayCopy_obj), true, "h3d.pass.ArrayCopy"));
	*(void **)__this = ArrayCopy_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ArrayCopy_obj::ArrayCopy_obj()
{
}

::hx::Val ArrayCopy_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ArrayCopy_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ArrayCopy_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ArrayCopy_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayCopy_obj_sMemberFields[] = {
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class ArrayCopy_obj::__mClass;

static ::String ArrayCopy_obj_sStaticFields[] = {
	HX_("run",4b,e7,56,00),
	::String(null())
};

void ArrayCopy_obj::__register()
{
	ArrayCopy_obj _hx_dummy;
	ArrayCopy_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.ArrayCopy",86,19,4a,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayCopy_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ArrayCopy_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayCopy_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayCopy_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayCopy_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayCopy_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
