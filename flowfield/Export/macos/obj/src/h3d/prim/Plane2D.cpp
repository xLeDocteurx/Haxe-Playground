#include <hxcpp.h>

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
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_MemoryManager
#include <h3d/impl/MemoryManager.h>
#endif
#ifndef INCLUDED_h3d_prim_Plane2D
#include <h3d/prim/Plane2D.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0f6b58646f96ae20_5_new,"h3d.prim.Plane2D","new",0xbcc54bcd,"h3d.prim.Plane2D.new","h3d/prim/Plane2D.hx",5,0x8b7c80a3)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6b58646f96ae20_9_triCount,"h3d.prim.Plane2D","triCount",0x4cab2917,"h3d.prim.Plane2D.triCount","h3d/prim/Plane2D.hx",9,0x8b7c80a3)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6b58646f96ae20_13_vertexCount,"h3d.prim.Plane2D","vertexCount",0x424d3f38,"h3d.prim.Plane2D.vertexCount","h3d/prim/Plane2D.hx",13,0x8b7c80a3)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6b58646f96ae20_16_alloc,"h3d.prim.Plane2D","alloc",0xf9ec9522,"h3d.prim.Plane2D.alloc","h3d/prim/Plane2D.hx",16,0x8b7c80a3)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6b58646f96ae20_41_render,"h3d.prim.Plane2D","render",0x7aa31209,"h3d.prim.Plane2D.render","h3d/prim/Plane2D.hx",41,0x8b7c80a3)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6b58646f96ae20_46_get,"h3d.prim.Plane2D","get",0xbcbffc03,"h3d.prim.Plane2D.get","h3d/prim/Plane2D.hx",46,0x8b7c80a3)
namespace h3d{
namespace prim{

void Plane2D_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0f6b58646f96ae20_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic Plane2D_obj::__CreateEmpty() { return new Plane2D_obj; }

void *Plane2D_obj::_hx_vtable = 0;

Dynamic Plane2D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Plane2D_obj > _hx_result = new Plane2D_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Plane2D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x28abf00f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x28abf00f;
	} else {
		return inClassId==(int)0x566939c8;
	}
}

int Plane2D_obj::triCount(){
            	HX_STACKFRAME(&_hx_pos_0f6b58646f96ae20_9_triCount)
HXDLIN(   9)		return 2;
            	}


int Plane2D_obj::vertexCount(){
            	HX_STACKFRAME(&_hx_pos_0f6b58646f96ae20_13_vertexCount)
HXDLIN(  13)		return 4;
            	}


void Plane2D_obj::alloc( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_0f6b58646f96ae20_16_alloc)
HXLINE(  17)		int length = 0;
HXDLIN(  17)		::Array< Float > this1 = ::Array_obj< Float >::__new();
HXDLIN(  17)		if ((length > 0)) {
HXLINE(  17)			if ((length > this1->length)) {
HXLINE(  17)				this1[(length - 1)] = ((Float)0.);
            			}
            		}
HXDLIN(  17)		::Array< Float > v = this1;
HXLINE(  18)		v->push(-1);
HXLINE(  19)		v->push(-1);
HXLINE(  20)		v->push(0);
HXLINE(  21)		v->push(1);
HXLINE(  23)		v->push(-1);
HXLINE(  24)		v->push(1);
HXLINE(  25)		v->push(0);
HXLINE(  26)		v->push(0);
HXLINE(  28)		v->push(1);
HXLINE(  29)		v->push(-1);
HXLINE(  30)		v->push(1);
HXLINE(  31)		v->push(1);
HXLINE(  33)		v->push(1);
HXLINE(  34)		v->push(1);
HXLINE(  35)		v->push(1);
HXLINE(  36)		v->push(0);
HXLINE(  38)		this->buffer = ::h3d::Buffer_obj::ofFloats(v,4,::Array_obj< ::Dynamic>::__new(2)->init(0,::h3d::BufferFlag_obj::Quads_dyn())->init(1,::h3d::BufferFlag_obj::RawFormat_dyn()));
            	}


void Plane2D_obj::render( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_0f6b58646f96ae20_41_render)
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		if (::hx::IsNotNull( this->buffer )) {
HXLINE(  42)			 ::h3d::Buffer _this = this->buffer;
HXDLIN(  42)			if (::hx::IsNotNull( _this->buffer )) {
HXLINE(  42)				_hx_tmp = ::hx::IsNull( _this->buffer->vbuf );
            			}
            			else {
HXLINE(  42)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(  42)			_hx_tmp = true;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  42)			this->alloc(engine);
            		}
HXLINE(  43)		engine->renderBuffer(this->buffer,engine->mem->quadIndexes,2,0,-1);
            	}


 ::Dynamic Plane2D_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_0f6b58646f96ae20_46_get)
HXLINE(  47)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE(  48)		 ::Dynamic inst = engine->resCache->get(::hx::ClassOf< ::h3d::prim::Plane2D >());
HXLINE(  49)		if (::hx::IsNull( inst )) {
HXLINE(  50)			inst =  ::h3d::prim::Plane2D_obj::__alloc( HX_CTX );
HXLINE(  51)			engine->resCache->set(::hx::ClassOf< ::h3d::prim::Plane2D >(),inst);
            		}
HXLINE(  53)		return inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Plane2D_obj,get,return )


::hx::ObjectPtr< Plane2D_obj > Plane2D_obj::__new() {
	::hx::ObjectPtr< Plane2D_obj > __this = new Plane2D_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Plane2D_obj > Plane2D_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Plane2D_obj *__this = (Plane2D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Plane2D_obj), true, "h3d.prim.Plane2D"));
	*(void **)__this = Plane2D_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Plane2D_obj::Plane2D_obj()
{
}

::hx::Val Plane2D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triCount") ) { return ::hx::Val( triCount_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexCount") ) { return ::hx::Val( vertexCount_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Plane2D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Plane2D_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Plane2D_obj_sStaticStorageInfo = 0;
#endif

static ::String Plane2D_obj_sMemberFields[] = {
	HX_("triCount",a4,2f,74,48),
	HX_("vertexCount",cb,0e,9f,5e),
	HX_("alloc",75,a4,93,21),
	HX_("render",56,6b,29,05),
	::String(null()) };

::hx::Class Plane2D_obj::__mClass;

static ::String Plane2D_obj_sStaticFields[] = {
	HX_("get",96,80,4e,00),
	::String(null())
};

void Plane2D_obj::__register()
{
	Plane2D_obj _hx_dummy;
	Plane2D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.prim.Plane2D",5b,61,4e,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Plane2D_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Plane2D_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Plane2D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Plane2D_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Plane2D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Plane2D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace prim
