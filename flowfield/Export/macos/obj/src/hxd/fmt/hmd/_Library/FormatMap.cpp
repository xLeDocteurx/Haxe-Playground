#include <hxcpp.h>

#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd__Library_FormatMap
#include <hxd/fmt/hmd/_Library/FormatMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_29faabdc7233629e_9_new,"hxd.fmt.hmd._Library.FormatMap","new",0x29e0238f,"hxd.fmt.hmd._Library.FormatMap.new","hxd/fmt/hmd/Library.hx",9,0x88e81730)
namespace hxd{
namespace fmt{
namespace hmd{
namespace _Library{

void FormatMap_obj::__construct(int size,int offset, ::h3d::Vector def, ::hxd::fmt::hmd::_Library::FormatMap next){
            	HX_STACKFRAME(&_hx_pos_29faabdc7233629e_9_new)
HXLINE(  10)		this->size = size;
HXLINE(  11)		this->offset = offset;
HXLINE(  12)		this->def = def;
HXLINE(  13)		this->next = next;
            	}

Dynamic FormatMap_obj::__CreateEmpty() { return new FormatMap_obj; }

void *FormatMap_obj::_hx_vtable = 0;

Dynamic FormatMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FormatMap_obj > _hx_result = new FormatMap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FormatMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07359f4b;
}


::hx::ObjectPtr< FormatMap_obj > FormatMap_obj::__new(int size,int offset, ::h3d::Vector def, ::hxd::fmt::hmd::_Library::FormatMap next) {
	::hx::ObjectPtr< FormatMap_obj > __this = new FormatMap_obj();
	__this->__construct(size,offset,def,next);
	return __this;
}

::hx::ObjectPtr< FormatMap_obj > FormatMap_obj::__alloc(::hx::Ctx *_hx_ctx,int size,int offset, ::h3d::Vector def, ::hxd::fmt::hmd::_Library::FormatMap next) {
	FormatMap_obj *__this = (FormatMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FormatMap_obj), true, "hxd.fmt.hmd._Library.FormatMap"));
	*(void **)__this = FormatMap_obj::_hx_vtable;
	__this->__construct(size,offset,def,next);
	return __this;
}

FormatMap_obj::FormatMap_obj()
{
}

void FormatMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FormatMap);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(def,"def");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void FormatMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(def,"def");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val FormatMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"def") ) { return ::hx::Val( def ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FormatMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"def") ) { def=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxd::fmt::hmd::_Library::FormatMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FormatMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("def",c5,39,4c,00));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FormatMap_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FormatMap_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsInt,(int)offsetof(FormatMap_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(FormatMap_obj,def),HX_("def",c5,39,4c,00)},
	{::hx::fsObject /*  ::hxd::fmt::hmd::_Library::FormatMap */ ,(int)offsetof(FormatMap_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FormatMap_obj_sStaticStorageInfo = 0;
#endif

static ::String FormatMap_obj_sMemberFields[] = {
	HX_("size",c1,a0,53,4c),
	HX_("offset",93,97,3f,60),
	HX_("def",c5,39,4c,00),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class FormatMap_obj::__mClass;

void FormatMap_obj::__register()
{
	FormatMap_obj _hx_dummy;
	FormatMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd._Library.FormatMap",1d,b0,ed,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FormatMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FormatMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FormatMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FormatMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
} // end namespace _Library
