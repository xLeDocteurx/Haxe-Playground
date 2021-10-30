#ifndef INCLUDED_h3d_shader_ColorAdd
#define INCLUDED_h3d_shader_ColorAdd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,shader,ColorAdd)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES ColorAdd_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef ColorAdd_obj OBJ_;
		ColorAdd_obj();

	public:
		enum { _hx_ClassId = 0x46219458 };

		void __construct(::hx::Null< int >  __o_color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.ColorAdd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.ColorAdd"); }
		static ::hx::ObjectPtr< ColorAdd_obj > __new(::hx::Null< int >  __o_color);
		static ::hx::ObjectPtr< ColorAdd_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorAdd_obj();

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
		::String __ToString() const { return HX_("ColorAdd",9e,b4,93,63); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		 ::h3d::Vector color__;
		 ::h3d::Vector get_color();
		::Dynamic get_color_dyn();

		 ::h3d::Vector set_color( ::h3d::Vector _v);
		::Dynamic set_color_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_ColorAdd */ 
