#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_BufferFlag
#include <h3d/BufferFlag.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Indexes
#include <h3d/Indexes.h>
#endif
#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_h3d_prim_RawPrimitive
#include <h3d/prim/RawPrimitive.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2238fbe5ef00efa5_11_new,"h3d.prim.RawPrimitive","new",0x97aa1c44,"h3d.prim.RawPrimitive.new","h3d/prim/RawPrimitive.hx",11,0x3e6aa74c)
HX_DEFINE_STACK_FRAME(_hx_pos_2238fbe5ef00efa5_10_new,"h3d.prim.RawPrimitive","new",0x97aa1c44,"h3d.prim.RawPrimitive.new","h3d/prim/RawPrimitive.hx",10,0x3e6aa74c)
HX_LOCAL_STACK_FRAME(_hx_pos_2238fbe5ef00efa5_17_alloc,"h3d.prim.RawPrimitive","alloc",0xf3ffb159,"h3d.prim.RawPrimitive.alloc","h3d/prim/RawPrimitive.hx",17,0x3e6aa74c)
HX_LOCAL_STACK_FRAME(_hx_pos_2238fbe5ef00efa5_34_getBounds,"h3d.prim.RawPrimitive","getBounds",0x71325e8f,"h3d.prim.RawPrimitive.getBounds","h3d/prim/RawPrimitive.hx",34,0x3e6aa74c)
HX_LOCAL_STACK_FRAME(_hx_pos_2238fbe5ef00efa5_40_triCount,"h3d.prim.RawPrimitive","triCount",0x46cc4940,"h3d.prim.RawPrimitive.triCount","h3d/prim/RawPrimitive.hx",40,0x3e6aa74c)
HX_LOCAL_STACK_FRAME(_hx_pos_2238fbe5ef00efa5_44_vertexCount,"h3d.prim.RawPrimitive","vertexCount",0xd4b9deaf,"h3d.prim.RawPrimitive.vertexCount","h3d/prim/RawPrimitive.hx",44,0x3e6aa74c)
namespace h3d{
namespace prim{

void RawPrimitive_obj::__construct( ::Dynamic inf,::hx::Null< bool >  __o_persist){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,inf) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_2238fbe5ef00efa5_11_new)
HXLINE(  11)			return inf;
            		}
            		HX_END_LOCAL_FUNC0(return)

            		bool persist = __o_persist.Default(false);
            	HX_STACKFRAME(&_hx_pos_2238fbe5ef00efa5_10_new)
HXDLIN(  10)		super::__construct();
HXLINE(  11)		this->onContextLost =  ::Dynamic(new _hx_Closure_0(inf));
HXLINE(  12)		this->bounds = ( ( ::h3d::col::Bounds)(inf->__Field(HX_("bounds",75,86,1d,66),::hx::paccDynamic)) );
HXLINE(  13)		this->alloc(null());
HXLINE(  14)		if (!(persist)) {
HXLINE(  14)			this->onContextLost = null();
            		}
            	}

Dynamic RawPrimitive_obj::__CreateEmpty() { return new RawPrimitive_obj; }

void *RawPrimitive_obj::_hx_vtable = 0;

Dynamic RawPrimitive_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RawPrimitive_obj > _hx_result = new RawPrimitive_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool RawPrimitive_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x566939c8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x566939c8;
	} else {
		return inClassId==(int)0x68aa5a3a;
	}
}

void RawPrimitive_obj::alloc( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_2238fbe5ef00efa5_17_alloc)
HXLINE(  18)		if (::hx::IsNull( this->onContextLost )) {
HXLINE(  18)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Cannot realloc ",9b,4e,e5,7a) + ::Std_obj::string(::hx::ObjectPtr<OBJ_>(this)))));
            		}
HXLINE(  19)		 ::Dynamic inf = this->onContextLost();
HXLINE(  20)		::Array< ::Dynamic> flags = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  21)		if (::hx::IsNull( inf->__Field(HX_("ibuf",6a,2a,b2,45),::hx::paccDynamic) )) {
HXLINE(  21)			 ::h3d::BufferFlag _hx_tmp;
HXDLIN(  21)			if (( (bool)(inf->__Field(HX_("quads",cc,75,e7,5d),::hx::paccDynamic)) )) {
HXLINE(  21)				_hx_tmp = ::h3d::BufferFlag_obj::Quads_dyn();
            			}
            			else {
HXLINE(  21)				_hx_tmp = ::h3d::BufferFlag_obj::Triangles_dyn();
            			}
HXDLIN(  21)			flags->push(_hx_tmp);
            		}
HXLINE(  22)		if (::hx::IsLess( inf->__Field(HX_("stride",19,20,30,11),::hx::paccDynamic),8 )) {
HXLINE(  22)			flags->push(::h3d::BufferFlag_obj::RawFormat_dyn());
            		}
HXLINE(  23)		this->buffer = ::h3d::Buffer_obj::ofFloats(( (::Array< Float >)(inf->__Field(HX_("vbuf",7d,f0,49,4e),::hx::paccDynamic)) ),( (int)(inf->__Field(HX_("stride",19,20,30,11),::hx::paccDynamic)) ),flags);
HXLINE(  24)		this->vcount = this->buffer->vertices;
HXLINE(  25)		int _hx_tmp;
HXDLIN(  25)		if (::hx::IsNotNull( inf->__Field(HX_("ibuf",6a,2a,b2,45),::hx::paccDynamic) )) {
HXLINE(  25)			_hx_tmp = ::Std_obj::_hx_int((( (Float)(( (::Array< int >)(inf->__Field(HX_("ibuf",6a,2a,b2,45),::hx::paccDynamic)) )->length) ) / ( (Float)(3) )));
            		}
            		else {
HXLINE(  25)			if (( (bool)(inf->__Field(HX_("quads",cc,75,e7,5d),::hx::paccDynamic)) )) {
HXLINE(  25)				_hx_tmp = (this->vcount >> 1);
            			}
            			else {
HXLINE(  25)				_hx_tmp = ::Std_obj::_hx_int((( (Float)(this->vcount) ) / ( (Float)(3) )));
            			}
            		}
HXDLIN(  25)		this->tcount = _hx_tmp;
HXLINE(  26)		if (::hx::IsNotNull( inf->__Field(HX_("ibuf",6a,2a,b2,45),::hx::paccDynamic) )) {
HXLINE(  27)			this->indexes = ::h3d::Indexes_obj::alloc(( (::Array< int >)(inf->__Field(HX_("ibuf",6a,2a,b2,45),::hx::paccDynamic)) ),null(),null());
            		}
            		else {
HXLINE(  28)			if (::hx::IsNotNull( this->indexes )) {
HXLINE(  29)				this->indexes->dispose();
HXLINE(  30)				this->indexes = null();
            			}
            		}
            	}


 ::h3d::col::Bounds RawPrimitive_obj::getBounds(){
            	HX_STACKFRAME(&_hx_pos_2238fbe5ef00efa5_34_getBounds)
HXLINE(  35)		if (::hx::IsNull( this->bounds )) {
HXLINE(  35)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bounds not defined for ",c6,55,9d,67) + ::Std_obj::string(::hx::ObjectPtr<OBJ_>(this)))));
            		}
HXLINE(  36)		return this->bounds;
            	}


int RawPrimitive_obj::triCount(){
            	HX_STACKFRAME(&_hx_pos_2238fbe5ef00efa5_40_triCount)
HXDLIN(  40)		return this->tcount;
            	}


int RawPrimitive_obj::vertexCount(){
            	HX_STACKFRAME(&_hx_pos_2238fbe5ef00efa5_44_vertexCount)
HXDLIN(  44)		return this->vcount;
            	}



::hx::ObjectPtr< RawPrimitive_obj > RawPrimitive_obj::__new( ::Dynamic inf,::hx::Null< bool >  __o_persist) {
	::hx::ObjectPtr< RawPrimitive_obj > __this = new RawPrimitive_obj();
	__this->__construct(inf,__o_persist);
	return __this;
}

::hx::ObjectPtr< RawPrimitive_obj > RawPrimitive_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic inf,::hx::Null< bool >  __o_persist) {
	RawPrimitive_obj *__this = (RawPrimitive_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RawPrimitive_obj), true, "h3d.prim.RawPrimitive"));
	*(void **)__this = RawPrimitive_obj::_hx_vtable;
	__this->__construct(inf,__o_persist);
	return __this;
}

RawPrimitive_obj::RawPrimitive_obj()
{
}

void RawPrimitive_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RawPrimitive);
	HX_MARK_MEMBER_NAME(vcount,"vcount");
	HX_MARK_MEMBER_NAME(tcount,"tcount");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(onContextLost,"onContextLost");
	 ::h3d::prim::Primitive_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RawPrimitive_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vcount,"vcount");
	HX_VISIT_MEMBER_NAME(tcount,"tcount");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(onContextLost,"onContextLost");
	 ::h3d::prim::Primitive_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RawPrimitive_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vcount") ) { return ::hx::Val( vcount ); }
		if (HX_FIELD_EQ(inName,"tcount") ) { return ::hx::Val( tcount ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triCount") ) { return ::hx::Val( triCount_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexCount") ) { return ::hx::Val( vertexCount_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onContextLost") ) { return ::hx::Val( onContextLost ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RawPrimitive_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vcount") ) { vcount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tcount") ) { tcount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::h3d::col::Bounds >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onContextLost") ) { onContextLost=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RawPrimitive_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("vcount",99,d8,7f,78));
	outFields->push(HX_("tcount",db,1f,c9,ab));
	outFields->push(HX_("bounds",75,86,1d,66));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RawPrimitive_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(RawPrimitive_obj,vcount),HX_("vcount",99,d8,7f,78)},
	{::hx::fsInt,(int)offsetof(RawPrimitive_obj,tcount),HX_("tcount",db,1f,c9,ab)},
	{::hx::fsObject /*  ::h3d::col::Bounds */ ,(int)offsetof(RawPrimitive_obj,bounds),HX_("bounds",75,86,1d,66)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(RawPrimitive_obj,onContextLost),HX_("onContextLost",94,ac,a5,87)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RawPrimitive_obj_sStaticStorageInfo = 0;
#endif

static ::String RawPrimitive_obj_sMemberFields[] = {
	HX_("vcount",99,d8,7f,78),
	HX_("tcount",db,1f,c9,ab),
	HX_("bounds",75,86,1d,66),
	HX_("onContextLost",94,ac,a5,87),
	HX_("alloc",75,a4,93,21),
	HX_("getBounds",ab,0f,74,e2),
	HX_("triCount",a4,2f,74,48),
	HX_("vertexCount",cb,0e,9f,5e),
	::String(null()) };

::hx::Class RawPrimitive_obj::__mClass;

void RawPrimitive_obj::__register()
{
	RawPrimitive_obj _hx_dummy;
	RawPrimitive_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.prim.RawPrimitive",52,ea,d5,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RawPrimitive_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RawPrimitive_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RawPrimitive_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RawPrimitive_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace prim
