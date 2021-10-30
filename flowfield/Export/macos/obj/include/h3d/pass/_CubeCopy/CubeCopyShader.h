#ifndef INCLUDED_h3d_pass__CubeCopy_CubeCopyShader
#define INCLUDED_h3d_pass__CubeCopy_CubeCopyShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS3(h3d,pass,_CubeCopy,CubeCopyShader)
HX_DECLARE_CLASS2(h3d,shader,ScreenShader)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace pass{
namespace _CubeCopy{


class HXCPP_CLASS_ATTRIBUTES CubeCopyShader_obj : public  ::h3d::shader::ScreenShader_obj
{
	public:
		typedef  ::h3d::shader::ScreenShader_obj super;
		typedef CubeCopyShader_obj OBJ_;
		CubeCopyShader_obj();

	public:
		enum { _hx_ClassId = 0x46d9066e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass._CubeCopy.CubeCopyShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass._CubeCopy.CubeCopyShader"); }
		static ::hx::ObjectPtr< CubeCopyShader_obj > __new();
		static ::hx::ObjectPtr< CubeCopyShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CubeCopyShader_obj();

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
		::String __ToString() const { return HX_("CubeCopyShader",2f,9e,f4,a0); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		 ::h3d::mat::Texture texture__;
		 ::h3d::mat::Texture get_texture();
		::Dynamic get_texture_dyn();

		 ::h3d::mat::Texture set_texture( ::h3d::mat::Texture _v);
		::Dynamic set_texture_dyn();

		 ::h3d::Matrix mat__;
		 ::h3d::Matrix get_mat();
		::Dynamic get_mat_dyn();

		 ::h3d::Matrix set_mat( ::h3d::Matrix _v);
		::Dynamic set_mat_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace pass
} // end namespace _CubeCopy

#endif /* INCLUDED_h3d_pass__CubeCopy_CubeCopyShader */ 
