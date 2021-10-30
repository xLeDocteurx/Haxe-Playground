#ifndef INCLUDED_h2d_col__Segments_Segments_Impl_
#define INCLUDED_h2d_col__Segments_Segments_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS2(h2d,col,Segment)
HX_DECLARE_CLASS3(h2d,col,_Segments,Segments_Impl_)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_h2d_col_Segment)

namespace h2d{
namespace col{
namespace _Segments{


class HXCPP_CLASS_ATTRIBUTES Segments_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Segments_Impl__obj OBJ_;
		Segments_Impl__obj();

	public:
		enum { _hx_ClassId = 0x582a3b19 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col._Segments.Segments_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col._Segments.Segments_Impl_"); }

		inline static ::hx::ObjectPtr< Segments_Impl__obj > __new() {
			::hx::ObjectPtr< Segments_Impl__obj > __this = new Segments_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Segments_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Segments_Impl__obj *__this = (Segments_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Segments_Impl__obj), false, "h2d.col._Segments.Segments_Impl_"));
			*(void **)__this = Segments_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Segments_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Segments_Impl_",20,06,82,5c); }

		static ::Array< ::Dynamic> get_segments(::Array< ::Dynamic> this1);
		static ::Dynamic get_segments_dyn();

		static int get_length(::Array< ::Dynamic> this1);
		static ::Dynamic get_length_dyn();

		static  ::hxd::impl::ArrayIterator_h2d_col_Segment iterator(::Array< ::Dynamic> this1);
		static ::Dynamic iterator_dyn();

		static bool containsPoint(::Array< ::Dynamic> this1, ::h2d::col::Point p,bool isConvex);
		static ::Dynamic containsPoint_dyn();

		static ::Array< ::Dynamic> toPolygon(::Array< ::Dynamic> this1);
		static ::Dynamic toPolygon_dyn();

		static  ::h2d::col::Point project(::Array< ::Dynamic> this1, ::h2d::col::Point p);
		static ::Dynamic project_dyn();

		static Float distanceSq(::Array< ::Dynamic> this1, ::h2d::col::Point p);
		static ::Dynamic distanceSq_dyn();

		static Float distance(::Array< ::Dynamic> this1, ::h2d::col::Point p);
		static ::Dynamic distance_dyn();

};

} // end namespace h2d
} // end namespace col
} // end namespace _Segments

#endif /* INCLUDED_h2d_col__Segments_Segments_Impl_ */ 
