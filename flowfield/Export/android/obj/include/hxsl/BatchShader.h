#ifndef INCLUDED_hxsl_BatchShader
#define INCLUDED_hxsl_BatchShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(hxsl,BatchShader)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES BatchShader_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef BatchShader_obj OBJ_;
		BatchShader_obj();

	public:
		enum { _hx_ClassId = 0x7feffd0e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.BatchShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.BatchShader"); }
		static ::hx::ObjectPtr< BatchShader_obj > __new();
		static ::hx::ObjectPtr< BatchShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BatchShader_obj();

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
		::String __ToString() const { return HX_("BatchShader",5f,3a,e2,ff); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		int Batch_Count__;
		int get_Batch_Count();
		::Dynamic get_Batch_Count_dyn();

		int set_Batch_Count(int _v);
		::Dynamic set_Batch_Count_dyn();

		 ::h3d::Buffer Batch_Buffer__;
		 ::h3d::Buffer get_Batch_Buffer();
		::Dynamic get_Batch_Buffer_dyn();

		 ::h3d::Buffer set_Batch_Buffer( ::h3d::Buffer _v);
		::Dynamic set_Batch_Buffer_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_BatchShader */ 
