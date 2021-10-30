#ifndef INCLUDED_h3d_pass__Copy_CopyShader
#define INCLUDED_h3d_pass__Copy_CopyShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
#endif
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS3(h3d,pass,_Copy,CopyShader)
HX_DECLARE_CLASS2(h3d,shader,ScreenShader)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace pass{
namespace _Copy{


class HXCPP_CLASS_ATTRIBUTES CopyShader_obj : public  ::h3d::shader::ScreenShader_obj
{
	public:
		typedef  ::h3d::shader::ScreenShader_obj super;
		typedef CopyShader_obj OBJ_;
		CopyShader_obj();

	public:
		enum { _hx_ClassId = 0x5e767404 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass._Copy.CopyShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass._Copy.CopyShader"); }
		static ::hx::ObjectPtr< CopyShader_obj > __new();
		static ::hx::ObjectPtr< CopyShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CopyShader_obj();

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
		::String __ToString() const { return HX_("CopyShader",da,28,96,c9); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		 ::h3d::mat::Texture texture__;
		 ::h3d::mat::Texture get_texture();
		::Dynamic get_texture_dyn();

		 ::h3d::mat::Texture set_texture( ::h3d::mat::Texture _v);
		::Dynamic set_texture_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace pass
} // end namespace _Copy

#endif /* INCLUDED_h3d_pass__Copy_CopyShader */ 
