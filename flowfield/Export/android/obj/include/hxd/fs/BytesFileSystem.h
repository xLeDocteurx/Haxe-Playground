#ifndef INCLUDED_hxd_fs_BytesFileSystem
#define INCLUDED_hxd_fs_BytesFileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fs_FileSystem
#include <hxd/fs/FileSystem.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,fs,BytesFileEntry)
HX_DECLARE_CLASS2(hxd,fs,BytesFileSystem)
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,fs,FileSystem)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES BytesFileSystem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BytesFileSystem_obj OBJ_;
		BytesFileSystem_obj();

	public:
		enum { _hx_ClassId = 0x1a813835 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.fs.BytesFileSystem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.fs.BytesFileSystem"); }
		static ::hx::ObjectPtr< BytesFileSystem_obj > __new();
		static ::hx::ObjectPtr< BytesFileSystem_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BytesFileSystem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		 ::hxd::fs::FileEntry get_76056e86(::String path);
		::String __ToString() const { return HX_("BytesFileSystem",b6,c6,8c,a6); }

		 ::hxd::fs::FileEntry getRoot();
		::Dynamic getRoot_dyn();

		virtual  ::haxe::io::Bytes getBytes(::String path);
		::Dynamic getBytes_dyn();

		bool exists(::String path);
		::Dynamic exists_dyn();

		 ::hxd::fs::BytesFileEntry get(::String path);
		::Dynamic get_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		::Array< ::Dynamic> dir(::String path);
		::Dynamic dir_dyn();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_BytesFileSystem */ 
