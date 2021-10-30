#include <hxcpp.h>

#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Geometry
#include <hxd/fmt/hmd/Geometry.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_GeometryFormat
#include <hxd/fmt/hmd/GeometryFormat.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Property
#include <hxd/fmt/hmd/Property.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b50238ad8f0bbd4b_113_new,"hxd.fmt.hmd.Geometry","new",0x771fd86e,"hxd.fmt.hmd.Geometry.new","hxd/fmt/hmd/Data.hx",113,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_b50238ad8f0bbd4b_115_get_indexCount,"hxd.fmt.hmd.Geometry","get_indexCount",0xc8e53758,"hxd.fmt.hmd.Geometry.get_indexCount","hxd/fmt/hmd/Data.hx",115,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void Geometry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b50238ad8f0bbd4b_113_new)
            	}

Dynamic Geometry_obj::__CreateEmpty() { return new Geometry_obj; }

void *Geometry_obj::_hx_vtable = 0;

Dynamic Geometry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Geometry_obj > _hx_result = new Geometry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Geometry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x428fd714;
}

int Geometry_obj::get_indexCount(){
            	HX_STACKFRAME(&_hx_pos_b50238ad8f0bbd4b_115_get_indexCount)
HXLINE( 116)		int k = 0;
HXLINE( 117)		{
HXLINE( 117)			int _g = 0;
HXDLIN( 117)			::Array< int > _g1 = this->indexCounts;
HXDLIN( 117)			while((_g < _g1->length)){
HXLINE( 117)				int i = _g1->__get(_g);
HXDLIN( 117)				_g = (_g + 1);
HXDLIN( 117)				k = (k + i);
            			}
            		}
HXLINE( 118)		return k;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_indexCount,return )


Geometry_obj::Geometry_obj()
{
}

void Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Geometry);
	HX_MARK_MEMBER_NAME(props,"props");
	HX_MARK_MEMBER_NAME(vertexCount,"vertexCount");
	HX_MARK_MEMBER_NAME(vertexStride,"vertexStride");
	HX_MARK_MEMBER_NAME(vertexFormat,"vertexFormat");
	HX_MARK_MEMBER_NAME(vertexPosition,"vertexPosition");
	HX_MARK_MEMBER_NAME(indexCounts,"indexCounts");
	HX_MARK_MEMBER_NAME(indexPosition,"indexPosition");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_END_CLASS();
}

void Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(props,"props");
	HX_VISIT_MEMBER_NAME(vertexCount,"vertexCount");
	HX_VISIT_MEMBER_NAME(vertexStride,"vertexStride");
	HX_VISIT_MEMBER_NAME(vertexFormat,"vertexFormat");
	HX_VISIT_MEMBER_NAME(vertexPosition,"vertexPosition");
	HX_VISIT_MEMBER_NAME(indexCounts,"indexCounts");
	HX_VISIT_MEMBER_NAME(indexPosition,"indexPosition");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
}

::hx::Val Geometry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { return ::hx::Val( props ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_indexCount() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexCount") ) { return ::hx::Val( vertexCount ); }
		if (HX_FIELD_EQ(inName,"indexCounts") ) { return ::hx::Val( indexCounts ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexStride") ) { return ::hx::Val( vertexStride ); }
		if (HX_FIELD_EQ(inName,"vertexFormat") ) { return ::hx::Val( vertexFormat ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexPosition") ) { return ::hx::Val( indexPosition ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vertexPosition") ) { return ::hx::Val( vertexPosition ); }
		if (HX_FIELD_EQ(inName,"get_indexCount") ) { return ::hx::Val( get_indexCount_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Geometry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { props=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::h3d::col::Bounds >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexCount") ) { vertexCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexCounts") ) { indexCounts=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexStride") ) { vertexStride=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexFormat") ) { vertexFormat=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexPosition") ) { indexPosition=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vertexPosition") ) { vertexPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("props",70,e7,8f,c8));
	outFields->push(HX_("vertexCount",cb,0e,9f,5e));
	outFields->push(HX_("vertexStride",9d,12,45,b1));
	outFields->push(HX_("vertexFormat",bb,81,a3,9d));
	outFields->push(HX_("vertexPosition",2d,3c,14,50));
	outFields->push(HX_("indexCount",5d,b8,56,1a));
	outFields->push(HX_("indexCounts",76,99,8a,f1));
	outFields->push(HX_("indexPosition",db,59,4d,96));
	outFields->push(HX_("bounds",75,86,1d,66));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Geometry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Geometry_obj,props),HX_("props",70,e7,8f,c8)},
	{::hx::fsInt,(int)offsetof(Geometry_obj,vertexCount),HX_("vertexCount",cb,0e,9f,5e)},
	{::hx::fsInt,(int)offsetof(Geometry_obj,vertexStride),HX_("vertexStride",9d,12,45,b1)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Geometry_obj,vertexFormat),HX_("vertexFormat",bb,81,a3,9d)},
	{::hx::fsInt,(int)offsetof(Geometry_obj,vertexPosition),HX_("vertexPosition",2d,3c,14,50)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Geometry_obj,indexCounts),HX_("indexCounts",76,99,8a,f1)},
	{::hx::fsInt,(int)offsetof(Geometry_obj,indexPosition),HX_("indexPosition",db,59,4d,96)},
	{::hx::fsObject /*  ::h3d::col::Bounds */ ,(int)offsetof(Geometry_obj,bounds),HX_("bounds",75,86,1d,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Geometry_obj_sStaticStorageInfo = 0;
#endif

static ::String Geometry_obj_sMemberFields[] = {
	HX_("props",70,e7,8f,c8),
	HX_("vertexCount",cb,0e,9f,5e),
	HX_("vertexStride",9d,12,45,b1),
	HX_("vertexFormat",bb,81,a3,9d),
	HX_("vertexPosition",2d,3c,14,50),
	HX_("indexCounts",76,99,8a,f1),
	HX_("indexPosition",db,59,4d,96),
	HX_("bounds",75,86,1d,66),
	HX_("get_indexCount",a6,40,4c,90),
	::String(null()) };

::hx::Class Geometry_obj::__mClass;

void Geometry_obj::__register()
{
	Geometry_obj _hx_dummy;
	Geometry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.Geometry",7c,c9,9b,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Geometry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Geometry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Geometry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Geometry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
