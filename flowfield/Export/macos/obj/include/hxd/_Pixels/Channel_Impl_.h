#ifndef INCLUDED_hxd__Pixels_Channel_Impl_
#define INCLUDED_hxd__Pixels_Channel_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,_Pixels,Channel_Impl_)

namespace hxd{
namespace _Pixels{


class HXCPP_CLASS_ATTRIBUTES Channel_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Channel_Impl__obj OBJ_;
		Channel_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2d84c2ab };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd._Pixels.Channel_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd._Pixels.Channel_Impl_"); }

		inline static ::hx::ObjectPtr< Channel_Impl__obj > __new() {
			::hx::ObjectPtr< Channel_Impl__obj > __this = new Channel_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Channel_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Channel_Impl__obj *__this = (Channel_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Channel_Impl__obj), false, "hxd._Pixels.Channel_Impl_"));
			*(void **)__this = Channel_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Channel_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Channel_Impl_",83,01,a5,77); }

		static void __boot();
		static int R;
		static int G;
		static int B;
		static int A;
		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

		static int fromInt(int v);
		static ::Dynamic fromInt_dyn();

};

} // end namespace hxd
} // end namespace _Pixels

#endif /* INCLUDED_hxd__Pixels_Channel_Impl_ */ 
