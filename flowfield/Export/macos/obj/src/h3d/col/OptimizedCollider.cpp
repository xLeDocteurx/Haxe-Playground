#include <hxcpp.h>

#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_col_Frustum
#include <h3d/col/Frustum.h>
#endif
#ifndef INCLUDED_h3d_col_OptimizedCollider
#include <h3d/col/OptimizedCollider.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_col_Ray
#include <h3d/col/Ray.h>
#endif
#ifndef INCLUDED_h3d_col_Sphere
#include <h3d/col/Sphere.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b4a169fe96684830_21_new,"h3d.col.OptimizedCollider","new",0xd609ef6a,"h3d.col.OptimizedCollider.new","h3d/col/Collider.hx",21,0xacb2da45)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a169fe96684830_26_rayIntersection,"h3d.col.OptimizedCollider","rayIntersection",0xfb96815d,"h3d.col.OptimizedCollider.rayIntersection","h3d/col/Collider.hx",26,0xacb2da45)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a169fe96684830_33_contains,"h3d.col.OptimizedCollider","contains",0xf2c676d5,"h3d.col.OptimizedCollider.contains","h3d/col/Collider.hx",33,0xacb2da45)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a169fe96684830_37_inFrustum,"h3d.col.OptimizedCollider","inFrustum",0x71ea8c87,"h3d.col.OptimizedCollider.inFrustum","h3d/col/Collider.hx",37,0xacb2da45)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a169fe96684830_41_inSphere,"h3d.col.OptimizedCollider","inSphere",0x0bc01588,"h3d.col.OptimizedCollider.inSphere","h3d/col/Collider.hx",41,0xacb2da45)
namespace h3d{
namespace col{

void OptimizedCollider_obj::__construct(::Dynamic a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_b4a169fe96684830_21_new)
HXLINE(  22)		this->a = a;
HXLINE(  23)		this->b = b;
            	}

Dynamic OptimizedCollider_obj::__CreateEmpty() { return new OptimizedCollider_obj; }

void *OptimizedCollider_obj::_hx_vtable = 0;

Dynamic OptimizedCollider_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptimizedCollider_obj > _hx_result = new OptimizedCollider_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptimizedCollider_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57d06e54;
}

static ::h3d::col::Collider_obj _hx_h3d_col_OptimizedCollider__hx_h3d_col_Collider= {
	( Float (::hx::Object::*)( ::h3d::col::Ray,bool))&::h3d::col::OptimizedCollider_obj::rayIntersection,
	( bool (::hx::Object::*)( ::h3d::col::Point))&::h3d::col::OptimizedCollider_obj::contains,
	( bool (::hx::Object::*)( ::h3d::col::Frustum, ::h3d::Matrix))&::h3d::col::OptimizedCollider_obj::inFrustum,
	( bool (::hx::Object::*)( ::h3d::col::Sphere))&::h3d::col::OptimizedCollider_obj::inSphere,
};

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_col_OptimizedCollider__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *OptimizedCollider_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x12a1e47b: return &_hx_h3d_col_OptimizedCollider__hx_h3d_col_Collider;
		case (int)0xa6f1a21a: return &_hx_h3d_col_OptimizedCollider__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float OptimizedCollider_obj::rayIntersection( ::h3d::col::Ray r,bool bestMatch){
            	HX_STACKFRAME(&_hx_pos_b4a169fe96684830_26_rayIntersection)
HXLINE(  27)		if ((::h3d::col::Collider_obj::rayIntersection(this->a,r,bestMatch) < 0)) {
HXLINE(  28)			return ( (Float)(-1) );
            		}
HXLINE(  29)		return ::h3d::col::Collider_obj::rayIntersection(this->b,r,bestMatch);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OptimizedCollider_obj,rayIntersection,return )

bool OptimizedCollider_obj::contains( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_b4a169fe96684830_33_contains)
HXDLIN(  33)		if (::h3d::col::Collider_obj::contains(this->a,p)) {
HXDLIN(  33)			return ::h3d::col::Collider_obj::contains(this->b,p);
            		}
            		else {
HXDLIN(  33)			return false;
            		}
HXDLIN(  33)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptimizedCollider_obj,contains,return )

bool OptimizedCollider_obj::inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_b4a169fe96684830_37_inFrustum)
HXDLIN(  37)		if (::h3d::col::Collider_obj::inFrustum(this->a,f,m)) {
HXDLIN(  37)			return ::h3d::col::Collider_obj::inFrustum(this->b,f,m);
            		}
            		else {
HXDLIN(  37)			return false;
            		}
HXDLIN(  37)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(OptimizedCollider_obj,inFrustum,return )

bool OptimizedCollider_obj::inSphere( ::h3d::col::Sphere s){
            	HX_STACKFRAME(&_hx_pos_b4a169fe96684830_41_inSphere)
HXDLIN(  41)		if (::h3d::col::Collider_obj::inSphere(this->a,s)) {
HXDLIN(  41)			return ::h3d::col::Collider_obj::inSphere(this->b,s);
            		}
            		else {
HXDLIN(  41)			return false;
            		}
HXDLIN(  41)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptimizedCollider_obj,inSphere,return )


::hx::ObjectPtr< OptimizedCollider_obj > OptimizedCollider_obj::__new(::Dynamic a,::Dynamic b) {
	::hx::ObjectPtr< OptimizedCollider_obj > __this = new OptimizedCollider_obj();
	__this->__construct(a,b);
	return __this;
}

::hx::ObjectPtr< OptimizedCollider_obj > OptimizedCollider_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic a,::Dynamic b) {
	OptimizedCollider_obj *__this = (OptimizedCollider_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptimizedCollider_obj), true, "h3d.col.OptimizedCollider"));
	*(void **)__this = OptimizedCollider_obj::_hx_vtable;
	__this->__construct(a,b);
	return __this;
}

OptimizedCollider_obj::OptimizedCollider_obj()
{
}

void OptimizedCollider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptimizedCollider);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void OptimizedCollider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
}

::hx::Val OptimizedCollider_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"inSphere") ) { return ::hx::Val( inSphere_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inFrustum") ) { return ::hx::Val( inFrustum_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OptimizedCollider_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptimizedCollider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptimizedCollider_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(OptimizedCollider_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(OptimizedCollider_obj,b),HX_("b",62,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OptimizedCollider_obj_sStaticStorageInfo = 0;
#endif

static ::String OptimizedCollider_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	HX_("rayIntersection",53,fb,28,64),
	HX_("contains",1f,5a,7b,2c),
	HX_("inFrustum",fd,89,7c,b6),
	HX_("inSphere",d2,f8,74,45),
	::String(null()) };

::hx::Class OptimizedCollider_obj::__mClass;

void OptimizedCollider_obj::__register()
{
	OptimizedCollider_obj _hx_dummy;
	OptimizedCollider_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.OptimizedCollider",78,b2,77,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptimizedCollider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptimizedCollider_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptimizedCollider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptimizedCollider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
