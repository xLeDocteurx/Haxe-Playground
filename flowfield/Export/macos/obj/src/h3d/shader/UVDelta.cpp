#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_shader_UVDelta
#include <h3d/shader/UVDelta.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e5a03d44cd47c2ae_3_new,"h3d.shader.UVDelta","new",0x3d8b4f95,"h3d.shader.UVDelta.new","h3d/shader/UVDelta.hx",3,0x28c5d39b)
HX_LOCAL_STACK_FRAME(_hx_pos_1c10830e0ea9b260_174_get_uvDelta,"h3d.shader.UVDelta","get_uvDelta",0x5b03ce23,"h3d.shader.UVDelta.get_uvDelta","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1c10830e0ea9b260_191_set_uvDelta,"h3d.shader.UVDelta","set_uvDelta",0x6570d52f,"h3d.shader.UVDelta.set_uvDelta","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1c10830e0ea9b260_174_get_uvScale,"h3d.shader.UVDelta","get_uvScale",0xfcabb4b5,"h3d.shader.UVDelta.get_uvScale","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1c10830e0ea9b260_191_set_uvScale,"h3d.shader.UVDelta","set_uvScale",0x0718bbc1,"h3d.shader.UVDelta.set_uvScale","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1c10830e0ea9b260_270_updateConstants,"h3d.shader.UVDelta","updateConstants",0x36ca41fb,"h3d.shader.UVDelta.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e5a03d44cd47c2ae_5_getParamValue,"h3d.shader.UVDelta","getParamValue",0x8b9d1f4f,"h3d.shader.UVDelta.getParamValue","h3d/shader/UVDelta.hx",5,0x28c5d39b)
HX_LOCAL_STACK_FRAME(_hx_pos_1c10830e0ea9b260_304_getParamFloatValue,"h3d.shader.UVDelta","getParamFloatValue",0x1d866f97,"h3d.shader.UVDelta.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e5a03d44cd47c2ae_5_clone,"h3d.shader.UVDelta","clone",0xe1e089d2,"h3d.shader.UVDelta.clone","h3d/shader/UVDelta.hx",5,0x28c5d39b)
HX_LOCAL_STACK_FRAME(_hx_pos_e5a03d44cd47c2ae_5_boot,"h3d.shader.UVDelta","boot",0x9473535d,"h3d.shader.UVDelta.boot","h3d/shader/UVDelta.hx",5,0x28c5d39b)
namespace h3d{
namespace shader{

void UVDelta_obj::__construct(::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_sx,::hx::Null< Float >  __o_sy){
            		Float dx = __o_dx.Default(((Float)0.));
            		Float dy = __o_dy.Default(((Float)0.));
            		Float sx = __o_sx.Default(((Float)1.));
            		Float sy = __o_sy.Default(((Float)1.));
            	HX_GC_STACKFRAME(&_hx_pos_e5a03d44cd47c2ae_3_new)
HXLINE(  63)		this->uvScale__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->uvDelta__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  15)		super::__construct();
HXLINE(  16)		{
HXLINE(  16)			 ::h3d::Vector _this = this->uvDelta__;
HXDLIN(  16)			_this->x = dx;
HXDLIN(  16)			_this->y = dy;
HXDLIN(  16)			_this->z = ((Float)0.);
HXDLIN(  16)			_this->w = ((Float)1.);
            		}
HXLINE(  17)		{
HXLINE(  17)			 ::h3d::Vector _this1 = this->uvScale__;
HXDLIN(  17)			_this1->x = sx;
HXDLIN(  17)			_this1->y = sy;
HXDLIN(  17)			_this1->z = ((Float)0.);
HXDLIN(  17)			_this1->w = ((Float)1.);
            		}
            	}

Dynamic UVDelta_obj::__CreateEmpty() { return new UVDelta_obj; }

void *UVDelta_obj::_hx_vtable = 0;

Dynamic UVDelta_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UVDelta_obj > _hx_result = new UVDelta_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool UVDelta_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x451857f9;
	}
}

 ::h3d::Vector UVDelta_obj::get_uvDelta(){
            	HX_STACKFRAME(&_hx_pos_1c10830e0ea9b260_174_get_uvDelta)
HXDLIN( 174)		return this->uvDelta__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(UVDelta_obj,get_uvDelta,return )

 ::h3d::Vector UVDelta_obj::set_uvDelta( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_1c10830e0ea9b260_191_set_uvDelta)
HXDLIN( 191)		return (this->uvDelta__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(UVDelta_obj,set_uvDelta,return )

 ::h3d::Vector UVDelta_obj::get_uvScale(){
            	HX_STACKFRAME(&_hx_pos_1c10830e0ea9b260_174_get_uvScale)
HXDLIN( 174)		return this->uvScale__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(UVDelta_obj,get_uvScale,return )

 ::h3d::Vector UVDelta_obj::set_uvScale( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_1c10830e0ea9b260_191_set_uvScale)
HXDLIN( 191)		return (this->uvScale__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(UVDelta_obj,set_uvScale,return )

void UVDelta_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_1c10830e0ea9b260_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic UVDelta_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_e5a03d44cd47c2ae_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->uvDelta__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->uvScale__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float UVDelta_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_1c10830e0ea9b260_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader UVDelta_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_e5a03d44cd47c2ae_5_clone)
HXLINE( 315)		 ::h3d::shader::UVDelta s = ( ( ::h3d::shader::UVDelta)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::UVDelta >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->uvDelta__ = this->uvDelta__;
HXDLIN( 320)		s->uvScale__ = this->uvScale__;
HXLINE( 322)		return s;
            	}


::String UVDelta_obj::SRC;

 ::hxsl::SharedShader UVDelta_obj::_SHADER;


::hx::ObjectPtr< UVDelta_obj > UVDelta_obj::__new(::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_sx,::hx::Null< Float >  __o_sy) {
	::hx::ObjectPtr< UVDelta_obj > __this = new UVDelta_obj();
	__this->__construct(__o_dx,__o_dy,__o_sx,__o_sy);
	return __this;
}

::hx::ObjectPtr< UVDelta_obj > UVDelta_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_sx,::hx::Null< Float >  __o_sy) {
	UVDelta_obj *__this = (UVDelta_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UVDelta_obj), true, "h3d.shader.UVDelta"));
	*(void **)__this = UVDelta_obj::_hx_vtable;
	__this->__construct(__o_dx,__o_dy,__o_sx,__o_sy);
	return __this;
}

UVDelta_obj::UVDelta_obj()
{
}

void UVDelta_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UVDelta);
	HX_MARK_MEMBER_NAME(uvDelta__,"uvDelta__");
	HX_MARK_MEMBER_NAME(uvScale__,"uvScale__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UVDelta_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uvDelta__,"uvDelta__");
	HX_VISIT_MEMBER_NAME(uvScale__,"uvScale__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val UVDelta_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uvDelta") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvDelta() ); }
		if (HX_FIELD_EQ(inName,"uvScale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvScale() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uvDelta__") ) { return ::hx::Val( uvDelta__ ); }
		if (HX_FIELD_EQ(inName,"uvScale__") ) { return ::hx::Val( uvScale__ ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_uvDelta") ) { return ::hx::Val( get_uvDelta_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_uvDelta") ) { return ::hx::Val( set_uvDelta_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_uvScale") ) { return ::hx::Val( get_uvScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_uvScale") ) { return ::hx::Val( set_uvScale_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool UVDelta_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val UVDelta_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"uvDelta") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_uvDelta(inValue.Cast<  ::h3d::Vector >()) ); }
		if (HX_FIELD_EQ(inName,"uvScale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_uvScale(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uvDelta__") ) { uvDelta__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvScale__") ) { uvScale__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UVDelta_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void UVDelta_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("uvDelta",d7,31,c0,99));
	outFields->push(HX_("uvDelta__",b7,e8,91,af));
	outFields->push(HX_("uvScale",69,18,68,3b));
	outFields->push(HX_("uvScale__",c9,17,ee,f7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo UVDelta_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(UVDelta_obj,uvDelta__),HX_("uvDelta__",b7,e8,91,af)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(UVDelta_obj,uvScale__),HX_("uvScale__",c9,17,ee,f7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo UVDelta_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &UVDelta_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &UVDelta_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String UVDelta_obj_sMemberFields[] = {
	HX_("uvDelta__",b7,e8,91,af),
	HX_("get_uvDelta",ee,91,ba,1f),
	HX_("set_uvDelta",fa,98,27,2a),
	HX_("uvScale__",c9,17,ee,f7),
	HX_("get_uvScale",80,78,62,c1),
	HX_("set_uvScale",8c,7f,cf,cb),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void UVDelta_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UVDelta_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(UVDelta_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UVDelta_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UVDelta_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(UVDelta_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class UVDelta_obj::__mClass;

static ::String UVDelta_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void UVDelta_obj::__register()
{
	UVDelta_obj _hx_dummy;
	UVDelta_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.UVDelta",23,e1,44,dd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UVDelta_obj::__GetStatic;
	__mClass->mSetStaticField = &UVDelta_obj::__SetStatic;
	__mClass->mMarkFunc = UVDelta_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UVDelta_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UVDelta_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UVDelta_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UVDelta_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UVDelta_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UVDelta_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UVDelta_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e5a03d44cd47c2ae_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLEmgzZC5zaGFkZXIuVVZEZWx0YQQBB3V2RGVsdGEFCgIAAAIHdXZTY2FsZQUKAgAAAwxjYWxjdWxhdGVkVVYFCgQAAAQGdmVydGV4DgYAAAEABAAABQEGBAIDBQoGAAYBAgMFCgICBQoFCgIBBQoFCgUKAA",8d,8e,7f,ce);
            	}
}

} // end namespace h3d
} // end namespace shader
