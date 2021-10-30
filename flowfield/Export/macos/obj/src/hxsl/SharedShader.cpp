#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxsl_Const
#include <hxsl/Const.h>
#endif
#ifndef INCLUDED_hxsl_Eval
#include <hxsl/Eval.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Serializer
#include <hxsl/Serializer.h>
#endif
#ifndef INCLUDED_hxsl_ShaderConst
#include <hxsl/ShaderConst.h>
#endif
#ifndef INCLUDED_hxsl_ShaderGlobal
#include <hxsl/ShaderGlobal.h>
#endif
#ifndef INCLUDED_hxsl_ShaderInstance
#include <hxsl/ShaderInstance.h>
#endif
#ifndef INCLUDED_hxsl_SharedShader
#include <hxsl/SharedShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_07dde4bbcf815d83_47_new,"hxsl.SharedShader","new",0x0a76a021,"hxsl.SharedShader.new","hxsl/SharedShader.hx",47,0xe9aca78e)
HX_LOCAL_STACK_FRAME(_hx_pos_07dde4bbcf815d83_58_initialize,"hxsl.SharedShader","initialize",0x34284baf,"hxsl.SharedShader.initialize","hxsl/SharedShader.hx",58,0xe9aca78e)
HX_LOCAL_STACK_FRAME(_hx_pos_07dde4bbcf815d83_63_getInstance,"hxsl.SharedShader","getInstance",0xb7dedb0c,"hxsl.SharedShader.getInstance","hxsl/SharedShader.hx",63,0xe9aca78e)
HX_LOCAL_STACK_FRAME(_hx_pos_07dde4bbcf815d83_68_makeInstance,"hxsl.SharedShader","makeInstance",0x6f6963c2,"hxsl.SharedShader.makeInstance","hxsl/SharedShader.hx",68,0xe9aca78e)
HX_LOCAL_STACK_FRAME(_hx_pos_07dde4bbcf815d83_96_addSelfParam,"hxsl.SharedShader","addSelfParam",0xc754db1f,"hxsl.SharedShader.addSelfParam","hxsl/SharedShader.hx",96,0xe9aca78e)
HX_LOCAL_STACK_FRAME(_hx_pos_07dde4bbcf815d83_109_addParam,"hxsl.SharedShader","addParam",0x3be21b4b,"hxsl.SharedShader.addParam","hxsl/SharedShader.hx",109,0xe9aca78e)
HX_LOCAL_STACK_FRAME(_hx_pos_07dde4bbcf815d83_121_browseVar,"hxsl.SharedShader","browseVar",0xd396e1fe,"hxsl.SharedShader.browseVar","hxsl/SharedShader.hx",121,0xe9aca78e)
HX_LOCAL_STACK_FRAME(_hx_pos_07dde4bbcf815d83_39_boot,"hxsl.SharedShader","boot",0x156e7d51,"hxsl.SharedShader.boot","hxsl/SharedShader.hx",39,0xe9aca78e)
namespace hxsl{

void SharedShader_obj::__construct(::String src){
            	HX_GC_STACKFRAME(&_hx_pos_07dde4bbcf815d83_47_new)
HXLINE(  48)		this->instanceCache =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  49)		this->consts = null();
HXLINE(  50)		this->globals = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  51)		if ((src == HX_("",00,00,00,00))) {
HXLINE(  52)			return;
            		}
HXLINE(  53)		this->data =  ::hxsl::Serializer_obj::__alloc( HX_CTX )->unserialize(src);
HXLINE(  54)		this->initialize();
            	}

Dynamic SharedShader_obj::__CreateEmpty() { return new SharedShader_obj; }

void *SharedShader_obj::_hx_vtable = 0;

Dynamic SharedShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SharedShader_obj > _hx_result = new SharedShader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SharedShader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x087576b3;
}

void SharedShader_obj::initialize(){
            	HX_STACKFRAME(&_hx_pos_07dde4bbcf815d83_58_initialize)
HXDLIN(  58)		int _g = 0;
HXDLIN(  58)		::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->data->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN(  58)		while((_g < _g1->length)){
HXDLIN(  58)			 ::Dynamic v = _g1->__get(_g);
HXDLIN(  58)			_g = (_g + 1);
HXLINE(  59)			this->browseVar(v,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SharedShader_obj,initialize,(void))

 ::hxsl::ShaderInstance SharedShader_obj::getInstance(int constBits){
            	HX_STACKFRAME(&_hx_pos_07dde4bbcf815d83_63_getInstance)
HXLINE(  64)		 ::hxsl::ShaderInstance i = ( ( ::hxsl::ShaderInstance)(this->instanceCache->get(constBits)) );
HXLINE(  65)		if (::hx::IsNull( i )) {
HXLINE(  65)			return this->makeInstance(constBits);
            		}
            		else {
HXLINE(  65)			return i;
            		}
HXDLIN(  65)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SharedShader_obj,getInstance,return )

 ::hxsl::ShaderInstance SharedShader_obj::makeInstance(int constBits){
            	HX_GC_STACKFRAME(&_hx_pos_07dde4bbcf815d83_68_makeInstance)
HXLINE(  69)		 ::hxsl::Eval eval =  ::hxsl::Eval_obj::__alloc( HX_CTX );
HXLINE(  70)		 ::hxsl::ShaderConst c = this->consts;
HXLINE(  71)		while(::hx::IsNotNull( c )){
HXLINE(  72)			 ::Dynamic c1 = c->v;
HXDLIN(  72)			 ::hxsl::Type _g = c->v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  72)			 ::hxsl::Const _hx_tmp;
HXDLIN(  72)			switch((int)(_g->_hx_getIndex())){
            				case (int)1: {
HXLINE(  72)					_hx_tmp = ::hxsl::Const_obj::CInt((::hx::UShr(constBits,c->pos) & ((1 << c->bits) - 1)));
            				}
            				break;
            				case (int)2: {
HXLINE(  72)					_hx_tmp = ::hxsl::Const_obj::CBool(((::hx::UShr(constBits,c->pos) & 1) != 0));
            				}
            				break;
            				case (int)17: {
HXLINE(  74)					int _g1 = _g->_hx_getInt(0);
HXLINE(  72)					_hx_tmp = ::hxsl::Const_obj::CInt((::hx::UShr(constBits,c->pos) & ((1 << c->bits) - 1)));
            				}
            				break;
            				default:{
HXLINE(  75)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
            			}
HXLINE(  72)			eval->setConstant(c1,_hx_tmp);
HXLINE(  77)			c = c->next;
            		}
HXLINE(  79)		eval->inlineCalls = true;
HXLINE(  83)		eval->unrollLoops = ::hxsl::SharedShader_obj::UNROLL_LOOPS;
HXLINE(  84)		 ::hxsl::ShaderInstance i =  ::hxsl::ShaderInstance_obj::__alloc( HX_CTX ,eval->eval(this->data));
HXLINE(  88)		this->paramsCount = 0;
HXLINE(  89)		{
HXLINE(  89)			int _g = 0;
HXDLIN(  89)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->data->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN(  89)			while((_g < _g1->length)){
HXLINE(  89)				 ::Dynamic v = _g1->__get(_g);
HXDLIN(  89)				_g = (_g + 1);
HXLINE(  90)				this->addParam(eval,i,v);
            			}
            		}
HXLINE(  91)		this->instanceCache->set(constBits,i);
HXLINE(  92)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SharedShader_obj,makeInstance,return )

void SharedShader_obj::addSelfParam( ::hxsl::ShaderInstance i, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_07dde4bbcf815d83_96_addSelfParam)
HXDLIN(  96)		 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  96)		if ((_g->_hx_getIndex() == 13)) {
HXLINE(  97)			::Array< ::Dynamic> vl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  98)			{
HXLINE(  98)				int _g1 = 0;
HXDLIN(  98)				while((_g1 < vl->length)){
HXLINE(  98)					 ::Dynamic v = vl->__get(_g1);
HXDLIN(  98)					_g1 = (_g1 + 1);
HXLINE(  99)					this->addSelfParam(i,v);
            				}
            			}
            		}
            		else {
HXLINE( 101)			if (::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Param_dyn() )) {
HXLINE( 102)				i->params->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),this->paramsCount);
HXLINE( 103)				this->paramsCount++;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(SharedShader_obj,addSelfParam,(void))

void SharedShader_obj::addParam( ::hxsl::Eval eval, ::hxsl::ShaderInstance i, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_07dde4bbcf815d83_109_addParam)
HXDLIN( 109)		 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 109)		if ((_g->_hx_getIndex() == 13)) {
HXLINE( 110)			::Array< ::Dynamic> vl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 111)			{
HXLINE( 111)				int _g1 = 0;
HXDLIN( 111)				while((_g1 < vl->length)){
HXLINE( 111)					 ::Dynamic v = vl->__get(_g1);
HXDLIN( 111)					_g1 = (_g1 + 1);
HXLINE( 112)					this->addParam(eval,i,v);
            				}
            			}
            		}
            		else {
HXLINE( 114)			if (::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Param_dyn() )) {
HXLINE( 115)				{
HXLINE( 115)					::Dynamic this1 = i->params;
HXDLIN( 115)					int key = ( (int)(eval->varMap->get(v)->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXDLIN( 115)					( ( ::haxe::ds::IntMap)(this1) )->set(key,this->paramsCount);
            				}
HXLINE( 116)				this->paramsCount++;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(SharedShader_obj,addParam,(void))

void SharedShader_obj::browseVar( ::Dynamic v,::String path){
            	HX_GC_STACKFRAME(&_hx_pos_07dde4bbcf815d83_121_browseVar)
HXLINE( 122)		v->__SetField(HX_("id",db,5b,00,00),::hxsl::Tools_obj::allocVarId(),::hx::paccDynamic);
HXLINE( 123)		if (::hx::IsNull( path )) {
HXLINE( 124)			path = ::hxsl::Tools_obj::getName(v);
            		}
            		else {
HXLINE( 126)			path = ( (::String)((path + (HX_(".",2e,00,00,00) + v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))) );
            		}
HXLINE( 127)		{
HXLINE( 127)			 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 127)			if ((_g->_hx_getIndex() == 13)) {
HXLINE( 128)				::Array< ::Dynamic> vl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 129)				{
HXLINE( 129)					int _g1 = 0;
HXDLIN( 129)					while((_g1 < vl->length)){
HXLINE( 129)						 ::Dynamic vs = vl->__get(_g1);
HXDLIN( 129)						_g1 = (_g1 + 1);
HXLINE( 130)						this->browseVar(vs,path);
            					}
            				}
            			}
            			else {
HXLINE( 132)				int globalId = 0;
HXLINE( 133)				if (::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Global_dyn() )) {
HXLINE( 134)					globalId = ::hxsl::Globals_obj::allocID(path);
HXLINE( 135)					::Array< ::Dynamic> _hx_tmp = this->globals;
HXDLIN( 135)					_hx_tmp->push( ::hxsl::ShaderGlobal_obj::__alloc( HX_CTX ,v,globalId));
            				}
HXLINE( 137)				if (!(::hxsl::Tools_obj::isConst(v))) {
HXLINE( 138)					return;
            				}
HXLINE( 139)				int bits = ::hxsl::Tools_obj::getConstBits(v);
HXLINE( 140)				if ((bits > 0)) {
HXLINE( 141)					int pos;
HXDLIN( 141)					if (::hx::IsNull( this->consts )) {
HXLINE( 141)						pos = 0;
            					}
            					else {
HXLINE( 141)						pos = (this->consts->pos + this->consts->bits);
            					}
HXLINE( 142)					 ::hxsl::ShaderConst c =  ::hxsl::ShaderConst_obj::__alloc( HX_CTX ,v,pos,bits);
HXLINE( 143)					c->globalId = globalId;
HXLINE( 144)					c->next = this->consts;
HXLINE( 145)					this->consts = c;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(SharedShader_obj,browseVar,(void))

bool SharedShader_obj::UNROLL_LOOPS;


::hx::ObjectPtr< SharedShader_obj > SharedShader_obj::__new(::String src) {
	::hx::ObjectPtr< SharedShader_obj > __this = new SharedShader_obj();
	__this->__construct(src);
	return __this;
}

::hx::ObjectPtr< SharedShader_obj > SharedShader_obj::__alloc(::hx::Ctx *_hx_ctx,::String src) {
	SharedShader_obj *__this = (SharedShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SharedShader_obj), true, "hxsl.SharedShader"));
	*(void **)__this = SharedShader_obj::_hx_vtable;
	__this->__construct(src);
	return __this;
}

SharedShader_obj::SharedShader_obj()
{
}

void SharedShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SharedShader);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(globals,"globals");
	HX_MARK_MEMBER_NAME(consts,"consts");
	HX_MARK_MEMBER_NAME(instanceCache,"instanceCache");
	HX_MARK_MEMBER_NAME(paramsCount,"paramsCount");
	HX_MARK_END_CLASS();
}

void SharedShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(globals,"globals");
	HX_VISIT_MEMBER_NAME(consts,"consts");
	HX_VISIT_MEMBER_NAME(instanceCache,"instanceCache");
	HX_VISIT_MEMBER_NAME(paramsCount,"paramsCount");
}

::hx::Val SharedShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"consts") ) { return ::hx::Val( consts ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { return ::hx::Val( globals ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addParam") ) { return ::hx::Val( addParam_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"browseVar") ) { return ::hx::Val( browseVar_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paramsCount") ) { return ::hx::Val( paramsCount ); }
		if (HX_FIELD_EQ(inName,"getInstance") ) { return ::hx::Val( getInstance_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"makeInstance") ) { return ::hx::Val( makeInstance_dyn() ); }
		if (HX_FIELD_EQ(inName,"addSelfParam") ) { return ::hx::Val( addSelfParam_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"instanceCache") ) { return ::hx::Val( instanceCache ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SharedShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"UNROLL_LOOPS") ) { outValue = ( UNROLL_LOOPS ); return true; }
	}
	return false;
}

::hx::Val SharedShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"consts") ) { consts=inValue.Cast<  ::hxsl::ShaderConst >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { globals=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paramsCount") ) { paramsCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"instanceCache") ) { instanceCache=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SharedShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"UNROLL_LOOPS") ) { UNROLL_LOOPS=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void SharedShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("globals",b0,05,39,14));
	outFields->push(HX_("consts",b0,3d,dc,c7));
	outFields->push(HX_("instanceCache",6d,4e,1d,ae));
	outFields->push(HX_("paramsCount",a9,1b,63,66));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SharedShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SharedShader_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SharedShader_obj,globals),HX_("globals",b0,05,39,14)},
	{::hx::fsObject /*  ::hxsl::ShaderConst */ ,(int)offsetof(SharedShader_obj,consts),HX_("consts",b0,3d,dc,c7)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(SharedShader_obj,instanceCache),HX_("instanceCache",6d,4e,1d,ae)},
	{::hx::fsInt,(int)offsetof(SharedShader_obj,paramsCount),HX_("paramsCount",a9,1b,63,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SharedShader_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &SharedShader_obj::UNROLL_LOOPS,HX_("UNROLL_LOOPS",86,73,d6,0e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SharedShader_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("globals",b0,05,39,14),
	HX_("consts",b0,3d,dc,c7),
	HX_("instanceCache",6d,4e,1d,ae),
	HX_("paramsCount",a9,1b,63,66),
	HX_("initialize",50,31,bb,ec),
	HX_("getInstance",4b,e2,d4,7f),
	HX_("makeInstance",a3,b3,b9,9e),
	HX_("addSelfParam",00,2b,a5,f6),
	HX_("addParam",ac,a6,b2,36),
	HX_("browseVar",7d,4b,40,4f),
	::String(null()) };

static void SharedShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedShader_obj::UNROLL_LOOPS,"UNROLL_LOOPS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SharedShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedShader_obj::UNROLL_LOOPS,"UNROLL_LOOPS");
};

#endif

::hx::Class SharedShader_obj::__mClass;

static ::String SharedShader_obj_sStaticFields[] = {
	HX_("UNROLL_LOOPS",86,73,d6,0e),
	::String(null())
};

void SharedShader_obj::__register()
{
	SharedShader_obj _hx_dummy;
	SharedShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.SharedShader",af,fb,81,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SharedShader_obj::__GetStatic;
	__mClass->mSetStaticField = &SharedShader_obj::__SetStatic;
	__mClass->mMarkFunc = SharedShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SharedShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SharedShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SharedShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SharedShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SharedShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SharedShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SharedShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_07dde4bbcf815d83_39_boot)
HXDLIN(  39)		UNROLL_LOOPS = false;
            	}
}

} // end namespace hxsl
