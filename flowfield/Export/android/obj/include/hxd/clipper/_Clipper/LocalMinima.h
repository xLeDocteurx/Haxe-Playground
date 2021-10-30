#ifndef INCLUDED_hxd_clipper__Clipper_LocalMinima
#define INCLUDED_hxd_clipper__Clipper_LocalMinima

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_1f809a8a4aed1595_237_new)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,LocalMinima)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,TEdge)

namespace hxd{
namespace clipper{
namespace _Clipper{


class HXCPP_CLASS_ATTRIBUTES LocalMinima_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LocalMinima_obj OBJ_;
		LocalMinima_obj();

	public:
		enum { _hx_ClassId = 0x1187c28f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper._Clipper.LocalMinima")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper._Clipper.LocalMinima"); }

		inline static ::hx::ObjectPtr< LocalMinima_obj > __new() {
			::hx::ObjectPtr< LocalMinima_obj > __this = new LocalMinima_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LocalMinima_obj > __alloc(::hx::Ctx *_hx_ctx) {
			LocalMinima_obj *__this = (LocalMinima_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocalMinima_obj), true, "hxd.clipper._Clipper.LocalMinima"));
			*(void **)__this = LocalMinima_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_1f809a8a4aed1595_237_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LocalMinima_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LocalMinima",56,f9,6b,f4); }

		int y;
		 ::hxd::clipper::_Clipper::TEdge leftBound;
		 ::hxd::clipper::_Clipper::TEdge rightBound;
		 ::hxd::clipper::_Clipper::LocalMinima next;
};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_LocalMinima */ 
