#ifndef INCLUDED_hxd__Pixels_PixelsFloatRGBA_Impl_
#define INCLUDED_hxd__Pixels_PixelsFloatRGBA_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS1(hxd,Pixels)
HX_DECLARE_CLASS2(hxd,_Pixels,PixelsFloatRGBA_Impl_)

namespace hxd{
namespace _Pixels{


class HXCPP_CLASS_ATTRIBUTES PixelsFloatRGBA_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PixelsFloatRGBA_Impl__obj OBJ_;
		PixelsFloatRGBA_Impl__obj();

	public:
		enum { _hx_ClassId = 0x1ea7414b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd._Pixels.PixelsFloatRGBA_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd._Pixels.PixelsFloatRGBA_Impl_"); }

		inline static ::hx::ObjectPtr< PixelsFloatRGBA_Impl__obj > __new() {
			::hx::ObjectPtr< PixelsFloatRGBA_Impl__obj > __this = new PixelsFloatRGBA_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PixelsFloatRGBA_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			PixelsFloatRGBA_Impl__obj *__this = (PixelsFloatRGBA_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PixelsFloatRGBA_Impl__obj), false, "hxd._Pixels.PixelsFloatRGBA_Impl_"));
			*(void **)__this = PixelsFloatRGBA_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PixelsFloatRGBA_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PixelsFloatRGBA_Impl_",23,18,e6,fb); }

		static  ::h3d::Vector getPixelF( ::hxd::Pixels this1,int x,int y, ::h3d::Vector v);
		static ::Dynamic getPixelF_dyn();

		static void setPixelF( ::hxd::Pixels this1,int x,int y, ::h3d::Vector v);
		static ::Dynamic setPixelF_dyn();

		static  ::hxd::Pixels fromPixels( ::hxd::Pixels p);
		static ::Dynamic fromPixels_dyn();

};

} // end namespace hxd
} // end namespace _Pixels

#endif /* INCLUDED_hxd__Pixels_PixelsFloatRGBA_Impl_ */ 
