#ifndef INCLUDED_h2d_Bitmap
#define INCLUDED_h2d_Bitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
HX_DECLARE_CLASS1(h2d,Bitmap)
HX_DECLARE_CLASS1(h2d,Drawable)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Bitmap_obj : public  ::h2d::Drawable_obj
{
	public:
		typedef  ::h2d::Drawable_obj super;
		typedef Bitmap_obj OBJ_;
		Bitmap_obj();

	public:
		enum { _hx_ClassId = 0x09dcc89d };

		void __construct( ::h2d::Tile tile, ::h2d::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Bitmap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Bitmap"); }
		static ::hx::ObjectPtr< Bitmap_obj > __new( ::h2d::Tile tile, ::h2d::Object parent);
		static ::hx::ObjectPtr< Bitmap_obj > __alloc(::hx::Ctx *_hx_ctx, ::h2d::Tile tile, ::h2d::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Bitmap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Bitmap",0f,84,a0,25); }

		 ::h2d::Tile tile;
		 ::Dynamic width;
		 ::Dynamic height;
		void getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize);

		 ::Dynamic set_width( ::Dynamic w);
		::Dynamic set_width_dyn();

		 ::Dynamic set_height( ::Dynamic h);
		::Dynamic set_height_dyn();

		 ::h2d::Tile set_tile( ::h2d::Tile t);
		::Dynamic set_tile_dyn();

		void draw( ::h2d::RenderContext ctx);

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Bitmap */ 
