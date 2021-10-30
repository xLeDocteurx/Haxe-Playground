#ifndef INCLUDED_h2d_GPoint
#define INCLUDED_h2d_GPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_53b39f4fc661924b_16_new)
HX_DECLARE_CLASS1(h2d,GPoint)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES GPoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GPoint_obj OBJ_;
		GPoint_obj();

	public:
		enum { _hx_ClassId = 0x208dcae3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.GPoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.GPoint"); }

		inline static ::hx::ObjectPtr< GPoint_obj > __new() {
			::hx::ObjectPtr< GPoint_obj > __this = new GPoint_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GPoint_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GPoint_obj *__this = (GPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GPoint_obj), false, "h2d.GPoint"));
			*(void **)__this = GPoint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_53b39f4fc661924b_16_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GPoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GPoint",89,c2,13,bd); }

		Float x;
		Float y;
		Float r;
		Float g;
		Float b;
		Float a;
		void load(Float x,Float y,Float r,Float g,Float b,Float a);
		::Dynamic load_dyn();

};

} // end namespace h2d

#endif /* INCLUDED_h2d_GPoint */ 
