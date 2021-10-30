#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h3d_Camera
#include <h3d/Camera.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_hxd_snd_Listener
#include <hxd/snd/Listener.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ba9cf47e4e620665_10_new,"hxd.snd.Listener","new",0xab64de05,"hxd.snd.Listener.new","hxd/snd/Listener.hx",10,0xee271fc9)
HX_LOCAL_STACK_FRAME(_hx_pos_ba9cf47e4e620665_17_syncCamera,"hxd.snd.Listener","syncCamera",0x60874c5b,"hxd.snd.Listener.syncCamera","hxd/snd/Listener.hx",17,0xee271fc9)
namespace hxd{
namespace snd{

void Listener_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_ba9cf47e4e620665_10_new)
HXLINE(  11)		this->position =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  12)		this->velocity =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  13)		this->direction =  ::h3d::Vector_obj::__alloc( HX_CTX ,1,0,0,null());
HXLINE(  14)		this->up =  ::h3d::Vector_obj::__alloc( HX_CTX ,0,0,1,null());
            	}

Dynamic Listener_obj::__CreateEmpty() { return new Listener_obj; }

void *Listener_obj::_hx_vtable = 0;

Dynamic Listener_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Listener_obj > _hx_result = new Listener_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Listener_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37ce9329;
}

void Listener_obj::syncCamera( ::h3d::Camera cam){
            	HX_STACKFRAME(&_hx_pos_ba9cf47e4e620665_17_syncCamera)
HXLINE(  18)		{
HXLINE(  18)			 ::h3d::Vector _this = this->position;
HXDLIN(  18)			 ::h3d::Vector v = cam->pos;
HXDLIN(  18)			_this->x = v->x;
HXDLIN(  18)			_this->y = v->y;
HXDLIN(  18)			_this->z = v->z;
HXDLIN(  18)			_this->w = v->w;
            		}
HXLINE(  19)		{
HXLINE(  19)			 ::h3d::Vector _this1 = this->direction;
HXDLIN(  19)			_this1->x = (cam->target->x - cam->pos->x);
HXDLIN(  19)			_this1->y = (cam->target->y - cam->pos->y);
HXDLIN(  19)			_this1->z = (cam->target->z - cam->pos->z);
HXDLIN(  19)			_this1->w = ((Float)1.);
            		}
HXLINE(  20)		{
HXLINE(  20)			 ::h3d::Vector _this2 = this->direction;
HXDLIN(  20)			Float k = (((_this2->x * _this2->x) + (_this2->y * _this2->y)) + (_this2->z * _this2->z));
HXDLIN(  20)			if ((k < ((Float)1e-10))) {
HXLINE(  20)				k = ( (Float)(0) );
            			}
            			else {
HXLINE(  20)				k = (((Float)1.) / ::Math_obj::sqrt(k));
            			}
HXDLIN(  20)			 ::h3d::Vector _this3 = _this2;
HXDLIN(  20)			_this3->x = (_this3->x * k);
HXDLIN(  20)			 ::h3d::Vector _this4 = _this2;
HXDLIN(  20)			_this4->y = (_this4->y * k);
HXDLIN(  20)			 ::h3d::Vector _this5 = _this2;
HXDLIN(  20)			_this5->z = (_this5->z * k);
            		}
HXLINE(  21)		{
HXLINE(  21)			 ::h3d::Vector _this6 = this->up;
HXDLIN(  21)			 ::h3d::Vector v1 = cam->up;
HXDLIN(  21)			_this6->x = v1->x;
HXDLIN(  21)			_this6->y = v1->y;
HXDLIN(  21)			_this6->z = v1->z;
HXDLIN(  21)			_this6->w = v1->w;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,syncCamera,(void))


::hx::ObjectPtr< Listener_obj > Listener_obj::__new() {
	::hx::ObjectPtr< Listener_obj > __this = new Listener_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Listener_obj > Listener_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Listener_obj *__this = (Listener_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Listener_obj), true, "hxd.snd.Listener"));
	*(void **)__this = Listener_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(up,"up");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(up,"up");
}

::hx::Val Listener_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return ::hx::Val( up ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"velocity") ) { return ::hx::Val( velocity ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return ::hx::Val( direction ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"syncCamera") ) { return ::hx::Val( syncCamera_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Listener_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast<  ::h3d::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("direction",3f,62,40,10));
	outFields->push(HX_("velocity",1d,02,fe,1e));
	outFields->push(HX_("up",5b,66,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Listener_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Listener_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Listener_obj,direction),HX_("direction",3f,62,40,10)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Listener_obj,velocity),HX_("velocity",1d,02,fe,1e)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Listener_obj,up),HX_("up",5b,66,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Listener_obj_sStaticStorageInfo = 0;
#endif

static ::String Listener_obj_sMemberFields[] = {
	HX_("position",a9,a0,fa,ca),
	HX_("direction",3f,62,40,10),
	HX_("velocity",1d,02,fe,1e),
	HX_("up",5b,66,00,00),
	HX_("syncCamera",60,2b,29,aa),
	::String(null()) };

::hx::Class Listener_obj::__mClass;

void Listener_obj::__register()
{
	Listener_obj _hx_dummy;
	Listener_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.Listener",93,77,ba,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Listener_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Listener_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Listener_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Listener_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
