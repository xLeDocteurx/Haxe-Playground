#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_poly2tri_Edge
#include <hxd/poly2tri/Edge.h>
#endif
#ifndef INCLUDED_hxd_poly2tri_Point
#include <hxd/poly2tri/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b3ba39d187b5614_9_new,"hxd.poly2tri.Edge","new",0xabc0a93e,"hxd.poly2tri.Edge.new","hxd/poly2tri/Edge.hx",9,0xacd90c12)
HX_LOCAL_STACK_FRAME(_hx_pos_2b3ba39d187b5614_44_toString,"hxd.poly2tri.Edge","toString",0x7ead130e,"hxd.poly2tri.Edge.toString","hxd/poly2tri/Edge.hx",44,0xacd90c12)
namespace hxd{
namespace poly2tri{

void Edge_obj::__construct( ::hxd::poly2tri::Point p1, ::hxd::poly2tri::Point p2){
            	HX_STACKFRAME(&_hx_pos_2b3ba39d187b5614_9_new)
HXLINE(  10)		bool _hx_tmp;
HXDLIN(  10)		if (::hx::IsNotNull( p1 )) {
HXLINE(  10)			_hx_tmp = ::hx::IsNull( p2 );
            		}
            		else {
HXLINE(  10)			_hx_tmp = true;
            		}
HXDLIN(  10)		if (_hx_tmp) {
HXLINE(  10)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Edge::new p1 or p2 is null",fa,33,85,89)));
            		}
HXLINE(  12)		bool swap = false;
HXLINE(  14)		if ((p1->y > p2->y)) {
HXLINE(  16)			swap = true;
            		}
            		else {
HXLINE(  18)			if ((p1->y == p2->y)) {
HXLINE(  20)				if ((p1->x == p2->x)) {
HXLINE(  20)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Edge::repeat points ",f5,bb,3a,3f) + ::Std_obj::string(p1))));
            				}
HXLINE(  22)				swap = (p1->x > p2->x);
            			}
            		}
HXLINE(  26)		if (swap) {
HXLINE(  28)			this->q = p1;
HXLINE(  29)			this->p = p2;
            		}
            		else {
HXLINE(  33)			this->p = p1;
HXLINE(  34)			this->q = p2;
            		}
HXLINE(  37)		this->q->get_edge_list()->push(::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic Edge_obj::__CreateEmpty() { return new Edge_obj; }

void *Edge_obj::_hx_vtable = 0;

Dynamic Edge_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Edge_obj > _hx_result = new Edge_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Edge_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x564331d2;
}

::String Edge_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_2b3ba39d187b5614_44_toString)
HXDLIN(  44)		::String _hx_tmp = ((HX_("Edge(",2b,dd,0d,fd) + ::Std_obj::string(this->p)) + HX_(", ",74,26,00,00));
HXDLIN(  44)		return ((_hx_tmp + ::Std_obj::string(this->q)) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,toString,return )


::hx::ObjectPtr< Edge_obj > Edge_obj::__new( ::hxd::poly2tri::Point p1, ::hxd::poly2tri::Point p2) {
	::hx::ObjectPtr< Edge_obj > __this = new Edge_obj();
	__this->__construct(p1,p2);
	return __this;
}

::hx::ObjectPtr< Edge_obj > Edge_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::poly2tri::Point p1, ::hxd::poly2tri::Point p2) {
	Edge_obj *__this = (Edge_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Edge_obj), true, "hxd.poly2tri.Edge"));
	*(void **)__this = Edge_obj::_hx_vtable;
	__this->__construct(p1,p2);
	return __this;
}

Edge_obj::Edge_obj()
{
}

void Edge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Edge);
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_END_CLASS();
}

void Edge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(q,"q");
}

::hx::Val Edge_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return ::hx::Val( p ); }
		if (HX_FIELD_EQ(inName,"q") ) { return ::hx::Val( q ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Edge_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast<  ::hxd::poly2tri::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast<  ::hxd::poly2tri::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Edge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("p",70,00,00,00));
	outFields->push(HX_("q",71,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Edge_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::poly2tri::Point */ ,(int)offsetof(Edge_obj,p),HX_("p",70,00,00,00)},
	{::hx::fsObject /*  ::hxd::poly2tri::Point */ ,(int)offsetof(Edge_obj,q),HX_("q",71,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Edge_obj_sStaticStorageInfo = 0;
#endif

static ::String Edge_obj_sMemberFields[] = {
	HX_("p",70,00,00,00),
	HX_("q",71,00,00,00),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Edge_obj::__mClass;

void Edge_obj::__register()
{
	Edge_obj _hx_dummy;
	Edge_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.poly2tri.Edge",4c,f2,af,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Edge_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Edge_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Edge_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Edge_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace poly2tri
