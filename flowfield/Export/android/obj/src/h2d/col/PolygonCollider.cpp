#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_Collider
#include <h2d/col/Collider.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h2d_col_PolygonCollider
#include <h2d/col/PolygonCollider.h>
#endif
#ifndef INCLUDED_h2d_col__Polygons_Polygons_Impl_
#include <h2d/col/_Polygons/Polygons_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7c8727ca8ed5a0a9_20_new,"h2d.col.PolygonCollider","new",0xd0518e5e,"h2d.col.PolygonCollider.new","h2d/col/PolygonCollider.hx",20,0x123cc3d4)
HX_LOCAL_STACK_FRAME(_hx_pos_7c8727ca8ed5a0a9_28_contains,"h2d.col.PolygonCollider","contains",0x49362361,"h2d.col.PolygonCollider.contains","h2d/col/PolygonCollider.hx",28,0x123cc3d4)
namespace h2d{
namespace col{

void PolygonCollider_obj::__construct(::Array< ::Dynamic> polygons,::hx::Null< bool >  __o_isConvex){
            		bool isConvex = __o_isConvex.Default(false);
            	HX_STACKFRAME(&_hx_pos_7c8727ca8ed5a0a9_20_new)
HXLINE(  21)		this->polygons = polygons;
HXLINE(  22)		this->isConvex = isConvex;
            	}

Dynamic PolygonCollider_obj::__CreateEmpty() { return new PolygonCollider_obj; }

void *PolygonCollider_obj::_hx_vtable = 0;

Dynamic PolygonCollider_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PolygonCollider_obj > _hx_result = new PolygonCollider_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PolygonCollider_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x53d7fe88;
}

static ::h2d::col::Collider_obj _hx_h2d_col_PolygonCollider__hx_h2d_col_Collider= {
	( bool (::hx::Object::*)( ::h2d::col::Point))&::h2d::col::PolygonCollider_obj::contains,
};

void *PolygonCollider_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x8fae127a: return &_hx_h2d_col_PolygonCollider__hx_h2d_col_Collider;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool PolygonCollider_obj::contains( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_7c8727ca8ed5a0a9_28_contains)
HXLINE(  29)		if (::hx::IsNull( this->polygons )) {
HXLINE(  29)			return false;
            		}
HXLINE(  30)		return ::h2d::col::_Polygons::Polygons_Impl__obj::contains(this->polygons,p,this->isConvex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolygonCollider_obj,contains,return )


::hx::ObjectPtr< PolygonCollider_obj > PolygonCollider_obj::__new(::Array< ::Dynamic> polygons,::hx::Null< bool >  __o_isConvex) {
	::hx::ObjectPtr< PolygonCollider_obj > __this = new PolygonCollider_obj();
	__this->__construct(polygons,__o_isConvex);
	return __this;
}

::hx::ObjectPtr< PolygonCollider_obj > PolygonCollider_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> polygons,::hx::Null< bool >  __o_isConvex) {
	PolygonCollider_obj *__this = (PolygonCollider_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolygonCollider_obj), true, "h2d.col.PolygonCollider"));
	*(void **)__this = PolygonCollider_obj::_hx_vtable;
	__this->__construct(polygons,__o_isConvex);
	return __this;
}

PolygonCollider_obj::PolygonCollider_obj()
{
}

void PolygonCollider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PolygonCollider);
	HX_MARK_MEMBER_NAME(polygons,"polygons");
	HX_MARK_MEMBER_NAME(isConvex,"isConvex");
	HX_MARK_END_CLASS();
}

void PolygonCollider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(polygons,"polygons");
	HX_VISIT_MEMBER_NAME(isConvex,"isConvex");
}

::hx::Val PolygonCollider_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"polygons") ) { return ::hx::Val( polygons ); }
		if (HX_FIELD_EQ(inName,"isConvex") ) { return ::hx::Val( isConvex ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PolygonCollider_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"polygons") ) { polygons=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isConvex") ) { isConvex=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PolygonCollider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("polygons",b9,28,51,2c));
	outFields->push(HX_("isConvex",f1,12,48,20));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PolygonCollider_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PolygonCollider_obj,polygons),HX_("polygons",b9,28,51,2c)},
	{::hx::fsBool,(int)offsetof(PolygonCollider_obj,isConvex),HX_("isConvex",f1,12,48,20)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PolygonCollider_obj_sStaticStorageInfo = 0;
#endif

static ::String PolygonCollider_obj_sMemberFields[] = {
	HX_("polygons",b9,28,51,2c),
	HX_("isConvex",f1,12,48,20),
	HX_("contains",1f,5a,7b,2c),
	::String(null()) };

::hx::Class PolygonCollider_obj::__mClass;

void PolygonCollider_obj::__register()
{
	PolygonCollider_obj _hx_dummy;
	PolygonCollider_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col.PolygonCollider",6c,c7,5f,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PolygonCollider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PolygonCollider_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PolygonCollider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PolygonCollider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
