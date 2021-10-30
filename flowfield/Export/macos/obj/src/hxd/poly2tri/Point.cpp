#include <hxcpp.h>

#ifndef INCLUDED_hxd_poly2tri_Edge
#include <hxd/poly2tri/Edge.h>
#endif
#ifndef INCLUDED_hxd_poly2tri_Point
#include <hxd/poly2tri/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c4907f23c7c02c5_23_new,"hxd.poly2tri.Point","new",0x3284bcd3,"hxd.poly2tri.Point.new","hxd/poly2tri/Point.hx",23,0xf91355dd)
HX_LOCAL_STACK_FRAME(_hx_pos_4c4907f23c7c02c5_34_get_edge_list,"hxd.poly2tri.Point","get_edge_list",0x274360ea,"hxd.poly2tri.Point.get_edge_list","hxd/poly2tri/Point.hx",34,0xf91355dd)
HX_LOCAL_STACK_FRAME(_hx_pos_4c4907f23c7c02c5_46_equals,"hxd.poly2tri.Point","equals",0x56210bac,"hxd.poly2tri.Point.equals","hxd/poly2tri/Point.hx",46,0xf91355dd)
HX_LOCAL_STACK_FRAME(_hx_pos_4c4907f23c7c02c5_66_toString,"hxd.poly2tri.Point","toString",0x4c70e359,"hxd.poly2tri.Point.toString","hxd/poly2tri/Point.hx",66,0xf91355dd)
HX_LOCAL_STACK_FRAME(_hx_pos_4c4907f23c7c02c5_52_sortPoints,"hxd.poly2tri.Point","sortPoints",0xfac1600e,"hxd.poly2tri.Point.sortPoints","hxd/poly2tri/Point.hx",52,0xf91355dd)
HX_LOCAL_STACK_FRAME(_hx_pos_4c4907f23c7c02c5_56_cmpPoints,"hxd.poly2tri.Point","cmpPoints",0xb8caf1fc,"hxd.poly2tri.Point.cmpPoints","hxd/poly2tri/Point.hx",56,0xf91355dd)
HX_LOCAL_STACK_FRAME(_hx_pos_4c4907f23c7c02c5_69_boot,"hxd.poly2tri.Point","boot",0xf9b97c5f,"hxd.poly2tri.Point.boot","hxd/poly2tri/Point.hx",69,0xf91355dd)
namespace hxd{
namespace poly2tri{

void Point_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_4c4907f23c7c02c5_23_new)
HXLINE(  24)		this->x = x;
HXLINE(  25)		this->y = y;
HXLINE(  27)		this->id = ::hxd::poly2tri::Point_obj::C_ID;
HXLINE(  28)		::hxd::poly2tri::Point_obj::C_ID++;
            	}

Dynamic Point_obj::__CreateEmpty() { return new Point_obj; }

void *Point_obj::_hx_vtable = 0;

Dynamic Point_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Point_obj > _hx_result = new Point_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Point_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6d6141b7;
}

::Array< ::Dynamic> Point_obj::get_edge_list(){
            	HX_STACKFRAME(&_hx_pos_4c4907f23c7c02c5_34_get_edge_list)
HXLINE(  35)		if (::hx::IsNull( this->edge_list )) {
HXLINE(  35)			this->edge_list = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE(  36)		return this->edge_list;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_edge_list,return )

bool Point_obj::equals( ::hxd::poly2tri::Point that){
            	HX_STACKFRAME(&_hx_pos_4c4907f23c7c02c5_46_equals)
HXDLIN(  46)		if ((this->x == that->x)) {
HXDLIN(  46)			return (this->y == that->y);
            		}
            		else {
HXDLIN(  46)			return false;
            		}
HXDLIN(  46)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

::String Point_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_4c4907f23c7c02c5_66_toString)
HXDLIN(  66)		return ((((HX_("Point(",f8,85,c2,2b) + this->x) + HX_(", ",74,26,00,00)) + this->y) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toString,return )

void Point_obj::sortPoints(::Array< ::Dynamic> points){
            	HX_STACKFRAME(&_hx_pos_4c4907f23c7c02c5_52_sortPoints)
HXDLIN(  52)		points->sort(::hxd::poly2tri::Point_obj::cmpPoints_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Point_obj,sortPoints,(void))

int Point_obj::cmpPoints( ::hxd::poly2tri::Point l, ::hxd::poly2tri::Point r){
            	HX_STACKFRAME(&_hx_pos_4c4907f23c7c02c5_56_cmpPoints)
HXLINE(  57)		Float ret = (l->y - r->y);
HXLINE(  58)		if ((ret == 0)) {
HXLINE(  58)			ret = (l->x - r->x);
            		}
HXLINE(  59)		if ((ret < 0)) {
HXLINE(  59)			return -1;
            		}
HXLINE(  60)		if ((ret > 0)) {
HXLINE(  60)			return 1;
            		}
HXLINE(  61)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,cmpPoints,return )

int Point_obj::C_ID;


::hx::ObjectPtr< Point_obj > Point_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< Point_obj > __this = new Point_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< Point_obj > Point_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	Point_obj *__this = (Point_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Point_obj), true, "hxd.poly2tri.Point"));
	*(void **)__this = Point_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

Point_obj::Point_obj()
{
}

void Point_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Point);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(edge_list,"edge_list");
	HX_MARK_END_CLASS();
}

void Point_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(edge_list,"edge_list");
}

::hx::Val Point_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"edge_list") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_edge_list() : edge_list ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_edge_list") ) { return ::hx::Val( get_edge_list_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Point_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"C_ID") ) { outValue = ( C_ID ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cmpPoints") ) { outValue = cmpPoints_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortPoints") ) { outValue = sortPoints_dyn(); return true; }
	}
	return false;
}

::hx::Val Point_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"edge_list") ) { edge_list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Point_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"C_ID") ) { C_ID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("edge_list",e0,72,e5,a8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Point_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Point_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsFloat,(int)offsetof(Point_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Point_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Point_obj,edge_list),HX_("edge_list",e0,72,e5,a8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Point_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Point_obj::C_ID,HX_("C_ID",97,a1,91,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Point_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("edge_list",e0,72,e5,a8),
	HX_("get_edge_list",b7,46,49,6a),
	HX_("equals",3f,ee,f2,bf),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void Point_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::C_ID,"C_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Point_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point_obj::C_ID,"C_ID");
};

#endif

::hx::Class Point_obj::__mClass;

static ::String Point_obj_sStaticFields[] = {
	HX_("sortPoints",21,88,13,54),
	HX_("cmpPoints",49,ad,fc,4a),
	HX_("C_ID",97,a1,91,2c),
	::String(null())
};

void Point_obj::__register()
{
	Point_obj _hx_dummy;
	Point_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.poly2tri.Point",61,57,f3,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Point_obj::__GetStatic;
	__mClass->mSetStaticField = &Point_obj::__SetStatic;
	__mClass->mMarkFunc = Point_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Point_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Point_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Point_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Point_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Point_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Point_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Point_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4c4907f23c7c02c5_69_boot)
HXDLIN(  69)		C_ID = 0;
            	}
}

} // end namespace hxd
} // end namespace poly2tri
