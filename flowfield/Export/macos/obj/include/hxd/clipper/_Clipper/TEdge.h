#ifndef INCLUDED_hxd_clipper__Clipper_TEdge
#define INCLUDED_hxd_clipper__Clipper_TEdge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS2(hxd,clipper,PolyType)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,EdgeSide)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,TEdge)

namespace hxd{
namespace clipper{
namespace _Clipper{


class HXCPP_CLASS_ATTRIBUTES TEdge_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TEdge_obj OBJ_;
		TEdge_obj();

	public:
		enum { _hx_ClassId = 0x1519572a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper._Clipper.TEdge")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper._Clipper.TEdge"); }
		static ::hx::ObjectPtr< TEdge_obj > __new();
		static ::hx::ObjectPtr< TEdge_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TEdge_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TEdge",b1,ae,90,8b); }

		int botX;
		int botY;
		int currX;
		int currY;
		int topX;
		int topY;
		int deltaX;
		int deltaY;
		Float dx;
		 ::hxd::clipper::PolyType polyType;
		 ::hxd::clipper::_Clipper::EdgeSide side;
		int windDelta;
		int windCnt;
		int windCnt2;
		int outIdx;
		 ::hxd::clipper::_Clipper::TEdge next;
		 ::hxd::clipper::_Clipper::TEdge prev;
		 ::hxd::clipper::_Clipper::TEdge nextInLML;
		 ::hxd::clipper::_Clipper::TEdge nextInAEL;
		 ::hxd::clipper::_Clipper::TEdge prevInAEL;
		 ::hxd::clipper::_Clipper::TEdge nextInSEL;
		 ::hxd::clipper::_Clipper::TEdge prevInSEL;
		 ::h2d::col::IPoint get_top();
		::Dynamic get_top_dyn();

		 ::h2d::col::IPoint get_bot();
		::Dynamic get_bot_dyn();

		 ::h2d::col::IPoint get_curr();
		::Dynamic get_curr_dyn();

		 ::h2d::col::IPoint set_top( ::h2d::col::IPoint p);
		::Dynamic set_top_dyn();

		 ::h2d::col::IPoint set_bot( ::h2d::col::IPoint p);
		::Dynamic set_bot_dyn();

		 ::h2d::col::IPoint set_curr( ::h2d::col::IPoint p);
		::Dynamic set_curr_dyn();

};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_TEdge */ 
