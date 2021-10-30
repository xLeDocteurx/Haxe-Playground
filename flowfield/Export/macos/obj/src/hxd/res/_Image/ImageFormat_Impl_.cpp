#include <hxcpp.h>

#ifndef INCLUDED_hxd_res__Image_ImageFormat_Impl_
#include <hxd/res/_Image/ImageFormat_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e8f1a55ca0dad099_23_get_useAsyncDecode,"hxd.res._Image.ImageFormat_Impl_","get_useAsyncDecode",0xd7453f52,"hxd.res._Image.ImageFormat_Impl_.get_useAsyncDecode","hxd/res/Image.hx",23,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8f1a55ca0dad099_27_toInt,"hxd.res._Image.ImageFormat_Impl_","toInt",0x81a20bee,"hxd.res._Image.ImageFormat_Impl_.toInt","hxd/res/Image.hx",27,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8f1a55ca0dad099_5_boot,"hxd.res._Image.ImageFormat_Impl_","boot",0x6409cbb8,"hxd.res._Image.ImageFormat_Impl_.boot","hxd/res/Image.hx",5,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8f1a55ca0dad099_6_boot,"hxd.res._Image.ImageFormat_Impl_","boot",0x6409cbb8,"hxd.res._Image.ImageFormat_Impl_.boot","hxd/res/Image.hx",6,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8f1a55ca0dad099_7_boot,"hxd.res._Image.ImageFormat_Impl_","boot",0x6409cbb8,"hxd.res._Image.ImageFormat_Impl_.boot","hxd/res/Image.hx",7,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8f1a55ca0dad099_8_boot,"hxd.res._Image.ImageFormat_Impl_","boot",0x6409cbb8,"hxd.res._Image.ImageFormat_Impl_.boot","hxd/res/Image.hx",8,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8f1a55ca0dad099_9_boot,"hxd.res._Image.ImageFormat_Impl_","boot",0x6409cbb8,"hxd.res._Image.ImageFormat_Impl_.boot","hxd/res/Image.hx",9,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8f1a55ca0dad099_10_boot,"hxd.res._Image.ImageFormat_Impl_","boot",0x6409cbb8,"hxd.res._Image.ImageFormat_Impl_.boot","hxd/res/Image.hx",10,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8f1a55ca0dad099_11_boot,"hxd.res._Image.ImageFormat_Impl_","boot",0x6409cbb8,"hxd.res._Image.ImageFormat_Impl_.boot","hxd/res/Image.hx",11,0x34241f0d)
namespace hxd{
namespace res{
namespace _Image{

void ImageFormat_Impl__obj::__construct() { }

Dynamic ImageFormat_Impl__obj::__CreateEmpty() { return new ImageFormat_Impl__obj; }

void *ImageFormat_Impl__obj::_hx_vtable = 0;

Dynamic ImageFormat_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageFormat_Impl__obj > _hx_result = new ImageFormat_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageFormat_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3db17b86;
}

int ImageFormat_Impl__obj::Jpg;

int ImageFormat_Impl__obj::Png;

int ImageFormat_Impl__obj::Gif;

int ImageFormat_Impl__obj::Tga;

int ImageFormat_Impl__obj::Dds;

int ImageFormat_Impl__obj::Raw;

int ImageFormat_Impl__obj::Hdr;

bool ImageFormat_Impl__obj::get_useAsyncDecode(int this1){
            	HX_STACKFRAME(&_hx_pos_e8f1a55ca0dad099_23_get_useAsyncDecode)
HXDLIN(  23)		return (this1 == 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageFormat_Impl__obj,get_useAsyncDecode,return )

int ImageFormat_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_e8f1a55ca0dad099_27_toInt)
HXDLIN(  27)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageFormat_Impl__obj,toInt,return )


ImageFormat_Impl__obj::ImageFormat_Impl__obj()
{
}

bool ImageFormat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_useAsyncDecode") ) { outValue = get_useAsyncDecode_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ImageFormat_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ImageFormat_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ImageFormat_Impl__obj::Jpg,HX_("Jpg",c1,88,38,00)},
	{::hx::fsInt,(void *) &ImageFormat_Impl__obj::Png,HX_("Png",89,14,3d,00)},
	{::hx::fsInt,(void *) &ImageFormat_Impl__obj::Gif,HX_("Gif",e4,3b,36,00)},
	{::hx::fsInt,(void *) &ImageFormat_Impl__obj::Tga,HX_("Tga",6e,17,40,00)},
	{::hx::fsInt,(void *) &ImageFormat_Impl__obj::Dds,HX_("Dds",d3,f0,33,00)},
	{::hx::fsInt,(void *) &ImageFormat_Impl__obj::Raw,HX_("Raw",c8,8d,3e,00)},
	{::hx::fsInt,(void *) &ImageFormat_Impl__obj::Hdr,HX_("Hdr",d6,f9,36,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ImageFormat_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageFormat_Impl__obj::Jpg,"Jpg");
	HX_MARK_MEMBER_NAME(ImageFormat_Impl__obj::Png,"Png");
	HX_MARK_MEMBER_NAME(ImageFormat_Impl__obj::Gif,"Gif");
	HX_MARK_MEMBER_NAME(ImageFormat_Impl__obj::Tga,"Tga");
	HX_MARK_MEMBER_NAME(ImageFormat_Impl__obj::Dds,"Dds");
	HX_MARK_MEMBER_NAME(ImageFormat_Impl__obj::Raw,"Raw");
	HX_MARK_MEMBER_NAME(ImageFormat_Impl__obj::Hdr,"Hdr");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageFormat_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageFormat_Impl__obj::Jpg,"Jpg");
	HX_VISIT_MEMBER_NAME(ImageFormat_Impl__obj::Png,"Png");
	HX_VISIT_MEMBER_NAME(ImageFormat_Impl__obj::Gif,"Gif");
	HX_VISIT_MEMBER_NAME(ImageFormat_Impl__obj::Tga,"Tga");
	HX_VISIT_MEMBER_NAME(ImageFormat_Impl__obj::Dds,"Dds");
	HX_VISIT_MEMBER_NAME(ImageFormat_Impl__obj::Raw,"Raw");
	HX_VISIT_MEMBER_NAME(ImageFormat_Impl__obj::Hdr,"Hdr");
};

#endif

::hx::Class ImageFormat_Impl__obj::__mClass;

static ::String ImageFormat_Impl__obj_sStaticFields[] = {
	HX_("Jpg",c1,88,38,00),
	HX_("Png",89,14,3d,00),
	HX_("Gif",e4,3b,36,00),
	HX_("Tga",6e,17,40,00),
	HX_("Dds",d3,f0,33,00),
	HX_("Raw",c8,8d,3e,00),
	HX_("Hdr",d6,f9,36,00),
	HX_("get_useAsyncDecode",4c,19,d3,ea),
	HX_("toInt",34,be,11,14),
	::String(null())
};

void ImageFormat_Impl__obj::__register()
{
	ImageFormat_Impl__obj _hx_dummy;
	ImageFormat_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res._Image.ImageFormat_Impl_",a8,46,57,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageFormat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ImageFormat_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ImageFormat_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ImageFormat_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageFormat_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageFormat_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageFormat_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ImageFormat_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e8f1a55ca0dad099_5_boot)
HXDLIN(   5)		Jpg = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8f1a55ca0dad099_6_boot)
HXDLIN(   6)		Png = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8f1a55ca0dad099_7_boot)
HXDLIN(   7)		Gif = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8f1a55ca0dad099_8_boot)
HXDLIN(   8)		Tga = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8f1a55ca0dad099_9_boot)
HXDLIN(   9)		Dds = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8f1a55ca0dad099_10_boot)
HXDLIN(  10)		Raw = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8f1a55ca0dad099_11_boot)
HXDLIN(  11)		Hdr = 6;
            	}
}

} // end namespace hxd
} // end namespace res
} // end namespace _Image
