#ifndef INCLUDED_h3d_impl_TextureCache
#define INCLUDED_h3d_impl_TextureCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,impl,TextureCache)
HX_DECLARE_CLASS2(h3d,mat,DepthBuffer)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS1(hxd,PixelFormat)

namespace h3d{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES TextureCache_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextureCache_obj OBJ_;
		TextureCache_obj();

	public:
		enum { _hx_ClassId = 0x28e6e9fc };

		void __construct( ::h3d::impl::RenderContext ctx);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.impl.TextureCache")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.impl.TextureCache"); }
		static ::hx::ObjectPtr< TextureCache_obj > __new( ::h3d::impl::RenderContext ctx);
		static ::hx::ObjectPtr< TextureCache_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::impl::RenderContext ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextureCache_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextureCache",87,93,c6,01); }

		::Array< ::Dynamic> cache;
		int position;
		 ::h3d::mat::DepthBuffer defaultDepthBuffer;
		 ::h3d::impl::RenderContext ctx;
		 ::hxd::PixelFormat defaultFormat;
		 ::h3d::mat::Texture get(::hx::Null< int >  index);
		::Dynamic get_dyn();

		 ::h3d::mat::Texture getNamed(::String name);
		::Dynamic getNamed_dyn();

		void set( ::h3d::mat::Texture t,int index);
		::Dynamic set_dyn();

		void begin();
		::Dynamic begin_dyn();

		 ::h3d::mat::Texture lookupTarget(::String name,int width,int height, ::hxd::PixelFormat format,bool isCube);
		::Dynamic lookupTarget_dyn();

		 ::h3d::mat::Texture allocTarget(::String name,int width,int height,::hx::Null< bool >  defaultDepth, ::hxd::PixelFormat format,::hx::Null< bool >  isCube);
		::Dynamic allocTarget_dyn();

		 ::h3d::mat::Texture allocTargetScale(::String name,Float scale,::hx::Null< bool >  defaultDepth, ::hxd::PixelFormat format);
		::Dynamic allocTargetScale_dyn();

		 ::h3d::mat::Texture allocTileTarget(::String name, ::h2d::Tile tile,::hx::Null< bool >  defaultDepth, ::hxd::PixelFormat format);
		::Dynamic allocTileTarget_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_TextureCache */ 
