#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
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
#ifndef INCLUDED_hxsl_ShaderConst
#include <hxsl/ShaderConst.h>
#endif
#ifndef INCLUDED_hxsl_ShaderInstance
#include <hxsl/ShaderInstance.h>
#endif
#ifndef INCLUDED_hxsl_SharedShader
#include <hxsl/SharedShader.h>
#endif
#ifndef INCLUDED_hxsl_Type
#include <hxsl/Type.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a50caf470752e157_5_new,"hxsl.Shader","new",0x1ad63b5c,"hxsl.Shader.new","hxsl/Shader.hx",5,0xce2fdb73)
HX_LOCAL_STACK_FRAME(_hx_pos_a50caf470752e157_17_initialize,"hxsl.Shader","initialize",0x37625dd4,"hxsl.Shader.initialize","hxsl/Shader.hx",17,0xce2fdb73)
HX_LOCAL_STACK_FRAME(_hx_pos_a50caf470752e157_41_setPriority,"hxsl.Shader","setPriority",0xf33f0c22,"hxsl.Shader.setPriority","hxsl/Shader.hx",41,0xce2fdb73)
HX_LOCAL_STACK_FRAME(_hx_pos_a50caf470752e157_45_getParamValue,"hxsl.Shader","getParamValue",0x02c129d6,"hxsl.Shader.getParamValue","hxsl/Shader.hx",45,0xce2fdb73)
HX_LOCAL_STACK_FRAME(_hx_pos_a50caf470752e157_50_getParamFloatValue,"hxsl.Shader","getParamFloatValue",0xcfabdbb0,"hxsl.Shader.getParamFloatValue","hxsl/Shader.hx",50,0xce2fdb73)
HX_LOCAL_STACK_FRAME(_hx_pos_a50caf470752e157_55_updateConstants,"hxsl.Shader","updateConstants",0xc6eb3c42,"hxsl.Shader.updateConstants","hxsl/Shader.hx",55,0xce2fdb73)
HX_LOCAL_STACK_FRAME(_hx_pos_a50caf470752e157_58_updateConstantsFinal,"hxsl.Shader","updateConstantsFinal",0xa630e3d4,"hxsl.Shader.updateConstantsFinal","hxsl/Shader.hx",58,0xce2fdb73)
HX_LOCAL_STACK_FRAME(_hx_pos_a50caf470752e157_101_clone,"hxsl.Shader","clone",0xd8933559,"hxsl.Shader.clone","hxsl/Shader.hx",101,0xce2fdb73)
HX_LOCAL_STACK_FRAME(_hx_pos_a50caf470752e157_105_toString,"hxsl.Shader","toString",0x5cdb1430,"hxsl.Shader.toString","hxsl/Shader.hx",105,0xce2fdb73)
namespace hxsl{

void Shader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a50caf470752e157_5_new)
HXLINE(   7)		this->priority = 0;
HXLINE(  14)		this->initialize();
            	}

Dynamic Shader_obj::__CreateEmpty() { return new Shader_obj; }

void *Shader_obj::_hx_vtable = 0;

Dynamic Shader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Shader_obj > _hx_result = new Shader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Shader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
}

void Shader_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_a50caf470752e157_17_initialize)
HXLINE(  18)		this->constModified = true;
HXLINE(  19)		if (::hx::IsNotNull( this->shader )) {
HXLINE(  20)			return;
            		}
HXLINE(  21)		 ::Dynamic cl = ::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  22)		this->shader = ( ( ::hxsl::SharedShader)(cl->__Field(HX_("_SHADER",c4,7c,1a,3e),::hx::paccDynamic)) );
HXLINE(  23)		if (::hx::IsNull( this->shader )) {
HXLINE(  24)			 ::Dynamic curClass = cl;
HXLINE(  25)			while(true){
HXLINE(  25)				bool _hx_tmp;
HXDLIN(  25)				if (::hx::IsNotNull( curClass )) {
HXLINE(  25)					_hx_tmp = ::hx::IsNull( curClass->__Field(HX_("SRC",c4,42,3f,00),::hx::paccDynamic) );
            				}
            				else {
HXLINE(  25)					_hx_tmp = false;
            				}
HXDLIN(  25)				if (!(_hx_tmp)) {
HXLINE(  25)					goto _hx_goto_1;
            				}
HXLINE(  26)				curClass = ::Type_obj::getSuperClass(curClass);
            			}
            			_hx_goto_1:;
HXLINE(  27)			if (::hx::IsNull( curClass )) {
HXLINE(  28)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((::Type_obj::getClassName(cl) + HX_(" has no shader source",fd,6f,49,f2))));
            			}
HXLINE(  29)			this->shader = ( ( ::hxsl::SharedShader)(curClass->__Field(HX_("_SHADER",c4,7c,1a,3e),::hx::paccDynamic)) );
HXLINE(  30)			if (::hx::IsNull( this->shader )) {
HXLINE(  31)				this->shader =  ::hxsl::SharedShader_obj::__alloc( HX_CTX ,( (::String)(curClass->__Field(HX_("SRC",c4,42,3f,00),::hx::paccDynamic)) ));
HXLINE(  32)				curClass->__SetField(HX_("_SHADER",c4,7c,1a,3e),this->shader,::hx::paccDynamic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,initialize,(void))

void Shader_obj::setPriority(int v){
            	HX_STACKFRAME(&_hx_pos_a50caf470752e157_41_setPriority)
HXDLIN(  41)		this->priority = v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,setPriority,(void))

 ::Dynamic Shader_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_a50caf470752e157_45_getParamValue)
HXDLIN(  45)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
HXDLIN(  45)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getParamValue,return )

Float Shader_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_a50caf470752e157_50_getParamFloatValue)
HXDLIN(  50)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
HXDLIN(  50)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getParamFloatValue,return )

void Shader_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_a50caf470752e157_55_updateConstants)
HXDLIN(  55)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,updateConstants,(void))

void Shader_obj::updateConstantsFinal( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_a50caf470752e157_58_updateConstantsFinal)
HXLINE(  59)		 ::hxsl::ShaderConst c = this->shader->consts;
HXLINE(  60)		while(::hx::IsNotNull( c )){
HXLINE(  61)			if ((c->globalId == 0)) {
HXLINE(  62)				c = c->next;
HXLINE(  63)				continue;
            			}
HXLINE(  65)			 ::Dynamic v = globals->map->get(c->globalId);
HXLINE(  66)			{
HXLINE(  66)				 ::hxsl::Type _g = c->v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  66)				switch((int)(_g->_hx_getIndex())){
            					case (int)1: {
HXLINE(  68)						int v1 = ( (int)(v) );
HXLINE(  69)						if ((::hx::UShr(v1,c->bits) != 0)) {
HXLINE(  69)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic(((((((HX_("Constant ",1c,56,3e,e6) + c->v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) + HX_(" is outside range (",f4,64,34,dc)) + v1) + HX_(" > ",42,7e,18,00)) + ((1 << c->bits) - 1)) + HX_(")",29,00,00,00)))));
            						}
HXLINE(  70)						 ::hxsl::Shader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  70)						_hx_tmp->constBits = (_hx_tmp->constBits | (v1 << c->pos));
            					}
            					break;
            					case (int)2: {
HXLINE(  72)						bool v1 = ( (bool)(v) );
HXLINE(  73)						if (v1) {
HXLINE(  73)							 ::hxsl::Shader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  73)							_hx_tmp->constBits = (_hx_tmp->constBits | (1 << c->pos));
            						}
            					}
            					break;
            					case (int)17: {
HXLINE(  74)						int count = _g->_hx_getInt(0);
HXDLIN(  74)						{
HXLINE(  75)							if (::hx::IsNull( v )) {
HXLINE(  76)								c = c->next;
HXLINE(  77)								continue;
            							}
HXLINE(  79)							 ::Dynamic v1 = v;
HXLINE(  80)							 ::hxsl::Channel sel = v1->__Field(HX_("channel",c3,00,d2,cc),::hx::paccDynamic);
HXLINE(  81)							if (::hx::IsNull( v1->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic) )) {
HXLINE(  82)								sel = ::hxsl::Channel_obj::Unknown_dyn();
            							}
            							else {
HXLINE(  83)								bool _hx_tmp;
HXDLIN(  83)								if (::hx::IsNotNull( sel )) {
HXLINE(  83)									_hx_tmp = ::hx::IsPointerEq( sel,::hxsl::Channel_obj::Unknown_dyn() );
            								}
            								else {
HXLINE(  83)									_hx_tmp = true;
            								}
HXDLIN(  83)								if (_hx_tmp) {
HXLINE(  84)									switch((int)(count)){
            										case (int)1: {
HXLINE(  85)											if (::hx::IsPointerEq( ( ( ::h3d::mat::Texture)(v1->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic)) )->format,::h3d::mat::Texture_obj::nativeFormat )) {
HXLINE(  85)												sel = ::hxsl::Channel_obj::PackedFloat_dyn();
            											}
            											else {
HXLINE(  88)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic(((HX_("Constant ",1c,56,3e,e6) + c->v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) + HX_(" does not define channel select value",fb,c8,54,de)))));
            											}
            										}
            										break;
            										case (int)3: {
HXLINE(  86)											if (::hx::IsPointerEq( ( ( ::h3d::mat::Texture)(v1->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic)) )->format,::h3d::mat::Texture_obj::nativeFormat )) {
HXLINE(  86)												sel = ::hxsl::Channel_obj::PackedNormal_dyn();
            											}
            											else {
HXLINE(  88)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic(((HX_("Constant ",1c,56,3e,e6) + c->v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) + HX_(" does not define channel select value",fb,c8,54,de)))));
            											}
            										}
            										break;
            										default:{
HXLINE(  88)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic(((HX_("Constant ",1c,56,3e,e6) + c->v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) + HX_(" does not define channel select value",fb,c8,54,de)))));
            										}
            									}
            								}
            							}
HXLINE(  91)							 ::hxsl::Shader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  91)							int _hx_tmp1 = _hx_tmp->constBits;
HXDLIN(  91)							int _hx_tmp2 = (globals->allocChannelID(( ( ::h3d::mat::Texture)(v1->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic)) )) << 3);
HXDLIN(  91)							int _hx_tmp3 = (_hx_tmp2 | _hx_getEnumValueIndex(sel));
HXDLIN(  91)							_hx_tmp->constBits = (_hx_tmp1 | (_hx_tmp3 << c->pos));
            						}
            					}
            					break;
            					default:{
HXLINE(  93)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            					}
            				}
            			}
HXLINE(  95)			c = c->next;
            		}
HXLINE(  97)		 ::hxsl::SharedShader _this = this->shader;
HXDLIN(  97)		int constBits = this->constBits;
HXDLIN(  97)		 ::hxsl::ShaderInstance i = ( ( ::hxsl::ShaderInstance)(_this->instanceCache->get(constBits)) );
HXDLIN(  97)		 ::hxsl::ShaderInstance _hx_tmp;
HXDLIN(  97)		if (::hx::IsNull( i )) {
HXLINE(  97)			_hx_tmp = _this->makeInstance(constBits);
            		}
            		else {
HXLINE(  97)			_hx_tmp = i;
            		}
HXDLIN(  97)		this->instance = _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,updateConstantsFinal,(void))

 ::hxsl::Shader Shader_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_a50caf470752e157_101_clone)
HXDLIN( 101)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,clone,return )

::String Shader_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a50caf470752e157_105_toString)
HXDLIN( 105)		return ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,toString,return )


::hx::ObjectPtr< Shader_obj > Shader_obj::__new() {
	::hx::ObjectPtr< Shader_obj > __this = new Shader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Shader_obj > Shader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Shader_obj *__this = (Shader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Shader_obj), true, "hxsl.Shader"));
	*(void **)__this = Shader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(instance,"instance");
	HX_MARK_MEMBER_NAME(constBits,"constBits");
	HX_MARK_MEMBER_NAME(constModified,"constModified");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(instance,"instance");
	HX_VISIT_MEMBER_NAME(constBits,"constBits");
	HX_VISIT_MEMBER_NAME(constModified,"constModified");
}

::hx::Val Shader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return ::hx::Val( priority ); }
		if (HX_FIELD_EQ(inName,"instance") ) { return ::hx::Val( instance ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"constBits") ) { return ::hx::Val( constBits ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPriority") ) { return ::hx::Val( setPriority_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"constModified") ) { return ::hx::Val( constModified ); }
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateConstantsFinal") ) { return ::hx::Val( updateConstantsFinal_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Shader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::hxsl::SharedShader >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast<  ::hxsl::ShaderInstance >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"constBits") ) { constBits=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"constModified") ) { constModified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("priority",64,7b,3e,bb));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("instance",95,1f,e1,59));
	outFields->push(HX_("constBits",09,0e,ea,2f));
	outFields->push(HX_("constModified",cc,2b,54,c2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Shader_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Shader_obj,priority),HX_("priority",64,7b,3e,bb)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(int)offsetof(Shader_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::hxsl::ShaderInstance */ ,(int)offsetof(Shader_obj,instance),HX_("instance",95,1f,e1,59)},
	{::hx::fsInt,(int)offsetof(Shader_obj,constBits),HX_("constBits",09,0e,ea,2f)},
	{::hx::fsBool,(int)offsetof(Shader_obj,constModified),HX_("constModified",cc,2b,54,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Shader_obj_sStaticStorageInfo = 0;
#endif

static ::String Shader_obj_sMemberFields[] = {
	HX_("priority",64,7b,3e,bb),
	HX_("shader",25,bf,20,1d),
	HX_("instance",95,1f,e1,59),
	HX_("constBits",09,0e,ea,2f),
	HX_("constModified",cc,2b,54,c2),
	HX_("initialize",50,31,bb,ec),
	HX_("setPriority",26,45,9f,eb),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("updateConstants",46,47,f6,93),
	HX_("updateConstantsFinal",50,6a,ab,37),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	Shader_obj _hx_dummy;
	Shader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Shader",6a,9d,8e,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Shader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Shader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
