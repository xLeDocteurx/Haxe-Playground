#ifndef INCLUDED_h2d_Object
#define INCLUDED_h2d_Object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,BlendMode)
HX_DECLARE_CLASS1(h2d,Drawable)
HX_DECLARE_CLASS1(h2d,Layers)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Scene)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h2d,col,Matrix)
HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS2(h2d,filter,Filter)
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS1(hxd,InteractiveScene)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_h2d_Object)
HX_DECLARE_CLASS1(hxsl,Output)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Object_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Object_obj OBJ_;
		Object_obj();

	public:
		enum { _hx_ClassId = 0x0af28419 };

		void __construct( ::h2d::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Object")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Object"); }
		static ::hx::ObjectPtr< Object_obj > __new( ::h2d::Object parent);
		static ::hx::ObjectPtr< Object_obj > __alloc(::hx::Ctx *_hx_ctx, ::h2d::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Object_obj();

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
		::String __ToString() const { return HX_("Object",df,f2,d3,49); }

		static  ::h2d::Drawable nullDrawable;
		::Array< ::Dynamic> children;
		 ::h2d::Object parentContainer;
		 ::h2d::Object parent;
		::String name;
		Float x;
		Float y;
		Float scaleX;
		Float scaleY;
		Float rotation;
		bool visible;
		Float alpha;
		 ::h2d::filter::Filter filter;
		 ::h2d::BlendMode blendMode;
		Float matA;
		Float matB;
		Float matC;
		Float matD;
		Float absX;
		Float absY;
		bool posChanged;
		bool allocated;
		int lastFrame;
		 ::h2d::col::Bounds getBounds( ::h2d::Object relativeTo, ::h2d::col::Bounds out);
		::Dynamic getBounds_dyn();

		 ::h2d::col::Bounds getSize( ::h2d::col::Bounds out);
		::Dynamic getSize_dyn();

		 ::h2d::col::Matrix getAbsPos();
		::Dynamic getAbsPos_dyn();

		bool contains( ::h2d::Object o);
		::Dynamic contains_dyn();

		 ::Dynamic find( ::Dynamic f);
		::Dynamic find_dyn();

		::cpp::VirtualArray findAll( ::Dynamic f,::cpp::VirtualArray arr);
		::Dynamic findAll_dyn();

		 ::h2d::filter::Filter set_filter( ::h2d::filter::Filter f);
		::Dynamic set_filter_dyn();

		virtual void getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize);
		::Dynamic getBoundsRec_dyn();

		void addBounds( ::h2d::Object relativeTo, ::h2d::col::Bounds out,Float dx,Float dy,Float width,Float height);
		::Dynamic addBounds_dyn();

		int getObjectsCount();
		::Dynamic getObjectsCount_dyn();

		 ::h2d::col::Point localToGlobal( ::h2d::col::Point pt);
		::Dynamic localToGlobal_dyn();

		 ::h2d::col::Point globalToLocal( ::h2d::col::Point pt);
		::Dynamic globalToLocal_dyn();

		 ::h2d::Scene getScene();
		::Dynamic getScene_dyn();

		bool set_visible(bool b);
		::Dynamic set_visible_dyn();

		virtual void addChild( ::h2d::Object s);
		::Dynamic addChild_dyn();

		virtual void addChildAt( ::h2d::Object s,int pos);
		::Dynamic addChildAt_dyn();

		void onContentChanged();
		::Dynamic onContentChanged_dyn();

		virtual void onHierarchyMoved(bool parentChanged);
		::Dynamic onHierarchyMoved_dyn();

		virtual void onAdd();
		::Dynamic onAdd_dyn();

		virtual void onRemove();
		::Dynamic onRemove_dyn();

		void getMatrix( ::h2d::col::Matrix m);
		::Dynamic getMatrix_dyn();

		virtual void removeChild( ::h2d::Object s);
		::Dynamic removeChild_dyn();

		void setParentContainer( ::h2d::Object c);
		::Dynamic setParentContainer_dyn();

		void removeChildren();
		::Dynamic removeChildren_dyn();

		void remove();
		::Dynamic remove_dyn();

		void drawTo( ::h3d::mat::Texture t);
		::Dynamic drawTo_dyn();

		void drawToTextures(::Array< ::Dynamic> texs,::Array< ::Dynamic> outputs);
		::Dynamic drawToTextures_dyn();

		virtual void draw( ::h2d::RenderContext ctx);
		::Dynamic draw_dyn();

		virtual void sync( ::h2d::RenderContext ctx);
		::Dynamic sync_dyn();

		void syncPos();
		::Dynamic syncPos_dyn();

		virtual void calcAbsPos();
		::Dynamic calcAbsPos_dyn();

		virtual void emitTile( ::h2d::RenderContext ctx, ::h2d::Tile tile);
		::Dynamic emitTile_dyn();

		virtual void clipBounds( ::h2d::RenderContext ctx, ::h2d::col::Bounds bounds);
		::Dynamic clipBounds_dyn();

		void drawFilters( ::h2d::RenderContext ctx);
		::Dynamic drawFilters_dyn();

		virtual void drawFiltered( ::h2d::RenderContext ctx, ::h2d::Tile tile);
		::Dynamic drawFiltered_dyn();

		virtual void drawRec( ::h2d::RenderContext ctx);
		::Dynamic drawRec_dyn();

		virtual void drawContent( ::h2d::RenderContext ctx);
		::Dynamic drawContent_dyn();

		Float set_x(Float v);
		::Dynamic set_x_dyn();

		Float set_y(Float v);
		::Dynamic set_y_dyn();

		Float set_scaleX(Float v);
		::Dynamic set_scaleX_dyn();

		Float set_scaleY(Float v);
		::Dynamic set_scaleY_dyn();

		Float set_rotation(Float v);
		::Dynamic set_rotation_dyn();

		void move(Float dx,Float dy);
		::Dynamic move_dyn();

		void setPosition(Float x,Float y);
		::Dynamic setPosition_dyn();

		void rotate(Float v);
		::Dynamic rotate_dyn();

		void scale(Float v);
		::Dynamic scale_dyn();

		void setScale(Float v);
		::Dynamic setScale_dyn();

		 ::h2d::Object getChildAt(int n);
		::Dynamic getChildAt_dyn();

		int getChildIndex( ::h2d::Object o);
		::Dynamic getChildIndex_dyn();

		 ::h2d::Object getObjectByName(::String name);
		::Dynamic getObjectByName_dyn();

		int get_numChildren();
		::Dynamic get_numChildren_dyn();

		 ::hxd::impl::ArrayIterator_h2d_Object iterator();
		::Dynamic iterator_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void contentChanged( ::h2d::Object s);
		::Dynamic contentChanged_dyn();

		virtual void constraintSize(Float maxWidth,Float maxHeight);
		::Dynamic constraintSize_dyn();

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Object */ 
