#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_MemoryManager
#include <h3d/impl/MemoryManager.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_995916003aa80876_23_new,"h3d.prim.Primitive","new",0xc6c5d106,"h3d.prim.Primitive.new","h3d/prim/Primitive.hx",23,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_29_triCount,"h3d.prim.Primitive","triCount",0x4400153e,"h3d.prim.Primitive.triCount","h3d/prim/Primitive.hx",29,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_36_vertexCount,"h3d.prim.Primitive","vertexCount",0xaf9b2571,"h3d.prim.Primitive.vertexCount","h3d/prim/Primitive.hx",36,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_43_getCollider,"h3d.prim.Primitive","getCollider",0x40c5b890,"h3d.prim.Primitive.getCollider","h3d/prim/Primitive.hx",43,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_51_getBounds,"h3d.prim.Primitive","getBounds",0x015110d1,"h3d.prim.Primitive.getBounds","h3d/prim/Primitive.hx",51,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_60_incref,"h3d.prim.Primitive","incref",0x4ddb164f,"h3d.prim.Primitive.incref","h3d/prim/Primitive.hx",60,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_68_decref,"h3d.prim.Primitive","decref",0x1f770feb,"h3d.prim.Primitive.decref","h3d/prim/Primitive.hx",68,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_80_alloc,"h3d.prim.Primitive","alloc",0xe9039a9b,"h3d.prim.Primitive.alloc","h3d/prim/Primitive.hx",80,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_86_selectMaterial,"h3d.prim.Primitive","selectMaterial",0xb6c6a4dd,"h3d.prim.Primitive.selectMaterial","h3d/prim/Primitive.hx",86,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_90_buildNormalsDisplay,"h3d.prim.Primitive","buildNormalsDisplay",0x456397aa,"h3d.prim.Primitive.buildNormalsDisplay","h3d/prim/Primitive.hx",90,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_97_render,"h3d.prim.Primitive","render",0xbfb0d670,"h3d.prim.Primitive.render","h3d/prim/Primitive.hx",97,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_111_dispose,"h3d.prim.Primitive","dispose",0x3742cc45,"h3d.prim.Primitive.dispose","h3d/prim/Primitive.hx",111,0xd3de1d8a)
HX_LOCAL_STACK_FRAME(_hx_pos_995916003aa80876_126_toString,"h3d.prim.Primitive","toString",0x33fab646,"h3d.prim.Primitive.toString","h3d/prim/Primitive.hx",126,0xd3de1d8a)
namespace h3d{
namespace prim{

void Primitive_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_23_new)
HXDLIN(  23)		this->refCount = 0;
            	}

Dynamic Primitive_obj::__CreateEmpty() { return new Primitive_obj; }

void *Primitive_obj::_hx_vtable = 0;

Dynamic Primitive_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Primitive_obj > _hx_result = new Primitive_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Primitive_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x566939c8;
}

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_prim_Primitive__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *Primitive_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa6f1a21a: return &_hx_h3d_prim_Primitive__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

int Primitive_obj::triCount(){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_29_triCount)
HXDLIN(  29)		if (::hx::IsNotNull( this->indexes )) {
HXDLIN(  29)			return ::Std_obj::_hx_int((( (Float)(this->indexes->count) ) / ( (Float)(3) )));
            		}
            		else {
HXDLIN(  29)			if (::hx::IsNull( this->buffer )) {
HXDLIN(  29)				return 0;
            			}
            			else {
HXDLIN(  29)				return ::Std_obj::_hx_int((( (Float)(this->buffer->totalVertices()) ) / ( (Float)(3) )));
            			}
            		}
HXDLIN(  29)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Primitive_obj,triCount,return )

int Primitive_obj::vertexCount(){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_36_vertexCount)
HXDLIN(  36)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Primitive_obj,vertexCount,return )

::Dynamic Primitive_obj::getCollider(){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_43_getCollider)
HXDLIN(  43)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("not implemented for ",c2,3a,07,ee) + ::Std_obj::string(::hx::ObjectPtr<OBJ_>(this)))));
HXDLIN(  43)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Primitive_obj,getCollider,return )

 ::h3d::col::Bounds Primitive_obj::getBounds(){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_51_getBounds)
HXDLIN(  51)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("not implemented for ",c2,3a,07,ee) + ::Std_obj::string(::hx::ObjectPtr<OBJ_>(this)))));
HXDLIN(  51)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Primitive_obj,getBounds,return )

void Primitive_obj::incref(){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_60_incref)
HXDLIN(  60)		this->refCount++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Primitive_obj,incref,(void))

void Primitive_obj::decref(){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_68_decref)
HXLINE(  69)		this->refCount--;
HXLINE(  70)		if ((this->refCount <= 0)) {
HXLINE(  71)			this->refCount = 0;
HXLINE(  72)			this->dispose();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Primitive_obj,decref,(void))

void Primitive_obj::alloc( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_80_alloc)
HXDLIN(  80)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("not implemented",35,16,a6,d3)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Primitive_obj,alloc,(void))

void Primitive_obj::selectMaterial(int material){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_86_selectMaterial)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Primitive_obj,selectMaterial,(void))

 ::h3d::prim::Primitive Primitive_obj::buildNormalsDisplay(){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_90_buildNormalsDisplay)
HXDLIN(  90)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("not implemented for ",c2,3a,07,ee) + ::Std_obj::string(::hx::ObjectPtr<OBJ_>(this)))));
HXDLIN(  90)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Primitive_obj,buildNormalsDisplay,return )

void Primitive_obj::render( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_97_render)
HXLINE(  98)		bool _hx_tmp;
HXDLIN(  98)		if (::hx::IsNotNull( this->buffer )) {
HXLINE(  98)			 ::h3d::Buffer _this = this->buffer;
HXDLIN(  98)			if (::hx::IsNotNull( _this->buffer )) {
HXLINE(  98)				_hx_tmp = ::hx::IsNull( _this->buffer->vbuf );
            			}
            			else {
HXLINE(  98)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(  98)			_hx_tmp = true;
            		}
HXDLIN(  98)		if (_hx_tmp) {
HXLINE(  98)			this->alloc(engine);
            		}
HXLINE(  99)		if (::hx::IsNull( this->indexes )) {
HXLINE( 100)			int this1 = this->buffer->flags;
HXDLIN( 100)			if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Quads_dyn()))) != 0)) {
HXLINE( 101)				engine->renderBuffer(this->buffer,engine->mem->quadIndexes,2,0,-1);
            			}
            			else {
HXLINE( 103)				engine->renderBuffer(this->buffer,engine->mem->triIndexes,3,0,-1);
            			}
            		}
            		else {
HXLINE( 105)			engine->renderIndexed(this->buffer,this->indexes,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Primitive_obj,render,(void))

void Primitive_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_111_dispose)
HXLINE( 112)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 113)			this->buffer->dispose();
HXLINE( 114)			this->buffer = null();
            		}
HXLINE( 116)		if (::hx::IsNotNull( this->indexes )) {
HXLINE( 117)			this->indexes->dispose();
HXLINE( 118)			this->indexes = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Primitive_obj,dispose,(void))

::String Primitive_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_995916003aa80876_126_toString)
HXDLIN( 126)		return ( (::String)(::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))).split(HX_(".",2e,00,00,00))->pop()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Primitive_obj,toString,return )


::hx::ObjectPtr< Primitive_obj > Primitive_obj::__new() {
	::hx::ObjectPtr< Primitive_obj > __this = new Primitive_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Primitive_obj > Primitive_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Primitive_obj *__this = (Primitive_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Primitive_obj), true, "h3d.prim.Primitive"));
	*(void **)__this = Primitive_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Primitive_obj::Primitive_obj()
{
}

void Primitive_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Primitive);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(indexes,"indexes");
	HX_MARK_MEMBER_NAME(refCount,"refCount");
	HX_MARK_END_CLASS();
}

void Primitive_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(indexes,"indexes");
	HX_VISIT_MEMBER_NAME(refCount,"refCount");
}

::hx::Val Primitive_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"incref") ) { return ::hx::Val( incref_dyn() ); }
		if (HX_FIELD_EQ(inName,"decref") ) { return ::hx::Val( decref_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexes") ) { return ::hx::Val( indexes ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"refCount") ) { return ::hx::Val( refCount ); }
		if (HX_FIELD_EQ(inName,"triCount") ) { return ::hx::Val( triCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexCount") ) { return ::hx::Val( vertexCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCollider") ) { return ::hx::Val( getCollider_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectMaterial") ) { return ::hx::Val( selectMaterial_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"buildNormalsDisplay") ) { return ::hx::Val( buildNormalsDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Primitive_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::h3d::Buffer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexes") ) { indexes=inValue.Cast<  ::h3d::Indexes >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"refCount") ) { refCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Primitive_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("indexes",00,5c,bf,e0));
	outFields->push(HX_("refCount",7c,2e,66,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Primitive_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Buffer */ ,(int)offsetof(Primitive_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsObject /*  ::h3d::Indexes */ ,(int)offsetof(Primitive_obj,indexes),HX_("indexes",00,5c,bf,e0)},
	{::hx::fsInt,(int)offsetof(Primitive_obj,refCount),HX_("refCount",7c,2e,66,86)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Primitive_obj_sStaticStorageInfo = 0;
#endif

static ::String Primitive_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("indexes",00,5c,bf,e0),
	HX_("refCount",7c,2e,66,86),
	HX_("triCount",a4,2f,74,48),
	HX_("vertexCount",cb,0e,9f,5e),
	HX_("getCollider",ea,a1,c9,ef),
	HX_("getBounds",ab,0f,74,e2),
	HX_("incref",35,ab,53,93),
	HX_("decref",d1,a4,ef,64),
	HX_("alloc",75,a4,93,21),
	HX_("selectMaterial",c3,8f,d7,49),
	HX_("buildNormalsDisplay",04,6b,d7,10),
	HX_("render",56,6b,29,05),
	HX_("dispose",9f,80,4c,bb),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Primitive_obj::__mClass;

void Primitive_obj::__register()
{
	Primitive_obj _hx_dummy;
	Primitive_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.prim.Primitive",14,96,83,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Primitive_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Primitive_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Primitive_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Primitive_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace prim
