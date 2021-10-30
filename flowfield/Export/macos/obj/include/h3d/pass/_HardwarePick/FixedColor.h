#ifndef INCLUDED_h3d_pass__HardwarePick_FixedColor
#define INCLUDED_h3d_pass__HardwarePick_FixedColor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS3(h3d,pass,_HardwarePick,FixedColor)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace pass{
namespace _HardwarePick{


class HXCPP_CLASS_ATTRIBUTES FixedColor_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef FixedColor_obj OBJ_;
		FixedColor_obj();

	public:
		enum { _hx_ClassId = 0x5c7370f1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass._HardwarePick.FixedColor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass._HardwarePick.FixedColor"); }
		static ::hx::ObjectPtr< FixedColor_obj > __new();
		static ::hx::ObjectPtr< FixedColor_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FixedColor_obj();

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
		::String __ToString() const { return HX_("FixedColor",6f,27,38,2a); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		 ::h3d::Vector colorID__;
		 ::h3d::Vector get_colorID();
		::Dynamic get_colorID_dyn();

		 ::h3d::Vector set_colorID( ::h3d::Vector _v);
		::Dynamic set_colorID_dyn();

		 ::h3d::Vector viewport__;
		 ::h3d::Vector get_viewport();
		::Dynamic get_viewport_dyn();

		 ::h3d::Vector set_viewport( ::h3d::Vector _v);
		::Dynamic set_viewport_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace pass
} // end namespace _HardwarePick

#endif /* INCLUDED_h3d_pass__HardwarePick_FixedColor */ 
