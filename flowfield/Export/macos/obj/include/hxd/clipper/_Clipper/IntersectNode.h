#ifndef INCLUDED_hxd_clipper__Clipper_IntersectNode
#define INCLUDED_hxd_clipper__Clipper_IntersectNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a0c06d6562af23d2_228_new)
HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,IntersectNode)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,TEdge)

namespace hxd{
namespace clipper{
namespace _Clipper{


class HXCPP_CLASS_ATTRIBUTES IntersectNode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IntersectNode_obj OBJ_;
		IntersectNode_obj();

	public:
		enum { _hx_ClassId = 0x75af2bda };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper._Clipper.IntersectNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper._Clipper.IntersectNode"); }

		inline static ::hx::ObjectPtr< IntersectNode_obj > __new() {
			::hx::ObjectPtr< IntersectNode_obj > __this = new IntersectNode_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< IntersectNode_obj > __alloc(::hx::Ctx *_hx_ctx) {
			IntersectNode_obj *__this = (IntersectNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IntersectNode_obj), true, "hxd.clipper._Clipper.IntersectNode"));
			*(void **)__this = IntersectNode_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a0c06d6562af23d2_228_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IntersectNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IntersectNode",61,e2,23,03); }

		 ::hxd::clipper::_Clipper::TEdge edge1;
		 ::hxd::clipper::_Clipper::TEdge edge2;
		 ::h2d::col::IPoint pt;
};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_IntersectNode */ 
