#ifndef INCLUDED_hxd_earcut_Earcut
#define INCLUDED_hxd_earcut_Earcut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,GPoint)
HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS2(hxd,earcut,EarNode)
HX_DECLARE_CLASS2(hxd,earcut,Earcut)

namespace hxd{
namespace earcut{


class HXCPP_CLASS_ATTRIBUTES Earcut_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Earcut_obj OBJ_;
		Earcut_obj();

	public:
		enum { _hx_ClassId = 0x1763238c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.earcut.Earcut")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.earcut.Earcut"); }
		static ::hx::ObjectPtr< Earcut_obj > __new();
		static ::hx::ObjectPtr< Earcut_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Earcut_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Earcut",cc,02,24,bc); }

		::Array< int > triangulate_h2d_GPoint(::Array< ::Dynamic> points,::Array< int > holes);
		::Dynamic triangulate_h2d_GPoint_dyn();

		::Array< int > triangulate_h2d_col_Point(::Array< ::Dynamic> points,::Array< int > holes);
		::Dynamic triangulate_h2d_col_Point_dyn();

		 ::hxd::earcut::EarNode eliminateHoles_triangulate_T(::cpp::VirtualArray points,::Array< int > holes, ::hxd::earcut::EarNode root);
		::Dynamic eliminateHoles_triangulate_T_dyn();

		 ::hxd::earcut::EarNode setLinkedList_eliminateHoles_T(::cpp::VirtualArray points,int start,int end,bool clockwise);
		::Dynamic setLinkedList_eliminateHoles_T_dyn();

		 ::hxd::earcut::EarNode setLinkedList_triangulate_T(::cpp::VirtualArray points,int start,int end,bool clockwise);
		::Dynamic setLinkedList_triangulate_T_dyn();

		::Array< int > triangles;
		 ::hxd::earcut::EarNode cache;
		 ::hxd::earcut::EarNode allocated;
		Float minX;
		Float minY;
		Float size;
		bool hasSize;
		::Array< int > triangulateNode( ::hxd::earcut::EarNode root,bool useZOrder);
		::Dynamic triangulateNode_dyn();

		void eliminateHole( ::hxd::earcut::EarNode hole, ::hxd::earcut::EarNode root);
		::Dynamic eliminateHole_dyn();

		 ::hxd::earcut::EarNode findHoleBridge( ::hxd::earcut::EarNode hole, ::hxd::earcut::EarNode root);
		::Dynamic findHoleBridge_dyn();

		 ::hxd::earcut::EarNode getLeftmost( ::hxd::earcut::EarNode node);
		::Dynamic getLeftmost_dyn();

		int compareX( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b);
		::Dynamic compareX_dyn();

		bool equals( ::hxd::earcut::EarNode p1, ::hxd::earcut::EarNode p2);
		::Dynamic equals_dyn();

		Float area( ::hxd::earcut::EarNode p, ::hxd::earcut::EarNode q, ::hxd::earcut::EarNode r);
		::Dynamic area_dyn();

		bool intersects( ::hxd::earcut::EarNode p1, ::hxd::earcut::EarNode q1, ::hxd::earcut::EarNode p2, ::hxd::earcut::EarNode q2);
		::Dynamic intersects_dyn();

		bool locallyInside( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b);
		::Dynamic locallyInside_dyn();

		 ::hxd::earcut::EarNode filterPoints( ::hxd::earcut::EarNode start, ::hxd::earcut::EarNode end);
		::Dynamic filterPoints_dyn();

		void removeNode( ::hxd::earcut::EarNode p);
		::Dynamic removeNode_dyn();

		 ::hxd::earcut::EarNode allocNode(int i,Float x,Float y, ::hxd::earcut::EarNode last);
		::Dynamic allocNode_dyn();

		void earcutLinked( ::hxd::earcut::EarNode ear,::hx::Null< int >  pass);
		::Dynamic earcutLinked_dyn();

		bool isEar( ::hxd::earcut::EarNode ear);
		::Dynamic isEar_dyn();

		bool isEarHashed( ::hxd::earcut::EarNode ear);
		::Dynamic isEarHashed_dyn();

		 ::hxd::earcut::EarNode cureLocalIntersections( ::hxd::earcut::EarNode start);
		::Dynamic cureLocalIntersections_dyn();

		void splitEarcut( ::hxd::earcut::EarNode start);
		::Dynamic splitEarcut_dyn();

		 ::hxd::earcut::EarNode splitPolygon( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b);
		::Dynamic splitPolygon_dyn();

		bool pointInTriangle(Float ax,Float ay,Float bx,Float by,Float cx,Float cy,Float px,Float py);
		::Dynamic pointInTriangle_dyn();

		bool isValidDiagonal( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b);
		::Dynamic isValidDiagonal_dyn();

		bool middleInside( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b);
		::Dynamic middleInside_dyn();

		bool intersectsPolygon( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b);
		::Dynamic intersectsPolygon_dyn();

		int zOrder(Float px,Float py);
		::Dynamic zOrder_dyn();

		void indexCurve( ::hxd::earcut::EarNode start);
		::Dynamic indexCurve_dyn();

		 ::hxd::earcut::EarNode sortLinked( ::hxd::earcut::EarNode list);
		::Dynamic sortLinked_dyn();

};

} // end namespace hxd
} // end namespace earcut

#endif /* INCLUDED_hxd_earcut_Earcut */ 
