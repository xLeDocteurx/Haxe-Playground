#ifndef INCLUDED_hxd_res_Any
#define INCLUDED_hxd_res_Any

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_hxd_res_Any)
HX_DECLARE_CLASS2(hxd,res,Any)
HX_DECLARE_CLASS2(hxd,res,Image)
HX_DECLARE_CLASS2(hxd,res,Loader)
HX_DECLARE_CLASS2(hxd,res,Model)
HX_DECLARE_CLASS2(hxd,res,Resource)
HX_DECLARE_CLASS2(hxd,res,Sound)

namespace hxd{
namespace res{


class HXCPP_CLASS_ATTRIBUTES Any_obj : public  ::hxd::res::Resource_obj
{
	public:
		typedef  ::hxd::res::Resource_obj super;
		typedef Any_obj OBJ_;
		Any_obj();

	public:
		enum { _hx_ClassId = 0x1de72f00 };

		void __construct( ::hxd::res::Loader loader, ::hxd::fs::FileEntry entry);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.res.Any")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.res.Any"); }
		static ::hx::ObjectPtr< Any_obj > __new( ::hxd::res::Loader loader, ::hxd::fs::FileEntry entry);
		static ::hx::ObjectPtr< Any_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::res::Loader loader, ::hxd::fs::FileEntry entry);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Any_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Any",cc,b2,31,00); }

		static  ::hxd::res::Any fromBytes(::String path, ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		 ::hxd::res::Loader loader;
		 ::hxd::res::Model toModel();
		::Dynamic toModel_dyn();

		 ::h3d::mat::Texture toTexture();
		::Dynamic toTexture_dyn();

		 ::h2d::Tile toTile();
		::Dynamic toTile_dyn();

		::String toText();
		::Dynamic toText_dyn();

		 ::hxd::res::Image toImage();
		::Dynamic toImage_dyn();

		 ::hxd::res::Sound toSound();
		::Dynamic toSound_dyn();

		 ::hxd::res::Resource toPrefab();
		::Dynamic toPrefab_dyn();

		 ::Dynamic to(::hx::Class c);
		::Dynamic to_dyn();

		 ::hxd::impl::ArrayIterator_hxd_res_Any iterator();
		::Dynamic iterator_dyn();

};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_Any */ 
