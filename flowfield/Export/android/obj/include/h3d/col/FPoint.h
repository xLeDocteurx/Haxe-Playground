#ifndef INCLUDED_h3d_col_FPoint
#define INCLUDED_h3d_col_FPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,col,FPoint)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES FPoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FPoint_obj OBJ_;
		FPoint_obj();

	public:
		enum { _hx_ClassId = 0x1a6bfa51 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.col.FPoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.col.FPoint"); }
		static ::hx::ObjectPtr< FPoint_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z);
		static ::hx::ObjectPtr< FPoint_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FPoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FPoint",2a,66,b8,56); }

		Float x;
		Float y;
		Float z;
		 ::h3d::col::FPoint sub( ::h3d::col::FPoint p);
		::Dynamic sub_dyn();

		 ::h3d::col::FPoint add( ::h3d::col::FPoint p);
		::Dynamic add_dyn();

		 ::h3d::col::FPoint cross( ::h3d::col::FPoint p);
		::Dynamic cross_dyn();

		Float dot( ::h3d::col::FPoint p);
		::Dynamic dot_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_FPoint */ 
