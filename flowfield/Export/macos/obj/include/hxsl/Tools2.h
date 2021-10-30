#ifndef INCLUDED_hxsl_Tools2
#define INCLUDED_hxsl_Tools2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,TGlobal)
HX_DECLARE_CLASS1(hxsl,Tools2)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Tools2_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools2_obj OBJ_;
		Tools2_obj();

	public:
		enum { _hx_ClassId = 0x2783fa2c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxsl.Tools2")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxsl.Tools2"); }

		inline static ::hx::ObjectPtr< Tools2_obj > __new() {
			::hx::ObjectPtr< Tools2_obj > __this = new Tools2_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools2_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools2_obj *__this = (Tools2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools2_obj), false, "hxsl.Tools2"));
			*(void **)__this = Tools2_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools2_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools2",d7,b9,25,c9); }

		static ::String toString( ::hxsl::TGlobal g);
		static ::Dynamic toString_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Tools2 */ 
