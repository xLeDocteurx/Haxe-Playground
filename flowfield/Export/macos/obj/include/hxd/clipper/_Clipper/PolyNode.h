#ifndef INCLUDED_hxd_clipper__Clipper_PolyNode
#define INCLUDED_hxd_clipper__Clipper_PolyNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS2(hxd,clipper,EndType)
HX_DECLARE_CLASS2(hxd,clipper,JoinType)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,PolyNode)

namespace hxd{
namespace clipper{
namespace _Clipper{


class HXCPP_CLASS_ATTRIBUTES PolyNode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PolyNode_obj OBJ_;
		PolyNode_obj();

	public:
		enum { _hx_ClassId = 0x6cc7afb5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper._Clipper.PolyNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper._Clipper.PolyNode"); }
		static ::hx::ObjectPtr< PolyNode_obj > __new();
		static ::hx::ObjectPtr< PolyNode_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PolyNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PolyNode",8e,86,7c,f5); }

		 ::hxd::clipper::_Clipper::PolyNode parent;
		::Array< ::Dynamic> childs;
		::Array< ::Dynamic> polygon;
		int index;
		 ::hxd::clipper::JoinType jointype;
		 ::hxd::clipper::EndType endtype;
		bool isHoleNode();
		::Dynamic isHoleNode_dyn();

		int get_childCount();
		::Dynamic get_childCount_dyn();

		::Array< ::Dynamic> get_contour();
		::Dynamic get_contour_dyn();

		void addChild( ::hxd::clipper::_Clipper::PolyNode child);
		::Dynamic addChild_dyn();

		 ::hxd::clipper::_Clipper::PolyNode getNext();
		::Dynamic getNext_dyn();

		 ::hxd::clipper::_Clipper::PolyNode getNextSiblingUp();
		::Dynamic getNextSiblingUp_dyn();

		bool isHole();
		::Dynamic isHole_dyn();

};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_PolyNode */ 
