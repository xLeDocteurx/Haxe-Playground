#ifndef INCLUDED_h3d_shader_UVDelta
#define INCLUDED_h3d_shader_UVDelta

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,shader,UVDelta)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES UVDelta_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef UVDelta_obj OBJ_;
		UVDelta_obj();

	public:
		enum { _hx_ClassId = 0x451857f9 };

		void __construct(::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_sx,::hx::Null< Float >  __o_sy);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.UVDelta")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.UVDelta"); }
		static ::hx::ObjectPtr< UVDelta_obj > __new(::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_sx,::hx::Null< Float >  __o_sy);
		static ::hx::ObjectPtr< UVDelta_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_sx,::hx::Null< Float >  __o_sy);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UVDelta_obj();

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
		::String __ToString() const { return HX_("UVDelta",d7,cd,a5,9b); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		 ::h3d::Vector uvDelta__;
		 ::h3d::Vector get_uvDelta();
		::Dynamic get_uvDelta_dyn();

		 ::h3d::Vector set_uvDelta( ::h3d::Vector _v);
		::Dynamic set_uvDelta_dyn();

		 ::h3d::Vector uvScale__;
		 ::h3d::Vector get_uvScale();
		::Dynamic get_uvScale_dyn();

		 ::h3d::Vector set_uvScale( ::h3d::Vector _v);
		::Dynamic set_uvScale_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_UVDelta */ 
