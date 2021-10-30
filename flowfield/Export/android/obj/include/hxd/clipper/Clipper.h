#ifndef INCLUDED_hxd_clipper_Clipper
#define INCLUDED_hxd_clipper_Clipper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_clipper__Clipper_ClipperBase
#include <hxd/clipper/_Clipper/ClipperBase.h>
#endif
HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS2(hxd,clipper,ClipType)
HX_DECLARE_CLASS2(hxd,clipper,Clipper)
HX_DECLARE_CLASS2(hxd,clipper,NodeType)
HX_DECLARE_CLASS2(hxd,clipper,PolyFillType)
HX_DECLARE_CLASS2(hxd,clipper,ResultKind)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,ClipperBase)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,Direction)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,IntersectNode)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,Join)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,OutPt)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,OutRec)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,PolyNode)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,PolyTree)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,Scanbeam)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,TEdge)

namespace hxd{
namespace clipper{


class HXCPP_CLASS_ATTRIBUTES Clipper_obj : public  ::hxd::clipper::_Clipper::ClipperBase_obj
{
	public:
		typedef  ::hxd::clipper::_Clipper::ClipperBase_obj super;
		typedef Clipper_obj OBJ_;
		Clipper_obj();

	public:
		enum { _hx_ClassId = 0x1c91bc0c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper.Clipper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper.Clipper"); }
		static ::hx::ObjectPtr< Clipper_obj > __new();
		static ::hx::ObjectPtr< Clipper_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Clipper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Clipper",ed,2f,19,d0); }

		static int compareY( ::hxd::clipper::_Clipper::IntersectNode n1, ::hxd::clipper::_Clipper::IntersectNode n2);
		static ::Dynamic compareY_dyn();

		static bool Orientation(::Array< ::Dynamic> poly);
		static ::Dynamic Orientation_dyn();

		static Float polArea(::Array< ::Dynamic> poly);
		static ::Dynamic polArea_dyn();

		static ::Array< ::Dynamic> SimplifyPolygon(::Array< ::Dynamic> poly, ::hxd::clipper::PolyFillType fillType);
		static ::Dynamic SimplifyPolygon_dyn();

		static ::Array< ::Dynamic> SimplifyPolygons(::Array< ::Dynamic> polys, ::hxd::clipper::PolyFillType fillType);
		static ::Dynamic SimplifyPolygons_dyn();

		static ::Array< ::Dynamic> MinkowskiSums(::Array< ::Dynamic> pattern,::Array< ::Dynamic> pols, ::hxd::clipper::ResultKind kind);
		static ::Dynamic MinkowskiSums_dyn();

		static ::Array< ::Dynamic> MinkowskiDiff(::Array< ::Dynamic> pattern,::Array< ::Dynamic> pol, ::hxd::clipper::ResultKind kind);
		static ::Dynamic MinkowskiDiff_dyn();

		bool strictlySimple;
		bool reverseSolution;
		 ::hxd::clipper::ResultKind resultKind;
		::Array< ::Dynamic> m_PolyOuts;
		 ::hxd::clipper::ClipType m_ClipType;
		 ::hxd::clipper::_Clipper::Scanbeam m_Scanbeam;
		 ::hxd::clipper::_Clipper::TEdge m_ActiveEdges;
		 ::hxd::clipper::_Clipper::TEdge m_SortedEdges;
		::Array< ::Dynamic> m_IntersectList;
		bool m_ExecuteLocked;
		 ::hxd::clipper::PolyFillType m_ClipFillType;
		 ::hxd::clipper::PolyFillType m_SubjFillType;
		::Array< ::Dynamic> m_Joins;
		::Array< ::Dynamic> m_GhostJoins;
		bool m_UsingPolyTree;
		bool _hx_xor(bool a,bool b);
		::Dynamic _hx_xor_dyn();

		void DisposeScanbeamList();
		::Dynamic DisposeScanbeamList_dyn();

		void Reset();

		void InsertScanbeam(int y);
		::Dynamic InsertScanbeam_dyn();

		::Array< ::Dynamic> execute( ::hxd::clipper::ClipType clipType, ::hxd::clipper::PolyFillType subjFillType, ::hxd::clipper::PolyFillType clipFillType);
		::Dynamic execute_dyn();

		bool ExecuteTree( ::hxd::clipper::ClipType clipType, ::hxd::clipper::_Clipper::PolyTree polytree, ::hxd::clipper::PolyFillType subjFillType, ::hxd::clipper::PolyFillType clipFillType);
		::Dynamic ExecuteTree_dyn();

		void FixHoleLinkage( ::hxd::clipper::_Clipper::OutRec outRec);
		::Dynamic FixHoleLinkage_dyn();

		bool ExecuteInternal();
		::Dynamic ExecuteInternal_dyn();

		int PopScanbeam();
		::Dynamic PopScanbeam_dyn();

		void DisposeAllPolyPts();
		::Dynamic DisposeAllPolyPts_dyn();

		void DisposeOutRec(int index);
		::Dynamic DisposeOutRec_dyn();

		void AddJoin( ::hxd::clipper::_Clipper::OutPt op1, ::hxd::clipper::_Clipper::OutPt op2, ::h2d::col::IPoint offPt);
		::Dynamic AddJoin_dyn();

		void AddGhostJoin( ::hxd::clipper::_Clipper::OutPt op, ::h2d::col::IPoint offPt);
		::Dynamic AddGhostJoin_dyn();

		void InsertLocalMinimaIntoAEL(int botY);
		::Dynamic InsertLocalMinimaIntoAEL_dyn();

		void InsertEdgeIntoAEL( ::hxd::clipper::_Clipper::TEdge edge, ::hxd::clipper::_Clipper::TEdge startEdge);
		::Dynamic InsertEdgeIntoAEL_dyn();

		bool E2InsertsBeforeE1( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2);
		::Dynamic E2InsertsBeforeE1_dyn();

		bool IsEvenOddFillType( ::hxd::clipper::_Clipper::TEdge edge);
		::Dynamic IsEvenOddFillType_dyn();

		bool IsEvenOddAltFillType( ::hxd::clipper::_Clipper::TEdge edge);
		::Dynamic IsEvenOddAltFillType_dyn();

		bool IsContributing( ::hxd::clipper::_Clipper::TEdge edge);
		::Dynamic IsContributing_dyn();

		void SetWindingCount( ::hxd::clipper::_Clipper::TEdge edge);
		::Dynamic SetWindingCount_dyn();

		void AddEdgeToSEL( ::hxd::clipper::_Clipper::TEdge edge);
		::Dynamic AddEdgeToSEL_dyn();

		void CopyAELToSEL();
		::Dynamic CopyAELToSEL_dyn();

		void SwapPositionsInAEL( ::hxd::clipper::_Clipper::TEdge edge1, ::hxd::clipper::_Clipper::TEdge edge2);
		::Dynamic SwapPositionsInAEL_dyn();

		void SwapPositionsInSEL( ::hxd::clipper::_Clipper::TEdge edge1, ::hxd::clipper::_Clipper::TEdge edge2);
		::Dynamic SwapPositionsInSEL_dyn();

		void AddLocalMaxPoly( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2, ::h2d::col::IPoint pt);
		::Dynamic AddLocalMaxPoly_dyn();

		 ::hxd::clipper::_Clipper::OutPt AddLocalMinPoly( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2, ::h2d::col::IPoint pt);
		::Dynamic AddLocalMinPoly_dyn();

		 ::hxd::clipper::_Clipper::OutRec CreateOutRec();
		::Dynamic CreateOutRec_dyn();

		 ::hxd::clipper::_Clipper::OutPt AddOutPt( ::hxd::clipper::_Clipper::TEdge e, ::h2d::col::IPoint pt);
		::Dynamic AddOutPt_dyn();

		bool HorzSegmentsOverlap(int seg1a,int seg1b,int seg2a,int seg2b);
		::Dynamic HorzSegmentsOverlap_dyn();

		void SetHoleState( ::hxd::clipper::_Clipper::TEdge e, ::hxd::clipper::_Clipper::OutRec outRec);
		::Dynamic SetHoleState_dyn();

		Float GetDx( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2);
		::Dynamic GetDx_dyn();

		bool FirstIsBottomPt( ::hxd::clipper::_Clipper::OutPt btmPt1, ::hxd::clipper::_Clipper::OutPt btmPt2);
		::Dynamic FirstIsBottomPt_dyn();

		 ::hxd::clipper::_Clipper::OutPt GetBottomPt( ::hxd::clipper::_Clipper::OutPt pp);
		::Dynamic GetBottomPt_dyn();

		 ::hxd::clipper::_Clipper::OutRec GetLowermostRec( ::hxd::clipper::_Clipper::OutRec outRec1, ::hxd::clipper::_Clipper::OutRec outRec2);
		::Dynamic GetLowermostRec_dyn();

		bool Param1RightOfParam2( ::hxd::clipper::_Clipper::OutRec outRec1, ::hxd::clipper::_Clipper::OutRec outRec2);
		::Dynamic Param1RightOfParam2_dyn();

		 ::hxd::clipper::_Clipper::OutRec GetOutRec(int idx);
		::Dynamic GetOutRec_dyn();

		void AppendPolygon( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2);
		::Dynamic AppendPolygon_dyn();

		void ReversePolyPtLinks( ::hxd::clipper::_Clipper::OutPt pp);
		::Dynamic ReversePolyPtLinks_dyn();

		void SwapSides( ::hxd::clipper::_Clipper::TEdge edge1, ::hxd::clipper::_Clipper::TEdge edge2);
		::Dynamic SwapSides_dyn();

		void SwapPolyIndexes( ::hxd::clipper::_Clipper::TEdge edge1, ::hxd::clipper::_Clipper::TEdge edge2);
		::Dynamic SwapPolyIndexes_dyn();

		void IntersectEdges( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2, ::h2d::col::IPoint pt);
		::Dynamic IntersectEdges_dyn();

		void DeleteFromAEL( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic DeleteFromAEL_dyn();

		void DeleteFromSEL( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic DeleteFromSEL_dyn();

		 ::hxd::clipper::_Clipper::TEdge UpdateEdgeIntoAEL( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic UpdateEdgeIntoAEL_dyn();

		 ::Dynamic GetHorzDirection( ::hxd::clipper::_Clipper::TEdge HorzEdge);
		::Dynamic GetHorzDirection_dyn();

		void ProcessHorizontals(bool isTopOfScanbeam);
		::Dynamic ProcessHorizontals_dyn();

		void ProcessHorizontal( ::hxd::clipper::_Clipper::TEdge horzEdge,bool isTopOfScanbeam);
		::Dynamic ProcessHorizontal_dyn();

		 ::hxd::clipper::_Clipper::TEdge GetNextInAEL( ::hxd::clipper::_Clipper::TEdge e, ::hxd::clipper::_Clipper::Direction dir);
		::Dynamic GetNextInAEL_dyn();

		bool IsMinima( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic IsMinima_dyn();

		bool IsMaxima( ::hxd::clipper::_Clipper::TEdge e,Float y);
		::Dynamic IsMaxima_dyn();

		bool IsIntermediate( ::hxd::clipper::_Clipper::TEdge e,Float y);
		::Dynamic IsIntermediate_dyn();

		 ::hxd::clipper::_Clipper::TEdge GetMaximaPair( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic GetMaximaPair_dyn();

		bool ProcessIntersections(int topY);
		::Dynamic ProcessIntersections_dyn();

		void BuildIntersectList(int topY);
		::Dynamic BuildIntersectList_dyn();

		bool EdgesAdjacent( ::hxd::clipper::_Clipper::IntersectNode inode);
		::Dynamic EdgesAdjacent_dyn();

		int IntersectNodeSort( ::hxd::clipper::_Clipper::IntersectNode node1, ::hxd::clipper::_Clipper::IntersectNode node2);
		::Dynamic IntersectNodeSort_dyn();

		bool FixupIntersectionOrder();
		::Dynamic FixupIntersectionOrder_dyn();

		void ProcessIntersectList();
		::Dynamic ProcessIntersectList_dyn();

		int Round(Float value);
		::Dynamic Round_dyn();

		int TopX( ::hxd::clipper::_Clipper::TEdge edge,int currentY);
		::Dynamic TopX_dyn();

		 ::h2d::col::IPoint IntersectPoint( ::hxd::clipper::_Clipper::TEdge edge1, ::hxd::clipper::_Clipper::TEdge edge2);
		::Dynamic IntersectPoint_dyn();

		void ProcessEdgesAtTopOfScanbeam(int topY);
		::Dynamic ProcessEdgesAtTopOfScanbeam_dyn();

		void DoMaxima( ::hxd::clipper::_Clipper::TEdge e);
		::Dynamic DoMaxima_dyn();

		void reversePolygons(::Array< ::Dynamic> polys);
		::Dynamic reversePolygons_dyn();

		int PointCount( ::hxd::clipper::_Clipper::OutPt pts);
		::Dynamic PointCount_dyn();

		::Array< ::Dynamic> BuildResult();
		::Dynamic BuildResult_dyn();

		void BuildResult2( ::hxd::clipper::_Clipper::PolyTree polytree);
		::Dynamic BuildResult2_dyn();

		void FixupOutPolygon( ::hxd::clipper::_Clipper::OutRec outRec);
		::Dynamic FixupOutPolygon_dyn();

		 ::hxd::clipper::_Clipper::OutPt DupOutPt( ::hxd::clipper::_Clipper::OutPt outPt,bool InsertAfter);
		::Dynamic DupOutPt_dyn();

		 ::Dynamic GetOverlap(int a1,int a2,int b1,int b2);
		::Dynamic GetOverlap_dyn();

		bool JoinHorz( ::hxd::clipper::_Clipper::OutPt op1, ::hxd::clipper::_Clipper::OutPt op1b, ::hxd::clipper::_Clipper::OutPt op2, ::hxd::clipper::_Clipper::OutPt op2b, ::h2d::col::IPoint pt,bool DiscardLeft);
		::Dynamic JoinHorz_dyn();

		bool JoinPoints( ::hxd::clipper::_Clipper::Join j, ::hxd::clipper::_Clipper::OutRec outRec1, ::hxd::clipper::_Clipper::OutRec outRec2);
		::Dynamic JoinPoints_dyn();

		int PointInPolygon( ::h2d::col::IPoint pt,::Array< ::Dynamic> pol);
		::Dynamic PointInPolygon_dyn();

		int PointInPolygon2( ::h2d::col::IPoint pt, ::hxd::clipper::_Clipper::OutPt op);
		::Dynamic PointInPolygon2_dyn();

		bool Poly2ContainsPoly1( ::hxd::clipper::_Clipper::OutPt outPt1, ::hxd::clipper::_Clipper::OutPt outPt2);
		::Dynamic Poly2ContainsPoly1_dyn();

		void FixupFirstLefts1( ::hxd::clipper::_Clipper::OutRec OldOutRec, ::hxd::clipper::_Clipper::OutRec NewOutRec);
		::Dynamic FixupFirstLefts1_dyn();

		void FixupFirstLefts2( ::hxd::clipper::_Clipper::OutRec OldOutRec, ::hxd::clipper::_Clipper::OutRec NewOutRec);
		::Dynamic FixupFirstLefts2_dyn();

		 ::hxd::clipper::_Clipper::OutRec ParseFirstLeft( ::hxd::clipper::_Clipper::OutRec FirstLeft);
		::Dynamic ParseFirstLeft_dyn();

		void JoinCommonEdges();
		::Dynamic JoinCommonEdges_dyn();

		void UpdateOutPtIdxs( ::hxd::clipper::_Clipper::OutRec outrec);
		::Dynamic UpdateOutPtIdxs_dyn();

		void DoSimplePolygons();
		::Dynamic DoSimplePolygons_dyn();

		Float Area( ::hxd::clipper::_Clipper::OutRec outRec);
		::Dynamic Area_dyn();

		Float DistanceFromLineSqrd( ::h2d::col::IPoint pt, ::h2d::col::IPoint ln1, ::h2d::col::IPoint ln2);
		::Dynamic DistanceFromLineSqrd_dyn();

		bool SlopesNearCollinear( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2, ::h2d::col::IPoint pt3,Float distSqrd);
		::Dynamic SlopesNearCollinear_dyn();

		bool PointsAreClose( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2,Float distSqrd);
		::Dynamic PointsAreClose_dyn();

		 ::hxd::clipper::_Clipper::OutPt ExcludeOp( ::hxd::clipper::_Clipper::OutPt op);
		::Dynamic ExcludeOp_dyn();

		::Array< ::Dynamic> CleanPolygon(::Array< ::Dynamic> path,::hx::Null< Float >  distance);
		::Dynamic CleanPolygon_dyn();

		::Array< ::Dynamic> CleanPolygons(::Array< ::Dynamic> polys,::hx::Null< Float >  distance);
		::Dynamic CleanPolygons_dyn();

		::Array< ::Dynamic> Minkowski(::Array< ::Dynamic> pattern,::Array< ::Dynamic> path,bool IsSum);
		::Dynamic Minkowski_dyn();

		::Array< ::Dynamic> MinkowskiSum(::Array< ::Dynamic> pattern,::Array< ::Dynamic> pol, ::hxd::clipper::ResultKind kind);
		::Dynamic MinkowskiSum_dyn();

		::Array< ::Dynamic> TranslatePath(::Array< ::Dynamic> path, ::h2d::col::IPoint delta);
		::Dynamic TranslatePath_dyn();

		::Array< ::Dynamic> PolyTreeToPaths( ::hxd::clipper::_Clipper::PolyTree polytree);
		::Dynamic PolyTreeToPaths_dyn();

		void AddPolyNodeToPaths( ::hxd::clipper::_Clipper::PolyNode polynode, ::hxd::clipper::NodeType nt,::Array< ::Dynamic> paths);
		::Dynamic AddPolyNodeToPaths_dyn();

};

} // end namespace hxd
} // end namespace clipper

#endif /* INCLUDED_hxd_clipper_Clipper */ 
