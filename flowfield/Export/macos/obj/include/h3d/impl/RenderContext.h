#ifndef INCLUDED_h3d_impl_RenderContext
#define INCLUDED_h3d_impl_RenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,impl,TextureCache)

namespace h3d{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES RenderContext_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RenderContext_obj OBJ_;
		RenderContext_obj();

	public:
		enum { _hx_ClassId = 0x4786bba0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.impl.RenderContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.impl.RenderContext"); }
		static ::hx::ObjectPtr< RenderContext_obj > __new();
		static ::hx::ObjectPtr< RenderContext_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RenderContext",19,59,55,5d); }

		 ::h3d::Engine engine;
		Float time;
		Float elapsedTime;
		int frame;
		 ::h3d::impl::TextureCache textures;
		virtual void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_RenderContext */ 
