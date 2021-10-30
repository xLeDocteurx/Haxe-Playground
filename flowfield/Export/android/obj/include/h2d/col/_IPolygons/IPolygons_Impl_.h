#ifndef INCLUDED_h2d_col__IPolygons_IPolygons_Impl_
#define INCLUDED_h2d_col__IPolygons_IPolygons_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,IBounds)
HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS2(h2d,col,OffsetKind)
HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS3(h2d,col,_IPolygons,IPolygons_Impl_)
HX_DECLARE_CLASS2(hxd,clipper,ClipType)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_h2d_col_IPolygon)

namespace h2d{
namespace col{
namespace _IPolygons{


class HXCPP_CLASS_ATTRIBUTES IPolygons_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IPolygons_Impl__obj OBJ_;
		IPolygons_Impl__obj();

	public:
		enum { _hx_ClassId = 0x1e7a566d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col._IPolygons.IPolygons_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col._IPolygons.IPolygons_Impl_"); }

		inline static ::hx::ObjectPtr< IPolygons_Impl__obj > __new() {
			::hx::ObjectPtr< IPolygons_Impl__obj > __this = new IPolygons_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< IPolygons_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			IPolygons_Impl__obj *__this = (IPolygons_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IPolygons_Impl__obj), false, "h2d.col._IPolygons.IPolygons_Impl_"));
			*(void **)__this = IPolygons_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IPolygons_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IPolygons_Impl_",42,58,41,99); }

		static int get_length(::Array< ::Dynamic> this1);
		static ::Dynamic get_length_dyn();

		static ::Array< ::Dynamic> get_polygons(::Array< ::Dynamic> this1);
		static ::Dynamic get_polygons_dyn();

		static ::Array< ::Dynamic> _new(::Array< ::Dynamic> polygons);
		static ::Dynamic _new_dyn();

		static  ::hxd::impl::ArrayIterator_h2d_col_IPolygon iterator(::Array< ::Dynamic> this1);
		static ::Dynamic iterator_dyn();

		static ::Array< ::Dynamic> toPolygons(::Array< ::Dynamic> this1,::hx::Null< Float >  scale);
		static ::Dynamic toPolygons_dyn();

		static  ::h2d::col::IBounds getBounds(::Array< ::Dynamic> this1, ::h2d::col::IBounds b);
		static ::Dynamic getBounds_dyn();

		static ::Array< ::Dynamic> _hx_union(::Array< ::Dynamic> this1,::Array< ::Dynamic> p,::hx::Null< bool >  withHoles);
		static ::Dynamic _hx_union_dyn();

		static ::Array< ::Dynamic> intersection(::Array< ::Dynamic> this1,::Array< ::Dynamic> p,::hx::Null< bool >  withHoles);
		static ::Dynamic intersection_dyn();

		static ::Array< ::Dynamic> subtraction(::Array< ::Dynamic> this1,::Array< ::Dynamic> p,::hx::Null< bool >  withHoles);
		static ::Dynamic subtraction_dyn();

		static ::Array< ::Dynamic> offset(::Array< ::Dynamic> this1,Float delta, ::h2d::col::OffsetKind kind,::hx::Null< bool >  withHoles);
		static ::Dynamic offset_dyn();

		static ::Array< ::Dynamic> clipperOp(::Array< ::Dynamic> this1,::Array< ::Dynamic> p, ::hxd::clipper::ClipType op,bool withHoles);
		static ::Dynamic clipperOp_dyn();

		static bool contains(::Array< ::Dynamic> this1, ::h2d::col::Point p,::hx::Null< bool >  isConvex);
		static ::Dynamic contains_dyn();

		static ::Array< ::Dynamic> optimize(::Array< ::Dynamic> this1,Float epsilon);
		static ::Dynamic optimize_dyn();

};

} // end namespace h2d
} // end namespace col
} // end namespace _IPolygons

#endif /* INCLUDED_h2d_col__IPolygons_IPolygons_Impl_ */ 
