#ifndef INCLUDED_hxd_res__Image_ImageFormat_Impl_
#define INCLUDED_hxd_res__Image_ImageFormat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxd,res,_Image,ImageFormat_Impl_)

namespace hxd{
namespace res{
namespace _Image{


class HXCPP_CLASS_ATTRIBUTES ImageFormat_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageFormat_Impl__obj OBJ_;
		ImageFormat_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3db17b86 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.res._Image.ImageFormat_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.res._Image.ImageFormat_Impl_"); }

		inline static ::hx::ObjectPtr< ImageFormat_Impl__obj > __new() {
			::hx::ObjectPtr< ImageFormat_Impl__obj > __this = new ImageFormat_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ImageFormat_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ImageFormat_Impl__obj *__this = (ImageFormat_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageFormat_Impl__obj), false, "hxd.res._Image.ImageFormat_Impl_"));
			*(void **)__this = ImageFormat_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageFormat_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageFormat_Impl_",f2,d6,29,90); }

		static void __boot();
		static int Jpg;
		static int Png;
		static int Gif;
		static int Tga;
		static int Dds;
		static int Raw;
		static int Hdr;
		static bool get_useAsyncDecode(int this1);
		static ::Dynamic get_useAsyncDecode_dyn();

		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

};

} // end namespace hxd
} // end namespace res
} // end namespace _Image

#endif /* INCLUDED_hxd_res__Image_ImageFormat_Impl_ */ 
