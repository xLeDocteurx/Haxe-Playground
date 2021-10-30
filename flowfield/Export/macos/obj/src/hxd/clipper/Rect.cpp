#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper_Rect
#include <hxd/clipper/Rect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c84e6288e8a7ca4e_9_new,"hxd.clipper.Rect","new",0x49a96311,"hxd.clipper.Rect.new","hxd/clipper/Rect.hx",9,0x333a04bd)
namespace hxd{
namespace clipper{

void Rect_obj::__construct(::hx::Null< int >  __o_l,::hx::Null< int >  __o_t,::hx::Null< int >  __o_r,::hx::Null< int >  __o_b){
            		int l = __o_l.Default(0);
            		int t = __o_t.Default(0);
            		int r = __o_r.Default(0);
            		int b = __o_b.Default(0);
            	HX_STACKFRAME(&_hx_pos_c84e6288e8a7ca4e_9_new)
HXLINE(  10)		this->left = l;
HXDLIN(  10)		this->top = t;
HXLINE(  11)		this->right = r;
HXDLIN(  11)		this->bottom = b;
            	}

Dynamic Rect_obj::__CreateEmpty() { return new Rect_obj; }

void *Rect_obj::_hx_vtable = 0;

Dynamic Rect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Rect_obj > _hx_result = new Rect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Rect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2238a961;
}


Rect_obj::Rect_obj()
{
}

::hx::Val Rect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return ::hx::Val( top ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return ::hx::Val( bottom ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Rect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { bottom=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("bottom",eb,e6,78,65));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Rect_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Rect_obj,left),HX_("left",07,08,b0,47)},
	{::hx::fsInt,(int)offsetof(Rect_obj,top),HX_("top",95,66,58,00)},
	{::hx::fsInt,(int)offsetof(Rect_obj,right),HX_("right",dc,0b,64,e9)},
	{::hx::fsInt,(int)offsetof(Rect_obj,bottom),HX_("bottom",eb,e6,78,65)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Rect_obj_sStaticStorageInfo = 0;
#endif

static ::String Rect_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("top",95,66,58,00),
	HX_("right",dc,0b,64,e9),
	HX_("bottom",eb,e6,78,65),
	::String(null()) };

::hx::Class Rect_obj::__mClass;

void Rect_obj::__register()
{
	Rect_obj _hx_dummy;
	Rect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper.Rect",9f,86,7c,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Rect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Rect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
