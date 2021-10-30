#ifndef INCLUDED_hxsl__Dce_Exit
#define INCLUDED_hxsl__Dce_Exit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_3026f1fdb5c6c73e_5_new)
HX_DECLARE_CLASS2(hxsl,_Dce,Exit)

namespace hxsl{
namespace _Dce{


class HXCPP_CLASS_ATTRIBUTES Exit_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Exit_obj OBJ_;
		Exit_obj();

	public:
		enum { _hx_ClassId = 0x3e5de4ce };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxsl._Dce.Exit")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxsl._Dce.Exit"); }

		inline static ::hx::ObjectPtr< Exit_obj > __new() {
			::hx::ObjectPtr< Exit_obj > __this = new Exit_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Exit_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Exit_obj *__this = (Exit_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Exit_obj), false, "hxsl._Dce.Exit"));
			*(void **)__this = Exit_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_3026f1fdb5c6c73e_5_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Exit_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Exit",3e,23,f7,2d); }

};

} // end namespace hxsl
} // end namespace _Dce

#endif /* INCLUDED_hxsl__Dce_Exit */ 
