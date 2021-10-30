#ifndef INCLUDED_hxd_clipper_ClipperOffset
#define INCLUDED_hxd_clipper_ClipperOffset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS2(hxd,clipper,ClipperOffset)
HX_DECLARE_CLASS2(hxd,clipper,EndType)
HX_DECLARE_CLASS2(hxd,clipper,JoinType)
HX_DECLARE_CLASS2(hxd,clipper,ResultKind)
HX_DECLARE_CLASS3(hxd,clipper,_Clipper,PolyNode)

namespace hxd{
namespace clipper{


class HXCPP_CLASS_ATTRIBUTES ClipperOffset_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ClipperOffset_obj OBJ_;
		ClipperOffset_obj();

	public:
		enum { _hx_ClassId = 0x69b94687 };

		void __construct(::hx::Null< Float >  __o_miterLimit,::hx::Null< Float >  __o_arcTolerance);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.clipper.ClipperOffset")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.clipper.ClipperOffset"); }
		static ::hx::ObjectPtr< ClipperOffset_obj > __new(::hx::Null< Float >  __o_miterLimit,::hx::Null< Float >  __o_arcTolerance);
		static ::hx::ObjectPtr< ClipperOffset_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_miterLimit,::hx::Null< Float >  __o_arcTolerance);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClipperOffset_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClipperOffset",60,6b,d9,ed); }

		::Array< ::Dynamic> m_destPolys;
		::Array< ::Dynamic> m_srcPoly;
		::Array< ::Dynamic> m_destPoly;
		::Array< ::Dynamic> m_normals;
		Float m_delta;
		Float m_sinA;
		Float m_sin;
		Float m_cos;
		Float m_miterLim;
		Float m_StepsPerRad;
		 ::h2d::col::IPoint m_lowest;
		 ::hxd::clipper::_Clipper::PolyNode m_polyNodes;
		Float ArcTolerance;
		Float MiterLimit;
		 ::hxd::clipper::ResultKind resultKind;
		Float def_arc_tolerance;
		Float two_pi;
		void clear();
		::Dynamic clear_dyn();

		void addPolygon(::Array< ::Dynamic> pol, ::hxd::clipper::JoinType joinType, ::hxd::clipper::EndType endType);
		::Dynamic addPolygon_dyn();

		void addPolygons(::Array< ::Dynamic> pols, ::hxd::clipper::JoinType joinType, ::hxd::clipper::EndType endType);
		::Dynamic addPolygons_dyn();

		void fixOrientations();
		::Dynamic fixOrientations_dyn();

		 ::h2d::col::Point getUnitNormal( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2);
		::Dynamic getUnitNormal_dyn();

		void doOffset(Float delta);
		::Dynamic doOffset_dyn();

		::Array< ::Dynamic> execute(Float delta);
		::Dynamic execute_dyn();

		int offsetPoint(int j,int k, ::hxd::clipper::JoinType jointype);
		::Dynamic offsetPoint_dyn();

		void doSquare(int j,int k);
		::Dynamic doSquare_dyn();

		void doMiter(int j,int k,Float r);
		::Dynamic doMiter_dyn();

		void doRound(int j,int k);
		::Dynamic doRound_dyn();

};

} // end namespace hxd
} // end namespace clipper

#endif /* INCLUDED_hxd_clipper_ClipperOffset */ 
