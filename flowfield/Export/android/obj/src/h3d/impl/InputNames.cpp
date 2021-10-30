#include <hxcpp.h>

#ifndef INCLUDED_h3d_impl_InputNames
#include <h3d/impl/InputNames.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0e69cf5f14669f59_123_new,"h3d.impl.InputNames","new",0x21d48389,"h3d.impl.InputNames.new","h3d/impl/Driver.hx",123,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e69cf5f14669f59_129_get,"h3d.impl.InputNames","get",0x21cf33bf,"h3d.impl.InputNames.get","h3d/impl/Driver.hx",129,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e69cf5f14669f59_127_boot,"h3d.impl.InputNames","boot",0x703794e9,"h3d.impl.InputNames.boot","h3d/impl/Driver.hx",127,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e69cf5f14669f59_128_boot,"h3d.impl.InputNames","boot",0x703794e9,"h3d.impl.InputNames.boot","h3d/impl/Driver.hx",128,0xe373499d)
namespace h3d{
namespace impl{

void InputNames_obj::__construct(::Array< ::String > names){
            	HX_STACKFRAME(&_hx_pos_0e69cf5f14669f59_123_new)
HXLINE( 124)		this->id = ::h3d::impl::InputNames_obj::UID++;
HXLINE( 125)		this->names = names;
            	}

Dynamic InputNames_obj::__CreateEmpty() { return new InputNames_obj; }

void *InputNames_obj::_hx_vtable = 0;

Dynamic InputNames_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InputNames_obj > _hx_result = new InputNames_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool InputNames_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0dd2bab3;
}

int InputNames_obj::UID;

 ::haxe::ds::StringMap InputNames_obj::CACHE;

 ::h3d::impl::InputNames InputNames_obj::get(::Array< ::String > names){
            	HX_GC_STACKFRAME(&_hx_pos_0e69cf5f14669f59_129_get)
HXLINE( 130)		::String key = names->join(HX_("|",7c,00,00,00));
HXLINE( 131)		 ::h3d::impl::InputNames i = ( ( ::h3d::impl::InputNames)(::h3d::impl::InputNames_obj::CACHE->get(key)) );
HXLINE( 132)		if (::hx::IsNull( i )) {
HXLINE( 133)			i =  ::h3d::impl::InputNames_obj::__alloc( HX_CTX ,names->copy());
HXLINE( 134)			::h3d::impl::InputNames_obj::CACHE->set(key,i);
            		}
HXLINE( 136)		return i;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputNames_obj,get,return )


InputNames_obj::InputNames_obj()
{
}

void InputNames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputNames);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(names,"names");
	HX_MARK_END_CLASS();
}

void InputNames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(names,"names");
}

::hx::Val InputNames_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { return ::hx::Val( names ); }
	}
	return super::__Field(inName,inCallProp);
}

bool InputNames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { outValue = ( UID ); return true; }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CACHE") ) { outValue = ( CACHE ); return true; }
	}
	return false;
}

::hx::Val InputNames_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { names=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InputNames_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { UID=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CACHE") ) { CACHE=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void InputNames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("names",c8,8f,84,96));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InputNames_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(InputNames_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(InputNames_obj,names),HX_("names",c8,8f,84,96)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo InputNames_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &InputNames_obj::UID,HX_("UID",70,bf,40,00)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &InputNames_obj::CACHE,HX_("CACHE",22,d2,02,bf)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String InputNames_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("names",c8,8f,84,96),
	::String(null()) };

static void InputNames_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputNames_obj::UID,"UID");
	HX_MARK_MEMBER_NAME(InputNames_obj::CACHE,"CACHE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InputNames_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputNames_obj::UID,"UID");
	HX_VISIT_MEMBER_NAME(InputNames_obj::CACHE,"CACHE");
};

#endif

::hx::Class InputNames_obj::__mClass;

static ::String InputNames_obj_sStaticFields[] = {
	HX_("UID",70,bf,40,00),
	HX_("CACHE",22,d2,02,bf),
	HX_("get",96,80,4e,00),
	::String(null())
};

void InputNames_obj::__register()
{
	InputNames_obj _hx_dummy;
	InputNames_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.impl.InputNames",17,0b,80,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InputNames_obj::__GetStatic;
	__mClass->mSetStaticField = &InputNames_obj::__SetStatic;
	__mClass->mMarkFunc = InputNames_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InputNames_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InputNames_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InputNames_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InputNames_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputNames_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputNames_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InputNames_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0e69cf5f14669f59_127_boot)
HXDLIN( 127)		UID = 0;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_0e69cf5f14669f59_128_boot)
HXDLIN( 128)		CACHE =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace h3d
} // end namespace impl
