#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_PolyNode
#include <hxd/clipper/_Clipper/PolyNode.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_PolyTree
#include <hxd/clipper/_Clipper/PolyTree.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_88770a6d4485ffff_126_new,"hxd.clipper._Clipper.PolyTree","new",0xa28c6721,"hxd.clipper._Clipper.PolyTree.new","hxd/clipper/Clipper.hx",126,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_88770a6d4485ffff_131_toPolygons,"hxd.clipper._Clipper.PolyTree","toPolygons",0xe11bf0b3,"hxd.clipper._Clipper.PolyTree.toPolygons","hxd/clipper/Clipper.hx",131,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_88770a6d4485ffff_136_addRec,"hxd.clipper._Clipper.PolyTree","addRec",0xd563418e,"hxd.clipper._Clipper.PolyTree.addRec","hxd/clipper/Clipper.hx",136,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_88770a6d4485ffff_143_clear,"hxd.clipper._Clipper.PolyTree","clear",0x5af7fa8e,"hxd.clipper._Clipper.PolyTree.clear","hxd/clipper/Clipper.hx",143,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_88770a6d4485ffff_148_getFirst,"hxd.clipper._Clipper.PolyTree","getFirst",0x663cd559,"hxd.clipper._Clipper.PolyTree.getFirst","hxd/clipper/Clipper.hx",148,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_88770a6d4485ffff_156_get_total,"hxd.clipper._Clipper.PolyTree","get_total",0x61574d9c,"hxd.clipper._Clipper.PolyTree.get_total","hxd/clipper/Clipper.hx",156,0x0569880e)
namespace hxd{
namespace clipper{
namespace _Clipper{

void PolyTree_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_88770a6d4485ffff_126_new)
HXLINE( 127)		super::__construct();
HXLINE( 128)		this->allPolys = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic PolyTree_obj::__CreateEmpty() { return new PolyTree_obj; }

void *PolyTree_obj::_hx_vtable = 0;

Dynamic PolyTree_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PolyTree_obj > _hx_result = new PolyTree_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PolyTree_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6cc7afb5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6cc7afb5;
	} else {
		return inClassId==(int)0x70c13f11;
	}
}

void PolyTree_obj::toPolygons(::Array< ::Dynamic> polygons){
            	HX_STACKFRAME(&_hx_pos_88770a6d4485ffff_131_toPolygons)
HXLINE( 132)		polygons = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 133)		this->addRec(::hx::ObjectPtr<OBJ_>(this),polygons);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolyTree_obj,toPolygons,(void))

void PolyTree_obj::addRec( ::hxd::clipper::_Clipper::PolyNode polynode,::Array< ::Dynamic> polygons){
            	HX_STACKFRAME(&_hx_pos_88770a6d4485ffff_136_addRec)
HXLINE( 137)		if ((polynode->polygon->length > 0)) {
HXLINE( 138)			polygons->push(polynode->polygon);
            		}
HXLINE( 139)		{
HXLINE( 139)			int _g = 0;
HXDLIN( 139)			::Array< ::Dynamic> _g1 = polynode->childs;
HXDLIN( 139)			while((_g < _g1->length)){
HXLINE( 139)				 ::hxd::clipper::_Clipper::PolyNode pn = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >();
HXDLIN( 139)				_g = (_g + 1);
HXLINE( 140)				this->addRec(pn,polygons);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PolyTree_obj,addRec,(void))

void PolyTree_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_88770a6d4485ffff_143_clear)
HXLINE( 144)		this->allPolys = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 145)		this->childs = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolyTree_obj,clear,(void))

 ::hxd::clipper::_Clipper::PolyNode PolyTree_obj::getFirst(){
            	HX_STACKFRAME(&_hx_pos_88770a6d4485ffff_148_getFirst)
HXLINE( 149)		if ((this->childs->length > 0)) {
HXLINE( 150)			return this->childs->__get(0).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >();
            		}
HXLINE( 151)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolyTree_obj,getFirst,return )

int PolyTree_obj::get_total(){
            	HX_STACKFRAME(&_hx_pos_88770a6d4485ffff_156_get_total)
HXLINE( 157)		int result = this->allPolys->length;
HXLINE( 158)		bool _hx_tmp;
HXDLIN( 158)		if ((result > 0)) {
HXLINE( 158)			_hx_tmp = ::hx::IsInstanceNotEq( this->childs->__get(0).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >(),this->allPolys->__get(0).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >() );
            		}
            		else {
HXLINE( 158)			_hx_tmp = false;
            		}
HXDLIN( 158)		if (_hx_tmp) {
HXLINE( 158)			result = (result - 1);
            		}
HXLINE( 159)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PolyTree_obj,get_total,return )


::hx::ObjectPtr< PolyTree_obj > PolyTree_obj::__new() {
	::hx::ObjectPtr< PolyTree_obj > __this = new PolyTree_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PolyTree_obj > PolyTree_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PolyTree_obj *__this = (PolyTree_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolyTree_obj), true, "hxd.clipper._Clipper.PolyTree"));
	*(void **)__this = PolyTree_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PolyTree_obj::PolyTree_obj()
{
}

void PolyTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PolyTree);
	HX_MARK_MEMBER_NAME(allPolys,"allPolys");
	 ::hxd::clipper::_Clipper::PolyNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PolyTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(allPolys,"allPolys");
	 ::hxd::clipper::_Clipper::PolyNode_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PolyTree_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"total") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_total() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addRec") ) { return ::hx::Val( addRec_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"allPolys") ) { return ::hx::Val( allPolys ); }
		if (HX_FIELD_EQ(inName,"getFirst") ) { return ::hx::Val( getFirst_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_total") ) { return ::hx::Val( get_total_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toPolygons") ) { return ::hx::Val( toPolygons_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PolyTree_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"allPolys") ) { allPolys=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PolyTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("allPolys",c6,c3,75,bf));
	outFields->push(HX_("total",c4,53,32,14));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PolyTree_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PolyTree_obj,allPolys),HX_("allPolys",c6,c3,75,bf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PolyTree_obj_sStaticStorageInfo = 0;
#endif

static ::String PolyTree_obj_sMemberFields[] = {
	HX_("allPolys",c6,c3,75,bf),
	HX_("toPolygons",54,bd,6d,9e),
	HX_("addRec",af,e9,07,9f),
	HX_("clear",8d,71,5b,48),
	HX_("getFirst",ba,87,74,60),
	HX_("get_total",1b,b0,db,57),
	::String(null()) };

::hx::Class PolyTree_obj::__mClass;

void PolyTree_obj::__register()
{
	PolyTree_obj _hx_dummy;
	PolyTree_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper._Clipper.PolyTree",af,42,68,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PolyTree_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PolyTree_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PolyTree_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PolyTree_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
