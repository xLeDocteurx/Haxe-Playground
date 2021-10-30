#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_pass_ShaderManager
#include <h3d/pass/ShaderManager.h>
#endif
#ifndef INCLUDED_h3d_shader_Buffers
#include <h3d/shader/Buffers.h>
#endif
#ifndef INCLUDED_h3d_shader_ShaderBuffers
#include <h3d/shader/ShaderBuffers.h>
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
#ifndef INCLUDED_hxsl_AllocGlobal
#include <hxsl/AllocGlobal.h>
#endif
#ifndef INCLUDED_hxsl_AllocParam
#include <hxsl/AllocParam.h>
#endif
#ifndef INCLUDED_hxsl_Cache
#include <hxsl/Cache.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShaderData
#include <hxsl/RuntimeShaderData.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderInstance
#include <hxsl/ShaderInstance.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif
#ifndef INCLUDED_hxsl_SizeDecl
#include <hxsl/SizeDecl.h>
#endif
#ifndef INCLUDED_hxsl_Type
#include <hxsl/Type.h>
#endif
#ifndef INCLUDED_hxsl_VecType
#include <hxsl/VecType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4373ddb0fbfbd03a_11_new,"h3d.pass.ShaderManager","new",0xc5075a52,"h3d.pass.ShaderManager.new","h3d/pass/ShaderManager.hx",11,0xdf19f1be)
HX_LOCAL_STACK_FRAME(_hx_pos_4373ddb0fbfbd03a_21_setOutput,"h3d.pass.ShaderManager","setOutput",0x84f30fb5,"h3d.pass.ShaderManager.setOutput","h3d/pass/ShaderManager.hx",21,0xdf19f1be)
HX_LOCAL_STACK_FRAME(_hx_pos_4373ddb0fbfbd03a_154_shaderInfo,"h3d.pass.ShaderManager","shaderInfo",0xccc39281,"h3d.pass.ShaderManager.shaderInfo","h3d/pass/ShaderManager.hx",154,0xdf19f1be)
HX_LOCAL_STACK_FRAME(_hx_pos_4373ddb0fbfbd03a_170_getPtr,"h3d.pass.ShaderManager","getPtr",0xbe825446,"h3d.pass.ShaderManager.getPtr","h3d/pass/ShaderManager.hx",170,0xdf19f1be)
HX_LOCAL_STACK_FRAME(_hx_pos_4373ddb0fbfbd03a_174_getParamValue,"h3d.pass.ShaderManager","getParamValue",0x9a7ed84c,"h3d.pass.ShaderManager.getParamValue","h3d/pass/ShaderManager.hx",174,0xdf19f1be)
HX_LOCAL_STACK_FRAME(_hx_pos_4373ddb0fbfbd03a_190_fillGlobals,"h3d.pass.ShaderManager","fillGlobals",0x00ee515f,"h3d.pass.ShaderManager.fillGlobals","h3d/pass/ShaderManager.hx",190,0xdf19f1be)
HX_LOCAL_STACK_FRAME(_hx_pos_4373ddb0fbfbd03a_212_fillParams,"h3d.pass.ShaderManager","fillParams",0x8984fa77,"h3d.pass.ShaderManager.fillParams","h3d/pass/ShaderManager.hx",212,0xdf19f1be)
HX_LOCAL_STACK_FRAME(_hx_pos_4373ddb0fbfbd03a_268_compileShaders,"h3d.pass.ShaderManager","compileShaders",0x7c3d1fc9,"h3d.pass.ShaderManager.compileShaders","h3d/pass/ShaderManager.hx",268,0xdf19f1be)
HX_LOCAL_STACK_FRAME(_hx_pos_4373ddb0fbfbd03a_5_boot,"h3d.pass.ShaderManager","boot",0x9980ae00,"h3d.pass.ShaderManager.boot","h3d/pass/ShaderManager.hx",5,0xdf19f1be)
namespace h3d{
namespace pass{

void ShaderManager_obj::__construct(::Array< ::Dynamic> output){
            	HX_GC_STACKFRAME(&_hx_pos_4373ddb0fbfbd03a_11_new)
HXLINE(  12)		this->shaderCache = ::hxsl::Cache_obj::get();
HXLINE(  16)		this->globals =  ::hxsl::Globals_obj::__alloc( HX_CTX );
HXLINE(  17)		this->currentOutput =  ::hxsl::ShaderList_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  18)		this->setOutput(output);
            	}

Dynamic ShaderManager_obj::__CreateEmpty() { return new ShaderManager_obj; }

void *ShaderManager_obj::_hx_vtable = 0;

Dynamic ShaderManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderManager_obj > _hx_result = new ShaderManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ShaderManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x035cfd5e;
}

void ShaderManager_obj::setOutput(::Array< ::Dynamic> output){
            	HX_STACKFRAME(&_hx_pos_4373ddb0fbfbd03a_21_setOutput)
HXLINE(  22)		if (::hx::IsNull( output )) {
HXLINE(  22)			output = ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Output_obj::Value(HX_("output.color",36,d0,92,7d),null()));
            		}
HXLINE(  23)		this->currentOutput->s = this->shaderCache->getLinkShader(output);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderManager_obj,setOutput,(void))

int ShaderManager_obj::fillRec( ::Dynamic v, ::hxsl::Type type,::Array< Float > out,int pos){
	switch((int)(type->_hx_getIndex())){
		case (int)1: {
			out->__unsafe_set(pos,( (Float)(v) ));
			return 1;
		}
		break;
		case (int)3: {
			out->__unsafe_set(pos,( (Float)(v) ));
			return 1;
		}
		break;
		case (int)5: {
			 ::hxsl::VecType _g = type->_hx_getObject(1).StaticCast<  ::hxsl::VecType >();
			int n = type->_hx_getInt(0);
			 ::h3d::Vector v1 = ( ( ::h3d::Vector)(v) );
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),v1->x);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),v1->y);
			}
			switch((int)(n)){
				case (int)3: {
					pos = (pos + 1);
					out->__unsafe_set((pos - 1),v1->z);
				}
				break;
				case (int)4: {
					{
						pos = (pos + 1);
						out->__unsafe_set((pos - 1),v1->z);
					}
					{
						pos = (pos + 1);
						out->__unsafe_set((pos - 1),v1->w);
					}
				}
				break;
			}
			return n;
		}
		break;
		case (int)6: {
			 ::h3d::Matrix m = ( ( ::h3d::Matrix)(v) );
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_11);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_21);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_31);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),0);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_12);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_22);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_32);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),0);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_13);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_23);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_33);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),0);
			}
			return 12;
		}
		break;
		case (int)7: {
			 ::h3d::Matrix m = ( ( ::h3d::Matrix)(v) );
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_11);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_21);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_31);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_41);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_12);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_22);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_32);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_42);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_13);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_23);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_33);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_43);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_14);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_24);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_34);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_44);
			}
			return 16;
		}
		break;
		case (int)8: {
			 ::h3d::Matrix m = ( ( ::h3d::Matrix)(v) );
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_11);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_21);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_31);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_41);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_12);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_22);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_32);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_42);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_13);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_23);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_33);
			}
			{
				pos = (pos + 1);
				out->__unsafe_set((pos - 1),m->_43);
			}
			return 12;
		}
		break;
		case (int)13: {
			::Array< ::Dynamic> vl = type->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
			int tot = 0;
			{
				int _g = 0;
				while((_g < vl->length)){
					 ::Dynamic vv = vl->__get(_g);
					_g = (_g + 1);
					 ::Dynamic tot1 = ::Reflect_obj::field(v,( (::String)(vv->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ));
					tot = (tot + this->fillRec(tot1,vv->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),out,(pos + tot)));
				}
			}
			return tot;
		}
		break;
		case (int)15: {
			 ::hxsl::Type _g = type->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
			 ::hxsl::SizeDecl _g1 = type->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
			switch((int)(_g->_hx_getIndex())){
				case (int)3: {
					if ((_g1->_hx_getIndex() == 0)) {
						int len = _g1->_hx_getInt(0);
						::Array< Float > v1 = ( (::Array< Float >)(v) );
						int size = 0;
						int count;
						if ((v1->length < len)) {
							count = v1->length;
						}
						else {
							count = len;
						}
						{
							int _g = 0;
							int _g2 = count;
							while((_g < _g2)){
								_g = (_g + 1);
								int i = (_g - 1);
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),v1->__get(i));
								}
							}
						}
						return len;
					}
					else {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("assert ",9a,a6,da,36) + ::Std_obj::string(type))));
					}
				}
				break;
				case (int)5: {
					if ((_g->_hx_getInt(0) == 4)) {
						if ((_g->_hx_getObject(1).StaticCast<  ::hxsl::VecType >()->_hx_getIndex() == 1)) {
							if ((_g1->_hx_getIndex() == 0)) {
								int len = _g1->_hx_getInt(0);
								::Array< ::Dynamic> v1 = ( (::Array< ::Dynamic>)(v) );
								{
									int _g = 0;
									int _g2 = len;
									while((_g < _g2)){
										_g = (_g + 1);
										int i = (_g - 1);
										 ::h3d::Vector n = v1->__get(i).StaticCast<  ::h3d::Vector >();
										if (::hx::IsNull( n )) {
											goto _hx_goto_5;
										}
										{
											pos = (pos + 1);
											out->__unsafe_set((pos - 1),n->x);
										}
										{
											pos = (pos + 1);
											out->__unsafe_set((pos - 1),n->y);
										}
										{
											pos = (pos + 1);
											out->__unsafe_set((pos - 1),n->z);
										}
										{
											pos = (pos + 1);
											out->__unsafe_set((pos - 1),n->w);
										}
									}
									_hx_goto_5:;
								}
								return (len * 4);
							}
							else {
								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("assert ",9a,a6,da,36) + ::Std_obj::string(type))));
							}
						}
						else {
							if ((_g1->_hx_getIndex() == 0)) {
								 ::hxsl::Type t = _g;
								int len = _g1->_hx_getInt(0);
								::cpp::VirtualArray v1 = ( (::cpp::VirtualArray)(v) );
								int size = 0;
								{
									int _g2 = 0;
									int _g3 = len;
									while((_g2 < _g3)){
										_g2 = (_g2 + 1);
										int i = (_g2 - 1);
										 ::Dynamic n = v1->__get(i);
										if (::hx::IsNull( n )) {
											goto _hx_goto_6;
										}
										size = this->fillRec(n,t,out,pos);
										pos = (pos + size);
									}
									_hx_goto_6:;
								}
								return (len * size);
							}
							else {
								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("assert ",9a,a6,da,36) + ::Std_obj::string(type))));
							}
						}
					}
					else {
						if ((_g1->_hx_getIndex() == 0)) {
							 ::hxsl::Type t = _g;
							int len = _g1->_hx_getInt(0);
							::cpp::VirtualArray v1 = ( (::cpp::VirtualArray)(v) );
							int size = 0;
							{
								int _g2 = 0;
								int _g3 = len;
								while((_g2 < _g3)){
									_g2 = (_g2 + 1);
									int i = (_g2 - 1);
									 ::Dynamic n = v1->__get(i);
									if (::hx::IsNull( n )) {
										goto _hx_goto_7;
									}
									size = this->fillRec(n,t,out,pos);
									pos = (pos + size);
								}
								_hx_goto_7:;
							}
							return (len * size);
						}
						else {
							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("assert ",9a,a6,da,36) + ::Std_obj::string(type))));
						}
					}
				}
				break;
				case (int)8: {
					if ((_g1->_hx_getIndex() == 0)) {
						int len = _g1->_hx_getInt(0);
						::Array< ::Dynamic> v1 = ( (::Array< ::Dynamic>)(v) );
						{
							int _g = 0;
							int _g2 = len;
							while((_g < _g2)){
								_g = (_g + 1);
								int i = (_g - 1);
								 ::h3d::Matrix m = v1->__get(i).StaticCast<  ::h3d::Matrix >();
								if (::hx::IsNull( m )) {
									goto _hx_goto_8;
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_11);
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_21);
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_31);
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_41);
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_12);
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_22);
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_32);
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_42);
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_13);
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_23);
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_33);
								}
								{
									pos = (pos + 1);
									out->__unsafe_set((pos - 1),m->_43);
								}
							}
							_hx_goto_8:;
						}
						return (len * 12);
					}
					else {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("assert ",9a,a6,da,36) + ::Std_obj::string(type))));
					}
				}
				break;
				default:{
					if ((_g1->_hx_getIndex() == 0)) {
						 ::hxsl::Type t = _g;
						int len = _g1->_hx_getInt(0);
						::cpp::VirtualArray v1 = ( (::cpp::VirtualArray)(v) );
						int size = 0;
						{
							int _g2 = 0;
							int _g3 = len;
							while((_g2 < _g3)){
								_g2 = (_g2 + 1);
								int i = (_g2 - 1);
								 ::Dynamic n = v1->__get(i);
								if (::hx::IsNull( n )) {
									goto _hx_goto_3;
								}
								size = this->fillRec(n,t,out,pos);
								pos = (pos + size);
							}
							_hx_goto_3:;
						}
						return (len * size);
					}
					else {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("assert ",9a,a6,da,36) + ::Std_obj::string(type))));
					}
				}
			}
		}
		break;
		default:{
			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("assert ",9a,a6,da,36) + ::Std_obj::string(type))));
		}
	}
	return 0;
}


HX_DEFINE_DYNAMIC_FUNC4(ShaderManager_obj,fillRec,return )

::String ShaderManager_obj::shaderInfo( ::hxsl::ShaderList shaders,::String path){
            	HX_STACKFRAME(&_hx_pos_4373ddb0fbfbd03a_154_shaderInfo)
HXLINE( 155)		::String name = ( (::String)(path.split(HX_(".",2e,00,00,00))->pop()) );
HXLINE( 156)		while(::hx::IsNotNull( shaders )){
HXLINE( 157)			 ::hxsl::ShaderInstance inst = shaders->s->instance;
HXLINE( 158)			{
HXLINE( 158)				int _g = 0;
HXDLIN( 158)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(inst->shader->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN( 158)				while((_g < _g1->length)){
HXLINE( 158)					 ::Dynamic v = _g1->__get(_g);
HXDLIN( 158)					_g = (_g + 1);
HXLINE( 159)					if (::hx::IsEq( v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 160)						return shaders->s->toString();
            					}
            				}
            			}
HXLINE( 161)			shaders = shaders->next;
            		}
HXLINE( 163)		return HX_("(not found)",3c,51,82,56);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderManager_obj,shaderInfo,return )

::Array< Float > ShaderManager_obj::getPtr(::Array< Float > data){
            	HX_STACKFRAME(&_hx_pos_4373ddb0fbfbd03a_170_getPtr)
HXDLIN( 170)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderManager_obj,getPtr,return )

 ::Dynamic ShaderManager_obj::getParamValue( ::hxsl::AllocParam p, ::hxsl::ShaderList shaders,::hx::Null< bool >  __o_opt){
            		bool opt = __o_opt.Default(false);
            	HX_STACKFRAME(&_hx_pos_4373ddb0fbfbd03a_174_getParamValue)
HXLINE( 175)		if (::hx::IsNotNull( p->perObjectGlobal )) {
HXLINE( 176)			 ::Dynamic v = this->globals->map->get(p->perObjectGlobal->gid);
HXLINE( 177)			if (::hx::IsNull( v )) {
HXLINE( 177)				::String _hx_tmp = ((HX_("Missing global value ",52,2e,82,e6) + p->perObjectGlobal->path) + HX_(" for shader ",24,f1,2b,66));
HXDLIN( 177)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + this->shaderInfo(shaders,p->perObjectGlobal->path))));
            			}
HXLINE( 178)			 ::hxsl::Type _g = p->type;
HXDLIN( 178)			bool _hx_tmp;
HXDLIN( 178)			if ((_g->_hx_getIndex() == 17)) {
HXLINE( 178)				int _g1 = _g->_hx_getInt(0);
HXDLIN( 178)				_hx_tmp = true;
            			}
            			else {
HXLINE( 178)				_hx_tmp = false;
            			}
HXDLIN( 178)			if (_hx_tmp) {
HXLINE( 179)				return  ::Dynamic(v->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic));
            			}
HXLINE( 180)			return v;
            		}
HXLINE( 182)		 ::hxsl::ShaderList si = shaders;
HXLINE( 183)		int n = p->instance;
HXLINE( 184)		while(true){
HXLINE( 184)			n = (n - 1);
HXDLIN( 184)			if (!((n > 0))) {
HXLINE( 184)				goto _hx_goto_13;
            			}
HXDLIN( 184)			si = si->next;
            		}
            		_hx_goto_13:;
HXLINE( 185)		 ::Dynamic v = si->s->getParamValue(p->index);
HXLINE( 186)		bool _hx_tmp;
HXDLIN( 186)		if (::hx::IsNull( v )) {
HXLINE( 186)			_hx_tmp = !(opt);
            		}
            		else {
HXLINE( 186)			_hx_tmp = false;
            		}
HXDLIN( 186)		if (_hx_tmp) {
HXLINE( 186)			::String _hx_tmp = ((HX_("Missing param value ",dc,6b,43,bb) + ::Std_obj::string(si->s)) + HX_(".",2e,00,00,00));
HXDLIN( 186)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + p->name)));
            		}
HXLINE( 187)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ShaderManager_obj,getParamValue,return )

void ShaderManager_obj::fillGlobals( ::h3d::shader::Buffers buf, ::hxsl::RuntimeShader s){
            	HX_STACKFRAME(&_hx_pos_4373ddb0fbfbd03a_190_fillGlobals)
HXDLIN( 190)		 ::h3d::pass::ShaderManager _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 208)		{
HXLINE( 208)			 ::hxsl::RuntimeShaderData s1 = s->vertex;
HXDLIN( 208)			 ::hxsl::AllocGlobal g = s1->globals;
HXDLIN( 208)			::Array< Float > ptr = buf->vertex->globals;
HXDLIN( 208)			while(::hx::IsNotNull( g )){
HXLINE( 208)				 ::Dynamic v = _gthis->globals->map->get(g->gid);
HXDLIN( 208)				if (::hx::IsNull( v )) {
HXLINE( 208)					if ((g->path == HX_("__consts__",f0,cf,e3,48))) {
HXLINE( 208)						_gthis->fillRec(s1->consts,g->type,ptr,g->pos);
HXDLIN( 208)						g = g->next;
HXDLIN( 208)						continue;
            					}
HXDLIN( 208)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Missing global value ",52,2e,82,e6) + g->path)));
            				}
HXDLIN( 208)				_gthis->fillRec(v,g->type,ptr,g->pos);
HXDLIN( 208)				g = g->next;
            			}
            		}
HXLINE( 209)		{
HXLINE( 209)			 ::hxsl::RuntimeShaderData s2 = s->fragment;
HXDLIN( 209)			 ::hxsl::AllocGlobal g1 = s2->globals;
HXDLIN( 209)			::Array< Float > ptr1 = buf->fragment->globals;
HXDLIN( 209)			while(::hx::IsNotNull( g1 )){
HXLINE( 209)				 ::Dynamic v = _gthis->globals->map->get(g1->gid);
HXDLIN( 209)				if (::hx::IsNull( v )) {
HXLINE( 209)					if ((g1->path == HX_("__consts__",f0,cf,e3,48))) {
HXLINE( 209)						_gthis->fillRec(s2->consts,g1->type,ptr1,g1->pos);
HXDLIN( 209)						g1 = g1->next;
HXDLIN( 209)						continue;
            					}
HXDLIN( 209)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Missing global value ",52,2e,82,e6) + g1->path)));
            				}
HXDLIN( 209)				_gthis->fillRec(v,g1->type,ptr1,g1->pos);
HXDLIN( 209)				g1 = g1->next;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderManager_obj,fillGlobals,(void))

void ShaderManager_obj::fillParams( ::h3d::shader::Buffers buf, ::hxsl::RuntimeShader s, ::hxsl::ShaderList shaders){
            	HX_STACKFRAME(&_hx_pos_4373ddb0fbfbd03a_212_fillParams)
HXDLIN( 212)		 ::h3d::pass::ShaderManager _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 213)		int curInstance = -1;
HXLINE( 214)		 ::hxsl::Shader curInstanceValue = null();
HXLINE( 264)		{
HXLINE( 264)			 ::h3d::shader::ShaderBuffers buf1 = buf->vertex;
HXDLIN( 264)			 ::hxsl::RuntimeShaderData s1 = s->vertex;
HXDLIN( 264)			 ::hxsl::AllocParam p = s1->params;
HXDLIN( 264)			::Array< Float > ptr = buf1->params;
HXDLIN( 264)			while(::hx::IsNotNull( p )){
HXLINE( 264)				 ::Dynamic v;
HXDLIN( 264)				if (::hx::IsNull( p->perObjectGlobal )) {
HXLINE( 264)					if (::hx::IsPointerEq( p->type,::hxsl::Type_obj::TFloat_dyn() )) {
HXLINE( 264)						int index = p->instance;
HXDLIN( 264)						 ::hxsl::Shader i;
HXDLIN( 264)						if ((curInstance == index)) {
HXLINE( 264)							i = curInstanceValue;
            						}
            						else {
HXLINE( 264)							 ::hxsl::ShaderList si = shaders;
HXDLIN( 264)							curInstance = index;
HXDLIN( 264)							while(true){
HXLINE( 264)								index = (index - 1);
HXDLIN( 264)								if (!((index > 0))) {
HXLINE( 264)									goto _hx_goto_19;
            								}
HXDLIN( 264)								si = si->next;
            							}
            							_hx_goto_19:;
HXDLIN( 264)							curInstanceValue = si->s;
HXDLIN( 264)							i = curInstanceValue;
            						}
HXDLIN( 264)						{
HXLINE( 264)							int index1 = p->pos;
HXDLIN( 264)							Float val = i->getParamFloatValue(p->index);
HXDLIN( 264)							ptr->__unsafe_set(index1,val);
            						}
HXDLIN( 264)						p = p->next;
HXDLIN( 264)						continue;
            					}
HXDLIN( 264)					int index = p->instance;
HXDLIN( 264)					 ::hxsl::Shader v1;
HXDLIN( 264)					if ((curInstance == index)) {
HXLINE( 264)						v1 = curInstanceValue;
            					}
            					else {
HXLINE( 264)						 ::hxsl::ShaderList si = shaders;
HXDLIN( 264)						curInstance = index;
HXDLIN( 264)						while(true){
HXLINE( 264)							index = (index - 1);
HXDLIN( 264)							if (!((index > 0))) {
HXLINE( 264)								goto _hx_goto_20;
            							}
HXDLIN( 264)							si = si->next;
            						}
            						_hx_goto_20:;
HXDLIN( 264)						curInstanceValue = si->s;
HXDLIN( 264)						v1 = curInstanceValue;
            					}
HXDLIN( 264)					v = v1->getParamValue(p->index);
HXDLIN( 264)					if (::hx::IsNull( v )) {
HXLINE( 264)						::String _hx_tmp = ((HX_("Missing param value ",dc,6b,43,bb) + ::Std_obj::string(curInstanceValue)) + HX_(".",2e,00,00,00));
HXDLIN( 264)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + p->name)));
            					}
            				}
            				else {
HXLINE( 264)					bool opt = false;
HXDLIN( 264)					if (::hx::IsNotNull( p->perObjectGlobal )) {
HXLINE( 264)						 ::Dynamic v1 = _gthis->globals->map->get(p->perObjectGlobal->gid);
HXDLIN( 264)						if (::hx::IsNull( v1 )) {
HXLINE( 264)							::String v = ((HX_("Missing global value ",52,2e,82,e6) + p->perObjectGlobal->path) + HX_(" for shader ",24,f1,2b,66));
HXDLIN( 264)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((v + _gthis->shaderInfo(shaders,p->perObjectGlobal->path))));
            						}
HXDLIN( 264)						 ::hxsl::Type _g = p->type;
HXDLIN( 264)						bool v2;
HXDLIN( 264)						if ((_g->_hx_getIndex() == 17)) {
HXLINE( 264)							int _g1 = _g->_hx_getInt(0);
HXDLIN( 264)							v2 = true;
            						}
            						else {
HXLINE( 264)							v2 = false;
            						}
HXDLIN( 264)						if (v2) {
HXLINE( 264)							v =  ::Dynamic(v1->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic));
            						}
            						else {
HXLINE( 264)							v = v1;
            						}
            					}
            					else {
HXLINE( 264)						 ::hxsl::ShaderList si = shaders;
HXDLIN( 264)						int n = p->instance;
HXDLIN( 264)						while(true){
HXLINE( 264)							n = (n - 1);
HXDLIN( 264)							if (!((n > 0))) {
HXLINE( 264)								goto _hx_goto_21;
            							}
HXDLIN( 264)							si = si->next;
            						}
            						_hx_goto_21:;
HXDLIN( 264)						 ::Dynamic v1 = si->s->getParamValue(p->index);
HXDLIN( 264)						bool v2;
HXDLIN( 264)						if (::hx::IsNull( v1 )) {
HXLINE( 264)							v2 = !(opt);
            						}
            						else {
HXLINE( 264)							v2 = false;
            						}
HXDLIN( 264)						if (v2) {
HXLINE( 264)							::String v = ((HX_("Missing param value ",dc,6b,43,bb) + ::Std_obj::string(si->s)) + HX_(".",2e,00,00,00));
HXDLIN( 264)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((v + p->name)));
            						}
HXDLIN( 264)						v = v1;
            					}
            				}
HXDLIN( 264)				_gthis->fillRec(v,p->type,ptr,p->pos);
HXDLIN( 264)				p = p->next;
            			}
HXDLIN( 264)			int tid = 0;
HXDLIN( 264)			 ::hxsl::AllocParam p1 = s1->textures;
HXDLIN( 264)			while(::hx::IsNotNull( p1 )){
HXLINE( 264)				bool opt = !(::h3d::pass::ShaderManager_obj::STRICT);
HXDLIN( 264)				 ::Dynamic t;
HXDLIN( 264)				if (::hx::IsNotNull( p1->perObjectGlobal )) {
HXLINE( 264)					 ::Dynamic v = _gthis->globals->map->get(p1->perObjectGlobal->gid);
HXDLIN( 264)					if (::hx::IsNull( v )) {
HXLINE( 264)						::String t = ((HX_("Missing global value ",52,2e,82,e6) + p1->perObjectGlobal->path) + HX_(" for shader ",24,f1,2b,66));
HXDLIN( 264)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((t + _gthis->shaderInfo(shaders,p1->perObjectGlobal->path))));
            					}
HXDLIN( 264)					 ::hxsl::Type _g = p1->type;
HXDLIN( 264)					bool t1;
HXDLIN( 264)					if ((_g->_hx_getIndex() == 17)) {
HXLINE( 264)						int _g1 = _g->_hx_getInt(0);
HXDLIN( 264)						t1 = true;
            					}
            					else {
HXLINE( 264)						t1 = false;
            					}
HXDLIN( 264)					if (t1) {
HXLINE( 264)						t =  ::Dynamic(v->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic));
            					}
            					else {
HXLINE( 264)						t = v;
            					}
            				}
            				else {
HXLINE( 264)					 ::hxsl::ShaderList si = shaders;
HXDLIN( 264)					int n = p1->instance;
HXDLIN( 264)					while(true){
HXLINE( 264)						n = (n - 1);
HXDLIN( 264)						if (!((n > 0))) {
HXLINE( 264)							goto _hx_goto_23;
            						}
HXDLIN( 264)						si = si->next;
            					}
            					_hx_goto_23:;
HXDLIN( 264)					 ::Dynamic v = si->s->getParamValue(p1->index);
HXDLIN( 264)					bool t1;
HXDLIN( 264)					if (::hx::IsNull( v )) {
HXLINE( 264)						t1 = !(opt);
            					}
            					else {
HXLINE( 264)						t1 = false;
            					}
HXDLIN( 264)					if (t1) {
HXLINE( 264)						::String t = ((HX_("Missing param value ",dc,6b,43,bb) + ::Std_obj::string(si->s)) + HX_(".",2e,00,00,00));
HXDLIN( 264)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((t + p1->name)));
            					}
HXDLIN( 264)					t = v;
            				}
HXDLIN( 264)				if ((p1->pos < 0)) {
HXLINE( 264)					::Array< ::Dynamic> arr = ( (::Array< ::Dynamic>)(t) );
HXDLIN( 264)					{
HXLINE( 264)						int _g = 0;
HXDLIN( 264)						int _g1 = -(p1->pos);
HXDLIN( 264)						while((_g < _g1)){
HXLINE( 264)							_g = (_g + 1);
HXDLIN( 264)							int i = (_g - 1);
HXDLIN( 264)							{
HXLINE( 264)								tid = (tid + 1);
HXDLIN( 264)								buf1->tex->__unsafe_set((tid - 1),arr->__get(i).StaticCast<  ::h3d::mat::Texture >());
            							}
            						}
            					}
            				}
            				else {
HXLINE( 264)					tid = (tid + 1);
HXDLIN( 264)					buf1->tex->__unsafe_set((tid - 1),( ( ::h3d::mat::Texture)(t) ));
            				}
HXDLIN( 264)				p1 = p1->next;
            			}
HXDLIN( 264)			 ::hxsl::AllocParam p2 = s1->buffers;
HXDLIN( 264)			int bid = 0;
HXDLIN( 264)			while(::hx::IsNotNull( p2 )){
HXLINE( 264)				bool opt = !(::h3d::pass::ShaderManager_obj::STRICT);
HXDLIN( 264)				 ::h3d::Buffer b;
HXDLIN( 264)				if (::hx::IsNotNull( p2->perObjectGlobal )) {
HXLINE( 264)					 ::Dynamic v = _gthis->globals->map->get(p2->perObjectGlobal->gid);
HXDLIN( 264)					if (::hx::IsNull( v )) {
HXLINE( 264)						::String b = ((HX_("Missing global value ",52,2e,82,e6) + p2->perObjectGlobal->path) + HX_(" for shader ",24,f1,2b,66));
HXDLIN( 264)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((b + _gthis->shaderInfo(shaders,p2->perObjectGlobal->path))));
            					}
HXDLIN( 264)					 ::hxsl::Type _g = p2->type;
HXDLIN( 264)					bool b1;
HXDLIN( 264)					if ((_g->_hx_getIndex() == 17)) {
HXLINE( 264)						int _g1 = _g->_hx_getInt(0);
HXDLIN( 264)						b1 = true;
            					}
            					else {
HXLINE( 264)						b1 = false;
            					}
HXDLIN( 264)					if (b1) {
HXLINE( 264)						b = ( ( ::h3d::Buffer)(v->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic)) );
            					}
            					else {
HXLINE( 264)						b = ( ( ::h3d::Buffer)(v) );
            					}
            				}
            				else {
HXLINE( 264)					 ::hxsl::ShaderList si = shaders;
HXDLIN( 264)					int n = p2->instance;
HXDLIN( 264)					while(true){
HXLINE( 264)						n = (n - 1);
HXDLIN( 264)						if (!((n > 0))) {
HXLINE( 264)							goto _hx_goto_26;
            						}
HXDLIN( 264)						si = si->next;
            					}
            					_hx_goto_26:;
HXDLIN( 264)					 ::Dynamic v = si->s->getParamValue(p2->index);
HXDLIN( 264)					bool b1;
HXDLIN( 264)					if (::hx::IsNull( v )) {
HXLINE( 264)						b1 = !(opt);
            					}
            					else {
HXLINE( 264)						b1 = false;
            					}
HXDLIN( 264)					if (b1) {
HXLINE( 264)						::String b = ((HX_("Missing param value ",dc,6b,43,bb) + ::Std_obj::string(si->s)) + HX_(".",2e,00,00,00));
HXDLIN( 264)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((b + p2->name)));
            					}
HXDLIN( 264)					b = ( ( ::h3d::Buffer)(v) );
            				}
HXDLIN( 264)				{
HXLINE( 264)					bid = (bid + 1);
HXDLIN( 264)					buf1->buffers->__unsafe_set((bid - 1),b);
            				}
HXDLIN( 264)				p2 = p2->next;
            			}
            		}
HXLINE( 265)		{
HXLINE( 265)			 ::h3d::shader::ShaderBuffers buf2 = buf->fragment;
HXDLIN( 265)			 ::hxsl::RuntimeShaderData s2 = s->fragment;
HXDLIN( 265)			 ::hxsl::AllocParam p3 = s2->params;
HXDLIN( 265)			::Array< Float > ptr1 = buf2->params;
HXDLIN( 265)			while(::hx::IsNotNull( p3 )){
HXLINE( 265)				 ::Dynamic v;
HXDLIN( 265)				if (::hx::IsNull( p3->perObjectGlobal )) {
HXLINE( 265)					if (::hx::IsPointerEq( p3->type,::hxsl::Type_obj::TFloat_dyn() )) {
HXLINE( 265)						int index = p3->instance;
HXDLIN( 265)						 ::hxsl::Shader i;
HXDLIN( 265)						if ((curInstance == index)) {
HXLINE( 265)							i = curInstanceValue;
            						}
            						else {
HXLINE( 265)							 ::hxsl::ShaderList si = shaders;
HXDLIN( 265)							curInstance = index;
HXDLIN( 265)							while(true){
HXLINE( 265)								index = (index - 1);
HXDLIN( 265)								if (!((index > 0))) {
HXLINE( 265)									goto _hx_goto_28;
            								}
HXDLIN( 265)								si = si->next;
            							}
            							_hx_goto_28:;
HXDLIN( 265)							curInstanceValue = si->s;
HXDLIN( 265)							i = curInstanceValue;
            						}
HXDLIN( 265)						{
HXLINE( 265)							int index1 = p3->pos;
HXDLIN( 265)							Float val = i->getParamFloatValue(p3->index);
HXDLIN( 265)							ptr1->__unsafe_set(index1,val);
            						}
HXDLIN( 265)						p3 = p3->next;
HXDLIN( 265)						continue;
            					}
HXDLIN( 265)					int index = p3->instance;
HXDLIN( 265)					 ::hxsl::Shader v1;
HXDLIN( 265)					if ((curInstance == index)) {
HXLINE( 265)						v1 = curInstanceValue;
            					}
            					else {
HXLINE( 265)						 ::hxsl::ShaderList si = shaders;
HXDLIN( 265)						curInstance = index;
HXDLIN( 265)						while(true){
HXLINE( 265)							index = (index - 1);
HXDLIN( 265)							if (!((index > 0))) {
HXLINE( 265)								goto _hx_goto_29;
            							}
HXDLIN( 265)							si = si->next;
            						}
            						_hx_goto_29:;
HXDLIN( 265)						curInstanceValue = si->s;
HXDLIN( 265)						v1 = curInstanceValue;
            					}
HXDLIN( 265)					v = v1->getParamValue(p3->index);
HXDLIN( 265)					if (::hx::IsNull( v )) {
HXLINE( 265)						::String _hx_tmp = ((HX_("Missing param value ",dc,6b,43,bb) + ::Std_obj::string(curInstanceValue)) + HX_(".",2e,00,00,00));
HXDLIN( 265)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + p3->name)));
            					}
            				}
            				else {
HXLINE( 265)					bool opt = false;
HXDLIN( 265)					if (::hx::IsNotNull( p3->perObjectGlobal )) {
HXLINE( 265)						 ::Dynamic v1 = _gthis->globals->map->get(p3->perObjectGlobal->gid);
HXDLIN( 265)						if (::hx::IsNull( v1 )) {
HXLINE( 265)							::String v = ((HX_("Missing global value ",52,2e,82,e6) + p3->perObjectGlobal->path) + HX_(" for shader ",24,f1,2b,66));
HXDLIN( 265)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((v + _gthis->shaderInfo(shaders,p3->perObjectGlobal->path))));
            						}
HXDLIN( 265)						 ::hxsl::Type _g = p3->type;
HXDLIN( 265)						bool v2;
HXDLIN( 265)						if ((_g->_hx_getIndex() == 17)) {
HXLINE( 265)							int _g1 = _g->_hx_getInt(0);
HXDLIN( 265)							v2 = true;
            						}
            						else {
HXLINE( 265)							v2 = false;
            						}
HXDLIN( 265)						if (v2) {
HXLINE( 265)							v =  ::Dynamic(v1->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic));
            						}
            						else {
HXLINE( 265)							v = v1;
            						}
            					}
            					else {
HXLINE( 265)						 ::hxsl::ShaderList si = shaders;
HXDLIN( 265)						int n = p3->instance;
HXDLIN( 265)						while(true){
HXLINE( 265)							n = (n - 1);
HXDLIN( 265)							if (!((n > 0))) {
HXLINE( 265)								goto _hx_goto_30;
            							}
HXDLIN( 265)							si = si->next;
            						}
            						_hx_goto_30:;
HXDLIN( 265)						 ::Dynamic v1 = si->s->getParamValue(p3->index);
HXDLIN( 265)						bool v2;
HXDLIN( 265)						if (::hx::IsNull( v1 )) {
HXLINE( 265)							v2 = !(opt);
            						}
            						else {
HXLINE( 265)							v2 = false;
            						}
HXDLIN( 265)						if (v2) {
HXLINE( 265)							::String v = ((HX_("Missing param value ",dc,6b,43,bb) + ::Std_obj::string(si->s)) + HX_(".",2e,00,00,00));
HXDLIN( 265)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((v + p3->name)));
            						}
HXDLIN( 265)						v = v1;
            					}
            				}
HXDLIN( 265)				_gthis->fillRec(v,p3->type,ptr1,p3->pos);
HXDLIN( 265)				p3 = p3->next;
            			}
HXDLIN( 265)			int tid1 = 0;
HXDLIN( 265)			 ::hxsl::AllocParam p4 = s2->textures;
HXDLIN( 265)			while(::hx::IsNotNull( p4 )){
HXLINE( 265)				bool opt = !(::h3d::pass::ShaderManager_obj::STRICT);
HXDLIN( 265)				 ::Dynamic t;
HXDLIN( 265)				if (::hx::IsNotNull( p4->perObjectGlobal )) {
HXLINE( 265)					 ::Dynamic v = _gthis->globals->map->get(p4->perObjectGlobal->gid);
HXDLIN( 265)					if (::hx::IsNull( v )) {
HXLINE( 265)						::String t = ((HX_("Missing global value ",52,2e,82,e6) + p4->perObjectGlobal->path) + HX_(" for shader ",24,f1,2b,66));
HXDLIN( 265)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((t + _gthis->shaderInfo(shaders,p4->perObjectGlobal->path))));
            					}
HXDLIN( 265)					 ::hxsl::Type _g = p4->type;
HXDLIN( 265)					bool t1;
HXDLIN( 265)					if ((_g->_hx_getIndex() == 17)) {
HXLINE( 265)						int _g1 = _g->_hx_getInt(0);
HXDLIN( 265)						t1 = true;
            					}
            					else {
HXLINE( 265)						t1 = false;
            					}
HXDLIN( 265)					if (t1) {
HXLINE( 265)						t =  ::Dynamic(v->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic));
            					}
            					else {
HXLINE( 265)						t = v;
            					}
            				}
            				else {
HXLINE( 265)					 ::hxsl::ShaderList si = shaders;
HXDLIN( 265)					int n = p4->instance;
HXDLIN( 265)					while(true){
HXLINE( 265)						n = (n - 1);
HXDLIN( 265)						if (!((n > 0))) {
HXLINE( 265)							goto _hx_goto_32;
            						}
HXDLIN( 265)						si = si->next;
            					}
            					_hx_goto_32:;
HXDLIN( 265)					 ::Dynamic v = si->s->getParamValue(p4->index);
HXDLIN( 265)					bool t1;
HXDLIN( 265)					if (::hx::IsNull( v )) {
HXLINE( 265)						t1 = !(opt);
            					}
            					else {
HXLINE( 265)						t1 = false;
            					}
HXDLIN( 265)					if (t1) {
HXLINE( 265)						::String t = ((HX_("Missing param value ",dc,6b,43,bb) + ::Std_obj::string(si->s)) + HX_(".",2e,00,00,00));
HXDLIN( 265)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((t + p4->name)));
            					}
HXDLIN( 265)					t = v;
            				}
HXDLIN( 265)				if ((p4->pos < 0)) {
HXLINE( 265)					::Array< ::Dynamic> arr = ( (::Array< ::Dynamic>)(t) );
HXDLIN( 265)					{
HXLINE( 265)						int _g = 0;
HXDLIN( 265)						int _g1 = -(p4->pos);
HXDLIN( 265)						while((_g < _g1)){
HXLINE( 265)							_g = (_g + 1);
HXDLIN( 265)							int i = (_g - 1);
HXDLIN( 265)							{
HXLINE( 265)								tid1 = (tid1 + 1);
HXDLIN( 265)								buf2->tex->__unsafe_set((tid1 - 1),arr->__get(i).StaticCast<  ::h3d::mat::Texture >());
            							}
            						}
            					}
            				}
            				else {
HXLINE( 265)					tid1 = (tid1 + 1);
HXDLIN( 265)					buf2->tex->__unsafe_set((tid1 - 1),( ( ::h3d::mat::Texture)(t) ));
            				}
HXDLIN( 265)				p4 = p4->next;
            			}
HXDLIN( 265)			 ::hxsl::AllocParam p5 = s2->buffers;
HXDLIN( 265)			int bid1 = 0;
HXDLIN( 265)			while(::hx::IsNotNull( p5 )){
HXLINE( 265)				bool opt = !(::h3d::pass::ShaderManager_obj::STRICT);
HXDLIN( 265)				 ::h3d::Buffer b;
HXDLIN( 265)				if (::hx::IsNotNull( p5->perObjectGlobal )) {
HXLINE( 265)					 ::Dynamic v = _gthis->globals->map->get(p5->perObjectGlobal->gid);
HXDLIN( 265)					if (::hx::IsNull( v )) {
HXLINE( 265)						::String b = ((HX_("Missing global value ",52,2e,82,e6) + p5->perObjectGlobal->path) + HX_(" for shader ",24,f1,2b,66));
HXDLIN( 265)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((b + _gthis->shaderInfo(shaders,p5->perObjectGlobal->path))));
            					}
HXDLIN( 265)					 ::hxsl::Type _g = p5->type;
HXDLIN( 265)					bool b1;
HXDLIN( 265)					if ((_g->_hx_getIndex() == 17)) {
HXLINE( 265)						int _g1 = _g->_hx_getInt(0);
HXDLIN( 265)						b1 = true;
            					}
            					else {
HXLINE( 265)						b1 = false;
            					}
HXDLIN( 265)					if (b1) {
HXLINE( 265)						b = ( ( ::h3d::Buffer)(v->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic)) );
            					}
            					else {
HXLINE( 265)						b = ( ( ::h3d::Buffer)(v) );
            					}
            				}
            				else {
HXLINE( 265)					 ::hxsl::ShaderList si = shaders;
HXDLIN( 265)					int n = p5->instance;
HXDLIN( 265)					while(true){
HXLINE( 265)						n = (n - 1);
HXDLIN( 265)						if (!((n > 0))) {
HXLINE( 265)							goto _hx_goto_35;
            						}
HXDLIN( 265)						si = si->next;
            					}
            					_hx_goto_35:;
HXDLIN( 265)					 ::Dynamic v = si->s->getParamValue(p5->index);
HXDLIN( 265)					bool b1;
HXDLIN( 265)					if (::hx::IsNull( v )) {
HXLINE( 265)						b1 = !(opt);
            					}
            					else {
HXLINE( 265)						b1 = false;
            					}
HXDLIN( 265)					if (b1) {
HXLINE( 265)						::String b = ((HX_("Missing param value ",dc,6b,43,bb) + ::Std_obj::string(si->s)) + HX_(".",2e,00,00,00));
HXDLIN( 265)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((b + p5->name)));
            					}
HXDLIN( 265)					b = ( ( ::h3d::Buffer)(v) );
            				}
HXDLIN( 265)				{
HXLINE( 265)					bid1 = (bid1 + 1);
HXDLIN( 265)					buf2->buffers->__unsafe_set((bid1 - 1),b);
            				}
HXDLIN( 265)				p5 = p5->next;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ShaderManager_obj,fillParams,(void))

 ::hxsl::RuntimeShader ShaderManager_obj::compileShaders( ::hxsl::ShaderList shaders,::hx::Null< bool >  __o_batchMode){
            		bool batchMode = __o_batchMode.Default(false);
            	HX_STACKFRAME(&_hx_pos_4373ddb0fbfbd03a_268_compileShaders)
HXLINE( 269)		this->globals->maxChannels = 0;
HXLINE( 270)		{
HXLINE( 270)			 ::hxsl::ShaderList last = null();
HXDLIN( 270)			 ::hxsl::ShaderList _g_l = shaders;
HXDLIN( 270)			 ::hxsl::ShaderList _g_last = last;
HXDLIN( 270)			while(::hx::IsInstanceNotEq( _g_l,_g_last )){
HXLINE( 270)				 ::hxsl::Shader s = _g_l->s;
HXDLIN( 270)				_g_l = _g_l->next;
HXDLIN( 270)				 ::hxsl::Shader s1 = s;
HXDLIN( 270)				s1->updateConstants(this->globals);
            			}
            		}
HXLINE( 271)		this->currentOutput->next = shaders;
HXLINE( 272)		 ::hxsl::RuntimeShader s = this->shaderCache->link(this->currentOutput,batchMode);
HXLINE( 273)		this->currentOutput->next = null();
HXLINE( 274)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderManager_obj,compileShaders,return )

bool ShaderManager_obj::STRICT;


::hx::ObjectPtr< ShaderManager_obj > ShaderManager_obj::__new(::Array< ::Dynamic> output) {
	::hx::ObjectPtr< ShaderManager_obj > __this = new ShaderManager_obj();
	__this->__construct(output);
	return __this;
}

::hx::ObjectPtr< ShaderManager_obj > ShaderManager_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> output) {
	ShaderManager_obj *__this = (ShaderManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderManager_obj), true, "h3d.pass.ShaderManager"));
	*(void **)__this = ShaderManager_obj::_hx_vtable;
	__this->__construct(output);
	return __this;
}

ShaderManager_obj::ShaderManager_obj()
{
}

void ShaderManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderManager);
	HX_MARK_MEMBER_NAME(globals,"globals");
	HX_MARK_MEMBER_NAME(shaderCache,"shaderCache");
	HX_MARK_MEMBER_NAME(currentOutput,"currentOutput");
	HX_MARK_END_CLASS();
}

void ShaderManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(globals,"globals");
	HX_VISIT_MEMBER_NAME(shaderCache,"shaderCache");
	HX_VISIT_MEMBER_NAME(currentOutput,"currentOutput");
}

::hx::Val ShaderManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getPtr") ) { return ::hx::Val( getPtr_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { return ::hx::Val( globals ); }
		if (HX_FIELD_EQ(inName,"fillRec") ) { return ::hx::Val( fillRec_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setOutput") ) { return ::hx::Val( setOutput_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shaderInfo") ) { return ::hx::Val( shaderInfo_dyn() ); }
		if (HX_FIELD_EQ(inName,"fillParams") ) { return ::hx::Val( fillParams_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderCache") ) { return ::hx::Val( shaderCache ); }
		if (HX_FIELD_EQ(inName,"fillGlobals") ) { return ::hx::Val( fillGlobals_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentOutput") ) { return ::hx::Val( currentOutput ); }
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compileShaders") ) { return ::hx::Val( compileShaders_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShaderManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"STRICT") ) { outValue = ( STRICT ); return true; }
	}
	return false;
}

::hx::Val ShaderManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { globals=inValue.Cast<  ::hxsl::Globals >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderCache") ) { shaderCache=inValue.Cast<  ::hxsl::Cache >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentOutput") ) { currentOutput=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ShaderManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"STRICT") ) { STRICT=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ShaderManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("globals",b0,05,39,14));
	outFields->push(HX_("shaderCache",dd,44,41,18));
	outFields->push(HX_("currentOutput",1a,90,dd,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxsl::Globals */ ,(int)offsetof(ShaderManager_obj,globals),HX_("globals",b0,05,39,14)},
	{::hx::fsObject /*  ::hxsl::Cache */ ,(int)offsetof(ShaderManager_obj,shaderCache),HX_("shaderCache",dd,44,41,18)},
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(ShaderManager_obj,currentOutput),HX_("currentOutput",1a,90,dd,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ShaderManager_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &ShaderManager_obj::STRICT,HX_("STRICT",49,cb,b2,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ShaderManager_obj_sMemberFields[] = {
	HX_("globals",b0,05,39,14),
	HX_("shaderCache",dd,44,41,18),
	HX_("currentOutput",1a,90,dd,ef),
	HX_("setOutput",43,84,28,6c),
	HX_("fillRec",8d,76,ee,03),
	HX_("shaderInfo",33,1a,54,34),
	HX_("getPtr",f8,9a,24,a3),
	HX_("getParamValue",da,ab,64,fe),
	HX_("fillGlobals",6d,85,d4,37),
	HX_("fillParams",29,82,15,f1),
	HX_("compileShaders",7b,68,70,81),
	::String(null()) };

static void ShaderManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderManager_obj::STRICT,"STRICT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderManager_obj::STRICT,"STRICT");
};

#endif

::hx::Class ShaderManager_obj::__mClass;

static ::String ShaderManager_obj_sStaticFields[] = {
	HX_("STRICT",49,cb,b2,c3),
	::String(null())
};

void ShaderManager_obj::__register()
{
	ShaderManager_obj _hx_dummy;
	ShaderManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.ShaderManager",60,89,db,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ShaderManager_obj::__SetStatic;
	__mClass->mMarkFunc = ShaderManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShaderManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShaderManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4373ddb0fbfbd03a_5_boot)
HXDLIN(   5)		STRICT = true;
            	}
}

} // end namespace h3d
} // end namespace pass
