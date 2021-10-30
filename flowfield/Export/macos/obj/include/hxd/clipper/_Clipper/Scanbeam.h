#ifndef INCLUDED_hxd_clipper__Clipper_Scanbeam
#define INCLUDED_hxd_clipper__Clipper_Scanbeam

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c68ff28cf4567391_244_new)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,Scanbeam)

namespace hxd{
namespace clipper{
namespace _Clipper{


class HXCPP_CLASS_ATTRIBUTES Scanbeam_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Scanbeam_obj OBJ_;
		Scanbeam_obj();

	public:
		enum { _hx_ClassId = 0x7738c6b3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper._Clipper.Scanbeam")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper._Clipper.Scanbeam"); }

		inline static ::hx::ObjectPtr< Scanbeam_obj > __new() {
			::hx::ObjectPtr< Scanbeam_obj > __this = new Scanbeam_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Scanbeam_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Scanbeam_obj *__this = (Scanbeam_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Scanbeam_obj), true, "hxd.clipper._Clipper.Scanbeam"));
			*(void **)__this = Scanbeam_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c68ff28cf4567391_244_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Scanbeam_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Scanbeam",8c,9d,ed,ff); }

		int y;
		 ::hxd::clipper::_Clipper::Scanbeam next;
};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_Scanbeam */ 
