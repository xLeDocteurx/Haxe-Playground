#ifndef INCLUDED_hxd_clipper__Clipper_PolyTree
#define INCLUDED_hxd_clipper__Clipper_PolyTree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_clipper__Clipper_PolyNode
#include <hxd/clipper/_Clipper/PolyNode.h>
#endif
HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,PolyNode)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,PolyTree)

namespace hxd{
namespace clipper{
namespace _Clipper{


class HXCPP_CLASS_ATTRIBUTES PolyTree_obj : public  ::hxd::clipper::_Clipper::PolyNode_obj
{
	public:
		typedef  ::hxd::clipper::_Clipper::PolyNode_obj super;
		typedef PolyTree_obj OBJ_;
		PolyTree_obj();

	public:
		enum { _hx_ClassId = 0x70c13f11 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper._Clipper.PolyTree")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper._Clipper.PolyTree"); }
		static ::hx::ObjectPtr< PolyTree_obj > __new();
		static ::hx::ObjectPtr< PolyTree_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PolyTree_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PolyTree",ea,15,76,f9); }

		::Array< ::Dynamic> allPolys;
		void toPolygons(::Array< ::Dynamic> polygons);
		::Dynamic toPolygons_dyn();

		void addRec( ::hxd::clipper::_Clipper::PolyNode polynode,::Array< ::Dynamic> polygons);
		::Dynamic addRec_dyn();

		void clear();
		::Dynamic clear_dyn();

		 ::hxd::clipper::_Clipper::PolyNode getFirst();
		::Dynamic getFirst_dyn();

		int get_total();
		::Dynamic get_total_dyn();

};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_PolyTree */ 
