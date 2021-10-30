#ifndef INCLUDED_hxd_fs_FileConverter
#define INCLUDED_hxd_fs_FileConverter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(hxd,fs,Convert)
HX_DECLARE_CLASS2(hxd,fs,FileConverter)
HX_DECLARE_CLASS2(hxd,fs,FileEntry)
HX_DECLARE_CLASS2(hxd,fs,LocalEntry)

namespace hxd{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES FileConverter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FileConverter_obj OBJ_;
		FileConverter_obj();

	public:
		enum { _hx_ClassId = 0x3a2b7b07 };

		void __construct(::String baseDir,::String configuration);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fs.FileConverter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fs.FileConverter"); }
		static ::hx::ObjectPtr< FileConverter_obj > __new(::String baseDir,::String configuration);
		static ::hx::ObjectPtr< FileConverter_obj > __alloc(::hx::Ctx *_hx_ctx,::String baseDir,::String configuration);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,FileConverter_obj *_hx_obj);
		//~FileConverter_obj();

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
		::String __ToString() const { return HX_("FileConverter",e4,aa,eb,c6); }

		static void __boot();
		static ::cpp::VirtualArray extraConfigs;
		static  ::Dynamic addConfig( ::Dynamic conf);
		static ::Dynamic addConfig_dyn();

		static int sortByRulePiority( ::Dynamic r1, ::Dynamic r2);
		static ::Dynamic sortByRulePiority_dyn();

		::String configuration;
		::String baseDir;
		::String tmpDir;
		 ::haxe::ds::StringMap configs;
		 ::Dynamic defaultConfig;
		 ::haxe::ds::StringMap cache;
		::Dynamic onConvert;
		inline ::Dynamic &onConvert_dyn() {return onConvert; }

		 ::Dynamic makeConfig( ::Dynamic obj);
		::Dynamic makeConfig_dyn();

		::Array< ::Dynamic> loadConvert(::String name);
		::Dynamic loadConvert_dyn();

		 ::Dynamic makeCommmand( ::Dynamic obj);
		::Dynamic makeCommmand_dyn();

		 ::Dynamic mergeRec( ::Dynamic a, ::Dynamic b);
		::Dynamic mergeRec_dyn();

		Float getFileTime(::String filePath);
		::Dynamic getFileTime_dyn();

		 ::Dynamic loadConfig(::String dir);
		::Dynamic loadConfig_dyn();

		 ::Dynamic getConvertRule(::String path);
		::Dynamic getConvertRule_dyn();

		void run( ::hxd::fs::LocalEntry e);
		::Dynamic run_dyn();

		void runConvert( ::hxd::fs::LocalEntry e, ::Dynamic cmd,::hx::Null< bool >  replaceExt);
		::Dynamic runConvert_dyn();

		void convertAndCache( ::hxd::fs::LocalEntry e,::String outFile, ::hxd::fs::Convert conv, ::Dynamic params);
		::Dynamic convertAndCache_dyn();

};

} // end namespace hxd
} // end namespace fs

#endif /* INCLUDED_hxd_fs_FileConverter */ 
