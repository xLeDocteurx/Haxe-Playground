#include <hxcpp.h>

#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_res_ImageInfo
#include <hxd/res/ImageInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ffeba9c620001014_37_new,"hxd.res.ImageInfo","new",0x8eba4793,"hxd.res.ImageInfo.new","hxd/res/Image.hx",37,0x34241f0d)
namespace hxd{
namespace res{

void ImageInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ffeba9c620001014_37_new)
HXLINE(  40)		this->mipLevels = 1;
HXLINE(  39)		this->height = 0;
HXLINE(  38)		this->width = 0;
HXLINE(  45)		int this1 = 0;
HXDLIN(  45)		this->flags = this1;
            	}

Dynamic ImageInfo_obj::__CreateEmpty() { return new ImageInfo_obj; }

void *ImageInfo_obj::_hx_vtable = 0;

Dynamic ImageInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageInfo_obj > _hx_result = new ImageInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7519487d;
}


ImageInfo_obj::ImageInfo_obj()
{
}

void ImageInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageInfo);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(mipLevels,"mipLevels");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(pixelFormat,"pixelFormat");
	HX_MARK_END_CLASS();
}

void ImageInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(mipLevels,"mipLevels");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(pixelFormat,"pixelFormat");
}

::hx::Val ImageInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipLevels") ) { return ::hx::Val( mipLevels ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return ::hx::Val( dataFormat ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelFormat") ) { return ::hx::Val( pixelFormat ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipLevels") ) { mipLevels=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataFormat") ) { dataFormat=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelFormat") ) { pixelFormat=inValue.Cast<  ::hxd::PixelFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("mipLevels",23,ab,c2,50));
	outFields->push(HX_("flags",47,2b,8c,02));
	outFields->push(HX_("dataFormat",01,55,30,e9));
	outFields->push(HX_("pixelFormat",5d,72,1b,6f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ImageInfo_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(ImageInfo_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(ImageInfo_obj,mipLevels),HX_("mipLevels",23,ab,c2,50)},
	{::hx::fsInt,(int)offsetof(ImageInfo_obj,flags),HX_("flags",47,2b,8c,02)},
	{::hx::fsInt,(int)offsetof(ImageInfo_obj,dataFormat),HX_("dataFormat",01,55,30,e9)},
	{::hx::fsObject /*  ::hxd::PixelFormat */ ,(int)offsetof(ImageInfo_obj,pixelFormat),HX_("pixelFormat",5d,72,1b,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageInfo_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("mipLevels",23,ab,c2,50),
	HX_("flags",47,2b,8c,02),
	HX_("dataFormat",01,55,30,e9),
	HX_("pixelFormat",5d,72,1b,6f),
	::String(null()) };

::hx::Class ImageInfo_obj::__mClass;

void ImageInfo_obj::__register()
{
	ImageInfo_obj _hx_dummy;
	ImageInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res.ImageInfo",21,82,5c,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace res
