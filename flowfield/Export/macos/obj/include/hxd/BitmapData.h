#ifndef INCLUDED_hxd_BitmapData
#define INCLUDED_hxd_BitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,BlendMode)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(hxd,BitmapData)
HX_DECLARE_CLASS1(hxd,BitmapInnerDataImpl)
HX_DECLARE_CLASS1(hxd,Pixels)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES BitmapData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BitmapData_obj OBJ_;
		BitmapData_obj();

	public:
		enum { _hx_ClassId = 0x1504c32d };

		void __construct(int width,int height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.BitmapData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.BitmapData"); }
		static ::hx::ObjectPtr< BitmapData_obj > __new(int width,int height);
		static ::hx::ObjectPtr< BitmapData_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitmapData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitmapData",d9,b9,71,2a); }

		static void notImplemented();
		static ::Dynamic notImplemented_dyn();

		static  ::hxd::BitmapData fromNative( ::hxd::BitmapInnerDataImpl data);
		static ::Dynamic fromNative_dyn();

		 ::hxd::BitmapInnerDataImpl data;
		void clear(int color);
		::Dynamic clear_dyn();

		void fill(int x,int y,int width,int height,int color);
		::Dynamic fill_dyn();

		void draw(int x,int y, ::hxd::BitmapData src,int srcX,int srcY,int width,int height, ::h2d::BlendMode blendMode);
		::Dynamic draw_dyn();

		void drawScaled(int x,int y,int width,int height, ::hxd::BitmapData src,int srcX,int srcY,int srcWidth,int srcHeight, ::h2d::BlendMode blendMode,::hx::Null< bool >  smooth);
		::Dynamic drawScaled_dyn();

		void line(int x0,int y0,int x1,int y1,int color);
		::Dynamic line_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		 ::hxd::BitmapData clone();
		::Dynamic clone_dyn();

		 ::hxd::BitmapData sub(int x,int y,int w,int h);
		::Dynamic sub_dyn();

		void lock();
		::Dynamic lock_dyn();

		void unlock();
		::Dynamic unlock_dyn();

		int getPixel(int x,int y);
		::Dynamic getPixel_dyn();

		void setPixel(int x,int y,int c);
		::Dynamic setPixel_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		int get_height();
		::Dynamic get_height_dyn();

		 ::hxd::Pixels getPixels();
		::Dynamic getPixels_dyn();

		void setPixels( ::hxd::Pixels pixels);
		::Dynamic setPixels_dyn();

		 ::hxd::BitmapInnerDataImpl toNative();
		::Dynamic toNative_dyn();

		 ::haxe::io::Bytes toPNG();
		::Dynamic toPNG_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_BitmapData */ 
