#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h2d_col_Collider
#include <h2d/col/Collider.h>
#endif
#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h2d_col_PolygonCollider
#include <h2d/col/PolygonCollider.h>
#endif
#ifndef INCLUDED_h2d_col__Polygon_Polygon_Impl_
#include <h2d/col/_Polygon/Polygon_Impl_.h>
#endif
#ifndef INCLUDED_h2d_col__Polygons_Polygons_Impl_
#include <h2d/col/_Polygons/Polygons_Impl_.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_h2d_col_Polygon
#include <hxd/impl/ArrayIterator_h2d_col_Polygon.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a691a48ef4f3dc4f_19_get_length,"h2d.col._Polygons.Polygons_Impl_","get_length",0x82ad63cc,"h2d.col._Polygons.Polygons_Impl_.get_length","h2d/col/Polygons.hx",19,0x4f30a301)
HX_LOCAL_STACK_FRAME(_hx_pos_a691a48ef4f3dc4f_20_get_polygons,"h2d.col._Polygons.Polygons_Impl_","get_polygons",0xa034fd1f,"h2d.col._Polygons.Polygons_Impl_.get_polygons","h2d/col/Polygons.hx",20,0x4f30a301)
HX_LOCAL_STACK_FRAME(_hx_pos_a691a48ef4f3dc4f_26__new,"h2d.col._Polygons.Polygons_Impl_","_new",0x4f4310be,"h2d.col._Polygons.Polygons_Impl_._new","h2d/col/Polygons.hx",26,0x4f30a301)
HX_LOCAL_STACK_FRAME(_hx_pos_a691a48ef4f3dc4f_32_iterator,"h2d.col._Polygons.Polygons_Impl_","iterator",0x111bb7cb,"h2d.col._Polygons.Polygons_Impl_.iterator","h2d/col/Polygons.hx",32,0x4f30a301)
HX_LOCAL_STACK_FRAME(_hx_pos_a691a48ef4f3dc4f_39_toIPolygons,"h2d.col._Polygons.Polygons_Impl_","toIPolygons",0xb961438a,"h2d.col._Polygons.Polygons_Impl_.toIPolygons","h2d/col/Polygons.hx",39,0x4f30a301)
HX_LOCAL_STACK_FRAME(_hx_pos_a691a48ef4f3dc4f_46_getBounds,"h2d.col._Polygons.Polygons_Impl_","getBounds",0x3632c32e,"h2d.col._Polygons.Polygons_Impl_.getBounds","h2d/col/Polygons.hx",46,0x4f30a301)
HX_LOCAL_STACK_FRAME(_hx_pos_a691a48ef4f3dc4f_58_getCollider,"h2d.col._Polygons.Polygons_Impl_","getCollider",0xb73e7c2d,"h2d.col._Polygons.Polygons_Impl_.getCollider","h2d/col/Polygons.hx",58,0x4f30a301)
HX_LOCAL_STACK_FRAME(_hx_pos_a691a48ef4f3dc4f_66_contains,"h2d.col._Polygons.Polygons_Impl_","contains",0xa9fcc7fc,"h2d.col._Polygons.Polygons_Impl_.contains","h2d/col/Polygons.hx",66,0x4f30a301)
HX_LOCAL_STACK_FRAME(_hx_pos_a691a48ef4f3dc4f_77_optimize,"h2d.col._Polygons.Polygons_Impl_","optimize",0x9a99faba,"h2d.col._Polygons.Polygons_Impl_.optimize","h2d/col/Polygons.hx",77,0x4f30a301)
namespace h2d{
namespace col{
namespace _Polygons{

void Polygons_Impl__obj::__construct() { }

Dynamic Polygons_Impl__obj::__CreateEmpty() { return new Polygons_Impl__obj; }

void *Polygons_Impl__obj::_hx_vtable = 0;

Dynamic Polygons_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Polygons_Impl__obj > _hx_result = new Polygons_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Polygons_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x237d3c8b;
}

int Polygons_Impl__obj::get_length(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_a691a48ef4f3dc4f_19_get_length)
HXDLIN(  19)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygons_Impl__obj,get_length,return )

::Array< ::Dynamic> Polygons_Impl__obj::get_polygons(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_a691a48ef4f3dc4f_20_get_polygons)
HXDLIN(  20)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygons_Impl__obj,get_polygons,return )

::Array< ::Dynamic> Polygons_Impl__obj::_new(::Array< ::Dynamic> polygons){
            	HX_STACKFRAME(&_hx_pos_a691a48ef4f3dc4f_26__new)
HXDLIN(  26)		::Array< ::Dynamic> this1;
HXLINE(  27)		if (::hx::IsNull( polygons )) {
HXLINE(  27)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  27)			this1 = polygons;
            		}
HXLINE(  26)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygons_Impl__obj,_new,return )

 ::hxd::impl::ArrayIterator_h2d_col_Polygon Polygons_Impl__obj::iterator(::Array< ::Dynamic> this1){
            	HX_GC_STACKFRAME(&_hx_pos_a691a48ef4f3dc4f_32_iterator)
HXDLIN(  32)		return  ::hxd::impl::ArrayIterator_h2d_col_Polygon_obj::__alloc( HX_CTX ,this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygons_Impl__obj,iterator,return )

::Array< ::Dynamic> Polygons_Impl__obj::toIPolygons(::Array< ::Dynamic> this1,::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_a691a48ef4f3dc4f_39_toIPolygons)
HXDLIN(  39)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  39)		{
HXDLIN(  39)			int _g1 = 0;
HXDLIN(  39)			::Array< ::Dynamic> _g2 = this1;
HXDLIN(  39)			while((_g1 < _g2->length)){
HXDLIN(  39)				::Array< ::Dynamic> p = _g2->__get(_g1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  39)				_g1 = (_g1 + 1);
HXDLIN(  39)				_g->push(::h2d::col::_Polygon::Polygon_Impl__obj::toIPolygon(p,scale));
            			}
            		}
HXDLIN(  39)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polygons_Impl__obj,toIPolygons,return )

 ::h2d::col::Bounds Polygons_Impl__obj::getBounds(::Array< ::Dynamic> this1, ::h2d::col::Bounds b){
            	HX_GC_STACKFRAME(&_hx_pos_a691a48ef4f3dc4f_46_getBounds)
HXLINE(  47)		if (::hx::IsNull( b )) {
HXLINE(  47)			b =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
            		}
HXLINE(  48)		{
HXLINE(  48)			int _g = 0;
HXDLIN(  48)			::Array< ::Dynamic> _g1 = this1;
HXDLIN(  48)			while((_g < _g1->length)){
HXLINE(  48)				::Array< ::Dynamic> p = _g1->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  48)				_g = (_g + 1);
HXLINE(  49)				::h2d::col::_Polygon::Polygon_Impl__obj::getBounds(p,b);
            			}
            		}
HXLINE(  50)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polygons_Impl__obj,getBounds,return )

 ::h2d::col::PolygonCollider Polygons_Impl__obj::getCollider(::Array< ::Dynamic> this1,::hx::Null< bool >  __o_isConvex){
            		bool isConvex = __o_isConvex.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_a691a48ef4f3dc4f_58_getCollider)
HXDLIN(  58)		return  ::h2d::col::PolygonCollider_obj::__alloc( HX_CTX ,this1,isConvex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polygons_Impl__obj,getCollider,return )

bool Polygons_Impl__obj::contains(::Array< ::Dynamic> this1, ::h2d::col::Point p,::hx::Null< bool >  __o_isConvex){
            		bool isConvex = __o_isConvex.Default(false);
            	HX_STACKFRAME(&_hx_pos_a691a48ef4f3dc4f_66_contains)
HXLINE(  67)		{
HXLINE(  67)			int _g = 0;
HXDLIN(  67)			::Array< ::Dynamic> _g1 = this1;
HXDLIN(  67)			while((_g < _g1->length)){
HXLINE(  67)				::Array< ::Dynamic> pl = _g1->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  67)				_g = (_g + 1);
HXLINE(  68)				if (::h2d::col::_Polygon::Polygon_Impl__obj::contains(pl,p,isConvex)) {
HXLINE(  69)					return true;
            				}
            			}
            		}
HXLINE(  70)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygons_Impl__obj,contains,return )

::Array< ::Dynamic> Polygons_Impl__obj::optimize(::Array< ::Dynamic> this1,Float epsilon){
            	HX_STACKFRAME(&_hx_pos_a691a48ef4f3dc4f_77_optimize)
HXDLIN(  77)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  77)		{
HXDLIN(  77)			int _g1 = 0;
HXDLIN(  77)			::Array< ::Dynamic> _g2 = this1;
HXDLIN(  77)			while((_g1 < _g2->length)){
HXDLIN(  77)				::Array< ::Dynamic> p = _g2->__get(_g1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  77)				_g1 = (_g1 + 1);
HXDLIN(  77)				_g->push(::h2d::col::_Polygon::Polygon_Impl__obj::optimize(p,epsilon));
            			}
            		}
HXDLIN(  77)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polygons_Impl__obj,optimize,return )


Polygons_Impl__obj::Polygons_Impl__obj()
{
}

bool Polygons_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"optimize") ) { outValue = optimize_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { outValue = getBounds_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toIPolygons") ) { outValue = toIPolygons_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCollider") ) { outValue = getCollider_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_polygons") ) { outValue = get_polygons_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Polygons_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Polygons_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Polygons_Impl__obj::__mClass;

static ::String Polygons_Impl__obj_sStaticFields[] = {
	HX_("get_length",af,04,8f,8f),
	HX_("get_polygons",c2,dc,6a,e1),
	HX_("_new",61,15,1f,3f),
	HX_("iterator",ee,49,9a,93),
	HX_("toIPolygons",47,69,ec,f1),
	HX_("getBounds",ab,0f,74,e2),
	HX_("getCollider",ea,a1,c9,ef),
	HX_("contains",1f,5a,7b,2c),
	HX_("optimize",dd,8c,18,1d),
	::String(null())
};

void Polygons_Impl__obj::__register()
{
	Polygons_Impl__obj _hx_dummy;
	Polygons_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col._Polygons.Polygons_Impl_",31,22,8c,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polygons_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Polygons_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Polygons_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Polygons_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Polygons_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
} // end namespace _Polygons
