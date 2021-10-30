#ifndef INCLUDED_hxd__Pixels_PixelsARGB_Impl_
#define INCLUDED_hxd__Pixels_PixelsARGB_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,Pixels)
HX_DECLARE_CLASS2(hxd,_Pixels,PixelsARGB_Impl_)

namespace hxd{
namespace _Pixels{


class HXCPP_CLASS_ATTRIBUTES PixelsARGB_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PixelsARGB_Impl__obj OBJ_;
		PixelsARGB_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7c9570b5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd._Pixels.PixelsARGB_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd._Pixels.PixelsARGB_Impl_"); }

		inline static ::hx::ObjectPtr< PixelsARGB_Impl__obj > __new() {
			::hx::ObjectPtr< PixelsARGB_Impl__obj > __this = new PixelsARGB_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PixelsARGB_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			PixelsARGB_Impl__obj *__this = (PixelsARGB_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PixelsARGB_Impl__obj), false, "hxd._Pixels.PixelsARGB_Impl_"));
			*(void **)__this = PixelsARGB_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PixelsARGB_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PixelsARGB_Impl_",79,f8,69,07); }

		static int getPixel( ::hxd::Pixels this1,int x,int y);
		static ::Dynamic getPixel_dyn();

		static void setPixel( ::hxd::Pixels this1,int x,int y,int v);
		static ::Dynamic setPixel_dyn();

		static  ::hxd::Pixels fromPixels( ::hxd::Pixels p);
		static ::Dynamic fromPixels_dyn();

};

} // end namespace hxd
} // end namespace _Pixels

#endif /* INCLUDED_hxd__Pixels_PixelsARGB_Impl_ */ 
