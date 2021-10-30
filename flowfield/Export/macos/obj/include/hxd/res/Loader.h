#ifndef INCLUDED_hxd_res_Loader
#define INCLUDED_hxd_res_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(hxd,fs,FileSystem)
HX_DECLARE_CLASS2(hxd,res,Any)
HX_DECLARE_CLASS2(hxd,res,Loader)
HX_DECLARE_CLASS2(hxd,res,Resource)

namespace hxd{
namespace res{


class HXCPP_CLASS_ATTRIBUTES Loader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Loader_obj OBJ_;
		Loader_obj();

	public:
		enum { _hx_ClassId = 0x4742d87f };

		void __construct(::Dynamic fs);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.res.Loader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.res.Loader"); }
		static ::hx::ObjectPtr< Loader_obj > __new(::Dynamic fs);
		static ::hx::ObjectPtr< Loader_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic fs);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Loader_obj();

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
		::String __ToString() const { return HX_("Loader",33,bc,03,8d); }

		static  ::hxd::res::Loader currentInstance;
		::Dynamic fs;
		 ::haxe::ds::StringMap cache;
		void cleanCache();
		::Dynamic cleanCache_dyn();

		::Array< ::Dynamic> dir(::String path);
		::Dynamic dir_dyn();

		bool exists(::String path);
		::Dynamic exists_dyn();

		 ::hxd::res::Any load(::String path);
		::Dynamic load_dyn();

		 ::Dynamic loadCache(::String path,::hx::Class c);
		::Dynamic loadCache_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_Loader */ 
