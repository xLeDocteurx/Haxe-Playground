#include <hxcpp.h>

#ifndef INCLUDED_h3d__Engine_TargetTmp
#include <h3d/_Engine/TargetTmp.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d205e62254af9983_10_new,"h3d._Engine.TargetTmp","new",0x85012d36,"h3d._Engine.TargetTmp.new","h3d/Engine.hx",10,0xd2375a86)
namespace h3d{
namespace _Engine{

void TargetTmp_obj::__construct( ::h3d::mat::Texture t, ::h3d::_Engine::TargetTmp n,int l,int m){
            	HX_STACKFRAME(&_hx_pos_d205e62254af9983_10_new)
HXLINE(  11)		this->t = t;
HXLINE(  12)		this->next = n;
HXLINE(  13)		this->layer = l;
HXLINE(  14)		this->mipLevel = m;
            	}

Dynamic TargetTmp_obj::__CreateEmpty() { return new TargetTmp_obj; }

void *TargetTmp_obj::_hx_vtable = 0;

Dynamic TargetTmp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TargetTmp_obj > _hx_result = new TargetTmp_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool TargetTmp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2995741a;
}


::hx::ObjectPtr< TargetTmp_obj > TargetTmp_obj::__new( ::h3d::mat::Texture t, ::h3d::_Engine::TargetTmp n,int l,int m) {
	::hx::ObjectPtr< TargetTmp_obj > __this = new TargetTmp_obj();
	__this->__construct(t,n,l,m);
	return __this;
}

::hx::ObjectPtr< TargetTmp_obj > TargetTmp_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture t, ::h3d::_Engine::TargetTmp n,int l,int m) {
	TargetTmp_obj *__this = (TargetTmp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TargetTmp_obj), true, "h3d._Engine.TargetTmp"));
	*(void **)__this = TargetTmp_obj::_hx_vtable;
	__this->__construct(t,n,l,m);
	return __this;
}

TargetTmp_obj::TargetTmp_obj()
{
}

void TargetTmp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TargetTmp);
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(textures,"textures");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(mipLevel,"mipLevel");
	HX_MARK_END_CLASS();
}

void TargetTmp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(textures,"textures");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(mipLevel,"mipLevel");
}

::hx::Val TargetTmp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { return ::hx::Val( t ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return ::hx::Val( layer ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { return ::hx::Val( textures ); }
		if (HX_FIELD_EQ(inName,"mipLevel") ) { return ::hx::Val( mipLevel ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TargetTmp_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::h3d::_Engine::TargetTmp >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mipLevel") ) { mipLevel=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TargetTmp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("t",74,00,00,00));
	outFields->push(HX_("textures",38,f7,ce,65));
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("layer",d1,81,c0,6f));
	outFields->push(HX_("mipLevel",50,3b,51,36));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TargetTmp_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(TargetTmp_obj,t),HX_("t",74,00,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TargetTmp_obj,textures),HX_("textures",38,f7,ce,65)},
	{::hx::fsObject /*  ::h3d::_Engine::TargetTmp */ ,(int)offsetof(TargetTmp_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsInt,(int)offsetof(TargetTmp_obj,layer),HX_("layer",d1,81,c0,6f)},
	{::hx::fsInt,(int)offsetof(TargetTmp_obj,mipLevel),HX_("mipLevel",50,3b,51,36)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TargetTmp_obj_sStaticStorageInfo = 0;
#endif

static ::String TargetTmp_obj_sMemberFields[] = {
	HX_("t",74,00,00,00),
	HX_("textures",38,f7,ce,65),
	HX_("next",f3,84,02,49),
	HX_("layer",d1,81,c0,6f),
	HX_("mipLevel",50,3b,51,36),
	::String(null()) };

::hx::Class TargetTmp_obj::__mClass;

void TargetTmp_obj::__register()
{
	TargetTmp_obj _hx_dummy;
	TargetTmp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d._Engine.TargetTmp",44,1a,71,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TargetTmp_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TargetTmp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TargetTmp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TargetTmp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace _Engine
