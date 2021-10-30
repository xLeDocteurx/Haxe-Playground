#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxsl_Clone
#include <hxsl/Clone.h>
#endif
#ifndef INCLUDED_hxsl_FunctionKind
#include <hxsl/FunctionKind.h>
#endif
#ifndef INCLUDED_hxsl_SizeDecl
#include <hxsl/SizeDecl.h>
#endif
#ifndef INCLUDED_hxsl_TExprDef
#include <hxsl/TExprDef.h>
#endif
#ifndef INCLUDED_hxsl_Tools
#include <hxsl/Tools.h>
#endif
#ifndef INCLUDED_hxsl_Type
#include <hxsl/Type.h>
#endif
#ifndef INCLUDED_hxsl_VarKind
#include <hxsl/VarKind.h>
#endif
#ifndef INCLUDED_hxsl_VarQualifier
#include <hxsl/VarQualifier.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bc3859e9622e57dd_9_new,"hxsl.Clone","new",0xdc94c1aa,"hxsl.Clone.new","hxsl/Clone.hx",9,0x636e0a07)
HX_LOCAL_STACK_FRAME(_hx_pos_bc3859e9622e57dd_12_tvar,"hxsl.Clone","tvar",0x2998ce69,"hxsl.Clone.tvar","hxsl/Clone.hx",12,0x636e0a07)
HX_LOCAL_STACK_FRAME(_hx_pos_bc3859e9622e57dd_29_tfun,"hxsl.Clone","tfun",0x298cbbc1,"hxsl.Clone.tfun","hxsl/Clone.hx",29,0x636e0a07)
HX_LOCAL_STACK_FRAME(_hx_pos_bc3859e9622e57dd_39_ttype,"hxsl.Clone","ttype",0x3adb94f8,"hxsl.Clone.ttype","hxsl/Clone.hx",39,0x636e0a07)
HX_LOCAL_STACK_FRAME(_hx_pos_bc3859e9622e57dd_51_texpr,"hxsl.Clone","texpr",0x30f09f73,"hxsl.Clone.texpr","hxsl/Clone.hx",51,0x636e0a07)
HX_LOCAL_STACK_FRAME(_hx_pos_bc3859e9622e57dd_68_shader,"hxsl.Clone","shader",0xe636381b,"hxsl.Clone.shader","hxsl/Clone.hx",68,0x636e0a07)
HX_LOCAL_STACK_FRAME(_hx_pos_bc3859e9622e57dd_76_shaderData,"hxsl.Clone","shaderData",0x62c063e5,"hxsl.Clone.shaderData","hxsl/Clone.hx",76,0x636e0a07)
namespace hxsl{

void Clone_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_bc3859e9622e57dd_9_new)
HXDLIN(   9)		this->varMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic Clone_obj::__CreateEmpty() { return new Clone_obj; }

void *Clone_obj::_hx_vtable = 0;

Dynamic Clone_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Clone_obj > _hx_result = new Clone_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Clone_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01275c4c;
}

 ::Dynamic Clone_obj::tvar( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_bc3859e9622e57dd_12_tvar)
HXLINE(  13)		 ::Dynamic v2 = this->varMap->get( ::Dynamic(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
HXLINE(  14)		if (::hx::IsNotNull( v2 )) {
HXLINE(  14)			return v2;
            		}
HXLINE(  16)		int v21 = ::hxsl::Tools_obj::allocVarId();
HXLINE(  15)		v2 =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("id",db,5b,00,00),v21)
            			->setFixed(1,HX_("kind",54,e1,09,47), ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)))
            			->setFixed(2,HX_("name",4b,72,ff,48), ::Dynamic(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))
            			->setFixed(3,HX_("type",ba,f2,08,4d), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXLINE(  21)		this->varMap->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),v2);
HXLINE(  22)		if (::hx::IsNotNull( v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic) )) {
HXLINE(  22)			v2->__SetField(HX_("parent",2a,05,7e,ed),this->tvar(v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic)),::hx::paccDynamic);
            		}
HXLINE(  23)		if (::hx::IsNotNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE(  23)			v2->__SetField(HX_("qualifiers",09,bb,6b,7c),( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) )->copy(),::hx::paccDynamic);
            		}
HXLINE(  24)		v2->__SetField(HX_("type",ba,f2,08,4d),this->ttype(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)),::hx::paccDynamic);
HXLINE(  25)		return v2;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clone_obj,tvar,return )

 ::Dynamic Clone_obj::tfun( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_bc3859e9622e57dd_29_tfun)
HXLINE(  30)		 ::hxsl::Type _hx_tmp = this->ttype(f->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic));
HXLINE(  31)		 ::hxsl::FunctionKind f1 = f->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic);
HXLINE(  32)		 ::Dynamic _hx_tmp1 = this->tvar(f->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic));
HXLINE(  33)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  33)		{
HXLINE(  33)			int _g1 = 0;
HXDLIN(  33)			::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(f->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXDLIN(  33)			while((_g1 < _g2->length)){
HXLINE(  33)				 ::Dynamic a = _g2->__get(_g1);
HXDLIN(  33)				_g1 = (_g1 + 1);
HXDLIN(  33)				_g->push(this->tvar(a));
            			}
            		}
HXLINE(  29)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("ref",53,d9,56,00),_hx_tmp1)
            			->setFixed(1,HX_("ret",61,d9,56,00),_hx_tmp)
            			->setFixed(2,HX_("args",5d,8d,74,40),_g)
            			->setFixed(3,HX_("expr",35,fd,1d,43),this->texpr(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)))
            			->setFixed(4,HX_("kind",54,e1,09,47),f1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clone_obj,tfun,return )

 ::hxsl::Type Clone_obj::ttype( ::hxsl::Type t){
            	HX_STACKFRAME(&_hx_pos_bc3859e9622e57dd_39_ttype)
HXDLIN(  39)		switch((int)(t->_hx_getIndex())){
            			case (int)13: {
HXLINE(  40)				::Array< ::Dynamic> vl = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  41)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  41)				{
HXLINE(  41)					int _g1 = 0;
HXDLIN(  41)					while((_g1 < vl->length)){
HXLINE(  41)						 ::Dynamic v = vl->__get(_g1);
HXDLIN(  41)						_g1 = (_g1 + 1);
HXDLIN(  41)						_g->push(this->tvar(v));
            					}
            				}
HXDLIN(  41)				return ::hxsl::Type_obj::TStruct(_g);
            			}
            			break;
            			case (int)14: {
HXLINE(  44)				::Array< ::Dynamic> vars = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  45)				return ::hxsl::Type_obj::TFun(vars);
            			}
            			break;
            			case (int)15: {
HXLINE(  42)				 ::hxsl::Type t1 = t->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN(  42)				 ::hxsl::SizeDecl size = t->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXLINE(  43)				 ::hxsl::Type _hx_tmp = this->ttype(t1);
HXDLIN(  43)				 ::hxsl::SizeDecl _hx_tmp1;
HXDLIN(  43)				switch((int)(size->_hx_getIndex())){
            					case (int)0: {
HXLINE(  43)						int _g = size->_hx_getInt(0);
HXDLIN(  43)						_hx_tmp1 = size;
            					}
            					break;
            					case (int)1: {
HXLINE(  43)						 ::Dynamic v = size->_hx_getObject(0);
HXDLIN(  43)						_hx_tmp1 = ::hxsl::SizeDecl_obj::SVar(this->tvar(v));
            					}
            					break;
            				}
HXDLIN(  43)				return ::hxsl::Type_obj::TArray(_hx_tmp,_hx_tmp1);
            			}
            			break;
            			default:{
HXLINE(  47)				return t;
            			}
            		}
HXLINE(  39)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clone_obj,ttype,return )

 ::Dynamic Clone_obj::texpr( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_bc3859e9622e57dd_51_texpr)
HXLINE(  52)		 ::Dynamic e2 = ::hxsl::Tools_obj::map(e,this->texpr_dyn());
HXLINE(  53)		e2->__SetField(HX_("t",74,00,00,00),this->ttype(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)),::hx::paccDynamic);
HXLINE(  54)		 ::hxsl::TExprDef _g = e2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(  54)		 ::hxsl::TExprDef _hx_tmp;
HXDLIN(  54)		switch((int)(_g->_hx_getIndex())){
            			case (int)1: {
HXLINE(  55)				 ::Dynamic v = _g->_hx_getObject(0);
HXLINE(  54)				_hx_tmp = ::hxsl::TExprDef_obj::TVar(this->tvar(v));
            			}
            			break;
            			case (int)7: {
HXLINE(  57)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN(  57)				 ::Dynamic init = _g->_hx_getObject(1);
HXLINE(  54)				_hx_tmp = ::hxsl::TExprDef_obj::TVarDecl(this->tvar(v),init);
            			}
            			break;
            			case (int)13: {
HXLINE(  59)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN(  59)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN(  59)				 ::Dynamic loop = _g->_hx_getObject(2);
HXLINE(  54)				_hx_tmp = ::hxsl::TExprDef_obj::TFor(this->tvar(v),it,loop);
            			}
            			break;
            			default:{
HXLINE(  54)				_hx_tmp = e2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            		}
HXDLIN(  54)		e2->__SetField(HX_("e",65,00,00,00),_hx_tmp,::hx::paccDynamic);
HXLINE(  64)		return e2;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clone_obj,texpr,return )

 ::Dynamic Clone_obj::shader( ::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_bc3859e9622e57dd_68_shader)
HXLINE(  69)		::String s1 = ( (::String)(s->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE(  70)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  70)		{
HXLINE(  70)			int _g1 = 0;
HXDLIN(  70)			::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN(  70)			while((_g1 < _g2->length)){
HXLINE(  70)				 ::Dynamic v = _g2->__get(_g1);
HXDLIN(  70)				_g1 = (_g1 + 1);
HXDLIN(  70)				_g->push(this->tvar(v));
            			}
            		}
HXDLIN(  70)		::Array< ::Dynamic> _hx_tmp = _g;
HXLINE(  71)		::Array< ::Dynamic> _g3 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  71)		{
HXLINE(  71)			int _g4 = 0;
HXDLIN(  71)			::Array< ::Dynamic> _g5 = ( (::Array< ::Dynamic>)(s->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN(  71)			while((_g4 < _g5->length)){
HXLINE(  71)				 ::Dynamic f = _g5->__get(_g4);
HXDLIN(  71)				_g4 = (_g4 + 1);
HXDLIN(  71)				_g3->push(this->tfun(f));
            			}
            		}
HXLINE(  68)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("funs",54,eb,c4,43),_g3)
            			->setFixed(1,HX_("name",4b,72,ff,48),s1)
            			->setFixed(2,HX_("vars",ac,2b,49,4e),_hx_tmp));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clone_obj,shader,return )

 ::Dynamic Clone_obj::shaderData( ::Dynamic s){
            	HX_GC_STACKFRAME(&_hx_pos_bc3859e9622e57dd_76_shaderData)
HXDLIN(  76)		return  ::hxsl::Clone_obj::__alloc( HX_CTX )->shader(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clone_obj,shaderData,return )


::hx::ObjectPtr< Clone_obj > Clone_obj::__new() {
	::hx::ObjectPtr< Clone_obj > __this = new Clone_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Clone_obj > Clone_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Clone_obj *__this = (Clone_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Clone_obj), true, "hxsl.Clone"));
	*(void **)__this = Clone_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Clone_obj::Clone_obj()
{
}

void Clone_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Clone);
	HX_MARK_MEMBER_NAME(varMap,"varMap");
	HX_MARK_END_CLASS();
}

void Clone_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(varMap,"varMap");
}

::hx::Val Clone_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tvar") ) { return ::hx::Val( tvar_dyn() ); }
		if (HX_FIELD_EQ(inName,"tfun") ) { return ::hx::Val( tfun_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ttype") ) { return ::hx::Val( ttype_dyn() ); }
		if (HX_FIELD_EQ(inName,"texpr") ) { return ::hx::Val( texpr_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"varMap") ) { return ::hx::Val( varMap ); }
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Clone_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"shaderData") ) { outValue = shaderData_dyn(); return true; }
	}
	return false;
}

::hx::Val Clone_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"varMap") ) { varMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Clone_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("varMap",f5,ed,8f,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Clone_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Clone_obj,varMap),HX_("varMap",f5,ed,8f,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Clone_obj_sStaticStorageInfo = 0;
#endif

static ::String Clone_obj_sMemberFields[] = {
	HX_("varMap",f5,ed,8f,53),
	HX_("tvar",f3,9e,06,4d),
	HX_("tfun",4b,8c,fa,4c),
	HX_("ttype",2e,3d,84,17),
	HX_("texpr",a9,47,99,0d),
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class Clone_obj::__mClass;

static ::String Clone_obj_sStaticFields[] = {
	HX_("shaderData",ef,37,fc,30),
	::String(null())
};

void Clone_obj::__register()
{
	Clone_obj _hx_dummy;
	Clone_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Clone",b8,64,1c,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Clone_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Clone_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Clone_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Clone_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Clone_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Clone_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
