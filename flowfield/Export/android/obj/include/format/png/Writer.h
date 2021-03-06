#ifndef INCLUDED_format_png_Writer
#define INCLUDED_format_png_Writer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,png,Writer)
HX_DECLARE_CLASS2(haxe,ds,List)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)

namespace format{
namespace png{


class HXCPP_CLASS_ATTRIBUTES Writer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Writer_obj OBJ_;
		Writer_obj();

	public:
		enum { _hx_ClassId = 0x3e7d9a5d };

		void __construct( ::haxe::io::Output o);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.png.Writer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.png.Writer"); }
		static ::hx::ObjectPtr< Writer_obj > __new( ::haxe::io::Output o);
		static ::hx::ObjectPtr< Writer_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output o);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Writer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Writer",d3,4a,7a,b2); }

		 ::haxe::io::Output o;
		void write( ::haxe::ds::List png);
		::Dynamic write_dyn();

		void writeChunk(::String id, ::haxe::io::Bytes data);
		::Dynamic writeChunk_dyn();

};

} // end namespace format
} // end namespace png

#endif /* INCLUDED_format_png_Writer */ 
