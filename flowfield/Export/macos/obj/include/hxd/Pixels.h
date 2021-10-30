#ifndef INCLUDED_hxd_Pixels
#define INCLUDED_hxd_Pixels

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(hxd,PixelFormat)
HX_DECLARE_CLASS1(hxd,Pixels)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES Pixels_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Pixels_obj OBJ_;
		Pixels_obj();

	public:
		enum { _hx_ClassId = 0x0b052a65 };

		void __construct(int width,int height, ::haxe::io::Bytes bytes, ::hxd::PixelFormat format,::hx::Null< int >  __o_offset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.Pixels")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.Pixels"); }
		static ::hx::ObjectPtr< Pixels_obj > __new(int width,int height, ::haxe::io::Bytes bytes, ::hxd::PixelFormat format,::hx::Null< int >  __o_offset);
		static ::hx::ObjectPtr< Pixels_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::haxe::io::Bytes bytes, ::hxd::PixelFormat format,::hx::Null< int >  __o_offset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Pixels_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Pixels",4d,63,3e,c1); }

		static int switchEndian(int v);
		static ::Dynamic switchEndian_dyn();

		static int switchBR(int v);
		static ::Dynamic switchBR_dyn();

		static int calcDataSize(int width,int height, ::hxd::PixelFormat format);
		static ::Dynamic calcDataSize_dyn();

		static int calcStride(int width, ::hxd::PixelFormat format);
		static ::Dynamic calcStride_dyn();

		static bool isFloatFormat( ::hxd::PixelFormat format);
		static ::Dynamic isFloatFormat_dyn();

		static int getChannelOffset( ::hxd::PixelFormat format,int channel);
		static ::Dynamic getChannelOffset_dyn();

		static  ::hxd::Pixels alloc(int width,int height, ::hxd::PixelFormat format);
		static ::Dynamic alloc_dyn();

		static  ::haxe::io::Bytes toDDS(::Array< ::Dynamic> pixels,::hx::Null< bool >  isCubeMap);
		static ::Dynamic toDDS_dyn();

		 ::haxe::io::Bytes bytes;
		int width;
		int height;
		int dataSize;
		int offset;
		int flags;
		int stride;
		int bytesPerPixel;
		 ::hxd::PixelFormat innerFormat;
		 ::hxd::PixelFormat get_format();
		::Dynamic get_format_dyn();

		 ::hxd::PixelFormat set_innerFormat( ::hxd::PixelFormat fmt);
		::Dynamic set_innerFormat_dyn();

		void invalidFormat();
		::Dynamic invalidFormat_dyn();

		 ::hxd::Pixels sub(int x,int y,int width,int height);
		::Dynamic sub_dyn();

		int yflip(int y);
		::Dynamic yflip_dyn();

		void blit(int x,int y, ::hxd::Pixels src,int srcX,int srcY,int width,int height);
		::Dynamic blit_dyn();

		void clear(int color,::hx::Null< int >  preserveMask);
		::Dynamic clear_dyn();

		::Array< int > toVector();
		::Dynamic toVector_dyn();

		 ::hxd::Pixels makeSquare( ::Dynamic copy);
		::Dynamic makeSquare_dyn();

		void copyInner();
		::Dynamic copyInner_dyn();

		void willChange();
		::Dynamic willChange_dyn();

		void setFlip(bool b);
		::Dynamic setFlip_dyn();

		void convert( ::hxd::PixelFormat target);
		::Dynamic convert_dyn();

		int getPixel(int x,int y);
		::Dynamic getPixel_dyn();

		void setPixel(int x,int y,int color);
		::Dynamic setPixel_dyn();

		 ::h3d::Vector getPixelF(int x,int y, ::h3d::Vector v);
		::Dynamic getPixelF_dyn();

		void setPixelF(int x,int y, ::h3d::Vector v);
		::Dynamic setPixelF_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::haxe::io::Bytes toPNG( ::Dynamic level);
		::Dynamic toPNG_dyn();

		 ::hxd::Pixels clone();
		::Dynamic clone_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_Pixels */ 
