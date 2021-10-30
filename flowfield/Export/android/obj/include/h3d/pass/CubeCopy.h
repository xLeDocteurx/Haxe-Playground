#ifndef INCLUDED_h3d_pass_CubeCopy
#define INCLUDED_h3d_pass_CubeCopy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
HX_DECLARE_CLASS1(h2d,BlendMode)
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,pass,CubeCopy)
HX_DECLARE_CLASS2(h3d,pass,ScreenFx)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES CubeCopy_obj : public  ::h3d::pass::ScreenFx_obj
{
	public:
		typedef  ::h3d::pass::ScreenFx_obj super;
		typedef CubeCopy_obj OBJ_;
		CubeCopy_obj();

	public:
		enum { _hx_ClassId = 0x12d54774 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.CubeCopy")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.CubeCopy"); }
		static ::hx::ObjectPtr< CubeCopy_obj > __new();
		static ::hx::ObjectPtr< CubeCopy_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CubeCopy_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CubeCopy",6a,ff,92,7c); }

		static void run( ::h3d::mat::Texture from, ::h3d::mat::Texture to, ::h2d::BlendMode blend, ::h3d::mat::Pass pass);
		static ::Dynamic run_dyn();

		::Array< ::Dynamic> cubeDir;
		void apply( ::h3d::mat::Texture from, ::h3d::mat::Texture to, ::h2d::BlendMode blend, ::h3d::mat::Pass customPass);
		::Dynamic apply_dyn();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_CubeCopy */ 
