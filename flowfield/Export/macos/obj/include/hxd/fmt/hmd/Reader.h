#ifndef INCLUDED_hxd_fmt_hmd_Reader
#define INCLUDED_hxd_fmt_hmd_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,BlendMode)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,mat,Face)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Data)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Position)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Property)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Reader)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Skin)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES Reader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();

	public:
		enum { _hx_ClassId = 0x69b1b109 };

		void __construct( ::haxe::io::Input i);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.Reader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.Reader"); }
		static ::hx::ObjectPtr< Reader_obj > __new( ::haxe::io::Input i);
		static ::hx::ObjectPtr< Reader_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Reader_obj();

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
		::String __ToString() const { return HX_("Reader",63,19,26,31); }

		static void __boot();
		static ::Array< ::Dynamic> BLEND;
		static ::Array< ::Dynamic> CULLING;
		static  ::haxe::ds::StringMap HMD_STRINGS;
		 ::haxe::io::Input i;
		int version;
		 ::hxd::fmt::hmd::Property readProperty();
		::Dynamic readProperty_dyn();

		::Array< ::Dynamic> readProps();
		::Dynamic readProps_dyn();

		::String readName();
		::Dynamic readName_dyn();

		::String readCachedName();
		::Dynamic readCachedName_dyn();

		 ::hxd::fmt::hmd::Position readPosition(::hx::Null< bool >  hasScale);
		::Dynamic readPosition_dyn();

		 ::h3d::col::Bounds readBounds();
		::Dynamic readBounds_dyn();

		 ::hxd::fmt::hmd::Skin readSkin();
		::Dynamic readSkin_dyn();

		 ::hxd::fmt::hmd::Data readHeader();
		::Dynamic readHeader_dyn();

		 ::hxd::fmt::hmd::Data read();
		::Dynamic read_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_Reader */ 
