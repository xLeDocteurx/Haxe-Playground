#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h2d_col__Polygon_Polygon_Impl_
#include <h2d/col/_Polygon/Polygon_Impl_.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
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
#ifndef INCLUDED_h3d_col_Polygon
#include <h3d/col/Polygon.h>
#endif
#ifndef INCLUDED_h3d_col_Ray
#include <h3d/col/Ray.h>
#endif
#ifndef INCLUDED_h3d_col_Sphere
#include <h3d/col/Sphere.h>
#endif
#ifndef INCLUDED_h3d_col_TriPlane
#include <h3d/col/TriPlane.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_021407363b642ab7_162_new,"h3d.col.Polygon","new",0x2b39cfe9,"h3d.col.Polygon.new","h3d/col/Polygon.hx",162,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_021407363b642ab7_166_addBuffers,"h3d.col.Polygon","addBuffers",0x2081c2e9,"h3d.col.Polygon.addBuffers","h3d/col/Polygon.hx",166,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_021407363b642ab7_188_isConvex,"h3d.col.Polygon","isConvex",0x1f2a22c8,"h3d.col.Polygon.isConvex","h3d/col/Polygon.hx",188,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_021407363b642ab7_191_clone,"h3d.col.Polygon","clone",0x786ec726,"h3d.col.Polygon.clone","h3d/col/Polygon.hx",191,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_021407363b642ab7_198_transform,"h3d.col.Polygon","transform",0x4c7ef9b5,"h3d.col.Polygon.transform","h3d/col/Polygon.hx",198,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_021407363b642ab7_206_getPoints,"h3d.col.Polygon","getPoints",0x7a7067a2,"h3d.col.Polygon.getPoints","h3d/col/Polygon.hx",206,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_021407363b642ab7_216_getBounds,"h3d.col.Polygon","getBounds",0xe95fdbf4,"h3d.col.Polygon.getBounds","h3d/col/Polygon.hx",216,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_021407363b642ab7_229_contains,"h3d.col.Polygon","contains",0x2b5d69f6,"h3d.col.Polygon.contains","h3d/col/Polygon.hx",229,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_021407363b642ab7_241_rayIntersection,"h3d.col.Polygon","rayIntersection",0xe394a45c,"h3d.col.Polygon.rayIntersection","h3d/col/Polygon.hx",241,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_021407363b642ab7_256_inFrustum,"h3d.col.Polygon","inFrustum",0xbd685646,"h3d.col.Polygon.inFrustum","h3d/col/Polygon.hx",256,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_021407363b642ab7_261_inSphere,"h3d.col.Polygon","inSphere",0x445708a9,"h3d.col.Polygon.inSphere","h3d/col/Polygon.hx",261,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_021407363b642ab7_273_fromPolygon2D,"h3d.col.Polygon","fromPolygon2D",0x2d9da2cb,"h3d.col.Polygon.fromPolygon2D","h3d/col/Polygon.hx",273,0x5d386aa9)
namespace h3d{
namespace col{

void Polygon_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_021407363b642ab7_162_new)
            	}

Dynamic Polygon_obj::__CreateEmpty() { return new Polygon_obj; }

void *Polygon_obj::_hx_vtable = 0;

Dynamic Polygon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Polygon_obj > _hx_result = new Polygon_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Polygon_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x59503853;
}

static ::h3d::col::Collider_obj _hx_h3d_col_Polygon__hx_h3d_col_Collider= {
	( Float (::hx::Object::*)( ::h3d::col::Ray,bool))&::h3d::col::Polygon_obj::rayIntersection,
	( bool (::hx::Object::*)( ::h3d::col::Point))&::h3d::col::Polygon_obj::contains,
	( bool (::hx::Object::*)( ::h3d::col::Frustum, ::h3d::Matrix))&::h3d::col::Polygon_obj::inFrustum,
	( bool (::hx::Object::*)( ::h3d::col::Sphere))&::h3d::col::Polygon_obj::inSphere,
};

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_col_Polygon__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *Polygon_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x12a1e47b: return &_hx_h3d_col_Polygon__hx_h3d_col_Collider;
		case (int)0xa6f1a21a: return &_hx_h3d_col_Polygon__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void Polygon_obj::addBuffers(::Array< Float > vertexes,::Array< int > indexes,::hx::Null< int >  __o_stride){
            		int stride = __o_stride.Default(3);
            	HX_GC_STACKFRAME(&_hx_pos_021407363b642ab7_166_addBuffers)
HXDLIN( 166)		int _g = 0;
HXDLIN( 166)		int _g1 = ::Std_obj::_hx_int((( (Float)(indexes->length) ) / ( (Float)(3) )));
HXDLIN( 166)		while((_g < _g1)){
HXDLIN( 166)			_g = (_g + 1);
HXDLIN( 166)			int i = (_g - 1);
HXLINE( 167)			int k = (i * 3);
HXLINE( 169)			 ::h3d::col::TriPlane t =  ::h3d::col::TriPlane_obj::__alloc( HX_CTX );
HXLINE( 171)			int i0 = (( (int)(_hx_array_unsafe_get(indexes,k)) ) * stride);
HXLINE( 172)			int i1 = (( (int)(_hx_array_unsafe_get(indexes,(k + 1))) ) * stride);
HXLINE( 173)			int i2 = (( (int)(_hx_array_unsafe_get(indexes,(k + 2))) ) * stride);
HXLINE( 175)			{
HXLINE( 176)				Float p0_x = ( (Float)(_hx_array_unsafe_get(vertexes,i0)) );
HXDLIN( 176)				Float p0_y = ( (Float)(_hx_array_unsafe_get(vertexes,(i0 + 1))) );
HXDLIN( 176)				Float p0_z = ( (Float)(_hx_array_unsafe_get(vertexes,(i0 + 2))) );
HXLINE( 177)				Float p1_x = ( (Float)(_hx_array_unsafe_get(vertexes,i1)) );
HXDLIN( 177)				Float p1_y = ( (Float)(_hx_array_unsafe_get(vertexes,(i1 + 1))) );
HXDLIN( 177)				Float p1_z = ( (Float)(_hx_array_unsafe_get(vertexes,(i1 + 2))) );
HXLINE( 178)				Float p2_x = ( (Float)(_hx_array_unsafe_get(vertexes,i2)) );
HXDLIN( 178)				Float p2_y = ( (Float)(_hx_array_unsafe_get(vertexes,(i2 + 1))) );
HXDLIN( 178)				Float p2_z = ( (Float)(_hx_array_unsafe_get(vertexes,(i2 + 2))) );
HXLINE( 175)				t->p0x = p0_x;
HXDLIN( 175)				t->p0y = p0_y;
HXDLIN( 175)				t->p0z = p0_z;
HXDLIN( 175)				Float d1_x = (p1_x - p0_x);
HXDLIN( 175)				Float d1_y = (p1_y - p0_y);
HXDLIN( 175)				Float d1_z = (p1_z - p0_z);
HXDLIN( 175)				Float d2_x = (p2_x - p0_x);
HXDLIN( 175)				Float d2_y = (p2_y - p0_y);
HXDLIN( 175)				Float d2_z = (p2_z - p0_z);
HXDLIN( 175)				Float n_x = ((d1_y * d2_z) - (d1_z * d2_y));
HXDLIN( 175)				Float n_y = ((d1_z * d2_x) - (d1_x * d2_z));
HXDLIN( 175)				Float n_z = ((d1_x * d2_y) - (d1_y * d2_x));
HXDLIN( 175)				t->d = (((n_x * p0_x) + (n_y * p0_y)) + (n_z * p0_z));
HXDLIN( 175)				t->nx = n_x;
HXDLIN( 175)				t->ny = n_y;
HXDLIN( 175)				t->nz = n_z;
HXDLIN( 175)				t->d1x = d1_x;
HXDLIN( 175)				t->d1y = d1_y;
HXDLIN( 175)				t->d1z = d1_z;
HXDLIN( 175)				t->d2x = d2_x;
HXDLIN( 175)				t->d2y = d2_y;
HXDLIN( 175)				t->d2z = d2_z;
HXDLIN( 175)				t->dot00 = (((d1_x * d1_x) + (d1_y * d1_y)) + (d1_z * d1_z));
HXDLIN( 175)				t->dot01 = (((d1_x * d2_x) + (d1_y * d2_y)) + (d1_z * d2_z));
HXDLIN( 175)				t->dot11 = (((d2_x * d2_x) + (d2_y * d2_y)) + (d2_z * d2_z));
HXDLIN( 175)				t->invDenom = (( (Float)(1) ) / ((t->dot00 * t->dot11) - (t->dot01 * t->dot01)));
            			}
HXLINE( 181)			t->next = this->triPlanes;
HXLINE( 182)			this->triPlanes = t;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,addBuffers,(void))

bool Polygon_obj::isConvex(){
            	HX_STACKFRAME(&_hx_pos_021407363b642ab7_188_isConvex)
HXDLIN( 188)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,isConvex,return )

 ::h3d::col::Polygon Polygon_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_021407363b642ab7_191_clone)
HXLINE( 192)		 ::h3d::col::Polygon clone =  ::h3d::col::Polygon_obj::__alloc( HX_CTX );
HXLINE( 193)		clone->triPlanes =  ::h3d::col::TriPlane_obj::__alloc( HX_CTX );
HXLINE( 194)		 ::h3d::col::TriPlane _this = this->triPlanes;
HXDLIN( 194)		 ::h3d::col::TriPlane clone1 =  ::h3d::col::TriPlane_obj::__alloc( HX_CTX );
HXDLIN( 194)		{
HXLINE( 194)			clone1->p0x = _this->p0x;
HXDLIN( 194)			clone1->p0y = _this->p0y;
HXDLIN( 194)			clone1->p0z = _this->p0z;
HXDLIN( 194)			clone1->d1x = _this->d1x;
HXDLIN( 194)			clone1->d1y = _this->d1y;
HXDLIN( 194)			clone1->d1z = _this->d1z;
HXDLIN( 194)			clone1->d2x = _this->d2x;
HXDLIN( 194)			clone1->d2y = _this->d2y;
HXDLIN( 194)			clone1->d2z = _this->d2z;
HXDLIN( 194)			clone1->dot00 = _this->dot00;
HXDLIN( 194)			clone1->dot01 = _this->dot01;
HXDLIN( 194)			clone1->dot11 = _this->dot11;
HXDLIN( 194)			clone1->invDenom = _this->invDenom;
HXDLIN( 194)			clone1->nx = _this->nx;
HXDLIN( 194)			clone1->ny = _this->ny;
HXDLIN( 194)			clone1->nz = _this->nz;
HXDLIN( 194)			clone1->d = _this->d;
            		}
HXDLIN( 194)		if (::hx::IsNotNull( _this->next )) {
HXLINE( 194)			 ::h3d::col::TriPlane _this1 = _this->next;
HXDLIN( 194)			 ::h3d::col::TriPlane clone =  ::h3d::col::TriPlane_obj::__alloc( HX_CTX );
HXDLIN( 194)			{
HXLINE( 194)				clone->p0x = _this1->p0x;
HXDLIN( 194)				clone->p0y = _this1->p0y;
HXDLIN( 194)				clone->p0z = _this1->p0z;
HXDLIN( 194)				clone->d1x = _this1->d1x;
HXDLIN( 194)				clone->d1y = _this1->d1y;
HXDLIN( 194)				clone->d1z = _this1->d1z;
HXDLIN( 194)				clone->d2x = _this1->d2x;
HXDLIN( 194)				clone->d2y = _this1->d2y;
HXDLIN( 194)				clone->d2z = _this1->d2z;
HXDLIN( 194)				clone->dot00 = _this1->dot00;
HXDLIN( 194)				clone->dot01 = _this1->dot01;
HXDLIN( 194)				clone->dot11 = _this1->dot11;
HXDLIN( 194)				clone->invDenom = _this1->invDenom;
HXDLIN( 194)				clone->nx = _this1->nx;
HXDLIN( 194)				clone->ny = _this1->ny;
HXDLIN( 194)				clone->nz = _this1->nz;
HXDLIN( 194)				clone->d = _this1->d;
            			}
HXDLIN( 194)			if (::hx::IsNotNull( _this1->next )) {
HXLINE( 194)				clone->next = _this1->next->clone();
            			}
HXDLIN( 194)			clone1->next = clone;
            		}
HXDLIN( 194)		clone->triPlanes = clone1;
HXLINE( 195)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,clone,return )

void Polygon_obj::transform( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_021407363b642ab7_198_transform)
HXLINE( 199)		 ::h3d::col::TriPlane t = this->triPlanes;
HXLINE( 200)		while(::hx::IsNotNull( t )){
HXLINE( 201)			t->transform(m);
HXLINE( 202)			t = t->next;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,transform,(void))

::Array< ::Dynamic> Polygon_obj::getPoints(){
            	HX_STACKFRAME(&_hx_pos_021407363b642ab7_206_getPoints)
HXLINE( 207)		::Array< ::Dynamic> ret = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 208)		 ::h3d::col::TriPlane t = this->triPlanes;
HXLINE( 209)		while(::hx::IsNotNull( t )){
HXLINE( 210)			ret = ret->concat(t->getPoints());
HXLINE( 211)			t = t->next;
            		}
HXLINE( 213)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,getPoints,return )

 ::h3d::col::Bounds Polygon_obj::getBounds( ::h3d::col::Bounds bnds){
            	HX_GC_STACKFRAME(&_hx_pos_021407363b642ab7_216_getBounds)
HXLINE( 217)		if (::hx::IsNull( bnds )) {
HXLINE( 217)			bnds =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
            		}
HXLINE( 218)		{
HXLINE( 218)			bnds->xMin = ((Float)1e20);
HXDLIN( 218)			bnds->xMax = ((Float)-1e20);
HXDLIN( 218)			bnds->yMin = ((Float)1e20);
HXDLIN( 218)			bnds->yMax = ((Float)-1e20);
HXDLIN( 218)			bnds->zMin = ((Float)1e20);
HXDLIN( 218)			bnds->zMax = ((Float)-1e20);
            		}
HXLINE( 219)		 ::h3d::col::TriPlane t = this->triPlanes;
HXLINE( 220)		while(::hx::IsNotNull( t )){
HXLINE( 221)			{
HXLINE( 221)				Float x = t->p0x;
HXDLIN( 221)				Float y = t->p0y;
HXDLIN( 221)				Float z = t->p0z;
HXDLIN( 221)				if ((x < bnds->xMin)) {
HXLINE( 221)					bnds->xMin = x;
            				}
HXDLIN( 221)				if ((x > bnds->xMax)) {
HXLINE( 221)					bnds->xMax = x;
            				}
HXDLIN( 221)				if ((y < bnds->yMin)) {
HXLINE( 221)					bnds->yMin = y;
            				}
HXDLIN( 221)				if ((y > bnds->yMax)) {
HXLINE( 221)					bnds->yMax = y;
            				}
HXDLIN( 221)				if ((z < bnds->zMin)) {
HXLINE( 221)					bnds->zMin = z;
            				}
HXDLIN( 221)				if ((z > bnds->zMax)) {
HXLINE( 221)					bnds->zMax = z;
            				}
            			}
HXLINE( 222)			{
HXLINE( 222)				Float x1 = (t->d1x + t->p0x);
HXDLIN( 222)				Float y1 = (t->d1y + t->p0y);
HXDLIN( 222)				Float z1 = (t->d1z + t->p0z);
HXDLIN( 222)				if ((x1 < bnds->xMin)) {
HXLINE( 222)					bnds->xMin = x1;
            				}
HXDLIN( 222)				if ((x1 > bnds->xMax)) {
HXLINE( 222)					bnds->xMax = x1;
            				}
HXDLIN( 222)				if ((y1 < bnds->yMin)) {
HXLINE( 222)					bnds->yMin = y1;
            				}
HXDLIN( 222)				if ((y1 > bnds->yMax)) {
HXLINE( 222)					bnds->yMax = y1;
            				}
HXDLIN( 222)				if ((z1 < bnds->zMin)) {
HXLINE( 222)					bnds->zMin = z1;
            				}
HXDLIN( 222)				if ((z1 > bnds->zMax)) {
HXLINE( 222)					bnds->zMax = z1;
            				}
            			}
HXLINE( 223)			{
HXLINE( 223)				Float x2 = (t->d2x + t->p0x);
HXDLIN( 223)				Float y2 = (t->d2y + t->p0y);
HXDLIN( 223)				Float z2 = (t->d2z + t->p0z);
HXDLIN( 223)				if ((x2 < bnds->xMin)) {
HXLINE( 223)					bnds->xMin = x2;
            				}
HXDLIN( 223)				if ((x2 > bnds->xMax)) {
HXLINE( 223)					bnds->xMax = x2;
            				}
HXDLIN( 223)				if ((y2 < bnds->yMin)) {
HXLINE( 223)					bnds->yMin = y2;
            				}
HXDLIN( 223)				if ((y2 > bnds->yMax)) {
HXLINE( 223)					bnds->yMax = y2;
            				}
HXDLIN( 223)				if ((z2 < bnds->zMin)) {
HXLINE( 223)					bnds->zMin = z2;
            				}
HXDLIN( 223)				if ((z2 > bnds->zMax)) {
HXLINE( 223)					bnds->zMax = z2;
            				}
            			}
HXLINE( 224)			t = t->next;
            		}
HXLINE( 226)		return bnds;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,getBounds,return )

bool Polygon_obj::contains( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_021407363b642ab7_229_contains)
HXLINE( 230)		if (!(this->isConvex())) {
HXLINE( 231)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented for concave polygon",47,3f,e7,b6)));
            		}
HXLINE( 232)		 ::h3d::col::TriPlane t = this->triPlanes;
HXLINE( 233)		while(::hx::IsNotNull( t )){
HXLINE( 234)			if ((((((t->nx * p->x) + (t->ny * p->y)) + (t->nz * p->z)) - t->d) >= 0)) {
HXLINE( 235)				return false;
            			}
HXLINE( 236)			t = t->next;
            		}
HXLINE( 238)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,contains,return )

Float Polygon_obj::rayIntersection( ::h3d::col::Ray r,bool bestMatch){
            	HX_STACKFRAME(&_hx_pos_021407363b642ab7_241_rayIntersection)
HXLINE( 242)		 ::h3d::col::TriPlane t = this->triPlanes;
HXLINE( 243)		Float best = ((Float)-1.);
HXLINE( 244)		while(::hx::IsNotNull( t )){
HXLINE( 245)			Float dr = (((r->lx * t->nx) + (r->ly * t->ny)) + (r->lz * t->nz));
HXDLIN( 245)			Float d;
HXDLIN( 245)			if ((dr >= 0)) {
HXLINE( 245)				d = ((Float)-1.);
            			}
            			else {
HXLINE( 245)				Float nd = (t->d - (((r->px * t->nx) + (r->py * t->ny)) + (r->pz * t->nz)));
HXDLIN( 245)				Float k = (nd / dr);
HXDLIN( 245)				if ((k < 0)) {
HXLINE( 245)					d = ( (Float)(-1) );
            				}
            				else {
HXLINE( 245)					Float px = (r->px + (r->lx * k));
HXDLIN( 245)					Float py = (r->py + (r->ly * k));
HXDLIN( 245)					Float pz = (r->pz + (r->lz * k));
HXDLIN( 245)					Float v2_x = (px - t->p0x);
HXDLIN( 245)					Float v2_y = (py - t->p0y);
HXDLIN( 245)					Float v2_z = (pz - t->p0z);
HXDLIN( 245)					Float dot02 = (((t->d1x * v2_x) + (t->d1y * v2_y)) + (t->d1z * v2_z));
HXDLIN( 245)					Float dot12 = (((t->d2x * v2_x) + (t->d2y * v2_y)) + (t->d2z * v2_z));
HXDLIN( 245)					Float u = (((t->dot11 * dot02) - (t->dot01 * dot12)) * t->invDenom);
HXDLIN( 245)					Float v = (((t->dot00 * dot12) - (t->dot01 * dot02)) * t->invDenom);
HXDLIN( 245)					bool d1;
HXDLIN( 245)					bool d2;
HXDLIN( 245)					if ((u >= 0)) {
HXLINE( 245)						d2 = (v >= 0);
            					}
            					else {
HXLINE( 245)						d2 = false;
            					}
HXDLIN( 245)					if (d2) {
HXLINE( 245)						d1 = ((u + v) < 1);
            					}
            					else {
HXLINE( 245)						d1 = false;
            					}
HXDLIN( 245)					if (!(d1)) {
HXLINE( 245)						d = ( (Float)(-1) );
            					}
            					else {
HXLINE( 245)						d = k;
            					}
            				}
            			}
HXLINE( 246)			if ((d >= 0)) {
HXLINE( 247)				if (!(bestMatch)) {
HXLINE( 247)					return d;
            				}
HXLINE( 248)				bool _hx_tmp;
HXDLIN( 248)				if (!((best < 0))) {
HXLINE( 248)					_hx_tmp = (d < best);
            				}
            				else {
HXLINE( 248)					_hx_tmp = true;
            				}
HXDLIN( 248)				if (_hx_tmp) {
HXLINE( 248)					best = d;
            				}
            			}
HXLINE( 250)			t = t->next;
            		}
HXLINE( 252)		return best;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Polygon_obj,rayIntersection,return )

bool Polygon_obj::inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_021407363b642ab7_256_inFrustum)
HXDLIN( 256)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN( 256)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Polygon_obj,inFrustum,return )

bool Polygon_obj::inSphere( ::h3d::col::Sphere s){
            	HX_STACKFRAME(&_hx_pos_021407363b642ab7_261_inSphere)
HXDLIN( 261)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN( 261)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,inSphere,return )

 ::h3d::col::Polygon Polygon_obj::fromPolygon2D(::Array< ::Dynamic> p,::hx::Null< Float >  __o_z){
            		Float z = __o_z.Default(((Float)0.));
            	HX_GC_STACKFRAME(&_hx_pos_021407363b642ab7_273_fromPolygon2D)
HXLINE( 274)		 ::h3d::col::Polygon pout =  ::h3d::col::Polygon_obj::__alloc( HX_CTX );
HXLINE( 275)		if (::h2d::col::_Polygon::Polygon_Impl__obj::isConvex(p)) {
HXLINE( 276)			 ::h2d::col::Point p0 = p->__get(0).StaticCast<  ::h2d::col::Point >();
HXLINE( 277)			{
HXLINE( 277)				int _g = 0;
HXDLIN( 277)				int _g1 = (p->length - 2);
HXDLIN( 277)				while((_g < _g1)){
HXLINE( 277)					_g = (_g + 1);
HXDLIN( 277)					int i = (_g - 1);
HXLINE( 278)					 ::h2d::col::Point p1 = p->__get((i + 1)).StaticCast<  ::h2d::col::Point >();
HXLINE( 279)					 ::h2d::col::Point p2 = p->__get((i + 2)).StaticCast<  ::h2d::col::Point >();
HXLINE( 280)					 ::h3d::col::TriPlane t =  ::h3d::col::TriPlane_obj::__alloc( HX_CTX );
HXLINE( 281)					{
HXLINE( 282)						Float p0_x = p0->x;
HXDLIN( 282)						Float p0_y = p0->y;
HXDLIN( 282)						Float p0_z = z;
HXLINE( 283)						Float p1_x = p1->x;
HXDLIN( 283)						Float p1_y = p1->y;
HXDLIN( 283)						Float p1_z = z;
HXLINE( 284)						Float p2_x = p2->x;
HXDLIN( 284)						Float p2_y = p2->y;
HXDLIN( 284)						Float p2_z = z;
HXLINE( 281)						t->p0x = p0_x;
HXDLIN( 281)						t->p0y = p0_y;
HXDLIN( 281)						t->p0z = p0_z;
HXDLIN( 281)						Float d1_x = (p1_x - p0_x);
HXDLIN( 281)						Float d1_y = (p1_y - p0_y);
HXDLIN( 281)						Float d1_z = (p1_z - p0_z);
HXDLIN( 281)						Float d2_x = (p2_x - p0_x);
HXDLIN( 281)						Float d2_y = (p2_y - p0_y);
HXDLIN( 281)						Float d2_z = (p2_z - p0_z);
HXDLIN( 281)						Float n_x = ((d1_y * d2_z) - (d1_z * d2_y));
HXDLIN( 281)						Float n_y = ((d1_z * d2_x) - (d1_x * d2_z));
HXDLIN( 281)						Float n_z = ((d1_x * d2_y) - (d1_y * d2_x));
HXDLIN( 281)						t->d = (((n_x * p0_x) + (n_y * p0_y)) + (n_z * p0_z));
HXDLIN( 281)						t->nx = n_x;
HXDLIN( 281)						t->ny = n_y;
HXDLIN( 281)						t->nz = n_z;
HXDLIN( 281)						t->d1x = d1_x;
HXDLIN( 281)						t->d1y = d1_y;
HXDLIN( 281)						t->d1z = d1_z;
HXDLIN( 281)						t->d2x = d2_x;
HXDLIN( 281)						t->d2y = d2_y;
HXDLIN( 281)						t->d2z = d2_z;
HXDLIN( 281)						t->dot00 = (((d1_x * d1_x) + (d1_y * d1_y)) + (d1_z * d1_z));
HXDLIN( 281)						t->dot01 = (((d1_x * d2_x) + (d1_y * d2_y)) + (d1_z * d2_z));
HXDLIN( 281)						t->dot11 = (((d2_x * d2_x) + (d2_y * d2_y)) + (d2_z * d2_z));
HXDLIN( 281)						t->invDenom = (( (Float)(1) ) / ((t->dot00 * t->dot11) - (t->dot01 * t->dot01)));
            					}
HXLINE( 286)					t->next = pout->triPlanes;
HXLINE( 287)					pout->triPlanes = t;
            				}
            			}
            		}
            		else {
HXLINE( 290)			::Array< int > idx = ::h2d::col::_Polygon::Polygon_Impl__obj::fastTriangulate(p);
HXLINE( 291)			{
HXLINE( 291)				int _g = 0;
HXDLIN( 291)				int _g1 = ::Std_obj::_hx_int((( (Float)(idx->length) ) / ( (Float)(3) )));
HXDLIN( 291)				while((_g < _g1)){
HXLINE( 291)					_g = (_g + 1);
HXDLIN( 291)					int i = (_g - 1);
HXLINE( 292)					 ::h2d::col::Point p0 = p->__get(idx->__get((i * 3))).StaticCast<  ::h2d::col::Point >();
HXLINE( 293)					 ::h2d::col::Point p1 = p->__get(idx->__get(((i * 3) + 1))).StaticCast<  ::h2d::col::Point >();
HXLINE( 294)					 ::h2d::col::Point p2 = p->__get(idx->__get(((i * 3) + 2))).StaticCast<  ::h2d::col::Point >();
HXLINE( 295)					 ::h3d::col::TriPlane t =  ::h3d::col::TriPlane_obj::__alloc( HX_CTX );
HXLINE( 296)					{
HXLINE( 297)						Float p0_x = p0->x;
HXDLIN( 297)						Float p0_y = p0->y;
HXDLIN( 297)						Float p0_z = z;
HXLINE( 298)						Float p1_x = p1->x;
HXDLIN( 298)						Float p1_y = p1->y;
HXDLIN( 298)						Float p1_z = z;
HXLINE( 299)						Float p2_x = p2->x;
HXDLIN( 299)						Float p2_y = p2->y;
HXDLIN( 299)						Float p2_z = z;
HXLINE( 296)						t->p0x = p0_x;
HXDLIN( 296)						t->p0y = p0_y;
HXDLIN( 296)						t->p0z = p0_z;
HXDLIN( 296)						Float d1_x = (p1_x - p0_x);
HXDLIN( 296)						Float d1_y = (p1_y - p0_y);
HXDLIN( 296)						Float d1_z = (p1_z - p0_z);
HXDLIN( 296)						Float d2_x = (p2_x - p0_x);
HXDLIN( 296)						Float d2_y = (p2_y - p0_y);
HXDLIN( 296)						Float d2_z = (p2_z - p0_z);
HXDLIN( 296)						Float n_x = ((d1_y * d2_z) - (d1_z * d2_y));
HXDLIN( 296)						Float n_y = ((d1_z * d2_x) - (d1_x * d2_z));
HXDLIN( 296)						Float n_z = ((d1_x * d2_y) - (d1_y * d2_x));
HXDLIN( 296)						t->d = (((n_x * p0_x) + (n_y * p0_y)) + (n_z * p0_z));
HXDLIN( 296)						t->nx = n_x;
HXDLIN( 296)						t->ny = n_y;
HXDLIN( 296)						t->nz = n_z;
HXDLIN( 296)						t->d1x = d1_x;
HXDLIN( 296)						t->d1y = d1_y;
HXDLIN( 296)						t->d1z = d1_z;
HXDLIN( 296)						t->d2x = d2_x;
HXDLIN( 296)						t->d2y = d2_y;
HXDLIN( 296)						t->d2z = d2_z;
HXDLIN( 296)						t->dot00 = (((d1_x * d1_x) + (d1_y * d1_y)) + (d1_z * d1_z));
HXDLIN( 296)						t->dot01 = (((d1_x * d2_x) + (d1_y * d2_y)) + (d1_z * d2_z));
HXDLIN( 296)						t->dot11 = (((d2_x * d2_x) + (d2_y * d2_y)) + (d2_z * d2_z));
HXDLIN( 296)						t->invDenom = (( (Float)(1) ) / ((t->dot00 * t->dot11) - (t->dot01 * t->dot01)));
            					}
HXLINE( 301)					t->next = pout->triPlanes;
HXLINE( 302)					pout->triPlanes = t;
            				}
            			}
            		}
HXLINE( 305)		return pout;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polygon_obj,fromPolygon2D,return )


::hx::ObjectPtr< Polygon_obj > Polygon_obj::__new() {
	::hx::ObjectPtr< Polygon_obj > __this = new Polygon_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Polygon_obj > Polygon_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Polygon_obj *__this = (Polygon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Polygon_obj), true, "h3d.col.Polygon"));
	*(void **)__this = Polygon_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(triPlanes,"triPlanes");
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(triPlanes,"triPlanes");
}

::hx::Val Polygon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isConvex") ) { return ::hx::Val( isConvex_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"inSphere") ) { return ::hx::Val( inSphere_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"triPlanes") ) { return ::hx::Val( triPlanes ); }
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPoints") ) { return ::hx::Val( getPoints_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"inFrustum") ) { return ::hx::Val( inFrustum_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addBuffers") ) { return ::hx::Val( addBuffers_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Polygon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"fromPolygon2D") ) { outValue = fromPolygon2D_dyn(); return true; }
	}
	return false;
}

::hx::Val Polygon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"triPlanes") ) { triPlanes=inValue.Cast<  ::h3d::col::TriPlane >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("triPlanes",22,22,6d,88));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Polygon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::col::TriPlane */ ,(int)offsetof(Polygon_obj,triPlanes),HX_("triPlanes",22,22,6d,88)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Polygon_obj_sStaticStorageInfo = 0;
#endif

static ::String Polygon_obj_sMemberFields[] = {
	HX_("triPlanes",22,22,6d,88),
	HX_("addBuffers",52,cf,1a,19),
	HX_("isConvex",f1,12,48,20),
	HX_("clone",5d,13,63,48),
	HX_("transform",6c,2d,93,45),
	HX_("getPoints",59,9b,84,73),
	HX_("getBounds",ab,0f,74,e2),
	HX_("contains",1f,5a,7b,2c),
	HX_("rayIntersection",53,fb,28,64),
	HX_("inFrustum",fd,89,7c,b6),
	HX_("inSphere",d2,f8,74,45),
	::String(null()) };

::hx::Class Polygon_obj::__mClass;

static ::String Polygon_obj_sStaticFields[] = {
	HX_("fromPolygon2D",02,7e,9b,0e),
	::String(null())
};

void Polygon_obj::__register()
{
	Polygon_obj _hx_dummy;
	Polygon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.Polygon",77,a7,6f,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polygon_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Polygon_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Polygon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Polygon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Polygon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Polygon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
