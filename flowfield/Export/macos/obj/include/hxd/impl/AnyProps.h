#ifndef INCLUDED_hxd_impl_AnyProps
#define INCLUDED_hxd_impl_AnyProps

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,impl,AnyProps)

namespace hxd{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES AnyProps_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnyProps_obj OBJ_;
		AnyProps_obj();

	public:
		enum { _hx_ClassId = 0x531b0df8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.impl.AnyProps")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.impl.AnyProps"); }

		inline static ::hx::ObjectPtr< AnyProps_obj > __new() {
			::hx::ObjectPtr< AnyProps_obj > __this = new AnyProps_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AnyProps_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AnyProps_obj *__this = (AnyProps_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnyProps_obj), true, "hxd.impl.AnyProps"));
			*(void **)__this = AnyProps_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnyProps_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnyProps",04,01,f4,20); }

		 ::Dynamic props;
		 ::Dynamic set_props( ::Dynamic p);
		::Dynamic set_props_dyn();

		void setDefaultProps(::String kind);
		::Dynamic setDefaultProps_dyn();

		virtual  ::Dynamic getDefaultProps(::String kind);
		::Dynamic getDefaultProps_dyn();

		virtual void refreshProps();
		::Dynamic refreshProps_dyn();

};

} // end namespace hxd
} // end namespace impl

#endif /* INCLUDED_hxd_impl_AnyProps */ 
