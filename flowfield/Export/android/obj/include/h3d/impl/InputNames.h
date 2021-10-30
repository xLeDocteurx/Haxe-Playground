#ifndef INCLUDED_h3d_impl_InputNames
#define INCLUDED_h3d_impl_InputNames

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_0e69cf5f14669f59_123_new)
HX_DECLARE_CLASS2(h3d,impl,InputNames)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace h3d{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES InputNames_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InputNames_obj OBJ_;
		InputNames_obj();

	public:
		enum { _hx_ClassId = 0x0dd2bab3 };

		void __construct(::Array< ::String > names);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.impl.InputNames")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.impl.InputNames"); }

		inline static ::hx::ObjectPtr< InputNames_obj > __new(::Array< ::String > names) {
			::hx::ObjectPtr< InputNames_obj > __this = new InputNames_obj();
			__this->__construct(names);
			return __this;
		}

		inline static ::hx::ObjectPtr< InputNames_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::String > names) {
			InputNames_obj *__this = (InputNames_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InputNames_obj), true, "h3d.impl.InputNames"));
			*(void **)__this = InputNames_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_0e69cf5f14669f59_123_new)
HXLINE( 124)		( ( ::h3d::impl::InputNames)(__this) )->id = ::h3d::impl::InputNames_obj::UID++;
HXLINE( 125)		( ( ::h3d::impl::InputNames)(__this) )->names = names;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InputNames_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InputNames",7e,5b,70,0b); }

		static void __boot();
		static int UID;
		static  ::haxe::ds::StringMap CACHE;
		static  ::h3d::impl::InputNames get(::Array< ::String > names);
		static ::Dynamic get_dyn();

		int id;
		::Array< ::String > names;
};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_InputNames */ 
