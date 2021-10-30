#ifndef INCLUDED_hxd_clipper__Clipper_Join
#define INCLUDED_hxd_clipper__Clipper_Join

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_9efed363e261ca83_272_new)
HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,Join)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,OutPt)

namespace hxd{
namespace clipper{
namespace _Clipper{


class HXCPP_CLASS_ATTRIBUTES Join_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Join_obj OBJ_;
		Join_obj();

	public:
		enum { _hx_ClassId = 0x468629b1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper._Clipper.Join")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper._Clipper.Join"); }

		inline static ::hx::ObjectPtr< Join_obj > __new() {
			::hx::ObjectPtr< Join_obj > __this = new Join_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Join_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Join_obj *__this = (Join_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Join_obj), true, "hxd.clipper._Clipper.Join"));
			*(void **)__this = Join_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_9efed363e261ca83_272_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Join_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Join",0a,60,3e,31); }

		 ::hxd::clipper::_Clipper::OutPt outPt1;
		 ::hxd::clipper::_Clipper::OutPt outPt2;
		 ::h2d::col::IPoint offPt;
};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_Join */ 
