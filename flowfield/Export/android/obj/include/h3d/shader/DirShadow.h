#ifndef INCLUDED_h3d_shader_DirShadow
#define INCLUDED_h3d_shader_DirShadow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,shader,DirShadow)
HX_DECLARE_CLASS1(hxsl,Channel)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES DirShadow_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef DirShadow_obj OBJ_;
		DirShadow_obj();

	public:
		enum { _hx_ClassId = 0x26d7a78f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.DirShadow")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.DirShadow"); }
		static ::hx::ObjectPtr< DirShadow_obj > __new();
		static ::hx::ObjectPtr< DirShadow_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DirShadow_obj();

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
		::String __ToString() const { return HX_("DirShadow",ed,d0,14,54); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		bool enable__;
		bool get_enable();
		::Dynamic get_enable_dyn();

		bool set_enable(bool _v);
		::Dynamic set_enable_dyn();

		bool USE_ESM__;
		bool get_USE_ESM();
		::Dynamic get_USE_ESM_dyn();

		bool set_USE_ESM(bool _v);
		::Dynamic set_USE_ESM_dyn();

		Float shadowPower__;
		Float get_shadowPower();
		::Dynamic get_shadowPower_dyn();

		Float set_shadowPower(Float _v);
		::Dynamic set_shadowPower_dyn();

		bool USE_PCF__;
		bool get_USE_PCF();
		::Dynamic get_USE_PCF_dyn();

		bool set_USE_PCF(bool _v);
		::Dynamic set_USE_PCF_dyn();

		int pcfQuality__;
		int get_pcfQuality();
		::Dynamic get_pcfQuality_dyn();

		int set_pcfQuality(int _v);
		::Dynamic set_pcfQuality_dyn();

		Float pcfScale__;
		Float get_pcfScale();
		::Dynamic get_pcfScale_dyn();

		Float set_pcfScale(Float _v);
		::Dynamic set_pcfScale_dyn();

		 ::h3d::Vector shadowRes__;
		 ::h3d::Vector get_shadowRes();
		::Dynamic get_shadowRes_dyn();

		 ::h3d::Vector set_shadowRes( ::h3d::Vector _v);
		::Dynamic set_shadowRes_dyn();

		 ::h3d::mat::Texture shadowMap__;
		 ::h3d::mat::Texture get_shadowMap();
		::Dynamic get_shadowMap_dyn();

		 ::h3d::mat::Texture set_shadowMap( ::h3d::mat::Texture _v);
		::Dynamic set_shadowMap_dyn();

		 ::hxsl::Channel shadowMapChannel__;
		 ::hxsl::Channel get_shadowMapChannel();
		::Dynamic get_shadowMapChannel_dyn();

		 ::hxsl::Channel set_shadowMapChannel( ::hxsl::Channel v);
		::Dynamic set_shadowMapChannel_dyn();

		 ::h3d::Matrix shadowProj__;
		 ::h3d::Matrix get_shadowProj();
		::Dynamic get_shadowProj_dyn();

		 ::h3d::Matrix set_shadowProj( ::h3d::Matrix _v);
		::Dynamic set_shadowProj_dyn();

		Float shadowBias__;
		Float get_shadowBias();
		::Dynamic get_shadowBias_dyn();

		Float set_shadowBias(Float _v);
		::Dynamic set_shadowBias_dyn();

		::Array< ::Dynamic> poissonDiskLow__;
		::Array< ::Dynamic> get_poissonDiskLow();
		::Dynamic get_poissonDiskLow_dyn();

		::Array< ::Dynamic> set_poissonDiskLow(::Array< ::Dynamic> _v);
		::Dynamic set_poissonDiskLow_dyn();

		::Array< ::Dynamic> poissonDiskHigh__;
		::Array< ::Dynamic> get_poissonDiskHigh();
		::Dynamic get_poissonDiskHigh_dyn();

		::Array< ::Dynamic> set_poissonDiskHigh(::Array< ::Dynamic> _v);
		::Dynamic set_poissonDiskHigh_dyn();

		::Array< ::Dynamic> poissonDiskVeryHigh__;
		::Array< ::Dynamic> get_poissonDiskVeryHigh();
		::Dynamic get_poissonDiskVeryHigh_dyn();

		::Array< ::Dynamic> set_poissonDiskVeryHigh(::Array< ::Dynamic> _v);
		::Dynamic set_poissonDiskVeryHigh_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_DirShadow */ 
