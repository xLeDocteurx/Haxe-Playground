#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_shader_VolumeDecal
#include <h3d/shader/VolumeDecal.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_SharedShader
#include <hxsl/SharedShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6c8ac32ea3bff5aa_3_new,"h3d.shader.VolumeDecal","new",0x72ff3091,"h3d.shader.VolumeDecal.new","h3d/shader/VolumeDecal.hx",3,0x0321b61f)
HX_LOCAL_STACK_FRAME(_hx_pos_709bbeb724bbc728_174_get_scale,"h3d.shader.VolumeDecal","get_scale",0x038745d2,"h3d.shader.VolumeDecal.get_scale","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_709bbeb724bbc728_191_set_scale,"h3d.shader.VolumeDecal","set_scale",0xe6d831de,"h3d.shader.VolumeDecal.set_scale","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_709bbeb724bbc728_174_get_normal,"h3d.shader.VolumeDecal","get_normal",0x071959df,"h3d.shader.VolumeDecal.get_normal","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_709bbeb724bbc728_191_set_normal,"h3d.shader.VolumeDecal","set_normal",0x0a96f853,"h3d.shader.VolumeDecal.set_normal","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_709bbeb724bbc728_174_get_tangent,"h3d.shader.VolumeDecal","get_tangent",0x3e08760d,"h3d.shader.VolumeDecal.get_tangent","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_709bbeb724bbc728_191_set_tangent,"h3d.shader.VolumeDecal","set_tangent",0x48757d19,"h3d.shader.VolumeDecal.set_tangent","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_709bbeb724bbc728_174_get_isCentered,"h3d.shader.VolumeDecal","get_isCentered",0xe5e99336,"h3d.shader.VolumeDecal.get_isCentered","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_709bbeb724bbc728_193_set_isCentered,"h3d.shader.VolumeDecal","set_isCentered",0x06097baa,"h3d.shader.VolumeDecal.set_isCentered","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_709bbeb724bbc728_270_updateConstants,"h3d.shader.VolumeDecal","updateConstants",0x6409acf7,"h3d.shader.VolumeDecal.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6c8ac32ea3bff5aa_5_getParamValue,"h3d.shader.VolumeDecal","getParamValue",0xa79a934b,"h3d.shader.VolumeDecal.getParamValue","h3d/shader/VolumeDecal.hx",5,0x0321b61f)
HX_LOCAL_STACK_FRAME(_hx_pos_709bbeb724bbc728_304_getParamFloatValue,"h3d.shader.VolumeDecal","getParamFloatValue",0x38d70a1b,"h3d.shader.VolumeDecal.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6c8ac32ea3bff5aa_5_clone,"h3d.shader.VolumeDecal","clone",0x44cba1ce,"h3d.shader.VolumeDecal.clone","h3d/shader/VolumeDecal.hx",5,0x0321b61f)
HX_LOCAL_STACK_FRAME(_hx_pos_6c8ac32ea3bff5aa_5_boot,"h3d.shader.VolumeDecal","boot",0x24644ee1,"h3d.shader.VolumeDecal.boot","h3d/shader/VolumeDecal.hx",5,0x0321b61f)
namespace h3d{
namespace shader{

void VolumeDecal_obj::__construct(Float objectWidth,Float objectHeight){
            	HX_GC_STACKFRAME(&_hx_pos_6c8ac32ea3bff5aa_3_new)
HXLINE(  14)		this->isCentered__ = true;
HXLINE(  63)		this->tangent__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->normal__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->scale__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  43)		super::__construct();
HXLINE(  44)		{
HXLINE(  44)			 ::h3d::Vector _this = this->normal__;
HXDLIN(  44)			_this->x = ( (Float)(0) );
HXDLIN(  44)			_this->y = ( (Float)(0) );
HXDLIN(  44)			_this->z = ( (Float)(1) );
HXDLIN(  44)			_this->w = ((Float)1.);
            		}
HXLINE(  45)		{
HXLINE(  45)			 ::h3d::Vector _this1 = this->tangent__;
HXDLIN(  45)			_this1->x = ( (Float)(1) );
HXDLIN(  45)			_this1->y = ( (Float)(0) );
HXDLIN(  45)			_this1->z = ( (Float)(0) );
HXDLIN(  45)			_this1->w = ((Float)1.);
            		}
HXLINE(  46)		{
HXLINE(  46)			 ::h3d::Vector _this2 = this->scale__;
HXDLIN(  46)			_this2->x = (( (Float)(1) ) / objectWidth);
HXDLIN(  46)			_this2->y = (( (Float)(1) ) / objectHeight);
HXDLIN(  46)			_this2->z = ((Float)0.);
HXDLIN(  46)			_this2->w = ((Float)1.);
            		}
            	}

Dynamic VolumeDecal_obj::__CreateEmpty() { return new VolumeDecal_obj; }

void *VolumeDecal_obj::_hx_vtable = 0;

Dynamic VolumeDecal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VolumeDecal_obj > _hx_result = new VolumeDecal_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool VolumeDecal_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x78042df5;
	}
}

 ::h3d::Vector VolumeDecal_obj::get_scale(){
            	HX_STACKFRAME(&_hx_pos_709bbeb724bbc728_174_get_scale)
HXDLIN( 174)		return this->scale__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VolumeDecal_obj,get_scale,return )

 ::h3d::Vector VolumeDecal_obj::set_scale( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_709bbeb724bbc728_191_set_scale)
HXDLIN( 191)		return (this->scale__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VolumeDecal_obj,set_scale,return )

 ::h3d::Vector VolumeDecal_obj::get_normal(){
            	HX_STACKFRAME(&_hx_pos_709bbeb724bbc728_174_get_normal)
HXDLIN( 174)		return this->normal__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VolumeDecal_obj,get_normal,return )

 ::h3d::Vector VolumeDecal_obj::set_normal( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_709bbeb724bbc728_191_set_normal)
HXDLIN( 191)		return (this->normal__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VolumeDecal_obj,set_normal,return )

 ::h3d::Vector VolumeDecal_obj::get_tangent(){
            	HX_STACKFRAME(&_hx_pos_709bbeb724bbc728_174_get_tangent)
HXDLIN( 174)		return this->tangent__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VolumeDecal_obj,get_tangent,return )

 ::h3d::Vector VolumeDecal_obj::set_tangent( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_709bbeb724bbc728_191_set_tangent)
HXDLIN( 191)		return (this->tangent__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VolumeDecal_obj,set_tangent,return )

bool VolumeDecal_obj::get_isCentered(){
            	HX_STACKFRAME(&_hx_pos_709bbeb724bbc728_174_get_isCentered)
HXDLIN( 174)		return this->isCentered__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VolumeDecal_obj,get_isCentered,return )

bool VolumeDecal_obj::set_isCentered(bool _v){
            	HX_STACKFRAME(&_hx_pos_709bbeb724bbc728_193_set_isCentered)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->isCentered__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VolumeDecal_obj,set_isCentered,return )

void VolumeDecal_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_709bbeb724bbc728_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 247)		if (this->isCentered__) {
HXLINE( 247)			 ::h3d::shader::VolumeDecal _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)			_hx_tmp->constBits = (_hx_tmp->constBits | 64);
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic VolumeDecal_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_6c8ac32ea3bff5aa_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->scale__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->normal__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->tangent__;
            			}
            			break;
            			case (int)3: {
HXLINE( 287)				return this->isCentered__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float VolumeDecal_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_709bbeb724bbc728_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader VolumeDecal_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_6c8ac32ea3bff5aa_5_clone)
HXLINE( 315)		 ::h3d::shader::VolumeDecal s = ( ( ::h3d::shader::VolumeDecal)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::VolumeDecal >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->scale__ = this->scale__;
HXDLIN( 320)		s->normal__ = this->normal__;
HXDLIN( 320)		s->tangent__ = this->tangent__;
HXDLIN( 320)		s->isCentered__ = this->isCentered__;
HXLINE( 322)		return s;
            	}


::String VolumeDecal_obj::SRC;

 ::hxsl::SharedShader VolumeDecal_obj::_SHADER;


::hx::ObjectPtr< VolumeDecal_obj > VolumeDecal_obj::__new(Float objectWidth,Float objectHeight) {
	::hx::ObjectPtr< VolumeDecal_obj > __this = new VolumeDecal_obj();
	__this->__construct(objectWidth,objectHeight);
	return __this;
}

::hx::ObjectPtr< VolumeDecal_obj > VolumeDecal_obj::__alloc(::hx::Ctx *_hx_ctx,Float objectWidth,Float objectHeight) {
	VolumeDecal_obj *__this = (VolumeDecal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VolumeDecal_obj), true, "h3d.shader.VolumeDecal"));
	*(void **)__this = VolumeDecal_obj::_hx_vtable;
	__this->__construct(objectWidth,objectHeight);
	return __this;
}

VolumeDecal_obj::VolumeDecal_obj()
{
}

void VolumeDecal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VolumeDecal);
	HX_MARK_MEMBER_NAME(scale__,"scale__");
	HX_MARK_MEMBER_NAME(normal__,"normal__");
	HX_MARK_MEMBER_NAME(tangent__,"tangent__");
	HX_MARK_MEMBER_NAME(isCentered__,"isCentered__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VolumeDecal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scale__,"scale__");
	HX_VISIT_MEMBER_NAME(normal__,"normal__");
	HX_VISIT_MEMBER_NAME(tangent__,"tangent__");
	HX_VISIT_MEMBER_NAME(isCentered__,"isCentered__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VolumeDecal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scale() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_normal() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scale__") ) { return ::hx::Val( scale__ ); }
		if (HX_FIELD_EQ(inName,"tangent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tangent() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"normal__") ) { return ::hx::Val( normal__ ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_scale") ) { return ::hx::Val( get_scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return ::hx::Val( set_scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"tangent__") ) { return ::hx::Val( tangent__ ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_normal") ) { return ::hx::Val( get_normal_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_normal") ) { return ::hx::Val( set_normal_dyn() ); }
		if (HX_FIELD_EQ(inName,"isCentered") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isCentered() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_tangent") ) { return ::hx::Val( get_tangent_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tangent") ) { return ::hx::Val( set_tangent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isCentered__") ) { return ::hx::Val( isCentered__ ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isCentered") ) { return ::hx::Val( get_isCentered_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_isCentered") ) { return ::hx::Val( set_isCentered_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool VolumeDecal_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"SRC") ) { outValue = ( SRC ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_SHADER") ) { outValue = ( _SHADER ); return true; }
	}
	return false;
}

::hx::Val VolumeDecal_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scale(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_normal(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scale__") ) { scale__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tangent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tangent(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"normal__") ) { normal__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tangent__") ) { tangent__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isCentered") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isCentered(inValue.Cast< bool >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isCentered__") ) { isCentered__=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VolumeDecal_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"SRC") ) { SRC=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_SHADER") ) { _SHADER=ioValue.Cast<  ::hxsl::SharedShader >(); return true; }
	}
	return false;
}

void VolumeDecal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("scale__",2a,58,07,65));
	outFields->push(HX_("normal",27,72,69,30));
	outFields->push(HX_("normal__",07,dd,47,33));
	outFields->push(HX_("tangent",c5,9c,cd,3a));
	outFields->push(HX_("tangent__",25,6b,02,bf));
	outFields->push(HX_("isCentered",7e,6f,ff,09));
	outFields->push(HX_("isCentered__",1e,1e,59,1c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VolumeDecal_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(VolumeDecal_obj,scale__),HX_("scale__",2a,58,07,65)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(VolumeDecal_obj,normal__),HX_("normal__",07,dd,47,33)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(VolumeDecal_obj,tangent__),HX_("tangent__",25,6b,02,bf)},
	{::hx::fsBool,(int)offsetof(VolumeDecal_obj,isCentered__),HX_("isCentered__",1e,1e,59,1c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo VolumeDecal_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &VolumeDecal_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &VolumeDecal_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String VolumeDecal_obj_sMemberFields[] = {
	HX_("scale__",2a,58,07,65),
	HX_("get_scale",e1,2a,78,bc),
	HX_("set_scale",ed,16,c9,9f),
	HX_("normal__",07,dd,47,33),
	HX_("get_normal",f0,e1,f0,20),
	HX_("set_normal",64,80,6e,24),
	HX_("tangent__",25,6b,02,bf),
	HX_("get_tangent",dc,fc,c7,c0),
	HX_("set_tangent",e8,03,35,cb),
	HX_("isCentered__",1e,1e,59,1c),
	HX_("get_isCentered",c7,f7,f4,7f),
	HX_("set_isCentered",3b,e0,14,a0),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void VolumeDecal_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VolumeDecal_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(VolumeDecal_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VolumeDecal_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VolumeDecal_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(VolumeDecal_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class VolumeDecal_obj::__mClass;

static ::String VolumeDecal_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void VolumeDecal_obj::__register()
{
	VolumeDecal_obj _hx_dummy;
	VolumeDecal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.VolumeDecal",1f,94,7d,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VolumeDecal_obj::__GetStatic;
	__mClass->mSetStaticField = &VolumeDecal_obj::__SetStatic;
	__mClass->mMarkFunc = VolumeDecal_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(VolumeDecal_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VolumeDecal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VolumeDecal_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VolumeDecal_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VolumeDecal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VolumeDecal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void VolumeDecal_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6c8ac32ea3bff5aa_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLFmgzZC5zaGFkZXIuVm9sdW1lRGVjYWwYAQZjYW1lcmENAQoCBHZpZXcHAAEAAwRwcm9qBwABAAQIcG9zaXRpb24FCwABAAUIcHJvakZsaXADAAEABghwcm9qRGlhZwULAAEABwh2aWV3UHJvagcAAQAID2ludmVyc2VWaWV3UHJvagcAAQAJBXpOZWFyAwABAAoEekZhcgMAAQALA2RpcgULAwEAAAAADAZnbG9iYWwNAgQNBHRpbWUDAAwADglwaXhlbFNpemUFCgAMAA8JbW9kZWxWaWV3BwAMAQMQEG1vZGVsVmlld0ludmVyc2UHAAwBAwAAABEFaW5wdXQNAwISCHBvc2l0aW9uBQsBEQATBm5vcm1hbAULAREAAQAAFAZvdXRwdXQNBAUVCHBvc2l0aW9uBQwEFAAWBWNvbG9yBQwEFAAXBWRlcHRoAwQUABgGbm9ybWFsBQsEFAAZCXdvcmxkRGlzdAMEFAAEAAAaEHJlbGF0aXZlUG9zaXRpb24FCwQAABsTdHJhbnNmb3JtZWRQb3NpdGlvbgULBAAAHBhwaXhlbFRyYW5zZm9ybWVkUG9zaXRpb24FCwQAAB0RdHJhbnNmb3JtZWROb3JtYWwFCwQAAB4RcHJvamVjdGVkUG9zaXRpb24FDAQAAB8KcGl4ZWxDb2xvcgUMBAAAIAVkZXB0aAMEAAAhCHNjcmVlblVWBQoEAAAiCXNwZWNQb3dlcgMEAAAjCXNwZWNDb2xvcgULBAAAJAl3b3JsZERpc3QDBAAAJQhkZXB0aE1hcBEBAAAAJgVzY2FsZQUKAgAAJwZub3JtYWwFCwIAACgHdGFuZ2VudAULAgAAKQppc0NlbnRlcmVkAgIAAQAAAAAAKgxjYWxjdWxhdGVkVVYFCgQAACsSdHJhbnNmb3JtZWRUYW5nZW50BQwEAAAsDl9faW5pdF9fdmVydGV4DgYAAC0IZnJhZ21lbnQOBgAAAgIsAAAFAgYEAh0FCwkDHw4BBAYBAicFCwkDMg4BAg8HBgULBQsFCwULBgQCKwUMCQMqDgIJAx8OAQQGAQIoBQsJAzIOAQIPBwYFCwULBQsBAwAAAAAAAPA/AwUMBQwAAS0AAAUJCC4GbWF0cml4BwQAAAYBAggHAhAHBwAILwlzY3JlZW5Qb3MFCgQAAAYCCgIeBQwRAAUKCgIeBQwMAAMFCgAIMANydXYFDAQAAAkDKg4DAi8FCgkDPw4CAiURAQkDOg4BAi8FCgUKAwEDAAAAAAAA8D8DBQwACDEEd3BvcwUMBAAABgECMAUMAi4HBQwACDIEcHBvcwUMBAAABgECMAUMAggHBQwABgQCHAULBgIKAjIFDJIABQsKAjIFDAwAAwULBQsGBAIqBQoGAQImBQoEBgIKAjEFDBEABQoKAjEFDAwAAwUKBQoFCgUKCwIpAgaAAioFCgEDAAAAAAAA4D8DBQoAAAsGCQkDFQ4CCQMVDgIKAioFCgAAAwoCKgUKBAADAwkDFQ4CBgMBAwAAAAAAAPA/AwoCKgUKAAADAwYDAQMAAAAAAADwPwMKAioFCgQAAwMDAwEDAAAAAAAAAAADAgwAAAAA",1c,04,7b,c6);
            	}
}

} // end namespace h3d
} // end namespace shader
