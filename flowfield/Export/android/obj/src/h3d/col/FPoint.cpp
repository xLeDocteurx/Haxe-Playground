#include <hxcpp.h>

#ifndef INCLUDED_h3d_col_FPoint
#include <h3d/col/FPoint.h>
#endif
#ifndef INCLUDED_hxd_Math
#include <hxd/Math.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a0b8ac4084bff824_10_new,"h3d.col.FPoint","new",0xcedd371f,"h3d.col.FPoint.new","h3d/col/FPoint.hx",10,0x2ca61c6f)
HX_LOCAL_STACK_FRAME(_hx_pos_a0b8ac4084bff824_17_sub,"h3d.col.FPoint","sub",0xcee1103f,"h3d.col.FPoint.sub","h3d/col/FPoint.hx",17,0x2ca61c6f)
HX_LOCAL_STACK_FRAME(_hx_pos_a0b8ac4084bff824_21_add,"h3d.col.FPoint","add",0xced358e0,"h3d.col.FPoint.add","h3d/col/FPoint.hx",21,0x2ca61c6f)
HX_LOCAL_STACK_FRAME(_hx_pos_a0b8ac4084bff824_25_cross,"h3d.col.FPoint","cross",0xdd1a33ff,"h3d.col.FPoint.cross","h3d/col/FPoint.hx",25,0x2ca61c6f)
HX_LOCAL_STACK_FRAME(_hx_pos_a0b8ac4084bff824_29_dot,"h3d.col.FPoint","dot",0xced5a948,"h3d.col.FPoint.dot","h3d/col/FPoint.hx",29,0x2ca61c6f)
HX_LOCAL_STACK_FRAME(_hx_pos_a0b8ac4084bff824_33_toString,"h3d.col.FPoint","toString",0xde3d958d,"h3d.col.FPoint.toString","h3d/col/FPoint.hx",33,0x2ca61c6f)
namespace h3d{
namespace col{

void FPoint_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_a0b8ac4084bff824_10_new)
HXLINE(  11)		this->x = x;
HXLINE(  12)		this->y = y;
HXLINE(  13)		this->z = z;
            	}

Dynamic FPoint_obj::__CreateEmpty() { return new FPoint_obj; }

void *FPoint_obj::_hx_vtable = 0;

Dynamic FPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FPoint_obj > _hx_result = new FPoint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a6bfa51;
}

 ::h3d::col::FPoint FPoint_obj::sub( ::h3d::col::FPoint p){
            	HX_GC_STACKFRAME(&_hx_pos_a0b8ac4084bff824_17_sub)
HXDLIN(  17)		return  ::h3d::col::FPoint_obj::__alloc( HX_CTX ,(this->x - p->x),(this->y - p->y),(this->z - p->z));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FPoint_obj,sub,return )

 ::h3d::col::FPoint FPoint_obj::add( ::h3d::col::FPoint p){
            	HX_GC_STACKFRAME(&_hx_pos_a0b8ac4084bff824_21_add)
HXDLIN(  21)		return  ::h3d::col::FPoint_obj::__alloc( HX_CTX ,(this->x + p->x),(this->y + p->y),(this->z + p->z));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FPoint_obj,add,return )

 ::h3d::col::FPoint FPoint_obj::cross( ::h3d::col::FPoint p){
            	HX_GC_STACKFRAME(&_hx_pos_a0b8ac4084bff824_25_cross)
HXDLIN(  25)		return  ::h3d::col::FPoint_obj::__alloc( HX_CTX ,((this->y * p->z) - (this->z * p->y)),((this->z * p->x) - (this->x * p->z)),((this->x * p->y) - (this->y * p->x)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FPoint_obj,cross,return )

Float FPoint_obj::dot( ::h3d::col::FPoint p){
            	HX_STACKFRAME(&_hx_pos_a0b8ac4084bff824_29_dot)
HXDLIN(  29)		return (((this->x * p->x) + (this->y * p->y)) + (this->z * p->z));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FPoint_obj,dot,return )

::String FPoint_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a0b8ac4084bff824_33_toString)
HXDLIN(  33)		::String _hx_tmp = ((HX_("FPoint{",11,ff,a0,8a) + ::hxd::Math_obj::fmt(this->x)) + HX_(",",2c,00,00,00));
HXDLIN(  33)		::String _hx_tmp1 = ((_hx_tmp + ::hxd::Math_obj::fmt(this->y)) + HX_(",",2c,00,00,00));
HXDLIN(  33)		return ((_hx_tmp1 + ::hxd::Math_obj::fmt(this->z)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FPoint_obj,toString,return )


::hx::ObjectPtr< FPoint_obj > FPoint_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z) {
	::hx::ObjectPtr< FPoint_obj > __this = new FPoint_obj();
	__this->__construct(__o_x,__o_y,__o_z);
	return __this;
}

::hx::ObjectPtr< FPoint_obj > FPoint_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z) {
	FPoint_obj *__this = (FPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FPoint_obj), false, "h3d.col.FPoint"));
	*(void **)__this = FPoint_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z);
	return __this;
}

FPoint_obj::FPoint_obj()
{
}

::hx::Val FPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot") ) { return ::hx::Val( dot_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cross") ) { return ::hx::Val( cross_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FPoint_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FPoint_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FPoint_obj,z),HX_("z",7a,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String FPoint_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("sub",80,a9,57,00),
	HX_("add",21,f2,49,00),
	HX_("cross",80,5f,5a,4c),
	HX_("dot",89,42,4c,00),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class FPoint_obj::__mClass;

void FPoint_obj::__register()
{
	FPoint_obj _hx_dummy;
	FPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.FPoint",ad,bb,d5,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
