#ifndef INCLUDED_h3d_mat_MaterialDatabase
#define INCLUDED_h3d_mat_MaterialDatabase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,BaseMaterial)
HX_DECLARE_CLASS2(h3d,mat,Material)
HX_DECLARE_CLASS2(h3d,mat,MaterialDatabase)
HX_DECLARE_CLASS2(h3d,mat,MaterialSetup)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS2(hxd,res,Resource)

namespace h3d{
namespace mat{


class HXCPP_CLASS_ATTRIBUTES MaterialDatabase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MaterialDatabase_obj OBJ_;
		MaterialDatabase_obj();

	public:
		enum { _hx_ClassId = 0x0c80aacd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.mat.MaterialDatabase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.mat.MaterialDatabase"); }
		static ::hx::ObjectPtr< MaterialDatabase_obj > __new();
		static ::hx::ObjectPtr< MaterialDatabase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MaterialDatabase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MaterialDatabase",22,0f,35,84); }

		 ::haxe::ds::StringMap db;
		::String getFilePath( ::hxd::res::Resource model);
		::Dynamic getFilePath_dyn();

		 ::Dynamic getModelData( ::hxd::res::Resource model);
		::Dynamic getModelData_dyn();

		void saveData( ::hxd::res::Resource model, ::Dynamic data);
		::Dynamic saveData_dyn();

		 ::Dynamic loadMatProps( ::h3d::mat::Material material, ::h3d::mat::MaterialSetup setup);
		::Dynamic loadMatProps_dyn();

		void saveMatProps( ::h3d::mat::Material material, ::h3d::mat::MaterialSetup setup);
		::Dynamic saveMatProps_dyn();

};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_MaterialDatabase */ 
