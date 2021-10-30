#include <hxcpp.h>

#ifndef INCLUDED_h3d_impl__ManagedBuffer_FreeCell
#include <h3d/impl/_ManagedBuffer/FreeCell.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_158ab4ee12d633b5_8_new,"h3d.impl._ManagedBuffer.FreeCell","new",0xa1070d15,"h3d.impl._ManagedBuffer.FreeCell.new","h3d/impl/ManagedBuffer.hx",8,0xc1621038)
namespace h3d{
namespace impl{
namespace _ManagedBuffer{

void FreeCell_obj::__construct(int pos,int count, ::h3d::impl::_ManagedBuffer::FreeCell next){
            	HX_STACKFRAME(&_hx_pos_158ab4ee12d633b5_8_new)
HXLINE(   9)		this->pos = pos;
HXLINE(  10)		this->count = count;
HXLINE(  11)		this->next = next;
            	}

Dynamic FreeCell_obj::__CreateEmpty() { return new FreeCell_obj; }

void *FreeCell_obj::_hx_vtable = 0;

Dynamic FreeCell_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FreeCell_obj > _hx_result = new FreeCell_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FreeCell_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d447e23;
}


FreeCell_obj::FreeCell_obj()
{
}

void FreeCell_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FreeCell);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void FreeCell_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val FreeCell_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return ::hx::Val( count ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FreeCell_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::h3d::impl::_ManagedBuffer::FreeCell >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FreeCell_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("count",cf,44,63,4a));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FreeCell_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FreeCell_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsInt,(int)offsetof(FreeCell_obj,count),HX_("count",cf,44,63,4a)},
	{::hx::fsObject /*  ::h3d::impl::_ManagedBuffer::FreeCell */ ,(int)offsetof(FreeCell_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FreeCell_obj_sStaticStorageInfo = 0;
#endif

static ::String FreeCell_obj_sMemberFields[] = {
	HX_("pos",94,5d,55,00),
	HX_("count",cf,44,63,4a),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class FreeCell_obj::__mClass;

void FreeCell_obj::__register()
{
	FreeCell_obj _hx_dummy;
	FreeCell_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.impl._ManagedBuffer.FreeCell",a3,de,b3,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FreeCell_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FreeCell_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FreeCell_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FreeCell_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace impl
} // end namespace _ManagedBuffer
