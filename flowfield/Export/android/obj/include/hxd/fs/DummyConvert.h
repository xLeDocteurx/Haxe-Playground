#ifndef INCLUDED_hxd_fs_DummyConvert
#define INCLUDED_hxd_fs_DummyConvert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
HX_DECLARE_CLASS2(hxd,fs,Convert)
HX_DECLARE_CLASS2(hxd,fs,DummyConvert)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES DummyConvert_obj : public  ::hxd::fs::Convert_obj
{
	public:
		typedef  ::hxd::fs::Convert_obj super;
		typedef DummyConvert_obj OBJ_;
		DummyConvert_obj();

	public:
		enum { _hx_ClassId = 0x41a64a24 };

		void __construct( ::Dynamic sourceExts,::String destExt);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.DummyConvert")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.DummyConvert"); }
		static ::hx::ObjectPtr< DummyConvert_obj > __new( ::Dynamic sourceExts,::String destExt);
		static ::hx::ObjectPtr< DummyConvert_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic sourceExts,::String destExt);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DummyConvert_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DummyConvert",cb,f8,f1,fd); }

		static void __boot();
		static ::Array< int > _;
		void convert();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_DummyConvert */ 
