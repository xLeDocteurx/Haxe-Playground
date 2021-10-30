#include <hxcpp.h>

#ifndef INCLUDED_hxsl_VecType
#include <hxsl/VecType.h>
#endif
#ifndef INCLUDED_hxsl__Flatten_Alloc
#include <hxsl/_Flatten/Alloc.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9f784a40bd64a443_10_new,"hxsl._Flatten.Alloc","new",0x0d6f08e3,"hxsl._Flatten.Alloc.new","hxsl/Flatten.hx",10,0x6a4b9980)
namespace hxsl{
namespace _Flatten{

void Alloc_obj::__construct( ::Dynamic g, ::hxsl::VecType t,int pos,int size){
            	HX_STACKFRAME(&_hx_pos_9f784a40bd64a443_10_new)
HXLINE(  11)		this->g = g;
HXLINE(  12)		this->t = t;
HXLINE(  13)		this->pos = pos;
HXLINE(  14)		this->size = size;
            	}

Dynamic Alloc_obj::__CreateEmpty() { return new Alloc_obj; }

void *Alloc_obj::_hx_vtable = 0;

Dynamic Alloc_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alloc_obj > _hx_result = new Alloc_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Alloc_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0582c3c7;
}


::hx::ObjectPtr< Alloc_obj > Alloc_obj::__new( ::Dynamic g, ::hxsl::VecType t,int pos,int size) {
	::hx::ObjectPtr< Alloc_obj > __this = new Alloc_obj();
	__this->__construct(g,t,pos,size);
	return __this;
}

::hx::ObjectPtr< Alloc_obj > Alloc_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic g, ::hxsl::VecType t,int pos,int size) {
	Alloc_obj *__this = (Alloc_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alloc_obj), true, "hxsl._Flatten.Alloc"));
	*(void **)__this = Alloc_obj::_hx_vtable;
	__this->__construct(g,t,pos,size);
	return __this;
}

Alloc_obj::Alloc_obj()
{
}

void Alloc_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alloc);
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_END_CLASS();
}

void Alloc_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(v,"v");
}

::hx::Val Alloc_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { return ::hx::Val( t ); }
		if (HX_FIELD_EQ(inName,"g") ) { return ::hx::Val( g ); }
		if (HX_FIELD_EQ(inName,"v") ) { return ::hx::Val( v ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Alloc_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast<  ::hxsl::VecType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Alloc_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("t",74,00,00,00));
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("g",67,00,00,00));
	outFields->push(HX_("v",76,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Alloc_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxsl::VecType */ ,(int)offsetof(Alloc_obj,t),HX_("t",74,00,00,00)},
	{::hx::fsInt,(int)offsetof(Alloc_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsInt,(int)offsetof(Alloc_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Alloc_obj,g),HX_("g",67,00,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Alloc_obj,v),HX_("v",76,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Alloc_obj_sStaticStorageInfo = 0;
#endif

static ::String Alloc_obj_sMemberFields[] = {
	HX_("t",74,00,00,00),
	HX_("pos",94,5d,55,00),
	HX_("size",c1,a0,53,4c),
	HX_("g",67,00,00,00),
	HX_("v",76,00,00,00),
	::String(null()) };

::hx::Class Alloc_obj::__mClass;

void Alloc_obj::__register()
{
	Alloc_obj _hx_dummy;
	Alloc_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl._Flatten.Alloc",71,5b,a2,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Alloc_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Alloc_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alloc_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alloc_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
} // end namespace _Flatten
