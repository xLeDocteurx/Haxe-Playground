#ifndef INCLUDED_h2d_col__Polygons_Polygons_Impl_
#define INCLUDED_h2d_col__Polygons_Polygons_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h2d,col,Collider)
HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS2(h2d,col,PolygonCollider)
HX_DECLARE_CLASS3(h2d,col,_Polygons,Polygons_Impl_)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_h2d_col_Polygon)

namespace h2d{
namespace col{
namespace _Polygons{


class HXCPP_CLASS_ATTRIBUTES Polygons_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Polygons_Impl__obj OBJ_;
		Polygons_Impl__obj();

	public:
		enum { _hx_ClassId = 0x237d3c8b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col._Polygons.Polygons_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col._Polygons.Polygons_Impl_"); }

		inline static ::hx::ObjectPtr< Polygons_Impl__obj > __new() {
			::hx::ObjectPtr< Polygons_Impl__obj > __this = new Polygons_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Polygons_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Polygons_Impl__obj *__this = (Polygons_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Polygons_Impl__obj), false, "h2d.col._Polygons.Polygons_Impl_"));
			*(void **)__this = Polygons_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Polygons_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Polygons_Impl_",39,ca,80,1d); }

		static int get_length(::Array< ::Dynamic> this1);
		static ::Dynamic get_length_dyn();

		static ::Array< ::Dynamic> get_polygons(::Array< ::Dynamic> this1);
		static ::Dynamic get_polygons_dyn();

		static ::Array< ::Dynamic> _new(::Array< ::Dynamic> polygons);
		static ::Dynamic _new_dyn();

		static  ::hxd::impl::ArrayIterator_h2d_col_Polygon iterator(::Array< ::Dynamic> this1);
		static ::Dynamic iterator_dyn();

		static ::Array< ::Dynamic> toIPolygons(::Array< ::Dynamic> this1,::hx::Null< Float >  scale);
		static ::Dynamic toIPolygons_dyn();

		static  ::h2d::col::Bounds getBounds(::Array< ::Dynamic> this1, ::h2d::col::Bounds b);
		static ::Dynamic getBounds_dyn();

		static  ::h2d::col::PolygonCollider getCollider(::Array< ::Dynamic> this1,::hx::Null< bool >  isConvex);
		static ::Dynamic getCollider_dyn();

		static bool contains(::Array< ::Dynamic> this1, ::h2d::col::Point p,::hx::Null< bool >  isConvex);
		static ::Dynamic contains_dyn();

		static ::Array< ::Dynamic> optimize(::Array< ::Dynamic> this1,Float epsilon);
		static ::Dynamic optimize_dyn();

};

} // end namespace h2d
} // end namespace col
} // end namespace _Polygons

#endif /* INCLUDED_h2d_col__Polygons_Polygons_Impl_ */ 
