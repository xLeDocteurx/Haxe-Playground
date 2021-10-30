#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_res__NanoJpeg_Component
#include <hxd/res/_NanoJpeg/Component.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5b38cacd7bf75827_50_new,"hxd.res._NanoJpeg.Component","new",0x5ae80eb4,"hxd.res._NanoJpeg.Component.new","hxd/res/NanoJpeg.hx",50,0xbcbe95b8)
namespace hxd{
namespace res{
namespace _NanoJpeg{

void Component_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5b38cacd7bf75827_50_new)
            	}

Dynamic Component_obj::__CreateEmpty() { return new Component_obj; }

void *Component_obj::_hx_vtable = 0;

Dynamic Component_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Component_obj > _hx_result = new Component_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Component_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1875eb8e;
}


Component_obj::Component_obj()
{
}

void Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Component);
	HX_MARK_MEMBER_NAME(cid,"cid");
	HX_MARK_MEMBER_NAME(ssx,"ssx");
	HX_MARK_MEMBER_NAME(ssy,"ssy");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_MEMBER_NAME(qtsel,"qtsel");
	HX_MARK_MEMBER_NAME(actabsel,"actabsel");
	HX_MARK_MEMBER_NAME(dctabsel,"dctabsel");
	HX_MARK_MEMBER_NAME(dcpred,"dcpred");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_END_CLASS();
}

void Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cid,"cid");
	HX_VISIT_MEMBER_NAME(ssx,"ssx");
	HX_VISIT_MEMBER_NAME(ssy,"ssy");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	HX_VISIT_MEMBER_NAME(qtsel,"qtsel");
	HX_VISIT_MEMBER_NAME(actabsel,"actabsel");
	HX_VISIT_MEMBER_NAME(dctabsel,"dctabsel");
	HX_VISIT_MEMBER_NAME(dcpred,"dcpred");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
}

::hx::Val Component_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cid") ) { return ::hx::Val( cid ); }
		if (HX_FIELD_EQ(inName,"ssx") ) { return ::hx::Val( ssx ); }
		if (HX_FIELD_EQ(inName,"ssy") ) { return ::hx::Val( ssy ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"qtsel") ) { return ::hx::Val( qtsel ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"stride") ) { return ::hx::Val( stride ); }
		if (HX_FIELD_EQ(inName,"dcpred") ) { return ::hx::Val( dcpred ); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return ::hx::Val( pixels ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"actabsel") ) { return ::hx::Val( actabsel ); }
		if (HX_FIELD_EQ(inName,"dctabsel") ) { return ::hx::Val( dctabsel ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Component_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cid") ) { cid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ssx") ) { ssx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ssy") ) { ssy=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"qtsel") ) { qtsel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dcpred") ) { dcpred=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"actabsel") ) { actabsel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dctabsel") ) { dctabsel=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cid",fe,7a,4b,00));
	outFields->push(HX_("ssx",d8,a7,57,00));
	outFields->push(HX_("ssy",d9,a7,57,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("stride",19,20,30,11));
	outFields->push(HX_("qtsel",97,e8,4b,5d));
	outFields->push(HX_("actabsel",c7,ce,4c,3d));
	outFields->push(HX_("dctabsel",24,25,e4,e8));
	outFields->push(HX_("dcpred",e0,41,ba,46));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Component_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Component_obj,cid),HX_("cid",fe,7a,4b,00)},
	{::hx::fsInt,(int)offsetof(Component_obj,ssx),HX_("ssx",d8,a7,57,00)},
	{::hx::fsInt,(int)offsetof(Component_obj,ssy),HX_("ssy",d9,a7,57,00)},
	{::hx::fsInt,(int)offsetof(Component_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(Component_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(Component_obj,stride),HX_("stride",19,20,30,11)},
	{::hx::fsInt,(int)offsetof(Component_obj,qtsel),HX_("qtsel",97,e8,4b,5d)},
	{::hx::fsInt,(int)offsetof(Component_obj,actabsel),HX_("actabsel",c7,ce,4c,3d)},
	{::hx::fsInt,(int)offsetof(Component_obj,dctabsel),HX_("dctabsel",24,25,e4,e8)},
	{::hx::fsInt,(int)offsetof(Component_obj,dcpred),HX_("dcpred",e0,41,ba,46)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Component_obj,pixels),HX_("pixels",2d,ef,a9,8c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Component_obj_sStaticStorageInfo = 0;
#endif

static ::String Component_obj_sMemberFields[] = {
	HX_("cid",fe,7a,4b,00),
	HX_("ssx",d8,a7,57,00),
	HX_("ssy",d9,a7,57,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("stride",19,20,30,11),
	HX_("qtsel",97,e8,4b,5d),
	HX_("actabsel",c7,ce,4c,3d),
	HX_("dctabsel",24,25,e4,e8),
	HX_("dcpred",e0,41,ba,46),
	HX_("pixels",2d,ef,a9,8c),
	::String(null()) };

::hx::Class Component_obj::__mClass;

void Component_obj::__register()
{
	Component_obj _hx_dummy;
	Component_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res._NanoJpeg.Component",c2,e4,ad,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Component_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Component_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Component_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Component_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace res
} // end namespace _NanoJpeg
