#ifndef INCLUDED_h3d_mat_BaseMaterial
#define INCLUDED_h3d_mat_BaseMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
HX_DECLARE_CLASS2(h3d,mat,BaseMaterial)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Shader)

namespace h3d{
namespace mat{


class HXCPP_CLASS_ATTRIBUTES BaseMaterial_obj : public  ::hxd::impl::AnyProps_obj
{
	public:
		typedef  ::hxd::impl::AnyProps_obj super;
		typedef BaseMaterial_obj OBJ_;
		BaseMaterial_obj();

	public:
		enum { _hx_ClassId = 0x5e9df023 };

		void __construct( ::hxsl::Shader shader);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.mat.BaseMaterial")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.mat.BaseMaterial"); }
		static ::hx::ObjectPtr< BaseMaterial_obj > __new( ::hxsl::Shader shader);
		static ::hx::ObjectPtr< BaseMaterial_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxsl::Shader shader);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseMaterial_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BaseMaterial",f8,45,aa,2c); }

		 ::h3d::mat::Pass passes;
		::String name;
		 ::Dynamic addPass( ::Dynamic p);
		::Dynamic addPass_dyn();

		bool removePass( ::h3d::mat::Pass p);
		::Dynamic removePass_dyn();

		 ::h3d::mat::Pass get_mainPass();
		::Dynamic get_mainPass_dyn();

		::Array< ::Dynamic> getPasses();
		::Dynamic getPasses_dyn();

		 ::h3d::mat::Pass getPass(::String name);
		::Dynamic getPass_dyn();

		 ::h3d::mat::Pass allocPass(::String name, ::Dynamic inheritMain);
		::Dynamic allocPass_dyn();

		virtual  ::h3d::mat::BaseMaterial clone( ::h3d::mat::BaseMaterial m);
		::Dynamic clone_dyn();

};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_BaseMaterial */ 
