#ifndef INCLUDED_h3d_pass_Blur
#define INCLUDED_h3d_pass_Blur

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,pass,Blur)
HX_DECLARE_CLASS2(h3d,pass,ScreenFx)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES Blur_obj : public  ::h3d::pass::ScreenFx_obj
{
	public:
		typedef  ::h3d::pass::ScreenFx_obj super;
		typedef Blur_obj OBJ_;
		Blur_obj();

	public:
		enum { _hx_ClassId = 0x2eb55725 };

		void __construct(::hx::Null< Float >  __o_radius,::hx::Null< Float >  __o_gain,::hx::Null< Float >  __o_linear,::hx::Null< Float >  __o_quality);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.Blur")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.Blur"); }
		static ::hx::ObjectPtr< Blur_obj > __new(::hx::Null< Float >  __o_radius,::hx::Null< Float >  __o_gain,::hx::Null< Float >  __o_linear,::hx::Null< Float >  __o_quality);
		static ::hx::ObjectPtr< Blur_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_radius,::hx::Null< Float >  __o_gain,::hx::Null< Float >  __o_linear,::hx::Null< Float >  __o_quality);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Blur_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Blur",c7,6e,f2,2b); }

		static void __boot();
		static  ::Dynamic __meta__;
		::Array< ::Dynamic> cubeDir;
		Float radius;
		Float gain;
		Float linear;
		Float quality;
		::Array< Float > values;
		::Array< Float > offsets;
		Float set_radius(Float r);
		::Dynamic set_radius_dyn();

		Float set_quality(Float q);
		::Dynamic set_quality_dyn();

		Float set_gain(Float s);
		::Dynamic set_gain_dyn();

		Float set_linear(Float b);
		::Dynamic set_linear_dyn();

		Float gauss(Float x,Float s);
		::Dynamic gauss_dyn();

		void calcValues();
		::Dynamic calcValues_dyn();

		int getKernelSize();
		::Dynamic getKernelSize_dyn();

		void apply( ::h3d::impl::RenderContext ctx, ::h3d::mat::Texture src, ::h3d::mat::Texture output);
		::Dynamic apply_dyn();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_Blur */ 
