#include <hxcpp.h>

#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Quat
#include <h3d/Quat.h>
#endif
#ifndef INCLUDED_h3d_anim_LinearFrame
#include <h3d/anim/LinearFrame.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b488990683dfa6f1_15_new,"h3d.anim.LinearFrame","new",0x631d43d2,"h3d.anim.LinearFrame.new","h3d/anim/LinearAnimation.hx",15,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_b488990683dfa6f1_17_toMatrix,"h3d.anim.LinearFrame","toMatrix",0x66cbad6a,"h3d.anim.LinearFrame.toMatrix","h3d/anim/LinearAnimation.hx",17,0x1f025447)
namespace h3d{
namespace anim{

void LinearFrame_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b488990683dfa6f1_15_new)
            	}

Dynamic LinearFrame_obj::__CreateEmpty() { return new LinearFrame_obj; }

void *LinearFrame_obj::_hx_vtable = 0;

Dynamic LinearFrame_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LinearFrame_obj > _hx_result = new LinearFrame_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LinearFrame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3172a0de;
}

 ::h3d::Matrix LinearFrame_obj::toMatrix(){
            	HX_GC_STACKFRAME(&_hx_pos_b488990683dfa6f1_17_toMatrix)
HXLINE(  18)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  19)		 ::h3d::Quat_obj::__alloc( HX_CTX ,this->qx,this->qy,this->qz,this->qw)->toMatrix(m);
HXLINE(  20)		m->prependScale(this->sx,this->sy,this->sz);
HXLINE(  21)		m->translate(this->tx,this->ty,this->tz);
HXLINE(  22)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LinearFrame_obj,toMatrix,return )


::hx::ObjectPtr< LinearFrame_obj > LinearFrame_obj::__new() {
	::hx::ObjectPtr< LinearFrame_obj > __this = new LinearFrame_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LinearFrame_obj > LinearFrame_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LinearFrame_obj *__this = (LinearFrame_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LinearFrame_obj), false, "h3d.anim.LinearFrame"));
	*(void **)__this = LinearFrame_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LinearFrame_obj::LinearFrame_obj()
{
}

::hx::Val LinearFrame_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return ::hx::Val( tx ); }
		if (HX_FIELD_EQ(inName,"ty") ) { return ::hx::Val( ty ); }
		if (HX_FIELD_EQ(inName,"tz") ) { return ::hx::Val( tz ); }
		if (HX_FIELD_EQ(inName,"qx") ) { return ::hx::Val( qx ); }
		if (HX_FIELD_EQ(inName,"qy") ) { return ::hx::Val( qy ); }
		if (HX_FIELD_EQ(inName,"qz") ) { return ::hx::Val( qz ); }
		if (HX_FIELD_EQ(inName,"qw") ) { return ::hx::Val( qw ); }
		if (HX_FIELD_EQ(inName,"sx") ) { return ::hx::Val( sx ); }
		if (HX_FIELD_EQ(inName,"sy") ) { return ::hx::Val( sy ); }
		if (HX_FIELD_EQ(inName,"sz") ) { return ::hx::Val( sz ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toMatrix") ) { return ::hx::Val( toMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LinearFrame_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tz") ) { tz=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"qx") ) { qx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"qy") ) { qy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"qz") ) { qz=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"qw") ) { qw=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sx") ) { sx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sy") ) { sy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sz") ) { sz=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tx",84,65,00,00));
	outFields->push(HX_("ty",85,65,00,00));
	outFields->push(HX_("tz",86,65,00,00));
	outFields->push(HX_("qx",e7,62,00,00));
	outFields->push(HX_("qy",e8,62,00,00));
	outFields->push(HX_("qz",e9,62,00,00));
	outFields->push(HX_("qw",e6,62,00,00));
	outFields->push(HX_("sx",a5,64,00,00));
	outFields->push(HX_("sy",a6,64,00,00));
	outFields->push(HX_("sz",a7,64,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LinearFrame_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(LinearFrame_obj,tx),HX_("tx",84,65,00,00)},
	{::hx::fsFloat,(int)offsetof(LinearFrame_obj,ty),HX_("ty",85,65,00,00)},
	{::hx::fsFloat,(int)offsetof(LinearFrame_obj,tz),HX_("tz",86,65,00,00)},
	{::hx::fsFloat,(int)offsetof(LinearFrame_obj,qx),HX_("qx",e7,62,00,00)},
	{::hx::fsFloat,(int)offsetof(LinearFrame_obj,qy),HX_("qy",e8,62,00,00)},
	{::hx::fsFloat,(int)offsetof(LinearFrame_obj,qz),HX_("qz",e9,62,00,00)},
	{::hx::fsFloat,(int)offsetof(LinearFrame_obj,qw),HX_("qw",e6,62,00,00)},
	{::hx::fsFloat,(int)offsetof(LinearFrame_obj,sx),HX_("sx",a5,64,00,00)},
	{::hx::fsFloat,(int)offsetof(LinearFrame_obj,sy),HX_("sy",a6,64,00,00)},
	{::hx::fsFloat,(int)offsetof(LinearFrame_obj,sz),HX_("sz",a7,64,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LinearFrame_obj_sStaticStorageInfo = 0;
#endif

static ::String LinearFrame_obj_sMemberFields[] = {
	HX_("tx",84,65,00,00),
	HX_("ty",85,65,00,00),
	HX_("tz",86,65,00,00),
	HX_("qx",e7,62,00,00),
	HX_("qy",e8,62,00,00),
	HX_("qz",e9,62,00,00),
	HX_("qw",e6,62,00,00),
	HX_("sx",a5,64,00,00),
	HX_("sy",a6,64,00,00),
	HX_("sz",a7,64,00,00),
	HX_("toMatrix",1c,de,06,e3),
	::String(null()) };

::hx::Class LinearFrame_obj::__mClass;

void LinearFrame_obj::__register()
{
	LinearFrame_obj _hx_dummy;
	LinearFrame_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.anim.LinearFrame",e0,b2,5e,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LinearFrame_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LinearFrame_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LinearFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LinearFrame_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace anim
