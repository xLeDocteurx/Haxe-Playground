#ifndef INCLUDED_hxsl_ShaderInstanceDesc
#define INCLUDED_hxsl_ShaderInstanceDesc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,ShaderInstanceDesc)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES ShaderInstanceDesc_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderInstanceDesc_obj OBJ_;
		ShaderInstanceDesc_obj();

	public:
		enum { _hx_ClassId = 0x78348f14 };

		void __construct( ::hxsl::SharedShader shader,int bits);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.ShaderInstanceDesc")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.ShaderInstanceDesc"); }
		static ::hx::ObjectPtr< ShaderInstanceDesc_obj > __new( ::hxsl::SharedShader shader,int bits);
		static ::hx::ObjectPtr< ShaderInstanceDesc_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxsl::SharedShader shader,int bits);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderInstanceDesc_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderInstanceDesc",6b,6b,7a,3d); }

		 ::hxsl::SharedShader shader;
		int bits;
		int index;
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_ShaderInstanceDesc */ 
