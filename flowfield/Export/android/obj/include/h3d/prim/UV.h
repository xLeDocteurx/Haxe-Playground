#ifndef INCLUDED_h3d_prim_UV
#define INCLUDED_h3d_prim_UV

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,prim,UV)

namespace h3d{
namespace prim{


class HXCPP_CLASS_ATTRIBUTES UV_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef UV_obj OBJ_;
		UV_obj();

	public:
		enum { _hx_ClassId = 0x6d595b00 };

		void __construct(Float u,Float v);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.prim.UV")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.prim.UV"); }
		static ::hx::ObjectPtr< UV_obj > __new(Float u,Float v);
		static ::hx::ObjectPtr< UV_obj > __alloc(::hx::Ctx *_hx_ctx,Float u,Float v);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UV_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UV",61,4a,00,00); }

		Float u;
		Float v;
		 ::h3d::prim::UV clone();
		::Dynamic clone_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace h3d
} // end namespace prim

#endif /* INCLUDED_h3d_prim_UV */ 
