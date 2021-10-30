#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
#ifndef INCLUDED_hxsl_AllocGlobal
#include <hxsl/AllocGlobal.h>
#endif
#ifndef INCLUDED_hxsl_AllocParam
#include <hxsl/AllocParam.h>
#endif
#ifndef INCLUDED_hxsl_BatchShader
#include <hxsl/BatchShader.h>
#endif
#ifndef INCLUDED_hxsl_Cache
#include <hxsl/Cache.h>
#endif
#ifndef INCLUDED_hxsl_Component
#include <hxsl/Component.h>
#endif
#ifndef INCLUDED_hxsl_Const
#include <hxsl/Const.h>
#endif
#ifndef INCLUDED_hxsl_Dce
#include <hxsl/Dce.h>
#endif
#ifndef INCLUDED_hxsl_Error
#include <hxsl/Error.h>
#endif
#ifndef INCLUDED_hxsl_Flatten
#include <hxsl/Flatten.h>
#endif
#ifndef INCLUDED_hxsl_FunctionKind
#include <hxsl/FunctionKind.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Linker
#include <hxsl/Linker.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif
#ifndef INCLUDED_hxsl_Printer
#include <hxsl/Printer.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShaderData
#include <hxsl/RuntimeShaderData.h>
#endif
#ifndef INCLUDED_hxsl_SearchMap
#include <hxsl/SearchMap.h>
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
#ifndef INCLUDED_hxsl_ShaderInstanceDesc
#include <hxsl/ShaderInstanceDesc.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif
#ifndef INCLUDED_hxsl_SharedShader
#include <hxsl/SharedShader.h>
#endif
#ifndef INCLUDED_hxsl_SizeDecl
#include <hxsl/SizeDecl.h>
#endif
#ifndef INCLUDED_hxsl_Splitter
#include <hxsl/Splitter.h>
#endif
#ifndef INCLUDED_hxsl_TExprDef
#include <hxsl/TExprDef.h>
#endif
#ifndef INCLUDED_hxsl_TGlobal
#include <hxsl/TGlobal.h>
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
#ifndef INCLUDED_hxsl_VecType
#include <hxsl/VecType.h>
#endif
#ifndef INCLUDED_hxsl__Flatten_Alloc
#include <hxsl/_Flatten/Alloc.h>
#endif
#ifndef INCLUDED_hxsl__Linker_AllocatedVar
#include <hxsl/_Linker/AllocatedVar.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cfce1b699b82de36_25_new,"hxsl.Cache","new",0x0e441f0f,"hxsl.Cache.new","hxsl/Cache.hx",25,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_52_getLinkShader,"hxsl.Cache","getLinkShader",0xfe64fe64,"hxsl.Cache.getLinkShader","hxsl/Cache.hx",52,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_62_getLinkShader,"hxsl.Cache","getLinkShader",0xfe64fe64,"hxsl.Cache.getLinkShader","hxsl/Cache.hx",62,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_87_getLinkShader,"hxsl.Cache","getLinkShader",0xfe64fe64,"hxsl.Cache.getLinkShader","hxsl/Cache.hx",87,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_116_getLinkShader,"hxsl.Cache","getLinkShader",0xfe64fe64,"hxsl.Cache.getLinkShader","hxsl/Cache.hx",116,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_126_getLinkShader,"hxsl.Cache","getLinkShader",0xfe64fe64,"hxsl.Cache.getLinkShader","hxsl/Cache.hx",126,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_36_getLinkShader,"hxsl.Cache","getLinkShader",0xfe64fe64,"hxsl.Cache.getLinkShader","hxsl/Cache.hx",36,0x59522042)
static const int _hx_array_data_74cdeb9d_11[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_184_compileRuntimeShader,"hxsl.Cache","compileRuntimeShader",0x0be3d51b,"hxsl.Cache.compileRuntimeShader","hxsl/Cache.hx",184,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_171_compileRuntimeShader,"hxsl.Cache","compileRuntimeShader",0x0be3d51b,"hxsl.Cache.compileRuntimeShader","hxsl/Cache.hx",171,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_230_compileRuntimeShader,"hxsl.Cache","compileRuntimeShader",0x0be3d51b,"hxsl.Cache.compileRuntimeShader","hxsl/Cache.hx",230,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_342_buildRuntimeShader,"hxsl.Cache","buildRuntimeShader",0xf1723840,"hxsl.Cache.buildRuntimeShader","hxsl/Cache.hx",342,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_358_initGlobals,"hxsl.Cache","initGlobals",0x0b988a2f,"hxsl.Cache.initGlobals","hxsl/Cache.hx",358,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_372_getPath,"hxsl.Cache","getPath",0xe723678a,"hxsl.Cache.getPath","hxsl/Cache.hx",372,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_378_flattenShader,"hxsl.Cache","flattenShader",0x8a5b2978,"hxsl.Cache.flattenShader","hxsl/Cache.hx",378,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_442_flattenShader,"hxsl.Cache","flattenShader",0x8a5b2978,"hxsl.Cache.flattenShader","hxsl/Cache.hx",442,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_460_makeBatchShader,"hxsl.Cache","makeBatchShader",0xd56fa460,"hxsl.Cache.makeBatchShader","hxsl/Cache.hx",460,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_476_createBatchShader,"hxsl.Cache","createBatchShader",0x82ef7fd2,"hxsl.Cache.createBatchShader","hxsl/Cache.hx",476,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_505_createBatchShader,"hxsl.Cache","createBatchShader",0x82ef7fd2,"hxsl.Cache.createBatchShader","hxsl/Cache.hx",505,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_508_createBatchShader,"hxsl.Cache","createBatchShader",0x82ef7fd2,"hxsl.Cache.createBatchShader","hxsl/Cache.hx",508,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_471_createBatchShader,"hxsl.Cache","createBatchShader",0x82ef7fd2,"hxsl.Cache.createBatchShader","hxsl/Cache.hx",471,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_594_get,"hxsl.Cache","get",0x0e3ecf45,"hxsl.Cache.get","hxsl/Cache.hx",594,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_602_set,"hxsl.Cache","set",0x0e47ea51,"hxsl.Cache.set","hxsl/Cache.hx",602,0x59522042)
HX_LOCAL_STACK_FRAME(_hx_pos_cfce1b699b82de36_606_clear,"hxsl.Cache","clear",0xee0009fc,"hxsl.Cache.clear","hxsl/Cache.hx",606,0x59522042)
namespace hxsl{

void Cache_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_25_new)
HXLINE(  26)		this->constsToGlobal = false;
HXLINE(  27)		this->linkCache =  ::hxsl::SearchMap_obj::__alloc( HX_CTX );
HXLINE(  28)		this->linkShaders =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  29)		this->batchShaders =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  30)		this->byID =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic Cache_obj::__CreateEmpty() { return new Cache_obj; }

void *Cache_obj::_hx_vtable = 0;

Dynamic Cache_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Cache_obj > _hx_result = new Cache_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Cache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x058d744d;
}

 ::hxsl::Shader Cache_obj::getLinkShader(::Array< ::Dynamic> vars){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,pos) HXARGC(4)
            		 ::Dynamic _hx_run( ::hxsl::TGlobal g,int size,::Array< ::Dynamic> args, ::Dynamic makeOutExpr){
            			HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_52_getLinkShader)
HXLINE(  53)			::Array< ::Dynamic> out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  54)			int rem = size;
HXLINE(  55)			{
HXLINE(  55)				int _g = 0;
HXDLIN(  55)				int _g1 = args->length;
HXDLIN(  55)				while((_g < _g1)){
HXLINE(  55)					_g = (_g + 1);
HXDLIN(  55)					int i = (_g - 1);
HXLINE(  56)					 ::Dynamic e = makeOutExpr(args->__get(((args->length - 1) - i)).StaticCast<  ::hxsl::Output >(),(rem - ((args->length - 1) - i)));
HXLINE(  57)					rem = (rem - ::hxsl::Tools_obj::size(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)));
HXLINE(  58)					out->unshift(e);
            				}
            			}
HXLINE(  60)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(g))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),out))
            				->setFixed(1,HX_("p",70,00,00,00),pos)
            				->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(size,::hxsl::VecType_obj::VFloat_dyn())));
            		}
            		HX_END_LOCAL_FUNC4(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::haxe::ds::StringMap,outVars, ::hxsl::SharedShader,s) HXARGC(3)
            		 ::Dynamic _hx_run(::String name, ::hxsl::Type t, ::Dynamic parent){
            			HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_62_getLinkShader)
HXLINE(  63)			::String path;
HXDLIN(  63)			if (::hx::IsNull( parent )) {
HXLINE(  63)				path = name;
            			}
            			else {
HXLINE(  63)				path = ((::hxsl::Tools_obj::getName(parent) + HX_(".",2e,00,00,00)) + name);
            			}
HXLINE(  64)			 ::Dynamic v = outVars->get(path);
HXLINE(  65)			if (::hx::IsNotNull( v )) {
HXLINE(  66)				return v;
            			}
HXLINE(  67)			v =  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("parent",2a,05,7e,ed),parent)
            				->setFixed(1,HX_("id",db,5b,00,00),::hxsl::Tools_obj::allocVarId())
            				->setFixed(2,HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Var_dyn())
            				->setFixed(3,HX_("name",4b,72,ff,48),name)
            				->setFixed(4,HX_("type",ba,f2,08,4d),t));
HXLINE(  74)			if (::hx::IsNull( parent )) {
HXLINE(  75)				( (::Array< ::Dynamic>)(s->data->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) )->push(v);
            			}
            			else {
HXLINE(  77)				 ::hxsl::Type _g = parent->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  77)				if ((_g->_hx_getIndex() == 13)) {
HXLINE(  78)					::Array< ::Dynamic> vl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  78)					vl->push(v);
            				}
            				else {
HXLINE(  79)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
            			}
HXLINE(  82)			outVars->set(path,v);
HXLINE(  83)			return v;
            		}
            		HX_END_LOCAL_FUNC3(return)

            		HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_2, ::hxsl::Type,tvec4, ::Dynamic,makeVec, ::haxe::ds::StringMap,outVars,::Array< ::Dynamic>,makeOutExpr, ::Dynamic,makeVar, ::Dynamic,pos) HXARGC(2)
            		 ::Dynamic _hx_run( ::hxsl::Output v,int rem){
            			HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_87_getLinkShader)
HXLINE(  87)			switch((int)(v->_hx_getIndex())){
            				case (int)0: {
HXLINE(  88)					Float v1 = v->_hx_getFloat(0);
HXLINE(  89)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CFloat(v1)))
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn()));
            				}
            				break;
            				case (int)1: {
HXLINE(  96)					::String vname = v->_hx_getString(0);
HXDLIN(  96)					 ::Dynamic size = v->_hx_getObject(1);
HXLINE(  97)					 ::Dynamic v1 = outVars->get(vname);
HXLINE(  98)					if (::hx::IsNotNull( v1 )) {
HXLINE(  99)						return  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(v1))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(v1->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
            					}
HXLINE( 100)					::Array< ::String > path = vname.split(HX_(".",2e,00,00,00));
HXLINE( 101)					 ::Dynamic parent = null();
HXLINE( 102)					while((path->length > 1)){
HXLINE( 103)						 ::Dynamic makeVar1 = makeVar;
HXDLIN( 103)						parent = makeVar1(path->shift(),::hxsl::Type_obj::TStruct(::Array_obj< ::Dynamic>::__new(0)),parent);
            					}
HXLINE( 104)					if (::hx::IsNotNull( size )) {
HXLINE( 105)						rem = ( (int)(size) );
            					}
HXLINE( 106)					 ::Dynamic makeVar1 = makeVar;
HXDLIN( 106)					::String v2 = ( (::String)(path->shift()) );
HXDLIN( 106)					 ::hxsl::Type v3;
HXDLIN( 106)					if ((rem == 1)) {
HXLINE( 106)						v3 = ::hxsl::Type_obj::TFloat_dyn();
            					}
            					else {
HXLINE( 106)						v3 = ::hxsl::Type_obj::TVec(rem,::hxsl::VecType_obj::VFloat_dyn());
            					}
HXDLIN( 106)					v1 = makeVar1(v2,v3,parent);
HXLINE( 107)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(v1))
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(v1->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
            				}
            				break;
            				case (int)2: {
HXLINE( 108)					 ::hxsl::Output v1 = v->_hx_getObject(0).StaticCast<  ::hxsl::Output >();
HXLINE( 109)					 ::Dynamic _hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::PackNormal_dyn()))
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
HXDLIN( 109)					 ::hxsl::TExprDef _hx_tmp1 = ::hxsl::TExprDef_obj::TCall(_hx_tmp,::Array_obj< ::Dynamic>::__new(1)->init(0,makeOutExpr->__get(0)(v1,3)));
HXDLIN( 109)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),_hx_tmp1)
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),tvec4));
            				}
            				break;
            				case (int)3: {
HXLINE( 110)					 ::hxsl::Output v1 = v->_hx_getObject(0).StaticCast<  ::hxsl::Output >();
HXLINE( 111)					 ::Dynamic _hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Pack_dyn()))
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
HXDLIN( 111)					 ::hxsl::TExprDef _hx_tmp1 = ::hxsl::TExprDef_obj::TCall(_hx_tmp,::Array_obj< ::Dynamic>::__new(1)->init(0,makeOutExpr->__get(0)(v1,1)));
HXDLIN( 111)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),_hx_tmp1)
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),tvec4));
            				}
            				break;
            				case (int)4: {
HXLINE(  90)					::Array< ::Dynamic> args = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  91)					return makeVec(::hxsl::TGlobal_obj::Vec2_dyn(),2,args,makeOutExpr->__get(0));
            				}
            				break;
            				case (int)5: {
HXLINE(  92)					::Array< ::Dynamic> args = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  93)					return makeVec(::hxsl::TGlobal_obj::Vec3_dyn(),3,args,makeOutExpr->__get(0));
            				}
            				break;
            				case (int)6: {
HXLINE(  94)					::Array< ::Dynamic> args = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  95)					return makeVec(::hxsl::TGlobal_obj::Vec4_dyn(),4,args,makeOutExpr->__get(0));
            				}
            				break;
            				case (int)7: {
HXLINE( 112)					 ::hxsl::Output v1 = v->_hx_getObject(0).StaticCast<  ::hxsl::Output >();
HXDLIN( 112)					::Array< ::Dynamic> comps = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 113)					 ::hxsl::TExprDef _hx_tmp = ::hxsl::TExprDef_obj::TSwiz(makeOutExpr->__get(0)(v1,4),comps);
HXDLIN( 113)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),_hx_tmp)
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(comps->length,::hxsl::VecType_obj::VFloat_dyn())));
            				}
            				break;
            			}
HXLINE(  87)			return null();
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_3, ::hxsl::Type,tvec4,::Array< ::Dynamic>,makeOutExpr, ::hxsl::SharedShader,s,::Array< int >,outputCount, ::Dynamic,pos) HXARGC(1)
            		 ::Dynamic _hx_run( ::hxsl::Output v){
            			HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_116_getLinkShader)
HXLINE( 118)			int ov = ::hxsl::Tools_obj::allocVarId();
HXLINE( 119)			 ::hxsl::Type tvec41 = tvec4;
HXLINE( 117)			 ::Dynamic ov1 =  ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("id",db,5b,00,00),ov)
            				->setFixed(1,HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Output_dyn())
            				->setFixed(2,HX_("name",4b,72,ff,48),(HX_("OUTPUT",01,bb,03,bf) + outputCount[0]++))
            				->setFixed(3,HX_("type",ba,f2,08,4d),tvec41));
HXLINE( 123)			( (::Array< ::Dynamic>)(s->data->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) )->push(ov1);
HXLINE( 124)			 ::Dynamic makeOutput =  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(ov1))
            				->setFixed(1,HX_("p",70,00,00,00),pos)
            				->setFixed(2,HX_("t",74,00,00,00),tvec4));
HXDLIN( 124)			 ::hxsl::TExprDef makeOutput1 = ::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAssign_dyn(),makeOutput,makeOutExpr->__get(0)(v,4));
HXDLIN( 124)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),makeOutput1)
            				->setFixed(1,HX_("p",70,00,00,00),pos)
            				->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_4, ::hxsl::SharedShader,s, ::Dynamic,pos, ::Dynamic,makeOutput) HXARGC(2)
            		void _hx_run( ::hxsl::FunctionKind kind,::Array< ::Dynamic> vars){
            			HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_126_getLinkShader)
HXLINE( 128)			int fv = ::hxsl::Tools_obj::allocVarId();
HXLINE( 127)			 ::Dynamic fv1 =  ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("id",db,5b,00,00),fv)
            				->setFixed(1,HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Function_dyn())
            				->setFixed(2,HX_("name",4b,72,ff,48),(HX_("",00,00,00,00) + ::Std_obj::string(kind)).toLowerCase())
            				->setFixed(3,HX_("type",ba,f2,08,4d),::hxsl::Type_obj::TFun(::Array_obj< ::Dynamic>::__new(0))));
HXLINE( 138)			::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 138)			{
HXLINE( 138)				int _g1 = 0;
HXDLIN( 138)				while((_g1 < vars->length)){
HXLINE( 138)					 ::hxsl::Output v = vars->__get(_g1).StaticCast<  ::hxsl::Output >();
HXDLIN( 138)					_g1 = (_g1 + 1);
HXDLIN( 138)					_g->push(makeOutput(v));
            				}
            			}
HXLINE( 133)			 ::Dynamic f =  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("ref",53,d9,56,00),fv1)
            				->setFixed(1,HX_("ret",61,d9,56,00),::hxsl::Type_obj::TVoid_dyn())
            				->setFixed(2,HX_("args",5d,8d,74,40),::Array_obj< ::Dynamic>::__new(0))
            				->setFixed(3,HX_("expr",35,fd,1d,43), ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBlock(_g))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())))
            				->setFixed(4,HX_("kind",54,e1,09,47),kind));
HXLINE( 140)			( (::Array< ::Dynamic>)(s->data->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) )->push(f);
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_36_getLinkShader)
HXLINE(  37)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(  37)		{
HXLINE(  37)			int _g1 = 0;
HXDLIN(  37)			while((_g1 < vars->length)){
HXLINE(  37)				 ::hxsl::Output v = vars->__get(_g1).StaticCast<  ::hxsl::Output >();
HXDLIN(  37)				_g1 = (_g1 + 1);
HXDLIN(  37)				_g->push(::Std_obj::string(v));
            			}
            		}
HXDLIN(  37)		::String key = _g->join(HX_(",",2c,00,00,00));
HXLINE(  38)		 ::hxsl::Shader shader = ( ( ::hxsl::Shader)(this->linkShaders->get(key)) );
HXLINE(  39)		if (::hx::IsNotNull( shader )) {
HXLINE(  40)			return shader;
            		}
HXLINE(  41)		 ::hxsl::SharedShader s =  ::hxsl::SharedShader_obj::__alloc( HX_CTX ,HX_("",00,00,00,00));
HXLINE(  42)		::String id = ::haxe::crypto::Md5_obj::encode(key).substr(0,8);
HXLINE(  43)		s->data =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("funs",54,eb,c4,43),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(1,HX_("name",4b,72,ff,48),(HX_("shaderLinker_",f3,6e,42,9f) + id))
            			->setFixed(2,HX_("vars",ac,2b,49,4e),::Array_obj< ::Dynamic>::__new(0)));
HXLINE(  48)		 ::Dynamic pos = null();
HXLINE(  49)		 ::haxe::ds::StringMap outVars =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  50)		::Array< int > outputCount = ::Array_obj< int >::fromData( _hx_array_data_74cdeb9d_11,1);
HXLINE(  51)		 ::hxsl::Type tvec4 = ::hxsl::Type_obj::TVec(4,::hxsl::VecType_obj::VFloat_dyn());
HXLINE(  52)		 ::Dynamic makeVec =  ::Dynamic(new _hx_Closure_0(pos));
HXLINE(  62)		 ::Dynamic makeVar =  ::Dynamic(new _hx_Closure_1(outVars,s));
HXLINE(  86)		::Array< ::Dynamic> makeOutExpr = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN(  86)		makeOutExpr[0] =  ::Dynamic(new _hx_Closure_2(tvec4,makeVec,outVars,makeOutExpr,makeVar,pos));
HXLINE( 116)		 ::Dynamic makeOutput =  ::Dynamic(new _hx_Closure_3(tvec4,makeOutExpr,s,outputCount,pos));
HXLINE( 126)		 ::Dynamic defineFun =  ::Dynamic(new _hx_Closure_4(s,pos,makeOutput));
HXLINE( 142)		defineFun(::hxsl::FunctionKind_obj::Vertex_dyn(),::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Output_obj::Value(HX_("output.position",b6,07,0b,ab),null())));
HXLINE( 143)		defineFun(::hxsl::FunctionKind_obj::Fragment_dyn(),vars);
HXLINE( 145)		shader = ( ( ::hxsl::Shader)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::hxsl::Shader >())) );
HXLINE( 146)		shader->shader = s;
HXLINE( 147)		this->linkShaders->set(key,shader);
HXLINE( 148)		shader->updateConstantsFinal(null());
HXLINE( 150)		return shader;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Cache_obj,getLinkShader,return )

 ::hxsl::RuntimeShader Cache_obj::link( ::hxsl::ShaderList shaders,bool batchMode){
	HX_JUST_GC_STACKFRAME
	 ::hxsl::SearchMap c = this->linkCache;
	{
		 ::hxsl::ShaderList last = null();
		 ::hxsl::ShaderList _g_l = shaders;
		 ::hxsl::ShaderList _g_last = last;
		while(::hx::IsInstanceNotEq( _g_l,_g_last )){
			 ::hxsl::Shader s = _g_l->s;
			_g_l = _g_l->next;
			 ::hxsl::Shader s1 = s;
			 ::hxsl::ShaderInstance i = s1->instance;
			if (::hx::IsNull( c->next )) {
				c->next =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
			}
			 ::hxsl::SearchMap cs = ( ( ::hxsl::SearchMap)(c->next->get(i->id)) );
			if (::hx::IsNull( cs )) {
				cs =  ::hxsl::SearchMap_obj::__alloc( HX_CTX );
				c->next->set(i->id,cs);
			}
			c = cs;
		}
	}
	if (::hx::IsNull( c->linked )) {
		c->linked = this->compileRuntimeShader(shaders,batchMode);
	}
	return c->linked;
}


HX_DEFINE_DYNAMIC_FUNC2(Cache_obj,link,return )

 ::hxsl::RuntimeShader Cache_obj::compileRuntimeShader( ::hxsl::ShaderList shaders,bool batchMode){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::Dynamic s1, ::Dynamic s2){
            			HX_STACKFRAME(&_hx_pos_cfce1b699b82de36_184_compileRuntimeShader)
HXLINE( 184)			return (( (int)(s2->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)) ) - ( (int)(s1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_171_compileRuntimeShader)
HXLINE( 172)		::Array< ::Dynamic> shaderDatas = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 173)		int index = 0;
HXLINE( 174)		{
HXLINE( 174)			 ::hxsl::ShaderList last = null();
HXDLIN( 174)			 ::hxsl::ShaderList _g_l = shaders;
HXDLIN( 174)			 ::hxsl::ShaderList _g_last = last;
HXDLIN( 174)			while(::hx::IsInstanceNotEq( _g_l,_g_last )){
HXLINE( 174)				 ::hxsl::Shader s = _g_l->s;
HXDLIN( 174)				_g_l = _g_l->next;
HXDLIN( 174)				 ::hxsl::Shader s1 = s;
HXLINE( 175)				 ::hxsl::ShaderInstance i = s1->instance;
HXLINE( 176)				index = (index + 1);
HXDLIN( 176)				shaderDatas->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("index",12,9b,14,be),(index - 1))
            					->setFixed(1,HX_("p",70,00,00,00),s1->priority)
            					->setFixed(2,HX_("inst",c6,43,bb,45),i)));
            			}
            		}
HXLINE( 178)		shaderDatas->reverse();
HXLINE( 184)		::haxe::ds::ArraySort_obj::sort(shaderDatas, ::Dynamic(new _hx_Closure_0()));
HXLINE( 222)		 ::hxsl::Linker linker =  ::hxsl::Linker_obj::__alloc( HX_CTX ,batchMode);
HXLINE( 223)		 ::Dynamic s;
HXDLIN( 223)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 223)			::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 223)			{
HXLINE( 223)				int _g1 = 0;
HXDLIN( 223)				while((_g1 < shaderDatas->length)){
HXLINE( 223)					 ::Dynamic s = shaderDatas->__get(_g1);
HXDLIN( 223)					_g1 = (_g1 + 1);
HXDLIN( 223)					_g->push(( ( ::hxsl::ShaderInstance)(s->__Field(HX_("inst",c6,43,bb,45),::hx::paccDynamic)) )->shader);
            				}
            			}
HXDLIN( 223)			s = linker->link(_g);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 223)				{
HXLINE( 223)					null();
            				}
HXDLIN( 223)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 223)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hxsl::Error >())) {
HXLINE( 223)					 ::hxsl::Error e = ( ( ::hxsl::Error)(_g1) );
HXLINE( 224)					::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 224)					{
HXLINE( 224)						int _g2 = 0;
HXDLIN( 224)						while((_g2 < shaderDatas->length)){
HXLINE( 224)							 ::Dynamic s = shaderDatas->__get(_g2);
HXDLIN( 224)							_g2 = (_g2 + 1);
HXDLIN( 224)							_g->push(::hxsl::Printer_obj::shaderToString(( ( ::hxsl::ShaderInstance)(s->__Field(HX_("inst",c6,43,bb,45),::hx::paccDynamic)) )->shader,null()));
            						}
            					}
HXDLIN( 224)					::Array< ::String > shaders = _g;
HXLINE( 225)					 ::hxsl::Error e1 = e;
HXDLIN( 225)					::String e2 = e1->msg;
HXDLIN( 225)					e1->msg = (e2 + (HX_("\n\nin\n\n",a5,50,4e,07) + shaders->join(HX_("\n-----\n",87,e1,ce,a4))));
HXLINE( 226)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            				else {
HXLINE( 223)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 229)		if (batchMode) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,checkRec) HXARGC(1)
            			void _hx_run( ::Dynamic v){
            				HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_230_compileRuntimeShader)
HXLINE( 231)				bool _hx_tmp;
HXDLIN( 231)				if (::hx::IsNotNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE( 231)					_hx_tmp = (( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) )->indexOf(::hxsl::VarQualifier_obj::PerObject_dyn(),null()) >= 0);
            				}
            				else {
HXLINE( 231)					_hx_tmp = false;
            				}
HXDLIN( 231)				if (_hx_tmp) {
HXLINE( 232)					if ((( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) )->length == 1)) {
HXLINE( 232)						v->__SetField(HX_("qualifiers",09,bb,6b,7c),null(),::hx::paccDynamic);
            					}
            					else {
HXLINE( 233)						v->__SetField(HX_("qualifiers",09,bb,6b,7c),( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) )->copy(),::hx::paccDynamic);
HXLINE( 234)						( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) )->remove(::hxsl::VarQualifier_obj::PerObject_dyn());
            					}
HXLINE( 236)					if (::hx::IsPointerNotEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Var_dyn() )) {
HXLINE( 236)						v->__SetField(HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Local_dyn(),::hx::paccDynamic);
            					}
            				}
HXLINE( 238)				{
HXLINE( 238)					 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 238)					if ((_g->_hx_getIndex() == 13)) {
HXLINE( 239)						::Array< ::Dynamic> vl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 240)						{
HXLINE( 240)							int _g1 = 0;
HXDLIN( 240)							while((_g1 < vl->length)){
HXLINE( 240)								 ::Dynamic v = vl->__get(_g1);
HXDLIN( 240)								_g1 = (_g1 + 1);
HXLINE( 241)								checkRec->__get(0)(v);
            							}
            						}
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 230)			::Array< ::Dynamic> checkRec = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 230)			checkRec[0] =  ::Dynamic(new _hx_Closure_1(checkRec));
HXLINE( 245)			{
HXLINE( 245)				int _g = 0;
HXDLIN( 245)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN( 245)				while((_g < _g1->length)){
HXLINE( 245)					 ::Dynamic v = _g1->__get(_g);
HXDLIN( 245)					_g = (_g + 1);
HXLINE( 246)					checkRec->__get(0)(v);
            				}
            			}
            		}
HXLINE( 261)		 ::haxe::ds::IntMap paramVars =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 262)		{
HXLINE( 262)			int _g = 0;
HXDLIN( 262)			::Array< ::Dynamic> _g1 = linker->allVars;
HXDLIN( 262)			while((_g < _g1->length)){
HXLINE( 262)				 ::hxsl::_Linker::AllocatedVar v = _g1->__get(_g).StaticCast<  ::hxsl::_Linker::AllocatedVar >();
HXDLIN( 262)				_g = (_g + 1);
HXLINE( 263)				if (::hx::IsPointerEq( v->v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Param_dyn() )) {
HXLINE( 264)					{
HXLINE( 264)						 ::hxsl::Type _g = v->v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 264)						if ((_g->_hx_getIndex() == 13)) {
HXLINE( 265)							::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 265)							continue;
            						}
            					}
HXLINE( 268)					 ::Dynamic inf = shaderDatas->__get(v->instanceIndex);
HXLINE( 269)					{
HXLINE( 269)						int key = v->id;
HXDLIN( 269)						int inf1 = ( (int)(inf->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) );
HXDLIN( 269)						paramVars->set(key, ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("index",12,9b,14,be),( ( ::hxsl::ShaderInstance)(inf->__Field(HX_("inst",c6,43,bb,45),::hx::paccDynamic)) )->params->get( ::Dynamic(v->merged->__get(0)->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic))))
            							->setFixed(1,HX_("instance",95,1f,e1,59),inf1)));
            					}
            				}
            			}
            		}
HXLINE( 272)		 ::Dynamic prev = s;
HXLINE( 273)		 ::Dynamic s1;
HXDLIN( 273)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 273)			s1 =  ::hxsl::Splitter_obj::__alloc( HX_CTX )->split(s);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 273)				{
HXLINE( 273)					null();
            				}
HXDLIN( 273)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 273)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hxsl::Error >())) {
HXLINE( 273)					 ::hxsl::Error e = ( ( ::hxsl::Error)(_g1) );
HXDLIN( 273)					 ::hxsl::Error e1 = e;
HXDLIN( 273)					::String e2 = e1->msg;
HXDLIN( 273)					e1->msg = (e2 + (HX_("\n\nin\n\n",a5,50,4e,07) + ::hxsl::Printer_obj::shaderToString(s,null())));
HXDLIN( 273)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            				else {
HXLINE( 273)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 288)		 ::Dynamic prev1 = s1;
HXLINE( 289)		 ::Dynamic s2 =  ::hxsl::Dce_obj::__alloc( HX_CTX )->dce(s1->__Field(HX_("vertex",64,db,47,a1),::hx::paccDynamic),s1->__Field(HX_("fragment",d0,5f,e5,ad),::hx::paccDynamic));
HXLINE( 304)		 ::hxsl::RuntimeShader r = this->buildRuntimeShader(s2->__Field(HX_("vertex",64,db,47,a1),::hx::paccDynamic),s2->__Field(HX_("fragment",d0,5f,e5,ad),::hx::paccDynamic),paramVars);
HXLINE( 314)		::Array< ::Dynamic> _g2 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 314)		{
HXLINE( 314)			 ::hxsl::ShaderList last1 = null();
HXDLIN( 314)			 ::hxsl::ShaderList _g4_l = shaders;
HXDLIN( 314)			 ::hxsl::ShaderList _g4_last = last1;
HXDLIN( 314)			while(::hx::IsInstanceNotEq( _g4_l,_g4_last )){
HXLINE( 314)				 ::hxsl::Shader s = _g4_l->s;
HXDLIN( 314)				_g4_l = _g4_l->next;
HXDLIN( 314)				 ::hxsl::Shader s1 = s;
HXDLIN( 314)				_g2->push( ::hxsl::ShaderInstanceDesc_obj::__alloc( HX_CTX ,s1->shader,s1->constBits));
            			}
            		}
HXDLIN( 314)		r->spec =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("signature",f8,a2,6b,15),null())
            			->setFixed(1,HX_("instances",3e,83,1a,4b),_g2));
HXLINE( 316)		{
HXLINE( 316)			int _g3 = 0;
HXDLIN( 316)			int _g4 = shaderDatas->length;
HXDLIN( 316)			while((_g3 < _g4)){
HXLINE( 316)				_g3 = (_g3 + 1);
HXDLIN( 316)				int i = (_g3 - 1);
HXLINE( 317)				 ::Dynamic s = shaderDatas->__get(((shaderDatas->length - 1) - i));
HXLINE( 318)				Dynamic(  ::Dynamic(r->spec->__Field(HX_("instances",3e,83,1a,4b),::hx::paccDynamic))->__GetItem(( (int)(s->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) ))).StaticCast<  ::hxsl::ShaderInstanceDesc >()->index = i;
            			}
            		}
HXLINE( 321)		::Array< ::String > _g5 = ::Array_obj< ::String >::__new(0);
HXDLIN( 321)		{
HXLINE( 321)			int _g6 = 0;
HXDLIN( 321)			::Array< ::Dynamic> _g7 = ( (::Array< ::Dynamic>)(r->spec->__Field(HX_("instances",3e,83,1a,4b),::hx::paccDynamic)) );
HXDLIN( 321)			while((_g6 < _g7->length)){
HXLINE( 321)				 ::hxsl::ShaderInstanceDesc i = _g7->__get(_g6).StaticCast<  ::hxsl::ShaderInstanceDesc >();
HXDLIN( 321)				_g6 = (_g6 + 1);
HXDLIN( 321)				_g5->push( ::Dynamic(((((i->shader->data->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_("_",5f,00,00,00)) + i->bits) + HX_("_",5f,00,00,00)) + i->index)));
            			}
            		}
HXDLIN( 321)		::Array< ::String > signParts = _g5;
HXLINE( 322)		::String _hx_tmp = signParts->join(HX_(":",3a,00,00,00));
HXDLIN( 322)		r->spec->__SetField(HX_("signature",f8,a2,6b,15),::haxe::crypto::Md5_obj::encode(_hx_tmp),::hx::paccDynamic);
HXLINE( 323)		::String _hx_tmp1 = ::hxsl::Printer_obj::shaderToString(r->vertex->data,null());
HXDLIN( 323)		r->signature = ::haxe::crypto::Md5_obj::encode((_hx_tmp1 + ::hxsl::Printer_obj::shaderToString(r->fragment->data,null())));
HXLINE( 324)		r->batchMode = batchMode;
HXLINE( 326)		 ::hxsl::RuntimeShader r2 = ( ( ::hxsl::RuntimeShader)(this->byID->get(r->signature)) );
HXLINE( 327)		if (::hx::IsNotNull( r2 )) {
HXLINE( 328)			r->id = r2->id;
            		}
            		else {
HXLINE( 330)			this->byID->set(r->signature,r);
            		}
HXLINE( 339)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Cache_obj,compileRuntimeShader,return )

 ::hxsl::RuntimeShader Cache_obj::buildRuntimeShader( ::Dynamic vertex, ::Dynamic fragment, ::haxe::ds::IntMap paramVars){
            	HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_342_buildRuntimeShader)
HXLINE( 343)		 ::hxsl::RuntimeShader r =  ::hxsl::RuntimeShader_obj::__alloc( HX_CTX );
HXLINE( 344)		r->vertex = this->flattenShader(vertex,::hxsl::FunctionKind_obj::Vertex_dyn(),paramVars);
HXLINE( 345)		r->vertex->vertex = true;
HXLINE( 346)		r->fragment = this->flattenShader(fragment,::hxsl::FunctionKind_obj::Fragment_dyn(),paramVars);
HXLINE( 347)		r->globals =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 348)		this->initGlobals(r,r->vertex);
HXLINE( 349)		this->initGlobals(r,r->fragment);
HXLINE( 355)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Cache_obj,buildRuntimeShader,return )

void Cache_obj::initGlobals( ::hxsl::RuntimeShader r, ::hxsl::RuntimeShaderData s){
            	HX_STACKFRAME(&_hx_pos_cfce1b699b82de36_358_initGlobals)
HXLINE( 359)		 ::hxsl::AllocGlobal p = s->globals;
HXLINE( 360)		while(::hx::IsNotNull( p )){
HXLINE( 361)			r->globals->set(p->gid,true);
HXLINE( 362)			p = p->next;
            		}
HXLINE( 364)		 ::hxsl::AllocParam p1 = s->params;
HXLINE( 365)		while(::hx::IsNotNull( p1 )){
HXLINE( 366)			if (::hx::IsNotNull( p1->perObjectGlobal )) {
HXLINE( 367)				r->globals->set(p1->perObjectGlobal->gid,true);
            			}
HXLINE( 368)			p1 = p1->next;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Cache_obj,initGlobals,(void))

::String Cache_obj::getPath( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_cfce1b699b82de36_372_getPath)
HXLINE( 373)		if (::hx::IsNull( v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic) )) {
HXLINE( 374)			return ( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
            		}
HXLINE( 375)		::String _hx_tmp = (this->getPath(v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic)) + HX_(".",2e,00,00,00));
HXDLIN( 375)		return ( (::String)((_hx_tmp + v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Cache_obj,getPath,return )

 ::hxsl::RuntimeShaderData Cache_obj::flattenShader( ::Dynamic s, ::hxsl::FunctionKind kind, ::haxe::ds::IntMap params){
            	HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_378_flattenShader)
HXLINE( 379)		 ::hxsl::Flatten flat =  ::hxsl::Flatten_obj::__alloc( HX_CTX );
HXLINE( 380)		 ::hxsl::RuntimeShaderData c =  ::hxsl::RuntimeShaderData_obj::__alloc( HX_CTX );
HXLINE( 381)		 ::Dynamic data = flat->flatten(s,kind,this->constsToGlobal);
HXLINE( 382)		::Array< ::Dynamic> textures = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 383)		c->consts = flat->consts;
HXLINE( 384)		c->texturesCount = 0;
HXLINE( 385)		{
HXLINE( 385)			 ::Dynamic g = flat->allocData->keys();
HXDLIN( 385)			while(( (bool)(g->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 385)				 ::Dynamic g1 = g->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 386)				::Array< ::Dynamic> alloc = ( (::Array< ::Dynamic>)(flat->allocData->get(g1)) );
HXLINE( 387)				switch((int)( ::Dynamic(g1->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 427)						::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 427)						{
HXLINE( 427)							int _g1 = 0;
HXDLIN( 427)							while((_g1 < alloc->length)){
HXLINE( 427)								 ::hxsl::_Flatten::Alloc a = alloc->__get(_g1).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 427)								_g1 = (_g1 + 1);
HXDLIN( 427)								if (::hx::IsNotNull( a->v )) {
HXLINE( 427)									int a1 = a->pos;
HXDLIN( 427)									::String _hx_tmp = this->getPath(a->v);
HXDLIN( 427)									_g->push( ::hxsl::AllocGlobal_obj::__alloc( HX_CTX ,a1,_hx_tmp,a->v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)));
            								}
            							}
            						}
HXDLIN( 427)						::Array< ::Dynamic> out = _g;
HXLINE( 428)						{
HXLINE( 428)							int _g2 = 0;
HXDLIN( 428)							int _g3 = (out->length - 1);
HXDLIN( 428)							while((_g2 < _g3)){
HXLINE( 428)								_g2 = (_g2 + 1);
HXDLIN( 428)								int i = (_g2 - 1);
HXLINE( 429)								out->__get(i).StaticCast<  ::hxsl::AllocGlobal >()->next = out->__get((i + 1)).StaticCast<  ::hxsl::AllocGlobal >();
            							}
            						}
HXLINE( 430)						{
HXLINE( 430)							 ::hxsl::Type _g4 = g1->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 430)							if ((_g4->_hx_getIndex() == 15)) {
HXLINE( 431)								 ::hxsl::Type _g = _g4->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 431)								 ::hxsl::SizeDecl _g1 = _g4->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 431)								if ((_g->_hx_getIndex() == 5)) {
HXLINE( 431)									if ((_g->_hx_getInt(0) == 4)) {
HXLINE( 431)										if ((_g->_hx_getObject(1).StaticCast<  ::hxsl::VecType >()->_hx_getIndex() == 1)) {
HXLINE( 431)											if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 431)												int size = _g1->_hx_getInt(0);
HXDLIN( 431)												{
HXLINE( 432)													c->globals = out->__get(0).StaticCast<  ::hxsl::AllocGlobal >();
HXLINE( 433)													c->globalsSize = size;
            												}
            											}
            											else {
HXLINE( 435)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            											}
            										}
            										else {
HXLINE( 435)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            										}
            									}
            									else {
HXLINE( 435)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            									}
            								}
            								else {
HXLINE( 435)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            								}
            							}
            							else {
HXLINE( 435)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            							}
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 389)						::Array< ::Dynamic> out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 390)						int count = 0;
HXLINE( 391)						{
HXLINE( 391)							int _g = 0;
HXDLIN( 391)							while((_g < alloc->length)){
HXLINE( 391)								 ::hxsl::_Flatten::Alloc a = alloc->__get(_g).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 391)								_g = (_g + 1);
HXLINE( 392)								if (::hx::IsNull( a->v )) {
HXLINE( 392)									continue;
            								}
HXLINE( 393)								 ::Dynamic p = params->get( ::Dynamic(a->v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
HXLINE( 394)								if (::hx::IsNull( p )) {
HXLINE( 395)									 ::hxsl::AllocParam ap =  ::hxsl::AllocParam_obj::__alloc( HX_CTX ,( (::String)(a->v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),a->pos,-1,-1,a->v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic));
HXLINE( 396)									::String _hx_tmp = this->getPath(a->v);
HXDLIN( 396)									ap->perObjectGlobal =  ::hxsl::AllocGlobal_obj::__alloc( HX_CTX ,-1,_hx_tmp,a->v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic));
HXLINE( 397)									out->push(ap);
HXLINE( 398)									count = (count + 1);
HXLINE( 399)									continue;
            								}
HXLINE( 401)								 ::hxsl::AllocParam ap =  ::hxsl::AllocParam_obj::__alloc( HX_CTX ,( (::String)(a->v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),a->pos,( (int)(p->__Field(HX_("instance",95,1f,e1,59),::hx::paccDynamic)) ),( (int)(p->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) ),a->v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic));
HXLINE( 402)								{
HXLINE( 402)									 ::hxsl::Type _g1 = a->v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 402)									if ((_g1->_hx_getIndex() == 15)) {
HXLINE( 403)										 ::hxsl::SizeDecl _g = _g1->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 403)										{
HXLINE( 403)											 ::hxsl::Type t = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 403)											if (::hxsl::Tools_obj::isSampler(t)) {
HXLINE( 405)												ap->pos = -(a->size);
HXLINE( 406)												count = (count + a->size);
            											}
            											else {
HXLINE( 408)												count = (count + 1);
            											}
            										}
            									}
            									else {
HXLINE( 408)										count = (count + 1);
            									}
            								}
HXLINE( 410)								out->push(ap);
            							}
            						}
HXLINE( 412)						{
HXLINE( 412)							int _g1 = 0;
HXDLIN( 412)							int _g2 = (out->length - 1);
HXDLIN( 412)							while((_g1 < _g2)){
HXLINE( 412)								_g1 = (_g1 + 1);
HXDLIN( 412)								int i = (_g1 - 1);
HXLINE( 413)								out->__get(i).StaticCast<  ::hxsl::AllocParam >()->next = out->__get((i + 1)).StaticCast<  ::hxsl::AllocParam >();
            							}
            						}
HXLINE( 414)						{
HXLINE( 414)							 ::hxsl::Type _g3 = g1->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 414)							if ((_g3->_hx_getIndex() == 15)) {
HXLINE( 421)								 ::hxsl::Type _g = _g3->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 421)								 ::hxsl::SizeDecl _g1 = _g3->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXLINE( 415)								{
HXLINE( 415)									 ::hxsl::Type t = _g;
HXDLIN( 415)									if (::hxsl::Tools_obj::isSampler(t)) {
HXLINE( 416)										textures->push( ::Dynamic(::hx::Anon_obj::Create(2)
            											->setFixed(0,HX_("t",74,00,00,00),t)
            											->setFixed(1,HX_("all",21,f9,49,00),out)));
HXLINE( 417)										 ::hxsl::RuntimeShaderData c1 = c;
HXDLIN( 417)										c1->texturesCount = (c1->texturesCount + count);
            									}
            									else {
HXLINE( 421)										switch((int)(_g->_hx_getIndex())){
            											case (int)5: {
HXLINE( 418)												if ((_g->_hx_getInt(0) == 4)) {
HXLINE( 418)													if ((_g->_hx_getObject(1).StaticCast<  ::hxsl::VecType >()->_hx_getIndex() == 1)) {
HXLINE( 421)														if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 418)															int size = _g1->_hx_getInt(0);
HXDLIN( 418)															{
HXLINE( 419)																c->params = out->__get(0).StaticCast<  ::hxsl::AllocParam >();
HXLINE( 420)																c->paramsSize = size;
            															}
            														}
            														else {
HXLINE( 424)															HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            														}
            													}
            													else {
HXLINE( 424)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            													}
            												}
            												else {
HXLINE( 424)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            												}
            											}
            											break;
            											case (int)16: {
HXLINE( 421)												 ::hxsl::Type _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 421)												 ::hxsl::SizeDecl _g2 = _g->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 421)												{
HXLINE( 422)													c->buffers = out->__get(0).StaticCast<  ::hxsl::AllocParam >();
HXLINE( 423)													c->bufferCount = out->length;
            												}
            											}
            											break;
            											default:{
HXLINE( 424)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            											}
            										}
            									}
            								}
            							}
            							else {
HXLINE( 424)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            							}
            						}
            					}
            					break;
            					default:{
HXLINE( 437)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            					}
            				}
            			}
            		}
HXLINE( 440)		if ((textures->length > 0)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            			int _hx_run( ::Dynamic t1, ::Dynamic t2){
            				HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_442_flattenShader)
HXLINE( 442)				int _hx_tmp = _hx_getEnumValueIndex(t1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic));
HXDLIN( 442)				return (_hx_tmp - _hx_getEnumValueIndex(t2->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)));
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 442)			textures->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 443)			c->textures = Dynamic(  ::Dynamic(textures->__get(0)->__Field(HX_("all",21,f9,49,00),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxsl::AllocParam >();
HXLINE( 444)			{
HXLINE( 444)				int _g = 1;
HXDLIN( 444)				int _g1 = textures->length;
HXDLIN( 444)				while((_g < _g1)){
HXLINE( 444)					_g = (_g + 1);
HXDLIN( 444)					int i = (_g - 1);
HXLINE( 445)					::Array< ::Dynamic> prevAll = ( (::Array< ::Dynamic>)(textures->__get((i - 1))->__Field(HX_("all",21,f9,49,00),::hx::paccDynamic)) );
HXLINE( 446)					 ::hxsl::AllocParam prev = prevAll->__get((prevAll->length - 1)).StaticCast<  ::hxsl::AllocParam >();
HXLINE( 447)					prev->next = Dynamic(  ::Dynamic(textures->__get(i)->__Field(HX_("all",21,f9,49,00),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxsl::AllocParam >();
            				}
            			}
            		}
HXLINE( 450)		if (::hx::IsNull( c->globals )) {
HXLINE( 451)			c->globalsSize = 0;
            		}
HXLINE( 452)		if (::hx::IsNull( c->params )) {
HXLINE( 453)			c->paramsSize = 0;
            		}
HXLINE( 454)		if (::hx::IsNull( c->buffers )) {
HXLINE( 455)			c->bufferCount = 0;
            		}
HXLINE( 456)		c->data = data;
HXLINE( 457)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Cache_obj,flattenShader,return )

 ::hxsl::BatchShader Cache_obj::makeBatchShader( ::hxsl::RuntimeShader rt){
            	HX_STACKFRAME(&_hx_pos_cfce1b699b82de36_460_makeBatchShader)
HXLINE( 461)		 ::hxsl::SharedShader sh = ( ( ::hxsl::SharedShader)(this->batchShaders->get(rt->id)) );
HXLINE( 462)		if (::hx::IsNull( sh )) {
HXLINE( 463)			sh = this->createBatchShader(rt);
HXLINE( 464)			this->batchShaders->set(rt->id,sh);
            		}
HXLINE( 466)		 ::hxsl::BatchShader shader = ( ( ::hxsl::BatchShader)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::hxsl::BatchShader >())) );
HXLINE( 467)		shader->shader = sh;
HXLINE( 468)		return shader;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Cache_obj,makeBatchShader,return )

 ::hxsl::SharedShader Cache_obj::createBatchShader( ::hxsl::RuntimeShader rt){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(3)
            		 ::Dynamic _hx_run(::String name, ::hxsl::Type t, ::hxsl::VarKind kind){
            			HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_476_createBatchShader)
HXLINE( 476)			return  ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("id",db,5b,00,00),::hxsl::Tools_obj::allocVarId())
            				->setFixed(1,HX_("kind",54,e1,09,47),kind)
            				->setFixed(2,HX_("name",4b,72,ff,48),name)
            				->setFixed(3,HX_("type",ba,f2,08,4d),t));
            		}
            		HX_END_LOCAL_FUNC3(return)

            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1, ::hxsl::Type,tvec4, ::Dynamic,ebuffer, ::Dynamic,eoffset, ::Dynamic,pos) HXARGC(1)
            		 ::Dynamic _hx_run(int index){
            			HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_505_createBatchShader)
HXLINE( 505)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(ebuffer, ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),eoffset, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            				->setFixed(1,HX_("p",70,00,00,00),pos)
            				->setFixed(2,HX_("t",74,00,00,00),tvec4));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_2, ::haxe::ds::ObjectMap,parentVars,::Array< ::Dynamic>,swiz, ::hxsl::SharedShader,s, ::Dynamic,readOffset, ::Dynamic,pos, ::Dynamic,declVar) HXARGC(2)
            		 ::Dynamic _hx_run( ::hxsl::AllocParam v,int offset){
            			HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_508_createBatchShader)
HXLINE( 509)			 ::Dynamic vreal = declVar(v->name,v->type,::hxsl::VarKind_obj::Local_dyn());
HXLINE( 510)			if (::hx::IsNotNull( v->perObjectGlobal )) {
HXLINE( 511)				::Array< ::String > path = v->perObjectGlobal->path.split(HX_(".",2e,00,00,00));
HXLINE( 512)				path->pop();
HXLINE( 513)				 ::Dynamic cur = vreal;
HXLINE( 514)				while((path->length > 0)){
HXLINE( 515)					::String key = path->join(HX_(".",2e,00,00,00));
HXLINE( 516)					::String name = ( (::String)(path->pop()) );
HXLINE( 517)					 ::Dynamic vp = parentVars->get(path);
HXLINE( 518)					if (::hx::IsNull( vp )) {
HXLINE( 519)						vp = declVar(name,::hxsl::Type_obj::TStruct(::Array_obj< ::Dynamic>::__new(0)),::hxsl::VarKind_obj::Local_dyn());
HXLINE( 520)						parentVars->set(path,vp);
            					}
HXLINE( 522)					{
HXLINE( 522)						 ::hxsl::Type _g = vp->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 522)						if ((_g->_hx_getIndex() == 13)) {
HXLINE( 523)							::Array< ::Dynamic> vl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 523)							vl->push(cur);
            						}
            					}
HXLINE( 526)					cur->__SetField(HX_("parent",2a,05,7e,ed),vp,::hx::paccDynamic);
HXLINE( 527)					cur = vp;
            				}
            			}
HXLINE( 530)			( (::Array< ::Dynamic>)(s->data->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) )->push(vreal);
HXLINE( 531)			int index = ((v->pos >> 2) + offset);
HXLINE( 532)			 ::Dynamic extract;
HXDLIN( 532)			 ::hxsl::Type _g = v->type;
HXDLIN( 532)			switch((int)(_g->_hx_getIndex())){
            				case (int)3: {
HXLINE( 552)					 ::Dynamic pos1 = pos;
HXDLIN( 552)					 ::hxsl::Type v1 = v->type;
HXDLIN( 552)					 ::Dynamic extract1 = readOffset(index);
HXLINE( 532)					extract =  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TSwiz(extract1,swiz->__get((v->pos & 3)).StaticCast< ::Array< ::Dynamic> >()))
            						->setFixed(1,HX_("p",70,00,00,00),pos1)
            						->setFixed(2,HX_("t",74,00,00,00),v1));
            				}
            				break;
            				case (int)5: {
HXLINE( 544)					 ::hxsl::VecType _g1 = _g->_hx_getObject(1).StaticCast<  ::hxsl::VecType >();
HXDLIN( 544)					switch((int)(_g->_hx_getInt(0))){
            						case (int)2: {
HXLINE( 544)							if ((_g1->_hx_getIndex() == 1)) {
HXLINE( 545)								::Array< ::Dynamic> swiz;
HXDLIN( 545)								switch((int)((v->pos & 3))){
            									case (int)0: {
HXLINE( 545)										swiz = ::Array_obj< ::Dynamic>::__new(2)->init(0,::hxsl::Component_obj::X_dyn())->init(1,::hxsl::Component_obj::Y_dyn());
            									}
            									break;
            									case (int)1: {
HXLINE( 545)										swiz = ::Array_obj< ::Dynamic>::__new(2)->init(0,::hxsl::Component_obj::Y_dyn())->init(1,::hxsl::Component_obj::Z_dyn());
            									}
            									break;
            									default:{
HXLINE( 545)										swiz = ::Array_obj< ::Dynamic>::__new(2)->init(0,::hxsl::Component_obj::Z_dyn())->init(1,::hxsl::Component_obj::W_dyn());
            									}
            								}
HXLINE( 550)								 ::Dynamic pos1 = pos;
HXDLIN( 550)								 ::hxsl::Type v1 = v->type;
HXLINE( 532)								extract =  ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TSwiz(readOffset(index),swiz))
            									->setFixed(1,HX_("p",70,00,00,00),pos1)
            									->setFixed(2,HX_("t",74,00,00,00),v1));
            							}
            							else {
HXLINE( 554)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported batch var type ",bc,54,ed,b1) + ::Std_obj::string(v->type))));
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 544)							if ((_g1->_hx_getIndex() == 1)) {
HXLINE( 543)								 ::Dynamic pos1 = pos;
HXDLIN( 543)								 ::hxsl::Type v1 = v->type;
HXDLIN( 543)								 ::Dynamic extract1 = readOffset(index);
HXDLIN( 543)								::Array< ::Dynamic> extract2;
HXDLIN( 543)								if (((v->pos & 3) == 0)) {
HXLINE( 543)									extract2 = ::Array_obj< ::Dynamic>::__new(3)->init(0,::hxsl::Component_obj::X_dyn())->init(1,::hxsl::Component_obj::Y_dyn())->init(2,::hxsl::Component_obj::Z_dyn());
            								}
            								else {
HXLINE( 543)									extract2 = ::Array_obj< ::Dynamic>::__new(3)->init(0,::hxsl::Component_obj::Y_dyn())->init(1,::hxsl::Component_obj::Z_dyn())->init(2,::hxsl::Component_obj::W_dyn());
            								}
HXLINE( 532)								extract =  ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TSwiz(extract1,extract2))
            									->setFixed(1,HX_("p",70,00,00,00),pos1)
            									->setFixed(2,HX_("t",74,00,00,00),v1));
            							}
            							else {
HXLINE( 554)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported batch var type ",bc,54,ed,b1) + ::Std_obj::string(v->type))));
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 544)							if ((_g1->_hx_getIndex() == 1)) {
HXLINE( 532)								extract = readOffset(index);
            							}
            							else {
HXLINE( 554)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported batch var type ",bc,54,ed,b1) + ::Std_obj::string(v->type))));
            							}
            						}
            						break;
            						default:{
HXLINE( 554)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported batch var type ",bc,54,ed,b1) + ::Std_obj::string(v->type))));
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 534)					 ::Dynamic pos1 = pos;
HXDLIN( 534)					 ::hxsl::Type v1 = v->type;
HXDLIN( 534)					 ::Dynamic extract1 =  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Mat4_dyn()))
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
HXLINE( 535)					 ::Dynamic extract2 = readOffset(index);
HXLINE( 536)					 ::Dynamic extract3 = readOffset((index + 1));
HXLINE( 537)					 ::Dynamic extract4 = readOffset((index + 2));
HXLINE( 532)					extract =  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall(extract1,::Array_obj< ::Dynamic>::__new(4)->init(0,extract2)->init(1,extract3)->init(2,extract4)->init(3,readOffset((index + 3)))))
            						->setFixed(1,HX_("p",70,00,00,00),pos1)
            						->setFixed(2,HX_("t",74,00,00,00),v1));
            				}
            				break;
            				default:{
HXLINE( 554)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported batch var type ",bc,54,ed,b1) + ::Std_obj::string(v->type))));
            				}
            			}
HXLINE( 556)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAssign_dyn(), ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(vreal))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),v->type)),extract))
            				->setFixed(1,HX_("p",70,00,00,00),pos)
            				->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_471_createBatchShader)
HXLINE( 472)		 ::hxsl::SharedShader s =  ::hxsl::SharedShader_obj::__alloc( HX_CTX ,HX_("",00,00,00,00));
HXLINE( 473)		::String id = ( (::String)(rt->spec->__Field(HX_("signature",f8,a2,6b,15),::hx::paccDynamic)) ).substr(0,8);
HXLINE( 475)		 ::Dynamic declVar =  ::Dynamic(new _hx_Closure_0());
HXLINE( 484)		 ::Dynamic pos = null();
HXLINE( 485)		 ::Dynamic vcount = declVar(HX_("Batch_Count",0a,03,a5,87),::hxsl::Type_obj::TInt_dyn(),::hxsl::VarKind_obj::Param_dyn());
HXLINE( 486)		 ::Dynamic vbuffer = declVar(HX_("Batch_Buffer",65,72,d9,2c),::hxsl::Type_obj::TBuffer(::hxsl::Type_obj::TVec(4,::hxsl::VecType_obj::VFloat_dyn()),::hxsl::SizeDecl_obj::SVar(vcount)),::hxsl::VarKind_obj::Param_dyn());
HXLINE( 487)		 ::Dynamic voffset = declVar(HX_("Batch_Offset",f8,4c,84,bc),::hxsl::Type_obj::TInt_dyn(),::hxsl::VarKind_obj::Local_dyn());
HXLINE( 488)		 ::Dynamic ebuffer =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(vbuffer))
            			->setFixed(1,HX_("p",70,00,00,00),pos)
            			->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(vbuffer->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXLINE( 489)		 ::Dynamic eoffset =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(voffset))
            			->setFixed(1,HX_("p",70,00,00,00),pos)
            			->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(voffset->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXLINE( 490)		 ::hxsl::Type tvec4 = ::hxsl::Type_obj::TVec(4,::hxsl::VecType_obj::VFloat_dyn());
HXLINE( 491)		int countBits = 16;
HXLINE( 492)		vcount->__SetField(HX_("qualifiers",09,bb,6b,7c),::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::VarQualifier_obj::Const((1 << countBits))),::hx::paccDynamic);
HXLINE( 494)		s->data =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("funs",54,eb,c4,43),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(1,HX_("name",4b,72,ff,48),(HX_("batchShader_",00,8d,fe,1d) + id))
            			->setFixed(2,HX_("vars",ac,2b,49,4e),::Array_obj< ::Dynamic>::__new(3)->init(0,vcount)->init(1,vbuffer)->init(2,voffset)));
HXLINE( 500)		int stride = (rt->vertex->paramsSize + rt->fragment->paramsSize);
HXLINE( 501)		 ::haxe::ds::ObjectMap parentVars =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 502)		::Array< ::Dynamic> swiz = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Component_obj::X_dyn()))->init(1,::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Component_obj::Y_dyn()))->init(2,::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Component_obj::Z_dyn()))->init(3,::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Component_obj::W_dyn()));
HXLINE( 504)		 ::Dynamic readOffset =  ::Dynamic(new _hx_Closure_1(tvec4,ebuffer,eoffset,pos));
HXLINE( 508)		 ::Dynamic extractVar =  ::Dynamic(new _hx_Closure_2(parentVars,swiz,s,readOffset,pos,declVar));
HXLINE( 559)		::Array< ::Dynamic> exprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 560)		 ::hxsl::AllocParam p = rt->vertex->params;
HXLINE( 561)		while(::hx::IsNotNull( p )){
HXLINE( 562)			exprs->push(extractVar(p,0));
HXLINE( 563)			p = p->next;
            		}
HXLINE( 566)		 ::hxsl::AllocParam p1 = rt->fragment->params;
HXLINE( 567)		while(::hx::IsNotNull( p1 )){
HXLINE( 568)			exprs->push(extractVar(p1,rt->vertex->paramsSize));
HXLINE( 569)			p1 = p1->next;
            		}
HXLINE( 572)		exprs->unshift( ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAssign_dyn(),eoffset, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpMult_dyn(), ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::InstanceID_dyn()))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn())), ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(stride)))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            				->setFixed(1,HX_("p",70,00,00,00),pos)
            				->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            			->setFixed(1,HX_("p",70,00,00,00),pos)
            			->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())));
HXLINE( 578)		 ::Dynamic fv = declVar(HX_("init",10,3b,bb,45),::hxsl::Type_obj::TFun(::Array_obj< ::Dynamic>::__new(0)),::hxsl::VarKind_obj::Function_dyn());
HXLINE( 579)		 ::Dynamic f =  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("ref",53,d9,56,00),fv)
            			->setFixed(1,HX_("ret",61,d9,56,00),::hxsl::Type_obj::TVoid_dyn())
            			->setFixed(2,HX_("args",5d,8d,74,40),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(3,HX_("expr",35,fd,1d,43), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBlock(exprs))
            				->setFixed(1,HX_("p",70,00,00,00),pos)
            				->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())))
            			->setFixed(4,HX_("kind",54,e1,09,47),::hxsl::FunctionKind_obj::Init_dyn()));
HXLINE( 586)		( (::Array< ::Dynamic>)(s->data->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) )->push(f);
HXLINE( 587)		s->consts =  ::hxsl::ShaderConst_obj::__alloc( HX_CTX ,vcount,0,countBits);
HXLINE( 588)		s->consts->globalId = 0;
HXLINE( 590)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Cache_obj,createBatchShader,return )

 ::hxsl::Cache Cache_obj::INST;

 ::hxsl::Cache Cache_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_cfce1b699b82de36_594_get)
HXLINE( 595)		 ::hxsl::Cache c = ::hxsl::Cache_obj::INST;
HXLINE( 596)		if (::hx::IsNull( c )) {
HXLINE( 597)			c =  ::hxsl::Cache_obj::__alloc( HX_CTX );
HXDLIN( 597)			::hxsl::Cache_obj::INST = c;
            		}
HXLINE( 598)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cache_obj,get,return )

void Cache_obj::set( ::hxsl::Cache c){
            	HX_STACKFRAME(&_hx_pos_cfce1b699b82de36_602_set)
HXDLIN( 602)		::hxsl::Cache_obj::INST = c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cache_obj,set,(void))

void Cache_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_cfce1b699b82de36_606_clear)
HXDLIN( 606)		::hxsl::Cache_obj::INST = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cache_obj,clear,(void))


::hx::ObjectPtr< Cache_obj > Cache_obj::__new() {
	::hx::ObjectPtr< Cache_obj > __this = new Cache_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Cache_obj > Cache_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Cache_obj *__this = (Cache_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Cache_obj), true, "hxsl.Cache"));
	*(void **)__this = Cache_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Cache_obj::Cache_obj()
{
}

void Cache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cache);
	HX_MARK_MEMBER_NAME(linkCache,"linkCache");
	HX_MARK_MEMBER_NAME(linkShaders,"linkShaders");
	HX_MARK_MEMBER_NAME(batchShaders,"batchShaders");
	HX_MARK_MEMBER_NAME(byID,"byID");
	HX_MARK_MEMBER_NAME(constsToGlobal,"constsToGlobal");
	HX_MARK_END_CLASS();
}

void Cache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(linkCache,"linkCache");
	HX_VISIT_MEMBER_NAME(linkShaders,"linkShaders");
	HX_VISIT_MEMBER_NAME(batchShaders,"batchShaders");
	HX_VISIT_MEMBER_NAME(byID,"byID");
	HX_VISIT_MEMBER_NAME(constsToGlobal,"constsToGlobal");
}

::hx::Val Cache_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"byID") ) { return ::hx::Val( byID ); }
		if (HX_FIELD_EQ(inName,"link") ) { return ::hx::Val( link_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"linkCache") ) { return ::hx::Val( linkCache ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"linkShaders") ) { return ::hx::Val( linkShaders ); }
		if (HX_FIELD_EQ(inName,"initGlobals") ) { return ::hx::Val( initGlobals_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"batchShaders") ) { return ::hx::Val( batchShaders ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getLinkShader") ) { return ::hx::Val( getLinkShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"flattenShader") ) { return ::hx::Val( flattenShader_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"constsToGlobal") ) { return ::hx::Val( constsToGlobal ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"makeBatchShader") ) { return ::hx::Val( makeBatchShader_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createBatchShader") ) { return ::hx::Val( createBatchShader_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"buildRuntimeShader") ) { return ::hx::Val( buildRuntimeShader_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compileRuntimeShader") ) { return ::hx::Val( compileRuntimeShader_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Cache_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INST") ) { outValue = ( INST ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
	}
	return false;
}

::hx::Val Cache_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"byID") ) { byID=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"linkCache") ) { linkCache=inValue.Cast<  ::hxsl::SearchMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"linkShaders") ) { linkShaders=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"batchShaders") ) { batchShaders=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"constsToGlobal") ) { constsToGlobal=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Cache_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"INST") ) { INST=ioValue.Cast<  ::hxsl::Cache >(); return true; }
	}
	return false;
}

void Cache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("linkCache",e8,c7,33,ee));
	outFields->push(HX_("linkShaders",d4,e4,08,f5));
	outFields->push(HX_("batchShaders",14,8d,fe,1d));
	outFields->push(HX_("byID",72,f9,22,41));
	outFields->push(HX_("constsToGlobal",0e,03,7c,38));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Cache_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxsl::SearchMap */ ,(int)offsetof(Cache_obj,linkCache),HX_("linkCache",e8,c7,33,ee)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Cache_obj,linkShaders),HX_("linkShaders",d4,e4,08,f5)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Cache_obj,batchShaders),HX_("batchShaders",14,8d,fe,1d)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Cache_obj,byID),HX_("byID",72,f9,22,41)},
	{::hx::fsBool,(int)offsetof(Cache_obj,constsToGlobal),HX_("constsToGlobal",0e,03,7c,38)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Cache_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hxsl::Cache */ ,(void *) &Cache_obj::INST,HX_("INST",c6,0b,7c,30)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Cache_obj_sMemberFields[] = {
	HX_("linkCache",e8,c7,33,ee),
	HX_("linkShaders",d4,e4,08,f5),
	HX_("batchShaders",14,8d,fe,1d),
	HX_("byID",72,f9,22,41),
	HX_("constsToGlobal",0e,03,7c,38),
	HX_("getLinkShader",f5,de,bb,47),
	HX_("link",fa,17,b3,47),
	HX_("compileRuntimeShader",aa,98,bb,c2),
	HX_("buildRuntimeShader",0f,aa,ee,fa),
	HX_("initGlobals",80,74,a3,cc),
	HX_("getPath",5b,95,d4,1c),
	HX_("flattenShader",09,0a,b2,d3),
	HX_("makeBatchShader",31,8b,ac,4a),
	HX_("createBatchShader",e3,7c,50,6e),
	::String(null()) };

static void Cache_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cache_obj::INST,"INST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Cache_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cache_obj::INST,"INST");
};

#endif

::hx::Class Cache_obj::__mClass;

static ::String Cache_obj_sStaticFields[] = {
	HX_("INST",c6,0b,7c,30),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("clear",8d,71,5b,48),
	::String(null())
};

void Cache_obj::__register()
{
	Cache_obj _hx_dummy;
	Cache_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Cache",9d,eb,cd,74);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Cache_obj::__GetStatic;
	__mClass->mSetStaticField = &Cache_obj::__SetStatic;
	__mClass->mMarkFunc = Cache_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Cache_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Cache_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Cache_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Cache_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Cache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Cache_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
