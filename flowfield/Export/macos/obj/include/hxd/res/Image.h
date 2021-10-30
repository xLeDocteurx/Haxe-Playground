#ifndef INCLUDED_hxd_res_Image
#define INCLUDED_hxd_res_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(h3d,mat,Filter)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS1(hxd,BitmapData)
HX_DECLARE_CLASS1(hxd,PixelFormat)
HX_DECLARE_CLASS1(hxd,Pixels)
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,res,Image)
HX_DECLARE_CLASS2(hxd,res,ImageInfo)
HX_DECLARE_CLASS2(hxd,res,Resource)

namespace hxd{
namespace res{


class HXCPP_CLASS_ATTRIBUTES Image_obj : public  ::hxd::res::Resource_obj
{
	public:
		typedef  ::hxd::res::Resource_obj super;
		typedef Image_obj OBJ_;
		Image_obj();

	public:
		enum { _hx_ClassId = 0x63ca806f };

		void __construct( ::hxd::fs::FileEntry entry);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.res.Image")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.res.Image"); }
		static ::hx::ObjectPtr< Image_obj > __new( ::hxd::fs::FileEntry entry);
		static ::hx::ObjectPtr< Image_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry entry);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Image_obj();

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
		::String __ToString() const { return HX_("Image",3b,8f,96,50); }

		static void __boot();
		static  ::h3d::mat::Filter DEFAULT_FILTER;
		static bool DEFAULT_ASYNC;
		static bool ENABLE_AUTO_WATCH;
		static ::Dynamic setupTextureFlags;
		static inline ::Dynamic &setupTextureFlags_dyn() {return setupTextureFlags; }

		 ::h3d::mat::Texture tex;
		 ::hxd::res::ImageInfo inf;
		int getFormat();
		::Dynamic getFormat_dyn();

		 ::hxd::PixelFormat getPixelFormat();
		::Dynamic getPixelFormat_dyn();

		 ::hxd::res::ImageInfo getSize();
		::Dynamic getSize_dyn();

		 ::hxd::res::ImageInfo getInfo();
		::Dynamic getInfo_dyn();

		 ::hxd::Pixels getPixels( ::hxd::PixelFormat fmt, ::Dynamic flipY, ::Dynamic index);
		::Dynamic getPixels_dyn();

		 ::hxd::BitmapData toBitmap();
		::Dynamic toBitmap_dyn();

		void watchCallb();
		::Dynamic watchCallb_dyn();

		void loadTexture();
		::Dynamic loadTexture_dyn();

		 ::h3d::mat::Texture toTexture();
		::Dynamic toTexture_dyn();

		 ::h2d::Tile toTile();
		::Dynamic toTile_dyn();

};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_Image */ 
