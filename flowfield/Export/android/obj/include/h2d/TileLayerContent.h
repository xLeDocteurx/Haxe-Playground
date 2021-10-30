#ifndef INCLUDED_h2d_TileLayerContent
#define INCLUDED_h2d_TileLayerContent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS1(h2d,TileLayerContent)
HX_DECLARE_CLASS2(h2d,impl,BatchDrawState)
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES TileLayerContent_obj : public  ::h3d::prim::Primitive_obj
{
	public:
		typedef  ::h3d::prim::Primitive_obj super;
		typedef TileLayerContent_obj OBJ_;
		TileLayerContent_obj();

	public:
		enum { _hx_ClassId = 0x73643cb0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.TileLayerContent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.TileLayerContent"); }
		static ::hx::ObjectPtr< TileLayerContent_obj > __new();
		static ::hx::ObjectPtr< TileLayerContent_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TileLayerContent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TileLayerContent",d6,7f,de,f1); }

		::Array< Float > tmp;
		Float xMin;
		Float yMin;
		Float xMax;
		Float yMax;
		bool useAllocator;
		 ::h2d::impl::BatchDrawState state;
		void clear();
		::Dynamic clear_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		int triCount();

		void addColor(Float x,Float y, ::h3d::Vector color, ::h2d::Tile t);
		::Dynamic addColor_dyn();

		void add(Float x,Float y,Float r,Float g,Float b,Float a, ::h2d::Tile t);
		::Dynamic add_dyn();

		void addTransform(Float x,Float y,Float sx,Float sy,Float r, ::h3d::Vector c, ::h2d::Tile t);
		::Dynamic addTransform_dyn();

		void addPoint(Float x,Float y,int color);
		::Dynamic addPoint_dyn();

		void insertColor(int c);
		::Dynamic insertColor_dyn();

		void rectColor(Float x,Float y,Float w,Float h,int color);
		::Dynamic rectColor_dyn();

		void rectGradient(Float x,Float y,Float w,Float h,int ctl,int ctr,int cbl,int cbr);
		::Dynamic rectGradient_dyn();

		void fillArc(Float x,Float y,Float ray,int c,Float start,Float end);
		::Dynamic fillArc_dyn();

		void fillCircle(Float x,Float y,Float radius,int c);
		::Dynamic fillCircle_dyn();

		void circle(Float x,Float y,Float ray,Float size,int c);
		::Dynamic circle_dyn();

		void arc(Float x,Float y,Float ray,Float size,Float start,Float end,int c);
		::Dynamic arc_dyn();

		void alloc( ::h3d::Engine engine);

		void dispose();

		void flush();
		::Dynamic flush_dyn();

		void doRender( ::h2d::RenderContext ctx,int min,int len);
		::Dynamic doRender_dyn();

};

} // end namespace h2d

#endif /* INCLUDED_h2d_TileLayerContent */ 
