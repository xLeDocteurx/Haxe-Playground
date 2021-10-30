#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_col_Frustum
#include <h3d/col/Frustum.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_col_PolygonBuffer
#include <h3d/col/PolygonBuffer.h>
#endif
#ifndef INCLUDED_h3d_col_Ray
#include <h3d/col/Ray.h>
#endif
#ifndef INCLUDED_h3d_col_Sphere
#include <h3d/col/Sphere.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_57a81825c13adb5e_11_new,"h3d.col.PolygonBuffer","new",0xf52e2449,"h3d.col.PolygonBuffer.new","h3d/col/PolygonBuffer.hx",11,0x1f55efc9)
HX_LOCAL_STACK_FRAME(_hx_pos_57a81825c13adb5e_14_setData,"h3d.col.PolygonBuffer","setData",0xdc449355,"h3d.col.PolygonBuffer.setData","h3d/col/PolygonBuffer.hx",14,0x1f55efc9)
HX_LOCAL_STACK_FRAME(_hx_pos_57a81825c13adb5e_21_contains,"h3d.col.PolygonBuffer","contains",0x297b3996,"h3d.col.PolygonBuffer.contains","h3d/col/PolygonBuffer.hx",21,0x1f55efc9)
HX_LOCAL_STACK_FRAME(_hx_pos_57a81825c13adb5e_45_inFrustum,"h3d.col.PolygonBuffer","inFrustum",0x196032a6,"h3d.col.PolygonBuffer.inFrustum","h3d/col/PolygonBuffer.hx",45,0x1f55efc9)
HX_LOCAL_STACK_FRAME(_hx_pos_57a81825c13adb5e_50_inSphere,"h3d.col.PolygonBuffer","inSphere",0x4274d849,"h3d.col.PolygonBuffer.inSphere","h3d/col/PolygonBuffer.hx",50,0x1f55efc9)
HX_LOCAL_STACK_FRAME(_hx_pos_57a81825c13adb5e_55_rayIntersection,"h3d.col.PolygonBuffer","rayIntersection",0x1ce608bc,"h3d.col.PolygonBuffer.rayIntersection","h3d/col/PolygonBuffer.hx",55,0x1f55efc9)
namespace h3d{
namespace col{

void PolygonBuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_57a81825c13adb5e_11_new)
            	}

Dynamic PolygonBuffer_obj::__CreateEmpty() { return new PolygonBuffer_obj; }

void *PolygonBuffer_obj::_hx_vtable = 0;

Dynamic PolygonBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PolygonBuffer_obj > _hx_result = new PolygonBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PolygonBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x67e8e9b3;
}

static ::h3d::col::Collider_obj _hx_h3d_col_PolygonBuffer__hx_h3d_col_Collider= {
	( Float (::hx::Object::*)( ::h3d::col::Ray,bool))&::h3d::col::PolygonBuffer_obj::rayIntersection,
	( bool (::hx::Object::*)( ::h3d::col::Point))&::h3d::col::PolygonBuffer_obj::contains,
	( bool (::hx::Object::*)( ::h3d::col::Frustum, ::h3d::Matrix))&::h3d::col::PolygonBuffer_obj::inFrustum,
	( bool (::hx::Object::*)( ::h3d::col::Sphere))&::h3d::col::PolygonBuffer_obj::inSphere,
};

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_col_PolygonBuffer__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *PolygonBuffer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x12a1e47b: return &_hx_h3d_col_PolygonBuffer__hx_h3d_col_Collider;
		case (int)0xa6f1a21a: return &_hx_h3d_col_PolygonBuffer__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void PolygonBuffer_obj::setData(::Array< Float > buffer,::Array< int > indexes,::hx::Null< int >  __o_startIndex,::hx::Null< int >  __o_triCount){
            		int startIndex = __o_startIndex.Default(0);
            		int triCount = __o_triCount.Default(-1);
            	HX_STACKFRAME(&_hx_pos_57a81825c13adb5e_14_setData)
HXLINE(  15)		this->buffer = buffer;
HXLINE(  16)		this->indexes = indexes;
HXLINE(  17)		this->startIndex = startIndex;
HXLINE(  18)		int _hx_tmp;
HXDLIN(  18)		if ((triCount >= 0)) {
HXLINE(  18)			_hx_tmp = triCount;
            		}
            		else {
HXLINE(  18)			_hx_tmp = ::Std_obj::_hx_int((( (Float)((indexes->length - startIndex)) ) / ( (Float)(3) )));
            		}
HXDLIN(  18)		this->triCount = _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC4(PolygonBuffer_obj,setData,(void))

bool PolygonBuffer_obj::contains( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_57a81825c13adb5e_21_contains)
HXLINE(  23)		int i = this->startIndex;
HXLINE(  24)		Float p_x = p->x;
HXDLIN(  24)		Float p_y = p->y;
HXDLIN(  24)		Float p_z = p->z;
HXLINE(  25)		{
HXLINE(  25)			int _g = 0;
HXDLIN(  25)			int _g1 = this->triCount;
HXDLIN(  25)			while((_g < _g1)){
HXLINE(  25)				_g = (_g + 1);
HXDLIN(  25)				int t = (_g - 1);
HXLINE(  26)				i = (i + 1);
HXDLIN(  26)				int i0 = (( (int)(_hx_array_unsafe_get(this->indexes,(i - 1))) ) * 3);
HXLINE(  27)				i0 = (i0 + 1);
HXDLIN(  27)				Float x = ( (Float)(_hx_array_unsafe_get(this->buffer,(i0 - 1))) );
HXDLIN(  27)				i0 = (i0 + 1);
HXDLIN(  27)				Float p0_x = x;
HXDLIN(  27)				Float p0_y = ( (Float)(_hx_array_unsafe_get(this->buffer,(i0 - 1))) );
HXDLIN(  27)				Float p0_z = ( (Float)(_hx_array_unsafe_get(this->buffer,i0)) );
HXLINE(  28)				i = (i + 1);
HXDLIN(  28)				int i1 = (( (int)(_hx_array_unsafe_get(this->indexes,(i - 1))) ) * 3);
HXLINE(  29)				i1 = (i1 + 1);
HXDLIN(  29)				Float x1 = ( (Float)(_hx_array_unsafe_get(this->buffer,(i1 - 1))) );
HXDLIN(  29)				i1 = (i1 + 1);
HXDLIN(  29)				Float p1_x = x1;
HXDLIN(  29)				Float p1_y = ( (Float)(_hx_array_unsafe_get(this->buffer,(i1 - 1))) );
HXDLIN(  29)				Float p1_z = ( (Float)(_hx_array_unsafe_get(this->buffer,i1)) );
HXLINE(  30)				i = (i + 1);
HXDLIN(  30)				int i2 = (( (int)(_hx_array_unsafe_get(this->indexes,(i - 1))) ) * 3);
HXLINE(  31)				i2 = (i2 + 1);
HXDLIN(  31)				Float x2 = ( (Float)(_hx_array_unsafe_get(this->buffer,(i2 - 1))) );
HXDLIN(  31)				i2 = (i2 + 1);
HXDLIN(  31)				Float p2_x = x2;
HXDLIN(  31)				Float p2_y = ( (Float)(_hx_array_unsafe_get(this->buffer,(i2 - 1))) );
HXDLIN(  31)				Float p2_z = ( (Float)(_hx_array_unsafe_get(this->buffer,i2)) );
HXLINE(  33)				Float d1_x = (p1_x - p0_x);
HXDLIN(  33)				Float d1_y = (p1_y - p0_y);
HXDLIN(  33)				Float d1_z = (p1_z - p0_z);
HXLINE(  34)				Float d2_x = (p2_x - p0_x);
HXDLIN(  34)				Float d2_y = (p2_y - p0_y);
HXDLIN(  34)				Float d2_z = (p2_z - p0_z);
HXLINE(  35)				Float n_x = ((d1_y * d2_z) - (d1_z * d2_y));
HXDLIN(  35)				Float n_y = ((d1_z * d2_x) - (d1_x * d2_z));
HXDLIN(  35)				Float n_z = ((d1_x * d2_y) - (d1_y * d2_x));
HXLINE(  36)				Float d = (((n_x * p0_x) + (n_y * p0_y)) + (n_z * p0_z));
HXLINE(  38)				if (((((n_x * p_x) + (n_y * p_y)) + (n_z * p_z)) >= d)) {
HXLINE(  39)					return false;
            				}
            			}
            		}
HXLINE(  41)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolygonBuffer_obj,contains,return )

bool PolygonBuffer_obj::inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_57a81825c13adb5e_45_inFrustum)
HXDLIN(  45)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN(  45)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(PolygonBuffer_obj,inFrustum,return )

bool PolygonBuffer_obj::inSphere( ::h3d::col::Sphere s){
            	HX_STACKFRAME(&_hx_pos_57a81825c13adb5e_50_inSphere)
HXDLIN(  50)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN(  50)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PolygonBuffer_obj,inSphere,return )

Float PolygonBuffer_obj::rayIntersection( ::h3d::col::Ray r,bool bestMatch){
            	HX_STACKFRAME(&_hx_pos_57a81825c13adb5e_55_rayIntersection)
HXLINE(  56)		int i = this->startIndex;
HXLINE(  57)		Float rdir_x = r->lx;
HXDLIN(  57)		Float rdir_y = r->ly;
HXDLIN(  57)		Float rdir_z = r->lz;
HXLINE(  58)		Float r0_x = r->px;
HXDLIN(  58)		Float r0_y = r->py;
HXDLIN(  58)		Float r0_z = r->pz;
HXLINE(  59)		Float best = ((Float)-1.);
HXLINE(  60)		{
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			int _g1 = this->triCount;
HXDLIN(  60)			while((_g < _g1)){
HXLINE(  60)				_g = (_g + 1);
HXDLIN(  60)				int t = (_g - 1);
HXLINE(  61)				i = (i + 1);
HXDLIN(  61)				int i0 = (( (int)(_hx_array_unsafe_get(this->indexes,(i - 1))) ) * 3);
HXLINE(  62)				i0 = (i0 + 1);
HXDLIN(  62)				Float x = ( (Float)(_hx_array_unsafe_get(this->buffer,(i0 - 1))) );
HXDLIN(  62)				i0 = (i0 + 1);
HXDLIN(  62)				Float p0_x = x;
HXDLIN(  62)				Float p0_y = ( (Float)(_hx_array_unsafe_get(this->buffer,(i0 - 1))) );
HXDLIN(  62)				Float p0_z = ( (Float)(_hx_array_unsafe_get(this->buffer,i0)) );
HXLINE(  63)				i = (i + 1);
HXDLIN(  63)				int i1 = (( (int)(_hx_array_unsafe_get(this->indexes,(i - 1))) ) * 3);
HXLINE(  64)				i1 = (i1 + 1);
HXDLIN(  64)				Float x1 = ( (Float)(_hx_array_unsafe_get(this->buffer,(i1 - 1))) );
HXDLIN(  64)				i1 = (i1 + 1);
HXDLIN(  64)				Float p1_x = x1;
HXDLIN(  64)				Float p1_y = ( (Float)(_hx_array_unsafe_get(this->buffer,(i1 - 1))) );
HXDLIN(  64)				Float p1_z = ( (Float)(_hx_array_unsafe_get(this->buffer,i1)) );
HXLINE(  65)				i = (i + 1);
HXDLIN(  65)				int i2 = (( (int)(_hx_array_unsafe_get(this->indexes,(i - 1))) ) * 3);
HXLINE(  66)				i2 = (i2 + 1);
HXDLIN(  66)				Float x2 = ( (Float)(_hx_array_unsafe_get(this->buffer,(i2 - 1))) );
HXDLIN(  66)				i2 = (i2 + 1);
HXDLIN(  66)				Float p2_x = x2;
HXDLIN(  66)				Float p2_y = ( (Float)(_hx_array_unsafe_get(this->buffer,(i2 - 1))) );
HXDLIN(  66)				Float p2_z = ( (Float)(_hx_array_unsafe_get(this->buffer,i2)) );
HXLINE(  68)				Float e1_x = (p1_x - p0_x);
HXDLIN(  68)				Float e1_y = (p1_y - p0_y);
HXDLIN(  68)				Float e1_z = (p1_z - p0_z);
HXLINE(  69)				Float e2_x = (p2_x - p0_x);
HXDLIN(  69)				Float e2_y = (p2_y - p0_y);
HXDLIN(  69)				Float e2_z = (p2_z - p0_z);
HXLINE(  70)				Float p_x = ((rdir_y * e2_z) - (rdir_z * e2_y));
HXDLIN(  70)				Float p_y = ((rdir_z * e2_x) - (rdir_x * e2_z));
HXDLIN(  70)				Float p_z = ((rdir_x * e2_y) - (rdir_y * e2_x));
HXLINE(  71)				Float det = (((e1_x * p_x) + (e1_y * p_y)) + (e1_z * p_z));
HXLINE(  72)				if ((det < ((Float)1e-10))) {
HXLINE(  72)					continue;
            				}
HXLINE(  74)				Float invDet = (( (Float)(1) ) / det);
HXLINE(  75)				Float T_x = (r0_x - p0_x);
HXDLIN(  75)				Float T_y = (r0_y - p0_y);
HXDLIN(  75)				Float T_z = (r0_z - p0_z);
HXLINE(  76)				Float u = ((((T_x * p_x) + (T_y * p_y)) + (T_z * p_z)) * invDet);
HXLINE(  78)				bool _hx_tmp;
HXDLIN(  78)				if (!((u < 0))) {
HXLINE(  78)					_hx_tmp = (u > 1);
            				}
            				else {
HXLINE(  78)					_hx_tmp = true;
            				}
HXDLIN(  78)				if (_hx_tmp) {
HXLINE(  78)					continue;
            				}
HXLINE(  80)				Float q_x = ((T_y * e1_z) - (T_z * e1_y));
HXDLIN(  80)				Float q_y = ((T_z * e1_x) - (T_x * e1_z));
HXDLIN(  80)				Float q_z = ((T_x * e1_y) - (T_y * e1_x));
HXLINE(  81)				Float v = ((((rdir_x * q_x) + (rdir_y * q_y)) + (rdir_z * q_z)) * invDet);
HXLINE(  83)				bool _hx_tmp1;
HXDLIN(  83)				if (!((v < 0))) {
HXLINE(  83)					_hx_tmp1 = ((u + v) > 1);
            				}
            				else {
HXLINE(  83)					_hx_tmp1 = true;
            				}
HXDLIN(  83)				if (_hx_tmp1) {
HXLINE(  83)					continue;
            				}
HXLINE(  85)				Float t1 = ((((e2_x * q_x) + (e2_y * q_y)) + (e2_z * q_z)) * invDet);
HXLINE(  87)				if ((t1 < ((Float)1e-10))) {
HXLINE(  87)					continue;
            				}
HXLINE(  89)				if (!(bestMatch)) {
HXLINE(  89)					return t1;
            				}
HXLINE(  90)				bool _hx_tmp2;
HXDLIN(  90)				if (!((best < 0))) {
HXLINE(  90)					_hx_tmp2 = (t1 < best);
            				}
            				else {
HXLINE(  90)					_hx_tmp2 = true;
            				}
HXDLIN(  90)				if (_hx_tmp2) {
HXLINE(  90)					best = t1;
            				}
            			}
            		}
HXLINE(  92)		return best;
            	}


HX_DEFINE_DYNAMIC_FUNC2(PolygonBuffer_obj,rayIntersection,return )


::hx::ObjectPtr< PolygonBuffer_obj > PolygonBuffer_obj::__new() {
	::hx::ObjectPtr< PolygonBuffer_obj > __this = new PolygonBuffer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PolygonBuffer_obj > PolygonBuffer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PolygonBuffer_obj *__this = (PolygonBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolygonBuffer_obj), true, "h3d.col.PolygonBuffer"));
	*(void **)__this = PolygonBuffer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PolygonBuffer_obj::PolygonBuffer_obj()
{
}

void PolygonBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PolygonBuffer);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(indexes,"indexes");
	HX_MARK_MEMBER_NAME(startIndex,"startIndex");
	HX_MARK_MEMBER_NAME(triCount,"triCount");
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_END_CLASS();
}

void PolygonBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(indexes,"indexes");
	HX_VISIT_MEMBER_NAME(startIndex,"startIndex");
	HX_VISIT_MEMBER_NAME(triCount,"triCount");
	HX_VISIT_MEMBER_NAME(source,"source");
}

::hx::Val PolygonBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"source") ) { return ::hx::Val( source ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexes") ) { return ::hx::Val( indexes ); }
		if (HX_FIELD_EQ(inName,"setData") ) { return ::hx::Val( setData_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triCount") ) { return ::hx::Val( triCount ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"inSphere") ) { return ::hx::Val( inSphere_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inFrustum") ) { return ::hx::Val( inFrustum_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { return ::hx::Val( startIndex ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PolygonBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexes") ) { indexes=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triCount") ) { triCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { startIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PolygonBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("indexes",00,5c,bf,e0));
	outFields->push(HX_("startIndex",50,73,2b,da));
	outFields->push(HX_("triCount",a4,2f,74,48));
	outFields->push(HX_("source",db,b0,31,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PolygonBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(PolygonBuffer_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(PolygonBuffer_obj,indexes),HX_("indexes",00,5c,bf,e0)},
	{::hx::fsInt,(int)offsetof(PolygonBuffer_obj,startIndex),HX_("startIndex",50,73,2b,da)},
	{::hx::fsInt,(int)offsetof(PolygonBuffer_obj,triCount),HX_("triCount",a4,2f,74,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PolygonBuffer_obj,source),HX_("source",db,b0,31,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PolygonBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String PolygonBuffer_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("indexes",00,5c,bf,e0),
	HX_("startIndex",50,73,2b,da),
	HX_("triCount",a4,2f,74,48),
	HX_("source",db,b0,31,32),
	HX_("setData",ec,96,e7,07),
	HX_("contains",1f,5a,7b,2c),
	HX_("inFrustum",fd,89,7c,b6),
	HX_("inSphere",d2,f8,74,45),
	HX_("rayIntersection",53,fb,28,64),
	::String(null()) };

::hx::Class PolygonBuffer_obj::__mClass;

void PolygonBuffer_obj::__register()
{
	PolygonBuffer_obj _hx_dummy;
	PolygonBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.PolygonBuffer",d7,4b,ca,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PolygonBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PolygonBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PolygonBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PolygonBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
