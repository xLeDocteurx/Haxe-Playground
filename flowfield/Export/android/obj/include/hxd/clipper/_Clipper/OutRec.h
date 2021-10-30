#ifndef INCLUDED_hxd_clipper__Clipper_OutRec
#define INCLUDED_hxd_clipper__Clipper_OutRec

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_eb8e823014ef8906_255_new)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,OutPt)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,OutRec)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,PolyNode)

namespace hxd{
namespace clipper{
namespace _Clipper{


class HXCPP_CLASS_ATTRIBUTES OutRec_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OutRec_obj OBJ_;
		OutRec_obj();

	public:
		enum { _hx_ClassId = 0x0f0972e9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper._Clipper.OutRec")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper._Clipper.OutRec"); }

		inline static ::hx::ObjectPtr< OutRec_obj > __new() {
			::hx::ObjectPtr< OutRec_obj > __this = new OutRec_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OutRec_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OutRec_obj *__this = (OutRec_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutRec_obj), true, "hxd.clipper._Clipper.OutRec"));
			*(void **)__this = OutRec_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_eb8e823014ef8906_255_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OutRec_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OutRec",82,b1,fe,40); }

		int idx;
		bool isHole;
		 ::hxd::clipper::_Clipper::OutRec firstLeft;
		 ::hxd::clipper::_Clipper::OutPt pts;
		 ::hxd::clipper::_Clipper::OutPt bottomPt;
		 ::hxd::clipper::_Clipper::PolyNode polyNode;
};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_OutRec */ 
