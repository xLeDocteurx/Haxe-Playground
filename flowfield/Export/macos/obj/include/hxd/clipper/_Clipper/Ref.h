#ifndef INCLUDED_hxd_clipper__Clipper_Ref
#define INCLUDED_hxd_clipper__Clipper_Ref

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c30a43b174ced3a8_168_new)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,Ref)

namespace hxd{
namespace clipper{
namespace _Clipper{


class HXCPP_CLASS_ATTRIBUTES Ref_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Ref_obj OBJ_;
		Ref_obj();

	public:
		enum { _hx_ClassId = 0x08e694c0 };

		void __construct( ::Dynamic v);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper._Clipper.Ref")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper._Clipper.Ref"); }

		inline static ::hx::ObjectPtr< Ref_obj > __new( ::Dynamic v) {
			::hx::ObjectPtr< Ref_obj > __this = new Ref_obj();
			__this->__construct(v);
			return __this;
		}

		inline static ::hx::ObjectPtr< Ref_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic v) {
			Ref_obj *__this = (Ref_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Ref_obj), true, "hxd.clipper._Clipper.Ref"));
			*(void **)__this = Ref_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c30a43b174ced3a8_168_new)
HXDLIN( 168)		( ( ::hxd::clipper::_Clipper::Ref)(__this) )->val = v;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Ref_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Ref",33,91,3e,00); }

		 ::Dynamic val;
};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_Ref */ 
