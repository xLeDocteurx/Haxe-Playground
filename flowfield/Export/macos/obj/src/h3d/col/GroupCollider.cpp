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
#ifndef INCLUDED_h3d_col_GroupCollider
#include <h3d/col/GroupCollider.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9722535f0bb3f247_58_new,"h3d.col.GroupCollider","new",0x864d2f42,"h3d.col.GroupCollider.new","h3d/col/Collider.hx",58,0xacb2da45)
HX_LOCAL_STACK_FRAME(_hx_pos_9722535f0bb3f247_61_rayIntersection,"h3d.col.GroupCollider","rayIntersection",0xbda62535,"h3d.col.GroupCollider.rayIntersection","h3d/col/Collider.hx",61,0xacb2da45)
HX_LOCAL_STACK_FRAME(_hx_pos_9722535f0bb3f247_73_contains,"h3d.col.GroupCollider","contains",0x4874c7fd,"h3d.col.GroupCollider.contains","h3d/col/Collider.hx",73,0xacb2da45)
HX_LOCAL_STACK_FRAME(_hx_pos_9722535f0bb3f247_80_inFrustum,"h3d.col.GroupCollider","inFrustum",0x14c33e5f,"h3d.col.GroupCollider.inFrustum","h3d/col/Collider.hx",80,0xacb2da45)
HX_LOCAL_STACK_FRAME(_hx_pos_9722535f0bb3f247_87_inSphere,"h3d.col.GroupCollider","inSphere",0x616e66b0,"h3d.col.GroupCollider.inSphere","h3d/col/Collider.hx",87,0xacb2da45)
namespace h3d{
namespace col{

void GroupCollider_obj::__construct(::Array< ::Dynamic> colliders){
            	HX_STACKFRAME(&_hx_pos_9722535f0bb3f247_58_new)
HXDLIN(  58)		this->colliders = colliders;
            	}

Dynamic GroupCollider_obj::__CreateEmpty() { return new GroupCollider_obj; }

void *GroupCollider_obj::_hx_vtable = 0;

Dynamic GroupCollider_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GroupCollider_obj > _hx_result = new GroupCollider_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GroupCollider_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a6e8f48;
}

static ::h3d::col::Collider_obj _hx_h3d_col_GroupCollider__hx_h3d_col_Collider= {
	( Float (::hx::Object::*)( ::h3d::col::Ray,bool))&::h3d::col::GroupCollider_obj::rayIntersection,
	( bool (::hx::Object::*)( ::h3d::col::Point))&::h3d::col::GroupCollider_obj::contains,
	( bool (::hx::Object::*)( ::h3d::col::Frustum, ::h3d::Matrix))&::h3d::col::GroupCollider_obj::inFrustum,
	( bool (::hx::Object::*)( ::h3d::col::Sphere))&::h3d::col::GroupCollider_obj::inSphere,
};

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_col_GroupCollider__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *GroupCollider_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x12a1e47b: return &_hx_h3d_col_GroupCollider__hx_h3d_col_Collider;
		case (int)0xa6f1a21a: return &_hx_h3d_col_GroupCollider__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float GroupCollider_obj::rayIntersection( ::h3d::col::Ray r,bool bestMatch){
            	HX_STACKFRAME(&_hx_pos_9722535f0bb3f247_61_rayIntersection)
HXLINE(  62)		Float best = ((Float)-1.);
HXLINE(  63)		{
HXLINE(  63)			int _g = 0;
HXDLIN(  63)			::Array< ::Dynamic> _g1 = this->colliders;
HXDLIN(  63)			while((_g < _g1->length)){
HXLINE(  63)				::Dynamic c = _g1->__get(_g);
HXDLIN(  63)				_g = (_g + 1);
HXLINE(  64)				Float d = ::h3d::col::Collider_obj::rayIntersection(c,r,bestMatch);
HXLINE(  65)				if ((d >= 0)) {
HXLINE(  66)					if (!(bestMatch)) {
HXLINE(  66)						return d;
            					}
HXLINE(  67)					bool _hx_tmp;
HXDLIN(  67)					if (!((best < 0))) {
HXLINE(  67)						_hx_tmp = (d < best);
            					}
            					else {
HXLINE(  67)						_hx_tmp = true;
            					}
HXDLIN(  67)					if (_hx_tmp) {
HXLINE(  67)						best = d;
            					}
            				}
            			}
            		}
HXLINE(  70)		return best;
            	}


HX_DEFINE_DYNAMIC_FUNC2(GroupCollider_obj,rayIntersection,return )

bool GroupCollider_obj::contains( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_9722535f0bb3f247_73_contains)
HXLINE(  74)		{
HXLINE(  74)			int _g = 0;
HXDLIN(  74)			::Array< ::Dynamic> _g1 = this->colliders;
HXDLIN(  74)			while((_g < _g1->length)){
HXLINE(  74)				::Dynamic c = _g1->__get(_g);
HXDLIN(  74)				_g = (_g + 1);
HXLINE(  75)				if (::h3d::col::Collider_obj::contains(c,p)) {
HXLINE(  76)					return true;
            				}
            			}
            		}
HXLINE(  77)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GroupCollider_obj,contains,return )

bool GroupCollider_obj::inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_9722535f0bb3f247_80_inFrustum)
HXLINE(  81)		{
HXLINE(  81)			int _g = 0;
HXDLIN(  81)			::Array< ::Dynamic> _g1 = this->colliders;
HXDLIN(  81)			while((_g < _g1->length)){
HXLINE(  81)				::Dynamic c = _g1->__get(_g);
HXDLIN(  81)				_g = (_g + 1);
HXLINE(  82)				if (::h3d::col::Collider_obj::inFrustum(c,f,m)) {
HXLINE(  83)					return true;
            				}
            			}
            		}
HXLINE(  84)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(GroupCollider_obj,inFrustum,return )

bool GroupCollider_obj::inSphere( ::h3d::col::Sphere s){
            	HX_STACKFRAME(&_hx_pos_9722535f0bb3f247_87_inSphere)
HXLINE(  88)		{
HXLINE(  88)			int _g = 0;
HXDLIN(  88)			::Array< ::Dynamic> _g1 = this->colliders;
HXDLIN(  88)			while((_g < _g1->length)){
HXLINE(  88)				::Dynamic c = _g1->__get(_g);
HXDLIN(  88)				_g = (_g + 1);
HXLINE(  89)				if (::h3d::col::Collider_obj::inSphere(c,s)) {
HXLINE(  90)					return true;
            				}
            			}
            		}
HXLINE(  91)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GroupCollider_obj,inSphere,return )


::hx::ObjectPtr< GroupCollider_obj > GroupCollider_obj::__new(::Array< ::Dynamic> colliders) {
	::hx::ObjectPtr< GroupCollider_obj > __this = new GroupCollider_obj();
	__this->__construct(colliders);
	return __this;
}

::hx::ObjectPtr< GroupCollider_obj > GroupCollider_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> colliders) {
	GroupCollider_obj *__this = (GroupCollider_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GroupCollider_obj), true, "h3d.col.GroupCollider"));
	*(void **)__this = GroupCollider_obj::_hx_vtable;
	__this->__construct(colliders);
	return __this;
}

GroupCollider_obj::GroupCollider_obj()
{
}

void GroupCollider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GroupCollider);
	HX_MARK_MEMBER_NAME(colliders,"colliders");
	HX_MARK_END_CLASS();
}

void GroupCollider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colliders,"colliders");
}

::hx::Val GroupCollider_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"inSphere") ) { return ::hx::Val( inSphere_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colliders") ) { return ::hx::Val( colliders ); }
		if (HX_FIELD_EQ(inName,"inFrustum") ) { return ::hx::Val( inFrustum_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GroupCollider_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"colliders") ) { colliders=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GroupCollider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colliders",bf,6e,4d,d1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GroupCollider_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(GroupCollider_obj,colliders),HX_("colliders",bf,6e,4d,d1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GroupCollider_obj_sStaticStorageInfo = 0;
#endif

static ::String GroupCollider_obj_sMemberFields[] = {
	HX_("colliders",bf,6e,4d,d1),
	HX_("rayIntersection",53,fb,28,64),
	HX_("contains",1f,5a,7b,2c),
	HX_("inFrustum",fd,89,7c,b6),
	HX_("inSphere",d2,f8,74,45),
	::String(null()) };

::hx::Class GroupCollider_obj::__mClass;

void GroupCollider_obj::__register()
{
	GroupCollider_obj _hx_dummy;
	GroupCollider_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.GroupCollider",50,26,78,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GroupCollider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GroupCollider_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GroupCollider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GroupCollider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
