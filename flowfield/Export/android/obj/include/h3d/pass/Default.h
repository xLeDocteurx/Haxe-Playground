#ifndef INCLUDED_h3d_pass_Default
#define INCLUDED_h3d_pass_Default

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_pass_Base
#include <h3d/pass/Base.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,pass,Base)
HX_DECLARE_CLASS2(h3d,pass,Default)
HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS2(h3d,pass,PassObject)
HX_DECLARE_CLASS2(h3d,pass,ShaderManager)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Output)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)
HX_DECLARE_CLASS1(hxsl,ShaderList)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES Default_obj : public  ::h3d::pass::Base_obj
{
	public:
		typedef  ::h3d::pass::Base_obj super;
		typedef Default_obj OBJ_;
		Default_obj();

	public:
		enum { _hx_ClassId = 0x6e5907d7 };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.Default")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.Default"); }
		static ::hx::ObjectPtr< Default_obj > __new(::String name);
		static ::hx::ObjectPtr< Default_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Default_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Default",a1,00,15,69); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::h3d::pass::ShaderManager manager;
		 ::Dynamic defaultSort;
		Dynamic defaultSort_dyn() { return defaultSort;}
		 ::hxsl::Globals get_globals();
		::Dynamic get_globals_dyn();

		 ::h3d::Vector getCurrentPixelSize();
		::Dynamic getCurrentPixelSize_dyn();

		virtual ::Array< ::Dynamic> getOutputs();
		::Dynamic getOutputs_dyn();

		 ::hxsl::RuntimeShader compileShader( ::h3d::mat::Pass p);

		 ::hxsl::ShaderList processShaders( ::h3d::pass::PassObject p, ::hxsl::ShaderList shaders);
		::Dynamic processShaders_dyn();

		void setupShaders( ::h3d::pass::PassList passes);
		::Dynamic setupShaders_dyn();

		void log(::String str);
		::Dynamic log_dyn();

		virtual void drawObject( ::h3d::pass::PassObject p);
		::Dynamic drawObject_dyn();

		virtual void draw( ::h3d::pass::PassList passes, ::Dynamic sort);

		int cameraView_id;
		 ::h3d::Matrix get_cameraView();
		::Dynamic get_cameraView_dyn();

		 ::h3d::Matrix set_cameraView( ::h3d::Matrix v);
		::Dynamic set_cameraView_dyn();

		int cameraNear_id;
		Float get_cameraNear();
		::Dynamic get_cameraNear_dyn();

		Float set_cameraNear(Float v);
		::Dynamic set_cameraNear_dyn();

		int cameraFar_id;
		Float get_cameraFar();
		::Dynamic get_cameraFar_dyn();

		Float set_cameraFar(Float v);
		::Dynamic set_cameraFar_dyn();

		int cameraProj_id;
		 ::h3d::Matrix get_cameraProj();
		::Dynamic get_cameraProj_dyn();

		 ::h3d::Matrix set_cameraProj( ::h3d::Matrix v);
		::Dynamic set_cameraProj_dyn();

		int cameraPos_id;
		 ::h3d::Vector get_cameraPos();
		::Dynamic get_cameraPos_dyn();

		 ::h3d::Vector set_cameraPos( ::h3d::Vector v);
		::Dynamic set_cameraPos_dyn();

		int cameraProjDiag_id;
		 ::h3d::Vector get_cameraProjDiag();
		::Dynamic get_cameraProjDiag_dyn();

		 ::h3d::Vector set_cameraProjDiag( ::h3d::Vector v);
		::Dynamic set_cameraProjDiag_dyn();

		int cameraProjFlip_id;
		Float get_cameraProjFlip();
		::Dynamic get_cameraProjFlip_dyn();

		Float set_cameraProjFlip(Float v);
		::Dynamic set_cameraProjFlip_dyn();

		int cameraViewProj_id;
		 ::h3d::Matrix get_cameraViewProj();
		::Dynamic get_cameraViewProj_dyn();

		 ::h3d::Matrix set_cameraViewProj( ::h3d::Matrix v);
		::Dynamic set_cameraViewProj_dyn();

		int cameraInverseViewProj_id;
		 ::h3d::Matrix get_cameraInverseViewProj();
		::Dynamic get_cameraInverseViewProj_dyn();

		 ::h3d::Matrix set_cameraInverseViewProj( ::h3d::Matrix v);
		::Dynamic set_cameraInverseViewProj_dyn();

		int globalTime_id;
		Float get_globalTime();
		::Dynamic get_globalTime_dyn();

		Float set_globalTime(Float v);
		::Dynamic set_globalTime_dyn();

		int pixelSize_id;
		 ::h3d::Vector get_pixelSize();
		::Dynamic get_pixelSize_dyn();

		 ::h3d::Vector set_pixelSize( ::h3d::Vector v);
		::Dynamic set_pixelSize_dyn();

		int globalModelView_id;
		 ::h3d::Matrix get_globalModelView();
		::Dynamic get_globalModelView_dyn();

		 ::h3d::Matrix set_globalModelView( ::h3d::Matrix v);
		::Dynamic set_globalModelView_dyn();

		int globalModelViewInverse_id;
		 ::h3d::Matrix get_globalModelViewInverse();
		::Dynamic get_globalModelViewInverse_dyn();

		 ::h3d::Matrix set_globalModelViewInverse( ::h3d::Matrix v);
		::Dynamic set_globalModelViewInverse_dyn();

		void initGlobals();
		::Dynamic initGlobals_dyn();

		virtual void setGlobals();
		::Dynamic setGlobals_dyn();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_Default */ 
