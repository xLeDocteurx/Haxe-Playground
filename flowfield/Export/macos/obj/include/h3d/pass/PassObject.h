#ifndef INCLUDED_h3d_pass_PassObject
#define INCLUDED_h3d_pass_PassObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_242e190052f3b972_14_new)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,pass,PassObject)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)
HX_DECLARE_CLASS1(hxsl,ShaderList)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES PassObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PassObject_obj OBJ_;
		PassObject_obj();

	public:
		enum { _hx_ClassId = 0x0fcbad1a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.PassObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.PassObject"); }

		inline static ::hx::ObjectPtr< PassObject_obj > __new() {
			::hx::ObjectPtr< PassObject_obj > __this = new PassObject_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PassObject_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PassObject_obj *__this = (PassObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PassObject_obj), true, "h3d.pass.PassObject"));
			*(void **)__this = PassObject_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_242e190052f3b972_14_new)
HXDLIN(  14)		( ( ::h3d::pass::PassObject)(__this) )->texture = 0;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PassObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PassObject",90,ce,5f,ae); }

		 ::h3d::pass::PassObject next;
		 ::h3d::pass::PassObject nextAlloc;
		 ::h3d::mat::Pass pass;
		 ::h3d::scene::Object obj;
		int index;
		 ::hxsl::ShaderList shaders;
		 ::hxsl::RuntimeShader shader;
		Float depth;
		int texture;
};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_PassObject */ 
