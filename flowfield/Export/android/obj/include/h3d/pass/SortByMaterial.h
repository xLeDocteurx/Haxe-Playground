#ifndef INCLUDED_h3d_pass_SortByMaterial
#define INCLUDED_h3d_pass_SortByMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS2(h3d,pass,SortByMaterial)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES SortByMaterial_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SortByMaterial_obj OBJ_;
		SortByMaterial_obj();

	public:
		enum { _hx_ClassId = 0x77536a46 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.SortByMaterial")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.SortByMaterial"); }
		static ::hx::ObjectPtr< SortByMaterial_obj > __new();
		static ::hx::ObjectPtr< SortByMaterial_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SortByMaterial_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SortByMaterial",bc,7e,54,1a); }

		int shaderCount;
		int textureCount;
		::Array< int > shaderIdMap;
		::Array< int > textureIdMap;
		void sort( ::h3d::pass::PassList passes);
		::Dynamic sort_dyn();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_SortByMaterial */ 
