#ifndef INCLUDED_hxd_fs_FileInput
#define INCLUDED_hxd_fs_FileInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,fs,FileInput)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES FileInput_obj : public  ::haxe::io::Input_obj
{
	public:
		typedef  ::haxe::io::Input_obj super;
		typedef FileInput_obj OBJ_;
		FileInput_obj();

	public:
		enum { _hx_ClassId = 0x56ca7c0d };

		void __construct( ::hxd::fs::FileEntry f);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.FileInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.FileInput"); }
		static ::hx::ObjectPtr< FileInput_obj > __new( ::hxd::fs::FileEntry f);
		static ::hx::ObjectPtr< FileInput_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry f);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FileInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FileInput",ce,43,18,62); }

		 ::hxd::fs::FileEntry f;
		void skip(int nbytes);
		::Dynamic skip_dyn();

		int readByte();

		int readBytes( ::haxe::io::Bytes b,int pos,int len);

		void close();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_FileInput */ 
