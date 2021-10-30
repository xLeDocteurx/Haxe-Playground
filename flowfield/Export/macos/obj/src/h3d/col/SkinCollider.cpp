#include <hxcpp.h>

#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_anim_Skin
#include <h3d/anim/Skin.h>
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
#ifndef INCLUDED_h3d_col_PolygonBuffer
#include <h3d/col/PolygonBuffer.h>
#endif
#ifndef INCLUDED_h3d_col_Ray
#include <h3d/col/Ray.h>
#endif
#ifndef INCLUDED_h3d_col_SkinCollider
#include <h3d/col/SkinCollider.h>
#endif
#ifndef INCLUDED_h3d_col_Sphere
#include <h3d/col/Sphere.h>
#endif
#ifndef INCLUDED_h3d_scene_Mesh
#include <h3d/scene/Mesh.h>
#endif
#ifndef INCLUDED_h3d_scene_MultiMaterial
#include <h3d/scene/MultiMaterial.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_Skin
#include <h3d/scene/Skin.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8b735e8aff70eace_5_new,"h3d.col.SkinCollider","new",0xe8b627a6,"h3d.col.SkinCollider.new","h3d/col/SkinCollider.hx",5,0xe08fdc48)
HX_LOCAL_STACK_FRAME(_hx_pos_8b735e8aff70eace_22_contains,"h3d.col.SkinCollider","contains",0xaa38e519,"h3d.col.SkinCollider.contains","h3d/col/SkinCollider.hx",22,0xe08fdc48)
HX_LOCAL_STACK_FRAME(_hx_pos_8b735e8aff70eace_30_inFrustum,"h3d.col.SkinCollider","inFrustum",0x3e9899c3,"h3d.col.SkinCollider.inFrustum","h3d/col/SkinCollider.hx",30,0xe08fdc48)
HX_LOCAL_STACK_FRAME(_hx_pos_8b735e8aff70eace_40_inSphere,"h3d.col.SkinCollider","inSphere",0xc33283cc,"h3d.col.SkinCollider.inSphere","h3d/col/SkinCollider.hx",40,0xe08fdc48)
HX_LOCAL_STACK_FRAME(_hx_pos_8b735e8aff70eace_49_rayIntersection,"h3d.col.SkinCollider","rayIntersection",0xd4d42399,"h3d.col.SkinCollider.rayIntersection","h3d/col/SkinCollider.hx",49,0xe08fdc48)
HX_LOCAL_STACK_FRAME(_hx_pos_8b735e8aff70eace_57_checkBounds,"h3d.col.SkinCollider","checkBounds",0x1b4366a3,"h3d.col.SkinCollider.checkBounds","h3d/col/SkinCollider.hx",57,0xe08fdc48)
HX_LOCAL_STACK_FRAME(_hx_pos_8b735e8aff70eace_65_applyTransform,"h3d.col.SkinCollider","applyTransform",0x4b886c98,"h3d.col.SkinCollider.applyTransform","h3d/col/SkinCollider.hx",65,0xe08fdc48)
namespace h3d{
namespace col{

void SkinCollider_obj::__construct( ::h3d::scene::Skin obj, ::h3d::col::PolygonBuffer col){
            	HX_GC_STACKFRAME(&_hx_pos_8b735e8aff70eace_5_new)
HXLINE(  12)		this->lastBoundsFrame = -1;
HXLINE(  11)		this->lastFrame = -1;
HXLINE(  15)		this->obj = obj;
HXLINE(  16)		this->col = col;
HXLINE(  17)		this->transform =  ::h3d::col::PolygonBuffer_obj::__alloc( HX_CTX );
HXLINE(  18)		 ::h3d::col::PolygonBuffer _hx_tmp = this->transform;
HXDLIN(  18)		::Array< Float > this1 = col->buffer;
HXDLIN(  18)		::Array< Float > this2 = ::Array_obj< Float >::__new(this1->length);
HXDLIN(  18)		::Array< Float > r = this2;
HXDLIN(  18)		r->blit(0,this1,0,this1->length);
HXDLIN(  18)		_hx_tmp->setData(r,col->indexes,col->startIndex,col->triCount);
HXLINE(  19)		this->currentBounds =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
            	}

Dynamic SkinCollider_obj::__CreateEmpty() { return new SkinCollider_obj; }

void *SkinCollider_obj::_hx_vtable = 0;

Dynamic SkinCollider_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SkinCollider_obj > _hx_result = new SkinCollider_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SkinCollider_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e34ee58;
}

static ::h3d::col::Collider_obj _hx_h3d_col_SkinCollider__hx_h3d_col_Collider= {
	( Float (::hx::Object::*)( ::h3d::col::Ray,bool))&::h3d::col::SkinCollider_obj::rayIntersection,
	( bool (::hx::Object::*)( ::h3d::col::Point))&::h3d::col::SkinCollider_obj::contains,
	( bool (::hx::Object::*)( ::h3d::col::Frustum, ::h3d::Matrix))&::h3d::col::SkinCollider_obj::inFrustum,
	( bool (::hx::Object::*)( ::h3d::col::Sphere))&::h3d::col::SkinCollider_obj::inSphere,
};

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_col_SkinCollider__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *SkinCollider_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x12a1e47b: return &_hx_h3d_col_SkinCollider__hx_h3d_col_Collider;
		case (int)0xa6f1a21a: return &_hx_h3d_col_SkinCollider__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool SkinCollider_obj::contains( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_8b735e8aff70eace_22_contains)
HXLINE(  23)		this->checkBounds();
HXLINE(  24)		 ::h3d::col::Bounds _this = this->currentBounds;
HXDLIN(  24)		bool _hx_tmp;
HXDLIN(  24)		bool _hx_tmp1;
HXDLIN(  24)		bool _hx_tmp2;
HXDLIN(  24)		bool _hx_tmp3;
HXDLIN(  24)		bool _hx_tmp4;
HXDLIN(  24)		if ((p->x >= _this->xMin)) {
HXLINE(  24)			_hx_tmp4 = (p->x < _this->xMax);
            		}
            		else {
HXLINE(  24)			_hx_tmp4 = false;
            		}
HXDLIN(  24)		if (_hx_tmp4) {
HXLINE(  24)			_hx_tmp3 = (p->y >= _this->yMin);
            		}
            		else {
HXLINE(  24)			_hx_tmp3 = false;
            		}
HXDLIN(  24)		if (_hx_tmp3) {
HXLINE(  24)			_hx_tmp2 = (p->y < _this->yMax);
            		}
            		else {
HXLINE(  24)			_hx_tmp2 = false;
            		}
HXDLIN(  24)		if (_hx_tmp2) {
HXLINE(  24)			_hx_tmp1 = (p->z >= _this->zMin);
            		}
            		else {
HXLINE(  24)			_hx_tmp1 = false;
            		}
HXDLIN(  24)		if (_hx_tmp1) {
HXLINE(  24)			_hx_tmp = (p->z < _this->zMax);
            		}
            		else {
HXLINE(  24)			_hx_tmp = false;
            		}
HXDLIN(  24)		if (!(_hx_tmp)) {
HXLINE(  25)			return false;
            		}
HXLINE(  26)		this->applyTransform();
HXLINE(  27)		return this->transform->contains(p);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SkinCollider_obj,contains,return )

bool SkinCollider_obj::inFrustum( ::h3d::col::Frustum p, ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_8b735e8aff70eace_30_inFrustum)
HXLINE(  31)		this->checkBounds();
HXLINE(  32)		 ::h3d::col::Bounds _this = this->currentBounds;
HXDLIN(  32)		if (::hx::IsNotNull( m )) {
HXLINE(  32)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            		}
HXDLIN(  32)		if (!(p->hasBounds(_this))) {
HXLINE(  33)			return false;
            		}
HXLINE(  34)		if (::hx::IsNotNull( m )) {
HXLINE(  35)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            		}
HXLINE(  36)		this->applyTransform();
HXLINE(  37)		return this->transform->inFrustum(p,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(SkinCollider_obj,inFrustum,return )

bool SkinCollider_obj::inSphere( ::h3d::col::Sphere s){
            	HX_STACKFRAME(&_hx_pos_8b735e8aff70eace_40_inSphere)
HXLINE(  41)		this->checkBounds();
HXLINE(  42)		 ::h3d::col::Bounds _this = this->currentBounds;
HXDLIN(  42)		Float c_x = s->x;
HXDLIN(  42)		Float c_y = s->y;
HXDLIN(  42)		Float c_z = s->z;
HXDLIN(  42)		Float a = _this->xMin;
HXDLIN(  42)		Float a1 = s->x;
HXDLIN(  42)		Float b = _this->xMax;
HXDLIN(  42)		Float b1;
HXDLIN(  42)		if ((a1 > b)) {
HXLINE(  42)			b1 = b;
            		}
            		else {
HXLINE(  42)			b1 = a1;
            		}
HXDLIN(  42)		Float x;
HXDLIN(  42)		if ((a < b1)) {
HXLINE(  42)			x = b1;
            		}
            		else {
HXLINE(  42)			x = a;
            		}
HXDLIN(  42)		Float a2 = _this->yMin;
HXDLIN(  42)		Float a3 = s->y;
HXDLIN(  42)		Float b2 = _this->yMax;
HXDLIN(  42)		Float b3;
HXDLIN(  42)		if ((a3 > b2)) {
HXLINE(  42)			b3 = b2;
            		}
            		else {
HXLINE(  42)			b3 = a3;
            		}
HXDLIN(  42)		Float y;
HXDLIN(  42)		if ((a2 < b3)) {
HXLINE(  42)			y = b3;
            		}
            		else {
HXLINE(  42)			y = a2;
            		}
HXDLIN(  42)		Float a4 = _this->zMin;
HXDLIN(  42)		Float a5 = s->z;
HXDLIN(  42)		Float b4 = _this->zMax;
HXDLIN(  42)		Float b5;
HXDLIN(  42)		if ((a5 > b4)) {
HXLINE(  42)			b5 = b4;
            		}
            		else {
HXLINE(  42)			b5 = a5;
            		}
HXDLIN(  42)		Float z;
HXDLIN(  42)		if ((a4 < b5)) {
HXLINE(  42)			z = b5;
            		}
            		else {
HXLINE(  42)			z = a4;
            		}
HXDLIN(  42)		Float p_x = x;
HXDLIN(  42)		Float p_y = y;
HXDLIN(  42)		Float p_z = z;
HXDLIN(  42)		Float dx = (p_x - c_x);
HXDLIN(  42)		Float dy = (p_y - c_y);
HXDLIN(  42)		Float dz = (p_z - c_z);
HXDLIN(  42)		if (!(((((dx * dx) + (dy * dy)) + (dz * dz)) < (s->r * s->r)))) {
HXLINE(  43)			return false;
            		}
HXLINE(  44)		this->applyTransform();
HXLINE(  45)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN(  45)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SkinCollider_obj,inSphere,return )

Float SkinCollider_obj::rayIntersection( ::h3d::col::Ray r,bool bestMatch){
            	HX_STACKFRAME(&_hx_pos_8b735e8aff70eace_49_rayIntersection)
HXLINE(  50)		this->checkBounds();
HXLINE(  51)		if ((this->currentBounds->rayIntersection(r,false) < 0)) {
HXLINE(  52)			return ((Float)-1.);
            		}
HXLINE(  53)		this->applyTransform();
HXLINE(  54)		return this->transform->rayIntersection(r,bestMatch);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SkinCollider_obj,rayIntersection,return )

void SkinCollider_obj::checkBounds(){
            	HX_STACKFRAME(&_hx_pos_8b735e8aff70eace_57_checkBounds)
HXLINE(  58)		bool _hx_tmp;
HXDLIN(  58)		if (!(this->obj->jointsUpdated)) {
HXLINE(  58)			_hx_tmp = (this->lastBoundsFrame == this->obj->lastFrame);
            		}
            		else {
HXLINE(  58)			_hx_tmp = false;
            		}
HXDLIN(  58)		if (_hx_tmp) {
HXLINE(  58)			return;
            		}
HXLINE(  59)		this->lastBoundsFrame = this->obj->lastFrame;
HXLINE(  60)		this->obj->syncJoints();
HXLINE(  61)		{
HXLINE(  61)			 ::h3d::col::Bounds _this = this->currentBounds;
HXDLIN(  61)			_this->xMin = ((Float)1e20);
HXDLIN(  61)			_this->xMax = ((Float)-1e20);
HXDLIN(  61)			_this->yMin = ((Float)1e20);
HXDLIN(  61)			_this->yMax = ((Float)-1e20);
HXDLIN(  61)			_this->zMin = ((Float)1e20);
HXDLIN(  61)			_this->zMax = ((Float)-1e20);
            		}
HXLINE(  62)		this->obj->getBoundsRec(this->currentBounds);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkinCollider_obj,checkBounds,(void))

void SkinCollider_obj::applyTransform(){
            	HX_STACKFRAME(&_hx_pos_8b735e8aff70eace_65_applyTransform)
HXLINE(  66)		bool _hx_tmp;
HXDLIN(  66)		if (!(this->obj->jointsUpdated)) {
HXLINE(  66)			_hx_tmp = (this->lastFrame == this->obj->lastFrame);
            		}
            		else {
HXLINE(  66)			_hx_tmp = false;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  66)			return;
            		}
HXLINE(  67)		this->lastFrame = this->obj->lastFrame;
HXLINE(  68)		this->obj->syncJoints();
HXLINE(  69)		int j = 0;
HXDLIN(  69)		int v = 0;
HXLINE(  70)		int nbones = this->obj->skinData->bonesPerVertex;
HXLINE(  71)		{
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			int _g1 = this->obj->skinData->vertexCount;
HXDLIN(  71)			while((_g < _g1)){
HXLINE(  71)				_g = (_g + 1);
HXDLIN(  71)				int i = (_g - 1);
HXLINE(  72)				Float px = ((Float)0.);
HXDLIN(  72)				Float py = ((Float)0.);
HXDLIN(  72)				Float pz = ((Float)0.);
HXLINE(  73)				Float p_x = ( (Float)(_hx_array_unsafe_get(this->col->buffer,v)) );
HXDLIN(  73)				Float p_y = ( (Float)(_hx_array_unsafe_get(this->col->buffer,(v + 1))) );
HXDLIN(  73)				Float p_z = ( (Float)(_hx_array_unsafe_get(this->col->buffer,(v + 2))) );
HXLINE(  75)				{
HXLINE(  75)					int _g1 = 0;
HXDLIN(  75)					int _g2 = nbones;
HXDLIN(  75)					while((_g1 < _g2)){
HXLINE(  75)						_g1 = (_g1 + 1);
HXDLIN(  75)						int k = (_g1 - 1);
HXLINE(  76)						Float w = ( (Float)(_hx_array_unsafe_get(this->obj->skinData->vertexWeights,j)) );
HXLINE(  77)						if ((w == 0)) {
HXLINE(  78)							j = (j + 1);
HXLINE(  79)							continue;
            						}
HXLINE(  81)						j = (j + 1);
HXDLIN(  81)						int bid = ( (int)(_hx_array_unsafe_get(this->obj->skinData->vertexJoints,(j - 1))) );
HXLINE(  82)						Float p2_x = p_x;
HXDLIN(  82)						Float p2_y = p_y;
HXDLIN(  82)						Float p2_z = p_z;
HXLINE(  83)						{
HXLINE(  83)							 ::h3d::Matrix m = this->obj->currentPalette->__get(bid).StaticCast<  ::h3d::Matrix >();
HXDLIN(  83)							Float px1 = ((((p2_x * m->_11) + (p2_y * m->_21)) + (p2_z * m->_31)) + m->_41);
HXDLIN(  83)							Float py1 = ((((p2_x * m->_12) + (p2_y * m->_22)) + (p2_z * m->_32)) + m->_42);
HXDLIN(  83)							Float pz1 = ((((p2_x * m->_13) + (p2_y * m->_23)) + (p2_z * m->_33)) + m->_43);
HXDLIN(  83)							p2_x = px1;
HXDLIN(  83)							p2_y = py1;
HXDLIN(  83)							p2_z = pz1;
            						}
HXLINE(  84)						px = (px + (p2_x * w));
HXLINE(  85)						py = (py + (p2_y * w));
HXLINE(  86)						pz = (pz + (p2_z * w));
            					}
            				}
HXLINE(  88)				{
HXLINE(  88)					v = (v + 1);
HXDLIN(  88)					this->transform->buffer->__unsafe_set((v - 1),px);
            				}
HXLINE(  89)				{
HXLINE(  89)					v = (v + 1);
HXDLIN(  89)					this->transform->buffer->__unsafe_set((v - 1),py);
            				}
HXLINE(  90)				{
HXLINE(  90)					v = (v + 1);
HXDLIN(  90)					this->transform->buffer->__unsafe_set((v - 1),pz);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkinCollider_obj,applyTransform,(void))


::hx::ObjectPtr< SkinCollider_obj > SkinCollider_obj::__new( ::h3d::scene::Skin obj, ::h3d::col::PolygonBuffer col) {
	::hx::ObjectPtr< SkinCollider_obj > __this = new SkinCollider_obj();
	__this->__construct(obj,col);
	return __this;
}

::hx::ObjectPtr< SkinCollider_obj > SkinCollider_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Skin obj, ::h3d::col::PolygonBuffer col) {
	SkinCollider_obj *__this = (SkinCollider_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SkinCollider_obj), true, "h3d.col.SkinCollider"));
	*(void **)__this = SkinCollider_obj::_hx_vtable;
	__this->__construct(obj,col);
	return __this;
}

SkinCollider_obj::SkinCollider_obj()
{
}

void SkinCollider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkinCollider);
	HX_MARK_MEMBER_NAME(obj,"obj");
	HX_MARK_MEMBER_NAME(col,"col");
	HX_MARK_MEMBER_NAME(currentBounds,"currentBounds");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(lastFrame,"lastFrame");
	HX_MARK_MEMBER_NAME(lastBoundsFrame,"lastBoundsFrame");
	HX_MARK_END_CLASS();
}

void SkinCollider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(obj,"obj");
	HX_VISIT_MEMBER_NAME(col,"col");
	HX_VISIT_MEMBER_NAME(currentBounds,"currentBounds");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(lastFrame,"lastFrame");
	HX_VISIT_MEMBER_NAME(lastBoundsFrame,"lastBoundsFrame");
}

::hx::Val SkinCollider_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { return ::hx::Val( obj ); }
		if (HX_FIELD_EQ(inName,"col") ) { return ::hx::Val( col ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"inSphere") ) { return ::hx::Val( inSphere_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform ); }
		if (HX_FIELD_EQ(inName,"lastFrame") ) { return ::hx::Val( lastFrame ); }
		if (HX_FIELD_EQ(inName,"inFrustum") ) { return ::hx::Val( inFrustum_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkBounds") ) { return ::hx::Val( checkBounds_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentBounds") ) { return ::hx::Val( currentBounds ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"applyTransform") ) { return ::hx::Val( applyTransform_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastBoundsFrame") ) { return ::hx::Val( lastBoundsFrame ); }
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SkinCollider_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { obj=inValue.Cast<  ::h3d::scene::Skin >(); return inValue; }
		if (HX_FIELD_EQ(inName,"col") ) { col=inValue.Cast<  ::h3d::col::PolygonBuffer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast<  ::h3d::col::PolygonBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastFrame") ) { lastFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentBounds") ) { currentBounds=inValue.Cast<  ::h3d::col::Bounds >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastBoundsFrame") ) { lastBoundsFrame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkinCollider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("obj",f7,8f,54,00));
	outFields->push(HX_("col",40,80,4b,00));
	outFields->push(HX_("currentBounds",8e,07,7a,49));
	outFields->push(HX_("transform",6c,2d,93,45));
	outFields->push(HX_("lastFrame",f7,a5,30,53));
	outFields->push(HX_("lastBoundsFrame",c2,7a,cb,26));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SkinCollider_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::scene::Skin */ ,(int)offsetof(SkinCollider_obj,obj),HX_("obj",f7,8f,54,00)},
	{::hx::fsObject /*  ::h3d::col::PolygonBuffer */ ,(int)offsetof(SkinCollider_obj,col),HX_("col",40,80,4b,00)},
	{::hx::fsObject /*  ::h3d::col::Bounds */ ,(int)offsetof(SkinCollider_obj,currentBounds),HX_("currentBounds",8e,07,7a,49)},
	{::hx::fsObject /*  ::h3d::col::PolygonBuffer */ ,(int)offsetof(SkinCollider_obj,transform),HX_("transform",6c,2d,93,45)},
	{::hx::fsInt,(int)offsetof(SkinCollider_obj,lastFrame),HX_("lastFrame",f7,a5,30,53)},
	{::hx::fsInt,(int)offsetof(SkinCollider_obj,lastBoundsFrame),HX_("lastBoundsFrame",c2,7a,cb,26)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SkinCollider_obj_sStaticStorageInfo = 0;
#endif

static ::String SkinCollider_obj_sMemberFields[] = {
	HX_("obj",f7,8f,54,00),
	HX_("col",40,80,4b,00),
	HX_("currentBounds",8e,07,7a,49),
	HX_("transform",6c,2d,93,45),
	HX_("lastFrame",f7,a5,30,53),
	HX_("lastBoundsFrame",c2,7a,cb,26),
	HX_("contains",1f,5a,7b,2c),
	HX_("inFrustum",fd,89,7c,b6),
	HX_("inSphere",d2,f8,74,45),
	HX_("rayIntersection",53,fb,28,64),
	HX_("checkBounds",5d,59,2f,48),
	HX_("applyTransform",1e,6a,11,34),
	::String(null()) };

::hx::Class SkinCollider_obj::__mClass;

void SkinCollider_obj::__register()
{
	SkinCollider_obj _hx_dummy;
	SkinCollider_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.SkinCollider",b4,1c,9c,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SkinCollider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SkinCollider_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SkinCollider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SkinCollider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
