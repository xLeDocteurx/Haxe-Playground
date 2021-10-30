#ifndef INCLUDED_h3d_mat_Texture
#define INCLUDED_h3d_mat_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,IBounds)
HX_DECLARE_CLASS2(h3d,impl,MemoryManager)
HX_DECLARE_CLASS2(h3d,mat,DepthBuffer)
HX_DECLARE_CLASS2(h3d,mat,Filter)
HX_DECLARE_CLASS2(h3d,mat,MipMap)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,mat,TextureFlags)
HX_DECLARE_CLASS2(h3d,mat,Wrap)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hxd,BitmapData)
HX_DECLARE_CLASS1(hxd,PixelFormat)
HX_DECLARE_CLASS1(hxd,Pixels)

namespace h3d{
namespace mat{


class HXCPP_CLASS_ATTRIBUTES Texture_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Texture_obj OBJ_;
		Texture_obj();

	public:
		enum { _hx_ClassId = 0x6d442854 };

		void __construct(int w,int h,::Array< ::Dynamic> flags, ::hxd::PixelFormat format);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.mat.Texture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.mat.Texture"); }
		static ::hx::ObjectPtr< Texture_obj > __new(int w,int h,::Array< ::Dynamic> flags, ::hxd::PixelFormat format);
		static ::hx::ObjectPtr< Texture_obj > __alloc(::hx::Ctx *_hx_ctx,int w,int h,::Array< ::Dynamic> flags, ::hxd::PixelFormat format);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Texture_obj();

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
		::String __ToString() const { return HX_("Texture",bb,f0,31,6c); }

		static void __boot();
		static int UID;
		static int PREVENT_AUTO_DISPOSE;
		static  ::hxd::PixelFormat nativeFormat;
		static  ::h3d::mat::Texture fromBitmap( ::hxd::BitmapData bmp);
		static ::Dynamic fromBitmap_dyn();

		static  ::h3d::mat::Texture fromPixels( ::hxd::Pixels pixels);
		static ::Dynamic fromPixels_dyn();

		static  ::h3d::mat::Texture fromColor(int color, ::Dynamic alpha);
		static ::Dynamic fromColor_dyn();

		static  ::h3d::mat::Texture genDisc(int size,int color, ::Dynamic alpha);
		static ::Dynamic genDisc_dyn();

		static  ::h3d::mat::Texture genTexture(int mode,int size,int color,Float alpha);
		static ::Dynamic genTexture_dyn();

		static void drawGenTexture( ::h3d::mat::Texture t,int color,int mode);
		static ::Dynamic drawGenTexture_dyn();

		static  ::h3d::mat::Texture defaultCubeTexture();
		static ::Dynamic defaultCubeTexture_dyn();

		static  ::h3d::mat::Texture genChecker(int size);
		static ::Dynamic genChecker_dyn();

		static  ::haxe::ds::IntMap checkerTextureKeys;
		static  ::haxe::ds::IntMap noiseTextureKeys;
		static  ::haxe::ds::StringMap genTextureKeys;
		static  ::h3d::mat::Texture genNoise(int size);
		static ::Dynamic genNoise_dyn();

		static void allocNoise( ::h3d::mat::Texture t,int size);
		static ::Dynamic allocNoise_dyn();

		static void allocChecker( ::h3d::mat::Texture t,int size);
		static ::Dynamic allocChecker_dyn();

		 ::Dynamic t;
		 ::h3d::impl::MemoryManager mem;
		int id;
		::String name;
		int width;
		int height;
		int flags;
		 ::hxd::PixelFormat format;
		int bits;
		::Array< ::Dynamic> waitLoads;
		 ::h3d::mat::MipMap mipMap;
		 ::h3d::mat::Filter filter;
		 ::h3d::mat::Wrap wrap;
		Float lodBias;
		 ::Dynamic realloc;
		Dynamic realloc_dyn() { return realloc;}
		 ::h3d::mat::DepthBuffer depthBuffer;
		int _lastFrame;
		int set_lastFrame(int lf);
		::Dynamic set_lastFrame_dyn();

		int get_lastFrame();
		::Dynamic get_lastFrame_dyn();

		int get_mipLevels();
		::Dynamic get_mipLevels_dyn();

		virtual int get_layerCount();
		::Dynamic get_layerCount_dyn();

		void alloc();
		::Dynamic alloc_dyn();

		bool isSRGB();
		::Dynamic isSRGB_dyn();

		void checkAlloc();
		::Dynamic checkAlloc_dyn();

		virtual  ::h3d::mat::Texture clone();
		::Dynamic clone_dyn();

		void preventAutoDispose();
		::Dynamic preventAutoDispose_dyn();

		void waitLoad( ::Dynamic f);
		::Dynamic waitLoad_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void setName(::String n);
		::Dynamic setName_dyn();

		 ::h3d::mat::MipMap set_mipMap( ::h3d::mat::MipMap m);
		::Dynamic set_mipMap_dyn();

		 ::h3d::mat::Filter set_filter( ::h3d::mat::Filter f);
		::Dynamic set_filter_dyn();

		 ::h3d::mat::Wrap set_wrap( ::h3d::mat::Wrap w);
		::Dynamic set_wrap_dyn();

		bool isDisposed();
		::Dynamic isDisposed_dyn();

		void resize(int width,int height);
		::Dynamic resize_dyn();

		void clearF(::hx::Null< Float >  r,::hx::Null< Float >  g,::hx::Null< Float >  b,::hx::Null< Float >  a,::hx::Null< int >  layer);
		::Dynamic clearF_dyn();

		void clear(int color,::hx::Null< Float >  alpha, ::Dynamic layer);
		::Dynamic clear_dyn();

		void checkSize(int width,int height,int mip);
		::Dynamic checkSize_dyn();

		void checkMipMapGen(int mipLevel,int layer);
		::Dynamic checkMipMapGen_dyn();

		void uploadBitmap( ::hxd::BitmapData bmp,::hx::Null< int >  mipLevel,::hx::Null< int >  layer);
		::Dynamic uploadBitmap_dyn();

		void uploadPixels( ::hxd::Pixels pixels,::hx::Null< int >  mipLevel,::hx::Null< int >  layer);
		::Dynamic uploadPixels_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void swapTexture( ::h3d::mat::Texture t);
		::Dynamic swapTexture_dyn();

		 ::hxd::Pixels capturePixels(::hx::Null< int >  face,::hx::Null< int >  mipLevel, ::h2d::col::IBounds region);
		::Dynamic capturePixels_dyn();

};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_Texture */ 
