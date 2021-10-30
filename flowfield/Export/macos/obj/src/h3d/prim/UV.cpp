#include <hxcpp.h>

#ifndef INCLUDED_h3d_prim_UV
#include <h3d/prim/UV.h>
#endif
#ifndef INCLUDED_hxd_Math
#include <hxd/Math.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3c38dd06aff6644a_8_new,"h3d.prim.UV","new",0x58b0b826,"h3d.prim.UV.new","h3d/prim/UV.hx",8,0x8299d5aa)
HX_LOCAL_STACK_FRAME(_hx_pos_3c38dd06aff6644a_14_clone,"h3d.prim.UV","clone",0x1f9df8a3,"h3d.prim.UV.clone","h3d/prim/UV.hx",14,0x8299d5aa)
HX_LOCAL_STACK_FRAME(_hx_pos_3c38dd06aff6644a_18_toString,"h3d.prim.UV","toString",0xad95fb26,"h3d.prim.UV.toString","h3d/prim/UV.hx",18,0x8299d5aa)
namespace h3d{
namespace prim{

void UV_obj::__construct(Float u,Float v){
            	HX_STACKFRAME(&_hx_pos_3c38dd06aff6644a_8_new)
HXLINE(   9)		this->u = u;
HXLINE(  10)		this->v = v;
            	}

Dynamic UV_obj::__CreateEmpty() { return new UV_obj; }

void *UV_obj::_hx_vtable = 0;

Dynamic UV_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UV_obj > _hx_result = new UV_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool UV_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6d595b00;
}

 ::h3d::prim::UV UV_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_3c38dd06aff6644a_14_clone)
HXDLIN(  14)		return  ::h3d::prim::UV_obj::__alloc( HX_CTX ,this->u,this->v);
            	}


HX_DEFINE_DYNAMIC_FUNC0(UV_obj,clone,return )

::String UV_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_3c38dd06aff6644a_18_toString)
HXDLIN(  18)		::String _hx_tmp = ((HX_("{",7b,00,00,00) + ::hxd::Math_obj::fmt(this->u)) + HX_(",",2c,00,00,00));
HXDLIN(  18)		return ((_hx_tmp + ::hxd::Math_obj::fmt(this->v)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(UV_obj,toString,return )


::hx::ObjectPtr< UV_obj > UV_obj::__new(Float u,Float v) {
	::hx::ObjectPtr< UV_obj > __this = new UV_obj();
	__this->__construct(u,v);
	return __this;
}

::hx::ObjectPtr< UV_obj > UV_obj::__alloc(::hx::Ctx *_hx_ctx,Float u,Float v) {
	UV_obj *__this = (UV_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UV_obj), false, "h3d.prim.UV"));
	*(void **)__this = UV_obj::_hx_vtable;
	__this->__construct(u,v);
	return __this;
}

UV_obj::UV_obj()
{
}

::hx::Val UV_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { return ::hx::Val( u ); }
		if (HX_FIELD_EQ(inName,"v") ) { return ::hx::Val( v ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val UV_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { u=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("u",75,00,00,00));
	outFields->push(HX_("v",76,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo UV_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(UV_obj,u),HX_("u",75,00,00,00)},
	{::hx::fsFloat,(int)offsetof(UV_obj,v),HX_("v",76,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *UV_obj_sStaticStorageInfo = 0;
#endif

static ::String UV_obj_sMemberFields[] = {
	HX_("u",75,00,00,00),
	HX_("v",76,00,00,00),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class UV_obj::__mClass;

void UV_obj::__register()
{
	UV_obj _hx_dummy;
	UV_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.prim.UV",34,6d,e4,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UV_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UV_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UV_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UV_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace prim
