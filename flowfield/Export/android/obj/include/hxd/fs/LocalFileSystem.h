#ifndef INCLUDED_hxd_fs_LocalFileSystem
#define INCLUDED_hxd_fs_LocalFileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fs_FileSystem
#include <hxd/fs/FileSystem.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(hxd,fs,FileConverter)
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,fs,FileSystem)
HX_DECLARE_CLASS2(hxd,fs,LocalEntry)
HX_DECLARE_CLASS2(hxd,fs,LocalFileSystem)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES LocalFileSystem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LocalFileSystem_obj OBJ_;
		LocalFileSystem_obj();

	public:
		enum { _hx_ClassId = 0x22b53935 };

		void __construct(::String dir,::String configuration);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.LocalFileSystem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.LocalFileSystem"); }
		static ::hx::ObjectPtr< LocalFileSystem_obj > __new(::String dir,::String configuration);
		static ::hx::ObjectPtr< LocalFileSystem_obj > __alloc(::hx::Ctx *_hx_ctx,::String dir,::String configuration);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LocalFileSystem_obj();

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
		void *_hx_getInterface(int inHash);
		 ::hxd::fs::FileEntry get_76056e86(::String path);
		::String __ToString() const { return HX_("LocalFileSystem",b6,c7,c0,ae); }

		static void __boot();
		static bool isWindows;
		static int FILES_CHECK_MAX;
		 ::hxd::fs::FileEntry root;
		 ::haxe::ds::StringMap fileCache;
		::String baseDir;
		 ::hxd::fs::FileConverter convert;
		::String getAbsolutePath( ::hxd::fs::FileEntry f);
		::Dynamic getAbsolutePath_dyn();

		 ::hxd::fs::FileEntry getRoot();
		::Dynamic getRoot_dyn();

		 ::haxe::ds::StringMap directoryCache;
		bool checkPath(::String path);
		::Dynamic checkPath_dyn();

		 ::hxd::fs::LocalEntry open(::String path,::hx::Null< bool >  check);
		::Dynamic open_dyn();

		void clearCache();
		::Dynamic clearCache_dyn();

		bool exists(::String path);
		::Dynamic exists_dyn();

		 ::hxd::fs::LocalEntry get(::String path);
		::Dynamic get_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		::Array< ::Dynamic> dir(::String path);
		::Dynamic dir_dyn();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_LocalFileSystem */ 
