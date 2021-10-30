#ifndef INCLUDED_hxd_BitmapInnerDataImpl
#define INCLUDED_hxd_BitmapInnerDataImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_993a4754fada68f8_19_new)
HX_DECLARE_CLASS1(hxd,BitmapInnerDataImpl)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES BitmapInnerDataImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BitmapInnerDataImpl_obj OBJ_;
		BitmapInnerDataImpl_obj();

	public:
		enum { _hx_ClassId = 0x04a50745 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.BitmapInnerDataImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.BitmapInnerDataImpl"); }

		inline static ::hx::ObjectPtr< BitmapInnerDataImpl_obj > __new() {
			::hx::ObjectPtr< BitmapInnerDataImpl_obj > __this = new BitmapInnerDataImpl_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BitmapInnerDataImpl_obj > __alloc(::hx::Ctx *_hx_ctx) {
			BitmapInnerDataImpl_obj *__this = (BitmapInnerDataImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitmapInnerDataImpl_obj), true, "hxd.BitmapInnerDataImpl"));
			*(void **)__this = BitmapInnerDataImpl_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_993a4754fada68f8_19_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitmapInnerDataImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitmapInnerDataImpl",51,00,fe,4c); }

		::Array< int > pixels;
		int width;
		int height;
};

} // end namespace hxd

#endif /* INCLUDED_hxd_BitmapInnerDataImpl */ 
