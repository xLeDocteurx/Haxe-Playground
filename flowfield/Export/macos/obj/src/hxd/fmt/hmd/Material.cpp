#include <hxcpp.h>

#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Material
#include <hxd/fmt/hmd/Material.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Property
#include <hxd/fmt/hmd/Property.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_35eccd3a4deacd0e_131_new,"hxd.fmt.hmd.Material","new",0xfde8d0e3,"hxd.fmt.hmd.Material.new","hxd/fmt/hmd/Data.hx",131,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void Material_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_35eccd3a4deacd0e_131_new)
            	}

Dynamic Material_obj::__CreateEmpty() { return new Material_obj; }

void *Material_obj::_hx_vtable = 0;

Dynamic Material_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Material_obj > _hx_result = new Material_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Material_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x608c3109;
}


Material_obj::Material_obj()
{
}

void Material_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Material);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(props,"props");
	HX_MARK_MEMBER_NAME(diffuseTexture,"diffuseTexture");
	HX_MARK_MEMBER_NAME(specularTexture,"specularTexture");
	HX_MARK_MEMBER_NAME(normalMap,"normalMap");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_END_CLASS();
}

void Material_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(props,"props");
	HX_VISIT_MEMBER_NAME(diffuseTexture,"diffuseTexture");
	HX_VISIT_MEMBER_NAME(specularTexture,"specularTexture");
	HX_VISIT_MEMBER_NAME(normalMap,"normalMap");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
}

::hx::Val Material_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { return ::hx::Val( props ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { return ::hx::Val( normalMap ); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return ::hx::Val( blendMode ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"diffuseTexture") ) { return ::hx::Val( diffuseTexture ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"specularTexture") ) { return ::hx::Val( specularTexture ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Material_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { props=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { normalMap=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast<  ::h2d::BlendMode >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"diffuseTexture") ) { diffuseTexture=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"specularTexture") ) { specularTexture=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Material_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("props",70,e7,8f,c8));
	outFields->push(HX_("diffuseTexture",99,5f,20,d4));
	outFields->push(HX_("specularTexture",58,48,09,e2));
	outFields->push(HX_("normalMap",b5,e2,8b,ab));
	outFields->push(HX_("blendMode",54,e4,37,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Material_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Material_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Material_obj,props),HX_("props",70,e7,8f,c8)},
	{::hx::fsString,(int)offsetof(Material_obj,diffuseTexture),HX_("diffuseTexture",99,5f,20,d4)},
	{::hx::fsString,(int)offsetof(Material_obj,specularTexture),HX_("specularTexture",58,48,09,e2)},
	{::hx::fsString,(int)offsetof(Material_obj,normalMap),HX_("normalMap",b5,e2,8b,ab)},
	{::hx::fsObject /*  ::h2d::BlendMode */ ,(int)offsetof(Material_obj,blendMode),HX_("blendMode",54,e4,37,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Material_obj_sStaticStorageInfo = 0;
#endif

static ::String Material_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("props",70,e7,8f,c8),
	HX_("diffuseTexture",99,5f,20,d4),
	HX_("specularTexture",58,48,09,e2),
	HX_("normalMap",b5,e2,8b,ab),
	HX_("blendMode",54,e4,37,0c),
	::String(null()) };

::hx::Class Material_obj::__mClass;

void Material_obj::__register()
{
	Material_obj _hx_dummy;
	Material_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.Material",71,23,98,9c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Material_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Material_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Material_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Material_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
