#ifndef INCLUDED_h2d_filter_Filter
#define INCLUDED_h2d_filter_Filter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h2d,filter,Filter)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)

namespace h2d{
namespace filter{


class HXCPP_CLASS_ATTRIBUTES Filter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Filter_obj OBJ_;
		Filter_obj();

	public:
		enum { _hx_ClassId = 0x5824e0aa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.filter.Filter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.filter.Filter"); }
		static ::hx::ObjectPtr< Filter_obj > __new();
		static ::hx::ObjectPtr< Filter_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Filter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Filter",d8,93,c9,b9); }

		bool autoBounds;
		Float boundsExtend;
		bool smooth;
		bool enable;
		bool get_enable();
		::Dynamic get_enable_dyn();

		bool set_enable(bool v);
		::Dynamic set_enable_dyn();

		void sync( ::h2d::RenderContext ctx, ::h2d::Object s);
		::Dynamic sync_dyn();

		void bind( ::h2d::Object s);
		::Dynamic bind_dyn();

		void unbind( ::h2d::Object s);
		::Dynamic unbind_dyn();

		void getBounds( ::h2d::Object s, ::h2d::col::Bounds bounds);
		::Dynamic getBounds_dyn();

		 ::h2d::Tile draw( ::h2d::RenderContext ctx, ::h2d::Tile input);
		::Dynamic draw_dyn();

};

} // end namespace h2d
} // end namespace filter

#endif /* INCLUDED_h2d_filter_Filter */ 
