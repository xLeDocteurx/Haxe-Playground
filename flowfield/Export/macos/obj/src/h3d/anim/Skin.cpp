#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_anim_Joint
#include <h3d/anim/Joint.h>
#endif
#ifndef INCLUDED_h3d_anim_Skin
#include <h3d/anim/Skin.h>
#endif
#ifndef INCLUDED_h3d_anim__Skin_Influence
#include <h3d/anim/_Skin/Influence.h>
#endif
#ifndef INCLUDED_h3d_anim__Skin_Permut
#include <h3d/anim/_Skin/Permut.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_70_new,"h3d.anim.Skin","new",0xbcb16817,"h3d.anim.Skin.new","h3d/anim/Skin.hx",70,0xee0056d9)
HX_LOCAL_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_81_setJoints,"h3d.anim.Skin","setJoints",0xb3b21822,"h3d.anim.Skin.setJoints","h3d/anim/Skin.hx",81,0xee0056d9)
HX_LOCAL_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_90_addInfluence,"h3d.anim.Skin","addInfluence",0x2b08f8fd,"h3d.anim.Skin.addInfluence","h3d/anim/Skin.hx",90,0xee0056d9)
HX_LOCAL_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_98_sortInfluences,"h3d.anim.Skin","sortInfluences",0xe4f70b85,"h3d.anim.Skin.sortInfluences","h3d/anim/Skin.hx",98,0xee0056d9)
HX_LOCAL_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_102_isSplit,"h3d.anim.Skin","isSplit",0xacbdcdc7,"h3d.anim.Skin.isSplit","h3d/anim/Skin.hx",102,0xee0056d9)
HX_LOCAL_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_105_initWeights,"h3d.anim.Skin","initWeights",0x3945ed82,"h3d.anim.Skin.initWeights","h3d/anim/Skin.hx",105,0xee0056d9)
HX_LOCAL_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_138_sortByBindIndex,"h3d.anim.Skin","sortByBindIndex",0x0ac69eb7,"h3d.anim.Skin.sortByBindIndex","h3d/anim/Skin.hx",138,0xee0056d9)
HX_LOCAL_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_141_isSub,"h3d.anim.Skin","isSub",0x8212072d,"h3d.anim.Skin.isSub","h3d/anim/Skin.hx",141,0xee0056d9)
HX_LOCAL_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_153_merge,"h3d.anim.Skin","merge",0xc682d62f,"h3d.anim.Skin.merge","h3d/anim/Skin.hx",153,0xee0056d9)
HX_LOCAL_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_165_jointsDiff,"h3d.anim.Skin","jointsDiff",0x0ccbf5b7,"h3d.anim.Skin.jointsDiff","h3d/anim/Skin.hx",165,0xee0056d9)
HX_LOCAL_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_186_split,"h3d.anim.Skin","split",0x422b1e51,"h3d.anim.Skin.split","h3d/anim/Skin.hx",186,0xee0056d9)
HX_LOCAL_STACK_FRAME(_hx_pos_5ceaaf6f3a346955_300_split,"h3d.anim.Skin","split",0x422b1e51,"h3d.anim.Skin.split","h3d/anim/Skin.hx",300,0xee0056d9)
namespace h3d{
namespace anim{

void Skin_obj::__construct(::String name,int vertexCount,int bonesPerVertex){
            	HX_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_70_new)
HXLINE(  71)		this->name = name;
HXLINE(  72)		this->vertexCount = vertexCount;
HXLINE(  73)		this->bonesPerVertex = bonesPerVertex;
HXLINE(  74)		if ((vertexCount > 0)) {
HXLINE(  75)			::Array< int > this1 = ::Array_obj< int >::__new((vertexCount * bonesPerVertex));
HXDLIN(  75)			this->vertexJoints = this1;
HXLINE(  76)			::Array< Float > this2 = ::Array_obj< Float >::__new((vertexCount * bonesPerVertex));
HXDLIN(  76)			this->vertexWeights = this2;
HXLINE(  77)			this->envelop = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}

Dynamic Skin_obj::__CreateEmpty() { return new Skin_obj; }

void *Skin_obj::_hx_vtable = 0;

Dynamic Skin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Skin_obj > _hx_result = new Skin_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Skin_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x184a9e03;
}

void Skin_obj::setJoints(::Array< ::Dynamic> joints,::Array< ::Dynamic> roots){
            	HX_GC_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_81_setJoints)
HXLINE(  82)		this->rootJoints = roots;
HXLINE(  83)		this->allJoints = joints;
HXLINE(  84)		this->namedJoints =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  85)		{
HXLINE(  85)			int _g = 0;
HXDLIN(  85)			while((_g < joints->length)){
HXLINE(  85)				 ::h3d::anim::Joint j = joints->__get(_g).StaticCast<  ::h3d::anim::Joint >();
HXDLIN(  85)				_g = (_g + 1);
HXLINE(  86)				if (::hx::IsNotNull( j->name )) {
HXLINE(  87)					this->namedJoints->set(j->name,j);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Skin_obj,setJoints,(void))

void Skin_obj::addInfluence(int vid, ::h3d::anim::Joint j,Float w){
            	HX_GC_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_90_addInfluence)
HXLINE(  91)		::Array< ::Dynamic> il = this->envelop->__get(vid).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  92)		if (::hx::IsNull( il )) {
HXLINE(  93)			il = (this->envelop[vid] = ::Array_obj< ::Dynamic>::__new(0));
            		}
HXLINE(  94)		il->push( ::h3d::anim::_Skin::Influence_obj::__alloc( HX_CTX ,j,w));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Skin_obj,addInfluence,(void))

int Skin_obj::sortInfluences( ::h3d::anim::_Skin::Influence i1, ::h3d::anim::_Skin::Influence i2){
            	HX_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_98_sortInfluences)
HXDLIN(  98)		if ((i2->w > i1->w)) {
HXDLIN(  98)			return 1;
            		}
            		else {
HXDLIN(  98)			return -1;
            		}
HXDLIN(  98)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Skin_obj,sortInfluences,return )

bool Skin_obj::isSplit(){
            	HX_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_102_isSplit)
HXDLIN( 102)		return ::hx::IsNotNull( this->splitJoints );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Skin_obj,isSplit,return )

void Skin_obj::initWeights(){
            	HX_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_105_initWeights)
HXLINE( 106)		this->boundJoints = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 107)		int pos = 0;
HXLINE( 108)		{
HXLINE( 108)			int _g = 0;
HXDLIN( 108)			int _g1 = this->vertexCount;
HXDLIN( 108)			while((_g < _g1)){
HXLINE( 108)				_g = (_g + 1);
HXDLIN( 108)				int i = (_g - 1);
HXLINE( 109)				::Array< ::Dynamic> il = this->envelop->__get(i).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 110)				if (::hx::IsNull( il )) {
HXLINE( 110)					il = ::Array_obj< ::Dynamic>::__new(0);
            				}
HXLINE( 111)				::haxe::ds::ArraySort_obj::sort(il,this->sortInfluences_dyn());
HXLINE( 112)				if ((il->length > this->bonesPerVertex)) {
HXLINE( 113)					il = il->slice(0,this->bonesPerVertex);
            				}
HXLINE( 114)				Float tw = ((Float)0.);
HXLINE( 115)				{
HXLINE( 115)					int _g1 = 0;
HXDLIN( 115)					while((_g1 < il->length)){
HXLINE( 115)						 ::h3d::anim::_Skin::Influence i = il->__get(_g1).StaticCast<  ::h3d::anim::_Skin::Influence >();
HXDLIN( 115)						_g1 = (_g1 + 1);
HXLINE( 116)						tw = (tw + i->w);
            					}
            				}
HXLINE( 117)				tw = (( (Float)(1) ) / tw);
HXLINE( 118)				{
HXLINE( 118)					int _g2 = 0;
HXDLIN( 118)					int _g3 = this->bonesPerVertex;
HXDLIN( 118)					while((_g2 < _g3)){
HXLINE( 118)						_g2 = (_g2 + 1);
HXDLIN( 118)						int i = (_g2 - 1);
HXLINE( 119)						 ::h3d::anim::_Skin::Influence i1 = il->__get(i).StaticCast<  ::h3d::anim::_Skin::Influence >();
HXLINE( 120)						if (::hx::IsNull( i1 )) {
HXLINE( 121)							this->vertexJoints->__unsafe_set(pos,0);
HXLINE( 122)							this->vertexWeights->__unsafe_set(pos,0);
            						}
            						else {
HXLINE( 124)							if ((i1->j->bindIndex == -1)) {
HXLINE( 125)								i1->j->bindIndex = this->boundJoints->length;
HXLINE( 126)								this->boundJoints->push(i1->j);
            							}
HXLINE( 128)							this->vertexJoints->__unsafe_set(pos,i1->j->bindIndex);
HXLINE( 129)							this->vertexWeights->__unsafe_set(pos,(i1->w * tw));
            						}
HXLINE( 131)						pos = (pos + 1);
            					}
            				}
            			}
            		}
HXLINE( 134)		this->envelop = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Skin_obj,initWeights,(void))

int Skin_obj::sortByBindIndex( ::h3d::anim::Joint j1, ::h3d::anim::Joint j2){
            	HX_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_138_sortByBindIndex)
HXDLIN( 138)		return (j1->bindIndex - j2->bindIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Skin_obj,sortByBindIndex,return )

bool Skin_obj::isSub(::Array< ::Dynamic> a,::Array< ::Dynamic> b){
            	HX_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_141_isSub)
HXLINE( 142)		int j = 0;
HXLINE( 143)		int max = b->length;
HXLINE( 144)		{
HXLINE( 144)			int _g = 0;
HXDLIN( 144)			while((_g < a->length)){
HXLINE( 144)				 ::h3d::anim::Joint e = a->__get(_g).StaticCast<  ::h3d::anim::Joint >();
HXDLIN( 144)				_g = (_g + 1);
HXLINE( 145)				while(true){
HXLINE( 145)					j = (j + 1);
HXDLIN( 145)					if (!(::hx::IsInstanceNotEq( e,b->__get((j - 1)).StaticCast<  ::h3d::anim::Joint >() ))) {
HXLINE( 145)						goto _hx_goto_12;
            					}
HXLINE( 146)					if ((j >= max)) {
HXLINE( 146)						return false;
            					}
            				}
            				_hx_goto_12:;
            			}
            		}
HXLINE( 150)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Skin_obj,isSub,return )

bool Skin_obj::merge(::Array< ::Dynamic> permuts){
            	HX_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_153_merge)
HXLINE( 154)		{
HXLINE( 154)			int _g = 0;
HXDLIN( 154)			while((_g < permuts->length)){
HXLINE( 154)				 ::h3d::anim::_Skin::Permut p1 = permuts->__get(_g).StaticCast<  ::h3d::anim::_Skin::Permut >();
HXDLIN( 154)				_g = (_g + 1);
HXLINE( 155)				{
HXLINE( 155)					int _g1 = 0;
HXDLIN( 155)					while((_g1 < permuts->length)){
HXLINE( 155)						 ::h3d::anim::_Skin::Permut p2 = permuts->__get(_g1).StaticCast<  ::h3d::anim::_Skin::Permut >();
HXDLIN( 155)						_g1 = (_g1 + 1);
HXLINE( 156)						bool _hx_tmp;
HXDLIN( 156)						bool _hx_tmp1;
HXDLIN( 156)						if (::hx::IsInstanceNotEq( p1,p2 )) {
HXLINE( 156)							_hx_tmp1 = (p1->material == p2->material);
            						}
            						else {
HXLINE( 156)							_hx_tmp1 = false;
            						}
HXDLIN( 156)						if (_hx_tmp1) {
HXLINE( 156)							_hx_tmp = this->isSub(p1->joints,p2->joints);
            						}
            						else {
HXLINE( 156)							_hx_tmp = false;
            						}
HXDLIN( 156)						if (_hx_tmp) {
HXLINE( 157)							{
HXLINE( 157)								int _g = 0;
HXDLIN( 157)								::Array< int > _g1 = p1->triangles;
HXDLIN( 157)								while((_g < _g1->length)){
HXLINE( 157)									int t = _g1->__get(_g);
HXDLIN( 157)									_g = (_g + 1);
HXLINE( 158)									p2->triangles->push(t);
            								}
            							}
HXLINE( 159)							permuts->remove(p1);
HXLINE( 160)							return true;
            						}
            					}
            				}
            			}
            		}
HXLINE( 162)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Skin_obj,merge,return )

int Skin_obj::jointsDiff( ::h3d::anim::_Skin::Permut p1, ::h3d::anim::_Skin::Permut p2){
            	HX_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_165_jointsDiff)
HXLINE( 166)		int diff = 0;
HXLINE( 167)		int i = 0;
HXDLIN( 167)		int j = 0;
HXLINE( 168)		int imax = p1->joints->length;
HXDLIN( 168)		int jmax = p2->joints->length;
HXLINE( 169)		while(true){
HXLINE( 169)			bool _hx_tmp;
HXDLIN( 169)			if ((i < imax)) {
HXLINE( 169)				_hx_tmp = (j < jmax);
            			}
            			else {
HXLINE( 169)				_hx_tmp = false;
            			}
HXDLIN( 169)			if (!(_hx_tmp)) {
HXLINE( 169)				goto _hx_goto_18;
            			}
HXLINE( 170)			 ::h3d::anim::Joint j1 = p1->joints->__get(i).StaticCast<  ::h3d::anim::Joint >();
HXLINE( 171)			 ::h3d::anim::Joint j2 = p2->joints->__get(j).StaticCast<  ::h3d::anim::Joint >();
HXLINE( 172)			if (::hx::IsInstanceEq( j1,j2 )) {
HXLINE( 173)				i = (i + 1);
HXLINE( 174)				j = (j + 1);
            			}
            			else {
HXLINE( 176)				diff = (diff + 1);
HXLINE( 177)				if ((j1->bindIndex < j2->bindIndex)) {
HXLINE( 178)					i = (i + 1);
            				}
            				else {
HXLINE( 180)					j = (j + 1);
            				}
            			}
            		}
            		_hx_goto_18:;
HXLINE( 183)		return ((diff + (imax - i)) + (jmax - j));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Skin_obj,jointsDiff,return )

bool Skin_obj::split(int maxBones,::Array< int > index,::Array< int > triangleMaterials){
            	HX_GC_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_186_split)
HXLINE( 187)		if (::hx::IsNotNull( this->splitJoints )) {
HXLINE( 188)			return true;
            		}
HXLINE( 189)		if ((this->boundJoints->length <= maxBones)) {
HXLINE( 190)			return false;
            		}
HXLINE( 192)		this->splitJoints = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 193)		::Array< int > this1 = ::Array_obj< int >::__new(::Std_obj::_hx_int((( (Float)(index->length) ) / ( (Float)(3) ))));
HXDLIN( 193)		this->triangleGroups = this1;
HXLINE( 195)		::Array< ::Dynamic> permuts = ::Array_obj< ::Dynamic>::__new();
HXLINE( 199)		{
HXLINE( 199)			int _g = 0;
HXDLIN( 199)			int _g1 = ::Std_obj::_hx_int((( (Float)(index->length) ) / ( (Float)(3) )));
HXDLIN( 199)			while((_g < _g1)){
HXLINE( 199)				_g = (_g + 1);
HXDLIN( 199)				int tri = (_g - 1);
HXLINE( 200)				int iid = (tri * 3);
HXLINE( 201)				int mid;
HXDLIN( 201)				if (::hx::IsNull( triangleMaterials )) {
HXLINE( 201)					mid = 0;
            				}
            				else {
HXLINE( 201)					mid = triangleMaterials->__get(tri);
            				}
HXLINE( 202)				::Array< ::Dynamic> jl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 204)				{
HXLINE( 204)					int _g1 = 0;
HXDLIN( 204)					while((_g1 < 3)){
HXLINE( 204)						_g1 = (_g1 + 1);
HXDLIN( 204)						int i = (_g1 - 1);
HXLINE( 205)						int vid = index->__get((iid + i));
HXLINE( 206)						{
HXLINE( 206)							int _g = 0;
HXDLIN( 206)							int _g2 = this->bonesPerVertex;
HXDLIN( 206)							while((_g < _g2)){
HXLINE( 206)								_g = (_g + 1);
HXDLIN( 206)								int b = (_g - 1);
HXLINE( 207)								int bidx = ((vid * this->bonesPerVertex) + b);
HXLINE( 208)								if (::hx::IsEq( _hx_array_unsafe_get(this->vertexWeights,bidx),0 )) {
HXLINE( 208)									continue;
            								}
HXLINE( 209)								 ::h3d::anim::Joint j = this->boundJoints->__get(( (int)(_hx_array_unsafe_get(this->vertexJoints,bidx)) )).StaticCast<  ::h3d::anim::Joint >();
HXLINE( 210)								if ((j->splitIndex != iid)) {
HXLINE( 211)									j->splitIndex = iid;
HXLINE( 212)									jl->push(j);
            								}
            							}
            						}
            					}
            				}
HXLINE( 216)				jl->sort(this->sortByBindIndex_dyn());
HXLINE( 218)				{
HXLINE( 218)					int _g2 = 0;
HXDLIN( 218)					while((_g2 < permuts->length)){
HXLINE( 218)						 ::h3d::anim::_Skin::Permut p2 = permuts->__get(_g2).StaticCast<  ::h3d::anim::_Skin::Permut >();
HXDLIN( 218)						_g2 = (_g2 + 1);
HXLINE( 219)						bool _hx_tmp;
HXDLIN( 219)						if ((p2->material == mid)) {
HXLINE( 219)							_hx_tmp = this->isSub(jl,p2->joints);
            						}
            						else {
HXLINE( 219)							_hx_tmp = false;
            						}
HXDLIN( 219)						if (_hx_tmp) {
HXLINE( 220)							p2->triangles->push(tri);
HXLINE( 221)							jl = null();
HXLINE( 222)							goto _hx_goto_23;
            						}
            					}
            					_hx_goto_23:;
            				}
HXLINE( 224)				if (::hx::IsNull( jl )) {
HXLINE( 224)					continue;
            				}
HXLINE( 226)				{
HXLINE( 226)					int _g3 = 0;
HXDLIN( 226)					while((_g3 < permuts->length)){
HXLINE( 226)						 ::h3d::anim::_Skin::Permut p2 = permuts->__get(_g3).StaticCast<  ::h3d::anim::_Skin::Permut >();
HXDLIN( 226)						_g3 = (_g3 + 1);
HXLINE( 227)						bool _hx_tmp;
HXDLIN( 227)						if ((p2->material == mid)) {
HXLINE( 227)							_hx_tmp = this->isSub(p2->joints,jl);
            						}
            						else {
HXLINE( 227)							_hx_tmp = false;
            						}
HXDLIN( 227)						if (_hx_tmp) {
HXLINE( 228)							p2->joints = jl;
HXLINE( 229)							p2->triangles->push(tri);
HXLINE( 230)							jl = null();
HXLINE( 231)							goto _hx_goto_24;
            						}
            					}
            					_hx_goto_24:;
            				}
HXLINE( 234)				if (::hx::IsNull( jl )) {
HXLINE( 234)					continue;
            				}
HXLINE( 236)				 ::h3d::anim::_Skin::Permut pr =  ::h3d::anim::_Skin::Permut_obj::__alloc( HX_CTX );
HXLINE( 237)				pr->joints = jl;
HXLINE( 238)				pr->triangles = ::Array_obj< int >::__new(1)->init(0,tri);
HXLINE( 239)				pr->material = mid;
HXLINE( 240)				permuts->push(pr);
            			}
            		}
HXLINE( 246)		while(true){
HXLINE( 248)			while(this->merge(permuts)){
            			}
HXLINE( 252)			int minDif = 100000;
HXDLIN( 252)			int minTot = 100000;
HXDLIN( 252)			 ::h3d::anim::_Skin::Permut minP1 = null();
HXDLIN( 252)			 ::h3d::anim::_Skin::Permut minP2 = null();
HXLINE( 253)			{
HXLINE( 253)				int _g = 0;
HXDLIN( 253)				int _g1 = permuts->length;
HXDLIN( 253)				while((_g < _g1)){
HXLINE( 253)					_g = (_g + 1);
HXDLIN( 253)					int i = (_g - 1);
HXLINE( 254)					 ::h3d::anim::_Skin::Permut p1 = permuts->__get(i).StaticCast<  ::h3d::anim::_Skin::Permut >();
HXLINE( 255)					if ((p1->joints->length == maxBones)) {
HXLINE( 255)						continue;
            					}
HXLINE( 256)					{
HXLINE( 256)						int _g1 = (i + 1);
HXDLIN( 256)						int _g2 = permuts->length;
HXDLIN( 256)						while((_g1 < _g2)){
HXLINE( 256)							_g1 = (_g1 + 1);
HXDLIN( 256)							int j = (_g1 - 1);
HXLINE( 257)							 ::h3d::anim::_Skin::Permut p2 = permuts->__get(j).StaticCast<  ::h3d::anim::_Skin::Permut >();
HXLINE( 258)							bool _hx_tmp;
HXDLIN( 258)							if ((p2->joints->length != maxBones)) {
HXLINE( 258)								_hx_tmp = (p1->material != p2->material);
            							}
            							else {
HXLINE( 258)								_hx_tmp = true;
            							}
HXDLIN( 258)							if (_hx_tmp) {
HXLINE( 258)								continue;
            							}
HXLINE( 259)							int count = this->jointsDiff(p1,p2);
HXLINE( 260)							int tot = (count + (((p1->joints->length + p2->joints->length) - count) >> 1));
HXLINE( 261)							bool _hx_tmp1;
HXDLIN( 261)							bool _hx_tmp2;
HXDLIN( 261)							if ((tot <= maxBones)) {
HXLINE( 261)								_hx_tmp2 = (tot > minTot);
            							}
            							else {
HXLINE( 261)								_hx_tmp2 = true;
            							}
HXDLIN( 261)							if (!(_hx_tmp2)) {
HXLINE( 261)								if ((tot == minTot)) {
HXLINE( 261)									_hx_tmp1 = (count > minDif);
            								}
            								else {
HXLINE( 261)									_hx_tmp1 = false;
            								}
            							}
            							else {
HXLINE( 261)								_hx_tmp1 = true;
            							}
HXDLIN( 261)							if (_hx_tmp1) {
HXLINE( 261)								continue;
            							}
HXLINE( 262)							minDif = count;
HXLINE( 263)							minTot = tot;
HXLINE( 264)							minP1 = p1;
HXLINE( 265)							minP2 = p2;
            						}
            					}
            				}
            			}
HXLINE( 269)			if (::hx::IsNull( minP1 )) {
HXLINE( 269)				goto _hx_goto_25;
            			}
HXLINE( 272)			 ::h3d::anim::_Skin::Permut p1 = minP1;
HXDLIN( 272)			 ::h3d::anim::_Skin::Permut p2 = minP2;
HXLINE( 273)			{
HXLINE( 273)				int _g2 = 0;
HXDLIN( 273)				::Array< ::Dynamic> _g3 = p1->joints;
HXDLIN( 273)				while((_g2 < _g3->length)){
HXLINE( 273)					 ::h3d::anim::Joint j = _g3->__get(_g2).StaticCast<  ::h3d::anim::Joint >();
HXDLIN( 273)					_g2 = (_g2 + 1);
HXLINE( 274)					p2->joints->remove(j);
HXLINE( 275)					p2->joints->push(j);
            				}
            			}
HXLINE( 277)			p2->joints->sort(this->sortByBindIndex_dyn());
HXLINE( 278)			{
HXLINE( 278)				int _g4 = 0;
HXDLIN( 278)				::Array< int > _g5 = p1->triangles;
HXDLIN( 278)				while((_g4 < _g5->length)){
HXLINE( 278)					int t = _g5->__get(_g4);
HXDLIN( 278)					_g4 = (_g4 + 1);
HXLINE( 279)					p2->triangles->push(t);
            				}
            			}
HXLINE( 280)			permuts->remove(p1);
            		}
            		_hx_goto_25:;
HXLINE( 285)		{
HXLINE( 285)			int _g2 = 0;
HXDLIN( 285)			int _g3 = permuts->length;
HXDLIN( 285)			while((_g2 < _g3)){
HXLINE( 285)				_g2 = (_g2 + 1);
HXDLIN( 285)				int i = (_g2 - 1);
HXLINE( 286)				{
HXLINE( 286)					int _g = 0;
HXDLIN( 286)					::Array< int > _g1 = permuts->__get(i).StaticCast<  ::h3d::anim::_Skin::Permut >()->triangles;
HXDLIN( 286)					while((_g < _g1->length)){
HXLINE( 286)						int tri = _g1->__get(_g);
HXDLIN( 286)						_g = (_g + 1);
HXLINE( 287)						this->triangleGroups->__unsafe_set(tri,i);
            					}
            				}
            			}
            		}
HXLINE( 290)		::Array< ::Dynamic> jointsPermuts = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 291)		{
HXLINE( 291)			int _g4 = 0;
HXDLIN( 291)			::Array< ::Dynamic> _g5 = this->boundJoints;
HXDLIN( 291)			while((_g4 < _g5->length)){
HXLINE( 291)				 ::h3d::anim::Joint j = _g5->__get(_g4).StaticCast<  ::h3d::anim::Joint >();
HXDLIN( 291)				_g4 = (_g4 + 1);
HXLINE( 292)				::Array< ::Dynamic> pl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 293)				{
HXLINE( 293)					int _g = 0;
HXDLIN( 293)					while((_g < permuts->length)){
HXLINE( 293)						 ::h3d::anim::_Skin::Permut p = permuts->__get(_g).StaticCast<  ::h3d::anim::_Skin::Permut >();
HXDLIN( 293)						_g = (_g + 1);
HXLINE( 294)						if ((p->joints->indexOf(j,null()) >= 0)) {
HXLINE( 295)							pl->push(p);
            						}
            					}
            				}
HXLINE( 296)				jointsPermuts->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("priority",64,7b,3e,bb),0)
            					->setFixed(1,HX_("j",6a,00,00,00),j)
            					->setFixed(2,HX_("pl",fc,61,00,00),pl)));
            			}
            		}
HXLINE( 299)		while(true){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            			int _hx_run( ::Dynamic j1, ::Dynamic j2){
            				HX_GC_STACKFRAME(&_hx_pos_5ceaaf6f3a346955_300_split)
HXLINE( 300)				return ((( (::Array< ::Dynamic>)(j2->__Field(HX_("pl",fc,61,00,00),::hx::paccDynamic)) )->length + (( (int)(j2->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic)) ) * 100)) - (( (::Array< ::Dynamic>)(j1->__Field(HX_("pl",fc,61,00,00),::hx::paccDynamic)) )->length + (( (int)(j1->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic)) ) * 100)));
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 300)			jointsPermuts->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 302)			{
HXLINE( 302)				int _g = 0;
HXDLIN( 302)				while((_g < permuts->length)){
HXLINE( 302)					 ::h3d::anim::_Skin::Permut p = permuts->__get(_g).StaticCast<  ::h3d::anim::_Skin::Permut >();
HXDLIN( 302)					_g = (_g + 1);
HXLINE( 303)					p->indexedJoints = ::Array_obj< ::Dynamic>::__new(0);
            				}
            			}
HXLINE( 305)			bool fail = false;
HXLINE( 306)			{
HXLINE( 306)				int _g1 = 0;
HXDLIN( 306)				while((_g1 < jointsPermuts->length)){
HXLINE( 306)					 ::Dynamic j = jointsPermuts->__get(_g1);
HXDLIN( 306)					_g1 = (_g1 + 1);
HXLINE( 307)					( ( ::h3d::anim::Joint)(j->__Field(HX_("j",6a,00,00,00),::hx::paccDynamic)) )->splitIndex = -1;
HXLINE( 308)					{
HXLINE( 308)						int _g = 0;
HXDLIN( 308)						int _g2 = maxBones;
HXDLIN( 308)						while((_g < _g2)){
HXLINE( 308)							_g = (_g + 1);
HXDLIN( 308)							int id = (_g - 1);
HXLINE( 309)							bool ok = true;
HXLINE( 310)							{
HXLINE( 310)								int _g1 = 0;
HXDLIN( 310)								::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(j->__Field(HX_("pl",fc,61,00,00),::hx::paccDynamic)) );
HXDLIN( 310)								while((_g1 < _g2->length)){
HXLINE( 310)									 ::h3d::anim::_Skin::Permut p = _g2->__get(_g1).StaticCast<  ::h3d::anim::_Skin::Permut >();
HXDLIN( 310)									_g1 = (_g1 + 1);
HXLINE( 311)									if (::hx::IsNotNull( p->indexedJoints->__get(id).StaticCast<  ::h3d::anim::Joint >() )) {
HXLINE( 312)										ok = false;
HXLINE( 313)										goto _hx_goto_39;
            									}
            								}
            								_hx_goto_39:;
            							}
HXLINE( 315)							if (ok) {
HXLINE( 316)								( ( ::h3d::anim::Joint)(j->__Field(HX_("j",6a,00,00,00),::hx::paccDynamic)) )->splitIndex = id;
HXLINE( 317)								{
HXLINE( 317)									int _g = 0;
HXDLIN( 317)									::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(j->__Field(HX_("pl",fc,61,00,00),::hx::paccDynamic)) );
HXDLIN( 317)									while((_g < _g1->length)){
HXLINE( 317)										 ::h3d::anim::_Skin::Permut p = _g1->__get(_g).StaticCast<  ::h3d::anim::_Skin::Permut >();
HXDLIN( 317)										_g = (_g + 1);
HXLINE( 318)										p->indexedJoints[id] = ( ( ::h3d::anim::Joint)(j->__Field(HX_("j",6a,00,00,00),::hx::paccDynamic)) );
            									}
            								}
HXLINE( 319)								goto _hx_goto_38;
            							}
            						}
            						_hx_goto_38:;
            					}
HXLINE( 324)					if ((( ( ::h3d::anim::Joint)(j->__Field(HX_("j",6a,00,00,00),::hx::paccDynamic)) )->splitIndex < 0)) {
HXLINE( 325)						::hx::FieldRef((j).mPtr,HX_("priority",64,7b,3e,bb))++;
HXLINE( 326)						if (::hx::IsGreater( j->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic),10 )) {
HXLINE( 327)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Failed to assign index while spliting skin",e9,f1,e1,09)));
            						}
HXLINE( 328)						fail = true;
HXLINE( 329)						goto _hx_goto_37;
            					}
            				}
            				_hx_goto_37:;
            			}
HXLINE( 332)			if (!(fail)) {
HXLINE( 332)				goto _hx_goto_35;
            			}
            		}
            		_hx_goto_35:;
HXLINE( 336)		this->splitJoints = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 337)		{
HXLINE( 337)			int _g6 = 0;
HXDLIN( 337)			while((_g6 < permuts->length)){
HXLINE( 337)				 ::h3d::anim::_Skin::Permut p = permuts->__get(_g6).StaticCast<  ::h3d::anim::_Skin::Permut >();
HXDLIN( 337)				_g6 = (_g6 + 1);
HXLINE( 338)				::Array< ::Dynamic> jl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 339)				{
HXLINE( 339)					int _g = 0;
HXDLIN( 339)					int _g1 = p->indexedJoints->length;
HXDLIN( 339)					while((_g < _g1)){
HXLINE( 339)						_g = (_g + 1);
HXDLIN( 339)						int i = (_g - 1);
HXLINE( 340)						 ::h3d::anim::Joint j = p->indexedJoints->__get(i).StaticCast<  ::h3d::anim::Joint >();
HXLINE( 341)						if (::hx::IsNull( j )) {
HXLINE( 341)							j = this->boundJoints->__get(0).StaticCast<  ::h3d::anim::Joint >();
            						}
HXLINE( 342)						jl->push(j);
            					}
            				}
HXLINE( 344)				this->splitJoints->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("joints",e9,e7,09,91),jl)
            					->setFixed(1,HX_("material",a7,5c,a5,f0),p->material)));
            			}
            		}
HXLINE( 348)		{
HXLINE( 348)			int _g7 = 0;
HXDLIN( 348)			int _g8 = this->vertexJoints->length;
HXDLIN( 348)			while((_g7 < _g8)){
HXLINE( 348)				_g7 = (_g7 + 1);
HXDLIN( 348)				int i = (_g7 - 1);
HXLINE( 349)				{
HXLINE( 349)					::Array< int > this1 = this->vertexJoints;
HXDLIN( 349)					int val = this->boundJoints->__get(( (int)(_hx_array_unsafe_get(this->vertexJoints,i)) )).StaticCast<  ::h3d::anim::Joint >()->splitIndex;
HXDLIN( 349)					this1->__unsafe_set(i,val);
            				}
            			}
            		}
HXLINE( 351)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Skin_obj,split,return )


::hx::ObjectPtr< Skin_obj > Skin_obj::__new(::String name,int vertexCount,int bonesPerVertex) {
	::hx::ObjectPtr< Skin_obj > __this = new Skin_obj();
	__this->__construct(name,vertexCount,bonesPerVertex);
	return __this;
}

::hx::ObjectPtr< Skin_obj > Skin_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,int vertexCount,int bonesPerVertex) {
	Skin_obj *__this = (Skin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Skin_obj), true, "h3d.anim.Skin"));
	*(void **)__this = Skin_obj::_hx_vtable;
	__this->__construct(name,vertexCount,bonesPerVertex);
	return __this;
}

Skin_obj::Skin_obj()
{
}

void Skin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Skin);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(vertexCount,"vertexCount");
	HX_MARK_MEMBER_NAME(bonesPerVertex,"bonesPerVertex");
	HX_MARK_MEMBER_NAME(vertexJoints,"vertexJoints");
	HX_MARK_MEMBER_NAME(vertexWeights,"vertexWeights");
	HX_MARK_MEMBER_NAME(rootJoints,"rootJoints");
	HX_MARK_MEMBER_NAME(namedJoints,"namedJoints");
	HX_MARK_MEMBER_NAME(allJoints,"allJoints");
	HX_MARK_MEMBER_NAME(boundJoints,"boundJoints");
	HX_MARK_MEMBER_NAME(primitive,"primitive");
	HX_MARK_MEMBER_NAME(splitJoints,"splitJoints");
	HX_MARK_MEMBER_NAME(triangleGroups,"triangleGroups");
	HX_MARK_MEMBER_NAME(envelop,"envelop");
	HX_MARK_END_CLASS();
}

void Skin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(vertexCount,"vertexCount");
	HX_VISIT_MEMBER_NAME(bonesPerVertex,"bonesPerVertex");
	HX_VISIT_MEMBER_NAME(vertexJoints,"vertexJoints");
	HX_VISIT_MEMBER_NAME(vertexWeights,"vertexWeights");
	HX_VISIT_MEMBER_NAME(rootJoints,"rootJoints");
	HX_VISIT_MEMBER_NAME(namedJoints,"namedJoints");
	HX_VISIT_MEMBER_NAME(allJoints,"allJoints");
	HX_VISIT_MEMBER_NAME(boundJoints,"boundJoints");
	HX_VISIT_MEMBER_NAME(primitive,"primitive");
	HX_VISIT_MEMBER_NAME(splitJoints,"splitJoints");
	HX_VISIT_MEMBER_NAME(triangleGroups,"triangleGroups");
	HX_VISIT_MEMBER_NAME(envelop,"envelop");
}

::hx::Val Skin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isSub") ) { return ::hx::Val( isSub_dyn() ); }
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		if (HX_FIELD_EQ(inName,"split") ) { return ::hx::Val( split_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"envelop") ) { return ::hx::Val( envelop ); }
		if (HX_FIELD_EQ(inName,"isSplit") ) { return ::hx::Val( isSplit_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allJoints") ) { return ::hx::Val( allJoints ); }
		if (HX_FIELD_EQ(inName,"primitive") ) { return ::hx::Val( primitive ); }
		if (HX_FIELD_EQ(inName,"setJoints") ) { return ::hx::Val( setJoints_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rootJoints") ) { return ::hx::Val( rootJoints ); }
		if (HX_FIELD_EQ(inName,"jointsDiff") ) { return ::hx::Val( jointsDiff_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexCount") ) { return ::hx::Val( vertexCount ); }
		if (HX_FIELD_EQ(inName,"namedJoints") ) { return ::hx::Val( namedJoints ); }
		if (HX_FIELD_EQ(inName,"boundJoints") ) { return ::hx::Val( boundJoints ); }
		if (HX_FIELD_EQ(inName,"splitJoints") ) { return ::hx::Val( splitJoints ); }
		if (HX_FIELD_EQ(inName,"initWeights") ) { return ::hx::Val( initWeights_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexJoints") ) { return ::hx::Val( vertexJoints ); }
		if (HX_FIELD_EQ(inName,"addInfluence") ) { return ::hx::Val( addInfluence_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"vertexWeights") ) { return ::hx::Val( vertexWeights ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bonesPerVertex") ) { return ::hx::Val( bonesPerVertex ); }
		if (HX_FIELD_EQ(inName,"triangleGroups") ) { return ::hx::Val( triangleGroups ); }
		if (HX_FIELD_EQ(inName,"sortInfluences") ) { return ::hx::Val( sortInfluences_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sortByBindIndex") ) { return ::hx::Val( sortByBindIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Skin_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"envelop") ) { envelop=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allJoints") ) { allJoints=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"primitive") ) { primitive=inValue.Cast<  ::h3d::prim::Primitive >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rootJoints") ) { rootJoints=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexCount") ) { vertexCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"namedJoints") ) { namedJoints=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundJoints") ) { boundJoints=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"splitJoints") ) { splitJoints=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexJoints") ) { vertexJoints=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"vertexWeights") ) { vertexWeights=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bonesPerVertex") ) { bonesPerVertex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"triangleGroups") ) { triangleGroups=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Skin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("vertexCount",cb,0e,9f,5e));
	outFields->push(HX_("bonesPerVertex",72,a1,08,15));
	outFields->push(HX_("vertexJoints",6d,da,1e,31));
	outFields->push(HX_("vertexWeights",f7,18,3c,e2));
	outFields->push(HX_("rootJoints",ab,8f,0d,82));
	outFields->push(HX_("namedJoints",82,fc,7a,a1));
	outFields->push(HX_("allJoints",ea,63,6d,5f));
	outFields->push(HX_("boundJoints",c7,ce,71,b5));
	outFields->push(HX_("primitive",a7,88,58,27));
	outFields->push(HX_("splitJoints",63,e6,5f,15));
	outFields->push(HX_("triangleGroups",3c,9d,29,6b));
	outFields->push(HX_("envelop",b5,df,96,97));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Skin_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Skin_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(Skin_obj,vertexCount),HX_("vertexCount",cb,0e,9f,5e)},
	{::hx::fsInt,(int)offsetof(Skin_obj,bonesPerVertex),HX_("bonesPerVertex",72,a1,08,15)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Skin_obj,vertexJoints),HX_("vertexJoints",6d,da,1e,31)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Skin_obj,vertexWeights),HX_("vertexWeights",f7,18,3c,e2)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,rootJoints),HX_("rootJoints",ab,8f,0d,82)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Skin_obj,namedJoints),HX_("namedJoints",82,fc,7a,a1)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,allJoints),HX_("allJoints",ea,63,6d,5f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,boundJoints),HX_("boundJoints",c7,ce,71,b5)},
	{::hx::fsObject /*  ::h3d::prim::Primitive */ ,(int)offsetof(Skin_obj,primitive),HX_("primitive",a7,88,58,27)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,splitJoints),HX_("splitJoints",63,e6,5f,15)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Skin_obj,triangleGroups),HX_("triangleGroups",3c,9d,29,6b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,envelop),HX_("envelop",b5,df,96,97)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Skin_obj_sStaticStorageInfo = 0;
#endif

static ::String Skin_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("vertexCount",cb,0e,9f,5e),
	HX_("bonesPerVertex",72,a1,08,15),
	HX_("vertexJoints",6d,da,1e,31),
	HX_("vertexWeights",f7,18,3c,e2),
	HX_("rootJoints",ab,8f,0d,82),
	HX_("namedJoints",82,fc,7a,a1),
	HX_("allJoints",ea,63,6d,5f),
	HX_("boundJoints",c7,ce,71,b5),
	HX_("primitive",a7,88,58,27),
	HX_("splitJoints",63,e6,5f,15),
	HX_("triangleGroups",3c,9d,29,6b),
	HX_("envelop",b5,df,96,97),
	HX_("setJoints",2b,5d,b1,f0),
	HX_("addInfluence",94,bf,15,79),
	HX_("sortInfluences",dc,e5,b3,64),
	HX_("isSplit",90,8e,f4,1d),
	HX_("initWeights",cb,46,67,28),
	HX_("sortByBindIndex",80,d0,48,50),
	HX_("isSub",b6,d3,55,c1),
	HX_("merge",b8,a2,c6,05),
	HX_("jointsDiff",8e,18,29,2f),
	HX_("split",da,ea,6e,81),
	::String(null()) };

::hx::Class Skin_obj::__mClass;

void Skin_obj::__register()
{
	Skin_obj _hx_dummy;
	Skin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.anim.Skin",a5,10,90,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Skin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Skin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Skin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Skin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace anim
