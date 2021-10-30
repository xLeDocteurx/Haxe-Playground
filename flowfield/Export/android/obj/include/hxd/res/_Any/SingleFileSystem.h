#ifndef INCLUDED_hxd_res__Any_SingleFileSystem
#define INCLUDED_hxd_res__Any_SingleFileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fs_BytesFileSystem
#include <hxd/fs/BytesFileSystem.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,fs,BytesFileSystem)
HX_DECLARE_CLASS2(hxd,fs,FileSystem)
HX_DECLARE_CLASS3(hxd,res,_Any,SingleFileSystem)

namespace hxd{
namespace res{
namespace _Any{


class HXCPP_CLASS_ATTRIBUTES SingleFileSystem_obj : public  ::hxd::fs::BytesFileSystem_obj
{
	public:
		typedef  ::hxd::fs::BytesFileSystem_obj super;
		typedef SingleFileSystem_obj OBJ_;
		SingleFileSystem_obj();

	public:
		enum { _hx_ClassId = 0x174fa6d0 };

		void __construct(::String path, ::haxe::io::Bytes bytes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.res._Any.SingleFileSystem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.res._Any.SingleFileSystem"); }
		static ::hx::ObjectPtr< SingleFileSystem_obj > __new(::String path, ::haxe::io::Bytes bytes);
		static ::hx::ObjectPtr< SingleFileSystem_obj > __alloc(::hx::Ctx *_hx_ctx,::String path, ::haxe::io::Bytes bytes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SingleFileSystem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SingleFileSystem",53,9f,58,c5); }

		::String path;
		 ::haxe::io::Bytes bytes;
		 ::haxe::io::Bytes getBytes(::String p);

};

} // end namespace hxd
} // end namespace res
} // end namespace _Any

#endif /* INCLUDED_hxd_res__Any_SingleFileSystem */ 
