#ifndef INCLUDED_hxd_fmt_hmd_GeometryBuffer
#define INCLUDED_hxd_fmt_hmd_GeometryBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_0d07a03ab2333360_20_new)
HX_DECLARE_CLASS3(hxd,fmt,hmd,GeometryBuffer)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES GeometryBuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GeometryBuffer_obj OBJ_;
		GeometryBuffer_obj();

	public:
		enum { _hx_ClassId = 0x7efbd714 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.GeometryBuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.GeometryBuffer"); }

		inline static ::hx::ObjectPtr< GeometryBuffer_obj > __new() {
			::hx::ObjectPtr< GeometryBuffer_obj > __this = new GeometryBuffer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GeometryBuffer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GeometryBuffer_obj *__this = (GeometryBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GeometryBuffer_obj), true, "hxd.fmt.hmd.GeometryBuffer"));
			*(void **)__this = GeometryBuffer_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_0d07a03ab2333360_20_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GeometryBuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GeometryBuffer",72,d9,c1,7b); }

		::Array< Float > vertexes;
		::Array< int > indexes;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_GeometryBuffer */ 
