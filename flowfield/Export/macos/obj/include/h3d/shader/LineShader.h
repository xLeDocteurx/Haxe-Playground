#ifndef INCLUDED_h3d_shader_LineShader
#define INCLUDED_h3d_shader_LineShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS2(h3d,shader,LineShader)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES LineShader_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef LineShader_obj OBJ_;
		LineShader_obj();

	public:
		enum { _hx_ClassId = 0x63e24baf };

		void __construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_lengthScale);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.LineShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.LineShader"); }
		static ::hx::ObjectPtr< LineShader_obj > __new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_lengthScale);
		static ::hx::ObjectPtr< LineShader_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_lengthScale);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LineShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LineShader",59,be,79,e8); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		Float lengthScale__;
		Float get_lengthScale();
		::Dynamic get_lengthScale_dyn();

		Float set_lengthScale(Float _v);
		::Dynamic set_lengthScale_dyn();

		Float width__;
		Float get_width();
		::Dynamic get_width_dyn();

		Float set_width(Float _v);
		::Dynamic set_width_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_LineShader */ 
