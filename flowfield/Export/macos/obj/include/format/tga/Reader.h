#ifndef INCLUDED_format_tga_Reader
#define INCLUDED_format_tga_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,tga,Reader)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace format{
namespace tga{


class HXCPP_CLASS_ATTRIBUTES Reader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();

	public:
		enum { _hx_ClassId = 0x2fc73e9a };

		void __construct( ::haxe::io::Input i);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.tga.Reader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.tga.Reader"); }
		static ::hx::ObjectPtr< Reader_obj > __new( ::haxe::io::Input i);
		static ::hx::ObjectPtr< Reader_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Reader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Reader",63,19,26,31); }

		 ::haxe::io::Input i;
		 ::Dynamic read();
		::Dynamic read_dyn();

		 ::Dynamic readHeader();
		::Dynamic readHeader_dyn();

		::Array< int > readColorMapData( ::Dynamic header);
		::Dynamic readColorMapData_dyn();

		::Array< int > readImageData( ::Dynamic header,::Array< int > colorMap);
		::Dynamic readImageData_dyn();

		::Array< int > readPixels(int bitsPerPixel,int amount,int alphaChannelBits,bool rle);
		::Dynamic readPixels_dyn();

		::Array< int > readMono(int bitsPerPixel,int amount,int alphaChannelBits,bool rle);
		::Dynamic readMono_dyn();

		::Array< int > readIndexes(int bitsPerPixel,int amount,::Array< int > colorMap,int offset,bool rle);
		::Dynamic readIndexes_dyn();

		int parsePixel1(int value,bool alpha);
		::Dynamic parsePixel1_dyn();

		int parsePixelGreyAlpha(int value,bool alpha);
		::Dynamic parsePixelGreyAlpha_dyn();

		int parsePixel2(int value,bool alpha);
		::Dynamic parsePixel2_dyn();

		int parsePixel3(int value,bool alpha);
		::Dynamic parsePixel3_dyn();

		int parsePixel4(int value,bool alpha);
		::Dynamic parsePixel4_dyn();

};

} // end namespace format
} // end namespace tga

#endif /* INCLUDED_format_tga_Reader */ 
