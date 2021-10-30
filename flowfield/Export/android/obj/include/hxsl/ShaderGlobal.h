#ifndef INCLUDED_hxsl_ShaderGlobal
#define INCLUDED_hxsl_ShaderGlobal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_124c6b4599e4c68a_18_new)
HX_DECLARE_CLASS1(hxsl,ShaderGlobal)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES ShaderGlobal_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderGlobal_obj OBJ_;
		ShaderGlobal_obj();

	public:
		enum { _hx_ClassId = 0x4fffa971 };

		void __construct( ::Dynamic v,int gid);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.ShaderGlobal")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.ShaderGlobal"); }

		inline static ::hx::ObjectPtr< ShaderGlobal_obj > __new( ::Dynamic v,int gid) {
			::hx::ObjectPtr< ShaderGlobal_obj > __this = new ShaderGlobal_obj();
			__this->__construct(v,gid);
			return __this;
		}

		inline static ::hx::ObjectPtr< ShaderGlobal_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic v,int gid) {
			ShaderGlobal_obj *__this = (ShaderGlobal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderGlobal_obj), true, "hxsl.ShaderGlobal"));
			*(void **)__this = ShaderGlobal_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_124c6b4599e4c68a_18_new)
HXLINE(  19)		( ( ::hxsl::ShaderGlobal)(__this) )->v = v;
HXLINE(  20)		( ( ::hxsl::ShaderGlobal)(__this) )->globalId = gid;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderGlobal_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderGlobal",88,1a,ad,df); }

		 ::Dynamic v;
		int globalId;
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_ShaderGlobal */ 
