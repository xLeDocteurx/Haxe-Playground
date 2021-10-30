#ifndef INCLUDED_hxd_fs__LoadedBitmap_LoadedBitmap_Impl_
#define INCLUDED_hxd_fs__LoadedBitmap_LoadedBitmap_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,BitmapData)
HX_DECLARE_CLASS3(hxd,fs,_LoadedBitmap,LoadedBitmap_Impl_)

namespace hxd{
namespace fs{
namespace _LoadedBitmap{


class HXCPP_CLASS_ATTRIBUTES LoadedBitmap_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LoadedBitmap_Impl__obj OBJ_;
		LoadedBitmap_Impl__obj();

	public:
		enum { _hx_ClassId = 0x52aec44a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.fs._LoadedBitmap.LoadedBitmap_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.fs._LoadedBitmap.LoadedBitmap_Impl_"); }

		inline static ::hx::ObjectPtr< LoadedBitmap_Impl__obj > __new() {
			::hx::ObjectPtr< LoadedBitmap_Impl__obj > __this = new LoadedBitmap_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LoadedBitmap_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			LoadedBitmap_Impl__obj *__this = (LoadedBitmap_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadedBitmap_Impl__obj), false, "hxd.fs._LoadedBitmap.LoadedBitmap_Impl_"));
			*(void **)__this = LoadedBitmap_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LoadedBitmap_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LoadedBitmap_Impl_",94,95,a6,e1); }

		static  ::hxd::BitmapData _new( ::hxd::BitmapData data);
		static ::Dynamic _new_dyn();

		static  ::hxd::BitmapData toBitmap( ::hxd::BitmapData this1);
		static ::Dynamic toBitmap_dyn();

		static  ::hxd::BitmapData toNative( ::hxd::BitmapData this1);
		static ::Dynamic toNative_dyn();

};

} // end namespace hxd
} // end namespace fs
} // end namespace _LoadedBitmap

#endif /* INCLUDED_hxd_fs__LoadedBitmap_LoadedBitmap_Impl_ */ 
