#ifndef INCLUDED_h2d_Kerning
#define INCLUDED_h2d_Kerning

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b926a7118f3b7537_25_new)
HX_DECLARE_CLASS1(h2d,Kerning)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Kerning_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Kerning_obj OBJ_;
		Kerning_obj();

	public:
		enum { _hx_ClassId = 0x24d62912 };

		void __construct(int c,Float o);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Kerning")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Kerning"); }

		inline static ::hx::ObjectPtr< Kerning_obj > __new(int c,Float o) {
			::hx::ObjectPtr< Kerning_obj > __this = new Kerning_obj();
			__this->__construct(c,o);
			return __this;
		}

		inline static ::hx::ObjectPtr< Kerning_obj > __alloc(::hx::Ctx *_hx_ctx,int c,Float o) {
			Kerning_obj *__this = (Kerning_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Kerning_obj), true, "h2d.Kerning"));
			*(void **)__this = Kerning_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b926a7118f3b7537_25_new)
HXLINE(  26)		( ( ::h2d::Kerning)(__this) )->prevChar = c;
HXLINE(  27)		( ( ::h2d::Kerning)(__this) )->offset = o;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Kerning_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Kerning",ac,e2,88,7d); }

		int prevChar;
		Float offset;
		 ::h2d::Kerning next;
};

} // end namespace h2d

#endif /* INCLUDED_h2d_Kerning */ 
