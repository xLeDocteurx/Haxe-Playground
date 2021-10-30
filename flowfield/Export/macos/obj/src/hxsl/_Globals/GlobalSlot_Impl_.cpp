#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl__Globals_GlobalSlot_Impl_
#include <hxsl/_Globals/GlobalSlot_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6092f4d0cc71146e_5__new,"hxsl._Globals.GlobalSlot_Impl_","_new",0xeb104276,"hxsl._Globals.GlobalSlot_Impl_._new","hxsl/Globals.hx",5,0xd12a3b14)
HX_LOCAL_STACK_FRAME(_hx_pos_6092f4d0cc71146e_9_toInt,"hxsl._Globals.GlobalSlot_Impl_","toInt",0xdb28037f,"hxsl._Globals.GlobalSlot_Impl_.toInt","hxsl/Globals.hx",9,0xd12a3b14)
HX_LOCAL_STACK_FRAME(_hx_pos_6092f4d0cc71146e_12_set,"hxsl._Globals.GlobalSlot_Impl_","set",0xc1f9682d,"hxsl._Globals.GlobalSlot_Impl_.set","hxsl/Globals.hx",12,0xd12a3b14)
HX_LOCAL_STACK_FRAME(_hx_pos_6092f4d0cc71146e_15_get,"hxsl._Globals.GlobalSlot_Impl_","get",0xc1f04d21,"hxsl._Globals.GlobalSlot_Impl_.get","hxsl/Globals.hx",15,0xd12a3b14)
namespace hxsl{
namespace _Globals{

void GlobalSlot_Impl__obj::__construct() { }

Dynamic GlobalSlot_Impl__obj::__CreateEmpty() { return new GlobalSlot_Impl__obj; }

void *GlobalSlot_Impl__obj::_hx_vtable = 0;

Dynamic GlobalSlot_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GlobalSlot_Impl__obj > _hx_result = new GlobalSlot_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GlobalSlot_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11732203;
}

int GlobalSlot_Impl__obj::_new(::String name){
            	HX_STACKFRAME(&_hx_pos_6092f4d0cc71146e_5__new)
HXDLIN(   5)		int this1 = ::hxsl::Globals_obj::allocID(name);
HXDLIN(   5)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GlobalSlot_Impl__obj,_new,return )

int GlobalSlot_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_6092f4d0cc71146e_9_toInt)
HXDLIN(   9)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GlobalSlot_Impl__obj,toInt,return )

void GlobalSlot_Impl__obj::set(int this1, ::hxsl::Globals globals, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_6092f4d0cc71146e_12_set)
HXDLIN(  12)		globals->map->set(this1,v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GlobalSlot_Impl__obj,set,(void))

 ::Dynamic GlobalSlot_Impl__obj::get(int this1, ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_6092f4d0cc71146e_15_get)
HXDLIN(  15)		return globals->map->get(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GlobalSlot_Impl__obj,get,return )


GlobalSlot_Impl__obj::GlobalSlot_Impl__obj()
{
}

bool GlobalSlot_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GlobalSlot_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GlobalSlot_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class GlobalSlot_Impl__obj::__mClass;

static ::String GlobalSlot_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("toInt",34,be,11,14),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null())
};

void GlobalSlot_Impl__obj::__register()
{
	GlobalSlot_Impl__obj _hx_dummy;
	GlobalSlot_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl._Globals.GlobalSlot_Impl_",79,4b,3c,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GlobalSlot_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GlobalSlot_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GlobalSlot_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlobalSlot_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlobalSlot_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
} // end namespace _Globals
