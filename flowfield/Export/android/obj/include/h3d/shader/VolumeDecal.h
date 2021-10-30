#ifndef INCLUDED_h3d_shader_VolumeDecal
#define INCLUDED_h3d_shader_VolumeDecal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,shader,VolumeDecal)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES VolumeDecal_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef VolumeDecal_obj OBJ_;
		VolumeDecal_obj();

	public:
		enum { _hx_ClassId = 0x78042df5 };

		void __construct(Float objectWidth,Float objectHeight);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.VolumeDecal")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.VolumeDecal"); }
		static ::hx::ObjectPtr< VolumeDecal_obj > __new(Float objectWidth,Float objectHeight);
		static ::hx::ObjectPtr< VolumeDecal_obj > __alloc(::hx::Ctx *_hx_ctx,Float objectWidth,Float objectHeight);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VolumeDecal_obj();

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
		::String __ToString() const { return HX_("VolumeDecal",d3,ea,e4,4d); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		 ::h3d::Vector scale__;
		 ::h3d::Vector get_scale();
		::Dynamic get_scale_dyn();

		 ::h3d::Vector set_scale( ::h3d::Vector _v);
		::Dynamic set_scale_dyn();

		 ::h3d::Vector normal__;
		 ::h3d::Vector get_normal();
		::Dynamic get_normal_dyn();

		 ::h3d::Vector set_normal( ::h3d::Vector _v);
		::Dynamic set_normal_dyn();

		 ::h3d::Vector tangent__;
		 ::h3d::Vector get_tangent();
		::Dynamic get_tangent_dyn();

		 ::h3d::Vector set_tangent( ::h3d::Vector _v);
		::Dynamic set_tangent_dyn();

		bool isCentered__;
		bool get_isCentered();
		::Dynamic get_isCentered_dyn();

		bool set_isCentered(bool _v);
		::Dynamic set_isCentered_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_VolumeDecal */ 
