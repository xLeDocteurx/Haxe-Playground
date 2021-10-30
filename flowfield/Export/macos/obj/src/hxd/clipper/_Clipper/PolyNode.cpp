#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_hxd_clipper_EndType
#include <hxd/clipper/EndType.h>
#endif
#ifndef INCLUDED_hxd_clipper_JoinType
#include <hxd/clipper/JoinType.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_PolyNode
#include <hxd/clipper/_Clipper/PolyNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cae5f511b083bf7f_63_new,"hxd.clipper._Clipper.PolyNode","new",0x6841f9c5,"hxd.clipper._Clipper.PolyNode.new","hxd/clipper/Clipper.hx",63,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_cae5f511b083bf7f_68_isHoleNode,"hxd.clipper._Clipper.PolyNode","isHoleNode",0x7fe2aea7,"hxd.clipper._Clipper.PolyNode.isHoleNode","hxd/clipper/Clipper.hx",68,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_cae5f511b083bf7f_81_get_childCount,"hxd.clipper._Clipper.PolyNode","get_childCount",0xdabaf497,"hxd.clipper._Clipper.PolyNode.get_childCount","hxd/clipper/Clipper.hx",81,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_cae5f511b083bf7f_87_get_contour,"hxd.clipper._Clipper.PolyNode","get_contour",0x88772056,"hxd.clipper._Clipper.PolyNode.get_contour","hxd/clipper/Clipper.hx",87,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_cae5f511b083bf7f_90_addChild,"hxd.clipper._Clipper.PolyNode","addChild",0xdc3f7836,"hxd.clipper._Clipper.PolyNode.addChild","hxd/clipper/Clipper.hx",90,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_cae5f511b083bf7f_99_getNext,"hxd.clipper._Clipper.PolyNode","getNext",0xa7b4748e,"hxd.clipper._Clipper.PolyNode.getNext","hxd/clipper/Clipper.hx",99,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_cae5f511b083bf7f_107_getNextSiblingUp,"hxd.clipper._Clipper.PolyNode","getNextSiblingUp",0xdb3aa58f,"hxd.clipper._Clipper.PolyNode.getNextSiblingUp","hxd/clipper/Clipper.hx",107,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_cae5f511b083bf7f_116_isHole,"hxd.clipper._Clipper.PolyNode","isHole",0x7fcd9205,"hxd.clipper._Clipper.PolyNode.isHole","hxd/clipper/Clipper.hx",116,0x0569880e)
namespace hxd{
namespace clipper{
namespace _Clipper{

void PolyNode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cae5f511b083bf7f_63_new)
HXLINE(  64)		::Array< ::Dynamic> points = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  64)		::Array< ::Dynamic> this1;
HXDLIN(  64)		if (::hx::IsNull( points )) {
HXLINE(  64)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  64)			this1 = points;
            		}
HXDLIN(  64)		this->polygon = this1;
HXLINE(  65)		this->childs = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic PolyNode_obj::__CreateEmpty() { return new PolyNode_obj; }

void *PolyNode_obj::_hx_vtable = 0;

Dynamic PolyNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PolyNode_obj > _hx_result = new PolyNode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PolyNode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6cc7afb5;
}

bool PolyNode_obj::isHoleNode(){
            	HX_STACKFRAME(&_hx_pos_cae5f511b083bf7f_68_isHoleNode)
HXLINE(  69)		bool result = true;
HXLINE(  70)		 ::hxd::clipper::_Clipper::PolyNode node = this->parent;
HXLINE(  71)		while(::hx::IsNotNull( node )){
HXLINE(  72)			result = !(result);
HXLINE(  73)			node = node->parent;
            		}
HXLINE(  75)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolyNode_obj,isHoleNode,return )

int PolyNode_obj::get_childCount(){
            	HX_STACKFRAME(&_hx_pos_cae5f511b083bf7f_81_get_childCount)
HXDLIN(  81)		return this->childs->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolyNode_obj,get_childCount,return )

::Array< ::Dynamic> PolyNode_obj::get_contour(){
            	HX_STACKFRAME(&_hx_pos_cae5f511b083bf7f_87_get_contour)
HXDLIN(  87)		return this->polygon;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolyNode_obj,get_contour,return )

void PolyNode_obj::addChild( ::hxd::clipper::_Clipper::PolyNode child){
            	HX_STACKFRAME(&_hx_pos_cae5f511b083bf7f_90_addChild)
HXLINE(  91)		int cnt = this->childs->length;
HXLINE(  92)		this->childs->push(child);
HXLINE(  93)		child->parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  94)		child->index = cnt;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolyNode_obj,addChild,(void))

 ::hxd::clipper::_Clipper::PolyNode PolyNode_obj::getNext(){
            	HX_STACKFRAME(&_hx_pos_cae5f511b083bf7f_99_getNext)
HXDLIN(  99)		if ((this->childs->length > 0)) {
HXLINE( 100)			return this->childs->__get(0).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >();
            		}
            		else {
HXLINE( 102)			return this->getNextSiblingUp();
            		}
HXLINE(  99)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolyNode_obj,getNext,return )

 ::hxd::clipper::_Clipper::PolyNode PolyNode_obj::getNextSiblingUp(){
            	HX_STACKFRAME(&_hx_pos_cae5f511b083bf7f_107_getNextSiblingUp)
HXDLIN( 107)		if (::hx::IsNull( this->parent )) {
HXLINE( 108)			return null();
            		}
            		else {
HXLINE( 109)			if ((this->index == (this->parent->childs->length - 1))) {
HXLINE( 110)				return this->parent->getNextSiblingUp();
            			}
            			else {
HXLINE( 112)				return this->parent->childs->__get((this->index + 1)).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >();
            			}
            		}
HXLINE( 107)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolyNode_obj,getNextSiblingUp,return )

bool PolyNode_obj::isHole(){
            	HX_STACKFRAME(&_hx_pos_cae5f511b083bf7f_116_isHole)
HXDLIN( 116)		return this->isHoleNode();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolyNode_obj,isHole,return )


::hx::ObjectPtr< PolyNode_obj > PolyNode_obj::__new() {
	::hx::ObjectPtr< PolyNode_obj > __this = new PolyNode_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PolyNode_obj > PolyNode_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PolyNode_obj *__this = (PolyNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolyNode_obj), true, "hxd.clipper._Clipper.PolyNode"));
	*(void **)__this = PolyNode_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PolyNode_obj::PolyNode_obj()
{
}

void PolyNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PolyNode);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(childs,"childs");
	HX_MARK_MEMBER_NAME(polygon,"polygon");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(jointype,"jointype");
	HX_MARK_MEMBER_NAME(endtype,"endtype");
	HX_MARK_END_CLASS();
}

void PolyNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(childs,"childs");
	HX_VISIT_MEMBER_NAME(polygon,"polygon");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(jointype,"jointype");
	HX_VISIT_MEMBER_NAME(endtype,"endtype");
}

::hx::Val PolyNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"childs") ) { return ::hx::Val( childs ); }
		if (HX_FIELD_EQ(inName,"isHole") ) { return ::hx::Val( isHole_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { return ::hx::Val( polygon ); }
		if (HX_FIELD_EQ(inName,"endtype") ) { return ::hx::Val( endtype ); }
		if (HX_FIELD_EQ(inName,"contour") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contour() ); }
		if (HX_FIELD_EQ(inName,"getNext") ) { return ::hx::Val( getNext_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointype") ) { return ::hx::Val( jointype ); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isHoleNode") ) { return ::hx::Val( isHoleNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"childCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_childCount() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_contour") ) { return ::hx::Val( get_contour_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_childCount") ) { return ::hx::Val( get_childCount_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNextSiblingUp") ) { return ::hx::Val( getNextSiblingUp_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PolyNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::hxd::clipper::_Clipper::PolyNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childs") ) { childs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { polygon=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endtype") ) { endtype=inValue.Cast<  ::hxd::clipper::EndType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointype") ) { jointype=inValue.Cast<  ::hxd::clipper::JoinType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PolyNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("childs",57,bf,ba,bc));
	outFields->push(HX_("polygon",7a,02,91,12));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("jointype",a4,63,47,55));
	outFields->push(HX_("endtype",15,80,54,44));
	outFields->push(HX_("childCount",93,b5,de,e8));
	outFields->push(HX_("contour",da,29,7f,19));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PolyNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::PolyNode */ ,(int)offsetof(PolyNode_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PolyNode_obj,childs),HX_("childs",57,bf,ba,bc)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PolyNode_obj,polygon),HX_("polygon",7a,02,91,12)},
	{::hx::fsInt,(int)offsetof(PolyNode_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsObject /*  ::hxd::clipper::JoinType */ ,(int)offsetof(PolyNode_obj,jointype),HX_("jointype",a4,63,47,55)},
	{::hx::fsObject /*  ::hxd::clipper::EndType */ ,(int)offsetof(PolyNode_obj,endtype),HX_("endtype",15,80,54,44)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PolyNode_obj_sStaticStorageInfo = 0;
#endif

static ::String PolyNode_obj_sMemberFields[] = {
	HX_("parent",2a,05,7e,ed),
	HX_("childs",57,bf,ba,bc),
	HX_("polygon",7a,02,91,12),
	HX_("index",12,9b,14,be),
	HX_("jointype",a4,63,47,55),
	HX_("endtype",15,80,54,44),
	HX_("isHoleNode",6c,b1,e2,48),
	HX_("get_childCount",dc,3d,d4,5e),
	HX_("get_contour",f1,89,79,9f),
	HX_("addChild",bb,cf,16,bf),
	HX_("getNext",a9,34,85,1b),
	HX_("getNextSiblingUp",14,8a,2c,8f),
	HX_("isHole",4a,8e,79,62),
	::String(null()) };

::hx::Class PolyNode_obj::__mClass;

void PolyNode_obj::__register()
{
	PolyNode_obj _hx_dummy;
	PolyNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper._Clipper.PolyNode",53,b3,6e,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PolyNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PolyNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PolyNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PolyNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
