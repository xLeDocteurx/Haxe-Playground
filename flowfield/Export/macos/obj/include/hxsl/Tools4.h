#ifndef INCLUDED_hxsl_Tools4
#define INCLUDED_hxsl_Tools4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Tools4)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Tools4_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools4_obj OBJ_;
		Tools4_obj();

	public:
		enum { _hx_ClassId = 0x2783fa2e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxsl.Tools4")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxsl.Tools4"); }

		inline static ::hx::ObjectPtr< Tools4_obj > __new() {
			::hx::ObjectPtr< Tools4_obj > __this = new Tools4_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools4_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools4_obj *__this = (Tools4_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools4_obj), false, "hxsl.Tools4"));
			*(void **)__this = Tools4_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools4_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools4",d9,b9,25,c9); }

		static ::String toString( ::Dynamic e);
		static ::Dynamic toString_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Tools4 */ 
