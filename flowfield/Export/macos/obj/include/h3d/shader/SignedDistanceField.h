#ifndef INCLUDED_h3d_shader_SignedDistanceField
#define INCLUDED_h3d_shader_SignedDistanceField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS2(h3d,shader,SignedDistanceField)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES SignedDistanceField_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef SignedDistanceField_obj OBJ_;
		SignedDistanceField_obj();

	public:
		enum { _hx_ClassId = 0x6bb782cb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.SignedDistanceField")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.SignedDistanceField"); }
		static ::hx::ObjectPtr< SignedDistanceField_obj > __new();
		static ::hx::ObjectPtr< SignedDistanceField_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SignedDistanceField_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SignedDistanceField",a9,4d,0d,58); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		int channel__;
		int get_channel();
		::Dynamic get_channel_dyn();

		int set_channel(int _v);
		::Dynamic set_channel_dyn();

		Float alphaCutoff__;
		Float get_alphaCutoff();
		::Dynamic get_alphaCutoff_dyn();

		Float set_alphaCutoff(Float _v);
		::Dynamic set_alphaCutoff_dyn();

		Float smoothing__;
		Float get_smoothing();
		::Dynamic get_smoothing_dyn();

		Float set_smoothing(Float _v);
		::Dynamic set_smoothing_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_SignedDistanceField */ 
