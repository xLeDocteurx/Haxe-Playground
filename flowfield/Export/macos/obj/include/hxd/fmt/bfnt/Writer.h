#ifndef INCLUDED_hxd_fmt_bfnt_Writer
#define INCLUDED_hxd_fmt_bfnt_Writer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,Font)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS3(hxd,fmt,bfnt,Writer)

namespace hxd{
namespace fmt{
namespace bfnt{


class HXCPP_CLASS_ATTRIBUTES Writer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Writer_obj OBJ_;
		Writer_obj();

	public:
		enum { _hx_ClassId = 0x23cc50fa };

		void __construct( ::haxe::io::Output out);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.bfnt.Writer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.bfnt.Writer"); }
		static ::hx::ObjectPtr< Writer_obj > __new( ::haxe::io::Output out);
		static ::hx::ObjectPtr< Writer_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output out);
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

		static void __boot();
		static int VERSION;
		 ::haxe::io::Output out;
		void write( ::h2d::Font font);
		::Dynamic write_dyn();

		void writeString(::String s);
		::Dynamic writeString_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace bfnt

#endif /* INCLUDED_hxd_fmt_bfnt_Writer */ 
