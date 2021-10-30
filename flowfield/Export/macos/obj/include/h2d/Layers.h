#ifndef INCLUDED_h2d_Layers
#define INCLUDED_h2d_Layers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
HX_DECLARE_CLASS1(h2d,Layers)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Layers_obj : public  ::h2d::Object_obj
{
	public:
		typedef  ::h2d::Object_obj super;
		typedef Layers_obj OBJ_;
		Layers_obj();

	public:
		enum { _hx_ClassId = 0x0828b434 };

		void __construct( ::h2d::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Layers")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Layers"); }
		static ::hx::ObjectPtr< Layers_obj > __new( ::h2d::Object parent);
		static ::hx::ObjectPtr< Layers_obj > __alloc(::hx::Ctx *_hx_ctx, ::h2d::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Layers_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Layers",a2,89,45,8d); }

		::Array< int > layersIndexes;
		int layerCount;
		void addChild( ::h2d::Object s);

		void add( ::h2d::Object s,int layer);
		::Dynamic add_dyn();

		void addChildAt( ::h2d::Object s,int layer);

		void removeChild( ::h2d::Object s);

		void under( ::h2d::Object s);
		::Dynamic under_dyn();

		void over( ::h2d::Object s);
		::Dynamic over_dyn();

		 ::Dynamic getLayer(int layer);
		::Dynamic getLayer_dyn();

		int getChildLayer( ::h2d::Object s);
		::Dynamic getChildLayer_dyn();

		void drawLayer( ::h2d::RenderContext ctx,int layer);
		::Dynamic drawLayer_dyn();

		void ysort(int layer);
		::Dynamic ysort_dyn();

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Layers */ 
