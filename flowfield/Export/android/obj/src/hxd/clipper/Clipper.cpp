#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_h2d_col__IPolygon_IPolygon_Impl_
#include <h2d/col/_IPolygon/IPolygon_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_clipper_ClipType
#include <hxd/clipper/ClipType.h>
#endif
#ifndef INCLUDED_hxd_clipper_Clipper
#include <hxd/clipper/Clipper.h>
#endif
#ifndef INCLUDED_hxd_clipper_NodeType
#include <hxd/clipper/NodeType.h>
#endif
#ifndef INCLUDED_hxd_clipper_PolyFillType
#include <hxd/clipper/PolyFillType.h>
#endif
#ifndef INCLUDED_hxd_clipper_PolyType
#include <hxd/clipper/PolyType.h>
#endif
#ifndef INCLUDED_hxd_clipper_ResultKind
#include <hxd/clipper/ResultKind.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_ClipperBase
#include <hxd/clipper/_Clipper/ClipperBase.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_Direction
#include <hxd/clipper/_Clipper/Direction.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_EdgeSide
#include <hxd/clipper/_Clipper/EdgeSide.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_IntersectNode
#include <hxd/clipper/_Clipper/IntersectNode.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_Join
#include <hxd/clipper/_Clipper/Join.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_LocalMinima
#include <hxd/clipper/_Clipper/LocalMinima.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_OutPt
#include <hxd/clipper/_Clipper/OutPt.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_OutRec
#include <hxd/clipper/_Clipper/OutRec.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_PolyNode
#include <hxd/clipper/_Clipper/PolyNode.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_PolyTree
#include <hxd/clipper/_Clipper/PolyTree.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_Scanbeam
#include <hxd/clipper/_Clipper/Scanbeam.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_TEdge
#include <hxd/clipper/_Clipper/TEdge.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_402e6f1b2c344265_858_new,"hxd.clipper.Clipper","new",0x0ecdef64,"hxd.clipper.Clipper.new","hxd/clipper/Clipper.hx",858,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_877_xor,"hxd.clipper.Clipper","xor",0x0ed58e9f,"hxd.clipper.Clipper.xor","hxd/clipper/Clipper.hx",877,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_884_DisposeScanbeamList,"hxd.clipper.Clipper","DisposeScanbeamList",0xd3d4ee0d,"hxd.clipper.Clipper.DisposeScanbeamList","hxd/clipper/Clipper.hx",884,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_893_Reset,"hxd.clipper.Clipper","Reset",0xb278a1b3,"hxd.clipper.Clipper.Reset","hxd/clipper/Clipper.hx",893,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_911_InsertScanbeam,"hxd.clipper.Clipper","InsertScanbeam",0x3865cd61,"hxd.clipper.Clipper.InsertScanbeam","hxd/clipper/Clipper.hx",911,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_934_execute,"hxd.clipper.Clipper","execute",0x591cfb39,"hxd.clipper.Clipper.execute","hxd/clipper/Clipper.hx",934,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_957_ExecuteTree,"hxd.clipper.Clipper","ExecuteTree",0x989ce917,"hxd.clipper.Clipper.ExecuteTree","hxd/clipper/Clipper.hx",957,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_975_FixHoleLinkage,"hxd.clipper.Clipper","FixHoleLinkage",0xeca4d36c,"hxd.clipper.Clipper.FixHoleLinkage","hxd/clipper/Clipper.hx",975,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_989_ExecuteInternal,"hxd.clipper.Clipper","ExecuteInternal",0xe1848776,"hxd.clipper.Clipper.ExecuteInternal","hxd/clipper/Clipper.hx",989,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1032_PopScanbeam,"hxd.clipper.Clipper","PopScanbeam",0x8f4dcf01,"hxd.clipper.Clipper.PopScanbeam","hxd/clipper/Clipper.hx",1032,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1039_DisposeAllPolyPts,"hxd.clipper.Clipper","DisposeAllPolyPts",0x81b15745,"hxd.clipper.Clipper.DisposeAllPolyPts","hxd/clipper/Clipper.hx",1039,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1047_DisposeOutRec,"hxd.clipper.Clipper","DisposeOutRec",0xf1e0cf45,"hxd.clipper.Clipper.DisposeOutRec","hxd/clipper/Clipper.hx",1047,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1056_AddJoin,"hxd.clipper.Clipper","AddJoin",0xdd038f8f,"hxd.clipper.Clipper.AddJoin","hxd/clipper/Clipper.hx",1056,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1066_AddGhostJoin,"hxd.clipper.Clipper","AddGhostJoin",0x398c9114,"hxd.clipper.Clipper.AddGhostJoin","hxd/clipper/Clipper.hx",1066,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1077_InsertLocalMinimaIntoAEL,"hxd.clipper.Clipper","InsertLocalMinimaIntoAEL",0xff0bbfa7,"hxd.clipper.Clipper.InsertLocalMinimaIntoAEL","hxd/clipper/Clipper.hx",1077,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1157_InsertEdgeIntoAEL,"hxd.clipper.Clipper","InsertEdgeIntoAEL",0x3457bab6,"hxd.clipper.Clipper.InsertEdgeIntoAEL","hxd/clipper/Clipper.hx",1157,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1185_E2InsertsBeforeE1,"hxd.clipper.Clipper","E2InsertsBeforeE1",0x83576bfc,"hxd.clipper.Clipper.E2InsertsBeforeE1","hxd/clipper/Clipper.hx",1185,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1197_IsEvenOddFillType,"hxd.clipper.Clipper","IsEvenOddFillType",0x8726ebcc,"hxd.clipper.Clipper.IsEvenOddFillType","hxd/clipper/Clipper.hx",1197,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1206_IsEvenOddAltFillType,"hxd.clipper.Clipper","IsEvenOddAltFillType",0x854f6f97,"hxd.clipper.Clipper.IsEvenOddAltFillType","hxd/clipper/Clipper.hx",1206,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1214_IsContributing,"hxd.clipper.Clipper","IsContributing",0xa978f5d0,"hxd.clipper.Clipper.IsContributing","hxd/clipper/Clipper.hx",1214,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1301_SetWindingCount,"hxd.clipper.Clipper","SetWindingCount",0x94af9cfb,"hxd.clipper.Clipper.SetWindingCount","hxd/clipper/Clipper.hx",1301,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1381_AddEdgeToSEL,"hxd.clipper.Clipper","AddEdgeToSEL",0x74c2299d,"hxd.clipper.Clipper.AddEdgeToSEL","hxd/clipper/Clipper.hx",1381,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1398_CopyAELToSEL,"hxd.clipper.Clipper","CopyAELToSEL",0x07ab2e28,"hxd.clipper.Clipper.CopyAELToSEL","hxd/clipper/Clipper.hx",1398,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1410_SwapPositionsInAEL,"hxd.clipper.Clipper","SwapPositionsInAEL",0xd07967a8,"hxd.clipper.Clipper.SwapPositionsInAEL","hxd/clipper/Clipper.hx",1410,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1467_SwapPositionsInSEL,"hxd.clipper.Clipper","SwapPositionsInSEL",0xd087103a,"hxd.clipper.Clipper.SwapPositionsInSEL","hxd/clipper/Clipper.hx",1467,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1526_AddLocalMaxPoly,"hxd.clipper.Clipper","AddLocalMaxPoly",0xcb28118a,"hxd.clipper.Clipper.AddLocalMaxPoly","hxd/clipper/Clipper.hx",1526,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1541_AddLocalMinPoly,"hxd.clipper.Clipper","AddLocalMinPoly",0x3c012778,"hxd.clipper.Clipper.AddLocalMinPoly","hxd/clipper/Clipper.hx",1541,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1579_CreateOutRec,"hxd.clipper.Clipper","CreateOutRec",0x4ec5aa1a,"hxd.clipper.Clipper.CreateOutRec","hxd/clipper/Clipper.hx",1579,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1594_AddOutPt,"hxd.clipper.Clipper","AddOutPt",0x6b1a7aed,"hxd.clipper.Clipper.AddOutPt","hxd/clipper/Clipper.hx",1594,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1629_HorzSegmentsOverlap,"hxd.clipper.Clipper","HorzSegmentsOverlap",0xb759bb1c,"hxd.clipper.Clipper.HorzSegmentsOverlap","hxd/clipper/Clipper.hx",1629,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1646_SetHoleState,"hxd.clipper.Clipper","SetHoleState",0xc79a814b,"hxd.clipper.Clipper.SetHoleState","hxd/clipper/Clipper.hx",1646,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1665_GetDx,"hxd.clipper.Clipper","GetDx",0x5d10e5ae,"hxd.clipper.Clipper.GetDx","hxd/clipper/Clipper.hx",1665,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1671_FirstIsBottomPt,"hxd.clipper.Clipper","FirstIsBottomPt",0xab23450d,"hxd.clipper.Clipper.FirstIsBottomPt","hxd/clipper/Clipper.hx",1671,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1690_GetBottomPt,"hxd.clipper.Clipper","GetBottomPt",0x0cce1b69,"hxd.clipper.Clipper.GetBottomPt","hxd/clipper/Clipper.hx",1690,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1727_GetLowermostRec,"hxd.clipper.Clipper","GetLowermostRec",0x12eb4f46,"hxd.clipper.Clipper.GetLowermostRec","hxd/clipper/Clipper.hx",1727,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1748_Param1RightOfParam2,"hxd.clipper.Clipper","Param1RightOfParam2",0xf349e0b8,"hxd.clipper.Clipper.Param1RightOfParam2","hxd/clipper/Clipper.hx",1748,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1759_GetOutRec,"hxd.clipper.Clipper","GetOutRec",0x1044e07c,"hxd.clipper.Clipper.GetOutRec","hxd/clipper/Clipper.hx",1759,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1768_AppendPolygon,"hxd.clipper.Clipper","AppendPolygon",0x311273a4,"hxd.clipper.Clipper.AppendPolygon","hxd/clipper/Clipper.hx",1768,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1864_ReversePolyPtLinks,"hxd.clipper.Clipper","ReversePolyPtLinks",0x6e228543,"hxd.clipper.Clipper.ReversePolyPtLinks","hxd/clipper/Clipper.hx",1864,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1880_SwapSides,"hxd.clipper.Clipper","SwapSides",0x79f9814d,"hxd.clipper.Clipper.SwapSides","hxd/clipper/Clipper.hx",1880,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1888_SwapPolyIndexes,"hxd.clipper.Clipper","SwapPolyIndexes",0x9c10e425,"hxd.clipper.Clipper.SwapPolyIndexes","hxd/clipper/Clipper.hx",1888,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_1895_IntersectEdges,"hxd.clipper.Clipper","IntersectEdges",0xab6ddfd3,"hxd.clipper.Clipper.IntersectEdges","hxd/clipper/Clipper.hx",1895,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2036_DeleteFromAEL,"hxd.clipper.Clipper","DeleteFromAEL",0x9bdf16b7,"hxd.clipper.Clipper.DeleteFromAEL","hxd/clipper/Clipper.hx",2036,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2052_DeleteFromSEL,"hxd.clipper.Clipper","DeleteFromSEL",0x9becbf49,"hxd.clipper.Clipper.DeleteFromSEL","hxd/clipper/Clipper.hx",2052,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2068_UpdateEdgeIntoAEL,"hxd.clipper.Clipper","UpdateEdgeIntoAEL",0xd1fbc9e6,"hxd.clipper.Clipper.UpdateEdgeIntoAEL","hxd/clipper/Clipper.hx",2068,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2097_GetHorzDirection,"hxd.clipper.Clipper","GetHorzDirection",0x09fefdd6,"hxd.clipper.Clipper.GetHorzDirection","hxd/clipper/Clipper.hx",2097,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2105_ProcessHorizontals,"hxd.clipper.Clipper","ProcessHorizontals",0xce44927c,"hxd.clipper.Clipper.ProcessHorizontals","hxd/clipper/Clipper.hx",2105,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2116_ProcessHorizontal,"hxd.clipper.Clipper","ProcessHorizontal",0xfc554217,"hxd.clipper.Clipper.ProcessHorizontal","hxd/clipper/Clipper.hx",2116,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2229_GetNextInAEL,"hxd.clipper.Clipper","GetNextInAEL",0x949bd356,"hxd.clipper.Clipper.GetNextInAEL","hxd/clipper/Clipper.hx",2229,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2235_IsMinima,"hxd.clipper.Clipper","IsMinima",0x65fd0bd1,"hxd.clipper.Clipper.IsMinima","hxd/clipper/Clipper.hx",2235,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2241_IsMaxima,"hxd.clipper.Clipper","IsMaxima",0xd16489ff,"hxd.clipper.Clipper.IsMaxima","hxd/clipper/Clipper.hx",2241,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2247_IsIntermediate,"hxd.clipper.Clipper","IsIntermediate",0xe0fd725f,"hxd.clipper.Clipper.IsIntermediate","hxd/clipper/Clipper.hx",2247,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2252_GetMaximaPair,"hxd.clipper.Clipper","GetMaximaPair",0x90e3e0ad,"hxd.clipper.Clipper.GetMaximaPair","hxd/clipper/Clipper.hx",2252,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2265_ProcessIntersections,"hxd.clipper.Clipper","ProcessIntersections",0x548a1ab7,"hxd.clipper.Clipper.ProcessIntersections","hxd/clipper/Clipper.hx",2265,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2286_BuildIntersectList,"hxd.clipper.Clipper","BuildIntersectList",0x6e1dbe6b,"hxd.clipper.Clipper.BuildIntersectList","hxd/clipper/Clipper.hx",2286,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2335_EdgesAdjacent,"hxd.clipper.Clipper","EdgesAdjacent",0xd40ad45c,"hxd.clipper.Clipper.EdgesAdjacent","hxd/clipper/Clipper.hx",2335,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2344_IntersectNodeSort,"hxd.clipper.Clipper","IntersectNodeSort",0xed0d5863,"hxd.clipper.Clipper.IntersectNodeSort","hxd/clipper/Clipper.hx",2344,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2352_FixupIntersectionOrder,"hxd.clipper.Clipper","FixupIntersectionOrder",0x3831b791,"hxd.clipper.Clipper.FixupIntersectionOrder","hxd/clipper/Clipper.hx",2352,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2380_ProcessIntersectList,"hxd.clipper.Clipper","ProcessIntersectList",0x415a618a,"hxd.clipper.Clipper.ProcessIntersectList","hxd/clipper/Clipper.hx",2380,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2395_Round,"hxd.clipper.Clipper","Round",0xb9165032,"hxd.clipper.Clipper.Round","hxd/clipper/Clipper.hx",2395,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2400_TopX,"hxd.clipper.Clipper","TopX",0xd43b8cbf,"hxd.clipper.Clipper.TopX","hxd/clipper/Clipper.hx",2400,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2409_IntersectPoint,"hxd.clipper.Clipper","IntersectPoint",0x081d268d,"hxd.clipper.Clipper.IntersectPoint","hxd/clipper/Clipper.hx",2409,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2485_ProcessEdgesAtTopOfScanbeam,"hxd.clipper.Clipper","ProcessEdgesAtTopOfScanbeam",0xe2e199a2,"hxd.clipper.Clipper.ProcessEdgesAtTopOfScanbeam","hxd/clipper/Clipper.hx",2485,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2573_DoMaxima,"hxd.clipper.Clipper","DoMaxima",0x0d127460,"hxd.clipper.Clipper.DoMaxima","hxd/clipper/Clipper.hx",2573,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2608_reversePolygons,"hxd.clipper.Clipper","reversePolygons",0x851ea4ff,"hxd.clipper.Clipper.reversePolygons","hxd/clipper/Clipper.hx",2608,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2619_PointCount,"hxd.clipper.Clipper","PointCount",0x3633ebfb,"hxd.clipper.Clipper.PointCount","hxd/clipper/Clipper.hx",2619,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2634_BuildResult,"hxd.clipper.Clipper","BuildResult",0xdd1ea98f,"hxd.clipper.Clipper.BuildResult","hxd/clipper/Clipper.hx",2634,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2657_BuildResult2,"hxd.clipper.Clipper","BuildResult2",0x9db5b3c3,"hxd.clipper.Clipper.BuildResult2","hxd/clipper/Clipper.hx",2657,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2690_FixupOutPolygon,"hxd.clipper.Clipper","FixupOutPolygon",0x83a82c00,"hxd.clipper.Clipper.FixupOutPolygon","hxd/clipper/Clipper.hx",2690,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2726_DupOutPt,"hxd.clipper.Clipper","DupOutPt",0xa5e7088f,"hxd.clipper.Clipper.DupOutPt","hxd/clipper/Clipper.hx",2726,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2749_GetOverlap,"hxd.clipper.Clipper","GetOverlap",0x0484572d,"hxd.clipper.Clipper.GetOverlap","hxd/clipper/Clipper.hx",2749,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2779_JoinHorz,"hxd.clipper.Clipper","JoinHorz",0xf2bf1a35,"hxd.clipper.Clipper.JoinHorz","hxd/clipper/Clipper.hx",2779,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2866_JoinPoints,"hxd.clipper.Clipper","JoinPoints",0xa1411349,"hxd.clipper.Clipper.JoinPoints","hxd/clipper/Clipper.hx",2866,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3025_PointInPolygon,"hxd.clipper.Clipper","PointInPolygon",0x4ce4f241,"hxd.clipper.Clipper.PointInPolygon","hxd/clipper/Clipper.hx",3025,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3071_PointInPolygon2,"hxd.clipper.Clipper","PointInPolygon2",0xfb6f06d1,"hxd.clipper.Clipper.PointInPolygon2","hxd/clipper/Clipper.hx",3071,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3122_Poly2ContainsPoly1,"hxd.clipper.Clipper","Poly2ContainsPoly1",0x176c971c,"hxd.clipper.Clipper.Poly2ContainsPoly1","hxd/clipper/Clipper.hx",3122,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3138_FixupFirstLefts1,"hxd.clipper.Clipper","FixupFirstLefts1",0xd0087d81,"hxd.clipper.Clipper.FixupFirstLefts1","hxd/clipper/Clipper.hx",3138,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3153_FixupFirstLefts2,"hxd.clipper.Clipper","FixupFirstLefts2",0xd0087d82,"hxd.clipper.Clipper.FixupFirstLefts2","hxd/clipper/Clipper.hx",3153,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3159_ParseFirstLeft,"hxd.clipper.Clipper","ParseFirstLeft",0x11ff4140,"hxd.clipper.Clipper.ParseFirstLeft","hxd/clipper/Clipper.hx",3159,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3168_JoinCommonEdges,"hxd.clipper.Clipper","JoinCommonEdges",0xdfa8e185,"hxd.clipper.Clipper.JoinCommonEdges","hxd/clipper/Clipper.hx",3168,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3269_UpdateOutPtIdxs,"hxd.clipper.Clipper","UpdateOutPtIdxs",0x5dcef283,"hxd.clipper.Clipper.UpdateOutPtIdxs","hxd/clipper/Clipper.hx",3269,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3281_DoSimplePolygons,"hxd.clipper.Clipper","DoSimplePolygons",0xef9afe92,"hxd.clipper.Clipper.DoSimplePolygons","hxd/clipper/Clipper.hx",3281,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3351_Area,"hxd.clipper.Clipper","Area",0xc7aebc29,"hxd.clipper.Clipper.Area","hxd/clipper/Clipper.hx",3351,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3389_DistanceFromLineSqrd,"hxd.clipper.Clipper","DistanceFromLineSqrd",0x873e58df,"hxd.clipper.Clipper.DistanceFromLineSqrd","hxd/clipper/Clipper.hx",3389,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3409_SlopesNearCollinear,"hxd.clipper.Clipper","SlopesNearCollinear",0x626328f9,"hxd.clipper.Clipper.SlopesNearCollinear","hxd/clipper/Clipper.hx",3409,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3432_PointsAreClose,"hxd.clipper.Clipper","PointsAreClose",0xbceacda3,"hxd.clipper.Clipper.PointsAreClose","hxd/clipper/Clipper.hx",3432,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3440_ExcludeOp,"hxd.clipper.Clipper","ExcludeOp",0x7408087f,"hxd.clipper.Clipper.ExcludeOp","hxd/clipper/Clipper.hx",3440,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3450_CleanPolygon,"hxd.clipper.Clipper","CleanPolygon",0x294c188d,"hxd.clipper.Clipper.CleanPolygon","hxd/clipper/Clipper.hx",3450,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3509_CleanPolygons,"hxd.clipper.Clipper","CleanPolygons",0xf9496346,"hxd.clipper.Clipper.CleanPolygons","hxd/clipper/Clipper.hx",3509,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3518_Minkowski,"hxd.clipper.Clipper","Minkowski",0xace1a954,"hxd.clipper.Clipper.Minkowski","hxd/clipper/Clipper.hx",3518,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3552_MinkowskiSum,"hxd.clipper.Clipper","MinkowskiSum",0xc2934497,"hxd.clipper.Clipper.MinkowskiSum","hxd/clipper/Clipper.hx",3552,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3563_TranslatePath,"hxd.clipper.Clipper","TranslatePath",0x9f8483f7,"hxd.clipper.Clipper.TranslatePath","hxd/clipper/Clipper.hx",3563,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3600_PolyTreeToPaths,"hxd.clipper.Clipper","PolyTreeToPaths",0xc79defed,"hxd.clipper.Clipper.PolyTreeToPaths","hxd/clipper/Clipper.hx",3600,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3608_AddPolyNodeToPaths,"hxd.clipper.Clipper","AddPolyNodeToPaths",0x48d72b60,"hxd.clipper.Clipper.AddPolyNodeToPaths","hxd/clipper/Clipper.hx",3608,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2349_compareY,"hxd.clipper.Clipper","compareY",0x596f6a90,"hxd.clipper.Clipper.compareY","hxd/clipper/Clipper.hx",2349,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_2613_Orientation,"hxd.clipper.Clipper","Orientation",0x822849b4,"hxd.clipper.Clipper.Orientation","hxd/clipper/Clipper.hx",2613,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3339_polArea,"hxd.clipper.Clipper","polArea",0x7aa550be,"hxd.clipper.Clipper.polArea","hxd/clipper/Clipper.hx",3339,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3369_SimplifyPolygon,"hxd.clipper.Clipper","SimplifyPolygon",0x125a5355,"hxd.clipper.Clipper.SimplifyPolygon","hxd/clipper/Clipper.hx",3369,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3379_SimplifyPolygons,"hxd.clipper.Clipper","SimplifyPolygons",0xfcae977e,"hxd.clipper.Clipper.SimplifyPolygons","hxd/clipper/Clipper.hx",3379,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3572_MinkowskiSums,"hxd.clipper.Clipper","MinkowskiSums",0x7e48bffc,"hxd.clipper.Clipper.MinkowskiSums","hxd/clipper/Clipper.hx",3572,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_402e6f1b2c344265_3587_MinkowskiDiff,"hxd.clipper.Clipper","MinkowskiDiff",0x74556b79,"hxd.clipper.Clipper.MinkowskiDiff","hxd/clipper/Clipper.hx",3587,0x0569880e)
namespace hxd{
namespace clipper{

void Clipper_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_858_new)
HXLINE( 859)		super::__construct();
HXLINE( 860)		this->m_Scanbeam = null();
HXLINE( 861)		this->m_ActiveEdges = null();
HXLINE( 862)		this->m_SortedEdges = null();
HXLINE( 863)		this->m_IntersectList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 864)		this->m_ExecuteLocked = false;
HXLINE( 865)		this->m_UsingPolyTree = false;
HXLINE( 866)		this->m_PolyOuts = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 867)		this->m_Joins = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 868)		this->m_GhostJoins = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 870)		this->reverseSolution = false;
HXLINE( 871)		this->strictlySimple = false;
HXLINE( 872)		this->preserveCollinear = false;
HXLINE( 873)		this->resultKind = ::hxd::clipper::ResultKind_obj::All_dyn();
            	}

Dynamic Clipper_obj::__CreateEmpty() { return new Clipper_obj; }

void *Clipper_obj::_hx_vtable = 0;

Dynamic Clipper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Clipper_obj > _hx_result = new Clipper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Clipper_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1c91bc0c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1c91bc0c;
	} else {
		return inClassId==(int)0x1eae120f;
	}
}

bool Clipper_obj::_hx_xor(bool a,bool b){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_877_xor)
HXDLIN( 877)		if (a) {
HXDLIN( 877)			return !(b);
            		}
            		else {
HXDLIN( 877)			return b;
            		}
HXDLIN( 877)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,_hx_xor,return )

void Clipper_obj::DisposeScanbeamList(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_884_DisposeScanbeamList)
HXDLIN( 884)		while(::hx::IsNotNull( this->m_Scanbeam )){
HXLINE( 885)			 ::hxd::clipper::_Clipper::Scanbeam sb2 = this->m_Scanbeam->next;
HXLINE( 886)			this->m_Scanbeam = null();
HXLINE( 887)			this->m_Scanbeam = sb2;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Clipper_obj,DisposeScanbeamList,(void))

void Clipper_obj::Reset(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_893_Reset)
HXLINE( 894)		this->super::Reset();
HXLINE( 895)		this->m_Scanbeam = null();
HXLINE( 896)		this->m_ActiveEdges = null();
HXLINE( 897)		this->m_SortedEdges = null();
HXLINE( 899)		 ::hxd::clipper::_Clipper::LocalMinima lm = this->m_MinimaList;
HXLINE( 900)		while(::hx::IsNotNull( lm )){
HXLINE( 902)			this->InsertScanbeam(lm->y);
HXLINE( 903)			lm = lm->next;
            		}
            	}


void Clipper_obj::InsertScanbeam(int y){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_911_InsertScanbeam)
HXDLIN( 911)		if (::hx::IsNull( this->m_Scanbeam )) {
HXLINE( 912)			this->m_Scanbeam =  ::hxd::clipper::_Clipper::Scanbeam_obj::__alloc( HX_CTX );
HXLINE( 913)			this->m_Scanbeam->next = null();
HXLINE( 914)			this->m_Scanbeam->y = y;
            		}
            		else {
HXLINE( 916)			if ((y > this->m_Scanbeam->y)) {
HXLINE( 917)				 ::hxd::clipper::_Clipper::Scanbeam newSb =  ::hxd::clipper::_Clipper::Scanbeam_obj::__alloc( HX_CTX );
HXLINE( 918)				newSb->y = y;
HXLINE( 919)				newSb->next = this->m_Scanbeam;
HXLINE( 920)				this->m_Scanbeam = newSb;
            			}
            			else {
HXLINE( 922)				 ::hxd::clipper::_Clipper::Scanbeam sb2 = this->m_Scanbeam;
HXLINE( 923)				while(true){
HXLINE( 923)					bool _hx_tmp;
HXDLIN( 923)					if (::hx::IsNotNull( sb2->next )) {
HXLINE( 923)						_hx_tmp = (y <= sb2->next->y);
            					}
            					else {
HXLINE( 923)						_hx_tmp = false;
            					}
HXDLIN( 923)					if (!(_hx_tmp)) {
HXLINE( 923)						goto _hx_goto_6;
            					}
HXDLIN( 923)					sb2 = sb2->next;
            				}
            				_hx_goto_6:;
HXLINE( 924)				if ((y == sb2->y)) {
HXLINE( 924)					return;
            				}
HXLINE( 925)				 ::hxd::clipper::_Clipper::Scanbeam newSb =  ::hxd::clipper::_Clipper::Scanbeam_obj::__alloc( HX_CTX );
HXLINE( 926)				newSb->y = y;
HXLINE( 927)				newSb->next = sb2->next;
HXLINE( 928)				sb2->next = newSb;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,InsertScanbeam,(void))

::Array< ::Dynamic> Clipper_obj::execute( ::hxd::clipper::ClipType clipType, ::hxd::clipper::PolyFillType subjFillType, ::hxd::clipper::PolyFillType clipFillType){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_934_execute)
HXLINE( 935)		if (::hx::IsNull( subjFillType )) {
HXLINE( 935)			subjFillType = ::hxd::clipper::PolyFillType_obj::EvenOdd_dyn();
            		}
HXLINE( 936)		if (::hx::IsNull( clipFillType )) {
HXLINE( 936)			clipFillType = ::hxd::clipper::PolyFillType_obj::EvenOdd_dyn();
            		}
HXLINE( 937)		if (this->m_ExecuteLocked) {
HXLINE( 937)			return ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 939)		this->m_ExecuteLocked = true;
HXLINE( 940)		::Array< ::Dynamic> solution = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 942)		this->m_SubjFillType = subjFillType;
HXLINE( 943)		this->m_ClipFillType = clipFillType;
HXLINE( 944)		this->m_ClipType = clipType;
HXLINE( 945)		this->m_UsingPolyTree = false;
HXLINE( 947)		bool succeeded = this->ExecuteInternal();
HXLINE( 948)		if (succeeded) {
HXLINE( 948)			solution = this->BuildResult();
            		}
HXLINE( 950)		this->DisposeAllPolyPts();
HXLINE( 951)		this->m_ExecuteLocked = false;
HXLINE( 953)		return solution;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,execute,return )

bool Clipper_obj::ExecuteTree( ::hxd::clipper::ClipType clipType, ::hxd::clipper::_Clipper::PolyTree polytree, ::hxd::clipper::PolyFillType subjFillType, ::hxd::clipper::PolyFillType clipFillType){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_957_ExecuteTree)
HXLINE( 958)		if (::hx::IsNull( subjFillType )) {
HXLINE( 958)			subjFillType = ::hxd::clipper::PolyFillType_obj::EvenOdd_dyn();
            		}
HXLINE( 959)		if (::hx::IsNull( clipFillType )) {
HXLINE( 959)			clipFillType = ::hxd::clipper::PolyFillType_obj::EvenOdd_dyn();
            		}
HXLINE( 960)		if (this->m_ExecuteLocked) {
HXLINE( 960)			return false;
            		}
HXLINE( 961)		this->m_ExecuteLocked = true;
HXLINE( 962)		this->m_SubjFillType = subjFillType;
HXLINE( 963)		this->m_ClipFillType = clipFillType;
HXLINE( 964)		this->m_ClipType = clipType;
HXLINE( 965)		this->m_UsingPolyTree = true;
HXLINE( 966)		bool succeeded = this->ExecuteInternal();
HXLINE( 968)		if (succeeded) {
HXLINE( 968)			this->BuildResult2(polytree);
            		}
HXLINE( 969)		this->m_ExecuteLocked = false;
HXLINE( 970)		return succeeded;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Clipper_obj,ExecuteTree,return )

void Clipper_obj::FixHoleLinkage( ::hxd::clipper::_Clipper::OutRec outRec){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_975_FixHoleLinkage)
HXLINE( 978)		bool _hx_tmp;
HXDLIN( 978)		if (::hx::IsNotNull( outRec->firstLeft )) {
HXLINE( 979)			if ((outRec->isHole != outRec->firstLeft->isHole)) {
HXLINE( 978)				_hx_tmp = ::hx::IsNotNull( outRec->firstLeft->pts );
            			}
            			else {
HXLINE( 978)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 978)			_hx_tmp = true;
            		}
HXDLIN( 978)		if (_hx_tmp) {
HXLINE( 980)			return;
            		}
HXLINE( 982)		 ::hxd::clipper::_Clipper::OutRec orfl = outRec->firstLeft;
HXLINE( 983)		while(true){
HXLINE( 983)			bool _hx_tmp;
HXDLIN( 983)			if (::hx::IsNotNull( orfl )) {
HXLINE( 983)				if ((orfl->isHole != outRec->isHole)) {
HXLINE( 983)					_hx_tmp = ::hx::IsNull( orfl->pts );
            				}
            				else {
HXLINE( 983)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 983)				_hx_tmp = false;
            			}
HXDLIN( 983)			if (!(_hx_tmp)) {
HXLINE( 983)				goto _hx_goto_10;
            			}
HXLINE( 984)			orfl = orfl->firstLeft;
            		}
            		_hx_goto_10:;
HXLINE( 985)		outRec->firstLeft = orfl;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,FixHoleLinkage,(void))

bool Clipper_obj::ExecuteInternal(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_989_ExecuteInternal)
HXLINE( 990)		this->Reset();
HXLINE( 991)		if (::hx::IsNull( this->m_CurrentLM )) {
HXLINE( 991)			return false;
            		}
HXLINE( 992)		int botY = this->PopScanbeam();
HXLINE( 993)		while(true){
HXLINE( 995)			this->InsertLocalMinimaIntoAEL(botY);
HXLINE( 996)			if ((this->m_GhostJoins->length > 0)) {
HXLINE( 996)				this->m_GhostJoins = ::Array_obj< ::Dynamic>::__new(0);
            			}
HXLINE( 997)			this->ProcessHorizontals(false);
HXLINE( 998)			if (::hx::IsNull( this->m_Scanbeam )) {
HXLINE( 998)				goto _hx_goto_12;
            			}
HXLINE(1000)			int topY = this->PopScanbeam();
HXLINE(1001)			if (!(this->ProcessIntersections(topY))) {
HXLINE(1001)				return false;
            			}
HXLINE(1002)			this->ProcessEdgesAtTopOfScanbeam(topY);
HXLINE(1003)			botY = topY;
HXLINE(1005)			bool _hx_tmp;
HXDLIN(1005)			if (::hx::IsNull( this->m_Scanbeam )) {
HXLINE(1005)				_hx_tmp = ::hx::IsNotNull( this->m_CurrentLM );
            			}
            			else {
HXLINE(1005)				_hx_tmp = true;
            			}
HXLINE( 993)			if (!(_hx_tmp)) {
HXLINE( 993)				goto _hx_goto_12;
            			}
            		}
            		_hx_goto_12:;
HXLINE(1008)		{
HXLINE(1008)			int _g = 0;
HXDLIN(1008)			::Array< ::Dynamic> _g1 = this->m_PolyOuts;
HXDLIN(1008)			while((_g < _g1->length)){
HXLINE(1008)				 ::hxd::clipper::_Clipper::OutRec outRec = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXDLIN(1008)				_g = (_g + 1);
HXLINE(1009)				if (::hx::IsNull( outRec->pts )) {
HXLINE(1009)					continue;
            				}
HXLINE(1010)				bool b = this->reverseSolution;
HXDLIN(1010)				bool _hx_tmp;
HXDLIN(1010)				if (outRec->isHole) {
HXLINE(1010)					_hx_tmp = !(b);
            				}
            				else {
HXLINE(1010)					_hx_tmp = b;
            				}
HXDLIN(1010)				if ((_hx_tmp == (this->Area(outRec) > 0))) {
HXLINE(1011)					this->ReversePolyPtLinks(outRec->pts);
            				}
            			}
            		}
HXLINE(1014)		this->JoinCommonEdges();
HXLINE(1016)		{
HXLINE(1016)			int _g2 = 0;
HXDLIN(1016)			::Array< ::Dynamic> _g3 = this->m_PolyOuts;
HXDLIN(1016)			while((_g2 < _g3->length)){
HXLINE(1016)				 ::hxd::clipper::_Clipper::OutRec outRec = _g3->__get(_g2).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXDLIN(1016)				_g2 = (_g2 + 1);
HXLINE(1017)				if (::hx::IsNotNull( outRec->pts )) {
HXLINE(1018)					this->FixupOutPolygon(outRec);
            				}
            			}
            		}
HXLINE(1020)		if (this->strictlySimple) {
HXLINE(1021)			this->DoSimplePolygons();
            		}
HXLINE(1024)		this->m_Joins = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1025)		this->m_GhostJoins = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1027)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Clipper_obj,ExecuteInternal,return )

int Clipper_obj::PopScanbeam(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1032_PopScanbeam)
HXLINE(1033)		int y = this->m_Scanbeam->y;
HXLINE(1034)		this->m_Scanbeam = this->m_Scanbeam->next;
HXLINE(1035)		return y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Clipper_obj,PopScanbeam,return )

void Clipper_obj::DisposeAllPolyPts(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1039_DisposeAllPolyPts)
HXLINE(1040)		{
HXLINE(1040)			int _g = 0;
HXDLIN(1040)			int _g1 = this->m_PolyOuts->length;
HXDLIN(1040)			while((_g < _g1)){
HXLINE(1040)				_g = (_g + 1);
HXDLIN(1040)				int i = (_g - 1);
HXLINE(1041)				this->DisposeOutRec(i);
            			}
            		}
HXLINE(1042)		this->m_PolyOuts = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Clipper_obj,DisposeAllPolyPts,(void))

void Clipper_obj::DisposeOutRec(int index){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1047_DisposeOutRec)
HXLINE(1048)		 ::hxd::clipper::_Clipper::OutRec outRec = this->m_PolyOuts->__get(index).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXLINE(1049)		outRec->pts = null();
HXLINE(1050)		outRec = null();
HXLINE(1051)		this->m_PolyOuts[index] = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,DisposeOutRec,(void))

void Clipper_obj::AddJoin( ::hxd::clipper::_Clipper::OutPt op1, ::hxd::clipper::_Clipper::OutPt op2, ::h2d::col::IPoint offPt){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_1056_AddJoin)
HXLINE(1057)		 ::hxd::clipper::_Clipper::Join j =  ::hxd::clipper::_Clipper::Join_obj::__alloc( HX_CTX );
HXLINE(1058)		j->outPt1 = op1;
HXLINE(1059)		j->outPt2 = op2;
HXLINE(1060)		j->offPt = offPt;
HXLINE(1061)		this->m_Joins->push(j);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,AddJoin,(void))

void Clipper_obj::AddGhostJoin( ::hxd::clipper::_Clipper::OutPt op, ::h2d::col::IPoint offPt){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_1066_AddGhostJoin)
HXLINE(1067)		 ::hxd::clipper::_Clipper::Join j =  ::hxd::clipper::_Clipper::Join_obj::__alloc( HX_CTX );
HXLINE(1068)		j->outPt1 = op;
HXLINE(1069)		j->offPt = offPt;
HXLINE(1070)		this->m_GhostJoins->push(j);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,AddGhostJoin,(void))

void Clipper_obj::InsertLocalMinimaIntoAEL(int botY){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_1077_InsertLocalMinimaIntoAEL)
HXDLIN(1077)		while(true){
HXDLIN(1077)			bool _hx_tmp;
HXDLIN(1077)			if (::hx::IsNotNull( this->m_CurrentLM )) {
HXDLIN(1077)				_hx_tmp = (this->m_CurrentLM->y == botY);
            			}
            			else {
HXDLIN(1077)				_hx_tmp = false;
            			}
HXDLIN(1077)			if (!(_hx_tmp)) {
HXDLIN(1077)				goto _hx_goto_22;
            			}
HXLINE(1079)			 ::hxd::clipper::_Clipper::TEdge lb = this->m_CurrentLM->leftBound;
HXLINE(1080)			 ::hxd::clipper::_Clipper::TEdge rb = this->m_CurrentLM->rightBound;
HXLINE(1081)			this->PopLocalMinima();
HXLINE(1083)			 ::hxd::clipper::_Clipper::OutPt op1 = null();
HXLINE(1085)			if (::hx::IsNull( lb )) {
HXLINE(1086)				this->InsertEdgeIntoAEL(rb,null());
HXLINE(1087)				this->SetWindingCount(rb);
HXLINE(1088)				if (this->IsContributing(rb)) {
HXLINE(1089)					op1 = this->AddOutPt(rb, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,rb->botX,rb->botY));
            				}
            			}
            			else {
HXLINE(1091)				if (::hx::IsNull( rb )) {
HXLINE(1092)					this->InsertEdgeIntoAEL(lb,null());
HXLINE(1093)					this->SetWindingCount(lb);
HXLINE(1094)					if (this->IsContributing(lb)) {
HXLINE(1095)						op1 = this->AddOutPt(lb, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,lb->botX,lb->botY));
            					}
HXLINE(1096)					this->InsertScanbeam(lb->topY);
            				}
            				else {
HXLINE(1099)					this->InsertEdgeIntoAEL(lb,null());
HXLINE(1100)					this->InsertEdgeIntoAEL(rb,lb);
HXLINE(1102)					this->SetWindingCount(lb);
HXLINE(1104)					rb->windCnt = lb->windCnt;
HXLINE(1105)					rb->windCnt2 = lb->windCnt2;
HXLINE(1107)					if (this->IsContributing(lb)) {
HXLINE(1108)						op1 = this->AddLocalMinPoly(lb,rb, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,lb->botX,lb->botY));
            					}
HXLINE(1110)					this->InsertScanbeam(lb->topY);
            				}
            			}
HXLINE(1113)			if (::hx::IsNotNull( rb )) {
HXLINE(1114)				if ((rb->deltaY == 0)) {
HXLINE(1115)					this->AddEdgeToSEL(rb);
            				}
            				else {
HXLINE(1116)					this->InsertScanbeam(rb->topY);
            				}
            			}
HXLINE(1119)			bool _hx_tmp1;
HXDLIN(1119)			if (::hx::IsNotNull( lb )) {
HXLINE(1119)				_hx_tmp1 = ::hx::IsNull( rb );
            			}
            			else {
HXLINE(1119)				_hx_tmp1 = true;
            			}
HXDLIN(1119)			if (_hx_tmp1) {
HXLINE(1119)				continue;
            			}
HXLINE(1122)			bool _hx_tmp2;
HXDLIN(1122)			bool _hx_tmp3;
HXDLIN(1122)			bool _hx_tmp4;
HXDLIN(1122)			if (::hx::IsNotNull( op1 )) {
HXLINE(1122)				_hx_tmp4 = (rb->deltaY == 0);
            			}
            			else {
HXLINE(1122)				_hx_tmp4 = false;
            			}
HXDLIN(1122)			if (_hx_tmp4) {
HXLINE(1122)				_hx_tmp3 = (this->m_GhostJoins->length > 0);
            			}
            			else {
HXLINE(1122)				_hx_tmp3 = false;
            			}
HXDLIN(1122)			if (_hx_tmp3) {
HXLINE(1122)				_hx_tmp2 = (rb->windDelta != 0);
            			}
            			else {
HXLINE(1122)				_hx_tmp2 = false;
            			}
HXDLIN(1122)			if (_hx_tmp2) {
HXLINE(1123)				int _g = 0;
HXDLIN(1123)				::Array< ::Dynamic> _g1 = this->m_GhostJoins;
HXDLIN(1123)				while((_g < _g1->length)){
HXLINE(1123)					 ::hxd::clipper::_Clipper::Join j = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::Join >();
HXDLIN(1123)					_g = (_g + 1);
HXLINE(1126)					if (this->HorzSegmentsOverlap(j->outPt1->pt->x,j->offPt->x,rb->botX,rb->topX)) {
HXLINE(1127)						this->AddJoin(j->outPt1,op1,j->offPt);
            					}
            				}
            			}
HXLINE(1131)			bool _hx_tmp5;
HXDLIN(1131)			bool _hx_tmp6;
HXDLIN(1131)			bool _hx_tmp7;
HXDLIN(1131)			bool _hx_tmp8;
HXDLIN(1131)			bool _hx_tmp9;
HXDLIN(1131)			bool _hx_tmp10;
HXDLIN(1131)			if ((lb->outIdx >= 0)) {
HXLINE(1131)				_hx_tmp10 = ::hx::IsNotNull( lb->prevInAEL );
            			}
            			else {
HXLINE(1131)				_hx_tmp10 = false;
            			}
HXDLIN(1131)			if (_hx_tmp10) {
HXLINE(1131)				_hx_tmp9 = (lb->prevInAEL->currX == lb->botX);
            			}
            			else {
HXLINE(1131)				_hx_tmp9 = false;
            			}
HXDLIN(1131)			if (_hx_tmp9) {
HXLINE(1131)				_hx_tmp8 = (lb->prevInAEL->outIdx >= 0);
            			}
            			else {
HXLINE(1131)				_hx_tmp8 = false;
            			}
HXDLIN(1131)			if (_hx_tmp8) {
HXLINE(1131)				 ::hxd::clipper::_Clipper::TEdge e1 = lb->prevInAEL;
HXDLIN(1131)				_hx_tmp7 = ((e1->deltaY * lb->deltaX) == (e1->deltaX * lb->deltaY));
            			}
            			else {
HXLINE(1131)				_hx_tmp7 = false;
            			}
HXDLIN(1131)			if (_hx_tmp7) {
HXLINE(1131)				_hx_tmp6 = (lb->windDelta != 0);
            			}
            			else {
HXLINE(1131)				_hx_tmp6 = false;
            			}
HXDLIN(1131)			if (_hx_tmp6) {
HXLINE(1131)				_hx_tmp5 = (lb->prevInAEL->windDelta != 0);
            			}
            			else {
HXLINE(1131)				_hx_tmp5 = false;
            			}
HXDLIN(1131)			if (_hx_tmp5) {
HXLINE(1132)				 ::hxd::clipper::_Clipper::TEdge lb1 = lb->prevInAEL;
HXDLIN(1132)				 ::hxd::clipper::_Clipper::OutPt op2 = this->AddOutPt(lb1, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,lb->botX,lb->botY));
HXLINE(1133)				this->AddJoin(op1,op2, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,lb->topX,lb->topY));
            			}
HXLINE(1136)			if (::hx::IsInstanceNotEq( lb->nextInAEL,rb )) {
HXLINE(1137)				bool _hx_tmp;
HXDLIN(1137)				bool _hx_tmp1;
HXDLIN(1137)				bool _hx_tmp2;
HXDLIN(1137)				bool _hx_tmp3;
HXDLIN(1137)				if ((rb->outIdx >= 0)) {
HXLINE(1137)					_hx_tmp3 = (rb->prevInAEL->outIdx >= 0);
            				}
            				else {
HXLINE(1137)					_hx_tmp3 = false;
            				}
HXDLIN(1137)				if (_hx_tmp3) {
HXLINE(1137)					 ::hxd::clipper::_Clipper::TEdge e1 = rb->prevInAEL;
HXDLIN(1137)					_hx_tmp2 = ((e1->deltaY * rb->deltaX) == (e1->deltaX * rb->deltaY));
            				}
            				else {
HXLINE(1137)					_hx_tmp2 = false;
            				}
HXDLIN(1137)				if (_hx_tmp2) {
HXLINE(1137)					_hx_tmp1 = (rb->windDelta != 0);
            				}
            				else {
HXLINE(1137)					_hx_tmp1 = false;
            				}
HXDLIN(1137)				if (_hx_tmp1) {
HXLINE(1137)					_hx_tmp = (rb->prevInAEL->windDelta != 0);
            				}
            				else {
HXLINE(1137)					_hx_tmp = false;
            				}
HXDLIN(1137)				if (_hx_tmp) {
HXLINE(1138)					 ::hxd::clipper::_Clipper::TEdge rb1 = rb->prevInAEL;
HXDLIN(1138)					 ::hxd::clipper::_Clipper::OutPt op2 = this->AddOutPt(rb1, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,rb->botX,rb->botY));
HXLINE(1139)					this->AddJoin(op1,op2, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,rb->topX,rb->topY));
            				}
HXLINE(1142)				 ::hxd::clipper::_Clipper::TEdge e = lb->nextInAEL;
HXLINE(1143)				if (::hx::IsNotNull( e )) {
HXLINE(1144)					while(::hx::IsInstanceNotEq( e,rb )){
HXLINE(1147)						this->IntersectEdges(rb,e, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,lb->currX,lb->currY));
HXLINE(1148)						e = e->nextInAEL;
            					}
            				}
            			}
            		}
            		_hx_goto_22:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,InsertLocalMinimaIntoAEL,(void))

void Clipper_obj::InsertEdgeIntoAEL( ::hxd::clipper::_Clipper::TEdge edge, ::hxd::clipper::_Clipper::TEdge startEdge){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1157_InsertEdgeIntoAEL)
HXDLIN(1157)		if (::hx::IsNull( this->m_ActiveEdges )) {
HXLINE(1159)			edge->prevInAEL = null();
HXLINE(1160)			edge->nextInAEL = null();
HXLINE(1161)			this->m_ActiveEdges = edge;
            		}
            		else {
HXLINE(1163)			bool _hx_tmp;
HXDLIN(1163)			if (::hx::IsNull( startEdge )) {
HXLINE(1163)				_hx_tmp = this->E2InsertsBeforeE1(this->m_ActiveEdges,edge);
            			}
            			else {
HXLINE(1163)				_hx_tmp = false;
            			}
HXDLIN(1163)			if (_hx_tmp) {
HXLINE(1164)				edge->prevInAEL = null();
HXLINE(1165)				edge->nextInAEL = this->m_ActiveEdges;
HXLINE(1166)				this->m_ActiveEdges->prevInAEL = edge;
HXLINE(1167)				this->m_ActiveEdges = edge;
            			}
            			else {
HXLINE(1170)				if (::hx::IsNull( startEdge )) {
HXLINE(1171)					startEdge = this->m_ActiveEdges;
            				}
HXLINE(1172)				while(true){
HXLINE(1172)					bool _hx_tmp;
HXDLIN(1172)					if (::hx::IsNotNull( startEdge->nextInAEL )) {
HXLINE(1172)						_hx_tmp = !(this->E2InsertsBeforeE1(startEdge->nextInAEL,edge));
            					}
            					else {
HXLINE(1172)						_hx_tmp = false;
            					}
HXDLIN(1172)					if (!(_hx_tmp)) {
HXLINE(1172)						goto _hx_goto_26;
            					}
HXLINE(1173)					startEdge = startEdge->nextInAEL;
            				}
            				_hx_goto_26:;
HXLINE(1175)				edge->nextInAEL = startEdge->nextInAEL;
HXLINE(1176)				if (::hx::IsNotNull( startEdge->nextInAEL )) {
HXLINE(1176)					startEdge->nextInAEL->prevInAEL = edge;
            				}
HXLINE(1177)				edge->prevInAEL = startEdge;
HXLINE(1178)				startEdge->nextInAEL = edge;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,InsertEdgeIntoAEL,(void))

bool Clipper_obj::E2InsertsBeforeE1( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1185_E2InsertsBeforeE1)
HXDLIN(1185)		if ((e2->currX == e1->currX)) {
HXLINE(1187)			if ((e2->topY > e1->topY)) {
HXLINE(1188)				int e21 = e2->topX;
HXDLIN(1188)				int currentY = e2->topY;
HXDLIN(1188)				int _hx_tmp;
HXDLIN(1188)				if ((currentY == e1->topY)) {
HXLINE(1188)					_hx_tmp = e1->topX;
            				}
            				else {
HXLINE(1188)					int e11 = e1->botX;
HXDLIN(1188)					Float value = (e1->dx * ( (Float)((currentY - e1->botY)) ));
HXDLIN(1188)					int _hx_tmp1;
HXDLIN(1188)					if ((value < 0)) {
HXLINE(1188)						_hx_tmp1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            					}
            					else {
HXLINE(1188)						_hx_tmp1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            					}
HXDLIN(1188)					_hx_tmp = (e11 + _hx_tmp1);
            				}
HXDLIN(1188)				return (e21 < _hx_tmp);
            			}
            			else {
HXLINE(1189)				int e11 = e1->topX;
HXDLIN(1189)				int currentY = e1->topY;
HXDLIN(1189)				int _hx_tmp;
HXDLIN(1189)				if ((currentY == e2->topY)) {
HXLINE(1189)					_hx_tmp = e2->topX;
            				}
            				else {
HXLINE(1189)					int e21 = e2->botX;
HXDLIN(1189)					Float value = (e2->dx * ( (Float)((currentY - e2->botY)) ));
HXDLIN(1189)					int _hx_tmp1;
HXDLIN(1189)					if ((value < 0)) {
HXLINE(1189)						_hx_tmp1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            					}
            					else {
HXLINE(1189)						_hx_tmp1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            					}
HXDLIN(1189)					_hx_tmp = (e21 + _hx_tmp1);
            				}
HXDLIN(1189)				return (e11 > _hx_tmp);
            			}
            		}
            		else {
HXLINE(1191)			return (e2->currX < e1->currX);
            		}
HXLINE(1185)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,E2InsertsBeforeE1,return )

bool Clipper_obj::IsEvenOddFillType( ::hxd::clipper::_Clipper::TEdge edge){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1197_IsEvenOddFillType)
HXDLIN(1197)		if (::hx::IsPointerEq( edge->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(1198)			return ::hx::IsPointerEq( this->m_SubjFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            		}
            		else {
HXLINE(1200)			return ::hx::IsPointerEq( this->m_ClipFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            		}
HXLINE(1197)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,IsEvenOddFillType,return )

bool Clipper_obj::IsEvenOddAltFillType( ::hxd::clipper::_Clipper::TEdge edge){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1206_IsEvenOddAltFillType)
HXDLIN(1206)		if (::hx::IsPointerEq( edge->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(1207)			return ::hx::IsPointerEq( this->m_ClipFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            		}
            		else {
HXLINE(1209)			return ::hx::IsPointerEq( this->m_SubjFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            		}
HXLINE(1206)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,IsEvenOddAltFillType,return )

bool Clipper_obj::IsContributing( ::hxd::clipper::_Clipper::TEdge edge){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1214_IsContributing)
HXLINE(1215)		 ::hxd::clipper::PolyFillType pft;
HXDLIN(1215)		 ::hxd::clipper::PolyFillType pft2;
HXLINE(1216)		if (::hx::IsPointerEq( edge->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(1218)			pft = this->m_SubjFillType;
HXLINE(1219)			pft2 = this->m_ClipFillType;
            		}
            		else {
HXLINE(1223)			pft = this->m_ClipFillType;
HXLINE(1224)			pft2 = this->m_SubjFillType;
            		}
HXLINE(1227)		switch((int)(pft->_hx_getIndex())){
            			case (int)0: {
HXLINE(1230)				bool _hx_tmp;
HXDLIN(1230)				if ((edge->windDelta == 0)) {
HXLINE(1230)					_hx_tmp = (edge->windCnt != 1);
            				}
            				else {
HXLINE(1230)					_hx_tmp = false;
            				}
HXDLIN(1230)				if (_hx_tmp) {
HXLINE(1230)					return false;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(1232)				Float f = ( (Float)(edge->windCnt) );
HXDLIN(1232)				Float _hx_tmp;
HXDLIN(1232)				if ((f < 0)) {
HXLINE(1232)					_hx_tmp = -(f);
            				}
            				else {
HXLINE(1232)					_hx_tmp = f;
            				}
HXDLIN(1232)				if ((_hx_tmp != 1)) {
HXLINE(1232)					return false;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(1234)				if ((edge->windCnt != 1)) {
HXLINE(1234)					return false;
            				}
            			}
            			break;
            			default:{
HXLINE(1236)				if ((edge->windCnt != -1)) {
HXLINE(1236)					return false;
            				}
            			}
            		}
HXLINE(1240)		switch((int)(this->m_ClipType->_hx_getIndex())){
            			case (int)0: {
HXLINE(1243)				switch((int)(pft2->_hx_getIndex())){
            					case (int)0: case (int)1: {
HXLINE(1246)						return (edge->windCnt2 != 0);
            					}
            					break;
            					case (int)2: {
HXLINE(1248)						return (edge->windCnt2 > 0);
            					}
            					break;
            					default:{
HXLINE(1250)						return (edge->windCnt2 < 0);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(1253)				switch((int)(pft2->_hx_getIndex())){
            					case (int)0: case (int)1: {
HXLINE(1256)						return (edge->windCnt2 == 0);
            					}
            					break;
            					case (int)2: {
HXLINE(1258)						return (edge->windCnt2 <= 0);
            					}
            					break;
            					default:{
HXLINE(1260)						return (edge->windCnt2 >= 0);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(1263)				if (::hx::IsPointerEq( edge->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(1264)					switch((int)(pft2->_hx_getIndex())){
            						case (int)0: case (int)1: {
HXLINE(1267)							return (edge->windCnt2 == 0);
            						}
            						break;
            						case (int)2: {
HXLINE(1269)							return (edge->windCnt2 <= 0);
            						}
            						break;
            						default:{
HXLINE(1271)							return (edge->windCnt2 >= 0);
            						}
            					}
            				}
            				else {
HXLINE(1274)					switch((int)(pft2->_hx_getIndex())){
            						case (int)0: case (int)1: {
HXLINE(1277)							return (edge->windCnt2 != 0);
            						}
            						break;
            						case (int)2: {
HXLINE(1279)							return (edge->windCnt2 > 0);
            						}
            						break;
            						default:{
HXLINE(1281)							return (edge->windCnt2 < 0);
            						}
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(1284)				if ((edge->windDelta == 0)) {
HXLINE(1285)					switch((int)(pft2->_hx_getIndex())){
            						case (int)0: case (int)1: {
HXLINE(1288)							return (edge->windCnt2 == 0);
            						}
            						break;
            						case (int)2: {
HXLINE(1290)							return (edge->windCnt2 <= 0);
            						}
            						break;
            						default:{
HXLINE(1292)							return (edge->windCnt2 >= 0);
            						}
            					}
            				}
            				else {
HXLINE(1295)					return true;
            				}
            			}
            			break;
            		}
HXLINE(1240)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,IsContributing,return )

void Clipper_obj::SetWindingCount( ::hxd::clipper::_Clipper::TEdge edge){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1301_SetWindingCount)
HXLINE(1302)		 ::hxd::clipper::_Clipper::TEdge e = edge->prevInAEL;
HXLINE(1304)		while(true){
HXLINE(1304)			bool _hx_tmp;
HXDLIN(1304)			if (::hx::IsNotNull( e )) {
HXLINE(1304)				if (::hx::IsPointerEq( e->polyType,edge->polyType )) {
HXLINE(1304)					_hx_tmp = (e->windDelta == 0);
            				}
            				else {
HXLINE(1304)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(1304)				_hx_tmp = false;
            			}
HXDLIN(1304)			if (!(_hx_tmp)) {
HXLINE(1304)				goto _hx_goto_32;
            			}
HXDLIN(1304)			e = e->prevInAEL;
            		}
            		_hx_goto_32:;
HXLINE(1305)		if (::hx::IsNull( e )) {
HXLINE(1306)			int _hx_tmp;
HXDLIN(1306)			if ((edge->windDelta == 0)) {
HXLINE(1306)				_hx_tmp = 1;
            			}
            			else {
HXLINE(1306)				_hx_tmp = edge->windDelta;
            			}
HXDLIN(1306)			edge->windCnt = _hx_tmp;
HXLINE(1307)			edge->windCnt2 = 0;
HXLINE(1308)			e = this->m_ActiveEdges;
            		}
            		else {
HXLINE(1309)			bool _hx_tmp;
HXDLIN(1309)			if ((edge->windDelta == 0)) {
HXLINE(1309)				_hx_tmp = ::hx::IsPointerNotEq( this->m_ClipType,::hxd::clipper::ClipType_obj::Union_dyn() );
            			}
            			else {
HXLINE(1309)				_hx_tmp = false;
            			}
HXDLIN(1309)			if (_hx_tmp) {
HXLINE(1310)				edge->windCnt = 1;
HXLINE(1311)				edge->windCnt2 = e->windCnt2;
HXLINE(1312)				e = e->nextInAEL;
            			}
            			else {
HXLINE(1313)				bool _hx_tmp;
HXDLIN(1313)				if (::hx::IsPointerEq( edge->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(1313)					_hx_tmp = ::hx::IsPointerEq( this->m_SubjFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            				}
            				else {
HXLINE(1313)					_hx_tmp = ::hx::IsPointerEq( this->m_ClipFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            				}
HXDLIN(1313)				if (_hx_tmp) {
HXLINE(1315)					if ((edge->windDelta == 0)) {
HXLINE(1317)						bool Inside = true;
HXLINE(1318)						 ::hxd::clipper::_Clipper::TEdge e2 = e->prevInAEL;
HXLINE(1319)						while(::hx::IsNotNull( e2 )){
HXLINE(1320)							bool _hx_tmp;
HXDLIN(1320)							if (::hx::IsPointerEq( e2->polyType,e->polyType )) {
HXLINE(1320)								_hx_tmp = (e2->windDelta != 0);
            							}
            							else {
HXLINE(1320)								_hx_tmp = false;
            							}
HXDLIN(1320)							if (_hx_tmp) {
HXLINE(1321)								Inside = !(Inside);
            							}
HXLINE(1322)							e2 = e2->prevInAEL;
            						}
HXLINE(1324)						int _hx_tmp;
HXDLIN(1324)						if (Inside) {
HXLINE(1324)							_hx_tmp = 0;
            						}
            						else {
HXLINE(1324)							_hx_tmp = 1;
            						}
HXDLIN(1324)						edge->windCnt = _hx_tmp;
            					}
            					else {
HXLINE(1326)						edge->windCnt = edge->windDelta;
            					}
HXLINE(1327)					edge->windCnt2 = e->windCnt2;
HXLINE(1328)					e = e->nextInAEL;
            				}
            				else {
HXLINE(1331)					if (((e->windCnt * e->windDelta) < 0)) {
HXLINE(1334)						bool _hx_tmp;
HXDLIN(1334)						if ((e->windCnt <= 1)) {
HXLINE(1334)							_hx_tmp = (e->windCnt < -1);
            						}
            						else {
HXLINE(1334)							_hx_tmp = true;
            						}
HXDLIN(1334)						if (_hx_tmp) {
HXLINE(1337)							if (((e->windDelta * edge->windDelta) < 0)) {
HXLINE(1337)								edge->windCnt = e->windCnt;
            							}
            							else {
HXLINE(1339)								edge->windCnt = (e->windCnt + edge->windDelta);
            							}
            						}
            						else {
HXLINE(1342)							int _hx_tmp;
HXDLIN(1342)							if ((edge->windDelta == 0)) {
HXLINE(1342)								_hx_tmp = 1;
            							}
            							else {
HXLINE(1342)								_hx_tmp = edge->windDelta;
            							}
HXDLIN(1342)							edge->windCnt = _hx_tmp;
            						}
            					}
            					else {
HXLINE(1346)						if ((edge->windDelta == 0)) {
HXLINE(1347)							int _hx_tmp;
HXDLIN(1347)							if ((e->windCnt < 0)) {
HXLINE(1347)								_hx_tmp = (e->windCnt - 1);
            							}
            							else {
HXLINE(1347)								_hx_tmp = (e->windCnt + 1);
            							}
HXDLIN(1347)							edge->windCnt = _hx_tmp;
            						}
            						else {
HXLINE(1349)							if (((e->windDelta * edge->windDelta) < 0)) {
HXLINE(1350)								edge->windCnt = e->windCnt;
            							}
            							else {
HXLINE(1352)								edge->windCnt = (e->windCnt + edge->windDelta);
            							}
            						}
            					}
HXLINE(1354)					edge->windCnt2 = e->windCnt2;
HXLINE(1355)					e = e->nextInAEL;
            				}
            			}
            		}
HXLINE(1359)		bool _hx_tmp;
HXDLIN(1359)		if (::hx::IsPointerEq( edge->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(1359)			_hx_tmp = ::hx::IsPointerEq( this->m_ClipFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            		}
            		else {
HXLINE(1359)			_hx_tmp = ::hx::IsPointerEq( this->m_SubjFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            		}
HXDLIN(1359)		if (_hx_tmp) {
HXLINE(1361)			while(::hx::IsInstanceNotEq( e,edge )){
HXLINE(1362)				if ((e->windDelta != 0)) {
HXLINE(1363)					int _hx_tmp;
HXDLIN(1363)					if ((edge->windCnt2 == 0)) {
HXLINE(1363)						_hx_tmp = 1;
            					}
            					else {
HXLINE(1363)						_hx_tmp = 0;
            					}
HXDLIN(1363)					edge->windCnt2 = _hx_tmp;
            				}
HXLINE(1364)				e = e->nextInAEL;
            			}
            		}
            		else {
HXLINE(1368)			while(::hx::IsInstanceNotEq( e,edge )){
HXLINE(1369)				 ::hxd::clipper::_Clipper::TEdge edge1 = edge;
HXDLIN(1369)				edge1->windCnt2 = (edge1->windCnt2 + e->windDelta);
HXLINE(1370)				e = e->nextInAEL;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,SetWindingCount,(void))

void Clipper_obj::AddEdgeToSEL( ::hxd::clipper::_Clipper::TEdge edge){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1381_AddEdgeToSEL)
HXDLIN(1381)		if (::hx::IsNull( this->m_SortedEdges )) {
HXLINE(1383)			this->m_SortedEdges = edge;
HXLINE(1384)			edge->prevInSEL = null();
HXLINE(1385)			edge->nextInSEL = null();
            		}
            		else {
HXLINE(1389)			edge->nextInSEL = this->m_SortedEdges;
HXLINE(1390)			edge->prevInSEL = null();
HXLINE(1391)			this->m_SortedEdges->prevInSEL = edge;
HXLINE(1392)			this->m_SortedEdges = edge;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,AddEdgeToSEL,(void))

void Clipper_obj::CopyAELToSEL(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1398_CopyAELToSEL)
HXLINE(1399)		 ::hxd::clipper::_Clipper::TEdge e = this->m_ActiveEdges;
HXLINE(1400)		this->m_SortedEdges = e;
HXLINE(1401)		while(::hx::IsNotNull( e )){
HXLINE(1403)			e->prevInSEL = e->prevInAEL;
HXLINE(1404)			e->nextInSEL = e->nextInAEL;
HXLINE(1405)			e = e->nextInAEL;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Clipper_obj,CopyAELToSEL,(void))

void Clipper_obj::SwapPositionsInAEL( ::hxd::clipper::_Clipper::TEdge edge1, ::hxd::clipper::_Clipper::TEdge edge2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1410_SwapPositionsInAEL)
HXLINE(1412)		bool _hx_tmp;
HXDLIN(1412)		if (::hx::IsInstanceNotEq( edge1->nextInAEL,edge1->prevInAEL )) {
HXLINE(1412)			_hx_tmp = ::hx::IsInstanceEq( edge2->nextInAEL,edge2->prevInAEL );
            		}
            		else {
HXLINE(1412)			_hx_tmp = true;
            		}
HXDLIN(1412)		if (_hx_tmp) {
HXLINE(1413)			return;
            		}
HXLINE(1415)		if (::hx::IsInstanceEq( edge1->nextInAEL,edge2 )) {
HXLINE(1417)			 ::hxd::clipper::_Clipper::TEdge next = edge2->nextInAEL;
HXLINE(1418)			if (::hx::IsNotNull( next )) {
HXLINE(1419)				next->prevInAEL = edge1;
            			}
HXLINE(1420)			 ::hxd::clipper::_Clipper::TEdge prev = edge1->prevInAEL;
HXLINE(1421)			if (::hx::IsNotNull( prev )) {
HXLINE(1422)				prev->nextInAEL = edge2;
            			}
HXLINE(1423)			edge2->prevInAEL = prev;
HXLINE(1424)			edge2->nextInAEL = edge1;
HXLINE(1425)			edge1->prevInAEL = edge2;
HXLINE(1426)			edge1->nextInAEL = next;
            		}
            		else {
HXLINE(1428)			if (::hx::IsInstanceEq( edge2->nextInAEL,edge1 )) {
HXLINE(1430)				 ::hxd::clipper::_Clipper::TEdge next = edge1->nextInAEL;
HXLINE(1431)				if (::hx::IsNotNull( next )) {
HXLINE(1432)					next->prevInAEL = edge2;
            				}
HXLINE(1433)				 ::hxd::clipper::_Clipper::TEdge prev = edge2->prevInAEL;
HXLINE(1434)				if (::hx::IsNotNull( prev )) {
HXLINE(1435)					prev->nextInAEL = edge1;
            				}
HXLINE(1436)				edge1->prevInAEL = prev;
HXLINE(1437)				edge1->nextInAEL = edge2;
HXLINE(1438)				edge2->prevInAEL = edge1;
HXLINE(1439)				edge2->nextInAEL = next;
            			}
            			else {
HXLINE(1443)				 ::hxd::clipper::_Clipper::TEdge next = edge1->nextInAEL;
HXLINE(1444)				 ::hxd::clipper::_Clipper::TEdge prev = edge1->prevInAEL;
HXLINE(1445)				edge1->nextInAEL = edge2->nextInAEL;
HXLINE(1446)				if (::hx::IsNotNull( edge1->nextInAEL )) {
HXLINE(1447)					edge1->nextInAEL->prevInAEL = edge1;
            				}
HXLINE(1448)				edge1->prevInAEL = edge2->prevInAEL;
HXLINE(1449)				if (::hx::IsNotNull( edge1->prevInAEL )) {
HXLINE(1450)					edge1->prevInAEL->nextInAEL = edge1;
            				}
HXLINE(1451)				edge2->nextInAEL = next;
HXLINE(1452)				if (::hx::IsNotNull( edge2->nextInAEL )) {
HXLINE(1453)					edge2->nextInAEL->prevInAEL = edge2;
            				}
HXLINE(1454)				edge2->prevInAEL = prev;
HXLINE(1455)				if (::hx::IsNotNull( edge2->prevInAEL )) {
HXLINE(1456)					edge2->prevInAEL->nextInAEL = edge2;
            				}
            			}
            		}
HXLINE(1459)		if (::hx::IsNull( edge1->prevInAEL )) {
HXLINE(1460)			this->m_ActiveEdges = edge1;
            		}
            		else {
HXLINE(1461)			if (::hx::IsNull( edge2->prevInAEL )) {
HXLINE(1462)				this->m_ActiveEdges = edge2;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,SwapPositionsInAEL,(void))

void Clipper_obj::SwapPositionsInSEL( ::hxd::clipper::_Clipper::TEdge edge1, ::hxd::clipper::_Clipper::TEdge edge2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1467_SwapPositionsInSEL)
HXLINE(1468)		bool _hx_tmp;
HXDLIN(1468)		if (::hx::IsNull( edge1->nextInSEL )) {
HXLINE(1468)			_hx_tmp = ::hx::IsNull( edge1->prevInSEL );
            		}
            		else {
HXLINE(1468)			_hx_tmp = false;
            		}
HXDLIN(1468)		if (_hx_tmp) {
HXLINE(1469)			return;
            		}
HXLINE(1470)		bool _hx_tmp1;
HXDLIN(1470)		if (::hx::IsNull( edge2->nextInSEL )) {
HXLINE(1470)			_hx_tmp1 = ::hx::IsNull( edge2->prevInSEL );
            		}
            		else {
HXLINE(1470)			_hx_tmp1 = false;
            		}
HXDLIN(1470)		if (_hx_tmp1) {
HXLINE(1471)			return;
            		}
HXLINE(1473)		if (::hx::IsInstanceEq( edge1->nextInSEL,edge2 )) {
HXLINE(1475)			 ::hxd::clipper::_Clipper::TEdge next = edge2->nextInSEL;
HXLINE(1476)			if (::hx::IsNotNull( next )) {
HXLINE(1477)				next->prevInSEL = edge1;
            			}
HXLINE(1478)			 ::hxd::clipper::_Clipper::TEdge prev = edge1->prevInSEL;
HXLINE(1479)			if (::hx::IsNotNull( prev )) {
HXLINE(1480)				prev->nextInSEL = edge2;
            			}
HXLINE(1481)			edge2->prevInSEL = prev;
HXLINE(1482)			edge2->nextInSEL = edge1;
HXLINE(1483)			edge1->prevInSEL = edge2;
HXLINE(1484)			edge1->nextInSEL = next;
            		}
            		else {
HXLINE(1486)			if (::hx::IsInstanceEq( edge2->nextInSEL,edge1 )) {
HXLINE(1488)				 ::hxd::clipper::_Clipper::TEdge next = edge1->nextInSEL;
HXLINE(1489)				if (::hx::IsNotNull( next )) {
HXLINE(1490)					next->prevInSEL = edge2;
            				}
HXLINE(1491)				 ::hxd::clipper::_Clipper::TEdge prev = edge2->prevInSEL;
HXLINE(1492)				if (::hx::IsNotNull( prev )) {
HXLINE(1493)					prev->nextInSEL = edge1;
            				}
HXLINE(1494)				edge1->prevInSEL = prev;
HXLINE(1495)				edge1->nextInSEL = edge2;
HXLINE(1496)				edge2->prevInSEL = edge1;
HXLINE(1497)				edge2->nextInSEL = next;
            			}
            			else {
HXLINE(1501)				 ::hxd::clipper::_Clipper::TEdge next = edge1->nextInSEL;
HXLINE(1502)				 ::hxd::clipper::_Clipper::TEdge prev = edge1->prevInSEL;
HXLINE(1503)				edge1->nextInSEL = edge2->nextInSEL;
HXLINE(1504)				if (::hx::IsNotNull( edge1->nextInSEL )) {
HXLINE(1505)					edge1->nextInSEL->prevInSEL = edge1;
            				}
HXLINE(1506)				edge1->prevInSEL = edge2->prevInSEL;
HXLINE(1507)				if (::hx::IsNotNull( edge1->prevInSEL )) {
HXLINE(1508)					edge1->prevInSEL->nextInSEL = edge1;
            				}
HXLINE(1509)				edge2->nextInSEL = next;
HXLINE(1510)				if (::hx::IsNotNull( edge2->nextInSEL )) {
HXLINE(1511)					edge2->nextInSEL->prevInSEL = edge2;
            				}
HXLINE(1512)				edge2->prevInSEL = prev;
HXLINE(1513)				if (::hx::IsNotNull( edge2->prevInSEL )) {
HXLINE(1514)					edge2->prevInSEL->nextInSEL = edge2;
            				}
            			}
            		}
HXLINE(1517)		if (::hx::IsNull( edge1->prevInSEL )) {
HXLINE(1518)			this->m_SortedEdges = edge1;
            		}
            		else {
HXLINE(1519)			if (::hx::IsNull( edge2->prevInSEL )) {
HXLINE(1520)				this->m_SortedEdges = edge2;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,SwapPositionsInSEL,(void))

void Clipper_obj::AddLocalMaxPoly( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2, ::h2d::col::IPoint pt){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1526_AddLocalMaxPoly)
HXLINE(1527)		this->AddOutPt(e1,pt);
HXLINE(1528)		if ((e2->windDelta == 0)) {
HXLINE(1528)			this->AddOutPt(e2,pt);
            		}
HXLINE(1529)		if ((e1->outIdx == e2->outIdx)) {
HXLINE(1531)			e1->outIdx = -1;
HXLINE(1532)			e2->outIdx = -1;
            		}
            		else {
HXLINE(1534)			if ((e1->outIdx < e2->outIdx)) {
HXLINE(1535)				this->AppendPolygon(e1,e2);
            			}
            			else {
HXLINE(1536)				this->AppendPolygon(e2,e1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,AddLocalMaxPoly,(void))

 ::hxd::clipper::_Clipper::OutPt Clipper_obj::AddLocalMinPoly( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2, ::h2d::col::IPoint pt){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_1541_AddLocalMinPoly)
HXLINE(1542)		 ::hxd::clipper::_Clipper::OutPt result;
HXLINE(1543)		 ::hxd::clipper::_Clipper::TEdge e;
HXDLIN(1543)		 ::hxd::clipper::_Clipper::TEdge prevE;
HXLINE(1545)		bool _hx_tmp;
HXDLIN(1545)		if ((e2->deltaY != 0)) {
HXLINE(1545)			_hx_tmp = (e1->dx > e2->dx);
            		}
            		else {
HXLINE(1545)			_hx_tmp = true;
            		}
HXDLIN(1545)		if (_hx_tmp) {
HXLINE(1547)			result = this->AddOutPt(e1,pt);
HXLINE(1548)			e2->outIdx = e1->outIdx;
HXLINE(1549)			e1->side = ::hxd::clipper::_Clipper::EdgeSide_obj::Left_dyn();
HXLINE(1550)			e2->side = ::hxd::clipper::_Clipper::EdgeSide_obj::Right_dyn();
HXLINE(1551)			e = e1;
HXLINE(1552)			if (::hx::IsInstanceEq( e->prevInAEL,e2 )) {
HXLINE(1553)				prevE = e2->prevInAEL;
            			}
            			else {
HXLINE(1555)				prevE = e->prevInAEL;
            			}
            		}
            		else {
HXLINE(1559)			result = this->AddOutPt(e2,pt);
HXLINE(1560)			e1->outIdx = e2->outIdx;
HXLINE(1561)			e1->side = ::hxd::clipper::_Clipper::EdgeSide_obj::Right_dyn();
HXLINE(1562)			e2->side = ::hxd::clipper::_Clipper::EdgeSide_obj::Left_dyn();
HXLINE(1563)			e = e2;
HXLINE(1564)			if (::hx::IsInstanceEq( e->prevInAEL,e1 )) {
HXLINE(1565)				prevE = e1->prevInAEL;
            			}
            			else {
HXLINE(1567)				prevE = e->prevInAEL;
            			}
            		}
HXLINE(1570)		bool _hx_tmp1;
HXDLIN(1570)		bool _hx_tmp2;
HXDLIN(1570)		bool _hx_tmp3;
HXDLIN(1570)		bool _hx_tmp4;
HXDLIN(1570)		bool _hx_tmp5;
HXDLIN(1570)		if (::hx::IsNotNull( prevE )) {
HXLINE(1570)			_hx_tmp5 = (prevE->outIdx >= 0);
            		}
            		else {
HXLINE(1570)			_hx_tmp5 = false;
            		}
HXDLIN(1570)		if (_hx_tmp5) {
HXLINE(1570)			int currentY = pt->y;
HXDLIN(1570)			int _hx_tmp;
HXDLIN(1570)			if ((currentY == prevE->topY)) {
HXLINE(1570)				_hx_tmp = prevE->topX;
            			}
            			else {
HXLINE(1570)				int prevE1 = prevE->botX;
HXDLIN(1570)				Float value = (prevE->dx * ( (Float)((currentY - prevE->botY)) ));
HXDLIN(1570)				int _hx_tmp1;
HXDLIN(1570)				if ((value < 0)) {
HXLINE(1570)					_hx_tmp1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            				}
            				else {
HXLINE(1570)					_hx_tmp1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            				}
HXDLIN(1570)				_hx_tmp = (prevE1 + _hx_tmp1);
            			}
HXDLIN(1570)			int currentY1 = pt->y;
HXDLIN(1570)			int _hx_tmp1;
HXDLIN(1570)			if ((currentY1 == e->topY)) {
HXLINE(1570)				_hx_tmp1 = e->topX;
            			}
            			else {
HXLINE(1570)				int e1 = e->botX;
HXDLIN(1570)				Float value = (e->dx * ( (Float)((currentY1 - e->botY)) ));
HXDLIN(1570)				int _hx_tmp;
HXDLIN(1570)				if ((value < 0)) {
HXLINE(1570)					_hx_tmp = ::Std_obj::_hx_int((value - ((Float)0.5)));
            				}
            				else {
HXLINE(1570)					_hx_tmp = ::Std_obj::_hx_int((value + ((Float)0.5)));
            				}
HXDLIN(1570)				_hx_tmp1 = (e1 + _hx_tmp);
            			}
HXDLIN(1570)			_hx_tmp4 = (_hx_tmp == _hx_tmp1);
            		}
            		else {
HXLINE(1570)			_hx_tmp4 = false;
            		}
HXDLIN(1570)		if (_hx_tmp4) {
HXLINE(1570)			_hx_tmp3 = ((e->deltaY * prevE->deltaX) == (e->deltaX * prevE->deltaY));
            		}
            		else {
HXLINE(1570)			_hx_tmp3 = false;
            		}
HXDLIN(1570)		if (_hx_tmp3) {
HXLINE(1570)			_hx_tmp2 = (e->windDelta != 0);
            		}
            		else {
HXLINE(1570)			_hx_tmp2 = false;
            		}
HXDLIN(1570)		if (_hx_tmp2) {
HXLINE(1570)			_hx_tmp1 = (prevE->windDelta != 0);
            		}
            		else {
HXLINE(1570)			_hx_tmp1 = false;
            		}
HXDLIN(1570)		if (_hx_tmp1) {
HXLINE(1571)			 ::hxd::clipper::_Clipper::OutPt out = this->AddOutPt(prevE,pt);
HXLINE(1572)			this->AddJoin(result,out, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->topX,e->topY));
            		}
HXLINE(1574)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,AddLocalMinPoly,return )

 ::hxd::clipper::_Clipper::OutRec Clipper_obj::CreateOutRec(){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_1579_CreateOutRec)
HXLINE(1580)		 ::hxd::clipper::_Clipper::OutRec result =  ::hxd::clipper::_Clipper::OutRec_obj::__alloc( HX_CTX );
HXLINE(1581)		result->idx = -1;
HXLINE(1582)		result->isHole = false;
HXLINE(1583)		result->firstLeft = null();
HXLINE(1584)		result->pts = null();
HXLINE(1585)		result->bottomPt = null();
HXLINE(1586)		result->polyNode = null();
HXLINE(1587)		this->m_PolyOuts->push(result);
HXLINE(1588)		result->idx = (this->m_PolyOuts->length - 1);
HXLINE(1589)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Clipper_obj,CreateOutRec,return )

 ::hxd::clipper::_Clipper::OutPt Clipper_obj::AddOutPt( ::hxd::clipper::_Clipper::TEdge e, ::h2d::col::IPoint pt){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_1594_AddOutPt)
HXLINE(1595)		bool ToFront = ::hx::IsPointerEq( e->side,::hxd::clipper::_Clipper::EdgeSide_obj::Left_dyn() );
HXLINE(1597)		if ((e->outIdx < 0)) {
HXLINE(1599)			 ::hxd::clipper::_Clipper::OutRec outRec = this->CreateOutRec();
HXLINE(1600)			 ::hxd::clipper::_Clipper::OutPt op =  ::hxd::clipper::_Clipper::OutPt_obj::__alloc( HX_CTX );
HXLINE(1601)			outRec->pts = op;
HXLINE(1602)			op->idx = outRec->idx;
HXLINE(1603)			op->pt =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,pt->x,pt->y);
HXLINE(1604)			op->next = op;
HXLINE(1605)			op->prev = op;
HXLINE(1606)			this->SetHoleState(e,outRec);
HXLINE(1607)			e->outIdx = outRec->idx;
HXLINE(1608)			return op;
            		}
            		else {
HXLINE(1611)			 ::hxd::clipper::_Clipper::OutRec outRec = this->m_PolyOuts->__get(e->outIdx).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXLINE(1612)			 ::hxd::clipper::_Clipper::OutPt op = outRec->pts;
HXLINE(1613)			bool _hx_tmp;
HXDLIN(1613)			if (ToFront) {
HXLINE(1613)				 ::h2d::col::IPoint pt2 = op->pt;
HXDLIN(1613)				if ((pt->x == pt2->x)) {
HXLINE(1613)					_hx_tmp = (pt->y == pt2->y);
            				}
            				else {
HXLINE(1613)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(1613)				_hx_tmp = false;
            			}
HXDLIN(1613)			if (_hx_tmp) {
HXLINE(1613)				return op;
            			}
            			else {
HXLINE(1614)				bool _hx_tmp;
HXDLIN(1614)				if (!(ToFront)) {
HXLINE(1614)					 ::h2d::col::IPoint pt2 = op->prev->pt;
HXDLIN(1614)					if ((pt->x == pt2->x)) {
HXLINE(1614)						_hx_tmp = (pt->y == pt2->y);
            					}
            					else {
HXLINE(1614)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(1614)					_hx_tmp = false;
            				}
HXDLIN(1614)				if (_hx_tmp) {
HXLINE(1614)					return op->prev;
            				}
            			}
HXLINE(1616)			 ::hxd::clipper::_Clipper::OutPt op2 =  ::hxd::clipper::_Clipper::OutPt_obj::__alloc( HX_CTX );
HXLINE(1617)			op2->idx = outRec->idx;
HXLINE(1618)			op2->pt =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,pt->x,pt->y);
HXLINE(1619)			op2->next = op;
HXLINE(1620)			op2->prev = op->prev;
HXLINE(1621)			op2->prev->next = op2;
HXLINE(1622)			op->prev = op2;
HXLINE(1623)			if (ToFront) {
HXLINE(1623)				outRec->pts = op2;
            			}
HXLINE(1624)			return op2;
            		}
HXLINE(1597)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,AddOutPt,return )

bool Clipper_obj::HorzSegmentsOverlap(int seg1a,int seg1b,int seg2a,int seg2b){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1629_HorzSegmentsOverlap)
HXLINE(1630)		if ((seg1a > seg1b)) {
HXLINE(1631)			int tmp = seg1a;
HXLINE(1632)			seg1a = seg1b;
HXLINE(1633)			seg1b = tmp;
            		}
HXLINE(1635)		if ((seg2a > seg2b)) {
HXLINE(1636)			int tmp = seg2a;
HXLINE(1637)			seg2a = seg2b;
HXLINE(1638)			seg2b = tmp;
            		}
HXLINE(1641)		if ((seg1a < seg2b)) {
HXLINE(1641)			return (seg2a < seg1b);
            		}
            		else {
HXLINE(1641)			return false;
            		}
HXDLIN(1641)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Clipper_obj,HorzSegmentsOverlap,return )

void Clipper_obj::SetHoleState( ::hxd::clipper::_Clipper::TEdge e, ::hxd::clipper::_Clipper::OutRec outRec){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1646_SetHoleState)
HXLINE(1647)		bool isHole = false;
HXLINE(1648)		 ::hxd::clipper::_Clipper::TEdge e2 = e->prevInAEL;
HXLINE(1649)		while(::hx::IsNotNull( e2 )){
HXLINE(1651)			bool _hx_tmp;
HXDLIN(1651)			if ((e2->outIdx >= 0)) {
HXLINE(1651)				_hx_tmp = (e2->windDelta != 0);
            			}
            			else {
HXLINE(1651)				_hx_tmp = false;
            			}
HXDLIN(1651)			if (_hx_tmp) {
HXLINE(1653)				isHole = !(isHole);
HXLINE(1654)				if (::hx::IsNull( outRec->firstLeft )) {
HXLINE(1655)					outRec->firstLeft = this->m_PolyOuts->__get(e2->outIdx).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
            				}
            			}
HXLINE(1657)			e2 = e2->prevInAEL;
            		}
HXLINE(1659)		if (isHole) {
HXLINE(1659)			outRec->isHole = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,SetHoleState,(void))

Float Clipper_obj::GetDx( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1665_GetDx)
HXDLIN(1665)		if ((pt1->y == pt2->y)) {
HXDLIN(1665)			return ((Float)-9007199254740992.);
            		}
            		else {
HXLINE(1666)			return (( (Float)((pt2->x - pt1->x)) ) / ( (Float)((pt2->y - pt1->y)) ));
            		}
HXLINE(1665)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,GetDx,return )

bool Clipper_obj::FirstIsBottomPt( ::hxd::clipper::_Clipper::OutPt btmPt1, ::hxd::clipper::_Clipper::OutPt btmPt2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1671_FirstIsBottomPt)
HXLINE(1672)		 ::hxd::clipper::_Clipper::OutPt p = btmPt1->prev;
HXLINE(1673)		while(true){
HXLINE(1673)			bool _hx_tmp;
HXDLIN(1673)			 ::h2d::col::IPoint pt1 = p->pt;
HXDLIN(1673)			 ::h2d::col::IPoint pt2 = btmPt1->pt;
HXDLIN(1673)			bool _hx_tmp1;
HXDLIN(1673)			if ((pt1->x == pt2->x)) {
HXLINE(1673)				_hx_tmp1 = (pt1->y == pt2->y);
            			}
            			else {
HXLINE(1673)				_hx_tmp1 = false;
            			}
HXDLIN(1673)			if (_hx_tmp1) {
HXLINE(1673)				_hx_tmp = ::hx::IsInstanceNotEq( p,btmPt1 );
            			}
            			else {
HXLINE(1673)				_hx_tmp = false;
            			}
HXDLIN(1673)			if (!(_hx_tmp)) {
HXLINE(1673)				goto _hx_goto_50;
            			}
HXDLIN(1673)			p = p->prev;
            		}
            		_hx_goto_50:;
HXLINE(1674)		Float f = this->GetDx(btmPt1->pt,p->pt);
HXDLIN(1674)		Float dx1p;
HXDLIN(1674)		if ((f < 0)) {
HXLINE(1674)			dx1p = -(f);
            		}
            		else {
HXLINE(1674)			dx1p = f;
            		}
HXLINE(1675)		p = btmPt1->next;
HXLINE(1676)		while(true){
HXLINE(1676)			bool _hx_tmp;
HXDLIN(1676)			 ::h2d::col::IPoint pt1 = p->pt;
HXDLIN(1676)			 ::h2d::col::IPoint pt2 = btmPt1->pt;
HXDLIN(1676)			bool _hx_tmp1;
HXDLIN(1676)			if ((pt1->x == pt2->x)) {
HXLINE(1676)				_hx_tmp1 = (pt1->y == pt2->y);
            			}
            			else {
HXLINE(1676)				_hx_tmp1 = false;
            			}
HXDLIN(1676)			if (_hx_tmp1) {
HXLINE(1676)				_hx_tmp = ::hx::IsInstanceNotEq( p,btmPt1 );
            			}
            			else {
HXLINE(1676)				_hx_tmp = false;
            			}
HXDLIN(1676)			if (!(_hx_tmp)) {
HXLINE(1676)				goto _hx_goto_51;
            			}
HXDLIN(1676)			p = p->next;
            		}
            		_hx_goto_51:;
HXLINE(1677)		Float f1 = this->GetDx(btmPt1->pt,p->pt);
HXDLIN(1677)		Float dx1n;
HXDLIN(1677)		if ((f1 < 0)) {
HXLINE(1677)			dx1n = -(f1);
            		}
            		else {
HXLINE(1677)			dx1n = f1;
            		}
HXLINE(1679)		p = btmPt2->prev;
HXLINE(1680)		while(true){
HXLINE(1680)			bool _hx_tmp;
HXDLIN(1680)			 ::h2d::col::IPoint pt1 = p->pt;
HXDLIN(1680)			 ::h2d::col::IPoint pt2 = btmPt2->pt;
HXDLIN(1680)			bool _hx_tmp1;
HXDLIN(1680)			if ((pt1->x == pt2->x)) {
HXLINE(1680)				_hx_tmp1 = (pt1->y == pt2->y);
            			}
            			else {
HXLINE(1680)				_hx_tmp1 = false;
            			}
HXDLIN(1680)			if (_hx_tmp1) {
HXLINE(1680)				_hx_tmp = ::hx::IsInstanceNotEq( p,btmPt2 );
            			}
            			else {
HXLINE(1680)				_hx_tmp = false;
            			}
HXDLIN(1680)			if (!(_hx_tmp)) {
HXLINE(1680)				goto _hx_goto_52;
            			}
HXDLIN(1680)			p = p->prev;
            		}
            		_hx_goto_52:;
HXLINE(1681)		Float f2 = this->GetDx(btmPt2->pt,p->pt);
HXDLIN(1681)		Float dx2p;
HXDLIN(1681)		if ((f2 < 0)) {
HXLINE(1681)			dx2p = -(f2);
            		}
            		else {
HXLINE(1681)			dx2p = f2;
            		}
HXLINE(1682)		p = btmPt2->next;
HXLINE(1683)		while(true){
HXLINE(1683)			bool _hx_tmp;
HXDLIN(1683)			 ::h2d::col::IPoint pt1 = p->pt;
HXDLIN(1683)			 ::h2d::col::IPoint pt2 = btmPt2->pt;
HXDLIN(1683)			bool _hx_tmp1;
HXDLIN(1683)			if ((pt1->x == pt2->x)) {
HXLINE(1683)				_hx_tmp1 = (pt1->y == pt2->y);
            			}
            			else {
HXLINE(1683)				_hx_tmp1 = false;
            			}
HXDLIN(1683)			if (_hx_tmp1) {
HXLINE(1683)				_hx_tmp = ::hx::IsInstanceNotEq( p,btmPt2 );
            			}
            			else {
HXLINE(1683)				_hx_tmp = false;
            			}
HXDLIN(1683)			if (!(_hx_tmp)) {
HXLINE(1683)				goto _hx_goto_53;
            			}
HXDLIN(1683)			p = p->next;
            		}
            		_hx_goto_53:;
HXLINE(1684)		Float f3 = this->GetDx(btmPt2->pt,p->pt);
HXDLIN(1684)		Float dx2n;
HXDLIN(1684)		if ((f3 < 0)) {
HXLINE(1684)			dx2n = -(f3);
            		}
            		else {
HXLINE(1684)			dx2n = f3;
            		}
HXLINE(1685)		bool _hx_tmp;
HXDLIN(1685)		if ((dx1p >= dx2p)) {
HXLINE(1685)			_hx_tmp = (dx1p >= dx2n);
            		}
            		else {
HXLINE(1685)			_hx_tmp = false;
            		}
HXDLIN(1685)		if (!(_hx_tmp)) {
HXLINE(1685)			if ((dx1n >= dx2p)) {
HXLINE(1685)				return (dx1n >= dx2n);
            			}
            			else {
HXLINE(1685)				return false;
            			}
            		}
            		else {
HXLINE(1685)			return true;
            		}
HXDLIN(1685)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,FirstIsBottomPt,return )

 ::hxd::clipper::_Clipper::OutPt Clipper_obj::GetBottomPt( ::hxd::clipper::_Clipper::OutPt pp){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1690_GetBottomPt)
HXLINE(1691)		 ::hxd::clipper::_Clipper::OutPt dups = null();
HXLINE(1692)		 ::hxd::clipper::_Clipper::OutPt p = pp->next;
HXLINE(1693)		while(::hx::IsInstanceNotEq( p,pp )){
HXLINE(1695)			if ((p->pt->y > pp->pt->y)) {
HXLINE(1697)				pp = p;
HXLINE(1698)				dups = null();
            			}
            			else {
HXLINE(1700)				bool _hx_tmp;
HXDLIN(1700)				if ((p->pt->y == pp->pt->y)) {
HXLINE(1700)					_hx_tmp = (p->pt->x <= pp->pt->x);
            				}
            				else {
HXLINE(1700)					_hx_tmp = false;
            				}
HXDLIN(1700)				if (_hx_tmp) {
HXLINE(1702)					if ((p->pt->x < pp->pt->x)) {
HXLINE(1704)						dups = null();
HXLINE(1705)						pp = p;
            					}
            					else {
HXLINE(1706)						bool _hx_tmp;
HXDLIN(1706)						if (::hx::IsInstanceNotEq( p->next,pp )) {
HXLINE(1706)							_hx_tmp = ::hx::IsInstanceNotEq( p->prev,pp );
            						}
            						else {
HXLINE(1706)							_hx_tmp = false;
            						}
HXDLIN(1706)						if (_hx_tmp) {
HXLINE(1706)							dups = p;
            						}
            					}
            				}
            			}
HXLINE(1708)			p = p->next;
            		}
HXLINE(1711)		if (::hx::IsNotNull( dups )) {
HXLINE(1713)			int n = 0;
HXLINE(1715)			while(::hx::IsInstanceNotEq( dups,p )){
HXLINE(1717)				if (!(this->FirstIsBottomPt(p,dups))) {
HXLINE(1717)					pp = dups;
            				}
HXLINE(1718)				dups = dups->next;
HXLINE(1719)				while(true){
HXLINE(1719)					 ::h2d::col::IPoint pt1 = dups->pt;
HXDLIN(1719)					 ::h2d::col::IPoint pt2 = pp->pt;
HXDLIN(1719)					bool _hx_tmp;
HXDLIN(1719)					if ((pt1->x == pt2->x)) {
HXLINE(1719)						_hx_tmp = (pt1->y == pt2->y);
            					}
            					else {
HXLINE(1719)						_hx_tmp = false;
            					}
HXDLIN(1719)					if (_hx_tmp) {
HXLINE(1719)						goto _hx_goto_57;
            					}
HXDLIN(1719)					dups = dups->next;
            				}
            				_hx_goto_57:;
            			}
            		}
HXLINE(1722)		return pp;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,GetBottomPt,return )

 ::hxd::clipper::_Clipper::OutRec Clipper_obj::GetLowermostRec( ::hxd::clipper::_Clipper::OutRec outRec1, ::hxd::clipper::_Clipper::OutRec outRec2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1727_GetLowermostRec)
HXLINE(1729)		if (::hx::IsNull( outRec1->bottomPt )) {
HXLINE(1730)			outRec1->bottomPt = this->GetBottomPt(outRec1->pts);
            		}
HXLINE(1731)		if (::hx::IsNull( outRec2->bottomPt )) {
HXLINE(1732)			outRec2->bottomPt = this->GetBottomPt(outRec2->pts);
            		}
HXLINE(1733)		 ::hxd::clipper::_Clipper::OutPt bPt1 = outRec1->bottomPt;
HXLINE(1734)		 ::hxd::clipper::_Clipper::OutPt bPt2 = outRec2->bottomPt;
HXLINE(1736)		if ((bPt1->pt->y > bPt2->pt->y)) {
HXLINE(1736)			return outRec1;
            		}
            		else {
HXLINE(1737)			if ((bPt1->pt->y < bPt2->pt->y)) {
HXLINE(1737)				return outRec2;
            			}
            			else {
HXLINE(1738)				if ((bPt1->pt->x < bPt2->pt->x)) {
HXLINE(1738)					return outRec1;
            				}
            				else {
HXLINE(1739)					if ((bPt1->pt->x > bPt2->pt->x)) {
HXLINE(1739)						return outRec2;
            					}
            					else {
HXLINE(1740)						if (::hx::IsInstanceEq( bPt1->next,bPt1 )) {
HXLINE(1740)							return outRec2;
            						}
            						else {
HXLINE(1741)							if (::hx::IsInstanceEq( bPt2->next,bPt2 )) {
HXLINE(1741)								return outRec1;
            							}
            							else {
HXLINE(1742)								if (this->FirstIsBottomPt(bPt1,bPt2)) {
HXLINE(1742)									return outRec1;
            								}
            								else {
HXLINE(1743)									return outRec2;
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(1736)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,GetLowermostRec,return )

bool Clipper_obj::Param1RightOfParam2( ::hxd::clipper::_Clipper::OutRec outRec1, ::hxd::clipper::_Clipper::OutRec outRec2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1748_Param1RightOfParam2)
HXLINE(1749)		while(true){
HXLINE(1751)			outRec1 = outRec1->firstLeft;
HXLINE(1752)			if (::hx::IsInstanceEq( outRec1,outRec2 )) {
HXLINE(1752)				return true;
            			}
HXLINE(1749)			if (!(::hx::IsNotNull( outRec1 ))) {
HXLINE(1749)				goto _hx_goto_60;
            			}
            		}
            		_hx_goto_60:;
HXLINE(1754)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,Param1RightOfParam2,return )

 ::hxd::clipper::_Clipper::OutRec Clipper_obj::GetOutRec(int idx){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1759_GetOutRec)
HXLINE(1760)		 ::hxd::clipper::_Clipper::OutRec outrec = this->m_PolyOuts->__get(idx).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXLINE(1761)		while(::hx::IsInstanceNotEq( outrec,this->m_PolyOuts->__get(outrec->idx).StaticCast<  ::hxd::clipper::_Clipper::OutRec >() )){
HXLINE(1762)			outrec = this->m_PolyOuts->__get(outrec->idx).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
            		}
HXLINE(1763)		return outrec;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,GetOutRec,return )

void Clipper_obj::AppendPolygon( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1768_AppendPolygon)
HXLINE(1770)		 ::hxd::clipper::_Clipper::OutRec outRec1 = this->m_PolyOuts->__get(e1->outIdx).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXLINE(1771)		 ::hxd::clipper::_Clipper::OutRec outRec2 = this->m_PolyOuts->__get(e2->outIdx).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXLINE(1773)		 ::hxd::clipper::_Clipper::OutRec holeStateRec;
HXLINE(1774)		if (this->Param1RightOfParam2(outRec1,outRec2)) {
HXLINE(1775)			holeStateRec = outRec2;
            		}
            		else {
HXLINE(1776)			if (this->Param1RightOfParam2(outRec2,outRec1)) {
HXLINE(1777)				holeStateRec = outRec1;
            			}
            			else {
HXLINE(1779)				holeStateRec = this->GetLowermostRec(outRec1,outRec2);
            			}
            		}
HXLINE(1781)		 ::hxd::clipper::_Clipper::OutPt p1_lft = outRec1->pts;
HXLINE(1782)		 ::hxd::clipper::_Clipper::OutPt p1_rt = p1_lft->prev;
HXLINE(1783)		 ::hxd::clipper::_Clipper::OutPt p2_lft = outRec2->pts;
HXLINE(1784)		 ::hxd::clipper::_Clipper::OutPt p2_rt = p2_lft->prev;
HXLINE(1786)		 ::hxd::clipper::_Clipper::EdgeSide side;
HXLINE(1788)		if (::hx::IsPointerEq( e1->side,::hxd::clipper::_Clipper::EdgeSide_obj::Left_dyn() )) {
HXLINE(1790)			if (::hx::IsPointerEq( e2->side,::hxd::clipper::_Clipper::EdgeSide_obj::Left_dyn() )) {
HXLINE(1793)				this->ReversePolyPtLinks(p2_lft);
HXLINE(1794)				p2_lft->next = p1_lft;
HXLINE(1795)				p1_lft->prev = p2_lft;
HXLINE(1796)				p1_rt->next = p2_rt;
HXLINE(1797)				p2_rt->prev = p1_rt;
HXLINE(1798)				outRec1->pts = p2_rt;
            			}
            			else {
HXLINE(1802)				p2_rt->next = p1_lft;
HXLINE(1803)				p1_lft->prev = p2_rt;
HXLINE(1804)				p2_lft->prev = p1_rt;
HXLINE(1805)				p1_rt->next = p2_lft;
HXLINE(1806)				outRec1->pts = p2_lft;
            			}
HXLINE(1808)			side = ::hxd::clipper::_Clipper::EdgeSide_obj::Left_dyn();
            		}
            		else {
HXLINE(1811)			if (::hx::IsPointerEq( e2->side,::hxd::clipper::_Clipper::EdgeSide_obj::Right_dyn() )) {
HXLINE(1814)				this->ReversePolyPtLinks(p2_lft);
HXLINE(1815)				p1_rt->next = p2_rt;
HXLINE(1816)				p2_rt->prev = p1_rt;
HXLINE(1817)				p2_lft->next = p1_lft;
HXLINE(1818)				p1_lft->prev = p2_lft;
            			}
            			else {
HXLINE(1822)				p1_rt->next = p2_lft;
HXLINE(1823)				p2_lft->prev = p1_rt;
HXLINE(1824)				p1_lft->prev = p2_rt;
HXLINE(1825)				p2_rt->next = p1_lft;
            			}
HXLINE(1827)			side = ::hxd::clipper::_Clipper::EdgeSide_obj::Right_dyn();
            		}
HXLINE(1830)		outRec1->bottomPt = null();
HXLINE(1831)		if (::hx::IsInstanceEq( holeStateRec,outRec2 )) {
HXLINE(1833)			if (::hx::IsInstanceNotEq( outRec2->firstLeft,outRec1 )) {
HXLINE(1834)				outRec1->firstLeft = outRec2->firstLeft;
            			}
HXLINE(1835)			outRec1->isHole = outRec2->isHole;
            		}
HXLINE(1837)		outRec2->pts = null();
HXLINE(1838)		outRec2->bottomPt = null();
HXLINE(1840)		outRec2->firstLeft = outRec1;
HXLINE(1842)		int OKIdx = e1->outIdx;
HXLINE(1843)		int ObsoleteIdx = e2->outIdx;
HXLINE(1845)		e1->outIdx = -1;
HXLINE(1846)		e2->outIdx = -1;
HXLINE(1848)		 ::hxd::clipper::_Clipper::TEdge e = this->m_ActiveEdges;
HXLINE(1849)		while(::hx::IsNotNull( e )){
HXLINE(1851)			if ((e->outIdx == ObsoleteIdx)) {
HXLINE(1853)				e->outIdx = OKIdx;
HXLINE(1854)				e->side = side;
HXLINE(1855)				goto _hx_goto_64;
            			}
HXLINE(1857)			e = e->nextInAEL;
            		}
            		_hx_goto_64:;
HXLINE(1859)		outRec2->idx = outRec1->idx;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,AppendPolygon,(void))

void Clipper_obj::ReversePolyPtLinks( ::hxd::clipper::_Clipper::OutPt pp){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1864_ReversePolyPtLinks)
HXLINE(1865)		if (::hx::IsNull( pp )) {
HXLINE(1865)			return;
            		}
HXLINE(1867)		 ::hxd::clipper::_Clipper::OutPt pp2;
HXLINE(1866)		 ::hxd::clipper::_Clipper::OutPt pp1 = pp;
HXLINE(1869)		while(true){
HXLINE(1871)			pp2 = pp1->next;
HXLINE(1872)			pp1->next = pp1->prev;
HXLINE(1873)			pp1->prev = pp2;
HXLINE(1874)			pp1 = pp2;
HXLINE(1869)			if (!(::hx::IsInstanceNotEq( pp1,pp ))) {
HXLINE(1869)				goto _hx_goto_66;
            			}
            		}
            		_hx_goto_66:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,ReversePolyPtLinks,(void))

void Clipper_obj::SwapSides( ::hxd::clipper::_Clipper::TEdge edge1, ::hxd::clipper::_Clipper::TEdge edge2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1880_SwapSides)
HXLINE(1881)		 ::hxd::clipper::_Clipper::EdgeSide side = edge1->side;
HXLINE(1882)		edge1->side = edge2->side;
HXLINE(1883)		edge2->side = side;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,SwapSides,(void))

void Clipper_obj::SwapPolyIndexes( ::hxd::clipper::_Clipper::TEdge edge1, ::hxd::clipper::_Clipper::TEdge edge2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1888_SwapPolyIndexes)
HXLINE(1889)		int outIdx = edge1->outIdx;
HXLINE(1890)		edge1->outIdx = edge2->outIdx;
HXLINE(1891)		edge2->outIdx = outIdx;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,SwapPolyIndexes,(void))

void Clipper_obj::IntersectEdges( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2, ::h2d::col::IPoint pt){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_1895_IntersectEdges)
HXLINE(1899)		bool e1Contributing = (e1->outIdx >= 0);
HXLINE(1900)		bool e2Contributing = (e2->outIdx >= 0);
HXLINE(1904)		if (::hx::IsPointerEq( e1->polyType,e2->polyType )) {
HXLINE(1906)			bool _hx_tmp;
HXDLIN(1906)			if (::hx::IsPointerEq( e1->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(1906)				_hx_tmp = ::hx::IsPointerEq( this->m_SubjFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            			}
            			else {
HXLINE(1906)				_hx_tmp = ::hx::IsPointerEq( this->m_ClipFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            			}
HXDLIN(1906)			if (_hx_tmp) {
HXLINE(1908)				int oldE1WindCnt = e1->windCnt;
HXLINE(1909)				e1->windCnt = e2->windCnt;
HXLINE(1910)				e2->windCnt = oldE1WindCnt;
            			}
            			else {
HXLINE(1914)				if (((e1->windCnt + e2->windDelta) == 0)) {
HXLINE(1914)					e1->windCnt = -(e1->windCnt);
            				}
            				else {
HXLINE(1915)					 ::hxd::clipper::_Clipper::TEdge e11 = e1;
HXDLIN(1915)					e11->windCnt = (e11->windCnt + e2->windDelta);
            				}
HXLINE(1916)				if (((e2->windCnt - e1->windDelta) == 0)) {
HXLINE(1916)					e2->windCnt = -(e2->windCnt);
            				}
            				else {
HXLINE(1917)					 ::hxd::clipper::_Clipper::TEdge e21 = e2;
HXDLIN(1917)					e21->windCnt = (e21->windCnt - e1->windDelta);
            				}
            			}
            		}
            		else {
HXLINE(1922)			bool _hx_tmp;
HXDLIN(1922)			if (::hx::IsPointerEq( e2->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(1922)				_hx_tmp = ::hx::IsPointerEq( this->m_SubjFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            			}
            			else {
HXLINE(1922)				_hx_tmp = ::hx::IsPointerEq( this->m_ClipFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            			}
HXDLIN(1922)			if (!(_hx_tmp)) {
HXLINE(1922)				 ::hxd::clipper::_Clipper::TEdge e11 = e1;
HXDLIN(1922)				e11->windCnt2 = (e11->windCnt2 + e2->windDelta);
            			}
            			else {
HXLINE(1923)				int _hx_tmp;
HXDLIN(1923)				if ((e1->windCnt2 == 0)) {
HXLINE(1923)					_hx_tmp = 1;
            				}
            				else {
HXLINE(1923)					_hx_tmp = 0;
            				}
HXDLIN(1923)				e1->windCnt2 = _hx_tmp;
            			}
HXLINE(1924)			bool _hx_tmp1;
HXDLIN(1924)			if (::hx::IsPointerEq( e1->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(1924)				_hx_tmp1 = ::hx::IsPointerEq( this->m_SubjFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            			}
            			else {
HXLINE(1924)				_hx_tmp1 = ::hx::IsPointerEq( this->m_ClipFillType,::hxd::clipper::PolyFillType_obj::EvenOdd_dyn() );
            			}
HXDLIN(1924)			if (!(_hx_tmp1)) {
HXLINE(1924)				 ::hxd::clipper::_Clipper::TEdge e21 = e2;
HXDLIN(1924)				e21->windCnt2 = (e21->windCnt2 - e1->windDelta);
            			}
            			else {
HXLINE(1925)				int _hx_tmp;
HXDLIN(1925)				if ((e2->windCnt2 == 0)) {
HXLINE(1925)					_hx_tmp = 1;
            				}
            				else {
HXLINE(1925)					_hx_tmp = 0;
            				}
HXDLIN(1925)				e2->windCnt2 = _hx_tmp;
            			}
            		}
HXLINE(1928)		 ::hxd::clipper::PolyFillType e1FillType;
HXDLIN(1928)		 ::hxd::clipper::PolyFillType e2FillType;
HXDLIN(1928)		 ::hxd::clipper::PolyFillType e1FillType2;
HXDLIN(1928)		 ::hxd::clipper::PolyFillType e2FillType2;
HXLINE(1929)		if (::hx::IsPointerEq( e1->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(1931)			e1FillType = this->m_SubjFillType;
HXLINE(1932)			e1FillType2 = this->m_ClipFillType;
            		}
            		else {
HXLINE(1936)			e1FillType = this->m_ClipFillType;
HXLINE(1937)			e1FillType2 = this->m_SubjFillType;
            		}
HXLINE(1939)		if (::hx::IsPointerEq( e2->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(1941)			e2FillType = this->m_SubjFillType;
HXLINE(1942)			e2FillType2 = this->m_ClipFillType;
            		}
            		else {
HXLINE(1946)			e2FillType = this->m_ClipFillType;
HXLINE(1947)			e2FillType2 = this->m_SubjFillType;
            		}
HXLINE(1950)		int e1Wc;
HXDLIN(1950)		int e2Wc;
HXLINE(1951)		switch((int)(e1FillType->_hx_getIndex())){
            			case (int)2: {
HXLINE(1953)				e1Wc = e1->windCnt;
            			}
            			break;
            			case (int)3: {
HXLINE(1954)				e1Wc = -(e1->windCnt);
            			}
            			break;
            			default:{
HXLINE(1955)				int i = e1->windCnt;
HXDLIN(1955)				if ((i < 0)) {
HXLINE(1955)					e1Wc = -(i);
            				}
            				else {
HXLINE(1955)					e1Wc = i;
            				}
            			}
            		}
HXLINE(1957)		switch((int)(e2FillType->_hx_getIndex())){
            			case (int)2: {
HXLINE(1959)				e2Wc = e2->windCnt;
            			}
            			break;
            			case (int)3: {
HXLINE(1960)				e2Wc = -(e2->windCnt);
            			}
            			break;
            			default:{
HXLINE(1961)				int i = e2->windCnt;
HXDLIN(1961)				if ((i < 0)) {
HXLINE(1961)					e2Wc = -(i);
            				}
            				else {
HXLINE(1961)					e2Wc = i;
            				}
            			}
            		}
HXLINE(1964)		bool _hx_tmp;
HXDLIN(1964)		if (e1Contributing) {
HXLINE(1964)			_hx_tmp = e2Contributing;
            		}
            		else {
HXLINE(1964)			_hx_tmp = false;
            		}
HXDLIN(1964)		if (_hx_tmp) {
HXLINE(1966)			bool _hx_tmp;
HXDLIN(1966)			bool _hx_tmp1;
HXDLIN(1966)			bool _hx_tmp2;
HXDLIN(1966)			if ((e1Wc != 0)) {
HXLINE(1966)				_hx_tmp2 = (e1Wc != 1);
            			}
            			else {
HXLINE(1966)				_hx_tmp2 = false;
            			}
HXDLIN(1966)			if (!(_hx_tmp2)) {
HXLINE(1966)				if ((e2Wc != 0)) {
HXLINE(1966)					_hx_tmp1 = (e2Wc != 1);
            				}
            				else {
HXLINE(1966)					_hx_tmp1 = false;
            				}
            			}
            			else {
HXLINE(1966)				_hx_tmp1 = true;
            			}
HXDLIN(1966)			if (!(_hx_tmp1)) {
HXLINE(1966)				if (::hx::IsPointerNotEq( e1->polyType,e2->polyType )) {
HXLINE(1966)					_hx_tmp = ::hx::IsPointerNotEq( this->m_ClipType,::hxd::clipper::ClipType_obj::Xor_dyn() );
            				}
            				else {
HXLINE(1966)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(1966)				_hx_tmp = true;
            			}
HXDLIN(1966)			if (_hx_tmp) {
HXLINE(1967)				this->AddLocalMaxPoly(e1,e2,pt);
            			}
            			else {
HXLINE(1970)				this->AddOutPt(e1,pt);
HXLINE(1971)				this->AddOutPt(e2,pt);
HXLINE(1972)				{
HXLINE(1972)					 ::hxd::clipper::_Clipper::EdgeSide side = e1->side;
HXDLIN(1972)					e1->side = e2->side;
HXDLIN(1972)					e2->side = side;
            				}
HXLINE(1973)				this->SwapPolyIndexes(e1,e2);
            			}
            		}
            		else {
HXLINE(1976)			if (e1Contributing) {
HXLINE(1978)				bool _hx_tmp;
HXDLIN(1978)				if ((e2Wc != 0)) {
HXLINE(1978)					_hx_tmp = (e2Wc == 1);
            				}
            				else {
HXLINE(1978)					_hx_tmp = true;
            				}
HXDLIN(1978)				if (_hx_tmp) {
HXLINE(1980)					this->AddOutPt(e1,pt);
HXLINE(1981)					{
HXLINE(1981)						 ::hxd::clipper::_Clipper::EdgeSide side = e1->side;
HXDLIN(1981)						e1->side = e2->side;
HXDLIN(1981)						e2->side = side;
            					}
HXLINE(1982)					this->SwapPolyIndexes(e1,e2);
            				}
            			}
            			else {
HXLINE(1986)				if (e2Contributing) {
HXLINE(1988)					bool _hx_tmp;
HXDLIN(1988)					if ((e1Wc != 0)) {
HXLINE(1988)						_hx_tmp = (e1Wc == 1);
            					}
            					else {
HXLINE(1988)						_hx_tmp = true;
            					}
HXDLIN(1988)					if (_hx_tmp) {
HXLINE(1990)						this->AddOutPt(e2,pt);
HXLINE(1991)						{
HXLINE(1991)							 ::hxd::clipper::_Clipper::EdgeSide side = e1->side;
HXDLIN(1991)							e1->side = e2->side;
HXDLIN(1991)							e2->side = side;
            						}
HXLINE(1992)						this->SwapPolyIndexes(e1,e2);
            					}
            				}
            				else {
HXLINE(1995)					bool _hx_tmp;
HXDLIN(1995)					bool _hx_tmp1;
HXDLIN(1995)					if ((e1Wc != 0)) {
HXLINE(1995)						_hx_tmp1 = (e1Wc == 1);
            					}
            					else {
HXLINE(1995)						_hx_tmp1 = true;
            					}
HXDLIN(1995)					if (_hx_tmp1) {
HXLINE(1995)						if ((e2Wc != 0)) {
HXLINE(1995)							_hx_tmp = (e2Wc == 1);
            						}
            						else {
HXLINE(1995)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE(1995)						_hx_tmp = false;
            					}
HXDLIN(1995)					if (_hx_tmp) {
HXLINE(1998)						int e1Wc2;
HXDLIN(1998)						int e2Wc2;
HXLINE(1999)						switch((int)(e1FillType2->_hx_getIndex())){
            							case (int)2: {
HXLINE(2001)								e1Wc2 = e1->windCnt2;
            							}
            							break;
            							case (int)3: {
HXLINE(2002)								e1Wc2 = -(e1->windCnt2);
            							}
            							break;
            							default:{
HXLINE(2003)								int i = e1->windCnt2;
HXDLIN(2003)								if ((i < 0)) {
HXLINE(2003)									e1Wc2 = -(i);
            								}
            								else {
HXLINE(2003)									e1Wc2 = i;
            								}
            							}
            						}
HXLINE(2005)						switch((int)(e2FillType2->_hx_getIndex())){
            							case (int)2: {
HXLINE(2007)								e2Wc2 = e2->windCnt2;
            							}
            							break;
            							case (int)3: {
HXLINE(2008)								e2Wc2 = -(e2->windCnt2);
            							}
            							break;
            							default:{
HXLINE(2009)								int i = e2->windCnt2;
HXDLIN(2009)								if ((i < 0)) {
HXLINE(2009)									e2Wc2 = -(i);
            								}
            								else {
HXLINE(2009)									e2Wc2 = i;
            								}
            							}
            						}
HXLINE(2012)						if (::hx::IsPointerNotEq( e1->polyType,e2->polyType )) {
HXLINE(2013)							this->AddLocalMinPoly(e1,e2,pt);
            						}
            						else {
HXLINE(2014)							bool _hx_tmp;
HXDLIN(2014)							if ((e1Wc == 1)) {
HXLINE(2014)								_hx_tmp = (e2Wc == 1);
            							}
            							else {
HXLINE(2014)								_hx_tmp = false;
            							}
HXDLIN(2014)							if (_hx_tmp) {
HXLINE(2015)								switch((int)(this->m_ClipType->_hx_getIndex())){
            									case (int)0: {
HXLINE(2018)										bool _hx_tmp;
HXDLIN(2018)										if ((e1Wc2 > 0)) {
HXLINE(2018)											_hx_tmp = (e2Wc2 > 0);
            										}
            										else {
HXLINE(2018)											_hx_tmp = false;
            										}
HXDLIN(2018)										if (_hx_tmp) {
HXLINE(2019)											this->AddLocalMinPoly(e1,e2,pt);
            										}
            									}
            									break;
            									case (int)1: {
HXLINE(2021)										bool _hx_tmp;
HXDLIN(2021)										if ((e1Wc2 <= 0)) {
HXLINE(2021)											_hx_tmp = (e2Wc2 <= 0);
            										}
            										else {
HXLINE(2021)											_hx_tmp = false;
            										}
HXDLIN(2021)										if (_hx_tmp) {
HXLINE(2022)											this->AddLocalMinPoly(e1,e2,pt);
            										}
            									}
            									break;
            									case (int)2: {
HXLINE(2024)										bool _hx_tmp;
HXDLIN(2024)										bool _hx_tmp1;
HXDLIN(2024)										bool _hx_tmp2;
HXDLIN(2024)										if (::hx::IsPointerEq( e1->polyType,::hxd::clipper::PolyType_obj::Clip_dyn() )) {
HXLINE(2024)											_hx_tmp2 = (e1Wc2 > 0);
            										}
            										else {
HXLINE(2024)											_hx_tmp2 = false;
            										}
HXDLIN(2024)										if (_hx_tmp2) {
HXLINE(2024)											_hx_tmp1 = (e2Wc2 > 0);
            										}
            										else {
HXLINE(2024)											_hx_tmp1 = false;
            										}
HXDLIN(2024)										if (!(_hx_tmp1)) {
HXLINE(2024)											bool _hx_tmp1;
HXDLIN(2024)											if (::hx::IsPointerEq( e1->polyType,::hxd::clipper::PolyType_obj::Subject_dyn() )) {
HXLINE(2024)												_hx_tmp1 = (e1Wc2 <= 0);
            											}
            											else {
HXLINE(2024)												_hx_tmp1 = false;
            											}
HXDLIN(2024)											if (_hx_tmp1) {
HXLINE(2024)												_hx_tmp = (e2Wc2 <= 0);
            											}
            											else {
HXLINE(2024)												_hx_tmp = false;
            											}
            										}
            										else {
HXLINE(2024)											_hx_tmp = true;
            										}
HXDLIN(2024)										if (_hx_tmp) {
HXLINE(2025)											this->AddLocalMinPoly(e1,e2,pt);
            										}
            									}
            									break;
            									case (int)3: {
HXLINE(2027)										this->AddLocalMinPoly(e1,e2,pt);
            									}
            									break;
            								}
            							}
            							else {
HXLINE(2030)								 ::hxd::clipper::_Clipper::EdgeSide side = e1->side;
HXDLIN(2030)								e1->side = e2->side;
HXDLIN(2030)								e2->side = side;
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,IntersectEdges,(void))

void Clipper_obj::DeleteFromAEL( ::hxd::clipper::_Clipper::TEdge e){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2036_DeleteFromAEL)
HXLINE(2037)		 ::hxd::clipper::_Clipper::TEdge AelPrev = e->prevInAEL;
HXLINE(2038)		 ::hxd::clipper::_Clipper::TEdge AelNext = e->nextInAEL;
HXLINE(2039)		bool _hx_tmp;
HXDLIN(2039)		bool _hx_tmp1;
HXDLIN(2039)		if (::hx::IsNull( AelPrev )) {
HXLINE(2039)			_hx_tmp1 = ::hx::IsNull( AelNext );
            		}
            		else {
HXLINE(2039)			_hx_tmp1 = false;
            		}
HXDLIN(2039)		if (_hx_tmp1) {
HXLINE(2039)			_hx_tmp = ::hx::IsInstanceNotEq( e,this->m_ActiveEdges );
            		}
            		else {
HXLINE(2039)			_hx_tmp = false;
            		}
HXDLIN(2039)		if (_hx_tmp) {
HXLINE(2040)			return;
            		}
HXLINE(2041)		if (::hx::IsNotNull( AelPrev )) {
HXLINE(2042)			AelPrev->nextInAEL = AelNext;
            		}
            		else {
HXLINE(2043)			this->m_ActiveEdges = AelNext;
            		}
HXLINE(2044)		if (::hx::IsNotNull( AelNext )) {
HXLINE(2045)			AelNext->prevInAEL = AelPrev;
            		}
HXLINE(2046)		e->nextInAEL = null();
HXLINE(2047)		e->prevInAEL = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,DeleteFromAEL,(void))

void Clipper_obj::DeleteFromSEL( ::hxd::clipper::_Clipper::TEdge e){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2052_DeleteFromSEL)
HXLINE(2053)		 ::hxd::clipper::_Clipper::TEdge SelPrev = e->prevInSEL;
HXLINE(2054)		 ::hxd::clipper::_Clipper::TEdge SelNext = e->nextInSEL;
HXLINE(2055)		bool _hx_tmp;
HXDLIN(2055)		bool _hx_tmp1;
HXDLIN(2055)		if (::hx::IsNull( SelPrev )) {
HXLINE(2055)			_hx_tmp1 = ::hx::IsNull( SelNext );
            		}
            		else {
HXLINE(2055)			_hx_tmp1 = false;
            		}
HXDLIN(2055)		if (_hx_tmp1) {
HXLINE(2055)			_hx_tmp = ::hx::IsInstanceNotEq( e,this->m_SortedEdges );
            		}
            		else {
HXLINE(2055)			_hx_tmp = false;
            		}
HXDLIN(2055)		if (_hx_tmp) {
HXLINE(2056)			return;
            		}
HXLINE(2057)		if (::hx::IsNotNull( SelPrev )) {
HXLINE(2058)			SelPrev->nextInSEL = SelNext;
            		}
            		else {
HXLINE(2059)			this->m_SortedEdges = SelNext;
            		}
HXLINE(2060)		if (::hx::IsNotNull( SelNext )) {
HXLINE(2061)			SelNext->prevInSEL = SelPrev;
            		}
HXLINE(2062)		e->nextInSEL = null();
HXLINE(2063)		e->prevInSEL = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,DeleteFromSEL,(void))

 ::hxd::clipper::_Clipper::TEdge Clipper_obj::UpdateEdgeIntoAEL( ::hxd::clipper::_Clipper::TEdge e){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2068_UpdateEdgeIntoAEL)
HXLINE(2069)		if (::hx::IsNull( e->nextInLML )) {
HXLINE(2070)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("UpdateEdgeIntoAEL: invalid call",6f,75,0c,3d)));
            		}
HXLINE(2071)		 ::hxd::clipper::_Clipper::TEdge AelPrev = e->prevInAEL;
HXLINE(2072)		 ::hxd::clipper::_Clipper::TEdge AelNext = e->nextInAEL;
HXLINE(2073)		e->nextInLML->outIdx = e->outIdx;
HXLINE(2074)		if (::hx::IsNotNull( AelPrev )) {
HXLINE(2075)			AelPrev->nextInAEL = e->nextInLML;
            		}
            		else {
HXLINE(2076)			this->m_ActiveEdges = e->nextInLML;
            		}
HXLINE(2077)		if (::hx::IsNotNull( AelNext )) {
HXLINE(2078)			AelNext->prevInAEL = e->nextInLML;
            		}
HXLINE(2079)		e->nextInLML->side = e->side;
HXLINE(2080)		e->nextInLML->windDelta = e->windDelta;
HXLINE(2081)		e->nextInLML->windCnt = e->windCnt;
HXLINE(2082)		e->nextInLML->windCnt2 = e->windCnt2;
HXLINE(2084)		e = e->nextInLML;
HXLINE(2085)		e->currX = e->botX;
HXLINE(2086)		e->currY = e->botY;
HXLINE(2087)		e->prevInAEL = AelPrev;
HXLINE(2088)		e->nextInAEL = AelNext;
HXLINE(2089)		if ((e->deltaY != 0)) {
HXLINE(2090)			this->InsertScanbeam(e->topY);
            		}
HXLINE(2091)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,UpdateEdgeIntoAEL,return )

 ::Dynamic Clipper_obj::GetHorzDirection( ::hxd::clipper::_Clipper::TEdge HorzEdge){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2097_GetHorzDirection)
HXDLIN(2097)		if ((HorzEdge->botX < HorzEdge->topX)) {
HXLINE(2098)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("right",dc,0b,64,e9),HorzEdge->topX)
            				->setFixed(1,HX_("dir",4d,3d,4c,00),::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn())
            				->setFixed(2,HX_("left",07,08,b0,47),HorzEdge->botX));
            		}
            		else {
HXLINE(2099)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("right",dc,0b,64,e9),HorzEdge->botX)
            				->setFixed(1,HX_("dir",4d,3d,4c,00),::hxd::clipper::_Clipper::Direction_obj::RightToLeft_dyn())
            				->setFixed(2,HX_("left",07,08,b0,47),HorzEdge->topX));
            		}
HXLINE(2097)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,GetHorzDirection,return )

void Clipper_obj::ProcessHorizontals(bool isTopOfScanbeam){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2105_ProcessHorizontals)
HXLINE(2106)		 ::hxd::clipper::_Clipper::TEdge horzEdge = this->m_SortedEdges;
HXLINE(2107)		while(::hx::IsNotNull( horzEdge )){
HXLINE(2109)			this->DeleteFromSEL(horzEdge);
HXLINE(2110)			this->ProcessHorizontal(horzEdge,isTopOfScanbeam);
HXLINE(2111)			horzEdge = this->m_SortedEdges;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,ProcessHorizontals,(void))

void Clipper_obj::ProcessHorizontal( ::hxd::clipper::_Clipper::TEdge horzEdge,bool isTopOfScanbeam){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_2116_ProcessHorizontal)
HXLINE(2117)		 ::Dynamic res = this->GetHorzDirection(horzEdge);
HXLINE(2118)		 ::hxd::clipper::_Clipper::Direction dir = res->__Field(HX_("dir",4d,3d,4c,00),::hx::paccDynamic);
HXLINE(2119)		int horzLeft = ( (int)(res->__Field(HX_("left",07,08,b0,47),::hx::paccDynamic)) );
HXLINE(2120)		int horzRight = ( (int)(res->__Field(HX_("right",dc,0b,64,e9),::hx::paccDynamic)) );
HXLINE(2122)		 ::hxd::clipper::_Clipper::TEdge eLastHorz = horzEdge;
HXLINE(2123)		 ::hxd::clipper::_Clipper::TEdge eMaxPair = null();
HXLINE(2124)		while(true){
HXLINE(2124)			bool _hx_tmp;
HXDLIN(2124)			if (::hx::IsNotNull( eLastHorz->nextInLML )) {
HXLINE(2124)				_hx_tmp = (eLastHorz->nextInLML->deltaY == 0);
            			}
            			else {
HXLINE(2124)				_hx_tmp = false;
            			}
HXDLIN(2124)			if (!(_hx_tmp)) {
HXLINE(2124)				goto _hx_goto_77;
            			}
HXLINE(2125)			eLastHorz = eLastHorz->nextInLML;
            		}
            		_hx_goto_77:;
HXLINE(2126)		if (::hx::IsNull( eLastHorz->nextInLML )) {
HXLINE(2127)			eMaxPair = this->GetMaximaPair(eLastHorz);
            		}
HXLINE(2129)		while(true){
HXLINE(2130)			bool IsLastHorz = ::hx::IsInstanceEq( horzEdge,eLastHorz );
HXLINE(2131)			 ::hxd::clipper::_Clipper::TEdge e;
HXDLIN(2131)			if (::hx::IsPointerEq( dir,::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn() )) {
HXLINE(2131)				e = horzEdge->nextInAEL;
            			}
            			else {
HXLINE(2131)				e = horzEdge->prevInAEL;
            			}
HXLINE(2133)			while(::hx::IsNotNull( e )){
HXLINE(2136)				bool _hx_tmp;
HXDLIN(2136)				bool _hx_tmp1;
HXDLIN(2136)				if ((e->currX == horzEdge->topX)) {
HXLINE(2136)					_hx_tmp1 = ::hx::IsNotNull( horzEdge->nextInLML );
            				}
            				else {
HXLINE(2136)					_hx_tmp1 = false;
            				}
HXDLIN(2136)				if (_hx_tmp1) {
HXLINE(2136)					_hx_tmp = (e->dx < horzEdge->nextInLML->dx);
            				}
            				else {
HXLINE(2136)					_hx_tmp = false;
            				}
HXDLIN(2136)				if (_hx_tmp) {
HXLINE(2136)					goto _hx_goto_79;
            				}
HXLINE(2138)				 ::hxd::clipper::_Clipper::TEdge eNext;
HXDLIN(2138)				if (::hx::IsPointerEq( dir,::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn() )) {
HXLINE(2138)					eNext = e->nextInAEL;
            				}
            				else {
HXLINE(2138)					eNext = e->prevInAEL;
            				}
HXLINE(2140)				bool _hx_tmp2;
HXDLIN(2140)				bool _hx_tmp3;
HXDLIN(2140)				if (::hx::IsPointerEq( dir,::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn() )) {
HXLINE(2140)					_hx_tmp3 = (e->currX <= horzRight);
            				}
            				else {
HXLINE(2140)					_hx_tmp3 = false;
            				}
HXDLIN(2140)				if (!(_hx_tmp3)) {
HXLINE(2140)					if (::hx::IsPointerEq( dir,::hxd::clipper::_Clipper::Direction_obj::RightToLeft_dyn() )) {
HXLINE(2140)						_hx_tmp2 = (e->currX >= horzLeft);
            					}
            					else {
HXLINE(2140)						_hx_tmp2 = false;
            					}
            				}
            				else {
HXLINE(2140)					_hx_tmp2 = true;
            				}
HXDLIN(2140)				if (_hx_tmp2) {
HXLINE(2144)					bool _hx_tmp;
HXDLIN(2144)					if (::hx::IsInstanceEq( e,eMaxPair )) {
HXLINE(2144)						_hx_tmp = IsLastHorz;
            					}
            					else {
HXLINE(2144)						_hx_tmp = false;
            					}
HXDLIN(2144)					if (_hx_tmp) {
HXLINE(2146)						if ((horzEdge->outIdx >= 0)) {
HXLINE(2148)							 ::hxd::clipper::_Clipper::OutPt op1 = this->AddOutPt(horzEdge, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,horzEdge->topX,horzEdge->topY));
HXLINE(2149)							 ::hxd::clipper::_Clipper::TEdge eNextHorz = this->m_SortedEdges;
HXLINE(2150)							while(::hx::IsNotNull( eNextHorz )){
HXLINE(2152)								bool _hx_tmp;
HXDLIN(2152)								if ((eNextHorz->outIdx >= 0)) {
HXLINE(2152)									_hx_tmp = this->HorzSegmentsOverlap(horzEdge->botX,horzEdge->topX,eNextHorz->botX,eNextHorz->topX);
            								}
            								else {
HXLINE(2152)									_hx_tmp = false;
            								}
HXDLIN(2152)								if (_hx_tmp) {
HXLINE(2153)									 ::hxd::clipper::_Clipper::OutPt op2 = this->AddOutPt(eNextHorz, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,eNextHorz->botX,eNextHorz->botY));
HXLINE(2154)									this->AddJoin(op2,op1, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,eNextHorz->topX,eNextHorz->topY));
            								}
HXLINE(2156)								eNextHorz = eNextHorz->nextInSEL;
            							}
HXLINE(2158)							this->AddGhostJoin(op1, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,horzEdge->botX,horzEdge->botY));
HXLINE(2159)							this->AddLocalMaxPoly(horzEdge,eMaxPair, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,horzEdge->topX,horzEdge->topY));
            						}
HXLINE(2161)						this->DeleteFromAEL(horzEdge);
HXLINE(2162)						this->DeleteFromAEL(eMaxPair);
HXLINE(2163)						return;
            					}
            					else {
HXLINE(2165)						if (::hx::IsPointerEq( dir,::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn() )) {
HXLINE(2167)							 ::h2d::col::IPoint Pt =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->currX,horzEdge->currY);
HXLINE(2168)							this->IntersectEdges(horzEdge,e,Pt);
            						}
            						else {
HXLINE(2172)							 ::h2d::col::IPoint Pt =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->currX,horzEdge->currY);
HXLINE(2173)							this->IntersectEdges(e,horzEdge,Pt);
            						}
            					}
HXLINE(2175)					this->SwapPositionsInAEL(horzEdge,e);
            				}
            				else {
HXLINE(2177)					bool _hx_tmp;
HXDLIN(2177)					bool _hx_tmp1;
HXDLIN(2177)					if (::hx::IsPointerEq( dir,::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn() )) {
HXLINE(2177)						_hx_tmp1 = (e->currX >= horzRight);
            					}
            					else {
HXLINE(2177)						_hx_tmp1 = false;
            					}
HXDLIN(2177)					if (!(_hx_tmp1)) {
HXLINE(2178)						if (::hx::IsPointerEq( dir,::hxd::clipper::_Clipper::Direction_obj::RightToLeft_dyn() )) {
HXLINE(2177)							_hx_tmp = (e->currX <= horzLeft);
            						}
            						else {
HXLINE(2177)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE(2177)						_hx_tmp = true;
            					}
HXDLIN(2177)					if (_hx_tmp) {
HXLINE(2179)						goto _hx_goto_79;
            					}
            				}
HXLINE(2180)				e = eNext;
            			}
            			_hx_goto_79:;
HXLINE(2183)			bool _hx_tmp;
HXDLIN(2183)			if (::hx::IsNotNull( horzEdge->nextInLML )) {
HXLINE(2183)				_hx_tmp = (horzEdge->nextInLML->deltaY == 0);
            			}
            			else {
HXLINE(2183)				_hx_tmp = false;
            			}
HXDLIN(2183)			if (_hx_tmp) {
HXLINE(2184)				horzEdge = this->UpdateEdgeIntoAEL(horzEdge);
HXLINE(2185)				if ((horzEdge->outIdx >= 0)) {
HXLINE(2185)					this->AddOutPt(horzEdge, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,horzEdge->botX,horzEdge->botY));
            				}
HXLINE(2186)				 ::Dynamic out = this->GetHorzDirection(horzEdge);
HXLINE(2187)				dir = out->__Field(HX_("dir",4d,3d,4c,00),::hx::paccDynamic);
HXLINE(2188)				horzLeft = ( (int)(out->__Field(HX_("left",07,08,b0,47),::hx::paccDynamic)) );
HXLINE(2189)				horzRight = ( (int)(out->__Field(HX_("right",dc,0b,64,e9),::hx::paccDynamic)) );
            			}
            			else {
HXLINE(2190)				goto _hx_goto_78;
            			}
            		}
            		_hx_goto_78:;
HXLINE(2193)		if (::hx::IsNotNull( horzEdge->nextInLML )) {
HXLINE(2195)			if ((horzEdge->outIdx >= 0)) {
HXLINE(2197)				 ::hxd::clipper::_Clipper::OutPt op1 = this->AddOutPt(horzEdge, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,horzEdge->topX,horzEdge->topY));
HXLINE(2198)				if (isTopOfScanbeam) {
HXLINE(2198)					this->AddGhostJoin(op1, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,horzEdge->botX,horzEdge->botY));
            				}
HXLINE(2200)				horzEdge = this->UpdateEdgeIntoAEL(horzEdge);
HXLINE(2201)				if ((horzEdge->windDelta == 0)) {
HXLINE(2201)					return;
            				}
HXLINE(2203)				 ::hxd::clipper::_Clipper::TEdge ePrev = horzEdge->prevInAEL;
HXLINE(2204)				 ::hxd::clipper::_Clipper::TEdge eNext = horzEdge->nextInAEL;
HXLINE(2205)				bool _hx_tmp;
HXDLIN(2205)				bool _hx_tmp1;
HXDLIN(2205)				bool _hx_tmp2;
HXDLIN(2205)				bool _hx_tmp3;
HXDLIN(2205)				if (::hx::IsNotNull( ePrev )) {
HXLINE(2205)					_hx_tmp3 = (ePrev->currX == horzEdge->botX);
            				}
            				else {
HXLINE(2205)					_hx_tmp3 = false;
            				}
HXDLIN(2205)				if (_hx_tmp3) {
HXLINE(2205)					_hx_tmp2 = (ePrev->currY == horzEdge->botY);
            				}
            				else {
HXLINE(2205)					_hx_tmp2 = false;
            				}
HXDLIN(2205)				if (_hx_tmp2) {
HXLINE(2205)					_hx_tmp1 = (ePrev->windDelta != 0);
            				}
            				else {
HXLINE(2205)					_hx_tmp1 = false;
            				}
HXDLIN(2205)				if (_hx_tmp1) {
HXLINE(2205)					bool _hx_tmp1;
HXDLIN(2205)					if ((ePrev->outIdx >= 0)) {
HXLINE(2205)						_hx_tmp1 = (ePrev->currY > ePrev->topY);
            					}
            					else {
HXLINE(2205)						_hx_tmp1 = false;
            					}
HXDLIN(2205)					if (_hx_tmp1) {
HXLINE(2205)						_hx_tmp = ((horzEdge->deltaY * ePrev->deltaX) == (horzEdge->deltaX * ePrev->deltaY));
            					}
            					else {
HXLINE(2205)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(2205)					_hx_tmp = false;
            				}
HXDLIN(2205)				if (_hx_tmp) {
HXLINE(2207)					 ::hxd::clipper::_Clipper::OutPt op2 = this->AddOutPt(ePrev, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,horzEdge->botX,horzEdge->botY));
HXLINE(2208)					this->AddJoin(op1,op2, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,horzEdge->topX,horzEdge->topY));
            				}
            				else {
HXLINE(2210)					bool _hx_tmp;
HXDLIN(2210)					bool _hx_tmp1;
HXDLIN(2210)					bool _hx_tmp2;
HXDLIN(2210)					bool _hx_tmp3;
HXDLIN(2210)					bool _hx_tmp4;
HXDLIN(2210)					bool _hx_tmp5;
HXDLIN(2210)					if (::hx::IsNotNull( eNext )) {
HXLINE(2210)						_hx_tmp5 = (eNext->currX == horzEdge->botX);
            					}
            					else {
HXLINE(2210)						_hx_tmp5 = false;
            					}
HXDLIN(2210)					if (_hx_tmp5) {
HXLINE(2210)						_hx_tmp4 = (eNext->currY == horzEdge->botY);
            					}
            					else {
HXLINE(2210)						_hx_tmp4 = false;
            					}
HXDLIN(2210)					if (_hx_tmp4) {
HXLINE(2210)						_hx_tmp3 = (eNext->windDelta != 0);
            					}
            					else {
HXLINE(2210)						_hx_tmp3 = false;
            					}
HXDLIN(2210)					if (_hx_tmp3) {
HXLINE(2210)						_hx_tmp2 = (eNext->outIdx >= 0);
            					}
            					else {
HXLINE(2210)						_hx_tmp2 = false;
            					}
HXDLIN(2210)					if (_hx_tmp2) {
HXLINE(2210)						_hx_tmp1 = (eNext->currY > eNext->topY);
            					}
            					else {
HXLINE(2210)						_hx_tmp1 = false;
            					}
HXDLIN(2210)					if (_hx_tmp1) {
HXLINE(2210)						_hx_tmp = ((horzEdge->deltaY * eNext->deltaX) == (horzEdge->deltaX * eNext->deltaY));
            					}
            					else {
HXLINE(2210)						_hx_tmp = false;
            					}
HXDLIN(2210)					if (_hx_tmp) {
HXLINE(2212)						 ::hxd::clipper::_Clipper::OutPt op2 = this->AddOutPt(eNext, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,horzEdge->botX,horzEdge->botY));
HXLINE(2213)						this->AddJoin(op1,op2, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,horzEdge->topX,horzEdge->topY));
            					}
            				}
            			}
            			else {
HXLINE(2216)				horzEdge = this->UpdateEdgeIntoAEL(horzEdge);
            			}
            		}
            		else {
HXLINE(2220)			if ((horzEdge->outIdx >= 0)) {
HXLINE(2220)				this->AddOutPt(horzEdge, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,horzEdge->topX,horzEdge->topY));
            			}
HXLINE(2221)			this->DeleteFromAEL(horzEdge);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,ProcessHorizontal,(void))

 ::hxd::clipper::_Clipper::TEdge Clipper_obj::GetNextInAEL( ::hxd::clipper::_Clipper::TEdge e, ::hxd::clipper::_Clipper::Direction dir){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2229_GetNextInAEL)
HXDLIN(2229)		if (::hx::IsPointerEq( dir,::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn() )) {
HXDLIN(2229)			return e->nextInAEL;
            		}
            		else {
HXDLIN(2229)			return e->prevInAEL;
            		}
HXDLIN(2229)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,GetNextInAEL,return )

bool Clipper_obj::IsMinima( ::hxd::clipper::_Clipper::TEdge e){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2235_IsMinima)
HXDLIN(2235)		bool _hx_tmp;
HXDLIN(2235)		if (::hx::IsNotNull( e )) {
HXDLIN(2235)			_hx_tmp = ::hx::IsInstanceNotEq( e->prev->nextInLML,e );
            		}
            		else {
HXDLIN(2235)			_hx_tmp = false;
            		}
HXDLIN(2235)		if (_hx_tmp) {
HXDLIN(2235)			return ::hx::IsInstanceNotEq( e->next->nextInLML,e );
            		}
            		else {
HXDLIN(2235)			return false;
            		}
HXDLIN(2235)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,IsMinima,return )

bool Clipper_obj::IsMaxima( ::hxd::clipper::_Clipper::TEdge e,Float y){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2241_IsMaxima)
HXDLIN(2241)		bool _hx_tmp;
HXDLIN(2241)		if (::hx::IsNotNull( e )) {
HXDLIN(2241)			_hx_tmp = (e->topY == y);
            		}
            		else {
HXDLIN(2241)			_hx_tmp = false;
            		}
HXDLIN(2241)		if (_hx_tmp) {
HXDLIN(2241)			return ::hx::IsNull( e->nextInLML );
            		}
            		else {
HXDLIN(2241)			return false;
            		}
HXDLIN(2241)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,IsMaxima,return )

bool Clipper_obj::IsIntermediate( ::hxd::clipper::_Clipper::TEdge e,Float y){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2247_IsIntermediate)
HXDLIN(2247)		if ((e->topY == y)) {
HXDLIN(2247)			return ::hx::IsNotNull( e->nextInLML );
            		}
            		else {
HXDLIN(2247)			return false;
            		}
HXDLIN(2247)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,IsIntermediate,return )

 ::hxd::clipper::_Clipper::TEdge Clipper_obj::GetMaximaPair( ::hxd::clipper::_Clipper::TEdge e){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2252_GetMaximaPair)
HXLINE(2253)		 ::hxd::clipper::_Clipper::TEdge result = null();
HXLINE(2254)		bool _hx_tmp;
HXDLIN(2254)		bool _hx_tmp1;
HXDLIN(2254)		if ((e->next->topX == e->topX)) {
HXLINE(2254)			_hx_tmp1 = (e->next->topY == e->topY);
            		}
            		else {
HXLINE(2254)			_hx_tmp1 = false;
            		}
HXDLIN(2254)		if (_hx_tmp1) {
HXLINE(2254)			_hx_tmp = ::hx::IsNull( e->next->nextInLML );
            		}
            		else {
HXLINE(2254)			_hx_tmp = false;
            		}
HXDLIN(2254)		if (_hx_tmp) {
HXLINE(2255)			result = e->next;
            		}
            		else {
HXLINE(2256)			bool _hx_tmp;
HXDLIN(2256)			bool _hx_tmp1;
HXDLIN(2256)			if ((e->prev->topX == e->topX)) {
HXLINE(2256)				_hx_tmp1 = (e->prev->topY == e->topY);
            			}
            			else {
HXLINE(2256)				_hx_tmp1 = false;
            			}
HXDLIN(2256)			if (_hx_tmp1) {
HXLINE(2256)				_hx_tmp = ::hx::IsNull( e->prev->nextInLML );
            			}
            			else {
HXLINE(2256)				_hx_tmp = false;
            			}
HXDLIN(2256)			if (_hx_tmp) {
HXLINE(2257)				result = e->prev;
            			}
            		}
HXLINE(2258)		bool _hx_tmp2;
HXDLIN(2258)		if (::hx::IsNotNull( result )) {
HXLINE(2258)			if ((result->outIdx != -2)) {
HXLINE(2258)				if (::hx::IsInstanceEq( result->nextInAEL,result->prevInAEL )) {
HXLINE(2258)					_hx_tmp2 = (result->deltaY != 0);
            				}
            				else {
HXLINE(2258)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE(2258)				_hx_tmp2 = true;
            			}
            		}
            		else {
HXLINE(2258)			_hx_tmp2 = false;
            		}
HXDLIN(2258)		if (_hx_tmp2) {
HXLINE(2259)			return null();
            		}
HXLINE(2260)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,GetMaximaPair,return )

bool Clipper_obj::ProcessIntersections(int topY){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2265_ProcessIntersections)
HXLINE(2266)		if (::hx::IsNull( this->m_ActiveEdges )) {
HXLINE(2266)			return true;
            		}
HXLINE(2268)		this->BuildIntersectList(topY);
HXLINE(2269)		if ((this->m_IntersectList->length == 0)) {
HXLINE(2269)			return true;
            		}
HXLINE(2270)		bool _hx_tmp;
HXDLIN(2270)		if ((this->m_IntersectList->length != 1)) {
HXLINE(2270)			_hx_tmp = this->FixupIntersectionOrder();
            		}
            		else {
HXLINE(2270)			_hx_tmp = true;
            		}
HXDLIN(2270)		if (_hx_tmp) {
HXLINE(2271)			this->ProcessIntersectList();
            		}
            		else {
HXLINE(2273)			return false;
            		}
HXLINE(2280)		this->m_SortedEdges = null();
HXLINE(2281)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,ProcessIntersections,return )

void Clipper_obj::BuildIntersectList(int topY){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_2286_BuildIntersectList)
HXLINE(2287)		if (::hx::IsNull( this->m_ActiveEdges )) {
HXLINE(2287)			return;
            		}
HXLINE(2292)		 ::hxd::clipper::_Clipper::TEdge e = this->m_ActiveEdges;
HXLINE(2293)		this->m_SortedEdges = e;
HXLINE(2294)		while(::hx::IsNotNull( e )){
HXLINE(2296)			e->prevInSEL = e->prevInAEL;
HXLINE(2297)			e->nextInSEL = e->nextInAEL;
HXLINE(2298)			int _hx_tmp;
HXDLIN(2298)			if ((topY == e->topY)) {
HXLINE(2298)				_hx_tmp = e->topX;
            			}
            			else {
HXLINE(2298)				int e1 = e->botX;
HXDLIN(2298)				Float value = (e->dx * ( (Float)((topY - e->botY)) ));
HXDLIN(2298)				int _hx_tmp1;
HXDLIN(2298)				if ((value < 0)) {
HXLINE(2298)					_hx_tmp1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            				}
            				else {
HXLINE(2298)					_hx_tmp1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            				}
HXDLIN(2298)				_hx_tmp = (e1 + _hx_tmp1);
            			}
HXDLIN(2298)			e->currX = _hx_tmp;
HXLINE(2299)			e = e->nextInAEL;
            		}
HXLINE(2303)		bool isModified = true;
HXLINE(2304)		while(true){
HXLINE(2304)			bool _hx_tmp;
HXDLIN(2304)			if (isModified) {
HXLINE(2304)				_hx_tmp = ::hx::IsNotNull( this->m_SortedEdges );
            			}
            			else {
HXLINE(2304)				_hx_tmp = false;
            			}
HXDLIN(2304)			if (!(_hx_tmp)) {
HXLINE(2304)				goto _hx_goto_89;
            			}
HXLINE(2306)			isModified = false;
HXLINE(2307)			e = this->m_SortedEdges;
HXLINE(2308)			while(::hx::IsNotNull( e->nextInSEL )){
HXLINE(2310)				 ::hxd::clipper::_Clipper::TEdge eNext = e->nextInSEL;
HXLINE(2311)				 ::h2d::col::IPoint pt;
HXLINE(2312)				if ((e->currX > eNext->currX)) {
HXLINE(2314)					int ipx;
HXDLIN(2314)					int ipy;
HXDLIN(2314)					Float b1;
HXDLIN(2314)					Float b2;
HXDLIN(2314)					if ((e->dx == eNext->dx)) {
HXLINE(2314)						ipy = e->currY;
HXDLIN(2314)						if ((ipy == e->topY)) {
HXLINE(2314)							ipx = e->topX;
            						}
            						else {
HXLINE(2314)							int e1 = e->botX;
HXDLIN(2314)							Float value = (e->dx * ( (Float)((ipy - e->botY)) ));
HXDLIN(2314)							int ipx1;
HXDLIN(2314)							if ((value < 0)) {
HXLINE(2314)								ipx1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            							}
            							else {
HXLINE(2314)								ipx1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            							}
HXDLIN(2314)							ipx = (e1 + ipx1);
            						}
HXDLIN(2314)						pt =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,ipx,ipy);
            					}
            					else {
HXLINE(2314)						if ((e->deltaX == 0)) {
HXLINE(2314)							ipx = e->botX;
HXDLIN(2314)							if ((eNext->deltaY == 0)) {
HXLINE(2314)								ipy = eNext->botY;
            							}
            							else {
HXLINE(2314)								b2 = (( (Float)(eNext->botY) ) - (( (Float)(eNext->botX) ) / eNext->dx));
HXDLIN(2314)								Float value = ((( (Float)(ipx) ) / eNext->dx) + b2);
HXDLIN(2314)								if ((value < 0)) {
HXLINE(2314)									ipy = ::Std_obj::_hx_int((value - ((Float)0.5)));
            								}
            								else {
HXLINE(2314)									ipy = ::Std_obj::_hx_int((value + ((Float)0.5)));
            								}
            							}
            						}
            						else {
HXLINE(2314)							if ((eNext->deltaX == 0)) {
HXLINE(2314)								ipx = eNext->botX;
HXDLIN(2314)								if ((e->deltaY == 0)) {
HXLINE(2314)									ipy = e->botY;
            								}
            								else {
HXLINE(2314)									b1 = (( (Float)(e->botY) ) - (( (Float)(e->botX) ) / e->dx));
HXDLIN(2314)									Float value = ((( (Float)(ipx) ) / e->dx) + b1);
HXDLIN(2314)									if ((value < 0)) {
HXLINE(2314)										ipy = ::Std_obj::_hx_int((value - ((Float)0.5)));
            									}
            									else {
HXLINE(2314)										ipy = ::Std_obj::_hx_int((value + ((Float)0.5)));
            									}
            								}
            							}
            							else {
HXLINE(2314)								b1 = (( (Float)(e->botX) ) - (( (Float)(e->botY) ) * e->dx));
HXDLIN(2314)								b2 = (( (Float)(eNext->botX) ) - (( (Float)(eNext->botY) ) * eNext->dx));
HXDLIN(2314)								Float q = ((b2 - b1) / (e->dx - eNext->dx));
HXDLIN(2314)								if ((q < 0)) {
HXLINE(2314)									ipy = ::Std_obj::_hx_int((q - ((Float)0.5)));
            								}
            								else {
HXLINE(2314)									ipy = ::Std_obj::_hx_int((q + ((Float)0.5)));
            								}
HXDLIN(2314)								Float f = e->dx;
HXDLIN(2314)								Float pt;
HXDLIN(2314)								if ((f < 0)) {
HXLINE(2314)									pt = -(f);
            								}
            								else {
HXLINE(2314)									pt = f;
            								}
HXDLIN(2314)								Float f1 = eNext->dx;
HXDLIN(2314)								Float pt1;
HXDLIN(2314)								if ((f1 < 0)) {
HXLINE(2314)									pt1 = -(f1);
            								}
            								else {
HXLINE(2314)									pt1 = f1;
            								}
HXDLIN(2314)								if ((pt < pt1)) {
HXLINE(2314)									Float value = ((e->dx * q) + b1);
HXDLIN(2314)									if ((value < 0)) {
HXLINE(2314)										ipx = ::Std_obj::_hx_int((value - ((Float)0.5)));
            									}
            									else {
HXLINE(2314)										ipx = ::Std_obj::_hx_int((value + ((Float)0.5)));
            									}
            								}
            								else {
HXLINE(2314)									Float value = ((eNext->dx * q) + b2);
HXDLIN(2314)									if ((value < 0)) {
HXLINE(2314)										ipx = ::Std_obj::_hx_int((value - ((Float)0.5)));
            									}
            									else {
HXLINE(2314)										ipx = ::Std_obj::_hx_int((value + ((Float)0.5)));
            									}
            								}
            							}
            						}
HXDLIN(2314)						bool pt1;
HXDLIN(2314)						if ((ipy >= e->topY)) {
HXLINE(2314)							pt1 = (ipy < eNext->topY);
            						}
            						else {
HXLINE(2314)							pt1 = true;
            						}
HXDLIN(2314)						if (pt1) {
HXLINE(2314)							if ((e->topY > eNext->topY)) {
HXLINE(2314)								ipy = e->topY;
            							}
            							else {
HXLINE(2314)								ipy = eNext->topY;
            							}
HXDLIN(2314)							Float f = e->dx;
HXDLIN(2314)							Float pt;
HXDLIN(2314)							if ((f < 0)) {
HXLINE(2314)								pt = -(f);
            							}
            							else {
HXLINE(2314)								pt = f;
            							}
HXDLIN(2314)							Float f1 = eNext->dx;
HXDLIN(2314)							Float pt1;
HXDLIN(2314)							if ((f1 < 0)) {
HXLINE(2314)								pt1 = -(f1);
            							}
            							else {
HXLINE(2314)								pt1 = f1;
            							}
HXDLIN(2314)							if ((pt < pt1)) {
HXLINE(2314)								if ((ipy == e->topY)) {
HXLINE(2314)									ipx = e->topX;
            								}
            								else {
HXLINE(2314)									int e1 = e->botX;
HXDLIN(2314)									Float value = (e->dx * ( (Float)((ipy - e->botY)) ));
HXDLIN(2314)									int ipx1;
HXDLIN(2314)									if ((value < 0)) {
HXLINE(2314)										ipx1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            									}
            									else {
HXLINE(2314)										ipx1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            									}
HXDLIN(2314)									ipx = (e1 + ipx1);
            								}
            							}
            							else {
HXLINE(2314)								if ((ipy == eNext->topY)) {
HXLINE(2314)									ipx = eNext->topX;
            								}
            								else {
HXLINE(2314)									int eNext1 = eNext->botX;
HXDLIN(2314)									Float value = (eNext->dx * ( (Float)((ipy - eNext->botY)) ));
HXDLIN(2314)									int ipx1;
HXDLIN(2314)									if ((value < 0)) {
HXLINE(2314)										ipx1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            									}
            									else {
HXLINE(2314)										ipx1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            									}
HXDLIN(2314)									ipx = (eNext1 + ipx1);
            								}
            							}
            						}
HXDLIN(2314)						if ((ipy > e->currY)) {
HXLINE(2314)							ipy = e->currY;
HXDLIN(2314)							Float f = e->dx;
HXDLIN(2314)							Float pt;
HXDLIN(2314)							if ((f < 0)) {
HXLINE(2314)								pt = -(f);
            							}
            							else {
HXLINE(2314)								pt = f;
            							}
HXDLIN(2314)							Float f1 = eNext->dx;
HXDLIN(2314)							Float pt1;
HXDLIN(2314)							if ((f1 < 0)) {
HXLINE(2314)								pt1 = -(f1);
            							}
            							else {
HXLINE(2314)								pt1 = f1;
            							}
HXDLIN(2314)							if ((pt > pt1)) {
HXLINE(2314)								if ((ipy == eNext->topY)) {
HXLINE(2314)									ipx = eNext->topX;
            								}
            								else {
HXLINE(2314)									int eNext1 = eNext->botX;
HXDLIN(2314)									Float value = (eNext->dx * ( (Float)((ipy - eNext->botY)) ));
HXDLIN(2314)									int ipx1;
HXDLIN(2314)									if ((value < 0)) {
HXLINE(2314)										ipx1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            									}
            									else {
HXLINE(2314)										ipx1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            									}
HXDLIN(2314)									ipx = (eNext1 + ipx1);
            								}
            							}
            							else {
HXLINE(2314)								if ((ipy == e->topY)) {
HXLINE(2314)									ipx = e->topX;
            								}
            								else {
HXLINE(2314)									int e1 = e->botX;
HXDLIN(2314)									Float value = (e->dx * ( (Float)((ipy - e->botY)) ));
HXDLIN(2314)									int ipx1;
HXDLIN(2314)									if ((value < 0)) {
HXLINE(2314)										ipx1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            									}
            									else {
HXLINE(2314)										ipx1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            									}
HXDLIN(2314)									ipx = (e1 + ipx1);
            								}
            							}
            						}
HXDLIN(2314)						pt =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,ipx,ipy);
            					}
HXLINE(2315)					 ::hxd::clipper::_Clipper::IntersectNode newNode =  ::hxd::clipper::_Clipper::IntersectNode_obj::__alloc( HX_CTX );
HXLINE(2316)					newNode->edge1 = e;
HXLINE(2317)					newNode->edge2 = eNext;
HXLINE(2318)					newNode->pt = pt;
HXLINE(2320)					this->m_IntersectList->push(newNode);
HXLINE(2321)					this->SwapPositionsInSEL(e,eNext);
HXLINE(2322)					isModified = true;
            				}
            				else {
HXLINE(2324)					e = eNext;
            				}
            			}
HXLINE(2326)			if (::hx::IsNotNull( e->prevInSEL )) {
HXLINE(2326)				e->prevInSEL->nextInSEL = null();
            			}
            			else {
HXLINE(2327)				goto _hx_goto_89;
            			}
            		}
            		_hx_goto_89:;
HXLINE(2329)		this->m_SortedEdges = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,BuildIntersectList,(void))

bool Clipper_obj::EdgesAdjacent( ::hxd::clipper::_Clipper::IntersectNode inode){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2335_EdgesAdjacent)
HXDLIN(2335)		if (::hx::IsInstanceNotEq( inode->edge1->nextInSEL,inode->edge2 )) {
HXLINE(2336)			return ::hx::IsInstanceEq( inode->edge1->prevInSEL,inode->edge2 );
            		}
            		else {
HXDLIN(2335)			return true;
            		}
HXDLIN(2335)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,EdgesAdjacent,return )

int Clipper_obj::IntersectNodeSort( ::hxd::clipper::_Clipper::IntersectNode node1, ::hxd::clipper::_Clipper::IntersectNode node2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2344_IntersectNodeSort)
HXDLIN(2344)		return ::Std_obj::_hx_int(( (Float)((node2->pt->y - node1->pt->y)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,IntersectNodeSort,return )

bool Clipper_obj::FixupIntersectionOrder(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2352_FixupIntersectionOrder)
HXLINE(2356)		this->m_IntersectList->sort(::hxd::clipper::Clipper_obj::compareY_dyn());
HXLINE(2358)		{
HXLINE(2358)			 ::hxd::clipper::_Clipper::TEdge e = this->m_ActiveEdges;
HXDLIN(2358)			this->m_SortedEdges = e;
HXDLIN(2358)			while(::hx::IsNotNull( e )){
HXLINE(2358)				e->prevInSEL = e->prevInAEL;
HXDLIN(2358)				e->nextInSEL = e->nextInAEL;
HXDLIN(2358)				e = e->nextInAEL;
            			}
            		}
HXLINE(2359)		int cnt = this->m_IntersectList->length;
HXLINE(2360)		{
HXLINE(2360)			int _g = 0;
HXDLIN(2360)			int _g1 = cnt;
HXDLIN(2360)			while((_g < _g1)){
HXLINE(2360)				_g = (_g + 1);
HXDLIN(2360)				int i = (_g - 1);
HXLINE(2362)				 ::hxd::clipper::_Clipper::IntersectNode inode = this->m_IntersectList->__get(i).StaticCast<  ::hxd::clipper::_Clipper::IntersectNode >();
HXDLIN(2362)				bool _hx_tmp;
HXDLIN(2362)				if (::hx::IsInstanceNotEq( inode->edge1->nextInSEL,inode->edge2 )) {
HXLINE(2362)					_hx_tmp = ::hx::IsInstanceEq( inode->edge1->prevInSEL,inode->edge2 );
            				}
            				else {
HXLINE(2362)					_hx_tmp = true;
            				}
HXDLIN(2362)				if (!(_hx_tmp)) {
HXLINE(2364)					int j = (i + 1);
HXLINE(2365)					while(true){
HXLINE(2365)						bool _hx_tmp;
HXDLIN(2365)						if ((j < cnt)) {
HXLINE(2365)							 ::hxd::clipper::_Clipper::IntersectNode inode = this->m_IntersectList->__get(j).StaticCast<  ::hxd::clipper::_Clipper::IntersectNode >();
HXDLIN(2365)							bool _hx_tmp1;
HXDLIN(2365)							if (::hx::IsInstanceNotEq( inode->edge1->nextInSEL,inode->edge2 )) {
HXLINE(2365)								_hx_tmp1 = ::hx::IsInstanceEq( inode->edge1->prevInSEL,inode->edge2 );
            							}
            							else {
HXLINE(2365)								_hx_tmp1 = true;
            							}
HXDLIN(2365)							_hx_tmp = !(_hx_tmp1);
            						}
            						else {
HXLINE(2365)							_hx_tmp = false;
            						}
HXDLIN(2365)						if (!(_hx_tmp)) {
HXLINE(2365)							goto _hx_goto_96;
            						}
HXDLIN(2365)						j = (j + 1);
            					}
            					_hx_goto_96:;
HXLINE(2366)					if ((j == cnt)) {
HXLINE(2366)						return false;
            					}
HXLINE(2368)					 ::hxd::clipper::_Clipper::IntersectNode tmp = this->m_IntersectList->__get(i).StaticCast<  ::hxd::clipper::_Clipper::IntersectNode >();
HXLINE(2369)					this->m_IntersectList[i] = this->m_IntersectList->__get(j).StaticCast<  ::hxd::clipper::_Clipper::IntersectNode >();
HXLINE(2370)					this->m_IntersectList[j] = tmp;
            				}
HXLINE(2373)				this->SwapPositionsInSEL(this->m_IntersectList->__get(i).StaticCast<  ::hxd::clipper::_Clipper::IntersectNode >()->edge1,this->m_IntersectList->__get(i).StaticCast<  ::hxd::clipper::_Clipper::IntersectNode >()->edge2);
            			}
            		}
HXLINE(2375)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Clipper_obj,FixupIntersectionOrder,return )

void Clipper_obj::ProcessIntersectList(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2380_ProcessIntersectList)
HXLINE(2381)		{
HXLINE(2381)			int _g = 0;
HXDLIN(2381)			int _g1 = this->m_IntersectList->length;
HXDLIN(2381)			while((_g < _g1)){
HXLINE(2381)				_g = (_g + 1);
HXDLIN(2381)				int i = (_g - 1);
HXLINE(2382)				 ::hxd::clipper::_Clipper::IntersectNode iNode = this->m_IntersectList->__get(i).StaticCast<  ::hxd::clipper::_Clipper::IntersectNode >();
HXLINE(2383)				{
HXLINE(2384)					this->IntersectEdges(iNode->edge1,iNode->edge2,iNode->pt);
HXLINE(2385)					this->SwapPositionsInAEL(iNode->edge1,iNode->edge2);
            				}
            			}
            		}
HXLINE(2388)		this->m_IntersectList = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Clipper_obj,ProcessIntersectList,(void))

int Clipper_obj::Round(Float value){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2395_Round)
HXDLIN(2395)		if ((value < 0)) {
HXDLIN(2395)			return ::Std_obj::_hx_int((value - ((Float)0.5)));
            		}
            		else {
HXDLIN(2395)			return ::Std_obj::_hx_int((value + ((Float)0.5)));
            		}
HXDLIN(2395)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,Round,return )

int Clipper_obj::TopX( ::hxd::clipper::_Clipper::TEdge edge,int currentY){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2400_TopX)
HXLINE(2401)		if ((currentY == edge->topY)) {
HXLINE(2402)			return edge->topX;
            		}
HXLINE(2403)		int edge1 = edge->botX;
HXDLIN(2403)		Float value = (edge->dx * ( (Float)((currentY - edge->botY)) ));
HXDLIN(2403)		int _hx_tmp;
HXDLIN(2403)		if ((value < 0)) {
HXLINE(2403)			_hx_tmp = ::Std_obj::_hx_int((value - ((Float)0.5)));
            		}
            		else {
HXLINE(2403)			_hx_tmp = ::Std_obj::_hx_int((value + ((Float)0.5)));
            		}
HXDLIN(2403)		return (edge1 + _hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,TopX,return )

 ::h2d::col::IPoint Clipper_obj::IntersectPoint( ::hxd::clipper::_Clipper::TEdge edge1, ::hxd::clipper::_Clipper::TEdge edge2){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_2409_IntersectPoint)
HXLINE(2410)		int ipx;
HXDLIN(2410)		int ipy;
HXLINE(2411)		Float b1;
HXDLIN(2411)		Float b2;
HXLINE(2414)		if ((edge1->dx == edge2->dx)) {
HXLINE(2416)			ipy = edge1->currY;
HXLINE(2417)			if ((ipy == edge1->topY)) {
HXLINE(2417)				ipx = edge1->topX;
            			}
            			else {
HXLINE(2417)				int edge11 = edge1->botX;
HXDLIN(2417)				Float value = (edge1->dx * ( (Float)((ipy - edge1->botY)) ));
HXDLIN(2417)				int ipx1;
HXDLIN(2417)				if ((value < 0)) {
HXLINE(2417)					ipx1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            				}
            				else {
HXLINE(2417)					ipx1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            				}
HXDLIN(2417)				ipx = (edge11 + ipx1);
            			}
HXLINE(2418)			return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,ipx,ipy);
            		}
HXLINE(2421)		if ((edge1->deltaX == 0)) {
HXLINE(2423)			ipx = edge1->botX;
HXLINE(2424)			if ((edge2->deltaY == 0)) {
HXLINE(2426)				ipy = edge2->botY;
            			}
            			else {
HXLINE(2430)				b2 = (( (Float)(edge2->botY) ) - (( (Float)(edge2->botX) ) / edge2->dx));
HXLINE(2431)				Float value = ((( (Float)(ipx) ) / edge2->dx) + b2);
HXDLIN(2431)				if ((value < 0)) {
HXLINE(2431)					ipy = ::Std_obj::_hx_int((value - ((Float)0.5)));
            				}
            				else {
HXLINE(2431)					ipy = ::Std_obj::_hx_int((value + ((Float)0.5)));
            				}
            			}
            		}
            		else {
HXLINE(2434)			if ((edge2->deltaX == 0)) {
HXLINE(2436)				ipx = edge2->botX;
HXLINE(2437)				if ((edge1->deltaY == 0)) {
HXLINE(2439)					ipy = edge1->botY;
            				}
            				else {
HXLINE(2443)					b1 = (( (Float)(edge1->botY) ) - (( (Float)(edge1->botX) ) / edge1->dx));
HXLINE(2444)					Float value = ((( (Float)(ipx) ) / edge1->dx) + b1);
HXDLIN(2444)					if ((value < 0)) {
HXLINE(2444)						ipy = ::Std_obj::_hx_int((value - ((Float)0.5)));
            					}
            					else {
HXLINE(2444)						ipy = ::Std_obj::_hx_int((value + ((Float)0.5)));
            					}
            				}
            			}
            			else {
HXLINE(2449)				b1 = (( (Float)(edge1->botX) ) - (( (Float)(edge1->botY) ) * edge1->dx));
HXLINE(2450)				b2 = (( (Float)(edge2->botX) ) - (( (Float)(edge2->botY) ) * edge2->dx));
HXLINE(2451)				Float q = ((b2 - b1) / (edge1->dx - edge2->dx));
HXLINE(2452)				if ((q < 0)) {
HXLINE(2452)					ipy = ::Std_obj::_hx_int((q - ((Float)0.5)));
            				}
            				else {
HXLINE(2452)					ipy = ::Std_obj::_hx_int((q + ((Float)0.5)));
            				}
HXLINE(2453)				Float f = edge1->dx;
HXDLIN(2453)				Float _hx_tmp;
HXDLIN(2453)				if ((f < 0)) {
HXLINE(2453)					_hx_tmp = -(f);
            				}
            				else {
HXLINE(2453)					_hx_tmp = f;
            				}
HXDLIN(2453)				Float f1 = edge2->dx;
HXDLIN(2453)				Float _hx_tmp1;
HXDLIN(2453)				if ((f1 < 0)) {
HXLINE(2453)					_hx_tmp1 = -(f1);
            				}
            				else {
HXLINE(2453)					_hx_tmp1 = f1;
            				}
HXDLIN(2453)				if ((_hx_tmp < _hx_tmp1)) {
HXLINE(2454)					Float value = ((edge1->dx * q) + b1);
HXDLIN(2454)					if ((value < 0)) {
HXLINE(2454)						ipx = ::Std_obj::_hx_int((value - ((Float)0.5)));
            					}
            					else {
HXLINE(2454)						ipx = ::Std_obj::_hx_int((value + ((Float)0.5)));
            					}
            				}
            				else {
HXLINE(2456)					Float value = ((edge2->dx * q) + b2);
HXDLIN(2456)					if ((value < 0)) {
HXLINE(2456)						ipx = ::Std_obj::_hx_int((value - ((Float)0.5)));
            					}
            					else {
HXLINE(2456)						ipx = ::Std_obj::_hx_int((value + ((Float)0.5)));
            					}
            				}
            			}
            		}
HXLINE(2459)		bool _hx_tmp;
HXDLIN(2459)		if ((ipy >= edge1->topY)) {
HXLINE(2459)			_hx_tmp = (ipy < edge2->topY);
            		}
            		else {
HXLINE(2459)			_hx_tmp = true;
            		}
HXDLIN(2459)		if (_hx_tmp) {
HXLINE(2461)			if ((edge1->topY > edge2->topY)) {
HXLINE(2462)				ipy = edge1->topY;
            			}
            			else {
HXLINE(2464)				ipy = edge2->topY;
            			}
HXLINE(2465)			Float f = edge1->dx;
HXDLIN(2465)			Float _hx_tmp;
HXDLIN(2465)			if ((f < 0)) {
HXLINE(2465)				_hx_tmp = -(f);
            			}
            			else {
HXLINE(2465)				_hx_tmp = f;
            			}
HXDLIN(2465)			Float f1 = edge2->dx;
HXDLIN(2465)			Float _hx_tmp1;
HXDLIN(2465)			if ((f1 < 0)) {
HXLINE(2465)				_hx_tmp1 = -(f1);
            			}
            			else {
HXLINE(2465)				_hx_tmp1 = f1;
            			}
HXDLIN(2465)			if ((_hx_tmp < _hx_tmp1)) {
HXLINE(2466)				if ((ipy == edge1->topY)) {
HXLINE(2466)					ipx = edge1->topX;
            				}
            				else {
HXLINE(2466)					int edge11 = edge1->botX;
HXDLIN(2466)					Float value = (edge1->dx * ( (Float)((ipy - edge1->botY)) ));
HXDLIN(2466)					int ipx1;
HXDLIN(2466)					if ((value < 0)) {
HXLINE(2466)						ipx1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            					}
            					else {
HXLINE(2466)						ipx1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            					}
HXDLIN(2466)					ipx = (edge11 + ipx1);
            				}
            			}
            			else {
HXLINE(2468)				if ((ipy == edge2->topY)) {
HXLINE(2468)					ipx = edge2->topX;
            				}
            				else {
HXLINE(2468)					int edge21 = edge2->botX;
HXDLIN(2468)					Float value = (edge2->dx * ( (Float)((ipy - edge2->botY)) ));
HXDLIN(2468)					int ipx1;
HXDLIN(2468)					if ((value < 0)) {
HXLINE(2468)						ipx1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            					}
            					else {
HXLINE(2468)						ipx1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            					}
HXDLIN(2468)					ipx = (edge21 + ipx1);
            				}
            			}
            		}
HXLINE(2471)		if ((ipy > edge1->currY)) {
HXLINE(2473)			ipy = edge1->currY;
HXLINE(2475)			Float f = edge1->dx;
HXDLIN(2475)			Float _hx_tmp;
HXDLIN(2475)			if ((f < 0)) {
HXLINE(2475)				_hx_tmp = -(f);
            			}
            			else {
HXLINE(2475)				_hx_tmp = f;
            			}
HXDLIN(2475)			Float f1 = edge2->dx;
HXDLIN(2475)			Float _hx_tmp1;
HXDLIN(2475)			if ((f1 < 0)) {
HXLINE(2475)				_hx_tmp1 = -(f1);
            			}
            			else {
HXLINE(2475)				_hx_tmp1 = f1;
            			}
HXDLIN(2475)			if ((_hx_tmp > _hx_tmp1)) {
HXLINE(2476)				if ((ipy == edge2->topY)) {
HXLINE(2476)					ipx = edge2->topX;
            				}
            				else {
HXLINE(2476)					int edge21 = edge2->botX;
HXDLIN(2476)					Float value = (edge2->dx * ( (Float)((ipy - edge2->botY)) ));
HXDLIN(2476)					int ipx1;
HXDLIN(2476)					if ((value < 0)) {
HXLINE(2476)						ipx1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            					}
            					else {
HXLINE(2476)						ipx1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            					}
HXDLIN(2476)					ipx = (edge21 + ipx1);
            				}
            			}
            			else {
HXLINE(2478)				if ((ipy == edge1->topY)) {
HXLINE(2478)					ipx = edge1->topX;
            				}
            				else {
HXLINE(2478)					int edge11 = edge1->botX;
HXDLIN(2478)					Float value = (edge1->dx * ( (Float)((ipy - edge1->botY)) ));
HXDLIN(2478)					int ipx1;
HXDLIN(2478)					if ((value < 0)) {
HXLINE(2478)						ipx1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            					}
            					else {
HXLINE(2478)						ipx1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            					}
HXDLIN(2478)					ipx = (edge11 + ipx1);
            				}
            			}
            		}
HXLINE(2481)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,ipx,ipy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,IntersectPoint,return )

void Clipper_obj::ProcessEdgesAtTopOfScanbeam(int topY){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_2485_ProcessEdgesAtTopOfScanbeam)
HXLINE(2486)		 ::hxd::clipper::_Clipper::TEdge e = this->m_ActiveEdges;
HXLINE(2488)		while(::hx::IsNotNull( e )){
HXLINE(2492)			bool IsMaximaEdge;
HXDLIN(2492)			bool IsMaximaEdge1;
HXDLIN(2492)			if (::hx::IsNotNull( e )) {
HXLINE(2492)				IsMaximaEdge1 = (e->topY == topY);
            			}
            			else {
HXLINE(2492)				IsMaximaEdge1 = false;
            			}
HXDLIN(2492)			if (IsMaximaEdge1) {
HXLINE(2492)				IsMaximaEdge = ::hx::IsNull( e->nextInLML );
            			}
            			else {
HXLINE(2492)				IsMaximaEdge = false;
            			}
HXLINE(2494)			if (IsMaximaEdge) {
HXLINE(2496)				 ::hxd::clipper::_Clipper::TEdge eMaxPair = this->GetMaximaPair(e);
HXLINE(2497)				if (::hx::IsNotNull( eMaxPair )) {
HXLINE(2497)					IsMaximaEdge = (eMaxPair->deltaY != 0);
            				}
            				else {
HXLINE(2497)					IsMaximaEdge = true;
            				}
            			}
HXLINE(2500)			if (IsMaximaEdge) {
HXLINE(2502)				 ::hxd::clipper::_Clipper::TEdge ePrev = e->prevInAEL;
HXLINE(2503)				this->DoMaxima(e);
HXLINE(2504)				if (::hx::IsNull( ePrev )) {
HXLINE(2504)					e = this->m_ActiveEdges;
            				}
            				else {
HXLINE(2505)					e = ePrev->nextInAEL;
            				}
            			}
            			else {
HXLINE(2510)				bool _hx_tmp;
HXDLIN(2510)				bool _hx_tmp1;
HXDLIN(2510)				if ((e->topY == topY)) {
HXLINE(2510)					_hx_tmp1 = ::hx::IsNotNull( e->nextInLML );
            				}
            				else {
HXLINE(2510)					_hx_tmp1 = false;
            				}
HXDLIN(2510)				if (_hx_tmp1) {
HXLINE(2510)					_hx_tmp = (e->nextInLML->deltaY == 0);
            				}
            				else {
HXLINE(2510)					_hx_tmp = false;
            				}
HXDLIN(2510)				if (_hx_tmp) {
HXLINE(2512)					e = this->UpdateEdgeIntoAEL(e);
HXLINE(2513)					if ((e->outIdx >= 0)) {
HXLINE(2514)						this->AddOutPt(e, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->botX,e->botY));
            					}
HXLINE(2515)					this->AddEdgeToSEL(e);
            				}
            				else {
HXLINE(2519)					int _hx_tmp;
HXDLIN(2519)					if ((topY == e->topY)) {
HXLINE(2519)						_hx_tmp = e->topX;
            					}
            					else {
HXLINE(2519)						int e1 = e->botX;
HXDLIN(2519)						Float value = (e->dx * ( (Float)((topY - e->botY)) ));
HXDLIN(2519)						int _hx_tmp1;
HXDLIN(2519)						if ((value < 0)) {
HXLINE(2519)							_hx_tmp1 = ::Std_obj::_hx_int((value - ((Float)0.5)));
            						}
            						else {
HXLINE(2519)							_hx_tmp1 = ::Std_obj::_hx_int((value + ((Float)0.5)));
            						}
HXDLIN(2519)						_hx_tmp = (e1 + _hx_tmp1);
            					}
HXDLIN(2519)					e->currX = _hx_tmp;
HXLINE(2520)					e->currY = topY;
            				}
HXLINE(2523)				if (this->strictlySimple) {
HXLINE(2525)					 ::hxd::clipper::_Clipper::TEdge ePrev = e->prevInAEL;
HXLINE(2526)					bool _hx_tmp;
HXDLIN(2526)					bool _hx_tmp1;
HXDLIN(2526)					bool _hx_tmp2;
HXDLIN(2526)					bool _hx_tmp3;
HXDLIN(2526)					bool _hx_tmp4;
HXDLIN(2526)					if ((e->outIdx >= 0)) {
HXLINE(2526)						_hx_tmp4 = (e->windDelta != 0);
            					}
            					else {
HXLINE(2526)						_hx_tmp4 = false;
            					}
HXDLIN(2526)					if (_hx_tmp4) {
HXLINE(2526)						_hx_tmp3 = ::hx::IsNotNull( ePrev );
            					}
            					else {
HXLINE(2526)						_hx_tmp3 = false;
            					}
HXDLIN(2526)					if (_hx_tmp3) {
HXLINE(2526)						_hx_tmp2 = (ePrev->outIdx >= 0);
            					}
            					else {
HXLINE(2526)						_hx_tmp2 = false;
            					}
HXDLIN(2526)					if (_hx_tmp2) {
HXLINE(2526)						_hx_tmp1 = (ePrev->currX == e->currX);
            					}
            					else {
HXLINE(2526)						_hx_tmp1 = false;
            					}
HXDLIN(2526)					if (_hx_tmp1) {
HXLINE(2526)						_hx_tmp = (ePrev->windDelta != 0);
            					}
            					else {
HXLINE(2526)						_hx_tmp = false;
            					}
HXDLIN(2526)					if (_hx_tmp) {
HXLINE(2528)						 ::h2d::col::IPoint ip =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->currX,e->currY);
HXLINE(2529)						 ::hxd::clipper::_Clipper::OutPt op = this->AddOutPt(ePrev,ip);
HXLINE(2530)						 ::hxd::clipper::_Clipper::OutPt op2 = this->AddOutPt(e,ip);
HXLINE(2531)						this->AddJoin(op,op2,ip);
            					}
            				}
HXLINE(2535)				e = e->nextInAEL;
            			}
            		}
HXLINE(2540)		this->ProcessHorizontals(true);
HXLINE(2543)		e = this->m_ActiveEdges;
HXLINE(2544)		while(::hx::IsNotNull( e )){
HXLINE(2546)			bool _hx_tmp;
HXDLIN(2546)			if ((e->topY == topY)) {
HXLINE(2546)				_hx_tmp = ::hx::IsNotNull( e->nextInLML );
            			}
            			else {
HXLINE(2546)				_hx_tmp = false;
            			}
HXDLIN(2546)			if (_hx_tmp) {
HXLINE(2548)				 ::hxd::clipper::_Clipper::OutPt op = null();
HXLINE(2549)				if ((e->outIdx >= 0)) {
HXLINE(2550)					op = this->AddOutPt(e, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->topX,e->topY));
            				}
HXLINE(2551)				e = this->UpdateEdgeIntoAEL(e);
HXLINE(2554)				 ::hxd::clipper::_Clipper::TEdge ePrev = e->prevInAEL;
HXLINE(2555)				 ::hxd::clipper::_Clipper::TEdge eNext = e->nextInAEL;
HXLINE(2556)				bool _hx_tmp;
HXDLIN(2556)				bool _hx_tmp1;
HXDLIN(2556)				bool _hx_tmp2;
HXDLIN(2556)				bool _hx_tmp3;
HXDLIN(2556)				bool _hx_tmp4;
HXDLIN(2556)				bool _hx_tmp5;
HXDLIN(2556)				bool _hx_tmp6;
HXDLIN(2556)				bool _hx_tmp7;
HXDLIN(2556)				if (::hx::IsNotNull( ePrev )) {
HXLINE(2556)					_hx_tmp7 = (ePrev->currX == e->botX);
            				}
            				else {
HXLINE(2556)					_hx_tmp7 = false;
            				}
HXDLIN(2556)				if (_hx_tmp7) {
HXLINE(2556)					_hx_tmp6 = (ePrev->currY == e->botY);
            				}
            				else {
HXLINE(2556)					_hx_tmp6 = false;
            				}
HXDLIN(2556)				if (_hx_tmp6) {
HXLINE(2556)					_hx_tmp5 = ::hx::IsNotNull( op );
            				}
            				else {
HXLINE(2556)					_hx_tmp5 = false;
            				}
HXDLIN(2556)				if (_hx_tmp5) {
HXLINE(2556)					_hx_tmp4 = (ePrev->outIdx >= 0);
            				}
            				else {
HXLINE(2556)					_hx_tmp4 = false;
            				}
HXDLIN(2556)				if (_hx_tmp4) {
HXLINE(2556)					_hx_tmp3 = (ePrev->currY > ePrev->topY);
            				}
            				else {
HXLINE(2556)					_hx_tmp3 = false;
            				}
HXDLIN(2556)				if (_hx_tmp3) {
HXLINE(2556)					_hx_tmp2 = ((e->deltaY * ePrev->deltaX) == (e->deltaX * ePrev->deltaY));
            				}
            				else {
HXLINE(2556)					_hx_tmp2 = false;
            				}
HXDLIN(2556)				if (_hx_tmp2) {
HXLINE(2556)					_hx_tmp1 = (e->windDelta != 0);
            				}
            				else {
HXLINE(2556)					_hx_tmp1 = false;
            				}
HXDLIN(2556)				if (_hx_tmp1) {
HXLINE(2556)					_hx_tmp = (ePrev->windDelta != 0);
            				}
            				else {
HXLINE(2556)					_hx_tmp = false;
            				}
HXDLIN(2556)				if (_hx_tmp) {
HXLINE(2558)					 ::hxd::clipper::_Clipper::OutPt op2 = this->AddOutPt(ePrev, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->botX,e->botY));
HXLINE(2559)					this->AddJoin(op,op2, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->topX,e->topY));
            				}
            				else {
HXLINE(2561)					bool _hx_tmp;
HXDLIN(2561)					bool _hx_tmp1;
HXDLIN(2561)					bool _hx_tmp2;
HXDLIN(2561)					bool _hx_tmp3;
HXDLIN(2561)					bool _hx_tmp4;
HXDLIN(2561)					bool _hx_tmp5;
HXDLIN(2561)					bool _hx_tmp6;
HXDLIN(2561)					bool _hx_tmp7;
HXDLIN(2561)					if (::hx::IsNotNull( eNext )) {
HXLINE(2561)						_hx_tmp7 = (eNext->currX == e->botX);
            					}
            					else {
HXLINE(2561)						_hx_tmp7 = false;
            					}
HXDLIN(2561)					if (_hx_tmp7) {
HXLINE(2561)						_hx_tmp6 = (eNext->currY == e->botY);
            					}
            					else {
HXLINE(2561)						_hx_tmp6 = false;
            					}
HXDLIN(2561)					if (_hx_tmp6) {
HXLINE(2561)						_hx_tmp5 = ::hx::IsNotNull( op );
            					}
            					else {
HXLINE(2561)						_hx_tmp5 = false;
            					}
HXDLIN(2561)					if (_hx_tmp5) {
HXLINE(2561)						_hx_tmp4 = (eNext->outIdx >= 0);
            					}
            					else {
HXLINE(2561)						_hx_tmp4 = false;
            					}
HXDLIN(2561)					if (_hx_tmp4) {
HXLINE(2561)						_hx_tmp3 = (eNext->currY > eNext->topY);
            					}
            					else {
HXLINE(2561)						_hx_tmp3 = false;
            					}
HXDLIN(2561)					if (_hx_tmp3) {
HXLINE(2561)						_hx_tmp2 = ((e->deltaY * eNext->deltaX) == (e->deltaX * eNext->deltaY));
            					}
            					else {
HXLINE(2561)						_hx_tmp2 = false;
            					}
HXDLIN(2561)					if (_hx_tmp2) {
HXLINE(2561)						_hx_tmp1 = (e->windDelta != 0);
            					}
            					else {
HXLINE(2561)						_hx_tmp1 = false;
            					}
HXDLIN(2561)					if (_hx_tmp1) {
HXLINE(2561)						_hx_tmp = (eNext->windDelta != 0);
            					}
            					else {
HXLINE(2561)						_hx_tmp = false;
            					}
HXDLIN(2561)					if (_hx_tmp) {
HXLINE(2563)						 ::hxd::clipper::_Clipper::OutPt op2 = this->AddOutPt(eNext, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->botX,e->botY));
HXLINE(2564)						this->AddJoin(op,op2, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->topX,e->topY));
            					}
            				}
            			}
HXLINE(2567)			e = e->nextInAEL;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,ProcessEdgesAtTopOfScanbeam,(void))

void Clipper_obj::DoMaxima( ::hxd::clipper::_Clipper::TEdge e){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_2573_DoMaxima)
HXLINE(2574)		 ::hxd::clipper::_Clipper::TEdge eMaxPair = this->GetMaximaPair(e);
HXLINE(2575)		if (::hx::IsNull( eMaxPair )) {
HXLINE(2577)			if ((e->outIdx >= 0)) {
HXLINE(2578)				this->AddOutPt(e, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->topX,e->topY));
            			}
HXLINE(2579)			this->DeleteFromAEL(e);
HXLINE(2580)			return;
            		}
HXLINE(2583)		 ::hxd::clipper::_Clipper::TEdge eNext = e->nextInAEL;
HXLINE(2584)		while(true){
HXLINE(2584)			bool _hx_tmp;
HXDLIN(2584)			if (::hx::IsNotNull( eNext )) {
HXLINE(2584)				_hx_tmp = ::hx::IsInstanceNotEq( eNext,eMaxPair );
            			}
            			else {
HXLINE(2584)				_hx_tmp = false;
            			}
HXDLIN(2584)			if (!(_hx_tmp)) {
HXLINE(2584)				goto _hx_goto_106;
            			}
HXLINE(2586)			this->IntersectEdges(e,eNext, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->topX,e->topY));
HXLINE(2587)			this->SwapPositionsInAEL(e,eNext);
HXLINE(2588)			eNext = e->nextInAEL;
            		}
            		_hx_goto_106:;
HXLINE(2591)		bool _hx_tmp;
HXDLIN(2591)		if ((e->outIdx == -1)) {
HXLINE(2591)			_hx_tmp = (eMaxPair->outIdx == -1);
            		}
            		else {
HXLINE(2591)			_hx_tmp = false;
            		}
HXDLIN(2591)		if (_hx_tmp) {
HXLINE(2593)			this->DeleteFromAEL(e);
HXLINE(2594)			this->DeleteFromAEL(eMaxPair);
            		}
            		else {
HXLINE(2596)			bool _hx_tmp;
HXDLIN(2596)			if ((e->outIdx >= 0)) {
HXLINE(2596)				_hx_tmp = (eMaxPair->outIdx >= 0);
            			}
            			else {
HXLINE(2596)				_hx_tmp = false;
            			}
HXDLIN(2596)			if (_hx_tmp) {
HXLINE(2598)				if ((e->outIdx >= 0)) {
HXLINE(2598)					this->AddLocalMaxPoly(e,eMaxPair, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e->topX,e->topY));
            				}
HXLINE(2599)				this->DeleteFromAEL(e);
HXLINE(2600)				this->DeleteFromAEL(eMaxPair);
            			}
            			else {
HXLINE(2602)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("DoMaxima error",8c,5c,f9,91)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,DoMaxima,(void))

void Clipper_obj::reversePolygons(::Array< ::Dynamic> polys){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2608_reversePolygons)
HXDLIN(2608)		int _g_i = 0;
HXDLIN(2608)		::Array< ::Dynamic> _g_a = polys;
HXDLIN(2608)		int _g_l = _g_a->length;
HXDLIN(2608)		while((_g_i < _g_l)){
HXDLIN(2608)			_g_i = (_g_i + 1);
HXDLIN(2608)			::Array< ::Dynamic> p = _g_a->__get((_g_i - 1)).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(2608)			::h2d::col::_IPolygon::IPolygon_Impl__obj::reverse(p);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,reversePolygons,(void))

int Clipper_obj::PointCount( ::hxd::clipper::_Clipper::OutPt pts){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2619_PointCount)
HXLINE(2620)		if (::hx::IsNull( pts )) {
HXLINE(2620)			return 0;
            		}
HXLINE(2621)		int result = 0;
HXLINE(2622)		 ::hxd::clipper::_Clipper::OutPt p = pts;
HXLINE(2623)		while(true){
HXLINE(2625)			result = (result + 1);
HXLINE(2626)			p = p->next;
HXLINE(2623)			if (!(::hx::IsInstanceNotEq( p,pts ))) {
HXLINE(2623)				goto _hx_goto_110;
            			}
            		}
            		_hx_goto_110:;
HXLINE(2629)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,PointCount,return )

::Array< ::Dynamic> Clipper_obj::BuildResult(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2634_BuildResult)
HXLINE(2635)		::Array< ::Dynamic> solution = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(2636)		{
HXLINE(2636)			int _g = 0;
HXDLIN(2636)			::Array< ::Dynamic> _g1 = this->m_PolyOuts;
HXDLIN(2636)			while((_g < _g1->length)){
HXLINE(2636)				 ::hxd::clipper::_Clipper::OutRec outRec = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXDLIN(2636)				_g = (_g + 1);
HXLINE(2638)				if (::hx::IsNull( outRec->pts )) {
HXLINE(2638)					continue;
            				}
HXLINE(2639)				bool _hx_tmp;
HXDLIN(2639)				if (::hx::IsPointerEq( this->resultKind,::hxd::clipper::ResultKind_obj::NoHoles_dyn() )) {
HXLINE(2639)					_hx_tmp = outRec->isHole;
            				}
            				else {
HXLINE(2639)					_hx_tmp = false;
            				}
HXDLIN(2639)				if (_hx_tmp) {
HXLINE(2639)					continue;
            				}
HXLINE(2640)				bool _hx_tmp1;
HXDLIN(2640)				if (::hx::IsPointerEq( this->resultKind,::hxd::clipper::ResultKind_obj::HolesOnly_dyn() )) {
HXLINE(2640)					_hx_tmp1 = !(outRec->isHole);
            				}
            				else {
HXLINE(2640)					_hx_tmp1 = false;
            				}
HXDLIN(2640)				if (_hx_tmp1) {
HXLINE(2640)					continue;
            				}
HXLINE(2641)				 ::hxd::clipper::_Clipper::OutPt p = outRec->pts->prev;
HXLINE(2642)				int cnt = this->PointCount(p);
HXLINE(2643)				if ((cnt < 2)) {
HXLINE(2643)					continue;
            				}
HXLINE(2644)				::Array< ::Dynamic> points = null();
HXDLIN(2644)				::Array< ::Dynamic> this1;
HXDLIN(2644)				if (::hx::IsNull( points )) {
HXLINE(2644)					this1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE(2644)					this1 = points;
            				}
HXDLIN(2644)				::Array< ::Dynamic> pg = this1;
HXLINE(2645)				{
HXLINE(2645)					int _g2 = 0;
HXDLIN(2645)					int _g3 = cnt;
HXDLIN(2645)					while((_g2 < _g3)){
HXLINE(2645)						_g2 = (_g2 + 1);
HXDLIN(2645)						int j = (_g2 - 1);
HXLINE(2647)						pg->push(p->pt);
HXLINE(2648)						p = p->prev;
            					}
            				}
HXLINE(2650)				solution->push(pg);
            			}
            		}
HXLINE(2652)		return solution;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Clipper_obj,BuildResult,return )

void Clipper_obj::BuildResult2( ::hxd::clipper::_Clipper::PolyTree polytree){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_2657_BuildResult2)
HXLINE(2658)		polytree->clear();
HXLINE(2661)		{
HXLINE(2661)			int _g = 0;
HXDLIN(2661)			::Array< ::Dynamic> _g1 = this->m_PolyOuts;
HXDLIN(2661)			while((_g < _g1->length)){
HXLINE(2661)				 ::hxd::clipper::_Clipper::OutRec outRec = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXDLIN(2661)				_g = (_g + 1);
HXLINE(2663)				int cnt = this->PointCount(outRec->pts);
HXLINE(2664)				if ((cnt < 3)) {
HXLINE(2664)					continue;
            				}
HXLINE(2665)				this->FixHoleLinkage(outRec);
HXLINE(2666)				 ::hxd::clipper::_Clipper::PolyNode pn =  ::hxd::clipper::_Clipper::PolyNode_obj::__alloc( HX_CTX );
HXLINE(2667)				polytree->allPolys->push(pn);
HXLINE(2668)				outRec->polyNode = pn;
HXLINE(2669)				 ::hxd::clipper::_Clipper::OutPt op = outRec->pts->prev;
HXLINE(2670)				{
HXLINE(2670)					int _g2 = 0;
HXDLIN(2670)					int _g3 = cnt;
HXDLIN(2670)					while((_g2 < _g3)){
HXLINE(2670)						_g2 = (_g2 + 1);
HXDLIN(2670)						int j = (_g2 - 1);
HXLINE(2672)						pn->polygon->push(op->pt);
HXLINE(2673)						op = op->prev;
            					}
            				}
            			}
            		}
HXLINE(2678)		{
HXLINE(2678)			int _g2 = 0;
HXDLIN(2678)			::Array< ::Dynamic> _g3 = this->m_PolyOuts;
HXDLIN(2678)			while((_g2 < _g3->length)){
HXLINE(2678)				 ::hxd::clipper::_Clipper::OutRec outRec = _g3->__get(_g2).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXDLIN(2678)				_g2 = (_g2 + 1);
HXLINE(2680)				if (::hx::IsNull( outRec->polyNode )) {
HXLINE(2680)					continue;
            				}
            				else {
HXLINE(2681)					bool _hx_tmp;
HXDLIN(2681)					if (::hx::IsNotNull( outRec->firstLeft )) {
HXLINE(2681)						_hx_tmp = ::hx::IsNotNull( outRec->firstLeft->polyNode );
            					}
            					else {
HXLINE(2681)						_hx_tmp = false;
            					}
HXDLIN(2681)					if (_hx_tmp) {
HXLINE(2682)						outRec->firstLeft->polyNode->addChild(outRec->polyNode);
            					}
            					else {
HXLINE(2684)						polytree->addChild(outRec->polyNode);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,BuildResult2,(void))

void Clipper_obj::FixupOutPolygon( ::hxd::clipper::_Clipper::OutRec outRec){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2690_FixupOutPolygon)
HXLINE(2693)		 ::hxd::clipper::_Clipper::OutPt lastOK = null();
HXLINE(2694)		outRec->bottomPt = null();
HXLINE(2695)		 ::hxd::clipper::_Clipper::OutPt pp = outRec->pts;
HXLINE(2696)		while(true){
HXLINE(2698)			bool _hx_tmp;
HXDLIN(2698)			if (::hx::IsInstanceNotEq( pp->prev,pp )) {
HXLINE(2698)				_hx_tmp = ::hx::IsInstanceEq( pp->prev,pp->next );
            			}
            			else {
HXLINE(2698)				_hx_tmp = true;
            			}
HXDLIN(2698)			if (_hx_tmp) {
HXLINE(2700)				outRec->pts = null();
HXLINE(2701)				return;
            			}
HXLINE(2704)			bool _hx_tmp1;
HXDLIN(2704)			bool _hx_tmp2;
HXDLIN(2704)			 ::h2d::col::IPoint pt1 = pp->pt;
HXDLIN(2704)			 ::h2d::col::IPoint pt2 = pp->next->pt;
HXDLIN(2704)			bool _hx_tmp3;
HXDLIN(2704)			if ((pt1->x == pt2->x)) {
HXLINE(2704)				_hx_tmp3 = (pt1->y == pt2->y);
            			}
            			else {
HXLINE(2704)				_hx_tmp3 = false;
            			}
HXDLIN(2704)			if (!(_hx_tmp3)) {
HXLINE(2704)				 ::h2d::col::IPoint pt1 = pp->pt;
HXDLIN(2704)				 ::h2d::col::IPoint pt2 = pp->prev->pt;
HXDLIN(2704)				if ((pt1->x == pt2->x)) {
HXLINE(2704)					_hx_tmp2 = (pt1->y == pt2->y);
            				}
            				else {
HXLINE(2704)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE(2704)				_hx_tmp2 = true;
            			}
HXDLIN(2704)			if (!(_hx_tmp2)) {
HXLINE(2704)				 ::h2d::col::IPoint pt1 = pp->prev->pt;
HXDLIN(2704)				 ::h2d::col::IPoint pt2 = pp->pt;
HXDLIN(2704)				 ::h2d::col::IPoint pt3 = pp->next->pt;
HXDLIN(2704)				if (((((pt1->y - pt2->y) * (pt2->x - pt3->x)) - ((pt1->x - pt2->x) * (pt2->y - pt3->y))) == 0)) {
HXLINE(2704)					if (this->preserveCollinear) {
HXLINE(2704)						_hx_tmp1 = !(this->Pt2IsBetweenPt1AndPt3(pp->prev->pt,pp->pt,pp->next->pt));
            					}
            					else {
HXLINE(2704)						_hx_tmp1 = true;
            					}
            				}
            				else {
HXLINE(2704)					_hx_tmp1 = false;
            				}
            			}
            			else {
HXLINE(2704)				_hx_tmp1 = true;
            			}
HXDLIN(2704)			if (_hx_tmp1) {
HXLINE(2706)				lastOK = null();
HXLINE(2707)				 ::hxd::clipper::_Clipper::OutPt tmp = pp;
HXLINE(2708)				pp->prev->next = pp->next;
HXLINE(2709)				pp->next->prev = pp->prev;
HXLINE(2710)				pp = pp->prev;
HXLINE(2711)				tmp = null();
            			}
            			else {
HXLINE(2713)				if (::hx::IsInstanceEq( pp,lastOK )) {
HXLINE(2714)					goto _hx_goto_119;
            				}
            				else {
HXLINE(2717)					if (::hx::IsNull( lastOK )) {
HXLINE(2717)						lastOK = pp;
            					}
HXLINE(2718)					pp = pp->next;
            				}
            			}
            		}
            		_hx_goto_119:;
HXLINE(2721)		outRec->pts = pp;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,FixupOutPolygon,(void))

 ::hxd::clipper::_Clipper::OutPt Clipper_obj::DupOutPt( ::hxd::clipper::_Clipper::OutPt outPt,bool InsertAfter){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_2726_DupOutPt)
HXLINE(2727)		 ::hxd::clipper::_Clipper::OutPt result =  ::hxd::clipper::_Clipper::OutPt_obj::__alloc( HX_CTX );
HXLINE(2728)		result->pt = outPt->pt;
HXLINE(2729)		result->idx = outPt->idx;
HXLINE(2730)		if (InsertAfter) {
HXLINE(2732)			result->next = outPt->next;
HXLINE(2733)			result->prev = outPt;
HXLINE(2734)			outPt->next->prev = result;
HXLINE(2735)			outPt->next = result;
            		}
            		else {
HXLINE(2739)			result->prev = outPt->prev;
HXLINE(2740)			result->next = outPt;
HXLINE(2741)			outPt->prev->next = result;
HXLINE(2742)			outPt->prev = result;
            		}
HXLINE(2744)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,DupOutPt,return )

 ::Dynamic Clipper_obj::GetOverlap(int a1,int a2,int b1,int b2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2749_GetOverlap)
HXLINE(2750)		int Left;
HXLINE(2751)		int Right;
HXLINE(2753)		if ((a1 < a2)) {
HXLINE(2755)			if ((b1 < b2)) {
HXLINE(2756)				if ((a1 < b1)) {
HXLINE(2756)					Left = b1;
            				}
            				else {
HXLINE(2756)					Left = a1;
            				}
HXLINE(2757)				if ((a2 > b2)) {
HXLINE(2757)					Right = b2;
            				}
            				else {
HXLINE(2757)					Right = a2;
            				}
            			}
            			else {
HXLINE(2760)				if ((a1 < b2)) {
HXLINE(2760)					Left = b2;
            				}
            				else {
HXLINE(2760)					Left = a1;
            				}
HXLINE(2761)				if ((a2 > b1)) {
HXLINE(2761)					Right = b1;
            				}
            				else {
HXLINE(2761)					Right = a2;
            				}
            			}
            		}
            		else {
HXLINE(2766)			if ((b1 < b2)) {
HXLINE(2767)				if ((a2 < b1)) {
HXLINE(2767)					Left = b1;
            				}
            				else {
HXLINE(2767)					Left = a2;
            				}
HXLINE(2768)				if ((a1 > b2)) {
HXLINE(2768)					Right = b2;
            				}
            				else {
HXLINE(2768)					Right = a1;
            				}
            			}
            			else {
HXLINE(2771)				if ((a2 < b2)) {
HXLINE(2771)					Left = b2;
            				}
            				else {
HXLINE(2771)					Left = a2;
            				}
HXLINE(2772)				if ((a1 > b1)) {
HXLINE(2772)					Right = b1;
            				}
            				else {
HXLINE(2772)					Right = a1;
            				}
            			}
            		}
HXLINE(2775)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("right",dc,0b,64,e9),Right)
            			->setFixed(1,HX_("done",82,f0,6d,42),(Left < Right))
            			->setFixed(2,HX_("left",07,08,b0,47),Left));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Clipper_obj,GetOverlap,return )

bool Clipper_obj::JoinHorz( ::hxd::clipper::_Clipper::OutPt op1, ::hxd::clipper::_Clipper::OutPt op1b, ::hxd::clipper::_Clipper::OutPt op2, ::hxd::clipper::_Clipper::OutPt op2b, ::h2d::col::IPoint pt,bool DiscardLeft){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2779_JoinHorz)
HXLINE(2780)		 ::hxd::clipper::_Clipper::Direction Dir1;
HXDLIN(2780)		if ((op1->pt->x > op1b->pt->x)) {
HXLINE(2780)			Dir1 = ::hxd::clipper::_Clipper::Direction_obj::RightToLeft_dyn();
            		}
            		else {
HXLINE(2780)			Dir1 = ::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn();
            		}
HXLINE(2781)		 ::hxd::clipper::_Clipper::Direction Dir2;
HXDLIN(2781)		if ((op2->pt->x > op2b->pt->x)) {
HXLINE(2781)			Dir2 = ::hxd::clipper::_Clipper::Direction_obj::RightToLeft_dyn();
            		}
            		else {
HXLINE(2781)			Dir2 = ::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn();
            		}
HXLINE(2782)		if (::hx::IsPointerEq( Dir1,Dir2 )) {
HXLINE(2782)			return false;
            		}
HXLINE(2789)		if (::hx::IsPointerEq( Dir1,::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn() )) {
HXLINE(2791)			while(true){
HXLINE(2791)				bool _hx_tmp;
HXDLIN(2791)				bool _hx_tmp1;
HXDLIN(2791)				if ((op1->next->pt->x <= pt->x)) {
HXLINE(2791)					_hx_tmp1 = (op1->next->pt->x >= op1->pt->x);
            				}
            				else {
HXLINE(2791)					_hx_tmp1 = false;
            				}
HXDLIN(2791)				if (_hx_tmp1) {
HXLINE(2791)					_hx_tmp = (op1->next->pt->y == pt->y);
            				}
            				else {
HXLINE(2791)					_hx_tmp = false;
            				}
HXDLIN(2791)				if (!(_hx_tmp)) {
HXLINE(2791)					goto _hx_goto_123;
            				}
HXLINE(2792)				op1 = op1->next;
            			}
            			_hx_goto_123:;
HXLINE(2793)			bool _hx_tmp;
HXDLIN(2793)			if (DiscardLeft) {
HXLINE(2793)				_hx_tmp = (op1->pt->x != pt->x);
            			}
            			else {
HXLINE(2793)				_hx_tmp = false;
            			}
HXDLIN(2793)			if (_hx_tmp) {
HXLINE(2794)				op1 = op1->next;
            			}
HXLINE(2795)			op1b = this->DupOutPt(op1,!(DiscardLeft));
HXLINE(2796)			if (::hx::IsInstanceNotEq( op1b->pt,pt )) {
HXLINE(2798)				op1 = op1b;
HXLINE(2799)				op1->pt = pt;
HXLINE(2800)				op1b = this->DupOutPt(op1,!(DiscardLeft));
            			}
            		}
            		else {
HXLINE(2805)			while(true){
HXLINE(2805)				bool _hx_tmp;
HXDLIN(2805)				bool _hx_tmp1;
HXDLIN(2805)				if ((op1->next->pt->x >= pt->x)) {
HXLINE(2805)					_hx_tmp1 = (op1->next->pt->x <= op1->pt->x);
            				}
            				else {
HXLINE(2805)					_hx_tmp1 = false;
            				}
HXDLIN(2805)				if (_hx_tmp1) {
HXLINE(2805)					_hx_tmp = (op1->next->pt->y == pt->y);
            				}
            				else {
HXLINE(2805)					_hx_tmp = false;
            				}
HXDLIN(2805)				if (!(_hx_tmp)) {
HXLINE(2805)					goto _hx_goto_124;
            				}
HXLINE(2807)				op1 = op1->next;
            			}
            			_hx_goto_124:;
HXLINE(2808)			bool _hx_tmp;
HXDLIN(2808)			if (!(DiscardLeft)) {
HXLINE(2808)				_hx_tmp = (op1->pt->x != pt->x);
            			}
            			else {
HXLINE(2808)				_hx_tmp = false;
            			}
HXDLIN(2808)			if (_hx_tmp) {
HXLINE(2808)				op1 = op1->next;
            			}
HXLINE(2809)			op1b = this->DupOutPt(op1,DiscardLeft);
HXLINE(2810)			if (::hx::IsInstanceNotEq( op1b->pt,pt )) {
HXLINE(2812)				op1 = op1b;
HXLINE(2813)				op1->pt = pt;
HXLINE(2814)				op1b = this->DupOutPt(op1,DiscardLeft);
            			}
            		}
HXLINE(2818)		if (::hx::IsPointerEq( Dir2,::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn() )) {
HXLINE(2820)			while(true){
HXLINE(2820)				bool _hx_tmp;
HXDLIN(2820)				bool _hx_tmp1;
HXDLIN(2820)				if ((op2->next->pt->x <= pt->x)) {
HXLINE(2820)					_hx_tmp1 = (op2->next->pt->x >= op2->pt->x);
            				}
            				else {
HXLINE(2820)					_hx_tmp1 = false;
            				}
HXDLIN(2820)				if (_hx_tmp1) {
HXLINE(2820)					_hx_tmp = (op2->next->pt->y == pt->y);
            				}
            				else {
HXLINE(2820)					_hx_tmp = false;
            				}
HXDLIN(2820)				if (!(_hx_tmp)) {
HXLINE(2820)					goto _hx_goto_125;
            				}
HXLINE(2822)				op2 = op2->next;
            			}
            			_hx_goto_125:;
HXLINE(2823)			bool _hx_tmp;
HXDLIN(2823)			if (DiscardLeft) {
HXLINE(2823)				_hx_tmp = (op2->pt->x != pt->x);
            			}
            			else {
HXLINE(2823)				_hx_tmp = false;
            			}
HXDLIN(2823)			if (_hx_tmp) {
HXLINE(2823)				op2 = op2->next;
            			}
HXLINE(2824)			op2b = this->DupOutPt(op2,!(DiscardLeft));
HXLINE(2825)			if (::hx::IsInstanceNotEq( op2b->pt,pt )) {
HXLINE(2827)				op2 = op2b;
HXLINE(2828)				op2->pt = pt;
HXLINE(2829)				op2b = this->DupOutPt(op2,!(DiscardLeft));
            			}
            		}
            		else {
HXLINE(2833)			while(true){
HXLINE(2833)				bool _hx_tmp;
HXDLIN(2833)				bool _hx_tmp1;
HXDLIN(2833)				if ((op2->next->pt->x >= pt->x)) {
HXLINE(2833)					_hx_tmp1 = (op2->next->pt->x <= op2->pt->x);
            				}
            				else {
HXLINE(2833)					_hx_tmp1 = false;
            				}
HXDLIN(2833)				if (_hx_tmp1) {
HXLINE(2833)					_hx_tmp = (op2->next->pt->y == pt->y);
            				}
            				else {
HXLINE(2833)					_hx_tmp = false;
            				}
HXDLIN(2833)				if (!(_hx_tmp)) {
HXLINE(2833)					goto _hx_goto_126;
            				}
HXLINE(2834)				op2 = op2->next;
            			}
            			_hx_goto_126:;
HXLINE(2835)			bool _hx_tmp;
HXDLIN(2835)			if (!(DiscardLeft)) {
HXLINE(2835)				_hx_tmp = (op2->pt->x != pt->x);
            			}
            			else {
HXLINE(2835)				_hx_tmp = false;
            			}
HXDLIN(2835)			if (_hx_tmp) {
HXLINE(2835)				op2 = op2->next;
            			}
HXLINE(2836)			op2b = this->DupOutPt(op2,DiscardLeft);
HXLINE(2837)			if (::hx::IsInstanceNotEq( op2b->pt,pt )) {
HXLINE(2839)				op2 = op2b;
HXLINE(2840)				op2->pt = pt;
HXLINE(2841)				op2b = this->DupOutPt(op2,DiscardLeft);
            			}
            		}
HXLINE(2845)		if ((::hx::IsPointerEq( Dir1,::hxd::clipper::_Clipper::Direction_obj::LeftToRight_dyn() ) == DiscardLeft)) {
HXLINE(2847)			op1->prev = op2;
HXLINE(2848)			op2->next = op1;
HXLINE(2849)			op1b->next = op2b;
HXLINE(2850)			op2b->prev = op1b;
            		}
            		else {
HXLINE(2854)			op1->next = op2;
HXLINE(2855)			op2->prev = op1;
HXLINE(2856)			op1b->prev = op2b;
HXLINE(2857)			op2b->next = op1b;
            		}
HXLINE(2860)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC6(Clipper_obj,JoinHorz,return )

bool Clipper_obj::JoinPoints( ::hxd::clipper::_Clipper::Join j, ::hxd::clipper::_Clipper::OutRec outRec1, ::hxd::clipper::_Clipper::OutRec outRec2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2866_JoinPoints)
HXLINE(2867)		 ::hxd::clipper::_Clipper::OutPt op1 = j->outPt1;
HXDLIN(2867)		 ::hxd::clipper::_Clipper::OutPt op1b;
HXLINE(2868)		 ::hxd::clipper::_Clipper::OutPt op2 = j->outPt2;
HXDLIN(2868)		 ::hxd::clipper::_Clipper::OutPt op2b;
HXLINE(2877)		bool isHorizontal = (j->outPt1->pt->y == j->offPt->y);
HXLINE(2878)		bool _hx_tmp;
HXDLIN(2878)		bool _hx_tmp1;
HXDLIN(2878)		if (isHorizontal) {
HXLINE(2878)			 ::h2d::col::IPoint pt1 = j->offPt;
HXDLIN(2878)			 ::h2d::col::IPoint pt2 = j->outPt1->pt;
HXDLIN(2878)			if ((pt1->x == pt2->x)) {
HXLINE(2878)				_hx_tmp1 = (pt1->y == pt2->y);
            			}
            			else {
HXLINE(2878)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE(2878)			_hx_tmp1 = false;
            		}
HXDLIN(2878)		if (_hx_tmp1) {
HXLINE(2878)			 ::h2d::col::IPoint pt1 = j->offPt;
HXDLIN(2878)			 ::h2d::col::IPoint pt2 = j->outPt2->pt;
HXDLIN(2878)			if ((pt1->x == pt2->x)) {
HXLINE(2878)				_hx_tmp = (pt1->y == pt2->y);
            			}
            			else {
HXLINE(2878)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(2878)			_hx_tmp = false;
            		}
HXDLIN(2878)		if (_hx_tmp) {
HXLINE(2881)			if (::hx::IsInstanceNotEq( outRec1,outRec2 )) {
HXLINE(2881)				return false;
            			}
HXLINE(2882)			op1b = j->outPt1->next;
HXLINE(2883)			while(true){
HXLINE(2883)				bool _hx_tmp;
HXDLIN(2883)				if (::hx::IsInstanceNotEq( op1b,op1 )) {
HXLINE(2883)					 ::h2d::col::IPoint pt1 = op1b->pt;
HXDLIN(2883)					 ::h2d::col::IPoint pt2 = j->offPt;
HXDLIN(2883)					if ((pt1->x == pt2->x)) {
HXLINE(2883)						_hx_tmp = (pt1->y == pt2->y);
            					}
            					else {
HXLINE(2883)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(2883)					_hx_tmp = false;
            				}
HXDLIN(2883)				if (!(_hx_tmp)) {
HXLINE(2883)					goto _hx_goto_128;
            				}
HXLINE(2884)				op1b = op1b->next;
            			}
            			_hx_goto_128:;
HXLINE(2885)			bool reverse1 = (op1b->pt->y > j->offPt->y);
HXLINE(2886)			op2b = j->outPt2->next;
HXLINE(2887)			while(true){
HXLINE(2887)				bool _hx_tmp;
HXDLIN(2887)				if (::hx::IsInstanceNotEq( op2b,op2 )) {
HXLINE(2887)					 ::h2d::col::IPoint pt1 = op2b->pt;
HXDLIN(2887)					 ::h2d::col::IPoint pt2 = j->offPt;
HXDLIN(2887)					if ((pt1->x == pt2->x)) {
HXLINE(2887)						_hx_tmp = (pt1->y == pt2->y);
            					}
            					else {
HXLINE(2887)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(2887)					_hx_tmp = false;
            				}
HXDLIN(2887)				if (!(_hx_tmp)) {
HXLINE(2887)					goto _hx_goto_129;
            				}
HXLINE(2888)				op2b = op2b->next;
            			}
            			_hx_goto_129:;
HXLINE(2889)			bool reverse2 = (op2b->pt->y > j->offPt->y);
HXLINE(2890)			if ((reverse1 == reverse2)) {
HXLINE(2890)				return false;
            			}
HXLINE(2891)			if (reverse1) {
HXLINE(2893)				op1b = this->DupOutPt(op1,false);
HXLINE(2894)				op2b = this->DupOutPt(op2,true);
HXLINE(2895)				op1->prev = op2;
HXLINE(2896)				op2->next = op1;
HXLINE(2897)				op1b->next = op2b;
HXLINE(2898)				op2b->prev = op1b;
HXLINE(2899)				j->outPt1 = op1;
HXLINE(2900)				j->outPt2 = op1b;
HXLINE(2901)				return true;
            			}
            			else {
HXLINE(2904)				op1b = this->DupOutPt(op1,true);
HXLINE(2905)				op2b = this->DupOutPt(op2,false);
HXLINE(2906)				op1->next = op2;
HXLINE(2907)				op2->prev = op1;
HXLINE(2908)				op1b->prev = op2b;
HXLINE(2909)				op2b->next = op1b;
HXLINE(2910)				j->outPt1 = op1;
HXLINE(2911)				j->outPt2 = op1b;
HXLINE(2912)				return true;
            			}
            		}
            		else {
HXLINE(2915)			if (isHorizontal) {
HXLINE(2920)				op1b = op1;
HXLINE(2921)				while(true){
HXLINE(2921)					bool _hx_tmp;
HXDLIN(2921)					bool _hx_tmp1;
HXDLIN(2921)					if ((op1->prev->pt->y == op1->pt->y)) {
HXLINE(2921)						_hx_tmp1 = ::hx::IsInstanceNotEq( op1->prev,op1b );
            					}
            					else {
HXLINE(2921)						_hx_tmp1 = false;
            					}
HXDLIN(2921)					if (_hx_tmp1) {
HXLINE(2921)						_hx_tmp = ::hx::IsInstanceNotEq( op1->prev,op2 );
            					}
            					else {
HXLINE(2921)						_hx_tmp = false;
            					}
HXDLIN(2921)					if (!(_hx_tmp)) {
HXLINE(2921)						goto _hx_goto_130;
            					}
HXLINE(2922)					op1 = op1->prev;
            				}
            				_hx_goto_130:;
HXLINE(2923)				while(true){
HXLINE(2923)					bool _hx_tmp;
HXDLIN(2923)					bool _hx_tmp1;
HXDLIN(2923)					if ((op1b->next->pt->y == op1b->pt->y)) {
HXLINE(2923)						_hx_tmp1 = ::hx::IsInstanceNotEq( op1b->next,op1 );
            					}
            					else {
HXLINE(2923)						_hx_tmp1 = false;
            					}
HXDLIN(2923)					if (_hx_tmp1) {
HXLINE(2923)						_hx_tmp = ::hx::IsInstanceNotEq( op1b->next,op2 );
            					}
            					else {
HXLINE(2923)						_hx_tmp = false;
            					}
HXDLIN(2923)					if (!(_hx_tmp)) {
HXLINE(2923)						goto _hx_goto_131;
            					}
HXLINE(2924)					op1b = op1b->next;
            				}
            				_hx_goto_131:;
HXLINE(2925)				bool _hx_tmp;
HXDLIN(2925)				if (::hx::IsInstanceNotEq( op1b->next,op1 )) {
HXLINE(2925)					_hx_tmp = ::hx::IsInstanceEq( op1b->next,op2 );
            				}
            				else {
HXLINE(2925)					_hx_tmp = true;
            				}
HXDLIN(2925)				if (_hx_tmp) {
HXLINE(2925)					return false;
            				}
HXLINE(2927)				op2b = op2;
HXLINE(2928)				while(true){
HXLINE(2928)					bool _hx_tmp;
HXDLIN(2928)					bool _hx_tmp1;
HXDLIN(2928)					if ((op2->prev->pt->y == op2->pt->y)) {
HXLINE(2928)						_hx_tmp1 = ::hx::IsInstanceNotEq( op2->prev,op2b );
            					}
            					else {
HXLINE(2928)						_hx_tmp1 = false;
            					}
HXDLIN(2928)					if (_hx_tmp1) {
HXLINE(2928)						_hx_tmp = ::hx::IsInstanceNotEq( op2->prev,op1b );
            					}
            					else {
HXLINE(2928)						_hx_tmp = false;
            					}
HXDLIN(2928)					if (!(_hx_tmp)) {
HXLINE(2928)						goto _hx_goto_132;
            					}
HXLINE(2929)					op2 = op2->prev;
            				}
            				_hx_goto_132:;
HXLINE(2930)				while(true){
HXLINE(2930)					bool _hx_tmp;
HXDLIN(2930)					bool _hx_tmp1;
HXDLIN(2930)					if ((op2b->next->pt->y == op2b->pt->y)) {
HXLINE(2930)						_hx_tmp1 = ::hx::IsInstanceNotEq( op2b->next,op2 );
            					}
            					else {
HXLINE(2930)						_hx_tmp1 = false;
            					}
HXDLIN(2930)					if (_hx_tmp1) {
HXLINE(2930)						_hx_tmp = ::hx::IsInstanceNotEq( op2b->next,op1 );
            					}
            					else {
HXLINE(2930)						_hx_tmp = false;
            					}
HXDLIN(2930)					if (!(_hx_tmp)) {
HXLINE(2930)						goto _hx_goto_133;
            					}
HXLINE(2931)					op2b = op2b->next;
            				}
            				_hx_goto_133:;
HXLINE(2932)				bool _hx_tmp1;
HXDLIN(2932)				if (::hx::IsInstanceNotEq( op2b->next,op2 )) {
HXLINE(2932)					_hx_tmp1 = ::hx::IsInstanceEq( op2b->next,op1 );
            				}
            				else {
HXLINE(2932)					_hx_tmp1 = true;
            				}
HXDLIN(2932)				if (_hx_tmp1) {
HXLINE(2932)					return false;
            				}
HXLINE(2935)				 ::Dynamic out = this->GetOverlap(op1->pt->x,op1b->pt->x,op2->pt->x,op2b->pt->x);
HXLINE(2936)				if (!(( (bool)(out->__Field(HX_("done",82,f0,6d,42),::hx::paccDynamic)) ))) {
HXLINE(2937)					return false;
            				}
HXLINE(2938)				int Left = ( (int)(out->__Field(HX_("left",07,08,b0,47),::hx::paccDynamic)) );
HXLINE(2939)				int Right = ( (int)(out->__Field(HX_("right",dc,0b,64,e9),::hx::paccDynamic)) );
HXLINE(2944)				 ::h2d::col::IPoint Pt;
HXLINE(2945)				bool DiscardLeftSide;
HXLINE(2946)				bool _hx_tmp2;
HXDLIN(2946)				if ((op1->pt->x >= Left)) {
HXLINE(2946)					_hx_tmp2 = (op1->pt->x <= Right);
            				}
            				else {
HXLINE(2946)					_hx_tmp2 = false;
            				}
HXDLIN(2946)				if (_hx_tmp2) {
HXLINE(2948)					Pt = op1->pt;
HXDLIN(2948)					DiscardLeftSide = (op1->pt->x > op1b->pt->x);
            				}
            				else {
HXLINE(2950)					bool _hx_tmp;
HXDLIN(2950)					if ((op2->pt->x >= Left)) {
HXLINE(2950)						_hx_tmp = (op2->pt->x <= Right);
            					}
            					else {
HXLINE(2950)						_hx_tmp = false;
            					}
HXDLIN(2950)					if (_hx_tmp) {
HXLINE(2952)						Pt = op2->pt;
HXDLIN(2952)						DiscardLeftSide = (op2->pt->x > op2b->pt->x);
            					}
            					else {
HXLINE(2954)						bool _hx_tmp;
HXDLIN(2954)						if ((op1b->pt->x >= Left)) {
HXLINE(2954)							_hx_tmp = (op1b->pt->x <= Right);
            						}
            						else {
HXLINE(2954)							_hx_tmp = false;
            						}
HXDLIN(2954)						if (_hx_tmp) {
HXLINE(2956)							Pt = op1b->pt;
HXDLIN(2956)							DiscardLeftSide = (op1b->pt->x > op1->pt->x);
            						}
            						else {
HXLINE(2960)							Pt = op2b->pt;
HXDLIN(2960)							DiscardLeftSide = (op2b->pt->x > op2->pt->x);
            						}
            					}
            				}
HXLINE(2962)				j->outPt1 = op1;
HXLINE(2963)				j->outPt2 = op2;
HXLINE(2964)				return this->JoinHorz(op1,op1b,op2,op2b,Pt,DiscardLeftSide);
            			}
            			else {
HXLINE(2972)				op1b = op1->next;
HXLINE(2973)				while(true){
HXLINE(2973)					bool _hx_tmp;
HXDLIN(2973)					 ::h2d::col::IPoint pt1 = op1b->pt;
HXDLIN(2973)					 ::h2d::col::IPoint pt2 = op1->pt;
HXDLIN(2973)					bool _hx_tmp1;
HXDLIN(2973)					if ((pt1->x == pt2->x)) {
HXLINE(2973)						_hx_tmp1 = (pt1->y == pt2->y);
            					}
            					else {
HXLINE(2973)						_hx_tmp1 = false;
            					}
HXDLIN(2973)					if (_hx_tmp1) {
HXLINE(2973)						_hx_tmp = ::hx::IsInstanceNotEq( op1b,op1 );
            					}
            					else {
HXLINE(2973)						_hx_tmp = false;
            					}
HXDLIN(2973)					if (!(_hx_tmp)) {
HXLINE(2973)						goto _hx_goto_134;
            					}
HXDLIN(2973)					op1b = op1b->next;
            				}
            				_hx_goto_134:;
HXLINE(2974)				bool Reverse1;
HXDLIN(2974)				if ((op1b->pt->y <= op1->pt->y)) {
HXLINE(2974)					 ::h2d::col::IPoint pt1 = op1->pt;
HXDLIN(2974)					 ::h2d::col::IPoint pt2 = op1b->pt;
HXDLIN(2974)					 ::h2d::col::IPoint pt3 = j->offPt;
HXDLIN(2974)					Reverse1 = ((((pt1->y - pt2->y) * (pt2->x - pt3->x)) - ((pt1->x - pt2->x) * (pt2->y - pt3->y))) != 0);
            				}
            				else {
HXLINE(2974)					Reverse1 = true;
            				}
HXLINE(2975)				if (Reverse1) {
HXLINE(2977)					op1b = op1->prev;
HXLINE(2978)					while(true){
HXLINE(2978)						bool _hx_tmp;
HXDLIN(2978)						 ::h2d::col::IPoint pt1 = op1b->pt;
HXDLIN(2978)						 ::h2d::col::IPoint pt2 = op1->pt;
HXDLIN(2978)						bool _hx_tmp1;
HXDLIN(2978)						if ((pt1->x == pt2->x)) {
HXLINE(2978)							_hx_tmp1 = (pt1->y == pt2->y);
            						}
            						else {
HXLINE(2978)							_hx_tmp1 = false;
            						}
HXDLIN(2978)						if (_hx_tmp1) {
HXLINE(2978)							_hx_tmp = ::hx::IsInstanceNotEq( op1b,op1 );
            						}
            						else {
HXLINE(2978)							_hx_tmp = false;
            						}
HXDLIN(2978)						if (!(_hx_tmp)) {
HXLINE(2978)							goto _hx_goto_135;
            						}
HXDLIN(2978)						op1b = op1b->prev;
            					}
            					_hx_goto_135:;
HXLINE(2979)					bool _hx_tmp;
HXDLIN(2979)					if ((op1b->pt->y <= op1->pt->y)) {
HXLINE(2980)						 ::h2d::col::IPoint pt1 = op1->pt;
HXDLIN(2980)						 ::h2d::col::IPoint pt2 = op1b->pt;
HXDLIN(2980)						 ::h2d::col::IPoint pt3 = j->offPt;
HXLINE(2979)						_hx_tmp = ((((pt1->y - pt2->y) * (pt2->x - pt3->x)) - ((pt1->x - pt2->x) * (pt2->y - pt3->y))) != 0);
            					}
            					else {
HXLINE(2979)						_hx_tmp = true;
            					}
HXDLIN(2979)					if (_hx_tmp) {
HXLINE(2980)						return false;
            					}
            				}
HXLINE(2983)				op2b = op2->next;
HXLINE(2984)				while(true){
HXLINE(2984)					bool _hx_tmp;
HXDLIN(2984)					 ::h2d::col::IPoint pt1 = op2b->pt;
HXDLIN(2984)					 ::h2d::col::IPoint pt2 = op2->pt;
HXDLIN(2984)					bool _hx_tmp1;
HXDLIN(2984)					if ((pt1->x == pt2->x)) {
HXLINE(2984)						_hx_tmp1 = (pt1->y == pt2->y);
            					}
            					else {
HXLINE(2984)						_hx_tmp1 = false;
            					}
HXDLIN(2984)					if (_hx_tmp1) {
HXLINE(2984)						_hx_tmp = ::hx::IsInstanceNotEq( op2b,op2 );
            					}
            					else {
HXLINE(2984)						_hx_tmp = false;
            					}
HXDLIN(2984)					if (!(_hx_tmp)) {
HXLINE(2984)						goto _hx_goto_136;
            					}
HXDLIN(2984)					op2b = op2b->next;
            				}
            				_hx_goto_136:;
HXLINE(2985)				bool Reverse2;
HXDLIN(2985)				if ((op2b->pt->y <= op2->pt->y)) {
HXLINE(2986)					 ::h2d::col::IPoint pt1 = op2->pt;
HXDLIN(2986)					 ::h2d::col::IPoint pt2 = op2b->pt;
HXDLIN(2986)					 ::h2d::col::IPoint pt3 = j->offPt;
HXLINE(2985)					Reverse2 = ((((pt1->y - pt2->y) * (pt2->x - pt3->x)) - ((pt1->x - pt2->x) * (pt2->y - pt3->y))) != 0);
            				}
            				else {
HXLINE(2985)					Reverse2 = true;
            				}
HXLINE(2987)				if (Reverse2) {
HXLINE(2989)					op2b = op2->prev;
HXLINE(2990)					while(true){
HXLINE(2990)						bool _hx_tmp;
HXDLIN(2990)						 ::h2d::col::IPoint pt1 = op2b->pt;
HXDLIN(2990)						 ::h2d::col::IPoint pt2 = op2->pt;
HXDLIN(2990)						bool _hx_tmp1;
HXDLIN(2990)						if ((pt1->x == pt2->x)) {
HXLINE(2990)							_hx_tmp1 = (pt1->y == pt2->y);
            						}
            						else {
HXLINE(2990)							_hx_tmp1 = false;
            						}
HXDLIN(2990)						if (_hx_tmp1) {
HXLINE(2990)							_hx_tmp = ::hx::IsInstanceNotEq( op2b,op2 );
            						}
            						else {
HXLINE(2990)							_hx_tmp = false;
            						}
HXDLIN(2990)						if (!(_hx_tmp)) {
HXLINE(2990)							goto _hx_goto_137;
            						}
HXDLIN(2990)						op2b = op2b->prev;
            					}
            					_hx_goto_137:;
HXLINE(2991)					bool _hx_tmp;
HXDLIN(2991)					if ((op2b->pt->y <= op2->pt->y)) {
HXLINE(2992)						 ::h2d::col::IPoint pt1 = op2->pt;
HXDLIN(2992)						 ::h2d::col::IPoint pt2 = op2b->pt;
HXDLIN(2992)						 ::h2d::col::IPoint pt3 = j->offPt;
HXLINE(2991)						_hx_tmp = ((((pt1->y - pt2->y) * (pt2->x - pt3->x)) - ((pt1->x - pt2->x) * (pt2->y - pt3->y))) != 0);
            					}
            					else {
HXLINE(2991)						_hx_tmp = true;
            					}
HXDLIN(2991)					if (_hx_tmp) {
HXLINE(2992)						return false;
            					}
            				}
HXLINE(2995)				bool _hx_tmp;
HXDLIN(2995)				bool _hx_tmp1;
HXDLIN(2995)				bool _hx_tmp2;
HXDLIN(2995)				if (::hx::IsInstanceNotEq( op1b,op1 )) {
HXLINE(2995)					_hx_tmp2 = ::hx::IsInstanceEq( op2b,op2 );
            				}
            				else {
HXLINE(2995)					_hx_tmp2 = true;
            				}
HXDLIN(2995)				if (!(_hx_tmp2)) {
HXLINE(2995)					_hx_tmp1 = ::hx::IsInstanceEq( op1b,op2b );
            				}
            				else {
HXLINE(2995)					_hx_tmp1 = true;
            				}
HXDLIN(2995)				if (!(_hx_tmp1)) {
HXLINE(2995)					if (::hx::IsInstanceEq( outRec1,outRec2 )) {
HXLINE(2995)						_hx_tmp = (Reverse1 == Reverse2);
            					}
            					else {
HXLINE(2995)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(2995)					_hx_tmp = true;
            				}
HXDLIN(2995)				if (_hx_tmp) {
HXLINE(2995)					return false;
            				}
HXLINE(2997)				if (Reverse1) {
HXLINE(2999)					op1b = this->DupOutPt(op1,false);
HXLINE(3000)					op2b = this->DupOutPt(op2,true);
HXLINE(3001)					op1->prev = op2;
HXLINE(3002)					op2->next = op1;
HXLINE(3003)					op1b->next = op2b;
HXLINE(3004)					op2b->prev = op1b;
HXLINE(3005)					j->outPt1 = op1;
HXLINE(3006)					j->outPt2 = op1b;
HXLINE(3007)					return true;
            				}
            				else {
HXLINE(3010)					op1b = this->DupOutPt(op1,true);
HXLINE(3011)					op2b = this->DupOutPt(op2,false);
HXLINE(3012)					op1->next = op2;
HXLINE(3013)					op2->prev = op1;
HXLINE(3014)					op1b->prev = op2b;
HXLINE(3015)					op2b->next = op1b;
HXLINE(3016)					j->outPt1 = op1;
HXLINE(3017)					j->outPt2 = op1b;
HXLINE(3018)					return true;
            				}
            			}
            		}
HXLINE(2878)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,JoinPoints,return )

int Clipper_obj::PointInPolygon( ::h2d::col::IPoint pt,::Array< ::Dynamic> pol){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3025_PointInPolygon)
HXLINE(3029)		int result = 0;
HXLINE(3030)		int cnt = pol->length;
HXLINE(3031)		if ((cnt < 3)) {
HXLINE(3031)			return 0;
            		}
HXLINE(3032)		 ::h2d::col::IPoint ip = pol->__get(0).StaticCast<  ::h2d::col::IPoint >();
HXLINE(3034)		{
HXLINE(3034)			int _g = 1;
HXDLIN(3034)			int _g1 = (cnt + 1);
HXDLIN(3034)			while((_g < _g1)){
HXLINE(3034)				_g = (_g + 1);
HXDLIN(3034)				int i = (_g - 1);
HXLINE(3036)				 ::h2d::col::IPoint ipNext;
HXDLIN(3036)				if ((i == cnt)) {
HXLINE(3036)					ipNext = pol->__get(0).StaticCast<  ::h2d::col::IPoint >();
            				}
            				else {
HXLINE(3036)					ipNext = pol->__get(i).StaticCast<  ::h2d::col::IPoint >();
            				}
HXLINE(3037)				if ((ipNext->y == pt->y)) {
HXLINE(3039)					bool _hx_tmp;
HXDLIN(3039)					if ((ipNext->x != pt->x)) {
HXLINE(3039)						if ((ip->y == pt->y)) {
HXLINE(3039)							_hx_tmp = ((ipNext->x > pt->x) == (ip->x < pt->x));
            						}
            						else {
HXLINE(3039)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE(3039)						_hx_tmp = true;
            					}
HXDLIN(3039)					if (_hx_tmp) {
HXLINE(3039)						return -1;
            					}
            				}
HXLINE(3041)				if (((ip->y < pt->y) != (ipNext->y < pt->y))) {
HXLINE(3043)					if ((ip->x >= pt->x)) {
HXLINE(3045)						if ((ipNext->x > pt->x)) {
HXLINE(3045)							result = (1 - result);
            						}
            						else {
HXLINE(3048)							int d = (((ip->x - pt->x) * (ipNext->y - pt->y)) - ((ipNext->x - pt->x) * (ip->y - pt->y)));
HXLINE(3049)							if ((d == 0)) {
HXLINE(3049)								return -1;
            							}
            							else {
HXLINE(3050)								if (((d > 0) == (ipNext->y > ip->y))) {
HXLINE(3050)									result = (1 - result);
            								}
            							}
            						}
            					}
            					else {
HXLINE(3055)						if ((ipNext->x > pt->x)) {
HXLINE(3057)							int d = (((ip->x - pt->x) * (ipNext->y - pt->y)) - ((ipNext->x - pt->x) * (ip->y - pt->y)));
HXLINE(3058)							if ((d == 0)) {
HXLINE(3058)								return -1;
            							}
            							else {
HXLINE(3059)								if (((d > 0) == (ipNext->y > ip->y))) {
HXLINE(3059)									result = (1 - result);
            								}
            							}
            						}
            					}
            				}
HXLINE(3063)				ip = ipNext;
            			}
            		}
HXLINE(3065)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,PointInPolygon,return )

int Clipper_obj::PointInPolygon2( ::h2d::col::IPoint pt, ::hxd::clipper::_Clipper::OutPt op){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3071_PointInPolygon2)
HXLINE(3075)		int result = 0;
HXLINE(3076)		 ::hxd::clipper::_Clipper::OutPt startOp = op;
HXLINE(3077)		int ptx = pt->x;
HXLINE(3078)		int pty = pt->y;
HXLINE(3079)		int poly0x = op->pt->x;
HXLINE(3080)		int poly0y = op->pt->y;
HXLINE(3081)		while(true){
HXLINE(3083)			op = op->next;
HXLINE(3084)			int poly1x = op->pt->x;
HXLINE(3085)			int poly1y = op->pt->y;
HXLINE(3087)			if ((poly1y == pty)) {
HXLINE(3089)				bool _hx_tmp;
HXDLIN(3089)				if ((poly1x != ptx)) {
HXLINE(3089)					if ((poly0y == pty)) {
HXLINE(3089)						_hx_tmp = ((poly1x > ptx) == (poly0x < ptx));
            					}
            					else {
HXLINE(3089)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(3089)					_hx_tmp = true;
            				}
HXDLIN(3089)				if (_hx_tmp) {
HXLINE(3090)					return -1;
            				}
            			}
HXLINE(3092)			if (((poly0y < pty) != (poly1y < pty))) {
HXLINE(3094)				if ((poly0x >= ptx)) {
HXLINE(3096)					if ((poly1x > ptx)) {
HXLINE(3096)						result = (1 - result);
            					}
            					else {
HXLINE(3099)						int d = (((poly0x - ptx) * (poly1y - pty)) - ((poly1x - ptx) * (poly0y - pty)));
HXLINE(3100)						if ((d == 0)) {
HXLINE(3100)							return -1;
            						}
HXLINE(3101)						if (((d > 0) == (poly1y > poly0y))) {
HXLINE(3101)							result = (1 - result);
            						}
            					}
            				}
            				else {
HXLINE(3106)					if ((poly1x > ptx)) {
HXLINE(3108)						int d = (((poly0x - ptx) * (poly1y - pty)) - ((poly1x - ptx) * (poly0y - pty)));
HXLINE(3109)						if ((d == 0)) {
HXLINE(3109)							return -1;
            						}
HXLINE(3110)						if (((d > 0) == (poly1y > poly0y))) {
HXLINE(3110)							result = (1 - result);
            						}
            					}
            				}
            			}
HXLINE(3114)			poly0x = poly1x;
HXLINE(3115)			poly0y = poly1y;
HXLINE(3081)			if (!(::hx::IsInstanceNotEq( startOp,op ))) {
HXLINE(3081)				goto _hx_goto_141;
            			}
            		}
            		_hx_goto_141:;
HXLINE(3117)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,PointInPolygon2,return )

bool Clipper_obj::Poly2ContainsPoly1( ::hxd::clipper::_Clipper::OutPt outPt1, ::hxd::clipper::_Clipper::OutPt outPt2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3122_Poly2ContainsPoly1)
HXLINE(3123)		 ::hxd::clipper::_Clipper::OutPt op = outPt1;
HXLINE(3124)		while(true){
HXLINE(3127)			int res = this->PointInPolygon2(op->pt,outPt2);
HXLINE(3128)			if ((res >= 0)) {
HXLINE(3128)				return (res > 0);
            			}
HXLINE(3129)			op = op->next;
HXLINE(3124)			if (!(::hx::IsInstanceNotEq( op,outPt1 ))) {
HXLINE(3124)				goto _hx_goto_143;
            			}
            		}
            		_hx_goto_143:;
HXLINE(3132)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,Poly2ContainsPoly1,return )

void Clipper_obj::FixupFirstLefts1( ::hxd::clipper::_Clipper::OutRec OldOutRec, ::hxd::clipper::_Clipper::OutRec NewOutRec){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3138_FixupFirstLefts1)
HXDLIN(3138)		int _g = 0;
HXDLIN(3138)		::Array< ::Dynamic> _g1 = this->m_PolyOuts;
HXDLIN(3138)		while((_g < _g1->length)){
HXDLIN(3138)			 ::hxd::clipper::_Clipper::OutRec outRec = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXDLIN(3138)			_g = (_g + 1);
HXLINE(3140)			bool _hx_tmp;
HXDLIN(3140)			if (::hx::IsNotNull( outRec->pts )) {
HXLINE(3140)				_hx_tmp = ::hx::IsNull( outRec->firstLeft );
            			}
            			else {
HXLINE(3140)				_hx_tmp = true;
            			}
HXDLIN(3140)			if (_hx_tmp) {
HXLINE(3140)				continue;
            			}
HXLINE(3141)			 ::hxd::clipper::_Clipper::OutRec firstLeft = this->ParseFirstLeft(outRec->firstLeft);
HXLINE(3142)			if (::hx::IsInstanceEq( firstLeft,OldOutRec )) {
HXLINE(3144)				if (this->Poly2ContainsPoly1(outRec->pts,NewOutRec->pts)) {
HXLINE(3145)					outRec->firstLeft = NewOutRec;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,FixupFirstLefts1,(void))

void Clipper_obj::FixupFirstLefts2( ::hxd::clipper::_Clipper::OutRec OldOutRec, ::hxd::clipper::_Clipper::OutRec NewOutRec){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3153_FixupFirstLefts2)
HXDLIN(3153)		int _g = 0;
HXDLIN(3153)		::Array< ::Dynamic> _g1 = this->m_PolyOuts;
HXDLIN(3153)		while((_g < _g1->length)){
HXDLIN(3153)			 ::hxd::clipper::_Clipper::OutRec outRec = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXDLIN(3153)			_g = (_g + 1);
HXLINE(3154)			if (::hx::IsInstanceEq( outRec->firstLeft,OldOutRec )) {
HXLINE(3154)				outRec->firstLeft = NewOutRec;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,FixupFirstLefts2,(void))

 ::hxd::clipper::_Clipper::OutRec Clipper_obj::ParseFirstLeft( ::hxd::clipper::_Clipper::OutRec FirstLeft){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3159_ParseFirstLeft)
HXLINE(3160)		while(true){
HXLINE(3160)			bool _hx_tmp;
HXDLIN(3160)			if (::hx::IsNotNull( FirstLeft )) {
HXLINE(3160)				_hx_tmp = ::hx::IsNull( FirstLeft->pts );
            			}
            			else {
HXLINE(3160)				_hx_tmp = false;
            			}
HXDLIN(3160)			if (!(_hx_tmp)) {
HXLINE(3160)				goto _hx_goto_149;
            			}
HXLINE(3161)			FirstLeft = FirstLeft->firstLeft;
            		}
            		_hx_goto_149:;
HXLINE(3162)		return FirstLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,ParseFirstLeft,return )

void Clipper_obj::JoinCommonEdges(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3168_JoinCommonEdges)
HXDLIN(3168)		int _g = 0;
HXDLIN(3168)		int _g1 = this->m_Joins->length;
HXDLIN(3168)		while((_g < _g1)){
HXDLIN(3168)			_g = (_g + 1);
HXDLIN(3168)			int i = (_g - 1);
HXLINE(3170)			 ::hxd::clipper::_Clipper::Join join = this->m_Joins->__get(i).StaticCast<  ::hxd::clipper::_Clipper::Join >();
HXLINE(3172)			 ::hxd::clipper::_Clipper::OutRec outRec1 = this->GetOutRec(join->outPt1->idx);
HXLINE(3173)			 ::hxd::clipper::_Clipper::OutRec outRec2 = this->GetOutRec(join->outPt2->idx);
HXLINE(3175)			bool _hx_tmp;
HXDLIN(3175)			if (::hx::IsNotNull( outRec1->pts )) {
HXLINE(3175)				_hx_tmp = ::hx::IsNull( outRec2->pts );
            			}
            			else {
HXLINE(3175)				_hx_tmp = true;
            			}
HXDLIN(3175)			if (_hx_tmp) {
HXLINE(3175)				continue;
            			}
HXLINE(3179)			 ::hxd::clipper::_Clipper::OutRec holeStateRec;
HXLINE(3180)			if (::hx::IsInstanceEq( outRec1,outRec2 )) {
HXLINE(3180)				holeStateRec = outRec1;
            			}
            			else {
HXLINE(3181)				if (this->Param1RightOfParam2(outRec1,outRec2)) {
HXLINE(3181)					holeStateRec = outRec2;
            				}
            				else {
HXLINE(3182)					if (this->Param1RightOfParam2(outRec2,outRec1)) {
HXLINE(3182)						holeStateRec = outRec1;
            					}
            					else {
HXLINE(3183)						holeStateRec = this->GetLowermostRec(outRec1,outRec2);
            					}
            				}
            			}
HXLINE(3185)			if (!(this->JoinPoints(join,outRec1,outRec2))) {
HXLINE(3185)				continue;
            			}
HXLINE(3187)			if (::hx::IsInstanceEq( outRec1,outRec2 )) {
HXLINE(3191)				outRec1->pts = join->outPt1;
HXLINE(3192)				outRec1->bottomPt = null();
HXLINE(3193)				outRec2 = this->CreateOutRec();
HXLINE(3194)				outRec2->pts = join->outPt2;
HXLINE(3197)				this->UpdateOutPtIdxs(outRec2);
HXLINE(3201)				if (this->m_UsingPolyTree) {
HXLINE(3202)					int _g = 0;
HXDLIN(3202)					int _g1 = (this->m_PolyOuts->length - 1);
HXDLIN(3202)					while((_g < _g1)){
HXLINE(3202)						_g = (_g + 1);
HXDLIN(3202)						int j = (_g - 1);
HXLINE(3204)						 ::hxd::clipper::_Clipper::OutRec oRec = this->m_PolyOuts->__get(j).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXLINE(3205)						bool _hx_tmp;
HXDLIN(3205)						bool _hx_tmp1;
HXDLIN(3205)						if (::hx::IsNotNull( oRec->pts )) {
HXLINE(3205)							_hx_tmp1 = ::hx::IsInstanceNotEq( this->ParseFirstLeft(oRec->firstLeft),outRec1 );
            						}
            						else {
HXLINE(3205)							_hx_tmp1 = true;
            						}
HXDLIN(3205)						if (!(_hx_tmp1)) {
HXLINE(3205)							_hx_tmp = (oRec->isHole == outRec1->isHole);
            						}
            						else {
HXLINE(3205)							_hx_tmp = true;
            						}
HXDLIN(3205)						if (_hx_tmp) {
HXLINE(3206)							continue;
            						}
HXLINE(3207)						if (this->Poly2ContainsPoly1(oRec->pts,join->outPt2)) {
HXLINE(3208)							oRec->firstLeft = outRec2;
            						}
            					}
            				}
HXLINE(3211)				if (this->Poly2ContainsPoly1(outRec2->pts,outRec1->pts)) {
HXLINE(3214)					outRec2->isHole = !(outRec1->isHole);
HXLINE(3215)					outRec2->firstLeft = outRec1;
HXLINE(3218)					if (this->m_UsingPolyTree) {
HXLINE(3218)						this->FixupFirstLefts2(outRec2,outRec1);
            					}
HXLINE(3220)					bool b = this->reverseSolution;
HXDLIN(3220)					bool _hx_tmp;
HXDLIN(3220)					if (outRec2->isHole) {
HXLINE(3220)						_hx_tmp = !(b);
            					}
            					else {
HXLINE(3220)						_hx_tmp = b;
            					}
HXDLIN(3220)					if ((_hx_tmp == (this->Area(outRec2) > 0))) {
HXLINE(3221)						this->ReversePolyPtLinks(outRec2->pts);
            					}
            				}
            				else {
HXLINE(3224)					if (this->Poly2ContainsPoly1(outRec1->pts,outRec2->pts)) {
HXLINE(3227)						outRec2->isHole = outRec1->isHole;
HXLINE(3228)						outRec1->isHole = !(outRec2->isHole);
HXLINE(3229)						outRec2->firstLeft = outRec1->firstLeft;
HXLINE(3230)						outRec1->firstLeft = outRec2;
HXLINE(3233)						if (this->m_UsingPolyTree) {
HXLINE(3233)							this->FixupFirstLefts2(outRec1,outRec2);
            						}
HXLINE(3235)						bool b = this->reverseSolution;
HXDLIN(3235)						bool _hx_tmp;
HXDLIN(3235)						if (outRec1->isHole) {
HXLINE(3235)							_hx_tmp = !(b);
            						}
            						else {
HXLINE(3235)							_hx_tmp = b;
            						}
HXDLIN(3235)						if ((_hx_tmp == (this->Area(outRec1) > 0))) {
HXLINE(3236)							this->ReversePolyPtLinks(outRec1->pts);
            						}
            					}
            					else {
HXLINE(3241)						outRec2->isHole = outRec1->isHole;
HXLINE(3242)						outRec2->firstLeft = outRec1->firstLeft;
HXLINE(3245)						if (this->m_UsingPolyTree) {
HXLINE(3245)							this->FixupFirstLefts1(outRec1,outRec2);
            						}
            					}
            				}
            			}
            			else {
HXLINE(3252)				outRec2->pts = null();
HXLINE(3253)				outRec2->bottomPt = null();
HXLINE(3254)				outRec2->idx = outRec1->idx;
HXLINE(3256)				outRec1->isHole = holeStateRec->isHole;
HXLINE(3257)				if (::hx::IsInstanceEq( holeStateRec,outRec2 )) {
HXLINE(3258)					outRec1->firstLeft = outRec2->firstLeft;
            				}
HXLINE(3259)				outRec2->firstLeft = outRec1;
HXLINE(3262)				if (this->m_UsingPolyTree) {
HXLINE(3262)					this->FixupFirstLefts2(outRec2,outRec1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Clipper_obj,JoinCommonEdges,(void))

void Clipper_obj::UpdateOutPtIdxs( ::hxd::clipper::_Clipper::OutRec outrec){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3269_UpdateOutPtIdxs)
HXLINE(3270)		 ::hxd::clipper::_Clipper::OutPt op = outrec->pts;
HXLINE(3271)		while(true){
HXLINE(3273)			op->idx = outrec->idx;
HXLINE(3274)			op = op->prev;
HXLINE(3271)			if (!(::hx::IsInstanceNotEq( op,outrec->pts ))) {
HXLINE(3271)				goto _hx_goto_154;
            			}
            		}
            		_hx_goto_154:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,UpdateOutPtIdxs,(void))

void Clipper_obj::DoSimplePolygons(){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3281_DoSimplePolygons)
HXLINE(3282)		int i = 0;
HXLINE(3283)		while((i < this->m_PolyOuts->length)){
HXLINE(3285)			i = (i + 1);
HXDLIN(3285)			 ::hxd::clipper::_Clipper::OutRec outrec = this->m_PolyOuts->__get((i - 1)).StaticCast<  ::hxd::clipper::_Clipper::OutRec >();
HXLINE(3286)			 ::hxd::clipper::_Clipper::OutPt op = outrec->pts;
HXLINE(3287)			if (::hx::IsNull( op )) {
HXLINE(3287)				continue;
            			}
HXLINE(3288)			while(true){
HXLINE(3290)				 ::hxd::clipper::_Clipper::OutPt op2 = op->next;
HXLINE(3291)				while(::hx::IsInstanceNotEq( op2,outrec->pts )){
HXLINE(3293)					bool _hx_tmp;
HXDLIN(3293)					bool _hx_tmp1;
HXDLIN(3293)					 ::h2d::col::IPoint pt1 = op->pt;
HXDLIN(3293)					 ::h2d::col::IPoint pt2 = op2->pt;
HXDLIN(3293)					bool _hx_tmp2;
HXDLIN(3293)					if ((pt1->x == pt2->x)) {
HXLINE(3293)						_hx_tmp2 = (pt1->y == pt2->y);
            					}
            					else {
HXLINE(3293)						_hx_tmp2 = false;
            					}
HXDLIN(3293)					if (_hx_tmp2) {
HXLINE(3293)						_hx_tmp1 = ::hx::IsInstanceNotEq( op2->next,op );
            					}
            					else {
HXLINE(3293)						_hx_tmp1 = false;
            					}
HXDLIN(3293)					if (_hx_tmp1) {
HXLINE(3293)						_hx_tmp = ::hx::IsInstanceNotEq( op2->prev,op );
            					}
            					else {
HXLINE(3293)						_hx_tmp = false;
            					}
HXDLIN(3293)					if (_hx_tmp) {
HXLINE(3296)						 ::hxd::clipper::_Clipper::OutPt op3 = op->prev;
HXLINE(3297)						 ::hxd::clipper::_Clipper::OutPt op4 = op2->prev;
HXLINE(3298)						op->prev = op4;
HXLINE(3299)						op4->next = op;
HXLINE(3300)						op2->prev = op3;
HXLINE(3301)						op3->next = op2;
HXLINE(3303)						outrec->pts = op;
HXLINE(3304)						 ::hxd::clipper::_Clipper::OutRec outrec2 = this->CreateOutRec();
HXLINE(3305)						outrec2->pts = op2;
HXLINE(3306)						this->UpdateOutPtIdxs(outrec2);
HXLINE(3307)						if (this->Poly2ContainsPoly1(outrec2->pts,outrec->pts)) {
HXLINE(3310)							outrec2->isHole = !(outrec->isHole);
HXLINE(3311)							outrec2->firstLeft = outrec;
            						}
            						else {
HXLINE(3314)							if (this->Poly2ContainsPoly1(outrec->pts,outrec2->pts)) {
HXLINE(3317)								outrec2->isHole = outrec->isHole;
HXLINE(3318)								outrec->isHole = !(outrec2->isHole);
HXLINE(3319)								outrec2->firstLeft = outrec->firstLeft;
HXLINE(3320)								outrec->firstLeft = outrec2;
            							}
            							else {
HXLINE(3324)								outrec2->isHole = outrec->isHole;
HXLINE(3325)								outrec2->firstLeft = outrec->firstLeft;
            							}
            						}
HXLINE(3327)						op2 = op;
            					}
HXLINE(3329)					op2 = op2->next;
            				}
HXLINE(3331)				op = op->next;
HXLINE(3288)				if (!(::hx::IsInstanceNotEq( op,outrec->pts ))) {
HXLINE(3288)					goto _hx_goto_157;
            				}
            			}
            			_hx_goto_157:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Clipper_obj,DoSimplePolygons,(void))

Float Clipper_obj::Area( ::hxd::clipper::_Clipper::OutRec outRec){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3351_Area)
HXLINE(3352)		 ::hxd::clipper::_Clipper::OutPt op = outRec->pts;
HXLINE(3353)		if (::hx::IsNull( op )) {
HXLINE(3353)			return ((Float)0.);
            		}
HXLINE(3354)		Float a = ( (Float)(0) );
HXLINE(3355)		while(true){
HXLINE(3356)			a = (a + ((op->pt->x + op->prev->pt->x) * (op->prev->pt->y - op->pt->y)));
HXLINE(3357)			op = op->next;
HXLINE(3355)			if (!(::hx::IsInstanceNotEq( op,outRec->pts ))) {
HXLINE(3355)				goto _hx_goto_160;
            			}
            		}
            		_hx_goto_160:;
HXLINE(3359)		return (a / ( (Float)(2) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,Area,return )

Float Clipper_obj::DistanceFromLineSqrd( ::h2d::col::IPoint pt, ::h2d::col::IPoint ln1, ::h2d::col::IPoint ln2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3389_DistanceFromLineSqrd)
HXLINE(3396)		int A = (ln1->y - ln2->y);
HXLINE(3397)		int B = (ln2->x - ln1->x);
HXLINE(3398)		int C = ((A * ln1->x) + (B * ln1->y));
HXLINE(3399)		C = (((A * pt->x) + (B * pt->y)) - C);
HXLINE(3400)		return (( (Float)((C * C)) ) / ( (Float)(((A * A) + (B * B))) ));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,DistanceFromLineSqrd,return )

bool Clipper_obj::SlopesNearCollinear( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2, ::h2d::col::IPoint pt3,Float distSqrd){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3409_SlopesNearCollinear)
HXDLIN(3409)		Float f = ( (Float)((pt1->x - pt2->x)) );
HXDLIN(3409)		Float _hx_tmp;
HXDLIN(3409)		if ((f < 0)) {
HXDLIN(3409)			_hx_tmp = -(f);
            		}
            		else {
HXDLIN(3409)			_hx_tmp = f;
            		}
HXDLIN(3409)		Float f1 = ( (Float)((pt1->y - pt2->y)) );
HXDLIN(3409)		Float _hx_tmp1;
HXDLIN(3409)		if ((f1 < 0)) {
HXDLIN(3409)			_hx_tmp1 = -(f1);
            		}
            		else {
HXDLIN(3409)			_hx_tmp1 = f1;
            		}
HXDLIN(3409)		if ((_hx_tmp > _hx_tmp1)) {
HXLINE(3411)			if (((pt1->x > pt2->x) == (pt1->x < pt3->x))) {
HXLINE(3412)				return (this->DistanceFromLineSqrd(pt1,pt2,pt3) < distSqrd);
            			}
            			else {
HXLINE(3413)				if (((pt2->x > pt1->x) == (pt2->x < pt3->x))) {
HXLINE(3414)					return (this->DistanceFromLineSqrd(pt2,pt1,pt3) < distSqrd);
            				}
            				else {
HXLINE(3416)					return (this->DistanceFromLineSqrd(pt3,pt1,pt2) < distSqrd);
            				}
            			}
            		}
            		else {
HXLINE(3420)			if (((pt1->y > pt2->y) == (pt1->y < pt3->y))) {
HXLINE(3421)				return (this->DistanceFromLineSqrd(pt1,pt2,pt3) < distSqrd);
            			}
            			else {
HXLINE(3422)				if (((pt2->y > pt1->y) == (pt2->y < pt3->y))) {
HXLINE(3423)					return (this->DistanceFromLineSqrd(pt2,pt1,pt3) < distSqrd);
            				}
            				else {
HXLINE(3425)					return (this->DistanceFromLineSqrd(pt3,pt1,pt2) < distSqrd);
            				}
            			}
            		}
HXLINE(3409)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Clipper_obj,SlopesNearCollinear,return )

bool Clipper_obj::PointsAreClose( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2,Float distSqrd){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3432_PointsAreClose)
HXLINE(3433)		int dx = (pt1->x - pt2->x);
HXLINE(3434)		int dy = (pt1->y - pt2->y);
HXLINE(3435)		return (((dx * dx) + (dy * dy)) <= distSqrd);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,PointsAreClose,return )

 ::hxd::clipper::_Clipper::OutPt Clipper_obj::ExcludeOp( ::hxd::clipper::_Clipper::OutPt op){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3440_ExcludeOp)
HXLINE(3441)		 ::hxd::clipper::_Clipper::OutPt result = op->prev;
HXLINE(3442)		result->next = op->next;
HXLINE(3443)		op->next->prev = result;
HXLINE(3444)		result->idx = 0;
HXLINE(3445)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,ExcludeOp,return )

::Array< ::Dynamic> Clipper_obj::CleanPolygon(::Array< ::Dynamic> path,::hx::Null< Float >  __o_distance){
            		Float distance = __o_distance.Default(((Float)1.415));
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_3450_CleanPolygon)
HXLINE(3455)		int cnt = path->length;
HXLINE(3456)		if ((cnt == 0)) {
HXLINE(3456)			::Array< ::Dynamic> points = null();
HXDLIN(3456)			::Array< ::Dynamic> this1;
HXDLIN(3456)			if (::hx::IsNull( points )) {
HXLINE(3456)				this1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(3456)				this1 = points;
            			}
HXDLIN(3456)			return this1;
            		}
HXLINE(3458)		::Array< ::Dynamic> outPts = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(3459)		{
HXLINE(3459)			int _g = 0;
HXDLIN(3459)			int _g1 = cnt;
HXDLIN(3459)			while((_g < _g1)){
HXLINE(3459)				_g = (_g + 1);
HXDLIN(3459)				int i = (_g - 1);
HXLINE(3461)				outPts[i] =  ::hxd::clipper::_Clipper::OutPt_obj::__alloc( HX_CTX );
HXLINE(3462)				outPts->__get(i).StaticCast<  ::hxd::clipper::_Clipper::OutPt >()->pt = path->__get(i).StaticCast<  ::h2d::col::IPoint >();
HXLINE(3463)				outPts->__get(i).StaticCast<  ::hxd::clipper::_Clipper::OutPt >()->next = outPts->__get(::hx::Mod((i + 1),cnt)).StaticCast<  ::hxd::clipper::_Clipper::OutPt >();
HXLINE(3464)				outPts->__get(i).StaticCast<  ::hxd::clipper::_Clipper::OutPt >()->next->prev = outPts->__get(i).StaticCast<  ::hxd::clipper::_Clipper::OutPt >();
HXLINE(3465)				outPts->__get(i).StaticCast<  ::hxd::clipper::_Clipper::OutPt >()->idx = 0;
            			}
            		}
HXLINE(3468)		Float distSqrd = (distance * distance);
HXLINE(3469)		 ::hxd::clipper::_Clipper::OutPt op = outPts->__get(0).StaticCast<  ::hxd::clipper::_Clipper::OutPt >();
HXLINE(3470)		while(true){
HXLINE(3470)			bool _hx_tmp;
HXDLIN(3470)			if ((op->idx == 0)) {
HXLINE(3470)				_hx_tmp = ::hx::IsInstanceNotEq( op->next,op->prev );
            			}
            			else {
HXLINE(3470)				_hx_tmp = false;
            			}
HXDLIN(3470)			if (!(_hx_tmp)) {
HXLINE(3470)				goto _hx_goto_167;
            			}
HXLINE(3472)			if (this->PointsAreClose(op->pt,op->prev->pt,distSqrd)) {
HXLINE(3474)				op = this->ExcludeOp(op);
HXLINE(3475)				cnt = (cnt - 1);
            			}
            			else {
HXLINE(3477)				if (this->PointsAreClose(op->prev->pt,op->next->pt,distSqrd)) {
HXLINE(3479)					this->ExcludeOp(op->next);
HXLINE(3480)					op = this->ExcludeOp(op);
HXLINE(3481)					cnt = (cnt - 2);
            				}
            				else {
HXLINE(3483)					if (this->SlopesNearCollinear(op->prev->pt,op->pt,op->next->pt,distSqrd)) {
HXLINE(3485)						op = this->ExcludeOp(op);
HXLINE(3486)						cnt = (cnt - 1);
            					}
            					else {
HXLINE(3490)						op->idx = 1;
HXLINE(3491)						op = op->next;
            					}
            				}
            			}
            		}
            		_hx_goto_167:;
HXLINE(3495)		if ((cnt < 3)) {
HXLINE(3495)			cnt = 0;
            		}
HXLINE(3496)		::Array< ::Dynamic> points = null();
HXDLIN(3496)		::Array< ::Dynamic> this1;
HXDLIN(3496)		if (::hx::IsNull( points )) {
HXLINE(3496)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(3496)			this1 = points;
            		}
HXDLIN(3496)		::Array< ::Dynamic> result = this1;
HXLINE(3497)		{
HXLINE(3497)			int _g2 = 0;
HXDLIN(3497)			int _g3 = cnt;
HXDLIN(3497)			while((_g2 < _g3)){
HXLINE(3497)				_g2 = (_g2 + 1);
HXDLIN(3497)				int i = (_g2 - 1);
HXLINE(3499)				result->push(op->pt);
HXLINE(3500)				op = op->next;
            			}
            		}
HXLINE(3502)		outPts = null();
HXLINE(3503)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,CleanPolygon,return )

::Array< ::Dynamic> Clipper_obj::CleanPolygons(::Array< ::Dynamic> polys,::hx::Null< Float >  __o_distance){
            		Float distance = __o_distance.Default(((Float)1.415));
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3509_CleanPolygons)
HXLINE(3510)		::Array< ::Dynamic> polygons = null();
HXDLIN(3510)		::Array< ::Dynamic> this1;
HXDLIN(3510)		if (::hx::IsNull( polygons )) {
HXLINE(3510)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(3510)			this1 = polygons;
            		}
HXDLIN(3510)		::Array< ::Dynamic> result = this1;
HXLINE(3511)		{
HXLINE(3511)			int _g = 0;
HXDLIN(3511)			int _g1 = polys->length;
HXDLIN(3511)			while((_g < _g1)){
HXLINE(3511)				_g = (_g + 1);
HXDLIN(3511)				int i = (_g - 1);
HXLINE(3512)				result->push(this->CleanPolygon(polys->__get(i).StaticCast< ::Array< ::Dynamic> >(),distance));
            			}
            		}
HXLINE(3513)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,CleanPolygons,return )

::Array< ::Dynamic> Clipper_obj::Minkowski(::Array< ::Dynamic> pattern,::Array< ::Dynamic> path,bool IsSum){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_3518_Minkowski)
HXLINE(3519)		int polyCnt = pattern->length;
HXLINE(3520)		int pathCnt = path->length;
HXLINE(3521)		::Array< ::Dynamic> polygons = null();
HXDLIN(3521)		::Array< ::Dynamic> this1;
HXDLIN(3521)		if (::hx::IsNull( polygons )) {
HXLINE(3521)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(3521)			this1 = polygons;
            		}
HXDLIN(3521)		::Array< ::Dynamic> result = this1;
HXLINE(3523)		{
HXLINE(3523)			int _g = 0;
HXDLIN(3523)			int _g1 = pathCnt;
HXDLIN(3523)			while((_g < _g1)){
HXLINE(3523)				_g = (_g + 1);
HXDLIN(3523)				int i = (_g - 1);
HXLINE(3524)				::Array< ::Dynamic> points = null();
HXDLIN(3524)				::Array< ::Dynamic> this1;
HXDLIN(3524)				if (::hx::IsNull( points )) {
HXLINE(3524)					this1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE(3524)					this1 = points;
            				}
HXDLIN(3524)				::Array< ::Dynamic> p = this1;
HXLINE(3525)				{
HXLINE(3525)					int _g_i = 0;
HXDLIN(3525)					::Array< ::Dynamic> _g_a = pattern;
HXDLIN(3525)					int _g_l = _g_a->length;
HXDLIN(3525)					while((_g_i < _g_l)){
HXLINE(3525)						_g_i = (_g_i + 1);
HXDLIN(3525)						 ::h2d::col::IPoint ip = _g_a->__get((_g_i - 1)).StaticCast<  ::h2d::col::IPoint >();
HXLINE(3526)						if (IsSum) {
HXLINE(3527)							p->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(path->__get(i).StaticCast<  ::h2d::col::IPoint >()->x + ip->x),(path->__get(i).StaticCast<  ::h2d::col::IPoint >()->y + ip->y)));
            						}
            						else {
HXLINE(3529)							p->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(path->__get(i).StaticCast<  ::h2d::col::IPoint >()->x - ip->x),(path->__get(i).StaticCast<  ::h2d::col::IPoint >()->y - ip->y)));
            						}
            					}
            				}
HXLINE(3531)				result->push(p);
            			}
            		}
HXLINE(3534)		::Array< ::Dynamic> polygons1 = null();
HXDLIN(3534)		::Array< ::Dynamic> this2;
HXDLIN(3534)		if (::hx::IsNull( polygons1 )) {
HXLINE(3534)			this2 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(3534)			this2 = polygons1;
            		}
HXDLIN(3534)		::Array< ::Dynamic> quads = this2;
HXLINE(3535)		{
HXLINE(3535)			int _g2 = 0;
HXDLIN(3535)			int _g3 = pathCnt;
HXDLIN(3535)			while((_g2 < _g3)){
HXLINE(3535)				_g2 = (_g2 + 1);
HXDLIN(3535)				int i = (_g2 - 1);
HXLINE(3536)				{
HXLINE(3536)					int _g = 0;
HXDLIN(3536)					int _g1 = polyCnt;
HXDLIN(3536)					while((_g < _g1)){
HXLINE(3536)						_g = (_g + 1);
HXDLIN(3536)						int j = (_g - 1);
HXLINE(3538)						::Array< ::Dynamic> points = null();
HXDLIN(3538)						::Array< ::Dynamic> this1;
HXDLIN(3538)						if (::hx::IsNull( points )) {
HXLINE(3538)							this1 = ::Array_obj< ::Dynamic>::__new(0);
            						}
            						else {
HXLINE(3538)							this1 = points;
            						}
HXDLIN(3538)						::Array< ::Dynamic> quad = this1;
HXLINE(3539)						quad->push(result->__get(::hx::Mod(i,pathCnt)).StaticCast< ::Array< ::Dynamic> >()->__get(::hx::Mod(j,polyCnt)).StaticCast<  ::h2d::col::IPoint >());
HXLINE(3540)						quad->push(result->__get(::hx::Mod((i + 1),pathCnt)).StaticCast< ::Array< ::Dynamic> >()->__get(::hx::Mod(j,polyCnt)).StaticCast<  ::h2d::col::IPoint >());
HXLINE(3541)						quad->push(result->__get(::hx::Mod((i + 1),pathCnt)).StaticCast< ::Array< ::Dynamic> >()->__get(::hx::Mod((j + 1),polyCnt)).StaticCast<  ::h2d::col::IPoint >());
HXLINE(3542)						quad->push(result->__get(::hx::Mod(i,pathCnt)).StaticCast< ::Array< ::Dynamic> >()->__get(::hx::Mod((j + 1),polyCnt)).StaticCast<  ::h2d::col::IPoint >());
HXLINE(3543)						if (!((::hxd::clipper::Clipper_obj::polArea(quad) >= 0))) {
HXLINE(3543)							::h2d::col::_IPolygon::IPolygon_Impl__obj::reverse(quad);
            						}
HXLINE(3544)						quads->push(quad);
            					}
            				}
            			}
            		}
HXLINE(3546)		return quads;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,Minkowski,return )

::Array< ::Dynamic> Clipper_obj::MinkowskiSum(::Array< ::Dynamic> pattern,::Array< ::Dynamic> pol, ::hxd::clipper::ResultKind kind){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_3552_MinkowskiSum)
HXLINE(3553)		::Array< ::Dynamic> paths = this->Minkowski(pattern,pol,true);
HXLINE(3554)		 ::hxd::clipper::Clipper c =  ::hxd::clipper::Clipper_obj::__alloc( HX_CTX );
HXLINE(3555)		 ::hxd::clipper::ResultKind _hx_tmp;
HXDLIN(3555)		if (::hx::IsNull( kind )) {
HXLINE(3555)			_hx_tmp = ::hxd::clipper::ResultKind_obj::All_dyn();
            		}
            		else {
HXLINE(3555)			_hx_tmp = kind;
            		}
HXDLIN(3555)		c->resultKind = _hx_tmp;
HXLINE(3556)		c->addPolygons(paths,::hxd::clipper::PolyType_obj::Subject_dyn());
HXLINE(3557)		return c->execute(::hxd::clipper::ClipType_obj::Union_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,MinkowskiSum,return )

::Array< ::Dynamic> Clipper_obj::TranslatePath(::Array< ::Dynamic> path, ::h2d::col::IPoint delta){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_3563_TranslatePath)
HXLINE(3564)		::Array< ::Dynamic> points = null();
HXDLIN(3564)		::Array< ::Dynamic> this1;
HXDLIN(3564)		if (::hx::IsNull( points )) {
HXLINE(3564)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(3564)			this1 = points;
            		}
HXDLIN(3564)		::Array< ::Dynamic> outPath = this1;
HXLINE(3565)		{
HXLINE(3565)			int _g = 0;
HXDLIN(3565)			int _g1 = path->length;
HXDLIN(3565)			while((_g < _g1)){
HXLINE(3565)				_g = (_g + 1);
HXDLIN(3565)				int i = (_g - 1);
HXLINE(3566)				outPath->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(path->__get(i).StaticCast<  ::h2d::col::IPoint >()->x + delta->x),(path->__get(i).StaticCast<  ::h2d::col::IPoint >()->y + delta->y)));
            			}
            		}
HXLINE(3567)		return outPath;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,TranslatePath,return )

::Array< ::Dynamic> Clipper_obj::PolyTreeToPaths( ::hxd::clipper::_Clipper::PolyTree polytree){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3600_PolyTreeToPaths)
HXLINE(3601)		::Array< ::Dynamic> polygons = null();
HXDLIN(3601)		::Array< ::Dynamic> this1;
HXDLIN(3601)		if (::hx::IsNull( polygons )) {
HXLINE(3601)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(3601)			this1 = polygons;
            		}
HXDLIN(3601)		::Array< ::Dynamic> result = this1;
HXLINE(3602)		this->AddPolyNodeToPaths(polytree,::hxd::clipper::NodeType_obj::Any_dyn(),result);
HXLINE(3603)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,PolyTreeToPaths,return )

void Clipper_obj::AddPolyNodeToPaths( ::hxd::clipper::_Clipper::PolyNode polynode, ::hxd::clipper::NodeType nt,::Array< ::Dynamic> paths){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3608_AddPolyNodeToPaths)
HXLINE(3609)		bool match = true;
HXLINE(3610)		if ((nt->_hx_getIndex() == 1)) {
HXLINE(3612)			return;
            		}
HXLINE(3616)		bool _hx_tmp;
HXDLIN(3616)		if ((polynode->polygon->length > 0)) {
HXLINE(3616)			_hx_tmp = match;
            		}
            		else {
HXLINE(3616)			_hx_tmp = false;
            		}
HXDLIN(3616)		if (_hx_tmp) {
HXLINE(3617)			paths->push(polynode->polygon);
            		}
HXLINE(3618)		{
HXLINE(3618)			int _g = 0;
HXDLIN(3618)			::Array< ::Dynamic> _g1 = polynode->childs;
HXDLIN(3618)			while((_g < _g1->length)){
HXLINE(3618)				 ::hxd::clipper::_Clipper::PolyNode pn = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >();
HXDLIN(3618)				_g = (_g + 1);
HXLINE(3619)				this->AddPolyNodeToPaths(pn,nt,paths);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,AddPolyNodeToPaths,(void))

int Clipper_obj::compareY( ::hxd::clipper::_Clipper::IntersectNode n1, ::hxd::clipper::_Clipper::IntersectNode n2){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2349_compareY)
HXDLIN(2349)		if (((n2->pt->y - n1->pt->y) >= 0)) {
HXDLIN(2349)			return 1;
            		}
            		else {
HXDLIN(2349)			return -1;
            		}
HXDLIN(2349)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,compareY,return )

bool Clipper_obj::Orientation(::Array< ::Dynamic> poly){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_2613_Orientation)
HXDLIN(2613)		return (::hxd::clipper::Clipper_obj::polArea(poly) >= 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,Orientation,return )

Float Clipper_obj::polArea(::Array< ::Dynamic> poly){
            	HX_STACKFRAME(&_hx_pos_402e6f1b2c344265_3339_polArea)
HXLINE(3340)		int cnt = poly->length;
HXLINE(3341)		if ((cnt < 3)) {
HXLINE(3341)			return ((Float)0.);
            		}
HXLINE(3342)		Float a = ((Float)0.);
HXLINE(3343)		int j = (cnt - 1);
HXLINE(3344)		{
HXLINE(3344)			int _g = 0;
HXDLIN(3344)			int _g1 = cnt;
HXDLIN(3344)			while((_g < _g1)){
HXLINE(3344)				_g = (_g + 1);
HXDLIN(3344)				int i = (_g - 1);
HXLINE(3345)				a = (a + ((poly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + poly->__get(i).StaticCast<  ::h2d::col::IPoint >()->x) * (poly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y - poly->__get(i).StaticCast<  ::h2d::col::IPoint >()->y)));
HXLINE(3346)				j = i;
            			}
            		}
HXLINE(3348)		return (-(a) * ((Float)0.5));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clipper_obj,polArea,return )

::Array< ::Dynamic> Clipper_obj::SimplifyPolygon(::Array< ::Dynamic> poly, ::hxd::clipper::PolyFillType fillType){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_3369_SimplifyPolygon)
HXLINE(3370)		if (::hx::IsNull( fillType )) {
HXLINE(3370)			fillType = ::hxd::clipper::PolyFillType_obj::EvenOdd_dyn();
            		}
HXLINE(3371)		 ::hxd::clipper::Clipper c =  ::hxd::clipper::Clipper_obj::__alloc( HX_CTX );
HXLINE(3372)		c->strictlySimple = true;
HXLINE(3373)		c->addPolygon(poly,::hxd::clipper::PolyType_obj::Subject_dyn());
HXLINE(3374)		return c->execute(::hxd::clipper::ClipType_obj::Union_dyn(),fillType,fillType);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,SimplifyPolygon,return )

::Array< ::Dynamic> Clipper_obj::SimplifyPolygons(::Array< ::Dynamic> polys, ::hxd::clipper::PolyFillType fillType){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_3379_SimplifyPolygons)
HXLINE(3380)		if (::hx::IsNull( fillType )) {
HXLINE(3380)			fillType = ::hxd::clipper::PolyFillType_obj::EvenOdd_dyn();
            		}
HXLINE(3381)		 ::hxd::clipper::Clipper c =  ::hxd::clipper::Clipper_obj::__alloc( HX_CTX );
HXLINE(3382)		c->strictlySimple = true;
HXLINE(3383)		c->addPolygons(polys,::hxd::clipper::PolyType_obj::Subject_dyn());
HXLINE(3384)		return c->execute(::hxd::clipper::ClipType_obj::Union_dyn(),fillType,fillType);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Clipper_obj,SimplifyPolygons,return )

::Array< ::Dynamic> Clipper_obj::MinkowskiSums(::Array< ::Dynamic> pattern,::Array< ::Dynamic> pols, ::hxd::clipper::ResultKind kind){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_3572_MinkowskiSums)
HXLINE(3573)		 ::hxd::clipper::Clipper c =  ::hxd::clipper::Clipper_obj::__alloc( HX_CTX );
HXLINE(3574)		 ::hxd::clipper::ResultKind _hx_tmp;
HXDLIN(3574)		if (::hx::IsNull( kind )) {
HXLINE(3574)			_hx_tmp = ::hxd::clipper::ResultKind_obj::All_dyn();
            		}
            		else {
HXLINE(3574)			_hx_tmp = kind;
            		}
HXDLIN(3574)		c->resultKind = _hx_tmp;
HXLINE(3575)		{
HXLINE(3575)			int _g = 0;
HXDLIN(3575)			int _g1 = pols->length;
HXDLIN(3575)			while((_g < _g1)){
HXLINE(3575)				_g = (_g + 1);
HXDLIN(3575)				int i = (_g - 1);
HXLINE(3577)				::Array< ::Dynamic> tmp = c->Minkowski(pattern,pols->__get(i).StaticCast< ::Array< ::Dynamic> >(),true);
HXLINE(3578)				c->addPolygons(tmp,::hxd::clipper::PolyType_obj::Subject_dyn());
HXLINE(3579)				::Array< ::Dynamic> path = c->TranslatePath(pols->__get(i).StaticCast< ::Array< ::Dynamic> >(),pattern->__get(0).StaticCast<  ::h2d::col::IPoint >());
HXLINE(3580)				c->addPolygon(path,::hxd::clipper::PolyType_obj::Clip_dyn());
            			}
            		}
HXLINE(3582)		return c->execute(::hxd::clipper::ClipType_obj::Union_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,MinkowskiSums,return )

::Array< ::Dynamic> Clipper_obj::MinkowskiDiff(::Array< ::Dynamic> pattern,::Array< ::Dynamic> pol, ::hxd::clipper::ResultKind kind){
            	HX_GC_STACKFRAME(&_hx_pos_402e6f1b2c344265_3587_MinkowskiDiff)
HXLINE(3588)		 ::hxd::clipper::Clipper c =  ::hxd::clipper::Clipper_obj::__alloc( HX_CTX );
HXLINE(3589)		::Array< ::Dynamic> paths = c->Minkowski(pattern,pol,false);
HXLINE(3590)		 ::hxd::clipper::ResultKind _hx_tmp;
HXDLIN(3590)		if (::hx::IsNull( kind )) {
HXLINE(3590)			_hx_tmp = ::hxd::clipper::ResultKind_obj::All_dyn();
            		}
            		else {
HXLINE(3590)			_hx_tmp = kind;
            		}
HXDLIN(3590)		c->resultKind = _hx_tmp;
HXLINE(3591)		c->addPolygons(paths,::hxd::clipper::PolyType_obj::Subject_dyn());
HXLINE(3592)		return c->execute(::hxd::clipper::ClipType_obj::Union_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Clipper_obj,MinkowskiDiff,return )


::hx::ObjectPtr< Clipper_obj > Clipper_obj::__new() {
	::hx::ObjectPtr< Clipper_obj > __this = new Clipper_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Clipper_obj > Clipper_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Clipper_obj *__this = (Clipper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Clipper_obj), true, "hxd.clipper.Clipper"));
	*(void **)__this = Clipper_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Clipper_obj::Clipper_obj()
{
}

void Clipper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Clipper);
	HX_MARK_MEMBER_NAME(strictlySimple,"strictlySimple");
	HX_MARK_MEMBER_NAME(reverseSolution,"reverseSolution");
	HX_MARK_MEMBER_NAME(resultKind,"resultKind");
	HX_MARK_MEMBER_NAME(m_PolyOuts,"m_PolyOuts");
	HX_MARK_MEMBER_NAME(m_ClipType,"m_ClipType");
	HX_MARK_MEMBER_NAME(m_Scanbeam,"m_Scanbeam");
	HX_MARK_MEMBER_NAME(m_ActiveEdges,"m_ActiveEdges");
	HX_MARK_MEMBER_NAME(m_SortedEdges,"m_SortedEdges");
	HX_MARK_MEMBER_NAME(m_IntersectList,"m_IntersectList");
	HX_MARK_MEMBER_NAME(m_ExecuteLocked,"m_ExecuteLocked");
	HX_MARK_MEMBER_NAME(m_ClipFillType,"m_ClipFillType");
	HX_MARK_MEMBER_NAME(m_SubjFillType,"m_SubjFillType");
	HX_MARK_MEMBER_NAME(m_Joins,"m_Joins");
	HX_MARK_MEMBER_NAME(m_GhostJoins,"m_GhostJoins");
	HX_MARK_MEMBER_NAME(m_UsingPolyTree,"m_UsingPolyTree");
	 ::hxd::clipper::_Clipper::ClipperBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Clipper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strictlySimple,"strictlySimple");
	HX_VISIT_MEMBER_NAME(reverseSolution,"reverseSolution");
	HX_VISIT_MEMBER_NAME(resultKind,"resultKind");
	HX_VISIT_MEMBER_NAME(m_PolyOuts,"m_PolyOuts");
	HX_VISIT_MEMBER_NAME(m_ClipType,"m_ClipType");
	HX_VISIT_MEMBER_NAME(m_Scanbeam,"m_Scanbeam");
	HX_VISIT_MEMBER_NAME(m_ActiveEdges,"m_ActiveEdges");
	HX_VISIT_MEMBER_NAME(m_SortedEdges,"m_SortedEdges");
	HX_VISIT_MEMBER_NAME(m_IntersectList,"m_IntersectList");
	HX_VISIT_MEMBER_NAME(m_ExecuteLocked,"m_ExecuteLocked");
	HX_VISIT_MEMBER_NAME(m_ClipFillType,"m_ClipFillType");
	HX_VISIT_MEMBER_NAME(m_SubjFillType,"m_SubjFillType");
	HX_VISIT_MEMBER_NAME(m_Joins,"m_Joins");
	HX_VISIT_MEMBER_NAME(m_GhostJoins,"m_GhostJoins");
	HX_VISIT_MEMBER_NAME(m_UsingPolyTree,"m_UsingPolyTree");
	 ::hxd::clipper::_Clipper::ClipperBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Clipper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xor") ) { return ::hx::Val( _hx_xor_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"TopX") ) { return ::hx::Val( TopX_dyn() ); }
		if (HX_FIELD_EQ(inName,"Area") ) { return ::hx::Val( Area_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Reset") ) { return ::hx::Val( Reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"GetDx") ) { return ::hx::Val( GetDx_dyn() ); }
		if (HX_FIELD_EQ(inName,"Round") ) { return ::hx::Val( Round_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_Joins") ) { return ::hx::Val( m_Joins ); }
		if (HX_FIELD_EQ(inName,"execute") ) { return ::hx::Val( execute_dyn() ); }
		if (HX_FIELD_EQ(inName,"AddJoin") ) { return ::hx::Val( AddJoin_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"AddOutPt") ) { return ::hx::Val( AddOutPt_dyn() ); }
		if (HX_FIELD_EQ(inName,"IsMinima") ) { return ::hx::Val( IsMinima_dyn() ); }
		if (HX_FIELD_EQ(inName,"IsMaxima") ) { return ::hx::Val( IsMaxima_dyn() ); }
		if (HX_FIELD_EQ(inName,"DoMaxima") ) { return ::hx::Val( DoMaxima_dyn() ); }
		if (HX_FIELD_EQ(inName,"DupOutPt") ) { return ::hx::Val( DupOutPt_dyn() ); }
		if (HX_FIELD_EQ(inName,"JoinHorz") ) { return ::hx::Val( JoinHorz_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"GetOutRec") ) { return ::hx::Val( GetOutRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"SwapSides") ) { return ::hx::Val( SwapSides_dyn() ); }
		if (HX_FIELD_EQ(inName,"ExcludeOp") ) { return ::hx::Val( ExcludeOp_dyn() ); }
		if (HX_FIELD_EQ(inName,"Minkowski") ) { return ::hx::Val( Minkowski_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resultKind") ) { return ::hx::Val( resultKind ); }
		if (HX_FIELD_EQ(inName,"m_PolyOuts") ) { return ::hx::Val( m_PolyOuts ); }
		if (HX_FIELD_EQ(inName,"m_ClipType") ) { return ::hx::Val( m_ClipType ); }
		if (HX_FIELD_EQ(inName,"m_Scanbeam") ) { return ::hx::Val( m_Scanbeam ); }
		if (HX_FIELD_EQ(inName,"PointCount") ) { return ::hx::Val( PointCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"GetOverlap") ) { return ::hx::Val( GetOverlap_dyn() ); }
		if (HX_FIELD_EQ(inName,"JoinPoints") ) { return ::hx::Val( JoinPoints_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ExecuteTree") ) { return ::hx::Val( ExecuteTree_dyn() ); }
		if (HX_FIELD_EQ(inName,"PopScanbeam") ) { return ::hx::Val( PopScanbeam_dyn() ); }
		if (HX_FIELD_EQ(inName,"GetBottomPt") ) { return ::hx::Val( GetBottomPt_dyn() ); }
		if (HX_FIELD_EQ(inName,"BuildResult") ) { return ::hx::Val( BuildResult_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_GhostJoins") ) { return ::hx::Val( m_GhostJoins ); }
		if (HX_FIELD_EQ(inName,"AddGhostJoin") ) { return ::hx::Val( AddGhostJoin_dyn() ); }
		if (HX_FIELD_EQ(inName,"AddEdgeToSEL") ) { return ::hx::Val( AddEdgeToSEL_dyn() ); }
		if (HX_FIELD_EQ(inName,"CopyAELToSEL") ) { return ::hx::Val( CopyAELToSEL_dyn() ); }
		if (HX_FIELD_EQ(inName,"CreateOutRec") ) { return ::hx::Val( CreateOutRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"SetHoleState") ) { return ::hx::Val( SetHoleState_dyn() ); }
		if (HX_FIELD_EQ(inName,"GetNextInAEL") ) { return ::hx::Val( GetNextInAEL_dyn() ); }
		if (HX_FIELD_EQ(inName,"BuildResult2") ) { return ::hx::Val( BuildResult2_dyn() ); }
		if (HX_FIELD_EQ(inName,"CleanPolygon") ) { return ::hx::Val( CleanPolygon_dyn() ); }
		if (HX_FIELD_EQ(inName,"MinkowskiSum") ) { return ::hx::Val( MinkowskiSum_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_ActiveEdges") ) { return ::hx::Val( m_ActiveEdges ); }
		if (HX_FIELD_EQ(inName,"m_SortedEdges") ) { return ::hx::Val( m_SortedEdges ); }
		if (HX_FIELD_EQ(inName,"DisposeOutRec") ) { return ::hx::Val( DisposeOutRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"AppendPolygon") ) { return ::hx::Val( AppendPolygon_dyn() ); }
		if (HX_FIELD_EQ(inName,"DeleteFromAEL") ) { return ::hx::Val( DeleteFromAEL_dyn() ); }
		if (HX_FIELD_EQ(inName,"DeleteFromSEL") ) { return ::hx::Val( DeleteFromSEL_dyn() ); }
		if (HX_FIELD_EQ(inName,"GetMaximaPair") ) { return ::hx::Val( GetMaximaPair_dyn() ); }
		if (HX_FIELD_EQ(inName,"EdgesAdjacent") ) { return ::hx::Val( EdgesAdjacent_dyn() ); }
		if (HX_FIELD_EQ(inName,"CleanPolygons") ) { return ::hx::Val( CleanPolygons_dyn() ); }
		if (HX_FIELD_EQ(inName,"TranslatePath") ) { return ::hx::Val( TranslatePath_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strictlySimple") ) { return ::hx::Val( strictlySimple ); }
		if (HX_FIELD_EQ(inName,"m_ClipFillType") ) { return ::hx::Val( m_ClipFillType ); }
		if (HX_FIELD_EQ(inName,"m_SubjFillType") ) { return ::hx::Val( m_SubjFillType ); }
		if (HX_FIELD_EQ(inName,"InsertScanbeam") ) { return ::hx::Val( InsertScanbeam_dyn() ); }
		if (HX_FIELD_EQ(inName,"FixHoleLinkage") ) { return ::hx::Val( FixHoleLinkage_dyn() ); }
		if (HX_FIELD_EQ(inName,"IsContributing") ) { return ::hx::Val( IsContributing_dyn() ); }
		if (HX_FIELD_EQ(inName,"IntersectEdges") ) { return ::hx::Val( IntersectEdges_dyn() ); }
		if (HX_FIELD_EQ(inName,"IsIntermediate") ) { return ::hx::Val( IsIntermediate_dyn() ); }
		if (HX_FIELD_EQ(inName,"IntersectPoint") ) { return ::hx::Val( IntersectPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"PointInPolygon") ) { return ::hx::Val( PointInPolygon_dyn() ); }
		if (HX_FIELD_EQ(inName,"ParseFirstLeft") ) { return ::hx::Val( ParseFirstLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"PointsAreClose") ) { return ::hx::Val( PointsAreClose_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"reverseSolution") ) { return ::hx::Val( reverseSolution ); }
		if (HX_FIELD_EQ(inName,"m_IntersectList") ) { return ::hx::Val( m_IntersectList ); }
		if (HX_FIELD_EQ(inName,"m_ExecuteLocked") ) { return ::hx::Val( m_ExecuteLocked ); }
		if (HX_FIELD_EQ(inName,"m_UsingPolyTree") ) { return ::hx::Val( m_UsingPolyTree ); }
		if (HX_FIELD_EQ(inName,"ExecuteInternal") ) { return ::hx::Val( ExecuteInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"SetWindingCount") ) { return ::hx::Val( SetWindingCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"AddLocalMaxPoly") ) { return ::hx::Val( AddLocalMaxPoly_dyn() ); }
		if (HX_FIELD_EQ(inName,"AddLocalMinPoly") ) { return ::hx::Val( AddLocalMinPoly_dyn() ); }
		if (HX_FIELD_EQ(inName,"FirstIsBottomPt") ) { return ::hx::Val( FirstIsBottomPt_dyn() ); }
		if (HX_FIELD_EQ(inName,"GetLowermostRec") ) { return ::hx::Val( GetLowermostRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"SwapPolyIndexes") ) { return ::hx::Val( SwapPolyIndexes_dyn() ); }
		if (HX_FIELD_EQ(inName,"reversePolygons") ) { return ::hx::Val( reversePolygons_dyn() ); }
		if (HX_FIELD_EQ(inName,"FixupOutPolygon") ) { return ::hx::Val( FixupOutPolygon_dyn() ); }
		if (HX_FIELD_EQ(inName,"PointInPolygon2") ) { return ::hx::Val( PointInPolygon2_dyn() ); }
		if (HX_FIELD_EQ(inName,"JoinCommonEdges") ) { return ::hx::Val( JoinCommonEdges_dyn() ); }
		if (HX_FIELD_EQ(inName,"UpdateOutPtIdxs") ) { return ::hx::Val( UpdateOutPtIdxs_dyn() ); }
		if (HX_FIELD_EQ(inName,"PolyTreeToPaths") ) { return ::hx::Val( PolyTreeToPaths_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetHorzDirection") ) { return ::hx::Val( GetHorzDirection_dyn() ); }
		if (HX_FIELD_EQ(inName,"FixupFirstLefts1") ) { return ::hx::Val( FixupFirstLefts1_dyn() ); }
		if (HX_FIELD_EQ(inName,"FixupFirstLefts2") ) { return ::hx::Val( FixupFirstLefts2_dyn() ); }
		if (HX_FIELD_EQ(inName,"DoSimplePolygons") ) { return ::hx::Val( DoSimplePolygons_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DisposeAllPolyPts") ) { return ::hx::Val( DisposeAllPolyPts_dyn() ); }
		if (HX_FIELD_EQ(inName,"InsertEdgeIntoAEL") ) { return ::hx::Val( InsertEdgeIntoAEL_dyn() ); }
		if (HX_FIELD_EQ(inName,"E2InsertsBeforeE1") ) { return ::hx::Val( E2InsertsBeforeE1_dyn() ); }
		if (HX_FIELD_EQ(inName,"IsEvenOddFillType") ) { return ::hx::Val( IsEvenOddFillType_dyn() ); }
		if (HX_FIELD_EQ(inName,"UpdateEdgeIntoAEL") ) { return ::hx::Val( UpdateEdgeIntoAEL_dyn() ); }
		if (HX_FIELD_EQ(inName,"ProcessHorizontal") ) { return ::hx::Val( ProcessHorizontal_dyn() ); }
		if (HX_FIELD_EQ(inName,"IntersectNodeSort") ) { return ::hx::Val( IntersectNodeSort_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"SwapPositionsInAEL") ) { return ::hx::Val( SwapPositionsInAEL_dyn() ); }
		if (HX_FIELD_EQ(inName,"SwapPositionsInSEL") ) { return ::hx::Val( SwapPositionsInSEL_dyn() ); }
		if (HX_FIELD_EQ(inName,"ReversePolyPtLinks") ) { return ::hx::Val( ReversePolyPtLinks_dyn() ); }
		if (HX_FIELD_EQ(inName,"ProcessHorizontals") ) { return ::hx::Val( ProcessHorizontals_dyn() ); }
		if (HX_FIELD_EQ(inName,"BuildIntersectList") ) { return ::hx::Val( BuildIntersectList_dyn() ); }
		if (HX_FIELD_EQ(inName,"Poly2ContainsPoly1") ) { return ::hx::Val( Poly2ContainsPoly1_dyn() ); }
		if (HX_FIELD_EQ(inName,"AddPolyNodeToPaths") ) { return ::hx::Val( AddPolyNodeToPaths_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DisposeScanbeamList") ) { return ::hx::Val( DisposeScanbeamList_dyn() ); }
		if (HX_FIELD_EQ(inName,"HorzSegmentsOverlap") ) { return ::hx::Val( HorzSegmentsOverlap_dyn() ); }
		if (HX_FIELD_EQ(inName,"Param1RightOfParam2") ) { return ::hx::Val( Param1RightOfParam2_dyn() ); }
		if (HX_FIELD_EQ(inName,"SlopesNearCollinear") ) { return ::hx::Val( SlopesNearCollinear_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"IsEvenOddAltFillType") ) { return ::hx::Val( IsEvenOddAltFillType_dyn() ); }
		if (HX_FIELD_EQ(inName,"ProcessIntersections") ) { return ::hx::Val( ProcessIntersections_dyn() ); }
		if (HX_FIELD_EQ(inName,"ProcessIntersectList") ) { return ::hx::Val( ProcessIntersectList_dyn() ); }
		if (HX_FIELD_EQ(inName,"DistanceFromLineSqrd") ) { return ::hx::Val( DistanceFromLineSqrd_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"FixupIntersectionOrder") ) { return ::hx::Val( FixupIntersectionOrder_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"InsertLocalMinimaIntoAEL") ) { return ::hx::Val( InsertLocalMinimaIntoAEL_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"ProcessEdgesAtTopOfScanbeam") ) { return ::hx::Val( ProcessEdgesAtTopOfScanbeam_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Clipper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"polArea") ) { outValue = polArea_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compareY") ) { outValue = compareY_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Orientation") ) { outValue = Orientation_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MinkowskiSums") ) { outValue = MinkowskiSums_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"MinkowskiDiff") ) { outValue = MinkowskiDiff_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SimplifyPolygon") ) { outValue = SimplifyPolygon_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SimplifyPolygons") ) { outValue = SimplifyPolygons_dyn(); return true; }
	}
	return false;
}

::hx::Val Clipper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_Joins") ) { m_Joins=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resultKind") ) { resultKind=inValue.Cast<  ::hxd::clipper::ResultKind >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_PolyOuts") ) { m_PolyOuts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_ClipType") ) { m_ClipType=inValue.Cast<  ::hxd::clipper::ClipType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_Scanbeam") ) { m_Scanbeam=inValue.Cast<  ::hxd::clipper::_Clipper::Scanbeam >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_GhostJoins") ) { m_GhostJoins=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_ActiveEdges") ) { m_ActiveEdges=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_SortedEdges") ) { m_SortedEdges=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strictlySimple") ) { strictlySimple=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_ClipFillType") ) { m_ClipFillType=inValue.Cast<  ::hxd::clipper::PolyFillType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_SubjFillType") ) { m_SubjFillType=inValue.Cast<  ::hxd::clipper::PolyFillType >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"reverseSolution") ) { reverseSolution=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_IntersectList") ) { m_IntersectList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_ExecuteLocked") ) { m_ExecuteLocked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_UsingPolyTree") ) { m_UsingPolyTree=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Clipper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strictlySimple",e8,ce,be,d9));
	outFields->push(HX_("reverseSolution",bb,4d,00,a8));
	outFields->push(HX_("resultKind",d1,a8,49,b8));
	outFields->push(HX_("m_PolyOuts",03,5a,75,1d));
	outFields->push(HX_("m_ClipType",1c,f3,c8,5a));
	outFields->push(HX_("m_Scanbeam",de,9e,38,27));
	outFields->push(HX_("m_ActiveEdges",be,23,57,c3));
	outFields->push(HX_("m_SortedEdges",e7,22,78,7c));
	outFields->push(HX_("m_IntersectList",2b,ea,41,af));
	outFields->push(HX_("m_ExecuteLocked",6d,de,22,ca));
	outFields->push(HX_("m_ClipFillType",3f,c4,1f,c9));
	outFields->push(HX_("m_SubjFillType",59,a6,36,39));
	outFields->push(HX_("m_Joins",97,80,e0,95));
	outFields->push(HX_("m_GhostJoins",6c,b9,84,99));
	outFields->push(HX_("m_UsingPolyTree",7c,b4,2d,b3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Clipper_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Clipper_obj,strictlySimple),HX_("strictlySimple",e8,ce,be,d9)},
	{::hx::fsBool,(int)offsetof(Clipper_obj,reverseSolution),HX_("reverseSolution",bb,4d,00,a8)},
	{::hx::fsObject /*  ::hxd::clipper::ResultKind */ ,(int)offsetof(Clipper_obj,resultKind),HX_("resultKind",d1,a8,49,b8)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Clipper_obj,m_PolyOuts),HX_("m_PolyOuts",03,5a,75,1d)},
	{::hx::fsObject /*  ::hxd::clipper::ClipType */ ,(int)offsetof(Clipper_obj,m_ClipType),HX_("m_ClipType",1c,f3,c8,5a)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::Scanbeam */ ,(int)offsetof(Clipper_obj,m_Scanbeam),HX_("m_Scanbeam",de,9e,38,27)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(Clipper_obj,m_ActiveEdges),HX_("m_ActiveEdges",be,23,57,c3)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(Clipper_obj,m_SortedEdges),HX_("m_SortedEdges",e7,22,78,7c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Clipper_obj,m_IntersectList),HX_("m_IntersectList",2b,ea,41,af)},
	{::hx::fsBool,(int)offsetof(Clipper_obj,m_ExecuteLocked),HX_("m_ExecuteLocked",6d,de,22,ca)},
	{::hx::fsObject /*  ::hxd::clipper::PolyFillType */ ,(int)offsetof(Clipper_obj,m_ClipFillType),HX_("m_ClipFillType",3f,c4,1f,c9)},
	{::hx::fsObject /*  ::hxd::clipper::PolyFillType */ ,(int)offsetof(Clipper_obj,m_SubjFillType),HX_("m_SubjFillType",59,a6,36,39)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Clipper_obj,m_Joins),HX_("m_Joins",97,80,e0,95)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Clipper_obj,m_GhostJoins),HX_("m_GhostJoins",6c,b9,84,99)},
	{::hx::fsBool,(int)offsetof(Clipper_obj,m_UsingPolyTree),HX_("m_UsingPolyTree",7c,b4,2d,b3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Clipper_obj_sStaticStorageInfo = 0;
#endif

static ::String Clipper_obj_sMemberFields[] = {
	HX_("strictlySimple",e8,ce,be,d9),
	HX_("reverseSolution",bb,4d,00,a8),
	HX_("resultKind",d1,a8,49,b8),
	HX_("m_PolyOuts",03,5a,75,1d),
	HX_("m_ClipType",1c,f3,c8,5a),
	HX_("m_Scanbeam",de,9e,38,27),
	HX_("m_ActiveEdges",be,23,57,c3),
	HX_("m_SortedEdges",e7,22,78,7c),
	HX_("m_IntersectList",2b,ea,41,af),
	HX_("m_ExecuteLocked",6d,de,22,ca),
	HX_("m_ClipFillType",3f,c4,1f,c9),
	HX_("m_SubjFillType",59,a6,36,39),
	HX_("m_Joins",97,80,e0,95),
	HX_("m_GhostJoins",6c,b9,84,99),
	HX_("m_UsingPolyTree",7c,b4,2d,b3),
	HX_("xor",9b,6f,5b,00),
	HX_("DisposeScanbeamList",09,87,1d,1f),
	HX_("Reset",af,b9,f5,79),
	HX_("InsertScanbeam",e5,d5,5b,13),
	HX_("execute",35,0a,0d,cc),
	HX_("ExecuteTree",13,26,a6,f8),
	HX_("FixHoleLinkage",f0,db,9a,c7),
	HX_("ExecuteInternal",72,f2,d5,9d),
	HX_("PopScanbeam",fd,0b,57,ef),
	HX_("DisposeAllPolyPts",41,79,70,05),
	HX_("DisposeOutRec",41,43,70,54),
	HX_("AddJoin",8b,9e,f3,4f),
	HX_("AddGhostJoin",98,b0,98,e1),
	HX_("InsertLocalMinimaIntoAEL",2b,15,8b,cf),
	HX_("InsertEdgeIntoAEL",b2,dc,16,b8),
	HX_("E2InsertsBeforeE1",f8,8d,16,07),
	HX_("IsEvenOddFillType",c8,0d,e6,0a),
	HX_("IsEvenOddAltFillType",1b,b3,8c,19),
	HX_("IsContributing",54,fe,6e,84),
	HX_("SetWindingCount",f7,07,01,51),
	HX_("AddEdgeToSEL",21,49,ce,1c),
	HX_("CopyAELToSEL",ac,4d,b7,af),
	HX_("SwapPositionsInAEL",2c,02,f8,93),
	HX_("SwapPositionsInSEL",be,aa,05,94),
	HX_("AddLocalMaxPoly",86,7c,79,87),
	HX_("AddLocalMinPoly",74,92,52,f8),
	HX_("CreateOutRec",9e,c9,d1,f6),
	HX_("AddOutPt",71,88,37,8a),
	HX_("HorzSegmentsOverlap",18,54,a2,02),
	HX_("SetHoleState",cf,a0,a6,6f),
	HX_("GetDx",aa,fd,8d,24),
	HX_("FirstIsBottomPt",09,b0,74,67),
	HX_("GetBottomPt",65,58,d7,6c),
	HX_("GetLowermostRec",42,ba,3c,cf),
	HX_("Param1RightOfParam2",b4,79,92,3e),
	HX_("GetOutRec",78,a6,93,2a),
	HX_("AppendPolygon",a0,e7,a1,93),
	HX_("ReversePolyPtLinks",c7,1f,a1,31),
	HX_("SwapSides",49,47,48,94),
	HX_("SwapPolyIndexes",21,4f,62,58),
	HX_("IntersectEdges",57,e8,63,86),
	HX_("DeleteFromAEL",b3,8a,6e,fe),
	HX_("DeleteFromSEL",45,33,7c,fe),
	HX_("UpdateEdgeIntoAEL",e2,eb,ba,55),
	HX_("GetHorzDirection",5a,2f,eb,14),
	HX_("ProcessHorizontals",00,2d,c3,91),
	HX_("ProcessHorizontal",13,64,14,80),
	HX_("GetNextInAEL",da,f2,a7,3c),
	HX_("IsMinima",55,19,1a,85),
	HX_("IsMaxima",83,97,81,f0),
	HX_("IsIntermediate",e3,7a,f3,bb),
	HX_("GetMaximaPair",a9,54,73,f3),
	HX_("ProcessIntersections",3b,5e,c7,e8),
	HX_("BuildIntersectList",ef,58,9c,31),
	HX_("EdgesAdjacent",58,48,9a,36),
	HX_("IntersectNodeSort",5f,7a,cc,70),
	HX_("FixupIntersectionOrder",15,e4,e9,48),
	HX_("ProcessIntersectList",0e,a5,97,d5),
	HX_("Round",2e,68,93,80),
	HX_("TopX",43,88,da,37),
	HX_("IntersectPoint",11,2f,13,e3),
	HX_("ProcessEdgesAtTopOfScanbeam",9e,8e,25,b2),
	HX_("DoMaxima",e4,81,2f,2c),
	HX_("reversePolygons",fb,0f,70,41),
	HX_("PointCount",7f,62,d2,20),
	HX_("BuildResult",8b,e6,27,3d),
	HX_("BuildResult2",47,d3,c1,45),
	HX_("FixupOutPolygon",fc,96,f9,3f),
	HX_("DupOutPt",13,16,04,c5),
	HX_("GetOverlap",b1,cd,22,ef),
	HX_("JoinHorz",b9,27,dc,11),
	HX_("JoinPoints",cd,89,df,8b),
	HX_("PointInPolygon",c5,fa,da,27),
	HX_("PointInPolygon2",cd,71,c0,b7),
	HX_("Poly2ContainsPoly1",a0,31,eb,da),
	HX_("FixupFirstLefts1",05,af,f4,da),
	HX_("FixupFirstLefts2",06,af,f4,da),
	HX_("ParseFirstLeft",c4,49,f5,ec),
	HX_("JoinCommonEdges",81,4c,fa,9b),
	HX_("UpdateOutPtIdxs",7f,5d,20,1a),
	HX_("DoSimplePolygons",16,30,87,fa),
	HX_("Area",ad,b7,4d,2b),
	HX_("DistanceFromLineSqrd",63,9c,7b,1b),
	HX_("SlopesNearCollinear",f5,c1,ab,ad),
	HX_("PointsAreClose",27,d6,e0,97),
	HX_("ExcludeOp",7b,ce,56,8e),
	HX_("CleanPolygon",11,38,58,d1),
	HX_("CleanPolygons",42,d7,d8,5b),
	HX_("Minkowski",50,6f,30,c7),
	HX_("MinkowskiSum",1b,64,9f,6a),
	HX_("TranslatePath",f3,f7,13,02),
	HX_("PolyTreeToPaths",e9,5a,ef,83),
	HX_("AddPolyNodeToPaths",e4,c5,55,0c),
	::String(null()) };

::hx::Class Clipper_obj::__mClass;

static ::String Clipper_obj_sStaticFields[] = {
	HX_("compareY",14,78,8c,78),
	HX_("Orientation",b0,86,31,e2),
	HX_("polArea",ba,5f,95,ed),
	HX_("SimplifyPolygon",51,be,ab,ce),
	HX_("SimplifyPolygons",02,c9,9a,07),
	HX_("MinkowskiSums",f8,33,d8,e0),
	HX_("MinkowskiDiff",75,df,e4,d6),
	::String(null())
};

void Clipper_obj::__register()
{
	Clipper_obj _hx_dummy;
	Clipper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper.Clipper",72,ad,89,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Clipper_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Clipper_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Clipper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Clipper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Clipper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Clipper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
