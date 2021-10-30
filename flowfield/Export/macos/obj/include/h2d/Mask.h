#ifndef INCLUDED_h2d_Mask
#define INCLUDED_h2d_Mask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
HX_DECLARE_CLASS1(h2d,Mask)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Mask_obj : public  ::h2d::Object_obj
{
	public:
		typedef  ::h2d::Object_obj super;
		typedef Mask_obj OBJ_;
		Mask_obj();

	public:
		enum { _hx_ClassId = 0x57799d02 };

		void __construct(int width,int height, ::h2d::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Mask")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Mask"); }
		static ::hx::ObjectPtr< Mask_obj > __new(int width,int height, ::h2d::Object parent);
		static ::hx::ObjectPtr< Mask_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::h2d::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mask_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mask",0c,6d,2f,33); }

		static void maskWith( ::h2d::RenderContext ctx, ::h2d::Object object,int width,int height,::hx::Null< Float >  scrollX,::hx::Null< Float >  scrollY);
		static ::Dynamic maskWith_dyn();

		static void unmask( ::h2d::RenderContext ctx);
		static ::Dynamic unmask_dyn();

		int width;
		int height;
		 ::h2d::Mask parentMask;
		Float scrollX;
		Float scrollY;
		 ::h2d::col::Bounds scrollBounds;
		void scrollTo(Float x,Float y);
		::Dynamic scrollTo_dyn();

		void scrollBy(Float x,Float y);
		::Dynamic scrollBy_dyn();

		void onHierarchyMoved(bool parentChanged);

		void onAdd();

		void updateMask();
		::Dynamic updateMask_dyn();

		Float set_scrollX(Float v);
		::Dynamic set_scrollX_dyn();

		Float set_scrollY(Float v);
		::Dynamic set_scrollY_dyn();

		void calcAbsPos();

		void getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize);

		void drawRec( ::h2d::RenderContext ctx);

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Mask */ 
