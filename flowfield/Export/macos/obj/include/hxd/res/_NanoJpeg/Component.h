#ifndef INCLUDED_hxd_res__NanoJpeg_Component
#define INCLUDED_hxd_res__NanoJpeg_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_5b38cacd7bf75827_50_new)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,res,_NanoJpeg,Component)

namespace hxd{
namespace res{
namespace _NanoJpeg{


class HXCPP_CLASS_ATTRIBUTES Component_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Component_obj OBJ_;
		Component_obj();

	public:
		enum { _hx_ClassId = 0x1875eb8e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.res._NanoJpeg.Component")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.res._NanoJpeg.Component"); }

		inline static ::hx::ObjectPtr< Component_obj > __new() {
			::hx::ObjectPtr< Component_obj > __this = new Component_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Component_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Component_obj *__this = (Component_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Component_obj), true, "hxd.res._NanoJpeg.Component"));
			*(void **)__this = Component_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_5b38cacd7bf75827_50_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Component_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Component",9d,d0,26,b1); }

		int cid;
		int ssx;
		int ssy;
		int width;
		int height;
		int stride;
		int qtsel;
		int actabsel;
		int dctabsel;
		int dcpred;
		 ::haxe::io::Bytes pixels;
};

} // end namespace hxd
} // end namespace res
} // end namespace _NanoJpeg

#endif /* INCLUDED_hxd_res__NanoJpeg_Component */ 
