#include <hxcpp.h>

#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_pass_Border
#include <h3d/pass/Border.h>
#endif
#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
#ifndef INCLUDED_h3d_pass__Border_BorderShader
#include <h3d/pass/_Border/BorderShader.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_h3d_prim_RawPrimitive
#include <h3d/prim/RawPrimitive.h>
#endif
#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4f1959c58c12b6ea_17_new,"h3d.pass.Border","new",0x867c7546,"h3d.pass.Border.new","h3d/pass/Border.hx",17,0x2ed86c8a)
HX_LOCAL_STACK_FRAME(_hx_pos_4f1959c58c12b6ea_49_dispose,"h3d.pass.Border","dispose",0x9ac09085,"h3d.pass.Border.dispose","h3d/pass/Border.hx",49,0x2ed86c8a)
namespace h3d{
namespace pass{

void Border_obj::__construct(int width,int height,::hx::Null< int >  __o_size){
            		int size = __o_size.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_4f1959c58c12b6ea_17_new)
HXLINE(  18)		super::__construct( ::h3d::pass::_Border::BorderShader_obj::__alloc( HX_CTX ),null());
HXLINE(  20)		int length = 0;
HXDLIN(  20)		::Array< Float > this1 = ::Array_obj< Float >::__new();
HXDLIN(  20)		if ((length > 0)) {
HXLINE(  20)			if ((length > this1->length)) {
HXLINE(  20)				this1[(length - 1)] = ((Float)0.);
            			}
            		}
HXDLIN(  20)		::Array< Float > bbuf = this1;
HXLINE(  25)		{
HXLINE(  25)			bbuf->push((((( (Float)(0) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  25)			bbuf->push((( (Float)(1) ) - ((( (Float)(0) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  26)		{
HXLINE(  26)			bbuf->push((((( (Float)(width) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  26)			bbuf->push((( (Float)(1) ) - ((( (Float)(0) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  27)		{
HXLINE(  27)			bbuf->push((((( (Float)(0) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  27)			bbuf->push((( (Float)(1) ) - ((( (Float)(size) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  28)		{
HXLINE(  28)			bbuf->push((((( (Float)(width) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  28)			bbuf->push((( (Float)(1) ) - ((( (Float)(size) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  30)		{
HXLINE(  30)			bbuf->push((((( (Float)(0) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  30)			bbuf->push((( (Float)(1) ) - ((( (Float)(0) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  31)		{
HXLINE(  31)			bbuf->push((((( (Float)(size) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  31)			bbuf->push((( (Float)(1) ) - ((( (Float)(0) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  32)		{
HXLINE(  32)			bbuf->push((((( (Float)(0) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  32)			bbuf->push((( (Float)(1) ) - ((( (Float)(height) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  33)		{
HXLINE(  33)			bbuf->push((((( (Float)(size) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  33)			bbuf->push((( (Float)(1) ) - ((( (Float)(height) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  35)		{
HXLINE(  35)			bbuf->push((((( (Float)(0) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  35)			bbuf->push((( (Float)(1) ) - ((( (Float)((height - size)) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  36)		{
HXLINE(  36)			bbuf->push((((( (Float)(width) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  36)			bbuf->push((( (Float)(1) ) - ((( (Float)((height - size)) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  37)		{
HXLINE(  37)			bbuf->push((((( (Float)(0) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  37)			bbuf->push((( (Float)(1) ) - ((( (Float)(height) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  38)		{
HXLINE(  38)			bbuf->push((((( (Float)(width) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  38)			bbuf->push((( (Float)(1) ) - ((( (Float)(height) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  40)		{
HXLINE(  40)			bbuf->push((((( (Float)((width - size)) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  40)			bbuf->push((( (Float)(1) ) - ((( (Float)(0) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  41)		{
HXLINE(  41)			bbuf->push((((( (Float)(width) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  41)			bbuf->push((( (Float)(1) ) - ((( (Float)(0) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  42)		{
HXLINE(  42)			bbuf->push((((( (Float)((width - size)) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  42)			bbuf->push((( (Float)(1) ) - ((( (Float)(height) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  43)		{
HXLINE(  43)			bbuf->push((((( (Float)(width) ) / ( (Float)(width) )) * ( (Float)(2) )) - ( (Float)(1) )));
HXDLIN(  43)			bbuf->push((( (Float)(1) ) - ((( (Float)(height) ) / ( (Float)(height) )) * ( (Float)(2) ))));
            		}
HXLINE(  45)		this->primitive =  ::h3d::prim::RawPrimitive_obj::__alloc( HX_CTX , ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("stride",19,20,30,11),2)
            			->setFixed(1,HX_("vbuf",7d,f0,49,4e),bbuf)
            			->setFixed(2,HX_("quads",cc,75,e7,5d),true)),true);
HXLINE(  46)		{
HXLINE(  46)			 ::h3d::Vector _this = ( ( ::h3d::pass::_Border::BorderShader)(this->shader) )->color__;
HXDLIN(  46)			_this->x = ( (Float)(1) );
HXDLIN(  46)			_this->y = ( (Float)(1) );
HXDLIN(  46)			_this->z = ( (Float)(1) );
HXDLIN(  46)			_this->w = ( (Float)(1) );
            		}
            	}

Dynamic Border_obj::__CreateEmpty() { return new Border_obj; }

void *Border_obj::_hx_vtable = 0;

Dynamic Border_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Border_obj > _hx_result = new Border_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Border_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x02521296) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02521296;
	} else {
		return inClassId==(int)0x35a83008;
	}
}

void Border_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_4f1959c58c12b6ea_49_dispose)
HXLINE(  50)		this->super::dispose();
HXLINE(  51)		this->primitive->dispose();
            	}



::hx::ObjectPtr< Border_obj > Border_obj::__new(int width,int height,::hx::Null< int >  __o_size) {
	::hx::ObjectPtr< Border_obj > __this = new Border_obj();
	__this->__construct(width,height,__o_size);
	return __this;
}

::hx::ObjectPtr< Border_obj > Border_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height,::hx::Null< int >  __o_size) {
	Border_obj *__this = (Border_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Border_obj), true, "h3d.pass.Border"));
	*(void **)__this = Border_obj::_hx_vtable;
	__this->__construct(width,height,__o_size);
	return __this;
}

Border_obj::Border_obj()
{
}

::hx::Val Border_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Border_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Border_obj_sStaticStorageInfo = 0;
#endif

static ::String Border_obj_sMemberFields[] = {
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class Border_obj::__mClass;

void Border_obj::__register()
{
	Border_obj _hx_dummy;
	Border_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.Border",54,1a,83,21);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Border_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Border_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Border_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Border_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
