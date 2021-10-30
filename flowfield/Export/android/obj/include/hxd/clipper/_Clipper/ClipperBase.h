#ifndef INCLUDED_hxd_clipper__Clipper_ClipperBase
#define INCLUDED_hxd_clipper__Clipper_ClipperBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS2(hxd,clipper,PolyType)
HX_DECLARE_CLASS2(hxd,clipper,Rect)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,ClipperBase)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,LocalMinima)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,OutPt)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,TEdge)

namespace hxd{
namespace clipper{
namespace _Clipper{


class HXCPP_CLASS_ATTRIBUTES ClipperBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ClipperBase_obj OBJ_;
		ClipperBase_obj();

	public:
		enum { _hx_ClassId = 0x1eae120f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper._Clipper.ClipperBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper._Clipper.ClipperBase"); }
		static ::hx::ObjectPtr< ClipperBase_obj > __new();
		static ::hx::ObjectPtr< ClipperBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClipperBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClipperBase",9e,3e,be,c7); }

		static void __boot();
		static Float HORIZONTAL;
		static Float TOLERANCE;
		static int SKIP;
		static int UNASSIGNED;
		static bool nearZero(Float v);
		static ::Dynamic nearZero_dyn();

		static  ::hxd::clipper::Rect getBounds(::Array< ::Dynamic> pols);
		static ::Dynamic getBounds_dyn();

		bool preserveCollinear;
		 ::hxd::clipper::_Clipper::LocalMinima m_MinimaList;
		 ::hxd::clipper::_Clipper::LocalMinima m_CurrentLM;
		::Array< ::Dynamic> m_edges;
		bool isHorizontal( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic isHorizontal_dyn();

		int abs(int i);
		::Dynamic abs_dyn();

		bool PointIsVertex( ::h2d::col::IPoint pt, ::hxd::clipper::_Clipper::OutPt pp);
		::Dynamic PointIsVertex_dyn();

		bool PointOnLineSegment( ::h2d::col::IPoint pt, ::h2d::col::IPoint linePt1, ::h2d::col::IPoint linePt2);
		::Dynamic PointOnLineSegment_dyn();

		bool PointOnPolygon( ::h2d::col::IPoint pt, ::hxd::clipper::_Clipper::OutPt pp);
		::Dynamic PointOnPolygon_dyn();

		bool SlopesEqual( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2);
		::Dynamic SlopesEqual_dyn();

		bool SlopesEqual3( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2, ::h2d::col::IPoint pt3);
		::Dynamic SlopesEqual3_dyn();

		void clear();
		::Dynamic clear_dyn();

		void disposeLocalMinimaList();
		::Dynamic disposeLocalMinimaList_dyn();

		bool addPolygons(::Array< ::Dynamic> ppg, ::hxd::clipper::PolyType polyType);
		::Dynamic addPolygons_dyn();

		bool addPolygon(::Array< ::Dynamic> pg, ::hxd::clipper::PolyType polyType);
		::Dynamic addPolygon_dyn();

		void InitEdge( ::hxd::clipper::_Clipper::TEdge e, ::hxd::clipper::_Clipper::TEdge eNext, ::hxd::clipper::_Clipper::TEdge ePrev, ::h2d::col::IPoint pt);
		::Dynamic InitEdge_dyn();

		void InitEdge2( ::hxd::clipper::_Clipper::TEdge e, ::hxd::clipper::PolyType polyType);
		::Dynamic InitEdge2_dyn();

		 ::hxd::clipper::_Clipper::TEdge RemoveEdge( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic RemoveEdge_dyn();

		 ::hxd::clipper::_Clipper::TEdge FindNextLocMin( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic FindNextLocMin_dyn();

		 ::hxd::clipper::_Clipper::TEdge ProcessBound( ::hxd::clipper::_Clipper::TEdge E,bool LeftBoundIsForward);
		::Dynamic ProcessBound_dyn();

		void ReverseHorizontal( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic ReverseHorizontal_dyn();

		bool Pt2IsBetweenPt1AndPt3( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2, ::h2d::col::IPoint pt3);
		::Dynamic Pt2IsBetweenPt1AndPt3_dyn();

		void SetDx( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic SetDx_dyn();

		void InsertLocalMinima( ::hxd::clipper::_Clipper::LocalMinima newLm);
		::Dynamic InsertLocalMinima_dyn();

		void PopLocalMinima();
		::Dynamic PopLocalMinima_dyn();

		void SwapX( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic SwapX_dyn();

		bool equals( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2);
		::Dynamic equals_dyn();

		virtual void Reset();
		::Dynamic Reset_dyn();

};

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper

#endif /* INCLUDED_hxd_clipper__Clipper_ClipperBase */ 
