#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Particle
#include <Particle.h>
#endif
#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
#ifndef INCLUDED_h2d_Graphics
#include <h2d/Graphics.h>
#endif
#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c6ebc812e1d9f2a0_104_new,"Particle","new",0x95e2c658,"Particle.new","Main.hx",104,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_c6ebc812e1d9f2a0_111_draw,"Particle","draw",0x89f86f0c,"Particle.draw","Main.hx",111,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_c6ebc812e1d9f2a0_117_applyForce,"Particle","applyForce",0xb82e66a5,"Particle.applyForce","Main.hx",117,0x087e5c05)

void Particle_obj::__construct(Float positionX,Float positionY,Float size,Float alpha){
            	HX_STACKFRAME(&_hx_pos_c6ebc812e1d9f2a0_104_new)
HXLINE( 105)		this->positionX = positionX;
HXLINE( 106)		this->positionY = positionY;
HXLINE( 107)		this->_size = size;
HXLINE( 108)		this->_alpha = alpha;
            	}

Dynamic Particle_obj::__CreateEmpty() { return new Particle_obj; }

void *Particle_obj::_hx_vtable = 0;

Dynamic Particle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Particle_obj > _hx_result = new Particle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Particle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f97b7ee;
}

void Particle_obj::draw( ::h2d::Graphics customGraphics,int color){
            	HX_STACKFRAME(&_hx_pos_c6ebc812e1d9f2a0_111_draw)
HXLINE( 112)		customGraphics->beginFill(color,this->_alpha);
HXLINE( 113)		customGraphics->drawCircle(this->positionX,this->positionY,this->_size,null());
HXLINE( 114)		customGraphics->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Particle_obj,draw,(void))

void Particle_obj::applyForce(Float noiseValue,Float magnitude,int windowWidth,int windowHeight){
            	HX_STACKFRAME(&_hx_pos_c6ebc812e1d9f2a0_117_applyForce)
HXLINE( 120)		Float vectX = (magnitude * ::Math_obj::cos(((noiseValue * ( (Float)(2) )) * ::Math_obj::PI)));
HXLINE( 121)		Float vectY = (magnitude * ::Math_obj::sin(((noiseValue * ( (Float)(2) )) * ::Math_obj::PI)));
HXLINE( 122)		Float _hx_tmp;
HXDLIN( 122)		if (((this->positionX + vectX) < windowWidth)) {
HXLINE( 122)			if (((this->positionX + vectX) > 0)) {
HXLINE( 122)				_hx_tmp = (this->positionX + vectX);
            			}
            			else {
HXLINE( 122)				_hx_tmp = ( (Float)((windowWidth - 1)) );
            			}
            		}
            		else {
HXLINE( 122)			_hx_tmp = ( (Float)(1) );
            		}
HXDLIN( 122)		this->positionX = _hx_tmp;
HXLINE( 123)		Float _hx_tmp1;
HXDLIN( 123)		if (((this->positionY + vectY) < windowHeight)) {
HXLINE( 123)			if (((this->positionY + vectY) > 0)) {
HXLINE( 123)				_hx_tmp1 = (this->positionY + vectY);
            			}
            			else {
HXLINE( 123)				_hx_tmp1 = ( (Float)((windowHeight - 1)) );
            			}
            		}
            		else {
HXLINE( 123)			_hx_tmp1 = ( (Float)(1) );
            		}
HXDLIN( 123)		this->positionY = _hx_tmp1;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Particle_obj,applyForce,(void))


::hx::ObjectPtr< Particle_obj > Particle_obj::__new(Float positionX,Float positionY,Float size,Float alpha) {
	::hx::ObjectPtr< Particle_obj > __this = new Particle_obj();
	__this->__construct(positionX,positionY,size,alpha);
	return __this;
}

::hx::ObjectPtr< Particle_obj > Particle_obj::__alloc(::hx::Ctx *_hx_ctx,Float positionX,Float positionY,Float size,Float alpha) {
	Particle_obj *__this = (Particle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Particle_obj), false, "Particle"));
	*(void **)__this = Particle_obj::_hx_vtable;
	__this->__construct(positionX,positionY,size,alpha);
	return __this;
}

Particle_obj::Particle_obj()
{
}

::hx::Val Particle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { return ::hx::Val( _size ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_alpha") ) { return ::hx::Val( _alpha ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positionX") ) { return ::hx::Val( positionX ); }
		if (HX_FIELD_EQ(inName,"positionY") ) { return ::hx::Val( positionY ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyForce") ) { return ::hx::Val( applyForce_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Particle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positionX") ) { positionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionY") ) { positionY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Particle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("positionX",8f,f3,51,d0));
	outFields->push(HX_("positionY",90,f3,51,d0));
	outFields->push(HX_("_size",a0,bc,64,ff));
	outFields->push(HX_("_alpha",9f,ee,7d,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Particle_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Particle_obj,positionX),HX_("positionX",8f,f3,51,d0)},
	{::hx::fsFloat,(int)offsetof(Particle_obj,positionY),HX_("positionY",90,f3,51,d0)},
	{::hx::fsFloat,(int)offsetof(Particle_obj,_size),HX_("_size",a0,bc,64,ff)},
	{::hx::fsFloat,(int)offsetof(Particle_obj,_alpha),HX_("_alpha",9f,ee,7d,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Particle_obj_sStaticStorageInfo = 0;
#endif

static ::String Particle_obj_sMemberFields[] = {
	HX_("positionX",8f,f3,51,d0),
	HX_("positionY",90,f3,51,d0),
	HX_("_size",a0,bc,64,ff),
	HX_("_alpha",9f,ee,7d,1d),
	HX_("draw",04,2c,70,42),
	HX_("applyForce",9d,2d,e6,af),
	::String(null()) };

::hx::Class Particle_obj::__mClass;

void Particle_obj::__register()
{
	Particle_obj _hx_dummy;
	Particle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Particle",66,fa,42,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Particle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Particle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Particle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Particle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

