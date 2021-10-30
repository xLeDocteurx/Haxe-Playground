#ifndef INCLUDED_hxd_res_ImageInfo
#define INCLUDED_hxd_res_ImageInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ffeba9c620001014_37_new)
HX_DECLARE_CLASS1(hxd,PixelFormat)
HX_DECLARE_CLASS2(hxd,res,ImageInfo)

namespace hxd{
namespace res{


class HXCPP_CLASS_ATTRIBUTES ImageInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageInfo_obj OBJ_;
		ImageInfo_obj();

	public:
		enum { _hx_ClassId = 0x7519487d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.res.ImageInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.res.ImageInfo"); }

		inline static ::hx::ObjectPtr< ImageInfo_obj > __new() {
			::hx::ObjectPtr< ImageInfo_obj > __this = new ImageInfo_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ImageInfo_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ImageInfo_obj *__this = (ImageInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageInfo_obj), true, "hxd.res.ImageInfo"));
			*(void **)__this = ImageInfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ffeba9c620001014_37_new)
HXLINE(  40)		( ( ::hxd::res::ImageInfo)(__this) )->mipLevels = 1;
HXLINE(  39)		( ( ::hxd::res::ImageInfo)(__this) )->height = 0;
HXLINE(  38)		( ( ::hxd::res::ImageInfo)(__this) )->width = 0;
HXLINE(  45)		int this1 = 0;
HXDLIN(  45)		( ( ::hxd::res::ImageInfo)(__this) )->flags = this1;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageInfo",49,ad,c2,c9); }

		int width;
		int height;
		int mipLevels;
		int flags;
		int dataFormat;
		 ::hxd::PixelFormat pixelFormat;
};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_ImageInfo */ 
