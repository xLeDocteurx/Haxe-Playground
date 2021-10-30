#ifndef INCLUDED_h3d_pass_DefaultShadowMap
#define INCLUDED_h3d_pass_DefaultShadowMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_pass_DirShadowMap
#include <h3d/pass/DirShadowMap.h>
#endif
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,pass,Base)
HX_DECLARE_CLASS2(h3d,pass,Default)
HX_DECLARE_CLASS2(h3d,pass,DefaultShadowMap)
HX_DECLARE_CLASS2(h3d,pass,DirShadowMap)
HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS2(h3d,pass,Shadows)
HX_DECLARE_CLASS1(hxd,PixelFormat)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES DefaultShadowMap_obj : public  ::h3d::pass::DirShadowMap_obj
{
	public:
		typedef  ::h3d::pass::DirShadowMap_obj super;
		typedef DefaultShadowMap_obj OBJ_;
		DefaultShadowMap_obj();

	public:
		enum { _hx_ClassId = 0x1e11f035 };

		void __construct(::hx::Null< int >  __o_size, ::hxd::PixelFormat format);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.DefaultShadowMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.DefaultShadowMap"); }
		static ::hx::ObjectPtr< DefaultShadowMap_obj > __new(::hx::Null< int >  __o_size, ::hxd::PixelFormat format);
		static ::hx::ObjectPtr< DefaultShadowMap_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_size, ::hxd::PixelFormat format);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultShadowMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DefaultShadowMap",bb,69,93,d1); }

		int shadowMapId;
		int shadowProjId;
		int shadowColorId;
		int shadowPowerId;
		int shadowBiasId;
		 ::h3d::Vector color;
		void draw( ::h3d::pass::PassList passes, ::Dynamic sort);

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_DefaultShadowMap */ 
