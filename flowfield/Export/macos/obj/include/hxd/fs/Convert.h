#ifndef INCLUDED_hxd_fs_Convert
#define INCLUDED_hxd_fs_Convert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,fs,Convert)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES Convert_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Convert_obj OBJ_;
		Convert_obj();

	public:
		enum { _hx_ClassId = 0x7a5db4d6 };

		void __construct( ::Dynamic sourceExts,::String destExt);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.Convert")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.Convert"); }
		static ::hx::ObjectPtr< Convert_obj > __new( ::Dynamic sourceExts,::String destExt);
		static ::hx::ObjectPtr< Convert_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic sourceExts,::String destExt);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Convert_obj();

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
		::String __ToString() const { return HX_("Convert",d3,25,1b,e8); }

		static void __boot();
		static  ::haxe::ds::StringMap converts;
		static int _hx_register( ::hxd::fs::Convert c);
		static ::Dynamic _hx_register_dyn();

		::Array< ::String > sourceExts;
		::String destExt;
		int version;
		 ::Dynamic params;
		::String srcPath;
		::String dstPath;
		::String originalFilename;
		 ::haxe::io::Bytes srcBytes;
		virtual void convert();
		::Dynamic convert_dyn();

		bool hasParam(::String name);
		::Dynamic hasParam_dyn();

		 ::Dynamic getParam(::String name);
		::Dynamic getParam_dyn();

		void save( ::haxe::io::Bytes bytes);
		::Dynamic save_dyn();

		void command(::String cmd,::Array< ::String > args);
		::Dynamic command_dyn();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_Convert */ 
