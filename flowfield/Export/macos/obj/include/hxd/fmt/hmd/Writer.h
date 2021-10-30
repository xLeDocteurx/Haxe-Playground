#ifndef INCLUDED_hxd_fmt_hmd_Writer
#define INCLUDED_hxd_fmt_hmd_Writer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Data)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Position)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Property)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Skin)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Writer)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES Writer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Writer_obj OBJ_;
		Writer_obj();

	public:
		enum { _hx_ClassId = 0x32cd6e95 };

		void __construct( ::haxe::io::Output out);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.Writer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.Writer"); }
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

		 ::haxe::io::Output out;
		int version;
		void writeProperty( ::hxd::fmt::hmd::Property p);
		::Dynamic writeProperty_dyn();

		void writeProps(::Array< ::Dynamic> props);
		::Dynamic writeProps_dyn();

		void writeName(::String name);
		::Dynamic writeName_dyn();

		void writeFloat(Float f);
		::Dynamic writeFloat_dyn();

		void writePosition( ::hxd::fmt::hmd::Position p,::hx::Null< bool >  hasScale);
		::Dynamic writePosition_dyn();

		void writeBounds( ::h3d::col::Bounds b);
		::Dynamic writeBounds_dyn();

		void writeSkin( ::hxd::fmt::hmd::Skin s);
		::Dynamic writeSkin_dyn();

		void write( ::hxd::fmt::hmd::Data d);
		::Dynamic write_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_Writer */ 
