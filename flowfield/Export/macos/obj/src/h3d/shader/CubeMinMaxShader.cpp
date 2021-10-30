#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_shader_CubeMinMaxShader
#include <h3d/shader/CubeMinMaxShader.h>
#endif
#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_120dd8866d535c94_19_new,"h3d.shader.CubeMinMaxShader","new",0x707211d2,"h3d.shader.CubeMinMaxShader.new","h3d/shader/MinMaxShader.hx",19,0x7ac2d333)
HX_LOCAL_STACK_FRAME(_hx_pos_6f32c50b7e9774ae_174_get_texA,"h3d.shader.CubeMinMaxShader","get_texA",0xf6f9c951,"h3d.shader.CubeMinMaxShader.get_texA","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6f32c50b7e9774ae_191_set_texA,"h3d.shader.CubeMinMaxShader","set_texA",0xa55722c5,"h3d.shader.CubeMinMaxShader.set_texA","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6f32c50b7e9774ae_174_get_texB,"h3d.shader.CubeMinMaxShader","get_texB",0xf6f9c952,"h3d.shader.CubeMinMaxShader.get_texB","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6f32c50b7e9774ae_191_set_texB,"h3d.shader.CubeMinMaxShader","set_texB",0xa55722c6,"h3d.shader.CubeMinMaxShader.set_texB","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6f32c50b7e9774ae_174_get_isMax,"h3d.shader.CubeMinMaxShader","get_isMax",0xd74e7423,"h3d.shader.CubeMinMaxShader.get_isMax","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6f32c50b7e9774ae_193_set_isMax,"h3d.shader.CubeMinMaxShader","set_isMax",0xba9f602f,"h3d.shader.CubeMinMaxShader.set_isMax","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6f32c50b7e9774ae_174_get_mat,"h3d.shader.CubeMinMaxShader","get_mat",0xad48b5a9,"h3d.shader.CubeMinMaxShader.get_mat","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6f32c50b7e9774ae_191_set_mat,"h3d.shader.CubeMinMaxShader","set_mat",0xa04a46b5,"h3d.shader.CubeMinMaxShader.set_mat","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6f32c50b7e9774ae_270_updateConstants,"h3d.shader.CubeMinMaxShader","updateConstants",0xa8a9ebb8,"h3d.shader.CubeMinMaxShader.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_120dd8866d535c94_21_getParamValue,"h3d.shader.CubeMinMaxShader","getParamValue",0xdc49efcc,"h3d.shader.CubeMinMaxShader.getParamValue","h3d/shader/MinMaxShader.hx",21,0x7ac2d333)
HX_LOCAL_STACK_FRAME(_hx_pos_120dd8866d535c94_21_getParamFloatValue,"h3d.shader.CubeMinMaxShader","getParamFloatValue",0x1303b9fa,"h3d.shader.CubeMinMaxShader.getParamFloatValue","h3d/shader/MinMaxShader.hx",21,0x7ac2d333)
HX_LOCAL_STACK_FRAME(_hx_pos_120dd8866d535c94_21_clone,"h3d.shader.CubeMinMaxShader","clone",0xadaa154f,"h3d.shader.CubeMinMaxShader.clone","h3d/shader/MinMaxShader.hx",21,0x7ac2d333)
HX_LOCAL_STACK_FRAME(_hx_pos_120dd8866d535c94_21_boot,"h3d.shader.CubeMinMaxShader","boot",0xeb768680,"h3d.shader.CubeMinMaxShader.boot","h3d/shader/MinMaxShader.hx",21,0x7ac2d333)
namespace h3d{
namespace shader{

void CubeMinMaxShader_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_120dd8866d535c94_19_new)
HXLINE(  74)		this->mat__ =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  19)		super::__construct();
            	}

Dynamic CubeMinMaxShader_obj::__CreateEmpty() { return new CubeMinMaxShader_obj; }

void *CubeMinMaxShader_obj::_hx_vtable = 0;

Dynamic CubeMinMaxShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CubeMinMaxShader_obj > _hx_result = new CubeMinMaxShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CubeMinMaxShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x738c8e6f) {
		if (inClassId<=(int)0x19343d6e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
		} else {
			return inClassId==(int)0x738c8e6f;
		}
	} else {
		return inClassId==(int)0x7f0cdbfe;
	}
}

 ::h3d::mat::Texture CubeMinMaxShader_obj::get_texA(){
            	HX_STACKFRAME(&_hx_pos_6f32c50b7e9774ae_174_get_texA)
HXDLIN( 174)		return this->texA__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeMinMaxShader_obj,get_texA,return )

 ::h3d::mat::Texture CubeMinMaxShader_obj::set_texA( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_6f32c50b7e9774ae_191_set_texA)
HXDLIN( 191)		return (this->texA__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeMinMaxShader_obj,set_texA,return )

 ::h3d::mat::Texture CubeMinMaxShader_obj::get_texB(){
            	HX_STACKFRAME(&_hx_pos_6f32c50b7e9774ae_174_get_texB)
HXDLIN( 174)		return this->texB__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeMinMaxShader_obj,get_texB,return )

 ::h3d::mat::Texture CubeMinMaxShader_obj::set_texB( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_6f32c50b7e9774ae_191_set_texB)
HXDLIN( 191)		return (this->texB__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeMinMaxShader_obj,set_texB,return )

bool CubeMinMaxShader_obj::get_isMax(){
            	HX_STACKFRAME(&_hx_pos_6f32c50b7e9774ae_174_get_isMax)
HXDLIN( 174)		return this->isMax__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeMinMaxShader_obj,get_isMax,return )

bool CubeMinMaxShader_obj::set_isMax(bool _v){
            	HX_STACKFRAME(&_hx_pos_6f32c50b7e9774ae_193_set_isMax)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->isMax__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeMinMaxShader_obj,set_isMax,return )

 ::h3d::Matrix CubeMinMaxShader_obj::get_mat(){
            	HX_STACKFRAME(&_hx_pos_6f32c50b7e9774ae_174_get_mat)
HXDLIN( 174)		return this->mat__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeMinMaxShader_obj,get_mat,return )

 ::h3d::Matrix CubeMinMaxShader_obj::set_mat( ::h3d::Matrix _v){
            	HX_STACKFRAME(&_hx_pos_6f32c50b7e9774ae_191_set_mat)
HXDLIN( 191)		return (this->mat__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeMinMaxShader_obj,set_mat,return )

void CubeMinMaxShader_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_6f32c50b7e9774ae_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 247)		if (this->isMax__) {
HXLINE( 247)			 ::h3d::shader::CubeMinMaxShader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)			_hx_tmp->constBits = (_hx_tmp->constBits | 1);
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic CubeMinMaxShader_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_120dd8866d535c94_21_getParamValue)
HXDLIN(  21)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->flipY__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->texA__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->texB__;
            			}
            			break;
            			case (int)3: {
HXLINE( 287)				return this->isMax__;
            			}
            			break;
            			case (int)4: {
HXLINE( 287)				return this->mat__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float CubeMinMaxShader_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_120dd8866d535c94_21_getParamFloatValue)
HXDLIN(  21)		if ((index == 0)) {
HXLINE( 303)			return this->flipY__;
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader CubeMinMaxShader_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_120dd8866d535c94_21_clone)
HXLINE( 315)		 ::h3d::shader::CubeMinMaxShader s = ( ( ::h3d::shader::CubeMinMaxShader)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::CubeMinMaxShader >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->flipY__ = this->flipY__;
HXDLIN( 320)		s->texA__ = this->texA__;
HXDLIN( 320)		s->texB__ = this->texB__;
HXDLIN( 320)		s->isMax__ = this->isMax__;
HXDLIN( 320)		s->mat__ = this->mat__;
HXLINE( 322)		return s;
            	}


::String CubeMinMaxShader_obj::SRC;

 ::hxsl::SharedShader CubeMinMaxShader_obj::_SHADER;


::hx::ObjectPtr< CubeMinMaxShader_obj > CubeMinMaxShader_obj::__new() {
	::hx::ObjectPtr< CubeMinMaxShader_obj > __this = new CubeMinMaxShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CubeMinMaxShader_obj > CubeMinMaxShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CubeMinMaxShader_obj *__this = (CubeMinMaxShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CubeMinMaxShader_obj), true, "h3d.shader.CubeMinMaxShader"));
	*(void **)__this = CubeMinMaxShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CubeMinMaxShader_obj::CubeMinMaxShader_obj()
{
}

void CubeMinMaxShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeMinMaxShader);
	HX_MARK_MEMBER_NAME(texA__,"texA__");
	HX_MARK_MEMBER_NAME(texB__,"texB__");
	HX_MARK_MEMBER_NAME(isMax__,"isMax__");
	HX_MARK_MEMBER_NAME(mat__,"mat__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeMinMaxShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texA__,"texA__");
	HX_VISIT_MEMBER_NAME(texB__,"texB__");
	HX_VISIT_MEMBER_NAME(isMax__,"isMax__");
	HX_VISIT_MEMBER_NAME(mat__,"mat__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CubeMinMaxShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mat() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"texA") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texA() ); }
		if (HX_FIELD_EQ(inName,"texB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texB() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isMax() ); }
		if (HX_FIELD_EQ(inName,"mat__") ) { return ::hx::Val( mat__ ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"texA__") ) { return ::hx::Val( texA__ ); }
		if (HX_FIELD_EQ(inName,"texB__") ) { return ::hx::Val( texB__ ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isMax__") ) { return ::hx::Val( isMax__ ); }
		if (HX_FIELD_EQ(inName,"get_mat") ) { return ::hx::Val( get_mat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mat") ) { return ::hx::Val( set_mat_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_texA") ) { return ::hx::Val( get_texA_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texA") ) { return ::hx::Val( set_texA_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_texB") ) { return ::hx::Val( get_texB_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texB") ) { return ::hx::Val( set_texB_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_isMax") ) { return ::hx::Val( get_isMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_isMax") ) { return ::hx::Val( set_isMax_dyn() ); }
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

bool CubeMinMaxShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val CubeMinMaxShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mat(inValue.Cast<  ::h3d::Matrix >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"texA") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texA(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		if (HX_FIELD_EQ(inName,"texB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texB(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isMax(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"mat__") ) { mat__=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"texA__") ) { texA__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texB__") ) { texB__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isMax__") ) { isMax__=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CubeMinMaxShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void CubeMinMaxShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("texA",7a,cc,f9,4c));
	outFields->push(HX_("texA__",1a,b2,61,d8));
	outFields->push(HX_("texB",7b,cc,f9,4c));
	outFields->push(HX_("texB__",5b,74,62,d8));
	outFields->push(HX_("isMax",da,34,51,c1));
	outFields->push(HX_("isMax__",7a,f2,ab,9f));
	outFields->push(HX_("mat",a0,0a,53,00));
	outFields->push(HX_("mat__",c0,45,23,03));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CubeMinMaxShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(CubeMinMaxShader_obj,texA__),HX_("texA__",1a,b2,61,d8)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(CubeMinMaxShader_obj,texB__),HX_("texB__",5b,74,62,d8)},
	{::hx::fsBool,(int)offsetof(CubeMinMaxShader_obj,isMax__),HX_("isMax__",7a,f2,ab,9f)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(CubeMinMaxShader_obj,mat__),HX_("mat__",c0,45,23,03)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CubeMinMaxShader_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &CubeMinMaxShader_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &CubeMinMaxShader_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CubeMinMaxShader_obj_sMemberFields[] = {
	HX_("texA__",1a,b2,61,d8),
	HX_("get_texA",03,88,b4,cc),
	HX_("set_texA",77,e1,11,7b),
	HX_("texB__",5b,74,62,d8),
	HX_("get_texB",04,88,b4,cc),
	HX_("set_texB",78,e1,11,7b),
	HX_("isMax__",7a,f2,ab,9f),
	HX_("get_isMax",31,91,fa,04),
	HX_("set_isMax",3d,7d,4b,e8),
	HX_("mat__",c0,45,23,03),
	HX_("get_mat",37,d3,c7,26),
	HX_("set_mat",43,64,c9,19),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void CubeMinMaxShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeMinMaxShader_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(CubeMinMaxShader_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CubeMinMaxShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeMinMaxShader_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(CubeMinMaxShader_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class CubeMinMaxShader_obj::__mClass;

static ::String CubeMinMaxShader_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void CubeMinMaxShader_obj::__register()
{
	CubeMinMaxShader_obj _hx_dummy;
	CubeMinMaxShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.CubeMinMaxShader",e0,80,b4,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CubeMinMaxShader_obj::__GetStatic;
	__mClass->mSetStaticField = &CubeMinMaxShader_obj::__SetStatic;
	__mClass->mMarkFunc = CubeMinMaxShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CubeMinMaxShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CubeMinMaxShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CubeMinMaxShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CubeMinMaxShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeMinMaxShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeMinMaxShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CubeMinMaxShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_120dd8866d535c94_21_boot)
HXDLIN(  21)		SRC = HX_("HXSLG2gzZC5zaGFkZXIuQ3ViZU1pbk1heFNoYWRlcgwBBWlucHV0DQECAghwb3NpdGlvbgUKAQEAAwJ1dgUKAQEAAQAABAVmbGlwWQMCAAAFBm91dHB1dA0CAgYIcG9zaXRpb24FDAQFAAcFY29sb3IFDAQFAAQAAAgKcGl4ZWxDb2xvcgUMBAAACQxjYWxjdWxhdGVkVVYFCgQAAAoEdGV4QQwCAAALBHRleEIMAgAADAVpc01heAICAAEAAAAAAA0DbWF0BgIAAA4IX19pbml0X18OBgAADwZ2ZXJ0ZXgOBgAAEAhmcmFnbWVudA4GAAADAg4AAAUCBgQCBwUMAggFDAUMBgQCCQUKAgMFCgUKAAAPAAAFAQYEAgYFDAkDKg4ECgICBQoAAAMGAQoCAgUKBAADAgQDAwEDAAAAAAAAAAADAQMAAAAAAADwPwMFDAUMAAEQAAAFBQgRAnV2BQoEAAAGAwYBAgkFCgEDAAAAAAAAAEADBQoBAwAAAAAAAPA/AwUKAAgSA2RpcgULBAAABgEJAykOAgIRBQoBAwAAAAAAAPA/AwULAg0GBQsACBMBYQUMBAAACQMhDgICCgwCEgULBQwACBQBYgUMBAAACQMhDgICCwwCEgULBQwABgQCCAUMCwIMAgkDFg4CAhMFDAIUBQwFDAkDFQ4CAhMFDAIUBQwFDAUMBQwA",9c,f2,cd,f9);
            	}
}

} // end namespace h3d
} // end namespace shader
