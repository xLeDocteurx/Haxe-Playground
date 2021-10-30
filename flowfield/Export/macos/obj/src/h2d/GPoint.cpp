#include <hxcpp.h>

#ifndef INCLUDED_h2d_GPoint
#include <h2d/GPoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_53b39f4fc661924b_16_new,"h2d.GPoint","new",0x8c7e558f,"h2d.GPoint.new","h2d/Graphics.hx",16,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_53b39f4fc661924b_19_load,"h2d.GPoint","load",0x60c19e17,"h2d.GPoint.load","h2d/Graphics.hx",19,0x5cd0883e)
namespace h2d{

void GPoint_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_53b39f4fc661924b_16_new)
            	}

Dynamic GPoint_obj::__CreateEmpty() { return new GPoint_obj; }

void *GPoint_obj::_hx_vtable = 0;

Dynamic GPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GPoint_obj > _hx_result = new GPoint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x208dcae3;
}

void GPoint_obj::load(Float x,Float y,Float r,Float g,Float b,Float a){
            	HX_STACKFRAME(&_hx_pos_53b39f4fc661924b_19_load)
HXLINE(  20)		this->x = x;
HXLINE(  21)		this->y = y;
HXLINE(  22)		this->r = r;
HXLINE(  23)		this->g = g;
HXLINE(  24)		this->b = b;
HXLINE(  25)		this->a = a;
            	}


HX_DEFINE_DYNAMIC_FUNC6(GPoint_obj,load,(void))


GPoint_obj::GPoint_obj()
{
}

::hx::Val GPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		if (HX_FIELD_EQ(inName,"g") ) { return ::hx::Val( g ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("g",67,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("a",61,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(GPoint_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(GPoint_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(GPoint_obj,r),HX_("r",72,00,00,00)},
	{::hx::fsFloat,(int)offsetof(GPoint_obj,g),HX_("g",67,00,00,00)},
	{::hx::fsFloat,(int)offsetof(GPoint_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsFloat,(int)offsetof(GPoint_obj,a),HX_("a",61,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String GPoint_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("r",72,00,00,00),
	HX_("g",67,00,00,00),
	HX_("b",62,00,00,00),
	HX_("a",61,00,00,00),
	HX_("load",26,9a,b7,47),
	::String(null()) };

::hx::Class GPoint_obj::__mClass;

void GPoint_obj::__register()
{
	GPoint_obj _hx_dummy;
	GPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.GPoint",1d,e2,0a,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
