#ifndef INCLUDED_hxd_fs_ConvertFNT2BFNT
#define INCLUDED_hxd_fs_ConvertFNT2BFNT

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(hxd,fs,Convert)
HX_DECLARE_CLASS2(hxd,fs,ConvertFNT2BFNT)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES ConvertFNT2BFNT_obj : public  ::hxd::fs::Convert_obj
{
	public:
		typedef  ::hxd::fs::Convert_obj super;
		typedef ConvertFNT2BFNT_obj OBJ_;
		ConvertFNT2BFNT_obj();

	public:
		enum { _hx_ClassId = 0x0b644d02 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.ConvertFNT2BFNT")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.ConvertFNT2BFNT"); }
		static ::hx::ObjectPtr< ConvertFNT2BFNT_obj > __new();
		static ::hx::ObjectPtr< ConvertFNT2BFNT_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ConvertFNT2BFNT_obj();

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
		::String __ToString() const { return HX_("ConvertFNT2BFNT",83,db,6f,97); }

		static void __boot();
		static int _;
		 ::h2d::Tile emptyTile;
		void convert();

		 ::h2d::Tile resolveTile(::String path);
		::Dynamic resolveTile_dyn();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_ConvertFNT2BFNT */ 
