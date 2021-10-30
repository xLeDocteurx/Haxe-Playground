#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_IBounds
#include <h2d/col/IBounds.h>
#endif
#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_h2d_col_OffsetKind
#include <h2d/col/OffsetKind.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h2d_col__IPolygon_IPolygon_Impl_
#include <h2d/col/_IPolygon/IPolygon_Impl_.h>
#endif
#ifndef INCLUDED_h2d_col__IPolygons_IPolygons_Impl_
#include <h2d/col/_IPolygons/IPolygons_Impl_.h>
#endif
#ifndef INCLUDED_hxd_clipper_ClipType
#include <hxd/clipper/ClipType.h>
#endif
#ifndef INCLUDED_hxd_clipper_Clipper
#include <hxd/clipper/Clipper.h>
#endif
#ifndef INCLUDED_hxd_clipper_ClipperOffset
#include <hxd/clipper/ClipperOffset.h>
#endif
#ifndef INCLUDED_hxd_clipper_EndType
#include <hxd/clipper/EndType.h>
#endif
#ifndef INCLUDED_hxd_clipper_JoinType
#include <hxd/clipper/JoinType.h>
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
#ifndef INCLUDED_hxd_impl_ArrayIterator_h2d_col_IPolygon
#include <hxd/impl/ArrayIterator_h2d_col_IPolygon.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_18_get_length,"h2d.col._IPolygons.IPolygons_Impl_","get_length",0xa49b9a44,"h2d.col._IPolygons.IPolygons_Impl_.get_length","h2d/col/IPolygons.hx",18,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_20_get_polygons,"h2d.col._IPolygons.IPolygons_Impl_","get_polygons",0xc2f7c197,"h2d.col._IPolygons.IPolygons_Impl_.get_polygons","h2d/col/IPolygons.hx",20,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_26__new,"h2d.col._IPolygons.IPolygons_Impl_","_new",0x16709d36,"h2d.col._IPolygons.IPolygons_Impl_._new","h2d/col/IPolygons.hx",26,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_32_iterator,"h2d.col._IPolygons.IPolygons_Impl_","iterator",0xa414e043,"h2d.col._IPolygons.IPolygons_Impl_.iterator","h2d/col/IPolygons.hx",32,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_39_toPolygons,"h2d.col._IPolygons.IPolygons_Impl_","toPolygons",0xb37a52e9,"h2d.col._IPolygons.IPolygons_Impl_.toPolygons","h2d/col/IPolygons.hx",39,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_46_getBounds,"h2d.col._IPolygons.IPolygons_Impl_","getBounds",0x3d3d03b6,"h2d.col._IPolygons.IPolygons_Impl_.getBounds","h2d/col/IPolygons.hx",46,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_58_union,"h2d.col._IPolygons.IPolygons_Impl_","union",0x36ecb79a,"h2d.col._IPolygons.IPolygons_Impl_.union","h2d/col/IPolygons.hx",58,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_72_intersection,"h2d.col._IPolygons.IPolygons_Impl_","intersection",0x69ee871e,"h2d.col._IPolygons.IPolygons_Impl_.intersection","h2d/col/IPolygons.hx",72,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_81_subtraction,"h2d.col._IPolygons.IPolygons_Impl_","subtraction",0x620449ff,"h2d.col._IPolygons.IPolygons_Impl_.subtraction","h2d/col/IPolygons.hx",81,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_90_offset,"h2d.col._IPolygons.IPolygons_Impl_","offset",0xd4e27ea8,"h2d.col._IPolygons.IPolygons_Impl_.offset","h2d/col/IPolygons.hx",90,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_107_clipperOp,"h2d.col._IPolygons.IPolygons_Impl_","clipperOp",0xa5ad1e99,"h2d.col._IPolygons.IPolygons_Impl_.clipperOp","h2d/col/IPolygons.hx",107,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_120_contains,"h2d.col._IPolygons.IPolygons_Impl_","contains",0x3cf5f074,"h2d.col._IPolygons.IPolygons_Impl_.contains","h2d/col/IPolygons.hx",120,0x8a7a82e0)
HX_LOCAL_STACK_FRAME(_hx_pos_611ed21a78b5a578_131_optimize,"h2d.col._IPolygons.IPolygons_Impl_","optimize",0x2d932332,"h2d.col._IPolygons.IPolygons_Impl_.optimize","h2d/col/IPolygons.hx",131,0x8a7a82e0)
namespace h2d{
namespace col{
namespace _IPolygons{

void IPolygons_Impl__obj::__construct() { }

Dynamic IPolygons_Impl__obj::__CreateEmpty() { return new IPolygons_Impl__obj; }

void *IPolygons_Impl__obj::_hx_vtable = 0;

Dynamic IPolygons_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IPolygons_Impl__obj > _hx_result = new IPolygons_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IPolygons_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e7a566d;
}

int IPolygons_Impl__obj::get_length(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_611ed21a78b5a578_18_get_length)
HXDLIN(  18)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygons_Impl__obj,get_length,return )

::Array< ::Dynamic> IPolygons_Impl__obj::get_polygons(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_611ed21a78b5a578_20_get_polygons)
HXDLIN(  20)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygons_Impl__obj,get_polygons,return )

::Array< ::Dynamic> IPolygons_Impl__obj::_new(::Array< ::Dynamic> polygons){
            	HX_STACKFRAME(&_hx_pos_611ed21a78b5a578_26__new)
HXDLIN(  26)		::Array< ::Dynamic> this1;
HXLINE(  27)		if (::hx::IsNull( polygons )) {
HXLINE(  27)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  27)			this1 = polygons;
            		}
HXLINE(  26)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygons_Impl__obj,_new,return )

 ::hxd::impl::ArrayIterator_h2d_col_IPolygon IPolygons_Impl__obj::iterator(::Array< ::Dynamic> this1){
            	HX_GC_STACKFRAME(&_hx_pos_611ed21a78b5a578_32_iterator)
HXDLIN(  32)		return  ::hxd::impl::ArrayIterator_h2d_col_IPolygon_obj::__alloc( HX_CTX ,this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygons_Impl__obj,iterator,return )

::Array< ::Dynamic> IPolygons_Impl__obj::toPolygons(::Array< ::Dynamic> this1,::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_611ed21a78b5a578_39_toPolygons)
HXDLIN(  39)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  39)		{
HXDLIN(  39)			int _g1 = 0;
HXDLIN(  39)			::Array< ::Dynamic> _g2 = this1;
HXDLIN(  39)			while((_g1 < _g2->length)){
HXDLIN(  39)				::Array< ::Dynamic> p = _g2->__get(_g1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  39)				_g1 = (_g1 + 1);
HXDLIN(  39)				_g->push(::h2d::col::_IPolygon::IPolygon_Impl__obj::toPolygon(p,scale));
            			}
            		}
HXDLIN(  39)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IPolygons_Impl__obj,toPolygons,return )

 ::h2d::col::IBounds IPolygons_Impl__obj::getBounds(::Array< ::Dynamic> this1, ::h2d::col::IBounds b){
            	HX_GC_STACKFRAME(&_hx_pos_611ed21a78b5a578_46_getBounds)
HXLINE(  47)		if (::hx::IsNull( b )) {
HXLINE(  47)			b =  ::h2d::col::IBounds_obj::__alloc( HX_CTX );
            		}
HXLINE(  48)		{
HXLINE(  48)			int _g = 0;
HXDLIN(  48)			::Array< ::Dynamic> _g1 = this1;
HXDLIN(  48)			while((_g < _g1->length)){
HXLINE(  48)				::Array< ::Dynamic> p = _g1->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  48)				_g = (_g + 1);
HXLINE(  49)				::h2d::col::_IPolygon::IPolygon_Impl__obj::getBounds(p,b);
            			}
            		}
HXLINE(  50)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IPolygons_Impl__obj,getBounds,return )

::Array< ::Dynamic> IPolygons_Impl__obj::_hx_union(::Array< ::Dynamic> this1,::Array< ::Dynamic> p,::hx::Null< bool >  __o_withHoles){
            		bool withHoles = __o_withHoles.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_611ed21a78b5a578_58_union)
HXLINE(  59)		 ::hxd::clipper::Clipper c =  ::hxd::clipper::Clipper_obj::__alloc( HX_CTX );
HXLINE(  60)		if (!(withHoles)) {
HXLINE(  60)			c->resultKind = ::hxd::clipper::ResultKind_obj::NoHoles_dyn();
            		}
HXLINE(  61)		c->addPolygons(this1,::hxd::clipper::PolyType_obj::Clip_dyn());
HXLINE(  62)		if (::hx::IsNotNull( p )) {
HXLINE(  62)			c->addPolygons(p,::hxd::clipper::PolyType_obj::Clip_dyn());
            		}
HXLINE(  63)		return c->execute(::hxd::clipper::ClipType_obj::Union_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IPolygons_Impl__obj,_hx_union,return )

::Array< ::Dynamic> IPolygons_Impl__obj::intersection(::Array< ::Dynamic> this1,::Array< ::Dynamic> p,::hx::Null< bool >  __o_withHoles){
            		bool withHoles = __o_withHoles.Default(true);
            	HX_STACKFRAME(&_hx_pos_611ed21a78b5a578_72_intersection)
HXDLIN(  72)		return ::h2d::col::_IPolygons::IPolygons_Impl__obj::clipperOp(this1,p,::hxd::clipper::ClipType_obj::Intersection_dyn(),withHoles);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IPolygons_Impl__obj,intersection,return )

::Array< ::Dynamic> IPolygons_Impl__obj::subtraction(::Array< ::Dynamic> this1,::Array< ::Dynamic> p,::hx::Null< bool >  __o_withHoles){
            		bool withHoles = __o_withHoles.Default(true);
            	HX_STACKFRAME(&_hx_pos_611ed21a78b5a578_81_subtraction)
HXDLIN(  81)		return ::h2d::col::_IPolygons::IPolygons_Impl__obj::clipperOp(this1,p,::hxd::clipper::ClipType_obj::Difference_dyn(),withHoles);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IPolygons_Impl__obj,subtraction,return )

::Array< ::Dynamic> IPolygons_Impl__obj::offset(::Array< ::Dynamic> this1,Float delta, ::h2d::col::OffsetKind kind,::hx::Null< bool >  __o_withHoles){
            		bool withHoles = __o_withHoles.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_611ed21a78b5a578_90_offset)
HXLINE(  91)		if ((this1->length == 0)) {
HXLINE(  92)			::Array< ::Dynamic> polygons = null();
HXDLIN(  92)			::Array< ::Dynamic> this1;
HXDLIN(  92)			if (::hx::IsNull( polygons )) {
HXLINE(  92)				this1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  92)				this1 = polygons;
            			}
HXDLIN(  92)			return this1;
            		}
HXLINE(  93)		 ::hxd::clipper::ClipperOffset c =  ::hxd::clipper::ClipperOffset_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  94)		switch((int)(kind->_hx_getIndex())){
            			case (int)0: {
HXLINE(  96)				c->addPolygons(this1,::hxd::clipper::JoinType_obj::Square_dyn(),::hxd::clipper::EndType_obj::ClosedPol_dyn());
            			}
            			break;
            			case (int)1: {
HXLINE(  98)				c->addPolygons(this1,::hxd::clipper::JoinType_obj::Miter_dyn(),::hxd::clipper::EndType_obj::ClosedPol_dyn());
            			}
            			break;
            			case (int)2: {
HXLINE(  99)				Float arc = kind->_hx_getFloat(0);
HXDLIN(  99)				{
HXLINE( 100)					c->ArcTolerance = arc;
HXLINE( 101)					c->addPolygons(this1,::hxd::clipper::JoinType_obj::Round_dyn(),::hxd::clipper::EndType_obj::ClosedPol_dyn());
            				}
            			}
            			break;
            		}
HXLINE( 103)		if (!(withHoles)) {
HXLINE( 103)			c->resultKind = ::hxd::clipper::ResultKind_obj::NoHoles_dyn();
            		}
HXLINE( 104)		return c->execute(delta);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(IPolygons_Impl__obj,offset,return )

::Array< ::Dynamic> IPolygons_Impl__obj::clipperOp(::Array< ::Dynamic> this1,::Array< ::Dynamic> p, ::hxd::clipper::ClipType op,bool withHoles){
            	HX_GC_STACKFRAME(&_hx_pos_611ed21a78b5a578_107_clipperOp)
HXLINE( 108)		 ::hxd::clipper::Clipper c =  ::hxd::clipper::Clipper_obj::__alloc( HX_CTX );
HXLINE( 109)		if (!(withHoles)) {
HXLINE( 109)			c->resultKind = ::hxd::clipper::ResultKind_obj::NoHoles_dyn();
            		}
HXLINE( 110)		c->addPolygons(this1,::hxd::clipper::PolyType_obj::Subject_dyn());
HXLINE( 111)		c->addPolygons(p,::hxd::clipper::PolyType_obj::Clip_dyn());
HXLINE( 112)		return c->execute(op,::hxd::clipper::PolyFillType_obj::NonZero_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(IPolygons_Impl__obj,clipperOp,return )

bool IPolygons_Impl__obj::contains(::Array< ::Dynamic> this1, ::h2d::col::Point p,::hx::Null< bool >  __o_isConvex){
            		bool isConvex = __o_isConvex.Default(false);
            	HX_STACKFRAME(&_hx_pos_611ed21a78b5a578_120_contains)
HXLINE( 121)		{
HXLINE( 121)			int _g = 0;
HXDLIN( 121)			::Array< ::Dynamic> _g1 = this1;
HXDLIN( 121)			while((_g < _g1->length)){
HXLINE( 121)				::Array< ::Dynamic> pl = _g1->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 121)				_g = (_g + 1);
HXLINE( 122)				if (::h2d::col::_IPolygon::IPolygon_Impl__obj::contains(pl,p,isConvex)) {
HXLINE( 123)					return true;
            				}
            			}
            		}
HXLINE( 124)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IPolygons_Impl__obj,contains,return )

::Array< ::Dynamic> IPolygons_Impl__obj::optimize(::Array< ::Dynamic> this1,Float epsilon){
            	HX_STACKFRAME(&_hx_pos_611ed21a78b5a578_131_optimize)
HXDLIN( 131)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 131)		{
HXDLIN( 131)			int _g1 = 0;
HXDLIN( 131)			::Array< ::Dynamic> _g2 = this1;
HXDLIN( 131)			while((_g1 < _g2->length)){
HXDLIN( 131)				::Array< ::Dynamic> p = _g2->__get(_g1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 131)				_g1 = (_g1 + 1);
HXDLIN( 131)				_g->push(::h2d::col::_IPolygon::IPolygon_Impl__obj::optimize(p,epsilon));
            			}
            		}
HXDLIN( 131)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IPolygons_Impl__obj,optimize,return )


IPolygons_Impl__obj::IPolygons_Impl__obj()
{
}

bool IPolygons_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"union") ) { outValue = _hx_union_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { outValue = offset_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"optimize") ) { outValue = optimize_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { outValue = getBounds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clipperOp") ) { outValue = clipperOp_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toPolygons") ) { outValue = toPolygons_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subtraction") ) { outValue = subtraction_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_polygons") ) { outValue = get_polygons_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"intersection") ) { outValue = intersection_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IPolygons_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IPolygons_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class IPolygons_Impl__obj::__mClass;

static ::String IPolygons_Impl__obj_sStaticFields[] = {
	HX_("get_length",af,04,8f,8f),
	HX_("get_polygons",c2,dc,6a,e1),
	HX_("_new",61,15,1f,3f),
	HX_("iterator",ee,49,9a,93),
	HX_("toPolygons",54,bd,6d,9e),
	HX_("getBounds",ab,0f,74,e2),
	HX_("union",0f,65,e7,a6),
	HX_("intersection",49,a2,61,88),
	HX_("subtraction",34,fd,0d,0c),
	HX_("offset",93,97,3f,60),
	HX_("clipperOp",8e,2a,e4,4a),
	HX_("contains",1f,5a,7b,2c),
	HX_("optimize",dd,8c,18,1d),
	::String(null())
};

void IPolygons_Impl__obj::__register()
{
	IPolygons_Impl__obj _hx_dummy;
	IPolygons_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col._IPolygons.IPolygons_Impl_",b9,e8,39,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IPolygons_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(IPolygons_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< IPolygons_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IPolygons_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IPolygons_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
} // end namespace _IPolygons
