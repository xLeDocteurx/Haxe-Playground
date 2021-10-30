#ifndef INCLUDED_h3d_pass_Base
#define INCLUDED_h3d_pass_Base

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,pass,Base)
HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES Base_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Base_obj OBJ_;
		Base_obj();

	public:
		enum { _hx_ClassId = 0x2eacfc8f };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.Base")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.Base"); }
		static ::hx::ObjectPtr< Base_obj > __new(::String name);
		static ::hx::ObjectPtr< Base_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Base_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Base",31,14,ea,2b); }

		 ::h3d::scene::RenderContext ctx;
		::String name;
		virtual  ::hxsl::RuntimeShader compileShader( ::h3d::mat::Pass p);
		::Dynamic compileShader_dyn();

		void setContext( ::h3d::scene::RenderContext ctx);
		::Dynamic setContext_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

		virtual void draw( ::h3d::pass::PassList passes, ::Dynamic sort);
		::Dynamic draw_dyn();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_Base */ 
