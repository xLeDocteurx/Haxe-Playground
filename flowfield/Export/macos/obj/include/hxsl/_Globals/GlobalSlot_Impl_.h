#ifndef INCLUDED_hxsl__Globals_GlobalSlot_Impl_
#define INCLUDED_hxsl__Globals_GlobalSlot_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS2(hxsl,_Globals,GlobalSlot_Impl_)

namespace hxsl{
namespace _Globals{


class HXCPP_CLASS_ATTRIBUTES GlobalSlot_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GlobalSlot_Impl__obj OBJ_;
		GlobalSlot_Impl__obj();

	public:
		enum { _hx_ClassId = 0x11732203 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxsl._Globals.GlobalSlot_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxsl._Globals.GlobalSlot_Impl_"); }

		inline static ::hx::ObjectPtr< GlobalSlot_Impl__obj > __new() {
			::hx::ObjectPtr< GlobalSlot_Impl__obj > __this = new GlobalSlot_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GlobalSlot_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GlobalSlot_Impl__obj *__this = (GlobalSlot_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlobalSlot_Impl__obj), false, "hxsl._Globals.GlobalSlot_Impl_"));
			*(void **)__this = GlobalSlot_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GlobalSlot_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GlobalSlot_Impl_",81,78,d7,c3); }

		static int _new(::String name);
		static ::Dynamic _new_dyn();

		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

		static void set(int this1, ::hxsl::Globals globals, ::Dynamic v);
		static ::Dynamic set_dyn();

		static  ::Dynamic get(int this1, ::hxsl::Globals globals);
		static ::Dynamic get_dyn();

};

} // end namespace hxsl
} // end namespace _Globals

#endif /* INCLUDED_hxsl__Globals_GlobalSlot_Impl_ */ 
