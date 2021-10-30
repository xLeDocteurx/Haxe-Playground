#ifndef INCLUDED_hxd_clipper__Clipper_OutPt
#define INCLUDED_hxd_clipper__Clipper_OutPt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_5a637ca8844ad1cd_264_new)
HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,OutPt)

namespace hxd{
namespace clipper{
namespace _Clipper{


class HXCPP_CLASS_ATTRIBUTES OutPt_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OutPt_obj OBJ_;
		OutPt_obj();

	public:
		enum { _hx_ClassId = 0x53debe8b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper._Clipper.OutPt")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper._Clipper.OutPt"); }

		inline static ::hx::ObjectPtr< OutPt_obj > __new() {
			::hx::ObjectPtr< OutPt_obj > __this = new OutPt_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OutPt_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OutPt_obj *__this = (OutPt_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutPt_obj), true, "hxd.clipper._Clipper.OutPt"));
			*(void **)__this = OutPt_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_5a637ca8844ad1cd_264_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OutPt_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OutPt",12,16,56,ca); }

		int idx;
		 ::h2d::col::IPoint pt;
		 ::hxd::clipper::_Clipper::OutPt next;
		 ::hxd::clipper::_Clipper::OutPt prev;
};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_OutPt */ 
