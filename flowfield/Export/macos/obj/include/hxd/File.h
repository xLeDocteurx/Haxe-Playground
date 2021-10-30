#ifndef INCLUDED_hxd_File
#define INCLUDED_hxd_File

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(hxd,File)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES File_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef File_obj OBJ_;
		File_obj();

	public:
		enum { _hx_ClassId = 0x47e38cf0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.File")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.File"); }

		inline static ::hx::ObjectPtr< File_obj > __new() {
			::hx::ObjectPtr< File_obj > __this = new File_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< File_obj > __alloc(::hx::Ctx *_hx_ctx) {
			File_obj *__this = (File_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(File_obj), false, "hxd.File"));
			*(void **)__this = File_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~File_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("File",9c,fa,94,2e); }

		static void browse( ::Dynamic onSelect, ::Dynamic options);
		static ::Dynamic browse_dyn();

		static void saveAs( ::haxe::io::Bytes dataContent, ::Dynamic options);
		static ::Dynamic saveAs_dyn();

		static bool exists(::String path);
		static ::Dynamic exists_dyn();

		static void _hx_delete(::String path);
		static ::Dynamic _hx_delete_dyn();

		static ::Array< ::String > listDirectory(::String path);
		static ::Dynamic listDirectory_dyn();

		static  ::haxe::io::Bytes getBytes(::String path);
		static ::Dynamic getBytes_dyn();

		static void saveBytes(::String path, ::haxe::io::Bytes data);
		static ::Dynamic saveBytes_dyn();

		static void load(::String path, ::Dynamic onLoad, ::Dynamic onError);
		static ::Dynamic load_dyn();

		static void createDirectory(::String path);
		static ::Dynamic createDirectory_dyn();

		static ::String applicationPath();
		static ::Dynamic applicationPath_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_File */ 
