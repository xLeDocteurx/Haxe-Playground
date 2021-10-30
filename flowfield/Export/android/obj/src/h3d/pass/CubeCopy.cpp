#include <hxcpp.h>

#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
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
#ifndef INCLUDED_h3d_pass_CubeCopy
#include <h3d/pass/CubeCopy.h>
#endif
#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
#ifndef INCLUDED_h3d_pass__CubeCopy_CubeCopyShader
#include <h3d/pass/_CubeCopy/CubeCopyShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8b755d682c3cdfbb_15_new,"h3d.pass.CubeCopy","new",0x0ada1ca4,"h3d.pass.CubeCopy.new","h3d/pass/CubeCopy.hx",15,0x467882ec)
static const Float _hx_array_data_26263ab2_1[] = {
	(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)0,
};
static const Float _hx_array_data_26263ab2_2[] = {
	(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)0,
};
static const Float _hx_array_data_26263ab2_3[] = {
	(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,
};
static const Float _hx_array_data_26263ab2_4[] = {
	(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,
};
static const Float _hx_array_data_26263ab2_5[] = {
	(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,
};
static const Float _hx_array_data_26263ab2_6[] = {
	(Float)-1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)-1,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_8b755d682c3cdfbb_28_apply,"h3d.pass.CubeCopy","apply",0x96206ab2,"h3d.pass.CubeCopy.apply","h3d/pass/CubeCopy.hx",28,0x467882ec)
HX_LOCAL_STACK_FRAME(_hx_pos_8b755d682c3cdfbb_55_run,"h3d.pass.CubeCopy","run",0x0add338f,"h3d.pass.CubeCopy.run","h3d/pass/CubeCopy.hx",55,0x467882ec)
namespace h3d{
namespace pass{

void CubeCopy_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_8b755d682c3cdfbb_15_new)
HXLINE(  17)		 ::h3d::Matrix _hx_tmp = ::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_26263ab2_1,12));
HXLINE(  18)		 ::h3d::Matrix _hx_tmp1 = ::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_26263ab2_2,12));
HXLINE(  19)		 ::h3d::Matrix _hx_tmp2 = ::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_26263ab2_3,12));
HXLINE(  20)		 ::h3d::Matrix _hx_tmp3 = ::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_26263ab2_4,12));
HXLINE(  21)		 ::h3d::Matrix _hx_tmp4 = ::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_26263ab2_5,12));
HXLINE(  17)		this->cubeDir = ::Array_obj< ::Dynamic>::__new(6)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_hx_tmp3)->init(4,_hx_tmp4)->init(5,::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_26263ab2_6,12)));
HXLINE(  25)		super::__construct( ::h3d::pass::_CubeCopy::CubeCopyShader_obj::__alloc( HX_CTX ),null());
            	}

Dynamic CubeCopy_obj::__CreateEmpty() { return new CubeCopy_obj; }

void *CubeCopy_obj::_hx_vtable = 0;

Dynamic CubeCopy_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CubeCopy_obj > _hx_result = new CubeCopy_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CubeCopy_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12d54774) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12d54774;
	} else {
		return inClassId==(int)0x35a83008;
	}
}

void CubeCopy_obj::apply( ::h3d::mat::Texture from, ::h3d::mat::Texture to, ::h2d::BlendMode blend, ::h3d::mat::Pass customPass){
            	HX_STACKFRAME(&_hx_pos_8b755d682c3cdfbb_28_apply)
HXLINE(  29)		( ( ::h3d::pass::_CubeCopy::CubeCopyShader)(this->shader) )->texture__ = from;
HXLINE(  30)		{
HXLINE(  30)			int _g = 0;
HXDLIN(  30)			while((_g < 6)){
HXLINE(  30)				_g = (_g + 1);
HXDLIN(  30)				int i = (_g - 1);
HXLINE(  31)				if (::hx::IsNotNull( to )) {
HXLINE(  32)					this->get_engine()->pushTarget(to,i,null());
            				}
HXLINE(  33)				( ( ::h3d::pass::_CubeCopy::CubeCopyShader)(this->shader) )->mat__ = this->cubeDir->__get(i).StaticCast<  ::h3d::Matrix >();
HXLINE(  34)				if (::hx::IsNotNull( customPass )) {
HXLINE(  35)					 ::h3d::mat::Pass old = this->pass;
HXLINE(  36)					this->pass = customPass;
HXLINE(  37)					if (::hx::IsNotNull( blend )) {
HXLINE(  37)						this->pass->setBlendMode(blend);
            					}
HXLINE(  38)					 ::hxsl::ShaderList h = this->shaders;
HXLINE(  39)					while(::hx::IsNotNull( h->next )){
HXLINE(  40)						h = h->next;
            					}
HXLINE(  41)					h->next = this->pass->shaders;
HXLINE(  42)					this->render();
HXLINE(  43)					this->pass = old;
HXLINE(  44)					h->next = null();
            				}
            				else {
HXLINE(  46)					 ::h2d::BlendMode _hx_tmp;
HXDLIN(  46)					if (::hx::IsNull( blend )) {
HXLINE(  46)						_hx_tmp = ::h2d::BlendMode_obj::None_dyn();
            					}
            					else {
HXLINE(  46)						_hx_tmp = blend;
            					}
HXDLIN(  46)					this->pass->setBlendMode(_hx_tmp);
HXLINE(  47)					this->render();
            				}
HXLINE(  49)				if (::hx::IsNotNull( to )) {
HXLINE(  50)					this->get_engine()->popTarget();
            				}
            			}
            		}
HXLINE(  52)		{
HXLINE(  52)			 ::h3d::mat::Texture _v = null();
HXDLIN(  52)			( ( ::h3d::pass::_CubeCopy::CubeCopyShader)(this->shader) )->texture__ = _v;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(CubeCopy_obj,apply,(void))

void CubeCopy_obj::run( ::h3d::mat::Texture from, ::h3d::mat::Texture to, ::h2d::BlendMode blend, ::h3d::mat::Pass pass){
            	HX_GC_STACKFRAME(&_hx_pos_8b755d682c3cdfbb_55_run)
HXLINE(  56)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE(  57)		bool _hx_tmp;
HXDLIN(  57)		bool _hx_tmp1;
HXDLIN(  57)		bool _hx_tmp2;
HXDLIN(  57)		bool _hx_tmp3;
HXDLIN(  57)		if (::hx::IsNotNull( to )) {
HXLINE(  57)			_hx_tmp3 = ::hx::IsNotNull( from );
            		}
            		else {
HXLINE(  57)			_hx_tmp3 = false;
            		}
HXDLIN(  57)		if (_hx_tmp3) {
HXLINE(  57)			if (::hx::IsNotNull( blend )) {
HXLINE(  57)				_hx_tmp2 = ::hx::IsPointerEq( blend,::h2d::BlendMode_obj::None_dyn() );
            			}
            			else {
HXLINE(  57)				_hx_tmp2 = true;
            			}
            		}
            		else {
HXLINE(  57)			_hx_tmp2 = false;
            		}
HXDLIN(  57)		if (_hx_tmp2) {
HXLINE(  57)			_hx_tmp1 = ::hx::IsNull( pass );
            		}
            		else {
HXLINE(  57)			_hx_tmp1 = false;
            		}
HXDLIN(  57)		if (_hx_tmp1) {
HXLINE(  57)			_hx_tmp = engine->driver->copyTexture(from,to);
            		}
            		else {
HXLINE(  57)			_hx_tmp = false;
            		}
HXDLIN(  57)		if (_hx_tmp) {
HXLINE(  58)			return;
            		}
HXLINE(  59)		 ::h3d::pass::CubeCopy inst = ( ( ::h3d::pass::CubeCopy)(engine->resCache->get(::hx::ClassOf< ::h3d::pass::CubeCopy >())) );
HXLINE(  60)		if (::hx::IsNull( inst )) {
HXLINE(  61)			inst =  ::h3d::pass::CubeCopy_obj::__alloc( HX_CTX );
HXLINE(  62)			engine->resCache->set(::hx::ClassOf< ::h3d::pass::CubeCopy >(),inst);
            		}
HXLINE(  64)		inst->apply(from,to,blend,pass);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CubeCopy_obj,run,(void))


::hx::ObjectPtr< CubeCopy_obj > CubeCopy_obj::__new() {
	::hx::ObjectPtr< CubeCopy_obj > __this = new CubeCopy_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CubeCopy_obj > CubeCopy_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CubeCopy_obj *__this = (CubeCopy_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CubeCopy_obj), true, "h3d.pass.CubeCopy"));
	*(void **)__this = CubeCopy_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CubeCopy_obj::CubeCopy_obj()
{
}

void CubeCopy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeCopy);
	HX_MARK_MEMBER_NAME(cubeDir,"cubeDir");
	 ::h3d::pass::ScreenFx_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeCopy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cubeDir,"cubeDir");
	 ::h3d::pass::ScreenFx_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CubeCopy_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeDir") ) { return ::hx::Val( cubeDir ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CubeCopy_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
	}
	return false;
}

::hx::Val CubeCopy_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"cubeDir") ) { cubeDir=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeCopy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cubeDir",58,7f,c9,8c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CubeCopy_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CubeCopy_obj,cubeDir),HX_("cubeDir",58,7f,c9,8c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CubeCopy_obj_sStaticStorageInfo = 0;
#endif

static ::String CubeCopy_obj_sMemberFields[] = {
	HX_("cubeDir",58,7f,c9,8c),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class CubeCopy_obj::__mClass;

static ::String CubeCopy_obj_sStaticFields[] = {
	HX_("run",4b,e7,56,00),
	::String(null())
};

void CubeCopy_obj::__register()
{
	CubeCopy_obj _hx_dummy;
	CubeCopy_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.CubeCopy",b2,3a,26,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CubeCopy_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CubeCopy_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CubeCopy_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CubeCopy_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeCopy_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeCopy_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
