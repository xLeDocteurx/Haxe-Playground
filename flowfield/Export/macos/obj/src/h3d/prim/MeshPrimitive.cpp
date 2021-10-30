#include <hxcpp.h>

#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_BufferOffset
#include <h3d/BufferOffset.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Indexes
#include <h3d/Indexes.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_InputNames
#include <h3d/impl/InputNames.h>
#endif
#ifndef INCLUDED_h3d_prim_MeshPrimitive
#include <h3d/prim/MeshPrimitive.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9544ae08de39616e_3_new,"h3d.prim.MeshPrimitive","new",0x36606159,"h3d.prim.MeshPrimitive.new","h3d/prim/MeshPrimitive.hx",3,0x74d8e897)
HX_LOCAL_STACK_FRAME(_hx_pos_9544ae08de39616e_9_allocBuffer,"h3d.prim.MeshPrimitive","allocBuffer",0xf24acd4e,"h3d.prim.MeshPrimitive.allocBuffer","h3d/prim/MeshPrimitive.hx",9,0x74d8e897)
HX_LOCAL_STACK_FRAME(_hx_pos_9544ae08de39616e_12_hasBuffer,"h3d.prim.MeshPrimitive","hasBuffer",0xddb681b3,"h3d.prim.MeshPrimitive.hasBuffer","h3d/prim/MeshPrimitive.hx",12,0x74d8e897)
HX_LOCAL_STACK_FRAME(_hx_pos_9544ae08de39616e_18_addBuffer,"h3d.prim.MeshPrimitive","addBuffer",0x54f203ba,"h3d.prim.MeshPrimitive.addBuffer","h3d/prim/MeshPrimitive.hx",18,0x74d8e897)
HX_LOCAL_STACK_FRAME(_hx_pos_9544ae08de39616e_28_dispose,"h3d.prim.MeshPrimitive","dispose",0xf9a78218,"h3d.prim.MeshPrimitive.dispose","h3d/prim/MeshPrimitive.hx",28,0x74d8e897)
HX_LOCAL_STACK_FRAME(_hx_pos_9544ae08de39616e_37_getBuffers,"h3d.prim.MeshPrimitive","getBuffers",0xe6a899a4,"h3d.prim.MeshPrimitive.getBuffers","h3d/prim/MeshPrimitive.hx",37,0x74d8e897)
HX_LOCAL_STACK_FRAME(_hx_pos_9544ae08de39616e_67_render,"h3d.prim.MeshPrimitive","render",0xf1ecfbfd,"h3d.prim.MeshPrimitive.render","h3d/prim/MeshPrimitive.hx",67,0x74d8e897)
namespace h3d{
namespace prim{

void MeshPrimitive_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9544ae08de39616e_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic MeshPrimitive_obj::__CreateEmpty() { return new MeshPrimitive_obj; }

void *MeshPrimitive_obj::_hx_vtable = 0;

Dynamic MeshPrimitive_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MeshPrimitive_obj > _hx_result = new MeshPrimitive_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MeshPrimitive_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x52c84e9b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x52c84e9b;
	} else {
		return inClassId==(int)0x566939c8;
	}
}

 ::h3d::BufferOffset MeshPrimitive_obj::allocBuffer( ::h3d::Engine engine,::String name){
            	HX_STACKFRAME(&_hx_pos_9544ae08de39616e_9_allocBuffer)
HXDLIN(   9)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(MeshPrimitive_obj,allocBuffer,return )

bool MeshPrimitive_obj::hasBuffer(::String name){
            	HX_STACKFRAME(&_hx_pos_9544ae08de39616e_12_hasBuffer)
HXLINE(  13)		if (::hx::IsNull( this->bufferCache )) {
HXLINE(  14)			return false;
            		}
HXLINE(  15)		::Dynamic this1 = this->bufferCache;
HXDLIN(  15)		return ( ( ::haxe::ds::IntMap)(this1) )->exists(::hxsl::Globals_obj::allocID(name));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeshPrimitive_obj,hasBuffer,return )

void MeshPrimitive_obj::addBuffer(::String name, ::h3d::Buffer buf,::hx::Null< int >  __o_offset){
            		int offset = __o_offset.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_9544ae08de39616e_18_addBuffer)
HXLINE(  19)		if (::hx::IsNull( this->bufferCache )) {
HXLINE(  20)			this->bufferCache =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  21)		int id = ::hxsl::Globals_obj::allocID(name);
HXLINE(  22)		 ::h3d::BufferOffset old = ( ( ::h3d::BufferOffset)(this->bufferCache->get(id)) );
HXLINE(  23)		if (::hx::IsNotNull( old )) {
HXLINE(  23)			old->dispose();
            		}
HXLINE(  24)		{
HXLINE(  24)			::Dynamic this1 = this->bufferCache;
HXDLIN(  24)			( ( ::haxe::ds::IntMap)(this1) )->set(id, ::h3d::BufferOffset_obj::__alloc( HX_CTX ,buf,offset));
            		}
HXLINE(  25)		this->layouts = null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(MeshPrimitive_obj,addBuffer,(void))

void MeshPrimitive_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_9544ae08de39616e_28_dispose)
HXLINE(  29)		this->super::dispose();
HXLINE(  30)		if (::hx::IsNotNull( this->bufferCache )) {
HXLINE(  31)			 ::Dynamic b = this->bufferCache->iterator();
HXDLIN(  31)			while(( (bool)(b->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  31)				 ::h3d::BufferOffset b1 = ( ( ::h3d::BufferOffset)(b->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  32)				b1->dispose();
            			}
            		}
HXLINE(  33)		this->bufferCache = null();
HXLINE(  34)		this->layouts = null();
            	}


 ::h3d::BufferOffset MeshPrimitive_obj::getBuffers( ::h3d::Engine engine){
            	HX_GC_STACKFRAME(&_hx_pos_9544ae08de39616e_37_getBuffers)
HXLINE(  38)		if (::hx::IsNull( this->bufferCache )) {
HXLINE(  39)			this->bufferCache =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  40)		if (::hx::IsNull( this->layouts )) {
HXLINE(  41)			this->layouts =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  42)		 ::h3d::impl::InputNames inputs = engine->driver->getShaderInputNames();
HXLINE(  43)		 ::h3d::BufferOffset buffers = ( ( ::h3d::BufferOffset)(this->layouts->get(inputs->id)) );
HXLINE(  44)		if (::hx::IsNotNull( buffers )) {
HXLINE(  45)			return buffers;
            		}
HXLINE(  46)		 ::h3d::BufferOffset prev = null();
HXLINE(  47)		{
HXLINE(  47)			int _g = 0;
HXDLIN(  47)			::Array< ::String > _g1 = inputs->names;
HXDLIN(  47)			while((_g < _g1->length)){
HXLINE(  47)				::String name = _g1->__get(_g);
HXDLIN(  47)				_g = (_g + 1);
HXLINE(  48)				int id = ::hxsl::Globals_obj::allocID(name);
HXLINE(  49)				 ::h3d::BufferOffset b = ( ( ::h3d::BufferOffset)(this->bufferCache->get(id)) );
HXLINE(  50)				if (::hx::IsNull( b )) {
HXLINE(  51)					b = this->allocBuffer(engine,name);
HXLINE(  52)					if (::hx::IsNull( b )) {
HXLINE(  52)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Buffer ",00,cb,e1,7e) + name) + HX_(" is not available",e6,b1,3f,b4))));
            					}
HXLINE(  53)					this->bufferCache->set(id,b);
            				}
HXLINE(  55)				 ::h3d::BufferOffset b1 =  ::h3d::BufferOffset_obj::__alloc( HX_CTX ,b->buffer,b->offset);
HXDLIN(  55)				b = b1;
HXLINE(  56)				if (::hx::IsNull( prev )) {
HXLINE(  57)					prev = b;
HXDLIN(  57)					buffers = prev;
            				}
            				else {
HXLINE(  59)					prev->next = b;
HXLINE(  60)					prev = b;
            				}
            			}
            		}
HXLINE(  63)		this->layouts->set(inputs->id,buffers);
HXLINE(  64)		return buffers;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeshPrimitive_obj,getBuffers,return )

void MeshPrimitive_obj::render( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_9544ae08de39616e_67_render)
HXLINE(  69)		bool _hx_tmp;
HXDLIN(  69)		if (::hx::IsNotNull( this->indexes )) {
HXLINE(  69)			_hx_tmp = this->indexes->isDisposed();
            		}
            		else {
HXLINE(  69)			_hx_tmp = true;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  70)			this->alloc(engine);
            		}
HXLINE(  71)		 ::h3d::BufferOffset _hx_tmp1 = this->getBuffers(engine);
HXDLIN(  71)		engine->renderMultiBuffers(_hx_tmp1,this->indexes,null(),null());
            	}



::hx::ObjectPtr< MeshPrimitive_obj > MeshPrimitive_obj::__new() {
	::hx::ObjectPtr< MeshPrimitive_obj > __this = new MeshPrimitive_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MeshPrimitive_obj > MeshPrimitive_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MeshPrimitive_obj *__this = (MeshPrimitive_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MeshPrimitive_obj), true, "h3d.prim.MeshPrimitive"));
	*(void **)__this = MeshPrimitive_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MeshPrimitive_obj::MeshPrimitive_obj()
{
}

void MeshPrimitive_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeshPrimitive);
	HX_MARK_MEMBER_NAME(bufferCache,"bufferCache");
	HX_MARK_MEMBER_NAME(layouts,"layouts");
	 ::h3d::prim::Primitive_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MeshPrimitive_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bufferCache,"bufferCache");
	HX_VISIT_MEMBER_NAME(layouts,"layouts");
	 ::h3d::prim::Primitive_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MeshPrimitive_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"layouts") ) { return ::hx::Val( layouts ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasBuffer") ) { return ::hx::Val( hasBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"addBuffer") ) { return ::hx::Val( addBuffer_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getBuffers") ) { return ::hx::Val( getBuffers_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferCache") ) { return ::hx::Val( bufferCache ); }
		if (HX_FIELD_EQ(inName,"allocBuffer") ) { return ::hx::Val( allocBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MeshPrimitive_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"layouts") ) { layouts=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferCache") ) { bufferCache=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MeshPrimitive_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bufferCache",22,2d,60,de));
	outFields->push(HX_("layouts",89,26,e0,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MeshPrimitive_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(MeshPrimitive_obj,bufferCache),HX_("bufferCache",22,2d,60,de)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(MeshPrimitive_obj,layouts),HX_("layouts",89,26,e0,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MeshPrimitive_obj_sStaticStorageInfo = 0;
#endif

static ::String MeshPrimitive_obj_sMemberFields[] = {
	HX_("bufferCache",22,2d,60,de),
	HX_("layouts",89,26,e0,48),
	HX_("allocBuffer",55,1b,5f,d8),
	HX_("hasBuffer",fa,6f,7d,11),
	HX_("addBuffer",01,f2,b8,88),
	HX_("dispose",9f,80,4c,bb),
	HX_("getBuffers",7d,29,f2,00),
	HX_("render",56,6b,29,05),
	::String(null()) };

::hx::Class MeshPrimitive_obj::__mClass;

void MeshPrimitive_obj::__register()
{
	MeshPrimitive_obj _hx_dummy;
	MeshPrimitive_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.prim.MeshPrimitive",e7,c0,b4,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MeshPrimitive_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MeshPrimitive_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MeshPrimitive_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MeshPrimitive_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace prim
