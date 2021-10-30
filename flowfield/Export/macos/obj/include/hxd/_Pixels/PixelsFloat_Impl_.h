#ifndef INCLUDED_hxd__Pixels_PixelsFloat_Impl_
#define INCLUDED_hxd__Pixels_PixelsFloat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS1(hxd,Pixels)
HX_DECLARE_CLASS2(hxd,_Pixels,PixelsFloat_Impl_)

namespace hxd{
namespace _Pixels{


class HXCPP_CLASS_ATTRIBUTES PixelsFloat_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PixelsFloat_Impl__obj OBJ_;
		PixelsFloat_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0f23304f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd._Pixels.PixelsFloat_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd._Pixels.PixelsFloat_Impl_"); }

		inline static ::hx::ObjectPtr< PixelsFloat_Impl__obj > __new() {
			::hx::ObjectPtr< PixelsFloat_Impl__obj > __this = new PixelsFloat_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PixelsFloat_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			PixelsFloat_Impl__obj *__this = (PixelsFloat_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PixelsFloat_Impl__obj), false, "hxd._Pixels.PixelsFloat_Impl_"));
			*(void **)__this = PixelsFloat_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PixelsFloat_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PixelsFloat_Impl_",ef,2c,c3,dc); }

		static  ::h3d::Vector getPixelF( ::hxd::Pixels this1,int x,int y, ::h3d::Vector v);
		static ::Dynamic getPixelF_dyn();

		static void setPixelF( ::hxd::Pixels this1,int x,int y, ::h3d::Vector v);
		static ::Dynamic setPixelF_dyn();

		static  ::hxd::Pixels fromPixels( ::hxd::Pixels p);
		static ::Dynamic fromPixels_dyn();

};

} // end namespace hxd
} // end namespace _Pixels

#endif /* INCLUDED_hxd__Pixels_PixelsFloat_Impl_ */ 
