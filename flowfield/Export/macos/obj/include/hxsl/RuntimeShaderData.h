#ifndef INCLUDED_hxsl_RuntimeShaderData
#define INCLUDED_hxsl_RuntimeShaderData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_01a920fe5ba4c43f_59_new)
HX_DECLARE_CLASS1(hxsl,AllocGlobal)
HX_DECLARE_CLASS1(hxsl,AllocParam)
HX_DECLARE_CLASS1(hxsl,RuntimeShaderData)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES RuntimeShaderData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RuntimeShaderData_obj OBJ_;
		RuntimeShaderData_obj();

	public:
		enum { _hx_ClassId = 0x3e50be5a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.RuntimeShaderData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.RuntimeShaderData"); }

		inline static ::hx::ObjectPtr< RuntimeShaderData_obj > __new() {
			::hx::ObjectPtr< RuntimeShaderData_obj > __this = new RuntimeShaderData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< RuntimeShaderData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			RuntimeShaderData_obj *__this = (RuntimeShaderData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RuntimeShaderData_obj), true, "hxsl.RuntimeShaderData"));
			*(void **)__this = RuntimeShaderData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_01a920fe5ba4c43f_59_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RuntimeShaderData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RuntimeShaderData",c7,2e,a7,cf); }

		bool vertex;
		 ::Dynamic data;
		::String code;
		 ::hxsl::AllocParam params;
		int paramsSize;
		 ::hxsl::AllocGlobal globals;
		int globalsSize;
		 ::hxsl::AllocParam textures;
		int texturesCount;
		 ::hxsl::AllocParam buffers;
		int bufferCount;
		::Array< Float > consts;
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_RuntimeShaderData */ 
