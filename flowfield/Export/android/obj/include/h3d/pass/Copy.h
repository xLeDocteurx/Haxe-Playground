#ifndef INCLUDED_h3d_pass_Copy
#define INCLUDED_h3d_pass_Copy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
HX_DECLARE_CLASS1(h2d,BlendMode)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,pass,Copy)
HX_DECLARE_CLASS2(h3d,pass,ScreenFx)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES Copy_obj : public  ::h3d::pass::ScreenFx_obj
{
	public:
		typedef  ::h3d::pass::ScreenFx_obj super;
		typedef Copy_obj OBJ_;
		Copy_obj();

	public:
		enum { _hx_ClassId = 0x00578117 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.Copy")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.Copy"); }
		static ::hx::ObjectPtr< Copy_obj > __new();
		static ::hx::ObjectPtr< Copy_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Copy_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Copy",d5,e7,9d,2c); }

		static void run( ::h3d::mat::Texture from, ::h3d::mat::Texture to, ::h2d::BlendMode blend, ::h3d::mat::Pass pass, ::Dynamic layer);
		static ::Dynamic run_dyn();

		void apply( ::h3d::mat::Texture from, ::h3d::mat::Texture to, ::h2d::BlendMode blend, ::h3d::mat::Pass customPass, ::Dynamic layer);
		::Dynamic apply_dyn();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_Copy */ 
