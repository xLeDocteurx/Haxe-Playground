#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_hxsl_Clone
#include <hxsl/Clone.h>
#endif
#ifndef INCLUDED_hxsl_Component
#include <hxsl/Component.h>
#endif
#ifndef INCLUDED_hxsl_Error
#include <hxsl/Error.h>
#endif
#ifndef INCLUDED_hxsl_FunctionKind
#include <hxsl/FunctionKind.h>
#endif
#ifndef INCLUDED_hxsl_Linker
#include <hxsl/Linker.h>
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
#ifndef INCLUDED_hxsl__Linker_AllocatedVar
#include <hxsl/_Linker/AllocatedVar.h>
#endif
#ifndef INCLUDED_hxsl__Linker_ShaderInfos
#include <hxsl/_Linker/ShaderInfos.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_43_new,"hxsl.Linker","new",0xb664681e,"hxsl.Linker.new","hxsl/Linker.hx",43,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_60_debug,"hxsl.Linker","debug",0xa453d591,"hxsl.Linker.debug","hxsl/Linker.hx",60,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_69_error,"hxsl.Linker","error",0x405e4f06,"hxsl.Linker.error","hxsl/Linker.hx",69,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_72_mergeVar,"hxsl.Linker","mergeVar",0x13a60e91,"hxsl.Linker.mergeVar","hxsl/Linker.hx",72,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_104_allocVar,"hxsl.Linker","allocVar",0xbc1d00f4,"hxsl.Linker.allocVar","hxsl/Linker.hx",104,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_178_mapExprVar,"hxsl.Linker","mapExprVar",0x2c89ed78,"hxsl.Linker.mapExprVar","hxsl/Linker.hx",178,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_231_addShader,"hxsl.Linker","addShader",0x7d4eee64,"hxsl.Linker.addShader","hxsl/Linker.hx",231,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_242_sortByPriorityDesc,"hxsl.Linker","sortByPriorityDesc",0x47a9824c,"hxsl.Linker.sortByPriorityDesc","hxsl/Linker.hx",242,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_248_buildDependency,"hxsl.Linker","buildDependency",0x1b903857,"hxsl.Linker.buildDependency","hxsl/Linker.hx",248,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_276_initDependencies,"hxsl.Linker","initDependencies",0x184b9c9b,"hxsl.Linker.initDependencies","hxsl/Linker.hx",276,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_299_collect,"hxsl.Linker","collect",0xd32af468,"hxsl.Linker.collect","hxsl/Linker.hx",299,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_322_uniqueLocals,"hxsl.Linker","uniqueLocals",0x2d6d1f1b,"hxsl.Linker.uniqueLocals","hxsl/Linker.hx",322,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_336_uniqueLocals,"hxsl.Linker","uniqueLocals",0x2d6d1f1b,"hxsl.Linker.uniqueLocals","hxsl/Linker.hx",336,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_461_link,"hxsl.Linker","link",0xe027467c,"hxsl.Linker.link","hxsl/Linker.hx",461,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_478_link,"hxsl.Linker","link",0xe027467c,"hxsl.Linker.link","hxsl/Linker.hx",478,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_493_link,"hxsl.Linker","link",0xe027467c,"hxsl.Linker.link","hxsl/Linker.hx",493,0x2bdefcf1)
HX_LOCAL_STACK_FRAME(_hx_pos_718c3d3b479ac4ab_340_link,"hxsl.Linker","link",0xe027467c,"hxsl.Linker.link","hxsl/Linker.hx",340,0x2bdefcf1)
static const int _hx_array_data_fb12c12c_58[] = {
	(int)-3000,
};
static const int _hx_array_data_fb12c12c_59[] = {
	(int)-2000,
};
static const int _hx_array_data_fb12c12c_60[] = {
	(int)-1000,
};
namespace hxsl{

void Linker_obj::__construct(::hx::Null< bool >  __o_batchMode){
            		bool batchMode = __o_batchMode.Default(false);
            	HX_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_43_new)
HXLINE(  54)		this->debugDepth = 0;
HXLINE(  57)		this->batchMode = batchMode;
            	}

Dynamic Linker_obj::__CreateEmpty() { return new Linker_obj; }

void *Linker_obj::_hx_vtable = 0;

Dynamic Linker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Linker_obj > _hx_result = new Linker_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Linker_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b02c894;
}

void Linker_obj::debug(::String msg, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_60_debug)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Linker_obj,debug,(void))

 ::Dynamic Linker_obj::error(::String msg, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_69_error)
HXDLIN(  69)		return ::hxsl::Error_obj::t(msg,p);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Linker_obj,error,return )

void Linker_obj::mergeVar(::String path, ::Dynamic v, ::Dynamic v2, ::Dynamic p,::String shaderName){
            	HX_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_72_mergeVar)
HXLINE(  73)		switch((int)( ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            			case (int)2: {
HXLINE(  76)				bool _hx_tmp;
HXDLIN(  76)				if (::hx::IsNotNull( shaderName )) {
HXLINE(  76)					_hx_tmp = ::hxsl::Tools_obj::hasBorrowQualifier(v2,shaderName);
            				}
            				else {
HXLINE(  76)					_hx_tmp = false;
            				}
HXDLIN(  76)				if (!(_hx_tmp)) {
HXLINE(  79)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
            			}
            			break;
            			case (int)0: case (int)1: case (int)3: case (int)4: case (int)5: {
            			}
            			break;
            			case (int)6: {
HXLINE(  79)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            			break;
            		}
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		bool _hx_tmp1;
HXDLIN(  81)		if (::hx::IsNotEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),v2->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic) )) {
HXLINE(  81)			_hx_tmp1 = ::hx::IsPointerNotEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Local_dyn() );
            		}
            		else {
HXLINE(  81)			_hx_tmp1 = false;
            		}
HXDLIN(  81)		if (_hx_tmp1) {
HXLINE(  81)			_hx_tmp = ::hx::IsPointerNotEq( v2->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Local_dyn() );
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  82)			::String _hx_tmp = ((((HX_("'",27,00,00,00) + path) + HX_("' kind does not match : ",22,7e,71,50)) + ::Std_obj::string( ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)))) + HX_(" should be ",b0,2e,91,d5));
HXDLIN(  82)			this->error((_hx_tmp + ::Std_obj::string( ::Dynamic(v2->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)))),p);
            		}
HXLINE(  83)		{
HXLINE(  83)			 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  83)			 ::hxsl::Type _g1 = v2->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  83)			if ((_g->_hx_getIndex() == 13)) {
HXLINE(  83)				if ((_g1->_hx_getIndex() == 13)) {
HXLINE(  84)					::Array< ::Dynamic> fl2 = _g1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  84)					::Array< ::Dynamic> fl1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  85)					{
HXLINE(  85)						int _g2 = 0;
HXDLIN(  85)						while((_g2 < fl1->length)){
HXLINE(  85)							 ::Dynamic f1 = fl1->__get(_g2);
HXDLIN(  85)							_g2 = (_g2 + 1);
HXLINE(  86)							 ::Dynamic ft = null();
HXLINE(  87)							{
HXLINE(  87)								int _g = 0;
HXDLIN(  87)								while((_g < fl2->length)){
HXLINE(  87)									 ::Dynamic f2 = fl2->__get(_g);
HXDLIN(  87)									_g = (_g + 1);
HXLINE(  88)									if (::hx::IsEq( f1->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),f2->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) )) {
HXLINE(  89)										ft = f2;
HXLINE(  90)										goto _hx_goto_4;
            									}
            								}
            								_hx_goto_4:;
            							}
HXLINE(  93)							if (::hx::IsNull( ft )) {
HXLINE(  94)								fl2->push(this->allocVar(f1,p,shaderName,null(),null())->v);
            							}
            							else {
HXLINE(  96)								this->mergeVar(( (::String)(((path + HX_(".",2e,00,00,00)) + ft->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) ),f1,ft,p,shaderName);
            							}
            						}
            					}
            				}
            				else {
HXLINE(  99)					if (!(__hxcpp_enum_eq( ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)), ::Dynamic(v2->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))))) {
HXLINE( 100)						::String _hx_tmp = ((((HX_("'",27,00,00,00) + path) + HX_("' type does not match : ",08,e1,be,a3)) + ::hxsl::Tools_obj::toString(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))) + HX_(" should be ",b0,2e,91,d5));
HXDLIN( 100)						this->error((_hx_tmp + ::hxsl::Tools_obj::toString(v2->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))),p);
            					}
            				}
            			}
            			else {
HXLINE(  99)				if (!(__hxcpp_enum_eq( ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)), ::Dynamic(v2->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))))) {
HXLINE( 100)					::String _hx_tmp = ((((HX_("'",27,00,00,00) + path) + HX_("' type does not match : ",08,e1,be,a3)) + ::hxsl::Tools_obj::toString(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))) + HX_(" should be ",b0,2e,91,d5));
HXDLIN( 100)					this->error((_hx_tmp + ::hxsl::Tools_obj::toString(v2->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))),p);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(Linker_obj,mergeVar,(void))

 ::hxsl::_Linker::AllocatedVar Linker_obj::allocVar( ::Dynamic v, ::Dynamic p,::String shaderName,::String path, ::hxsl::_Linker::AllocatedVar parent){
            	HX_GC_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_104_allocVar)
HXDLIN( 104)		 ::hxsl::Linker _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 105)		bool _hx_tmp;
HXDLIN( 105)		if (::hx::IsNotNull( v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic) )) {
HXLINE( 105)			_hx_tmp = ::hx::IsNull( parent );
            		}
            		else {
HXLINE( 105)			_hx_tmp = false;
            		}
HXDLIN( 105)		if (_hx_tmp) {
HXLINE( 106)			parent = this->allocVar(v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic),p,shaderName,null(),null());
HXLINE( 107)			 ::Dynamic p1 = parent->v;
HXLINE( 108)			path = ( (::String)(p1->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 109)			p1 = p1->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic);
HXLINE( 110)			while(::hx::IsNotNull( p1 )){
HXLINE( 111)				path = ( (::String)(((p1->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(".",2e,00,00,00)) + path)) );
HXLINE( 112)				p1 = p1->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic);
            			}
            		}
HXLINE( 115)		::String key;
HXDLIN( 115)		if (::hx::IsNull( path )) {
HXLINE( 115)			key = ( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 115)			key = ( (::String)(((path + HX_(".",2e,00,00,00)) + v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) );
            		}
HXLINE( 116)		if (::hx::IsNotNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE( 117)			int _g = 0;
HXDLIN( 117)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 117)			while((_g < _g1->length)){
HXLINE( 117)				 ::hxsl::VarQualifier q = _g1->__get(_g).StaticCast<  ::hxsl::VarQualifier >();
HXDLIN( 117)				_g = (_g + 1);
HXLINE( 118)				if ((q->_hx_getIndex() == 4)) {
HXLINE( 119)					::String n = q->_hx_getString(0);
HXDLIN( 119)					key = n;
            				}
            			}
            		}
HXLINE( 122)		 ::hxsl::_Linker::AllocatedVar v2 = ( ( ::hxsl::_Linker::AllocatedVar)(this->varMap->get(key)) );
HXLINE( 123)		::String vname = ( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 124)		if (::hx::IsNotNull( v2 )) {
HXLINE( 125)			{
HXLINE( 125)				int _g = 0;
HXDLIN( 125)				::Array< ::Dynamic> _g1 = v2->merged;
HXDLIN( 125)				while((_g < _g1->length)){
HXLINE( 125)					 ::Dynamic vm = _g1->__get(_g);
HXDLIN( 125)					_g = (_g + 1);
HXLINE( 126)					if (::hx::IsEq( vm,v )) {
HXLINE( 127)						return v2;
            					}
            				}
            			}
HXLINE( 131)			bool _hx_tmp;
HXDLIN( 131)			bool _hx_tmp1;
HXDLIN( 131)			bool borrowed = ::hxsl::Tools_obj::hasBorrowQualifier(v2->v,shaderName);
HXDLIN( 131)			bool _hx_tmp2;
HXDLIN( 131)			bool _hx_tmp3;
HXDLIN( 131)			bool _hx_tmp4;
HXDLIN( 131)			bool _hx_tmp5;
HXDLIN( 131)			bool _hx_tmp6;
HXDLIN( 131)			if (::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Param_dyn() )) {
HXLINE( 131)				_hx_tmp6 = !(borrowed);
            			}
            			else {
HXLINE( 131)				_hx_tmp6 = false;
            			}
HXDLIN( 131)			if (_hx_tmp6) {
HXLINE( 131)				_hx_tmp5 = !(::hxsl::Tools_obj::hasQualifier(v,::hxsl::VarQualifier_obj::Shared_dyn()));
            			}
            			else {
HXLINE( 131)				_hx_tmp5 = false;
            			}
HXDLIN( 131)			if (_hx_tmp5) {
HXLINE( 131)				_hx_tmp4 = !(_gthis->isBatchShader);
            			}
            			else {
HXLINE( 131)				_hx_tmp4 = false;
            			}
HXDLIN( 131)			if (!(_hx_tmp4)) {
HXLINE( 131)				_hx_tmp3 = ::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Function_dyn() );
            			}
            			else {
HXLINE( 131)				_hx_tmp3 = true;
            			}
HXDLIN( 131)			if (!(_hx_tmp3)) {
HXLINE( 131)				bool _hx_tmp;
HXDLIN( 131)				if (::hx::IsPointerNotEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Var_dyn() )) {
HXLINE( 131)					_hx_tmp = ::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Local_dyn() );
            				}
            				else {
HXLINE( 131)					_hx_tmp = true;
            				}
HXDLIN( 131)				if (_hx_tmp) {
HXLINE( 131)					_hx_tmp2 = ::hxsl::Tools_obj::hasQualifier(v,::hxsl::VarQualifier_obj::Private_dyn());
            				}
            				else {
HXLINE( 131)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE( 131)				_hx_tmp2 = true;
            			}
HXDLIN( 131)			if (!(_hx_tmp2)) {
HXLINE( 131)				 ::Dynamic v1 = v2->v;
HXDLIN( 131)				bool borrowed = ::hxsl::Tools_obj::hasBorrowQualifier(v,v2->rootShaderName);
HXDLIN( 131)				bool _hx_tmp;
HXDLIN( 131)				bool _hx_tmp2;
HXDLIN( 131)				bool _hx_tmp3;
HXDLIN( 131)				bool _hx_tmp4;
HXDLIN( 131)				if (::hx::IsPointerEq( v1->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Param_dyn() )) {
HXLINE( 131)					_hx_tmp4 = !(borrowed);
            				}
            				else {
HXLINE( 131)					_hx_tmp4 = false;
            				}
HXDLIN( 131)				if (_hx_tmp4) {
HXLINE( 131)					_hx_tmp3 = !(::hxsl::Tools_obj::hasQualifier(v1,::hxsl::VarQualifier_obj::Shared_dyn()));
            				}
            				else {
HXLINE( 131)					_hx_tmp3 = false;
            				}
HXDLIN( 131)				if (_hx_tmp3) {
HXLINE( 131)					_hx_tmp2 = !(_gthis->isBatchShader);
            				}
            				else {
HXLINE( 131)					_hx_tmp2 = false;
            				}
HXDLIN( 131)				if (!(_hx_tmp2)) {
HXLINE( 131)					_hx_tmp = ::hx::IsPointerEq( v1->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Function_dyn() );
            				}
            				else {
HXLINE( 131)					_hx_tmp = true;
            				}
HXDLIN( 131)				if (!(_hx_tmp)) {
HXLINE( 131)					bool _hx_tmp;
HXDLIN( 131)					if (::hx::IsPointerNotEq( v1->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Var_dyn() )) {
HXLINE( 131)						_hx_tmp = ::hx::IsPointerEq( v1->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Local_dyn() );
            					}
            					else {
HXLINE( 131)						_hx_tmp = true;
            					}
HXDLIN( 131)					if (_hx_tmp) {
HXLINE( 131)						_hx_tmp1 = ::hxsl::Tools_obj::hasQualifier(v1,::hxsl::VarQualifier_obj::Private_dyn());
            					}
            					else {
HXLINE( 131)						_hx_tmp1 = false;
            					}
            				}
            				else {
HXLINE( 131)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 131)				_hx_tmp1 = true;
            			}
HXDLIN( 131)			if (!(_hx_tmp1)) {
HXLINE( 131)				if (::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Param_dyn() )) {
HXLINE( 131)					_hx_tmp = ::hx::IsPointerEq( v2->v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Param_dyn() );
            				}
            				else {
HXLINE( 131)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 131)				_hx_tmp = true;
            			}
HXDLIN( 131)			if (_hx_tmp) {
HXLINE( 133)				int k = 2;
HXLINE( 134)				while(true){
HXLINE( 135)					 ::hxsl::_Linker::AllocatedVar a = ( ( ::hxsl::_Linker::AllocatedVar)(this->varMap->get((key + k))) );
HXLINE( 136)					if (::hx::IsNull( a )) {
HXLINE( 136)						goto _hx_goto_9;
            					}
HXLINE( 137)					{
HXLINE( 137)						int _g = 0;
HXDLIN( 137)						::Array< ::Dynamic> _g1 = a->merged;
HXDLIN( 137)						while((_g < _g1->length)){
HXLINE( 137)							 ::Dynamic vm = _g1->__get(_g);
HXDLIN( 137)							_g = (_g + 1);
HXLINE( 138)							if (::hx::IsEq( vm,v )) {
HXLINE( 139)								return a;
            							}
            						}
            					}
HXLINE( 140)					k = (k + 1);
            				}
            				_hx_goto_9:;
HXLINE( 142)				vname = (vname + k);
HXLINE( 143)				key = (key + k);
            			}
            			else {
HXLINE( 145)				v2->merged->push(v);
HXLINE( 146)				this->mergeVar(key,v,v2->v,p,v2->rootShaderName);
HXLINE( 147)				this->varIdMap->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),v2->id);
HXLINE( 148)				return v2;
            			}
            		}
HXLINE( 151)		int vid = (this->allVars->length + 1);
HXLINE( 158)		 ::Dynamic v21;
HXDLIN( 158)		if (::hx::IsNull( parent )) {
HXLINE( 158)			v21 = null();
            		}
            		else {
HXLINE( 158)			v21 = parent->v;
            		}
HXLINE( 152)		 ::Dynamic v22 =  ::Dynamic(::hx::Anon_obj::Create(6)
            			->setFixed(0,HX_("parent",2a,05,7e,ed),v21)
            			->setFixed(1,HX_("id",db,5b,00,00),vid)
            			->setFixed(2,HX_("kind",54,e1,09,47), ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)))
            			->setFixed(3,HX_("name",4b,72,ff,48),vname)
            			->setFixed(4,HX_("type",ba,f2,08,4d), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))
            			->setFixed(5,HX_("qualifiers",09,bb,6b,7c), ::Dynamic(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic))));
HXLINE( 160)		 ::hxsl::_Linker::AllocatedVar a =  ::hxsl::_Linker::AllocatedVar_obj::__alloc( HX_CTX );
HXLINE( 161)		a->v = v22;
HXLINE( 162)		a->merged = ::Array_obj< ::Dynamic>::__new(1)->init(0,v);
HXLINE( 163)		a->path = key;
HXLINE( 164)		a->id = vid;
HXLINE( 165)		a->parent = parent;
HXLINE( 166)		a->instanceIndex = this->curInstance;
HXLINE( 167)		a->rootShaderName = shaderName;
HXLINE( 168)		this->allVars->push(a);
HXLINE( 169)		this->varMap->set(key,a);
HXLINE( 170)		{
HXLINE( 170)			 ::hxsl::Type _g = v22->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 170)			if ((_g->_hx_getIndex() == 13)) {
HXLINE( 171)				::Array< ::Dynamic> vl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 172)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 172)				{
HXLINE( 172)					int _g2 = 0;
HXDLIN( 172)					while((_g2 < vl->length)){
HXLINE( 172)						 ::Dynamic v = vl->__get(_g2);
HXDLIN( 172)						_g2 = (_g2 + 1);
HXDLIN( 172)						_g1->push(this->allocVar(v,p,shaderName,key,a)->v);
            					}
            				}
HXDLIN( 172)				v22->__SetField(HX_("type",ba,f2,08,4d),::hxsl::Type_obj::TStruct(_g1),::hx::paccDynamic);
            			}
            		}
HXLINE( 175)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Linker_obj,allocVar,return )

 ::Dynamic Linker_obj::mapExprVar( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_178_mapExprVar)
HXLINE( 179)		{
HXLINE( 179)			 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 179)			switch((int)(_g->_hx_getIndex())){
            				case (int)1: {
HXLINE( 180)					 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 180)					if (!(this->locals->exists(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) )))) {
HXLINE( 181)						 ::hxsl::_Linker::AllocatedVar v1 = this->allocVar(v,e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic),null(),null(),null());
HXLINE( 182)						bool _hx_tmp;
HXDLIN( 182)						if (::hx::IsNotNull( this->curShader )) {
HXLINE( 182)							_hx_tmp = !(this->curShader->write->exists(v1->id));
            						}
            						else {
HXLINE( 182)							_hx_tmp = false;
            						}
HXDLIN( 182)						if (_hx_tmp) {
HXLINE( 184)							this->curShader->read->set(v1->id,v1);
HXLINE( 186)							bool _hx_tmp;
HXDLIN( 186)							if (::hx::IsNull( this->curShader->vertex )) {
HXLINE( 186)								_hx_tmp = ::hx::IsPointerEq( v1->v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Var_dyn() );
            							}
            							else {
HXLINE( 186)								_hx_tmp = false;
            							}
HXDLIN( 186)							if (_hx_tmp) {
HXLINE( 188)								this->curShader->vertex = false;
            							}
            						}
HXLINE( 191)						return  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(v1->v))
            							->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            							->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(v1->v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 192)					 ::haxe::macro::Binop op = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 192)					 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 192)					 ::Dynamic e2 = _g->_hx_getObject(2);
HXLINE( 193)					{
HXLINE( 193)						 ::hxsl::TExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 193)						switch((int)(op->_hx_getIndex())){
            							case (int)4: {
HXLINE( 193)								switch((int)(_g1->_hx_getIndex())){
            									case (int)1: {
HXLINE( 203)										 ::Dynamic _g = _g1->_hx_getObject(0);
HXLINE( 194)										{
HXLINE( 194)											 ::Dynamic v = _g;
HXDLIN( 194)											if (!(this->locals->exists(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) )))) {
HXLINE( 195)												 ::Dynamic e21 = this->mapExprVar(e2);
HXLINE( 196)												 ::hxsl::_Linker::AllocatedVar v1 = this->allocVar(v,e1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic),null(),null(),null());
HXLINE( 197)												if (::hx::IsNotNull( this->curShader )) {
HXLINE( 199)													this->curShader->write->set(v1->id,v1);
            												}
HXLINE( 202)												return  ::Dynamic(::hx::Anon_obj::Create(3)
            													->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(op, ::Dynamic(::hx::Anon_obj::Create(3)
            														->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(v1->v))
            														->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            														->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(v1->v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),e21))
            													->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            													->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            											}
            											else {
HXLINE( 203)												 ::Dynamic v = _g;
HXDLIN( 203)												if (!(this->locals->exists(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) )))) {
HXLINE( 205)													 ::Dynamic e11 = this->mapExprVar(e1);
HXLINE( 206)													 ::Dynamic e21 = this->mapExprVar(e2);
HXLINE( 208)													 ::hxsl::_Linker::AllocatedVar v1 = this->allocVar(v,e11->__Field(HX_("p",70,00,00,00),::hx::paccDynamic),null(),null(),null());
HXLINE( 209)													if (::hx::IsNotNull( this->curShader )) {
HXLINE( 212)														this->curShader->write->set(v1->id,v1);
            													}
HXLINE( 214)													return  ::Dynamic(::hx::Anon_obj::Create(3)
            														->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(op,e11,e21))
            														->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            														->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            												}
            											}
            										}
            									}
            									break;
            									case (int)9: {
HXLINE( 203)										 ::Dynamic _g = _g1->_hx_getObject(0);
HXDLIN( 203)										::Array< ::Dynamic> _g2 = _g1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 203)										{
HXLINE( 203)											 ::hxsl::TExprDef _g3 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 203)											 ::Dynamic _g4 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 203)											 ::hxsl::Type _g5 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 203)											if ((_g3->_hx_getIndex() == 1)) {
HXLINE( 203)												 ::Dynamic v = _g3->_hx_getObject(0);
HXDLIN( 203)												if (!(this->locals->exists(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) )))) {
HXLINE( 205)													 ::Dynamic e11 = this->mapExprVar(e1);
HXLINE( 206)													 ::Dynamic e21 = this->mapExprVar(e2);
HXLINE( 208)													 ::hxsl::_Linker::AllocatedVar v1 = this->allocVar(v,e11->__Field(HX_("p",70,00,00,00),::hx::paccDynamic),null(),null(),null());
HXLINE( 209)													if (::hx::IsNotNull( this->curShader )) {
HXLINE( 212)														this->curShader->write->set(v1->id,v1);
            													}
HXLINE( 214)													return  ::Dynamic(::hx::Anon_obj::Create(3)
            														->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(op,e11,e21))
            														->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            														->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            												}
            											}
            										}
            									}
            									break;
            									default:{
            									}
            								}
            							}
            							break;
            							case (int)20: {
HXLINE( 203)								 ::haxe::macro::Binop _g = op->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXLINE( 193)								switch((int)(_g1->_hx_getIndex())){
            									case (int)1: {
HXLINE( 203)										 ::Dynamic v = _g1->_hx_getObject(0);
HXDLIN( 203)										if (!(this->locals->exists(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) )))) {
HXLINE( 205)											 ::Dynamic e11 = this->mapExprVar(e1);
HXLINE( 206)											 ::Dynamic e21 = this->mapExprVar(e2);
HXLINE( 208)											 ::hxsl::_Linker::AllocatedVar v1 = this->allocVar(v,e11->__Field(HX_("p",70,00,00,00),::hx::paccDynamic),null(),null(),null());
HXLINE( 209)											if (::hx::IsNotNull( this->curShader )) {
HXLINE( 212)												this->curShader->write->set(v1->id,v1);
            											}
HXLINE( 214)											return  ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(op,e11,e21))
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            										}
            									}
            									break;
            									case (int)9: {
HXLINE( 203)										 ::Dynamic _g = _g1->_hx_getObject(0);
HXDLIN( 203)										::Array< ::Dynamic> _g2 = _g1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 203)										{
HXLINE( 203)											 ::hxsl::TExprDef _g3 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 203)											 ::Dynamic _g4 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 203)											 ::hxsl::Type _g5 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 203)											if ((_g3->_hx_getIndex() == 1)) {
HXLINE( 203)												 ::Dynamic v = _g3->_hx_getObject(0);
HXDLIN( 203)												if (!(this->locals->exists(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) )))) {
HXLINE( 205)													 ::Dynamic e11 = this->mapExprVar(e1);
HXLINE( 206)													 ::Dynamic e21 = this->mapExprVar(e2);
HXLINE( 208)													 ::hxsl::_Linker::AllocatedVar v1 = this->allocVar(v,e11->__Field(HX_("p",70,00,00,00),::hx::paccDynamic),null(),null(),null());
HXLINE( 209)													if (::hx::IsNotNull( this->curShader )) {
HXLINE( 212)														this->curShader->write->set(v1->id,v1);
            													}
HXLINE( 214)													return  ::Dynamic(::hx::Anon_obj::Create(3)
            														->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(op,e11,e21))
            														->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            														->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            												}
            											}
            										}
            									}
            									break;
            									default:{
            									}
            								}
            							}
            							break;
            							default:{
            							}
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 222)					 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 222)					{
HXLINE( 222)						 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 223)						this->locals->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),true);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 218)					if (::hx::IsNotNull( this->curShader )) {
HXLINE( 219)						this->curShader->vertex = false;
HXLINE( 220)						this->curShader->hasDiscard = true;
            					}
            				}
            				break;
            				case (int)13: {
HXLINE( 224)					 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 224)					 ::Dynamic _g2 = _g->_hx_getObject(2);
HXDLIN( 224)					{
HXLINE( 224)						 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 225)						this->locals->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),true);
            					}
            				}
            				break;
            				default:{
            				}
            			}
            		}
HXLINE( 228)		return ::hxsl::Tools_obj::map(e,this->mapExprVar_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Linker_obj,mapExprVar,return )

 ::hxsl::_Linker::ShaderInfos Linker_obj::addShader(::String name, ::Dynamic vertex, ::Dynamic e,int p){
            	HX_GC_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_231_addShader)
HXLINE( 232)		 ::hxsl::_Linker::ShaderInfos s =  ::hxsl::_Linker::ShaderInfos_obj::__alloc( HX_CTX ,name,vertex);
HXLINE( 233)		this->curShader = s;
HXLINE( 234)		s->priority = p;
HXLINE( 235)		s->body = this->mapExprVar(e);
HXLINE( 236)		this->shaders->push(s);
HXLINE( 237)		this->curShader = null();
HXLINE( 239)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Linker_obj,addShader,return )

int Linker_obj::sortByPriorityDesc( ::hxsl::_Linker::ShaderInfos s1, ::hxsl::_Linker::ShaderInfos s2){
            	HX_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_242_sortByPriorityDesc)
HXLINE( 243)		if ((s1->priority == s2->priority)) {
HXLINE( 244)			return (s1->uid - s2->uid);
            		}
HXLINE( 245)		return (s2->priority - s1->priority);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Linker_obj,sortByPriorityDesc,return )

void Linker_obj::buildDependency( ::hxsl::_Linker::ShaderInfos s, ::hxsl::_Linker::AllocatedVar v,bool isWritten){
            	HX_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_248_buildDependency)
HXLINE( 249)		bool found = !(isWritten);
HXLINE( 250)		{
HXLINE( 250)			int _g = 0;
HXDLIN( 250)			::Array< ::Dynamic> _g1 = this->shaders;
HXDLIN( 250)			while((_g < _g1->length)){
HXLINE( 250)				 ::hxsl::_Linker::ShaderInfos parent = _g1->__get(_g).StaticCast<  ::hxsl::_Linker::ShaderInfos >();
HXDLIN( 250)				_g = (_g + 1);
HXLINE( 251)				if (::hx::IsInstanceEq( parent,s )) {
HXLINE( 252)					found = true;
HXLINE( 253)					continue;
            				}
            				else {
HXLINE( 254)					if (!(found)) {
HXLINE( 255)						continue;
            					}
            				}
HXLINE( 256)				if (!(parent->write->exists(v->id))) {
HXLINE( 257)					continue;
            				}
HXLINE( 258)				if (( (bool)(s->vertex) )) {
HXLINE( 259)					if (::hx::IsEq( parent->vertex,false )) {
HXLINE( 260)						continue;
            					}
HXLINE( 261)					if (::hx::IsNull( parent->vertex )) {
HXLINE( 262)						parent->vertex = true;
            					}
            				}
HXLINE( 265)				s->deps->set(parent,true);
HXLINE( 266)				this->debugDepth++;
HXLINE( 267)				this->initDependencies(parent);
HXLINE( 268)				this->debugDepth--;
HXLINE( 269)				if (!(parent->read->exists(v->id))) {
HXLINE( 270)					return;
            				}
            			}
            		}
HXLINE( 272)		if (::hx::IsPointerEq( v->v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Var_dyn() )) {
HXLINE( 273)			this->error(((((HX_("Variable ",44,c2,35,24) + v->path) + HX_(" required by ",48,77,11,26)) + s->name) + HX_(" is missing initializer",52,22,e0,67)),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Linker_obj,buildDependency,(void))

void Linker_obj::initDependencies( ::hxsl::_Linker::ShaderInfos s){
            	HX_GC_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_276_initDependencies)
HXLINE( 277)		if (::hx::IsNotNull( s->deps )) {
HXLINE( 278)			return;
            		}
HXLINE( 279)		s->deps =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 280)		{
HXLINE( 280)			 ::Dynamic r = s->read->iterator();
HXDLIN( 280)			while(( (bool)(r->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 280)				 ::hxsl::_Linker::AllocatedVar r1 = ( ( ::hxsl::_Linker::AllocatedVar)(r->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 281)				this->buildDependency(s,r1,s->write->exists(r1->id));
            			}
            		}
HXLINE( 283)		if (::hx::IsNull( s->vertex )) {
HXLINE( 284)			 ::Dynamic d = s->deps->keys();
HXDLIN( 284)			while(( (bool)(d->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 284)				 ::hxsl::_Linker::ShaderInfos d1 = ( ( ::hxsl::_Linker::ShaderInfos)(d->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 285)				if (::hx::IsEq( d1->vertex,false )) {
HXLINE( 287)					s->vertex = false;
HXLINE( 288)					goto _hx_goto_19;
            				}
            			}
            			_hx_goto_19:;
            		}
HXLINE( 291)		if (( (bool)(s->vertex) )) {
HXLINE( 292)			 ::Dynamic d = s->deps->keys();
HXDLIN( 292)			while(( (bool)(d->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 292)				 ::hxsl::_Linker::ShaderInfos d1 = ( ( ::hxsl::_Linker::ShaderInfos)(d->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 293)				if (::hx::IsNull( d1->vertex )) {
HXLINE( 295)					d1->vertex = true;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Linker_obj,initDependencies,(void))

void Linker_obj::collect( ::hxsl::_Linker::ShaderInfos cur,::Array< ::Dynamic> out,bool vertex){
            	HX_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_299_collect)
HXLINE( 300)		if (cur->onStack) {
HXLINE( 301)			this->error(((HX_("Loop in shader dependencies (",6d,d7,ec,f5) + cur->name) + HX_(")",29,00,00,00)),null());
            		}
HXLINE( 302)		if (::hx::IsEq( cur->marked,vertex )) {
HXLINE( 303)			return;
            		}
HXLINE( 304)		cur->marked = vertex;
HXLINE( 305)		cur->onStack = true;
HXLINE( 306)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 306)		{
HXLINE( 306)			 ::Dynamic d = cur->deps->keys();
HXDLIN( 306)			while(( (bool)(d->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 306)				 ::hxsl::_Linker::ShaderInfos d1 = ( ( ::hxsl::_Linker::ShaderInfos)(d->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 306)				_g->push(d1);
            			}
            		}
HXDLIN( 306)		::Array< ::Dynamic> deps = _g;
HXLINE( 307)		deps->sort(this->sortByPriorityDesc_dyn());
HXLINE( 308)		{
HXLINE( 308)			int _g1 = 0;
HXDLIN( 308)			while((_g1 < deps->length)){
HXLINE( 308)				 ::hxsl::_Linker::ShaderInfos d = deps->__get(_g1).StaticCast<  ::hxsl::_Linker::ShaderInfos >();
HXDLIN( 308)				_g1 = (_g1 + 1);
HXLINE( 309)				this->collect(d,out,vertex);
            			}
            		}
HXLINE( 310)		if (::hx::IsNull( cur->vertex )) {
HXLINE( 312)			cur->vertex = vertex;
            		}
HXLINE( 314)		if (::hx::IsEq( cur->vertex,vertex )) {
HXLINE( 316)			out->push(cur);
            		}
HXLINE( 318)		cur->onStack = false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Linker_obj,collect,(void))

void Linker_obj::uniqueLocals( ::Dynamic expr, ::haxe::ds::StringMap locals){
            	HX_GC_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_322_uniqueLocals)
HXDLIN( 322)		 ::hxsl::TExprDef _g = expr->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 322)		switch((int)(_g->_hx_getIndex())){
            			case (int)4: {
HXLINE( 331)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 331)				{
HXLINE( 332)					 ::haxe::ds::StringMap _g1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 332)					{
HXLINE( 332)						 ::Dynamic k = locals->keys();
HXDLIN( 332)						while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 332)							::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 332)							_g1->set(k1,true);
            						}
            					}
HXDLIN( 332)					 ::haxe::ds::StringMap locals1 = _g1;
HXLINE( 333)					{
HXLINE( 333)						int _g2 = 0;
HXDLIN( 333)						while((_g2 < el->length)){
HXLINE( 333)							 ::Dynamic e = el->__get(_g2);
HXDLIN( 333)							_g2 = (_g2 + 1);
HXLINE( 334)							this->uniqueLocals(e,locals1);
            						}
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 323)				 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 323)				{
HXLINE( 323)					 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 323)					{
HXLINE( 324)						if (locals->exists(( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ))) {
HXLINE( 325)							int k = 2;
HXLINE( 326)							while(locals->exists(( (::String)((v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + k)) ))){
HXLINE( 327)								k = (k + 1);
            							}
HXLINE( 328)							 ::Dynamic v1 = v;
HXDLIN( 328)							v1->__SetField(HX_("name",4b,72,ff,48),(v1->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + k),::hx::paccDynamic);
            						}
HXLINE( 330)						locals->set(( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),true);
            					}
            				}
            			}
            			break;
            			default:{
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ds::StringMap,locals1, ::Dynamic,_g) HXARGC(1)
            				void _hx_run( ::Dynamic expr){
            					HX_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_336_uniqueLocals)
HXLINE( 336)					_g(expr,locals1);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 336)				 ::Dynamic _g = this->uniqueLocals_dyn();
HXDLIN( 336)				 ::haxe::ds::StringMap locals1 = locals;
HXDLIN( 336)				::hxsl::Tools_obj::iter(expr, ::Dynamic(new _hx_Closure_0(locals1,_g)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Linker_obj,uniqueLocals,(void))

 ::Dynamic Linker_obj::link(::Array< ::Dynamic> shadersData){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::haxe::ds::IntMap,varMap,::Array< ::Dynamic>,addVar,::Array< ::Dynamic>,outVars1) HXARGC(1)
            		void _hx_run( ::hxsl::_Linker::AllocatedVar v){
            			HX_GC_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_461_link)
HXLINE( 462)			if (varMap->exists(v->id)) {
HXLINE( 463)				return;
            			}
HXLINE( 464)			varMap->set(v->id,true);
HXLINE( 465)			if (::hx::IsNotNull( v->v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic) )) {
HXLINE( 466)				addVar->__get(0)(v->parent);
            			}
            			else {
HXLINE( 468)				outVars1->push(v->v);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::haxe::ds::IntMap,varMap,::Array< ::Dynamic>,cleanVar) HXARGC(1)
            		void _hx_run( ::Dynamic v){
            			HX_GC_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_478_link)
HXLINE( 478)			 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 478)			if ((_g->_hx_getIndex() == 13)) {
HXLINE( 479)				::Array< ::Dynamic> vl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 479)				if (::hx::IsPointerNotEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Input_dyn() )) {
HXLINE( 480)					::Array< ::Dynamic> vout = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 481)					{
HXLINE( 481)						int _g = 0;
HXDLIN( 481)						while((_g < vl->length)){
HXLINE( 481)							 ::Dynamic v = vl->__get(_g);
HXDLIN( 481)							_g = (_g + 1);
HXLINE( 482)							if (varMap->exists(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ))) {
HXLINE( 483)								cleanVar->__get(0)(v);
HXLINE( 484)								vout->push(v);
            							}
            						}
            					}
HXLINE( 486)					v->__SetField(HX_("type",ba,f2,08,4d),::hxsl::Type_obj::TStruct(vout),::hx::paccDynamic);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::hxsl::Linker,_gthis,::Array< ::Dynamic>,outVars1) HXARGC(3)
            		 ::Dynamic _hx_run( ::hxsl::FunctionKind kind,::String name,::Array< ::Dynamic> a){
            			HX_GC_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_493_link)
HXLINE( 495)			int v = ::hxsl::Tools_obj::allocVarId();
HXLINE( 494)			 ::Dynamic v1 =  ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("id",db,5b,00,00),v)
            				->setFixed(1,HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Function_dyn())
            				->setFixed(2,HX_("name",4b,72,ff,48),name)
            				->setFixed(3,HX_("type",ba,f2,08,4d),::hxsl::Type_obj::TFun(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ret",61,d9,56,00),::hxsl::Type_obj::TVoid_dyn())
            					->setFixed(1,HX_("args",5d,8d,74,40),::Array_obj< ::Dynamic>::__new(0)))))));
HXLINE( 500)			outVars1->push(v1);
HXLINE( 501)			::Array< ::Dynamic> exprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 502)			{
HXLINE( 502)				int _g = 0;
HXDLIN( 502)				while((_g < a->length)){
HXLINE( 502)					 ::hxsl::_Linker::ShaderInfos s = a->__get(_g).StaticCast<  ::hxsl::_Linker::ShaderInfos >();
HXDLIN( 502)					_g = (_g + 1);
HXLINE( 503)					{
HXLINE( 503)						 ::hxsl::TExprDef _g1 = s->body->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 503)						if ((_g1->_hx_getIndex() == 4)) {
HXLINE( 504)							::Array< ::Dynamic> el = _g1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 505)							{
HXLINE( 505)								int _g = 0;
HXDLIN( 505)								while((_g < el->length)){
HXLINE( 505)									 ::Dynamic e = el->__get(_g);
HXDLIN( 505)									_g = (_g + 1);
HXDLIN( 505)									exprs->push(e);
            								}
            							}
            						}
            						else {
HXLINE( 507)							exprs->push(s->body);
            						}
            					}
            				}
            			}
HXLINE( 509)			 ::Dynamic expr;
HXDLIN( 509)			if ((exprs->length == 0)) {
HXLINE( 509)				expr = null();
            			}
            			else {
HXLINE( 509)				expr = exprs->__get(0)->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
            			}
HXDLIN( 509)			 ::Dynamic expr1 =  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBlock(exprs))
            				->setFixed(1,HX_("p",70,00,00,00),expr)
            				->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
HXLINE( 510)			 ::hxsl::Linker _gthis1 = _gthis;
HXDLIN( 510)			_gthis1->uniqueLocals(expr1, ::haxe::ds::StringMap_obj::__alloc( HX_CTX ));
HXLINE( 511)			return  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("ref",53,d9,56,00),v1)
            				->setFixed(1,HX_("ret",61,d9,56,00),::hxsl::Type_obj::TVoid_dyn())
            				->setFixed(2,HX_("args",5d,8d,74,40),::Array_obj< ::Dynamic>::__new(0))
            				->setFixed(3,HX_("expr",35,fd,1d,43),expr1)
            				->setFixed(4,HX_("kind",54,e1,09,47),kind));
            		}
            		HX_END_LOCAL_FUNC3(return)

            	HX_GC_STACKFRAME(&_hx_pos_718c3d3b479ac4ab_340_link)
HXDLIN( 340)		 ::hxsl::Linker _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 342)		this->varMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 343)		this->varIdMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 344)		this->allVars = ::Array_obj< ::Dynamic>::__new();
HXLINE( 345)		this->shaders = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 346)		this->locals =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 348)		 ::haxe::ds::ObjectMap dupShaders =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 349)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 349)		int _g1 = 0;
HXDLIN( 349)		while((_g1 < shadersData->length)){
HXLINE( 349)			 ::Dynamic s = shadersData->__get(_g1);
HXDLIN( 349)			_g1 = (_g1 + 1);
HXLINE( 350)			 ::Dynamic s1 = s;
HXDLIN( 350)			 ::Dynamic sreal = s1;
HXLINE( 351)			if (dupShaders->exists(s1)) {
HXLINE( 352)				s1 = ::hxsl::Clone_obj::shaderData(s1);
            			}
HXLINE( 353)			dupShaders->set(s1,sreal);
HXLINE( 354)			_g->push(s1);
            		}
HXLINE( 349)		shadersData = _g;
HXLINE( 358)		this->curInstance = 0;
HXLINE( 359)		::Array< ::Dynamic> outVars = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 360)		{
HXLINE( 360)			int _g2 = 0;
HXDLIN( 360)			while((_g2 < shadersData->length)){
HXLINE( 360)				 ::Dynamic s = shadersData->__get(_g2);
HXDLIN( 360)				_g2 = (_g2 + 1);
HXLINE( 361)				bool _hx_tmp;
HXDLIN( 361)				if (this->batchMode) {
HXLINE( 361)					_hx_tmp = ::StringTools_obj::startsWith(( (::String)(s->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),HX_("batchShader_",00,8d,fe,1d));
            				}
            				else {
HXLINE( 361)					_hx_tmp = false;
            				}
HXDLIN( 361)				this->isBatchShader = _hx_tmp;
HXLINE( 362)				{
HXLINE( 362)					int _g = 0;
HXDLIN( 362)					::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN( 362)					while((_g < _g1->length)){
HXLINE( 362)						 ::Dynamic v = _g1->__get(_g);
HXDLIN( 362)						_g = (_g + 1);
HXLINE( 363)						 ::hxsl::_Linker::AllocatedVar v2 = this->allocVar(v,null(),( (::String)(s->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),null(),null());
HXLINE( 364)						bool _hx_tmp;
HXDLIN( 364)						bool _hx_tmp1;
HXDLIN( 364)						if (this->isBatchShader) {
HXLINE( 364)							_hx_tmp1 = ::hx::IsPointerEq( v2->v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Param_dyn() );
            						}
            						else {
HXLINE( 364)							_hx_tmp1 = false;
            						}
HXDLIN( 364)						if (_hx_tmp1) {
HXLINE( 364)							_hx_tmp = !(::StringTools_obj::startsWith(v2->path,HX_("Batch_",85,4f,64,8a)));
            						}
            						else {
HXLINE( 364)							_hx_tmp = false;
            						}
HXDLIN( 364)						if (_hx_tmp) {
HXLINE( 365)							v2->v->__SetField(HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Local_dyn(),::hx::paccDynamic);
            						}
HXLINE( 366)						if (::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Output_dyn() )) {
HXLINE( 366)							outVars->push(v);
            						}
            					}
            				}
HXLINE( 368)				{
HXLINE( 368)					int _g3 = 0;
HXDLIN( 368)					::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(s->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN( 368)					while((_g3 < _g4->length)){
HXLINE( 368)						 ::Dynamic f = _g4->__get(_g3);
HXDLIN( 368)						_g3 = (_g3 + 1);
HXLINE( 369)						 ::hxsl::_Linker::AllocatedVar v = this->allocVar(f->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic), ::Dynamic(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic),null(),null(),null());
HXLINE( 370)						v->kind = f->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic);
            					}
            				}
HXLINE( 372)				this->curInstance++;
            			}
            		}
HXLINE( 376)		int priority = 0;
HXLINE( 377)		::Array< int > initPrio_init = ::Array_obj< int >::fromData( _hx_array_data_fb12c12c_58,1);
HXDLIN( 377)		::Array< int > initPrio_vert = ::Array_obj< int >::fromData( _hx_array_data_fb12c12c_59,1);
HXDLIN( 377)		::Array< int > initPrio_frag = ::Array_obj< int >::fromData( _hx_array_data_fb12c12c_60,1);
HXLINE( 382)		{
HXLINE( 382)			int _g3 = 0;
HXDLIN( 382)			while((_g3 < shadersData->length)){
HXLINE( 382)				 ::Dynamic s = shadersData->__get(_g3);
HXDLIN( 382)				_g3 = (_g3 + 1);
HXLINE( 383)				{
HXLINE( 383)					int _g = 0;
HXDLIN( 383)					::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(s->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN( 383)					while((_g < _g1->length)){
HXLINE( 383)						 ::Dynamic f = _g1->__get(_g);
HXDLIN( 383)						_g = (_g + 1);
HXLINE( 384)						 ::hxsl::_Linker::AllocatedVar v = this->allocVar(f->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic), ::Dynamic(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic),null(),null(),null());
HXLINE( 385)						if (::hx::IsNull( v->kind )) {
HXLINE( 385)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            						}
HXLINE( 386)						switch((int)(v->kind->_hx_getIndex())){
            							case (int)0: case (int)1: {
HXLINE( 388)								::String _hx_tmp;
HXDLIN( 388)								if (::hx::IsPointerEq( v->kind,::hxsl::FunctionKind_obj::Vertex_dyn() )) {
HXLINE( 388)									_hx_tmp = HX_("vertex",64,db,47,a1);
            								}
            								else {
HXLINE( 388)									_hx_tmp = HX_("fragment",d0,5f,e5,ad);
            								}
HXDLIN( 388)								this->addShader(( (::String)(((s->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(".",2e,00,00,00)) + _hx_tmp)) ),::hx::IsPointerEq( v->kind,::hxsl::FunctionKind_obj::Vertex_dyn() ),f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),priority);
            							}
            							break;
            							case (int)2: {
HXLINE( 391)								::Array< int > prio;
HXLINE( 392)								 ::Dynamic status;
HXDLIN( 392)								::String _hx_switch_0 = ( (::String)( ::Dynamic(f->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic))->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
            								if (  (_hx_switch_0==HX_("__init__fragment",20,0d,77,b3)) ){
HXLINE( 394)									prio = initPrio_frag;
HXLINE( 392)									status = false;
HXLINE( 394)									goto _hx_goto_36;
            								}
            								if (  (_hx_switch_0==HX_("__init__vertex",b4,94,3c,35)) ){
HXLINE( 393)									prio = initPrio_vert;
HXLINE( 392)									status = true;
HXLINE( 393)									goto _hx_goto_36;
            								}
            								/* default */{
HXLINE( 395)									prio = initPrio_init;
HXLINE( 392)									status = null();
            								}
            								_hx_goto_36:;
HXLINE( 397)								{
HXLINE( 397)									 ::hxsl::TExprDef _g =  ::Dynamic(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 397)									if ((_g->_hx_getIndex() == 4)) {
HXLINE( 398)										::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 398)										{
HXLINE( 399)											int index = 0;
HXLINE( 400)											{
HXLINE( 400)												int _g1 = 0;
HXDLIN( 400)												while((_g1 < el->length)){
HXLINE( 400)													 ::Dynamic e = el->__get(_g1);
HXDLIN( 400)													_g1 = (_g1 + 1);
HXLINE( 401)													index = (index + 1);
HXDLIN( 401)													this->addShader(( (::String)((((s->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(".",2e,00,00,00)) +  ::Dynamic(f->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic))->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) + (index - 1))) ),status,e,prio[0]++);
            												}
            											}
            										}
            									}
            									else {
HXLINE( 403)										this->addShader(( (::String)(((s->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(".",2e,00,00,00)) +  ::Dynamic(f->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic))->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) ),status,f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),prio[0]++);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 406)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((HX_("Unexpected helper function in linker ",43,a4,1e,d3) + v->v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))));
            							}
            							break;
            						}
            					}
            				}
HXLINE( 409)				priority = (priority + 1);
            			}
            		}
HXLINE( 411)		this->shaders->sort(this->sortByPriorityDesc_dyn());
HXLINE( 414)		 ::hxsl::_Linker::ShaderInfos entry =  ::hxsl::_Linker::ShaderInfos_obj::__alloc( HX_CTX ,HX_("<entry>",c8,c0,2a,c4),false);
HXLINE( 415)		entry->deps =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 416)		{
HXLINE( 416)			int _g4 = 0;
HXDLIN( 416)			while((_g4 < outVars->length)){
HXLINE( 416)				 ::Dynamic v = outVars->__get(_g4);
HXDLIN( 416)				_g4 = (_g4 + 1);
HXLINE( 417)				this->buildDependency(entry,this->allocVar(v,null(),null(),null(),null()),false);
            			}
            		}
HXLINE( 420)		{
HXLINE( 420)			int _g5 = 0;
HXDLIN( 420)			::Array< ::Dynamic> _g6 = this->shaders;
HXDLIN( 420)			while((_g5 < _g6->length)){
HXLINE( 420)				 ::hxsl::_Linker::ShaderInfos s = _g6->__get(_g5).StaticCast<  ::hxsl::_Linker::ShaderInfos >();
HXDLIN( 420)				_g5 = (_g5 + 1);
HXLINE( 421)				if (s->hasDiscard) {
HXLINE( 422)					this->initDependencies(s);
HXLINE( 423)					entry->deps->set(s,true);
            				}
            			}
            		}
HXLINE( 428)		{
HXLINE( 428)			int _g7 = 0;
HXDLIN( 428)			::Array< ::Dynamic> _g8 = this->shaders;
HXDLIN( 428)			while((_g7 < _g8->length)){
HXLINE( 428)				 ::hxsl::_Linker::ShaderInfos s = _g8->__get(_g7).StaticCast<  ::hxsl::_Linker::ShaderInfos >();
HXDLIN( 428)				_g7 = (_g7 + 1);
HXLINE( 429)				if (::hx::IsNotNull( s->vertex )) {
HXLINE( 429)					continue;
            				}
HXLINE( 430)				bool onlyParams = true;
HXLINE( 431)				{
HXLINE( 431)					 ::Dynamic r = s->read->iterator();
HXDLIN( 431)					while(( (bool)(r->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 431)						 ::hxsl::_Linker::AllocatedVar r1 = ( ( ::hxsl::_Linker::AllocatedVar)(r->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 432)						if (::hx::IsPointerNotEq( r1->v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Param_dyn() )) {
HXLINE( 433)							onlyParams = false;
HXLINE( 434)							goto _hx_goto_41;
            						}
            					}
            					_hx_goto_41:;
            				}
HXLINE( 436)				if (onlyParams) {
HXLINE( 438)					s->vertex = false;
            				}
            			}
            		}
HXLINE( 443)		::Array< ::Dynamic> v = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 443)		::Array< ::Dynamic> f = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 444)		this->collect(entry,v,true);
HXLINE( 445)		this->collect(entry,f,false);
HXLINE( 446)		if (::hx::IsInstanceNotEq( f->pop().StaticCast<  ::hxsl::_Linker::ShaderInfos >(),entry )) {
HXLINE( 446)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            		}
HXLINE( 449)		{
HXLINE( 449)			int _g9 = 0;
HXDLIN( 449)			::Array< ::Dynamic> _g10 = this->shaders;
HXDLIN( 449)			while((_g9 < _g10->length)){
HXLINE( 449)				 ::hxsl::_Linker::ShaderInfos s = _g10->__get(_g9).StaticCast<  ::hxsl::_Linker::ShaderInfos >();
HXDLIN( 449)				_g9 = (_g9 + 1);
HXLINE( 450)				s->marked = null();
            			}
            		}
HXLINE( 451)		{
HXLINE( 451)			int _g11 = 0;
HXDLIN( 451)			::Array< ::Dynamic> _g12 = v->concat(f);
HXDLIN( 451)			while((_g11 < _g12->length)){
HXLINE( 451)				 ::hxsl::_Linker::ShaderInfos s = _g12->__get(_g11).StaticCast<  ::hxsl::_Linker::ShaderInfos >();
HXDLIN( 451)				_g11 = (_g11 + 1);
HXLINE( 452)				{
HXLINE( 452)					 ::Dynamic d = s->deps->keys();
HXDLIN( 452)					while(( (bool)(d->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 452)						 ::hxsl::_Linker::ShaderInfos d1 = ( ( ::hxsl::_Linker::ShaderInfos)(d->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 453)						if (::hx::IsNull( d1->marked )) {
HXLINE( 454)							this->error((((d1->name + HX_(" needed by ",1e,cf,e3,cf)) + s->name) + HX_(" is unreachable",fe,07,0b,85)),null());
            						}
            					}
            				}
HXLINE( 455)				s->marked = true;
            			}
            		}
HXLINE( 459)		::Array< ::Dynamic> outVars1 = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 460)		 ::haxe::ds::IntMap varMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 461)		::Array< ::Dynamic> addVar = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 461)		addVar[0] =  ::Dynamic(new _hx_Closure_0(varMap,addVar,outVars1));
HXLINE( 470)		{
HXLINE( 470)			int _g13 = 0;
HXDLIN( 470)			::Array< ::Dynamic> _g14 = v->concat(f);
HXDLIN( 470)			while((_g13 < _g14->length)){
HXLINE( 470)				 ::hxsl::_Linker::ShaderInfos s = _g14->__get(_g13).StaticCast<  ::hxsl::_Linker::ShaderInfos >();
HXDLIN( 470)				_g13 = (_g13 + 1);
HXLINE( 471)				{
HXLINE( 471)					 ::Dynamic v = s->read->iterator();
HXDLIN( 471)					while(( (bool)(v->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 471)						 ::hxsl::_Linker::AllocatedVar v1 = ( ( ::hxsl::_Linker::AllocatedVar)(v->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 472)						addVar->__get(0)(v1);
            					}
            				}
HXLINE( 473)				{
HXLINE( 473)					 ::Dynamic v1 = s->write->iterator();
HXDLIN( 473)					while(( (bool)(v1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 473)						 ::hxsl::_Linker::AllocatedVar v = ( ( ::hxsl::_Linker::AllocatedVar)(v1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 474)						addVar->__get(0)(v);
            					}
            				}
            			}
            		}
HXLINE( 477)		::Array< ::Dynamic> cleanVar = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 477)		cleanVar[0] =  ::Dynamic(new _hx_Closure_1(varMap,cleanVar));
HXLINE( 490)		{
HXLINE( 490)			int _g15 = 0;
HXDLIN( 490)			while((_g15 < outVars1->length)){
HXLINE( 490)				 ::Dynamic v = outVars1->__get(_g15);
HXDLIN( 490)				_g15 = (_g15 + 1);
HXLINE( 491)				cleanVar->__get(0)(v);
            			}
            		}
HXLINE( 493)		 ::Dynamic build =  ::Dynamic(new _hx_Closure_2(_gthis,outVars1));
HXLINE( 520)		 ::Dynamic funs = build(::hxsl::FunctionKind_obj::Vertex_dyn(),HX_("vertex",64,db,47,a1),v);
HXLINE( 519)		::Array< ::Dynamic> funs1 = ::Array_obj< ::Dynamic>::__new(2)->init(0,funs)->init(1,build(::hxsl::FunctionKind_obj::Fragment_dyn(),HX_("fragment",d0,5f,e5,ad),f));
HXLINE( 525)		{
HXLINE( 525)			 ::Dynamic s = dupShaders->keys();
HXDLIN( 525)			while(( (bool)(s->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 525)				 ::Dynamic s1 = s->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 526)				 ::Dynamic sreal = dupShaders->get(s1);
HXLINE( 527)				if (::hx::IsEq( s1,sreal )) {
HXLINE( 527)					continue;
            				}
HXLINE( 528)				{
HXLINE( 528)					int _g = 0;
HXDLIN( 528)					int _g1 = ( (::Array< ::Dynamic>)(s1->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) )->length;
HXDLIN( 528)					while((_g < _g1)){
HXLINE( 528)						_g = (_g + 1);
HXDLIN( 528)						int i = (_g - 1);
HXLINE( 529)						::Array< ::Dynamic> _hx_tmp = this->allocVar( ::Dynamic(s1->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic))->__GetItem(i),null(),null(),null(),null())->merged;
HXDLIN( 529)						_hx_tmp->unshift( ::Dynamic(sreal->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic))->__GetItem(i));
            					}
            				}
            			}
            		}
HXLINE( 532)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("funs",54,eb,c4,43),funs1)
            			->setFixed(1,HX_("name",4b,72,ff,48),HX_("out",8e,a0,54,00))
            			->setFixed(2,HX_("vars",ac,2b,49,4e),outVars1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Linker_obj,link,return )


::hx::ObjectPtr< Linker_obj > Linker_obj::__new(::hx::Null< bool >  __o_batchMode) {
	::hx::ObjectPtr< Linker_obj > __this = new Linker_obj();
	__this->__construct(__o_batchMode);
	return __this;
}

::hx::ObjectPtr< Linker_obj > Linker_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_batchMode) {
	Linker_obj *__this = (Linker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Linker_obj), true, "hxsl.Linker"));
	*(void **)__this = Linker_obj::_hx_vtable;
	__this->__construct(__o_batchMode);
	return __this;
}

Linker_obj::Linker_obj()
{
}

void Linker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Linker);
	HX_MARK_MEMBER_NAME(allVars,"allVars");
	HX_MARK_MEMBER_NAME(varMap,"varMap");
	HX_MARK_MEMBER_NAME(curShader,"curShader");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(varIdMap,"varIdMap");
	HX_MARK_MEMBER_NAME(locals,"locals");
	HX_MARK_MEMBER_NAME(curInstance,"curInstance");
	HX_MARK_MEMBER_NAME(batchMode,"batchMode");
	HX_MARK_MEMBER_NAME(isBatchShader,"isBatchShader");
	HX_MARK_MEMBER_NAME(debugDepth,"debugDepth");
	HX_MARK_END_CLASS();
}

void Linker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(allVars,"allVars");
	HX_VISIT_MEMBER_NAME(varMap,"varMap");
	HX_VISIT_MEMBER_NAME(curShader,"curShader");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(varIdMap,"varIdMap");
	HX_VISIT_MEMBER_NAME(locals,"locals");
	HX_VISIT_MEMBER_NAME(curInstance,"curInstance");
	HX_VISIT_MEMBER_NAME(batchMode,"batchMode");
	HX_VISIT_MEMBER_NAME(isBatchShader,"isBatchShader");
	HX_VISIT_MEMBER_NAME(debugDepth,"debugDepth");
}

::hx::Val Linker_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { return ::hx::Val( link_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return ::hx::Val( debug_dyn() ); }
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"varMap") ) { return ::hx::Val( varMap ); }
		if (HX_FIELD_EQ(inName,"locals") ) { return ::hx::Val( locals ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"allVars") ) { return ::hx::Val( allVars ); }
		if (HX_FIELD_EQ(inName,"shaders") ) { return ::hx::Val( shaders ); }
		if (HX_FIELD_EQ(inName,"collect") ) { return ::hx::Val( collect_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"varIdMap") ) { return ::hx::Val( varIdMap ); }
		if (HX_FIELD_EQ(inName,"mergeVar") ) { return ::hx::Val( mergeVar_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocVar") ) { return ::hx::Val( allocVar_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curShader") ) { return ::hx::Val( curShader ); }
		if (HX_FIELD_EQ(inName,"batchMode") ) { return ::hx::Val( batchMode ); }
		if (HX_FIELD_EQ(inName,"addShader") ) { return ::hx::Val( addShader_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debugDepth") ) { return ::hx::Val( debugDepth ); }
		if (HX_FIELD_EQ(inName,"mapExprVar") ) { return ::hx::Val( mapExprVar_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curInstance") ) { return ::hx::Val( curInstance ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uniqueLocals") ) { return ::hx::Val( uniqueLocals_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isBatchShader") ) { return ::hx::Val( isBatchShader ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buildDependency") ) { return ::hx::Val( buildDependency_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initDependencies") ) { return ::hx::Val( initDependencies_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sortByPriorityDesc") ) { return ::hx::Val( sortByPriorityDesc_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Linker_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"varMap") ) { varMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"locals") ) { locals=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"allVars") ) { allVars=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"varIdMap") ) { varIdMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curShader") ) { curShader=inValue.Cast<  ::hxsl::_Linker::ShaderInfos >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batchMode") ) { batchMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debugDepth") ) { debugDepth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curInstance") ) { curInstance=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isBatchShader") ) { isBatchShader=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Linker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("allVars",6d,f5,95,58));
	outFields->push(HX_("varMap",f5,ed,8f,53));
	outFields->push(HX_("curShader",c5,d8,ad,8d));
	outFields->push(HX_("shaders",ae,81,86,5f));
	outFields->push(HX_("varIdMap",1a,2d,26,fe));
	outFields->push(HX_("locals",a8,74,bf,59));
	outFields->push(HX_("curInstance",35,e1,1f,db));
	outFields->push(HX_("batchMode",3d,4c,7c,ee));
	outFields->push(HX_("isBatchShader",b5,f2,d3,24));
	outFields->push(HX_("debugDepth",b0,c1,0d,d6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Linker_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Linker_obj,allVars),HX_("allVars",6d,f5,95,58)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Linker_obj,varMap),HX_("varMap",f5,ed,8f,53)},
	{::hx::fsObject /*  ::hxsl::_Linker::ShaderInfos */ ,(int)offsetof(Linker_obj,curShader),HX_("curShader",c5,d8,ad,8d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Linker_obj,shaders),HX_("shaders",ae,81,86,5f)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Linker_obj,varIdMap),HX_("varIdMap",1a,2d,26,fe)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Linker_obj,locals),HX_("locals",a8,74,bf,59)},
	{::hx::fsInt,(int)offsetof(Linker_obj,curInstance),HX_("curInstance",35,e1,1f,db)},
	{::hx::fsBool,(int)offsetof(Linker_obj,batchMode),HX_("batchMode",3d,4c,7c,ee)},
	{::hx::fsBool,(int)offsetof(Linker_obj,isBatchShader),HX_("isBatchShader",b5,f2,d3,24)},
	{::hx::fsInt,(int)offsetof(Linker_obj,debugDepth),HX_("debugDepth",b0,c1,0d,d6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Linker_obj_sStaticStorageInfo = 0;
#endif

static ::String Linker_obj_sMemberFields[] = {
	HX_("allVars",6d,f5,95,58),
	HX_("varMap",f5,ed,8f,53),
	HX_("curShader",c5,d8,ad,8d),
	HX_("shaders",ae,81,86,5f),
	HX_("varIdMap",1a,2d,26,fe),
	HX_("locals",a8,74,bf,59),
	HX_("curInstance",35,e1,1f,db),
	HX_("batchMode",3d,4c,7c,ee),
	HX_("isBatchShader",b5,f2,d3,24),
	HX_("debugDepth",b0,c1,0d,d6),
	HX_("debug",53,52,1f,d7),
	HX_("error",c8,cb,29,73),
	HX_("mergeVar",0f,77,6b,e8),
	HX_("allocVar",72,69,e2,90),
	HX_("mapExprVar",76,f1,d8,cb),
	HX_("addShader",26,f4,44,d5),
	HX_("sortByPriorityDesc",4a,b4,b9,6d),
	HX_("buildDependency",99,fb,9b,3e),
	HX_("initDependencies",19,b3,8a,9f),
	HX_("collect",aa,a5,60,ed),
	HX_("uniqueLocals",99,9e,83,81),
	HX_("link",fa,17,b3,47),
	::String(null()) };

::hx::Class Linker_obj::__mClass;

void Linker_obj::__register()
{
	Linker_obj _hx_dummy;
	Linker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Linker",2c,c1,12,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Linker_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Linker_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Linker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Linker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
