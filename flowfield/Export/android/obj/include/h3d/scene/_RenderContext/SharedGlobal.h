#ifndef INCLUDED_h3d_scene__RenderContext_SharedGlobal
#define INCLUDED_h3d_scene__RenderContext_SharedGlobal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_1a70052587bed873_6_new)
HX_DECLARE_CLASS3(h3d,scene,_RenderContext,SharedGlobal)

namespace h3d{
namespace scene{
namespace _RenderContext{


class HXCPP_CLASS_ATTRIBUTES SharedGlobal_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SharedGlobal_obj OBJ_;
		SharedGlobal_obj();

	public:
		enum { _hx_ClassId = 0x12c91ed5 };

		void __construct(int gid, ::Dynamic value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene._RenderContext.SharedGlobal")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene._RenderContext.SharedGlobal"); }

		inline static ::hx::ObjectPtr< SharedGlobal_obj > __new(int gid, ::Dynamic value) {
			::hx::ObjectPtr< SharedGlobal_obj > __this = new SharedGlobal_obj();
			__this->__construct(gid,value);
			return __this;
		}

		inline static ::hx::ObjectPtr< SharedGlobal_obj > __alloc(::hx::Ctx *_hx_ctx,int gid, ::Dynamic value) {
			SharedGlobal_obj *__this = (SharedGlobal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SharedGlobal_obj), true, "h3d.scene._RenderContext.SharedGlobal"));
			*(void **)__this = SharedGlobal_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_1a70052587bed873_6_new)
HXLINE(   7)		( ( ::h3d::scene::_RenderContext::SharedGlobal)(__this) )->gid = gid;
HXLINE(   8)		( ( ::h3d::scene::_RenderContext::SharedGlobal)(__this) )->value = value;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SharedGlobal_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SharedGlobal",08,5a,b4,22); }

		int gid;
		 ::Dynamic value;
};

} // end namespace h3d
} // end namespace scene
} // end namespace _RenderContext

#endif /* INCLUDED_h3d_scene__RenderContext_SharedGlobal */ 
