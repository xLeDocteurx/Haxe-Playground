#ifndef INCLUDED_h2d_TileGroup
#define INCLUDED_h2d_TileGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
HX_DECLARE_CLASS1(h2d,Drawable)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS1(h2d,TileGroup)
HX_DECLARE_CLASS1(h2d,TileLayerContent)
HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES TileGroup_obj : public  ::h2d::Drawable_obj
{
	public:
		typedef  ::h2d::Drawable_obj super;
		typedef TileGroup_obj OBJ_;
		TileGroup_obj();

	public:
		enum { _hx_ClassId = 0x1f972dbf };

		void __construct( ::h2d::Tile t, ::h2d::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.TileGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.TileGroup"); }
		static ::hx::ObjectPtr< TileGroup_obj > __new( ::h2d::Tile t, ::h2d::Object parent);
		static ::hx::ObjectPtr< TileGroup_obj > __alloc(::hx::Ctx *_hx_ctx, ::h2d::Tile t, ::h2d::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TileGroup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TileGroup",11,f1,22,c7); }

		 ::h2d::TileLayerContent content;
		 ::h3d::Vector curColor;
		 ::h2d::Tile tile;
		int rangeMin;
		int rangeMax;
		void getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize);

		void clear();
		::Dynamic clear_dyn();

		void invalidate();
		::Dynamic invalidate_dyn();

		int count();
		::Dynamic count_dyn();

		void onRemove();

		void setDefaultColor(int rgb,::hx::Null< Float >  alpha);
		::Dynamic setDefaultColor_dyn();

		void add(Float x,Float y, ::h2d::Tile t);
		::Dynamic add_dyn();

		void addColor(Float x,Float y,Float r,Float g,Float b,Float a, ::h2d::Tile t);
		::Dynamic addColor_dyn();

		void addAlpha(Float x,Float y,Float a, ::h2d::Tile t);
		::Dynamic addAlpha_dyn();

		void addTransform(Float x,Float y,Float sx,Float sy,Float r, ::h2d::Tile t);
		::Dynamic addTransform_dyn();

		void draw( ::h2d::RenderContext ctx);

		void sync( ::h2d::RenderContext ctx);

		void drawWith( ::h2d::RenderContext ctx, ::h2d::Drawable obj);
		::Dynamic drawWith_dyn();

};

} // end namespace h2d

#endif /* INCLUDED_h2d_TileGroup */ 
