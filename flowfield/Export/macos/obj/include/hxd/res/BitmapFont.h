#ifndef INCLUDED_hxd_res_BitmapFont
#define INCLUDED_hxd_res_BitmapFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
HX_DECLARE_CLASS1(h2d,Font)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,res,BitmapFont)
HX_DECLARE_CLASS2(hxd,res,Loader)
HX_DECLARE_CLASS2(hxd,res,Resource)

namespace hxd{
namespace res{


class HXCPP_CLASS_ATTRIBUTES BitmapFont_obj : public  ::hxd::res::Resource_obj
{
	public:
		typedef  ::hxd::res::Resource_obj super;
		typedef BitmapFont_obj OBJ_;
		BitmapFont_obj();

	public:
		enum { _hx_ClassId = 0x6c3ff3ca };

		void __construct( ::hxd::fs::FileEntry entry);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.res.BitmapFont")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.res.BitmapFont"); }
		static ::hx::ObjectPtr< BitmapFont_obj > __new( ::hxd::fs::FileEntry entry);
		static ::hx::ObjectPtr< BitmapFont_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry entry);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitmapFont_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitmapFont",7e,c1,ce,2b); }

		 ::hxd::res::Loader loader;
		 ::h2d::Font font;
		::Array< ::Dynamic> sdfFonts;
		 ::h2d::Font toFont();
		::Dynamic toFont_dyn();

		 ::h2d::Font toSdfFont( ::Dynamic size,::hx::Null< int >  channel,::hx::Null< Float >  alphaCutoff,::hx::Null< Float >  smoothing);
		::Dynamic toSdfFont_dyn();

		 ::h2d::Tile resolveSdfTile(::String path);
		::Dynamic resolveSdfTile_dyn();

		 ::h2d::Tile resolveTile(::String path);
		::Dynamic resolveTile_dyn();

};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_BitmapFont */ 
