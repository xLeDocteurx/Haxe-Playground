#ifndef INCLUDED_format_tools_BitsInput
#define INCLUDED_format_tools_BitsInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,tools,BitsInput)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace format{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES BitsInput_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BitsInput_obj OBJ_;
		BitsInput_obj();

	public:
		enum { _hx_ClassId = 0x0683d1e4 };

		void __construct( ::haxe::io::Input i);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="format.tools.BitsInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"format.tools.BitsInput"); }
		static ::hx::ObjectPtr< BitsInput_obj > __new( ::haxe::io::Input i);
		static ::hx::ObjectPtr< BitsInput_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitsInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitsInput",04,63,fd,fb); }

		 ::haxe::io::Input i;
		int nbits;
		int bits;
		int readBits(int n);
		::Dynamic readBits_dyn();

		bool readBit();
		::Dynamic readBit_dyn();

		void reset();
		::Dynamic reset_dyn();

};

} // end namespace format
} // end namespace tools

#endif /* INCLUDED_format_tools_BitsInput */ 
