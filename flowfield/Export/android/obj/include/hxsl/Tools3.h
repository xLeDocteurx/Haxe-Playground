#ifndef INCLUDED_hxsl_Tools3
#define INCLUDED_hxsl_Tools3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Tools3)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Tools3_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools3_obj OBJ_;
		Tools3_obj();

	public:
		enum { _hx_ClassId = 0x2783fa2d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxsl.Tools3")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxsl.Tools3"); }

		inline static ::hx::ObjectPtr< Tools3_obj > __new() {
			::hx::ObjectPtr< Tools3_obj > __this = new Tools3_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools3_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools3_obj *__this = (Tools3_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools3_obj), false, "hxsl.Tools3"));
			*(void **)__this = Tools3_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools3_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools3",d8,b9,25,c9); }

		static ::String toString( ::Dynamic s);
		static ::Dynamic toString_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Tools3 */ 
