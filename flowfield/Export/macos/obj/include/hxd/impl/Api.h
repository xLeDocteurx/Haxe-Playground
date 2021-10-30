#ifndef INCLUDED_hxd_impl_Api
#define INCLUDED_hxd_impl_Api

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,impl,Api)

namespace hxd{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES Api_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Api_obj OBJ_;
		Api_obj();

	public:
		enum { _hx_ClassId = 0x0f0bd46a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.impl.Api")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.impl.Api"); }

		inline static ::hx::ObjectPtr< Api_obj > __new() {
			::hx::ObjectPtr< Api_obj > __this = new Api_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Api_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Api_obj *__this = (Api_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Api_obj), false, "hxd.impl.Api"));
			*(void **)__this = Api_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Api_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Api",7a,b4,31,00); }

		static  ::Dynamic downcast( ::Dynamic value,::hx::Class c);
		static ::Dynamic downcast_dyn();

		static bool isOfType( ::Dynamic v, ::Dynamic t);
		static ::Dynamic isOfType_dyn();

};

} // end namespace hxd
} // end namespace impl

#endif /* INCLUDED_hxd_impl_Api */ 
