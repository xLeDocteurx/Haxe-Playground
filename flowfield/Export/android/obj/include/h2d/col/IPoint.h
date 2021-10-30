#ifndef INCLUDED_h2d_col_IPoint
#define INCLUDED_h2d_col_IPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS2(h2d,col,Point)

namespace h2d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES IPoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IPoint_obj OBJ_;
		IPoint_obj();

	public:
		enum { _hx_ClassId = 0x7a7da431 };

		void __construct(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col.IPoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col.IPoint"); }
		static ::hx::ObjectPtr< IPoint_obj > __new(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y);
		static ::hx::ObjectPtr< IPoint_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_x,::hx::Null< int >  __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IPoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IPoint",47,7b,ca,89); }

		int x;
		int y;
		void load( ::h2d::col::IPoint p);
		::Dynamic load_dyn();

		void scale(int v);
		::Dynamic scale_dyn();

		 ::h2d::col::IPoint multiply(int v);
		::Dynamic multiply_dyn();

		int distanceSq( ::h2d::col::IPoint p);
		::Dynamic distanceSq_dyn();

		Float distance( ::h2d::col::IPoint p);
		::Dynamic distance_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::h2d::col::IPoint sub( ::h2d::col::IPoint p);
		::Dynamic sub_dyn();

		 ::h2d::col::IPoint add( ::h2d::col::IPoint p);
		::Dynamic add_dyn();

		bool equals( ::h2d::col::IPoint other);
		::Dynamic equals_dyn();

		int dot( ::h2d::col::IPoint p);
		::Dynamic dot_dyn();

		int lengthSq();
		::Dynamic lengthSq_dyn();

		Float length();
		::Dynamic length_dyn();

		void set(::hx::Null< int >  x,::hx::Null< int >  y);
		::Dynamic set_dyn();

		 ::h2d::col::IPoint clone();
		::Dynamic clone_dyn();

		int cross( ::h2d::col::IPoint p);
		::Dynamic cross_dyn();

		 ::h2d::col::Point toPoint(::hx::Null< Float >  scale);
		::Dynamic toPoint_dyn();

};

} // end namespace h2d
} // end namespace col

#endif /* INCLUDED_h2d_col_IPoint */ 
