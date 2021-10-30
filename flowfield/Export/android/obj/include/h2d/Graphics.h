#ifndef INCLUDED_h2d_Graphics
#define INCLUDED_h2d_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
HX_DECLARE_CLASS1(h2d,Drawable)
HX_DECLARE_CLASS1(h2d,GPoint)
HX_DECLARE_CLASS1(h2d,Graphics)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(h2d,_Graphics,GraphicsContent)
HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS2(hxd,earcut,Earcut)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Graphics_obj : public  ::h2d::Drawable_obj
{
	public:
		typedef  ::h2d::Drawable_obj super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();

	public:
		enum { _hx_ClassId = 0x773a17e1 };

		void __construct( ::h2d::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Graphics")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Graphics"); }
		static ::hx::ObjectPtr< Graphics_obj > __new( ::h2d::Object parent);
		static ::hx::ObjectPtr< Graphics_obj > __alloc(::hx::Ctx *_hx_ctx, ::h2d::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Graphics_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Graphics",eb,b4,19,ec); }

		static void __boot();
		static  ::hxd::earcut::Earcut EARCUT;
		 ::h2d::_Graphics::GraphicsContent content;
		::Array< ::Dynamic> tmpPoints;
		int pindex;
		Float curR;
		Float curG;
		Float curB;
		Float curA;
		Float lineSize;
		Float lineR;
		Float lineG;
		Float lineB;
		Float lineA;
		bool doFill;
		Float xMin;
		Float yMin;
		Float xMax;
		Float yMax;
		Float ma;
		Float mb;
		Float mc;
		Float md;
		Float mx;
		Float my;
		 ::h2d::Tile tile;
		Float bevel;
		void onRemove();

		void clear();
		::Dynamic clear_dyn();

		void getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize);

		bool isConvex(::Array< ::Dynamic> points);
		::Dynamic isConvex_dyn();

		void flushLine(int start);
		::Dynamic flushLine_dyn();

		void flushFill(int i0);
		::Dynamic flushFill_dyn();

		void flush();
		::Dynamic flush_dyn();

		void beginFill(::hx::Null< int >  color,::hx::Null< Float >  alpha);
		::Dynamic beginFill_dyn();

		void beginTileFill( ::Dynamic dx, ::Dynamic dy, ::Dynamic scaleX, ::Dynamic scaleY, ::h2d::Tile tile);
		::Dynamic beginTileFill_dyn();

		void drawTile(Float x,Float y, ::h2d::Tile tile);
		::Dynamic drawTile_dyn();

		void lineStyle(::hx::Null< Float >  size,::hx::Null< int >  color,::hx::Null< Float >  alpha);
		::Dynamic lineStyle_dyn();

		void moveTo(Float x,Float y);
		::Dynamic moveTo_dyn();

		void endFill();
		::Dynamic endFill_dyn();

		void setColor(int color,::hx::Null< Float >  alpha);
		::Dynamic setColor_dyn();

		void drawRect(Float x,Float y,Float w,Float h);
		::Dynamic drawRect_dyn();

		void drawRoundedRect(Float x,Float y,Float w,Float h,Float radius,::hx::Null< int >  nsegments);
		::Dynamic drawRoundedRect_dyn();

		void drawCircle(Float cx,Float cy,Float radius,::hx::Null< int >  nsegments);
		::Dynamic drawCircle_dyn();

		void drawEllipse(Float cx,Float cy,Float radiusX,Float radiusY,::hx::Null< Float >  rotationAngle,::hx::Null< int >  nsegments);
		::Dynamic drawEllipse_dyn();

		void drawPie(Float cx,Float cy,Float radius,Float angleStart,Float angleLength,::hx::Null< int >  nsegments);
		::Dynamic drawPie_dyn();

		void drawPieInner(Float cx,Float cy,Float radius,Float innerRadius,Float angleStart,Float angleLength,::hx::Null< int >  nsegments);
		::Dynamic drawPieInner_dyn();

		void drawRectanglePie(Float cx,Float cy,Float width,Float height,Float angleStart,Float angleLength,::hx::Null< int >  nsegments);
		::Dynamic drawRectanglePie_dyn();

		void curveTo(Float bx,Float by,Float cx,Float cy);
		::Dynamic curveTo_dyn();

		void cubicCurveTo(Float bx,Float by,Float cx,Float cy,Float dx,Float dy,::hx::Null< int >  nsegments);
		::Dynamic cubicCurveTo_dyn();

		void lineTo(Float x,Float y);
		::Dynamic lineTo_dyn();

		void addVertex(Float x,Float y,Float r,Float g,Float b,Float a,::hx::Null< Float >  u,::hx::Null< Float >  v);
		::Dynamic addVertex_dyn();

		void draw( ::h2d::RenderContext ctx);

		void sync( ::h2d::RenderContext ctx);

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Graphics */ 
