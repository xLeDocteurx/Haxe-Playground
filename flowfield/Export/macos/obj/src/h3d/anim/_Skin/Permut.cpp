#include <hxcpp.h>

#ifndef INCLUDED_h3d_anim_Joint
#include <h3d/anim/Joint.h>
#endif
#ifndef INCLUDED_h3d_anim__Skin_Permut
#include <h3d/anim/_Skin/Permut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f0eacef8cd509fc_36_new,"h3d.anim._Skin.Permut","new",0x5e8ae29b,"h3d.anim._Skin.Permut.new","h3d/anim/Skin.hx",36,0xee0056d9)
namespace h3d{
namespace anim{
namespace _Skin{

void Permut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1f0eacef8cd509fc_36_new)
            	}

Dynamic Permut_obj::__CreateEmpty() { return new Permut_obj; }

void *Permut_obj::_hx_vtable = 0;

Dynamic Permut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Permut_obj > _hx_result = new Permut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Permut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a6bfb21;
}


Permut_obj::Permut_obj()
{
}

void Permut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Permut);
	HX_MARK_MEMBER_NAME(joints,"joints");
	HX_MARK_MEMBER_NAME(triangles,"triangles");
	HX_MARK_MEMBER_NAME(material,"material");
	HX_MARK_MEMBER_NAME(indexedJoints,"indexedJoints");
	HX_MARK_END_CLASS();
}

void Permut_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(joints,"joints");
	HX_VISIT_MEMBER_NAME(triangles,"triangles");
	HX_VISIT_MEMBER_NAME(material,"material");
	HX_VISIT_MEMBER_NAME(indexedJoints,"indexedJoints");
}

::hx::Val Permut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { return ::hx::Val( joints ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { return ::hx::Val( material ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"triangles") ) { return ::hx::Val( triangles ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexedJoints") ) { return ::hx::Val( indexedJoints ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Permut_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { joints=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"triangles") ) { triangles=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexedJoints") ) { indexedJoints=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Permut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("joints",e9,e7,09,91));
	outFields->push(HX_("triangles",ab,30,41,7f));
	outFields->push(HX_("material",a7,5c,a5,f0));
	outFields->push(HX_("indexedJoints",ba,c2,88,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Permut_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Permut_obj,joints),HX_("joints",e9,e7,09,91)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Permut_obj,triangles),HX_("triangles",ab,30,41,7f)},
	{::hx::fsInt,(int)offsetof(Permut_obj,material),HX_("material",a7,5c,a5,f0)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Permut_obj,indexedJoints),HX_("indexedJoints",ba,c2,88,86)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Permut_obj_sStaticStorageInfo = 0;
#endif

static ::String Permut_obj_sMemberFields[] = {
	HX_("joints",e9,e7,09,91),
	HX_("triangles",ab,30,41,7f),
	HX_("material",a7,5c,a5,f0),
	HX_("indexedJoints",ba,c2,88,86),
	::String(null()) };

::hx::Class Permut_obj::__mClass;

void Permut_obj::__register()
{
	Permut_obj _hx_dummy;
	Permut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.anim._Skin.Permut",29,f9,f0,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Permut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Permut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Permut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Permut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace anim
} // end namespace _Skin
