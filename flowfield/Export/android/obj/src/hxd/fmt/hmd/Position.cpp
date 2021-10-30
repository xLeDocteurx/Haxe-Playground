#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Quat
#include <h3d/Quat.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Position
#include <hxd/fmt/hmd/Position.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_454f8903db1c392b_60_new,"hxd.fmt.hmd.Position","new",0x8cfd3de5,"hxd.fmt.hmd.Position.new","hxd/fmt/hmd/Data.hx",60,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_454f8903db1c392b_63_loadQuaternion,"hxd.fmt.hmd.Position","loadQuaternion",0xae92bd7f,"hxd.fmt.hmd.Position.loadQuaternion","hxd/fmt/hmd/Data.hx",63,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_454f8903db1c392b_70_get_qw,"hxd.fmt.hmd.Position","get_qw",0x0a520dca,"hxd.fmt.hmd.Position.get_qw","hxd/fmt/hmd/Data.hx",70,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_454f8903db1c392b_75_toMatrix,"hxd.fmt.hmd.Position","toMatrix",0xe5894e77,"hxd.fmt.hmd.Position.toMatrix","hxd/fmt/hmd/Data.hx",75,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_454f8903db1c392b_91_boot,"hxd.fmt.hmd.Position","boot",0xc8b1eb0d,"hxd.fmt.hmd.Position.boot","hxd/fmt/hmd/Data.hx",91,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void Position_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_454f8903db1c392b_60_new)
            	}

Dynamic Position_obj::__CreateEmpty() { return new Position_obj; }

void *Position_obj::_hx_vtable = 0;

Dynamic Position_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Position_obj > _hx_result = new Position_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Position_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ae1750b;
}

void Position_obj::loadQuaternion( ::h3d::Quat q){
            	HX_STACKFRAME(&_hx_pos_454f8903db1c392b_63_loadQuaternion)
HXLINE(  64)		q->x = this->qx;
HXLINE(  65)		q->y = this->qy;
HXLINE(  66)		q->z = this->qz;
HXLINE(  67)		q->w = this->get_qw();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Position_obj,loadQuaternion,(void))

Float Position_obj::get_qw(){
            	HX_STACKFRAME(&_hx_pos_454f8903db1c392b_70_get_qw)
HXLINE(  71)		Float qw = (( (Float)(1) ) - (((this->qx * this->qx) + (this->qy * this->qy)) + (this->qz * this->qz)));
HXLINE(  72)		if ((qw < 0)) {
HXLINE(  72)			return -(::Math_obj::sqrt(-(qw)));
            		}
            		else {
HXLINE(  72)			return ::Math_obj::sqrt(qw);
            		}
HXDLIN(  72)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Position_obj,get_qw,return )

 ::h3d::Matrix Position_obj::toMatrix(::hx::Null< bool >  __o_postScale){
            		bool postScale = __o_postScale.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_454f8903db1c392b_75_toMatrix)
HXLINE(  76)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  77)		 ::h3d::Quat q = ::hxd::fmt::hmd::Position_obj::QTMP;
HXLINE(  78)		{
HXLINE(  78)			q->x = this->qx;
HXDLIN(  78)			q->y = this->qy;
HXDLIN(  78)			q->z = this->qz;
HXDLIN(  78)			q->w = this->get_qw();
            		}
HXLINE(  79)		q->toMatrix(m);
HXLINE(  80)		if (postScale) {
HXLINE(  81)			m->translate(this->x,this->y,this->z);
HXLINE(  82)			m->scale(this->sx,this->sy,this->sz);
            		}
            		else {
HXLINE(  84)			 ::h3d::Matrix m1 = m;
HXDLIN(  84)			m1->_11 = (m1->_11 * this->sx);
HXDLIN(  84)			 ::h3d::Matrix m2 = m;
HXDLIN(  84)			m2->_12 = (m2->_12 * this->sx);
HXDLIN(  84)			 ::h3d::Matrix m3 = m;
HXDLIN(  84)			m3->_13 = (m3->_13 * this->sx);
HXLINE(  85)			 ::h3d::Matrix m4 = m;
HXDLIN(  85)			m4->_21 = (m4->_21 * this->sy);
HXDLIN(  85)			 ::h3d::Matrix m5 = m;
HXDLIN(  85)			m5->_22 = (m5->_22 * this->sy);
HXDLIN(  85)			 ::h3d::Matrix m6 = m;
HXDLIN(  85)			m6->_23 = (m6->_23 * this->sy);
HXLINE(  86)			 ::h3d::Matrix m7 = m;
HXDLIN(  86)			m7->_31 = (m7->_31 * this->sz);
HXDLIN(  86)			 ::h3d::Matrix m8 = m;
HXDLIN(  86)			m8->_32 = (m8->_32 * this->sz);
HXDLIN(  86)			 ::h3d::Matrix m9 = m;
HXDLIN(  86)			m9->_33 = (m9->_33 * this->sz);
HXLINE(  87)			m->translate(this->x,this->y,this->z);
            		}
HXLINE(  89)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Position_obj,toMatrix,return )

 ::h3d::Quat Position_obj::QTMP;


::hx::ObjectPtr< Position_obj > Position_obj::__new() {
	::hx::ObjectPtr< Position_obj > __this = new Position_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Position_obj > Position_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Position_obj *__this = (Position_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Position_obj), false, "hxd.fmt.hmd.Position"));
	*(void **)__this = Position_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Position_obj::Position_obj()
{
}

::hx::Val Position_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"qx") ) { return ::hx::Val( qx ); }
		if (HX_FIELD_EQ(inName,"qy") ) { return ::hx::Val( qy ); }
		if (HX_FIELD_EQ(inName,"qz") ) { return ::hx::Val( qz ); }
		if (HX_FIELD_EQ(inName,"qw") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_qw() ); }
		if (HX_FIELD_EQ(inName,"sx") ) { return ::hx::Val( sx ); }
		if (HX_FIELD_EQ(inName,"sy") ) { return ::hx::Val( sy ); }
		if (HX_FIELD_EQ(inName,"sz") ) { return ::hx::Val( sz ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_qw") ) { return ::hx::Val( get_qw_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toMatrix") ) { return ::hx::Val( toMatrix_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadQuaternion") ) { return ::hx::Val( loadQuaternion_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Position_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"QTMP") ) { outValue = ( QTMP ); return true; }
	}
	return false;
}

::hx::Val Position_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"qx") ) { qx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"qy") ) { qy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"qz") ) { qz=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sx") ) { sx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sy") ) { sy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sz") ) { sz=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Position_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"QTMP") ) { QTMP=ioValue.Cast<  ::h3d::Quat >(); return true; }
	}
	return false;
}

void Position_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("qx",e7,62,00,00));
	outFields->push(HX_("qy",e8,62,00,00));
	outFields->push(HX_("qz",e9,62,00,00));
	outFields->push(HX_("qw",e6,62,00,00));
	outFields->push(HX_("sx",a5,64,00,00));
	outFields->push(HX_("sy",a6,64,00,00));
	outFields->push(HX_("sz",a7,64,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Position_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Position_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Position_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Position_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Position_obj,qx),HX_("qx",e7,62,00,00)},
	{::hx::fsFloat,(int)offsetof(Position_obj,qy),HX_("qy",e8,62,00,00)},
	{::hx::fsFloat,(int)offsetof(Position_obj,qz),HX_("qz",e9,62,00,00)},
	{::hx::fsFloat,(int)offsetof(Position_obj,sx),HX_("sx",a5,64,00,00)},
	{::hx::fsFloat,(int)offsetof(Position_obj,sy),HX_("sy",a6,64,00,00)},
	{::hx::fsFloat,(int)offsetof(Position_obj,sz),HX_("sz",a7,64,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Position_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Quat */ ,(void *) &Position_obj::QTMP,HX_("QTMP",06,49,ca,35)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Position_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("qx",e7,62,00,00),
	HX_("qy",e8,62,00,00),
	HX_("qz",e9,62,00,00),
	HX_("sx",a5,64,00,00),
	HX_("sy",a6,64,00,00),
	HX_("sz",a7,64,00,00),
	HX_("loadQuaternion",e4,16,7b,b2),
	HX_("get_qw",2f,fa,2f,a3),
	HX_("toMatrix",1c,de,06,e3),
	::String(null()) };

static void Position_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Position_obj::QTMP,"QTMP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Position_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Position_obj::QTMP,"QTMP");
};

#endif

::hx::Class Position_obj::__mClass;

static ::String Position_obj_sStaticFields[] = {
	HX_("QTMP",06,49,ca,35),
	::String(null())
};

void Position_obj::__register()
{
	Position_obj _hx_dummy;
	Position_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.Position",73,67,ed,76);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Position_obj::__GetStatic;
	__mClass->mSetStaticField = &Position_obj::__SetStatic;
	__mClass->mMarkFunc = Position_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Position_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Position_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Position_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Position_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Position_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Position_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Position_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_454f8903db1c392b_91_boot)
HXDLIN(  91)		QTMP =  ::h3d::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
