#include <hxcpp.h>

#ifndef INCLUDED_h3d_anim_Joint
#include <h3d/anim/Joint.h>
#endif
#ifndef INCLUDED_h3d_anim__Skin_Influence
#include <h3d/anim/_Skin/Influence.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_90d23a654997c413_43_new,"h3d.anim._Skin.Influence","new",0xaeb1a2cd,"h3d.anim._Skin.Influence.new","h3d/anim/Skin.hx",43,0xee0056d9)
namespace h3d{
namespace anim{
namespace _Skin{

void Influence_obj::__construct( ::h3d::anim::Joint j,Float w){
            	HX_STACKFRAME(&_hx_pos_90d23a654997c413_43_new)
HXLINE(  44)		this->j = j;
HXLINE(  45)		this->w = w;
            	}

Dynamic Influence_obj::__CreateEmpty() { return new Influence_obj; }

void *Influence_obj::_hx_vtable = 0;

Dynamic Influence_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Influence_obj > _hx_result = new Influence_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Influence_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0551e5d3;
}


::hx::ObjectPtr< Influence_obj > Influence_obj::__new( ::h3d::anim::Joint j,Float w) {
	::hx::ObjectPtr< Influence_obj > __this = new Influence_obj();
	__this->__construct(j,w);
	return __this;
}

::hx::ObjectPtr< Influence_obj > Influence_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::anim::Joint j,Float w) {
	Influence_obj *__this = (Influence_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Influence_obj), true, "h3d.anim._Skin.Influence"));
	*(void **)__this = Influence_obj::_hx_vtable;
	__this->__construct(j,w);
	return __this;
}

Influence_obj::Influence_obj()
{
}

void Influence_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Influence);
	HX_MARK_MEMBER_NAME(j,"j");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_END_CLASS();
}

void Influence_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(j,"j");
	HX_VISIT_MEMBER_NAME(w,"w");
}

::hx::Val Influence_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"j") ) { return ::hx::Val( j ); }
		if (HX_FIELD_EQ(inName,"w") ) { return ::hx::Val( w ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Influence_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"j") ) { j=inValue.Cast<  ::h3d::anim::Joint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Influence_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("j",6a,00,00,00));
	outFields->push(HX_("w",77,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Influence_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::anim::Joint */ ,(int)offsetof(Influence_obj,j),HX_("j",6a,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Influence_obj,w),HX_("w",77,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Influence_obj_sStaticStorageInfo = 0;
#endif

static ::String Influence_obj_sMemberFields[] = {
	HX_("j",6a,00,00,00),
	HX_("w",77,00,00,00),
	::String(null()) };

::hx::Class Influence_obj::__mClass;

void Influence_obj::__register()
{
	Influence_obj _hx_dummy;
	Influence_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.anim._Skin.Influence",5b,38,83,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Influence_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Influence_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Influence_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Influence_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace anim
} // end namespace _Skin
