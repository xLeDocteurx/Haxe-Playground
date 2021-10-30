#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h3d_Camera
#include <h3d/Camera.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_anim_Animation
#include <h3d/anim/Animation.h>
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
#ifndef INCLUDED_h3d_col_Ray
#include <h3d/col/Ray.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_23e7f56913cacfa4_5_new,"h3d.Camera","new",0x6332994c,"h3d.Camera.new","h3d/Camera.hx",5,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_71_setFovX,"h3d.Camera","setFovX",0x39b85459,"h3d.Camera.setFovX","h3d/Camera.hx",71,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_79_getFovX,"h3d.Camera","getFovX",0x46b6c34d,"h3d.Camera.getFovX","h3d/Camera.hx",79,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_86_clone,"h3d.Camera","clone",0x3736ef49,"h3d.Camera.clone","h3d/Camera.hx",86,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_98_getInverseViewProj,"h3d.Camera","getInverseViewProj",0xb20cb510,"h3d.Camera.getInverseViewProj","h3d/Camera.hx",98,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_110_getInverseProj,"h3d.Camera","getInverseProj",0xc34e710b,"h3d.Camera.getInverseProj","h3d/Camera.hx",110,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_123_getInverseView,"h3d.Camera","getInverseView",0xc73edbd3,"h3d.Camera.getInverseView","h3d/Camera.hx",123,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_136_setCubeMap,"h3d.Camera","setCubeMap",0xd83addb9,"h3d.Camera.setCubeMap","h3d/Camera.hx",136,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_158_unproject,"h3d.Camera","unproject",0xe9db5b8c,"h3d.Camera.unproject","h3d/Camera.hx",158,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_164_rayFromScreen,"h3d.Camera","rayFromScreen",0xd8e70aec,"h3d.Camera.rayFromScreen","h3d/Camera.hx",164,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_173_update,"h3d.Camera","update",0x9192189d,"h3d.Camera.update","h3d/Camera.hx",173,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_207_getFrustumCorners,"h3d.Camera","getFrustumCorners",0x70bfc8de,"h3d.Camera.getFrustumCorners","h3d/Camera.hx",207,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_213_lostUp,"h3d.Camera","lostUp",0x6eedc7f3,"h3d.Camera.lostUp","h3d/Camera.hx",213,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_219_getViewDirection,"h3d.Camera","getViewDirection",0x001cd838,"h3d.Camera.getViewDirection","h3d/Camera.hx",219,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_226_movePosAxis,"h3d.Camera","movePosAxis",0x4f57ce30,"h3d.Camera.movePosAxis","h3d/Camera.hx",226,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_234_moveTargetAxis,"h3d.Camera","moveTargetAxis",0xf199c597,"h3d.Camera.moveTargetAxis","h3d/Camera.hx",234,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_242_forward,"h3d.Camera","forward",0x163e90b1,"h3d.Camera.forward","h3d/Camera.hx",242,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_251_backward,"h3d.Camera","backward",0x5bde3b77,"h3d.Camera.backward","h3d/Camera.hx",251,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_260_makeCameraMatrix,"h3d.Camera","makeCameraMatrix",0xfe52c168,"h3d.Camera.makeCameraMatrix","h3d/Camera.hx",260,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_293_setTransform,"h3d.Camera","setTransform",0x2d91a6fe,"h3d.Camera.setTransform","h3d/Camera.hx",293,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_298_makeFrustumMatrix,"h3d.Camera","makeFrustumMatrix",0xa62fae61,"h3d.Camera.makeFrustumMatrix","h3d/Camera.hx",298,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_356_project,"h3d.Camera","project",0x265ec1c5,"h3d.Camera.project","h3d/Camera.hx",356,0xefcd8b83)
HX_LOCAL_STACK_FRAME(_hx_pos_23e7f56913cacfa4_368_load,"h3d.Camera","load",0x67c89fba,"h3d.Camera.load","h3d/Camera.hx",368,0xefcd8b83)
namespace h3d{

void Camera_obj::__construct(::hx::Null< Float >  __o_fovY,::hx::Null< Float >  __o_zoom,::hx::Null< Float >  __o_screenRatio,::hx::Null< Float >  __o_zNear,::hx::Null< Float >  __o_zFar,::hx::Null< bool >  __o_rightHanded){
            		Float fovY = __o_fovY.Default(((Float)25.));
            		Float zoom = __o_zoom.Default(((Float)1.));
            		Float screenRatio = __o_screenRatio.Default(((Float)1.333333));
            		Float zNear = __o_zNear.Default(((Float)0.02));
            		Float zFar = __o_zFar.Default(((Float)4000.));
            		bool rightHanded = __o_rightHanded.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_23e7f56913cacfa4_5_new)
HXLINE(  40)		this->viewY = ((Float)0.);
HXLINE(  39)		this->viewX = ((Float)0.);
HXLINE(  52)		this->fovY = fovY;
HXLINE(  53)		this->zoom = zoom;
HXLINE(  54)		this->screenRatio = screenRatio;
HXLINE(  55)		this->zNear = zNear;
HXLINE(  56)		this->zFar = zFar;
HXLINE(  57)		this->rightHanded = rightHanded;
HXLINE(  58)		this->pos =  ::h3d::Vector_obj::__alloc( HX_CTX ,2,3,4,null());
HXLINE(  59)		this->up =  ::h3d::Vector_obj::__alloc( HX_CTX ,0,0,1,null());
HXLINE(  60)		this->target =  ::h3d::Vector_obj::__alloc( HX_CTX ,0,0,0,null());
HXLINE(  61)		this->m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  62)		this->mcam =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  63)		this->mproj =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  64)		this->frustum =  ::h3d::col::Frustum_obj::__alloc( HX_CTX ,null());
HXLINE(  65)		this->update();
            	}

Dynamic Camera_obj::__CreateEmpty() { return new Camera_obj; }

void *Camera_obj::_hx_vtable = 0;

Dynamic Camera_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Camera_obj > _hx_result = new Camera_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Camera_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0fe53afe;
}

void Camera_obj::setFovX(Float fovX,Float withRatio){
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_71_setFovX)
HXLINE(  72)		Float degToRad = (::Math_obj::PI / ( (Float)(180) ));
HXLINE(  73)		this->fovY = ((( (Float)(2) ) * ::Math_obj::atan((::Math_obj::tan(((fovX * ((Float)0.5)) * degToRad)) / withRatio))) / degToRad);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,setFovX,(void))

Float Camera_obj::getFovX(){
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_79_getFovX)
HXLINE(  80)		Float degToRad = (::Math_obj::PI / ( (Float)(180) ));
HXLINE(  81)		Float halfFovX = ::Math_obj::atan((::Math_obj::tan(((this->fovY * ((Float)0.5)) * degToRad)) * this->screenRatio));
HXLINE(  82)		Float fovX = ((halfFovX * ( (Float)(2) )) / degToRad);
HXLINE(  83)		return fovX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getFovX,return )

 ::h3d::Camera Camera_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_23e7f56913cacfa4_86_clone)
HXLINE(  87)		 ::h3d::Camera c =  ::h3d::Camera_obj::__alloc( HX_CTX ,this->fovY,this->zoom,this->screenRatio,this->zNear,this->zFar,this->rightHanded);
HXLINE(  88)		 ::h3d::Vector _this = this->pos;
HXDLIN(  88)		c->pos =  ::h3d::Vector_obj::__alloc( HX_CTX ,_this->x,_this->y,_this->z,_this->w);
HXLINE(  89)		 ::h3d::Vector _this1 = this->up;
HXDLIN(  89)		c->up =  ::h3d::Vector_obj::__alloc( HX_CTX ,_this1->x,_this1->y,_this1->z,_this1->w);
HXLINE(  90)		 ::h3d::Vector _this2 = this->target;
HXDLIN(  90)		c->target =  ::h3d::Vector_obj::__alloc( HX_CTX ,_this2->x,_this2->y,_this2->z,_this2->w);
HXLINE(  91)		c->update();
HXLINE(  92)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,clone,return )

 ::h3d::Matrix Camera_obj::getInverseViewProj(){
            	HX_GC_STACKFRAME(&_hx_pos_23e7f56913cacfa4_98_getInverseViewProj)
HXLINE(  99)		if (::hx::IsNull( this->minv )) {
HXLINE(  99)			this->minv =  ::h3d::Matrix_obj::__alloc( HX_CTX );
            		}
HXLINE( 100)		if (this->needInv) {
HXLINE( 101)			this->minv->initInverse(this->m);
HXLINE( 102)			this->needInv = false;
            		}
HXLINE( 104)		return this->minv;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getInverseViewProj,return )

 ::h3d::Matrix Camera_obj::getInverseProj(){
            	HX_GC_STACKFRAME(&_hx_pos_23e7f56913cacfa4_110_getInverseProj)
HXLINE( 111)		if (::hx::IsNull( this->mprojInv )) {
HXLINE( 112)			this->mprojInv =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 113)			this->mprojInv->_44 = ( (Float)(0) );
            		}
HXLINE( 115)		if ((this->mprojInv->_44 == 0)) {
HXLINE( 116)			this->mprojInv->initInverse(this->mproj);
            		}
HXLINE( 117)		return this->mprojInv;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getInverseProj,return )

 ::h3d::Matrix Camera_obj::getInverseView(){
            	HX_GC_STACKFRAME(&_hx_pos_23e7f56913cacfa4_123_getInverseView)
HXLINE( 124)		if (::hx::IsNull( this->mcamInv )) {
HXLINE( 125)			this->mcamInv =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 126)			this->mcamInv->_44 = ( (Float)(0) );
            		}
HXLINE( 128)		if ((this->mcamInv->_44 == 0)) {
HXLINE( 129)			this->mcamInv->initInverse(this->mcam);
            		}
HXLINE( 130)		return this->mcamInv;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getInverseView,return )

void Camera_obj::setCubeMap(int face, ::h3d::Vector position){
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_136_setCubeMap)
HXLINE( 137)		int dx = 0;
HXDLIN( 137)		int dy = 0;
HXDLIN( 137)		int dz = 0;
HXLINE( 138)		switch((int)(face)){
            			case (int)0: {
HXLINE( 139)				dx = 1;
HXDLIN( 139)				{
HXLINE( 139)					 ::h3d::Vector _this = this->up;
HXDLIN( 139)					_this->x = ( (Float)(0) );
HXDLIN( 139)					_this->y = ( (Float)(1) );
HXDLIN( 139)					_this->z = ( (Float)(0) );
HXDLIN( 139)					_this->w = ((Float)1.);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 140)				dx = -1;
HXDLIN( 140)				{
HXLINE( 140)					 ::h3d::Vector _this = this->up;
HXDLIN( 140)					_this->x = ( (Float)(0) );
HXDLIN( 140)					_this->y = ( (Float)(1) );
HXDLIN( 140)					_this->z = ( (Float)(0) );
HXDLIN( 140)					_this->w = ((Float)1.);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 141)				dy = 1;
HXDLIN( 141)				{
HXLINE( 141)					 ::h3d::Vector _this = this->up;
HXDLIN( 141)					_this->x = ( (Float)(0) );
HXDLIN( 141)					_this->y = ( (Float)(0) );
HXDLIN( 141)					_this->z = ( (Float)(-1) );
HXDLIN( 141)					_this->w = ((Float)1.);
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 142)				dy = -1;
HXDLIN( 142)				{
HXLINE( 142)					 ::h3d::Vector _this = this->up;
HXDLIN( 142)					_this->x = ( (Float)(0) );
HXDLIN( 142)					_this->y = ( (Float)(0) );
HXDLIN( 142)					_this->z = ( (Float)(1) );
HXDLIN( 142)					_this->w = ((Float)1.);
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 143)				dz = 1;
HXDLIN( 143)				{
HXLINE( 143)					 ::h3d::Vector _this = this->up;
HXDLIN( 143)					_this->x = ( (Float)(0) );
HXDLIN( 143)					_this->y = ( (Float)(1) );
HXDLIN( 143)					_this->z = ( (Float)(0) );
HXDLIN( 143)					_this->w = ((Float)1.);
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 144)				dz = -1;
HXDLIN( 144)				{
HXLINE( 144)					 ::h3d::Vector _this = this->up;
HXDLIN( 144)					_this->x = ( (Float)(0) );
HXDLIN( 144)					_this->y = ( (Float)(1) );
HXDLIN( 144)					_this->z = ( (Float)(0) );
HXDLIN( 144)					_this->w = ((Float)1.);
            				}
            			}
            			break;
            		}
HXLINE( 146)		if (::hx::IsNotNull( position )) {
HXLINE( 147)			 ::h3d::Vector _this = this->pos;
HXDLIN( 147)			_this->x = position->x;
HXDLIN( 147)			_this->y = position->y;
HXDLIN( 147)			_this->z = position->z;
HXDLIN( 147)			_this->w = position->w;
            		}
HXLINE( 148)		{
HXLINE( 148)			 ::h3d::Vector _this = this->target;
HXDLIN( 148)			_this->x = (this->pos->x + dx);
HXDLIN( 148)			_this->y = (this->pos->y + dy);
HXDLIN( 148)			_this->z = (this->pos->z + dz);
HXDLIN( 148)			_this->w = ((Float)1.);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,setCubeMap,(void))

 ::h3d::Vector Camera_obj::unproject(Float screenX,Float screenY,Float camZ){
            	HX_GC_STACKFRAME(&_hx_pos_23e7f56913cacfa4_158_unproject)
HXLINE( 159)		 ::h3d::Vector p =  ::h3d::Vector_obj::__alloc( HX_CTX ,screenX,screenY,camZ,null());
HXLINE( 160)		{
HXLINE( 160)			 ::h3d::Matrix m = this->getInverseViewProj();
HXDLIN( 160)			Float px = ((((p->x * m->_11) + (p->y * m->_21)) + (p->z * m->_31)) + (p->w * m->_41));
HXDLIN( 160)			Float py = ((((p->x * m->_12) + (p->y * m->_22)) + (p->z * m->_32)) + (p->w * m->_42));
HXDLIN( 160)			Float pz = ((((p->x * m->_13) + (p->y * m->_23)) + (p->z * m->_33)) + (p->w * m->_43));
HXDLIN( 160)			Float iw = (( (Float)(1) ) / ((((p->x * m->_14) + (p->y * m->_24)) + (p->z * m->_34)) + (p->w * m->_44)));
HXDLIN( 160)			p->x = (px * iw);
HXDLIN( 160)			p->y = (py * iw);
HXDLIN( 160)			p->z = (pz * iw);
HXDLIN( 160)			p->w = ( (Float)(1) );
            		}
HXLINE( 161)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Camera_obj,unproject,return )

 ::h3d::col::Ray Camera_obj::rayFromScreen(Float pixelX,Float pixelY,::hx::Null< int >  __o_sceneWidth,::hx::Null< int >  __o_sceneHeight){
            		int sceneWidth = __o_sceneWidth.Default(-1);
            		int sceneHeight = __o_sceneHeight.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_23e7f56913cacfa4_164_rayFromScreen)
HXLINE( 165)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 166)		if ((sceneWidth < 0)) {
HXLINE( 166)			sceneWidth = engine->width;
            		}
HXLINE( 167)		if ((sceneHeight < 0)) {
HXLINE( 167)			sceneHeight = engine->height;
            		}
HXLINE( 168)		Float rx = (((pixelX / ( (Float)(sceneWidth) )) - ((Float)0.5)) * ( (Float)(2) ));
HXLINE( 169)		Float ry = ((((Float)0.5) - (pixelY / ( (Float)(sceneHeight) ))) * ( (Float)(2) ));
HXLINE( 170)		 ::h3d::Vector _this = this->unproject(rx,ry,( (Float)(0) ));
HXDLIN( 170)		Float p1_x = _this->x;
HXDLIN( 170)		Float p1_y = _this->y;
HXDLIN( 170)		Float p1_z = _this->z;
HXDLIN( 170)		 ::h3d::Vector _this1 = this->unproject(rx,ry,( (Float)(1) ));
HXDLIN( 170)		Float p2_x = _this1->x;
HXDLIN( 170)		Float p2_y = _this1->y;
HXDLIN( 170)		Float p2_z = _this1->z;
HXDLIN( 170)		 ::h3d::col::Ray r =  ::h3d::col::Ray_obj::__alloc( HX_CTX );
HXDLIN( 170)		r->px = p1_x;
HXDLIN( 170)		r->py = p1_y;
HXDLIN( 170)		r->pz = p1_z;
HXDLIN( 170)		r->lx = (p2_x - p1_x);
HXDLIN( 170)		r->ly = (p2_y - p1_y);
HXDLIN( 170)		r->lz = (p2_z - p1_z);
HXDLIN( 170)		r->normalize();
HXDLIN( 170)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Camera_obj,rayFromScreen,return )

void Camera_obj::update(){
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_173_update)
HXLINE( 174)		if (::hx::IsNotNull( this->follow )) {
HXLINE( 175)			 ::h3d::col::Point fpos = ( ( ::h3d::scene::Object)(this->follow->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic)) )->localToGlobal(null());
HXLINE( 176)			 ::h3d::col::Point ftarget = ( ( ::h3d::scene::Object)(this->follow->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->localToGlobal(null());
HXLINE( 177)			{
HXLINE( 177)				 ::h3d::Vector _this = this->pos;
HXDLIN( 177)				_this->x = fpos->x;
HXDLIN( 177)				_this->y = fpos->y;
HXDLIN( 177)				_this->z = fpos->z;
HXDLIN( 177)				_this->w = ((Float)1.);
            			}
HXLINE( 178)			{
HXLINE( 178)				 ::h3d::Vector _this1 = this->target;
HXDLIN( 178)				_this1->x = ftarget->x;
HXDLIN( 178)				_this1->y = ftarget->y;
HXDLIN( 178)				_this1->z = ftarget->z;
HXDLIN( 178)				_this1->w = ((Float)1.);
            			}
HXLINE( 180)			if (::hx::IsNotNull( ( ( ::h3d::scene::Object)(this->follow->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic)) )->name )) {
HXLINE( 181)				 ::h3d::scene::Object p = ( ( ::h3d::scene::Object)(this->follow->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic)) );
HXLINE( 182)				while(::hx::IsNotNull( p )){
HXLINE( 183)					if (::hx::IsNotNull( p->currentAnimation )) {
HXLINE( 184)						 ::Dynamic v = p->currentAnimation->getPropValue(( ( ::h3d::scene::Object)(this->follow->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic)) )->name,HX_("FOVY",cc,2c,81,2e));
HXLINE( 185)						if (::hx::IsNotNull( v )) {
HXLINE( 186)							this->fovY = ( (Float)(v) );
HXLINE( 187)							goto _hx_goto_10;
            						}
            					}
HXLINE( 190)					p = p->parent;
            				}
            				_hx_goto_10:;
            			}
            		}
HXLINE( 194)		this->makeCameraMatrix(this->mcam);
HXLINE( 195)		this->makeFrustumMatrix(this->mproj);
HXLINE( 197)		this->m->multiply(this->mcam,this->mproj);
HXLINE( 199)		this->needInv = true;
HXLINE( 200)		if (::hx::IsNotNull( this->mcamInv )) {
HXLINE( 200)			this->mcamInv->_44 = ( (Float)(0) );
            		}
HXLINE( 201)		if (::hx::IsNotNull( this->mprojInv )) {
HXLINE( 201)			this->mprojInv->_44 = ( (Float)(0) );
            		}
HXLINE( 203)		this->frustum->loadMatrix(this->m);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,update,(void))

::Array< ::Dynamic> Camera_obj::getFrustumCorners(::hx::Null< Float >  __o_zMax,::hx::Null< Float >  __o_zMin){
            		Float zMax = __o_zMax.Default(((Float)1.));
            		Float zMin = __o_zMin.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_207_getFrustumCorners)
HXLINE( 208)		 ::h3d::Vector _hx_tmp = this->unproject(( (Float)(-1) ),( (Float)(1) ),zMin);
HXDLIN( 208)		 ::h3d::Vector _hx_tmp1 = this->unproject(( (Float)(1) ),( (Float)(1) ),zMin);
HXDLIN( 208)		 ::h3d::Vector _hx_tmp2 = this->unproject(( (Float)(1) ),( (Float)(-1) ),zMin);
HXDLIN( 208)		 ::h3d::Vector _hx_tmp3 = this->unproject(( (Float)(-1) ),( (Float)(-1) ),zMin);
HXLINE( 209)		 ::h3d::Vector _hx_tmp4 = this->unproject(( (Float)(-1) ),( (Float)(1) ),zMax);
HXDLIN( 209)		 ::h3d::Vector _hx_tmp5 = this->unproject(( (Float)(1) ),( (Float)(1) ),zMax);
HXDLIN( 209)		 ::h3d::Vector _hx_tmp6 = this->unproject(( (Float)(1) ),( (Float)(-1) ),zMax);
HXLINE( 207)		return ::Array_obj< ::Dynamic>::__new(8)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_hx_tmp3)->init(4,_hx_tmp4)->init(5,_hx_tmp5)->init(6,_hx_tmp6)->init(7,this->unproject(( (Float)(-1) ),( (Float)(-1) ),zMax));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,getFrustumCorners,return )

bool Camera_obj::lostUp(){
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_213_lostUp)
HXLINE( 214)		 ::h3d::Vector _this = this->pos;
HXDLIN( 214)		Float p2_x = _this->x;
HXDLIN( 214)		Float p2_y = _this->y;
HXDLIN( 214)		Float p2_z = _this->z;
HXDLIN( 214)		Float p2_w = _this->w;
HXLINE( 215)		{
HXLINE( 215)			Float k = (((p2_x * p2_x) + (p2_y * p2_y)) + (p2_z * p2_z));
HXDLIN( 215)			if ((k < ((Float)1e-10))) {
HXLINE(  70)				k = ( (Float)(0) );
            			}
            			else {
HXLINE(  70)				k = (((Float)1.) / ::Math_obj::sqrt(k));
            			}
HXLINE( 215)			p2_x = (p2_x * k);
HXDLIN( 215)			p2_y = (p2_y * k);
HXDLIN( 215)			p2_z = (p2_z * k);
            		}
HXLINE( 216)		 ::h3d::Vector v = this->up;
HXDLIN( 216)		return (::Math_obj::abs((((p2_x * v->x) + (p2_y * v->y)) + (p2_z * v->z))) > ((Float)0.999));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,lostUp,return )

 ::h3d::col::Point Camera_obj::getViewDirection(Float dx,Float dy,::hx::Null< Float >  __o_dz){
            		Float dz = __o_dz.Default(((Float)0.));
            	HX_GC_STACKFRAME(&_hx_pos_23e7f56913cacfa4_219_getViewDirection)
HXLINE( 220)		 ::h3d::col::Point a =  ::h3d::col::Point_obj::__alloc( HX_CTX ,dx,dy,dz);
HXLINE( 221)		{
HXLINE( 221)			 ::h3d::Matrix m = this->mcam;
HXDLIN( 221)			Float px = (((a->x * m->_11) + (a->y * m->_21)) + (a->z * m->_31));
HXDLIN( 221)			Float py = (((a->x * m->_12) + (a->y * m->_22)) + (a->z * m->_32));
HXDLIN( 221)			Float pz = (((a->x * m->_13) + (a->y * m->_23)) + (a->z * m->_33));
HXDLIN( 221)			a->x = px;
HXDLIN( 221)			a->y = py;
HXDLIN( 221)			a->z = pz;
            		}
HXLINE( 222)		{
HXLINE( 222)			Float k = (((a->x * a->x) + (a->y * a->y)) + (a->z * a->z));
HXDLIN( 222)			if ((k < ((Float)1e-10))) {
HXLINE( 222)				k = ( (Float)(0) );
            			}
            			else {
HXLINE( 222)				k = (((Float)1.) / ::Math_obj::sqrt(k));
            			}
HXDLIN( 222)			 ::h3d::col::Point a1 = a;
HXDLIN( 222)			a1->x = (a1->x * k);
HXDLIN( 222)			 ::h3d::col::Point a2 = a;
HXDLIN( 222)			a2->y = (a2->y * k);
HXDLIN( 222)			 ::h3d::col::Point a3 = a;
HXDLIN( 222)			a3->z = (a3->z * k);
            		}
HXLINE( 223)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Camera_obj,getViewDirection,return )

void Camera_obj::movePosAxis(Float dx,Float dy,::hx::Null< Float >  __o_dz){
            		Float dz = __o_dz.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_226_movePosAxis)
HXLINE( 227)		Float p_x = dx;
HXDLIN( 227)		Float p_y = dy;
HXDLIN( 227)		Float p_z = dz;
HXLINE( 228)		{
HXLINE( 228)			 ::h3d::Matrix m = this->mcam;
HXDLIN( 228)			Float px = (((p_x * m->_11) + (p_y * m->_21)) + (p_z * m->_31));
HXDLIN( 228)			Float py = (((p_x * m->_12) + (p_y * m->_22)) + (p_z * m->_32));
HXDLIN( 228)			Float pz = (((p_x * m->_13) + (p_y * m->_23)) + (p_z * m->_33));
HXDLIN( 228)			p_x = px;
HXDLIN( 228)			p_y = py;
HXDLIN( 228)			p_z = pz;
            		}
HXLINE( 229)		 ::h3d::Vector fh = this->pos;
HXDLIN( 229)		fh->x = (fh->x + p_x);
HXLINE( 230)		 ::h3d::Vector fh1 = this->pos;
HXDLIN( 230)		fh1->y = (fh1->y + p_y);
HXLINE( 231)		 ::h3d::Vector fh2 = this->pos;
HXDLIN( 231)		fh2->z = (fh2->z + p_z);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Camera_obj,movePosAxis,(void))

void Camera_obj::moveTargetAxis(Float dx,Float dy,::hx::Null< Float >  __o_dz){
            		Float dz = __o_dz.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_234_moveTargetAxis)
HXLINE( 235)		Float p_x = dx;
HXDLIN( 235)		Float p_y = dy;
HXDLIN( 235)		Float p_z = dz;
HXLINE( 236)		{
HXLINE( 236)			 ::h3d::Matrix m = this->mcam;
HXDLIN( 236)			Float px = (((p_x * m->_11) + (p_y * m->_21)) + (p_z * m->_31));
HXDLIN( 236)			Float py = (((p_x * m->_12) + (p_y * m->_22)) + (p_z * m->_32));
HXDLIN( 236)			Float pz = (((p_x * m->_13) + (p_y * m->_23)) + (p_z * m->_33));
HXDLIN( 236)			p_x = px;
HXDLIN( 236)			p_y = py;
HXDLIN( 236)			p_z = pz;
            		}
HXLINE( 237)		 ::h3d::Vector fh = this->target;
HXDLIN( 237)		fh->x = (fh->x + p_x);
HXLINE( 238)		 ::h3d::Vector fh1 = this->target;
HXDLIN( 238)		fh1->y = (fh1->y + p_y);
HXLINE( 239)		 ::h3d::Vector fh2 = this->target;
HXDLIN( 239)		fh2->z = (fh2->z + p_z);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Camera_obj,moveTargetAxis,(void))

void Camera_obj::forward(::hx::Null< Float >  __o_speed){
            		Float speed = __o_speed.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_242_forward)
HXLINE( 243)		Float c = (( (Float)(1) ) - (((Float)0.025) * speed));
HXLINE( 244)		{
HXLINE( 244)			 ::h3d::Vector _this = this->pos;
HXDLIN( 244)			_this->x = (this->target->x + ((this->pos->x - this->target->x) * c));
HXDLIN( 244)			_this->y = (this->target->y + ((this->pos->y - this->target->y) * c));
HXDLIN( 244)			_this->z = (this->target->z + ((this->pos->z - this->target->z) * c));
HXDLIN( 244)			_this->w = ((Float)1.);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,forward,(void))

void Camera_obj::backward(::hx::Null< Float >  __o_speed){
            		Float speed = __o_speed.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_251_backward)
HXLINE( 252)		Float c = (1 + (((Float)0.025) * speed));
HXLINE( 253)		{
HXLINE( 253)			 ::h3d::Vector _this = this->pos;
HXDLIN( 253)			_this->x = (this->target->x + ((this->pos->x - this->target->x) * c));
HXDLIN( 253)			_this->y = (this->target->y + ((this->pos->y - this->target->y) * c));
HXDLIN( 253)			_this->z = (this->target->z + ((this->pos->z - this->target->z) * c));
HXDLIN( 253)			_this->w = ((Float)1.);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,backward,(void))

void Camera_obj::makeCameraMatrix( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_260_makeCameraMatrix)
HXLINE( 264)		 ::h3d::Vector _this = this->target;
HXDLIN( 264)		 ::h3d::Vector v = this->pos;
HXDLIN( 264)		Float az_x = (_this->x - v->x);
HXDLIN( 264)		Float az_y = (_this->y - v->y);
HXDLIN( 264)		Float az_z = (_this->z - v->z);
HXDLIN( 264)		Float az_w = (_this->w - v->w);
HXLINE( 265)		if (this->rightHanded) {
HXLINE( 265)			az_x = (az_x * ( (Float)(-1) ));
HXDLIN( 265)			az_y = (az_y * ( (Float)(-1) ));
HXDLIN( 265)			az_z = (az_z * ( (Float)(-1) ));
            		}
HXLINE( 266)		{
HXLINE( 266)			Float k = (((az_x * az_x) + (az_y * az_y)) + (az_z * az_z));
HXDLIN( 266)			if ((k < ((Float)1e-10))) {
HXLINE(  70)				k = ( (Float)(0) );
            			}
            			else {
HXLINE(  70)				k = (((Float)1.) / ::Math_obj::sqrt(k));
            			}
HXLINE( 266)			az_x = (az_x * k);
HXDLIN( 266)			az_y = (az_y * k);
HXDLIN( 266)			az_z = (az_z * k);
            		}
HXLINE( 267)		 ::h3d::Vector _this1 = this->up;
HXDLIN( 267)		Float ax_x = ((_this1->y * az_z) - (_this1->z * az_y));
HXDLIN( 267)		Float ax_y = ((_this1->z * az_x) - (_this1->x * az_z));
HXDLIN( 267)		Float ax_z = ((_this1->x * az_y) - (_this1->y * az_x));
HXDLIN( 267)		Float ax_w = ( (Float)(1) );
HXLINE( 268)		{
HXLINE( 268)			Float k1 = (((ax_x * ax_x) + (ax_y * ax_y)) + (ax_z * ax_z));
HXDLIN( 268)			if ((k1 < ((Float)1e-10))) {
HXLINE(  70)				k1 = ( (Float)(0) );
            			}
            			else {
HXLINE(  70)				k1 = (((Float)1.) / ::Math_obj::sqrt(k1));
            			}
HXLINE( 268)			ax_x = (ax_x * k1);
HXDLIN( 268)			ax_y = (ax_y * k1);
HXDLIN( 268)			ax_z = (ax_z * k1);
            		}
HXLINE( 269)		if ((::Math_obj::sqrt((((ax_x * ax_x) + (ax_y * ax_y)) + (ax_z * ax_z))) == 0)) {
HXLINE( 270)			ax_x = az_y;
HXLINE( 271)			ax_y = az_z;
HXLINE( 272)			ax_z = az_x;
            		}
HXLINE( 274)		Float ay_x = ((az_y * ax_z) - (az_z * ax_y));
HXDLIN( 274)		Float ay_y = ((az_z * ax_x) - (az_x * ax_z));
HXDLIN( 274)		Float ay_z = ((az_x * ax_y) - (az_y * ax_x));
HXDLIN( 274)		Float ay_w = ( (Float)(1) );
HXLINE( 275)		m->_11 = ax_x;
HXLINE( 276)		m->_12 = ay_x;
HXLINE( 277)		m->_13 = az_x;
HXLINE( 278)		m->_14 = ( (Float)(0) );
HXLINE( 279)		m->_21 = ax_y;
HXLINE( 280)		m->_22 = ay_y;
HXLINE( 281)		m->_23 = az_y;
HXLINE( 282)		m->_24 = ( (Float)(0) );
HXLINE( 283)		m->_31 = ax_z;
HXLINE( 284)		m->_32 = ay_z;
HXLINE( 285)		m->_33 = az_z;
HXLINE( 286)		m->_34 = ( (Float)(0) );
HXLINE( 287)		 ::h3d::Vector v1 = this->pos;
HXDLIN( 287)		m->_41 = -((((ax_x * v1->x) + (ax_y * v1->y)) + (ax_z * v1->z)));
HXLINE( 288)		 ::h3d::Vector v2 = this->pos;
HXDLIN( 288)		m->_42 = -((((ay_x * v2->x) + (ay_y * v2->y)) + (ay_z * v2->z)));
HXLINE( 289)		 ::h3d::Vector v3 = this->pos;
HXDLIN( 289)		m->_43 = -((((az_x * v3->x) + (az_y * v3->y)) + (az_z * v3->z)));
HXLINE( 290)		m->_44 = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,makeCameraMatrix,(void))

void Camera_obj::setTransform( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_293_setTransform)
HXLINE( 294)		{
HXLINE( 294)			 ::h3d::Vector _this = this->pos;
HXDLIN( 294)			_this->x = m->_41;
HXDLIN( 294)			_this->y = m->_42;
HXDLIN( 294)			_this->z = m->_43;
HXDLIN( 294)			_this->w = ((Float)1.);
            		}
HXLINE( 295)		{
HXLINE( 295)			 ::h3d::Vector _this1 = this->target;
HXDLIN( 295)			 ::h3d::Vector _this2 = this->pos;
HXDLIN( 295)			 ::h3d::Vector v = m->getDirection();
HXDLIN( 295)			Float v_x = (_this2->x + v->x);
HXDLIN( 295)			Float v_y = (_this2->y + v->y);
HXDLIN( 295)			Float v_z = (_this2->z + v->z);
HXDLIN( 295)			Float v_w = (_this2->w + v->w);
HXDLIN( 295)			_this1->x = v_x;
HXDLIN( 295)			_this1->y = v_y;
HXDLIN( 295)			_this1->z = v_z;
HXDLIN( 295)			_this1->w = v_w;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,setTransform,(void))

void Camera_obj::makeFrustumMatrix( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_23e7f56913cacfa4_298_makeFrustumMatrix)
HXLINE( 299)		m->zero();
HXLINE( 310)		 ::h3d::col::Bounds bounds = this->orthoBounds;
HXLINE( 311)		if (::hx::IsNotNull( bounds )) {
HXLINE( 313)			Float w = (( (Float)(1) ) / (bounds->xMax - bounds->xMin));
HXLINE( 314)			Float h = (( (Float)(1) ) / (bounds->yMax - bounds->yMin));
HXLINE( 315)			Float d = (( (Float)(1) ) / (bounds->zMax - bounds->zMin));
HXLINE( 317)			m->_11 = (( (Float)(2) ) * w);
HXLINE( 318)			m->_22 = (( (Float)(2) ) * h);
HXLINE( 319)			m->_33 = d;
HXLINE( 320)			m->_41 = (-((bounds->xMin + bounds->xMax)) * w);
HXLINE( 321)			m->_42 = (-((bounds->yMin + bounds->yMax)) * h);
HXLINE( 322)			m->_43 = (-(bounds->zMin) * d);
HXLINE( 323)			m->_44 = ( (Float)(1) );
            		}
            		else {
HXLINE( 326)			Float degToRad = (::Math_obj::PI / ( (Float)(180) ));
HXLINE( 327)			Float halfFovX = ::Math_obj::atan((::Math_obj::tan(((this->fovY * ((Float)0.5)) * degToRad)) * this->screenRatio));
HXLINE( 328)			Float scale = (this->zoom / ::Math_obj::tan(halfFovX));
HXLINE( 329)			m->_11 = scale;
HXLINE( 330)			m->_22 = (scale * this->screenRatio);
HXLINE( 331)			m->_33 = (this->zFar / (this->zFar - this->zNear));
HXLINE( 332)			m->_34 = ( (Float)(1) );
HXLINE( 333)			m->_43 = (-((this->zNear * this->zFar)) / (this->zFar - this->zNear));
            		}
HXLINE( 336)		 ::h3d::Matrix m1 = m;
HXDLIN( 336)		m1->_11 = (m1->_11 + (this->viewX * m->_14));
HXLINE( 337)		 ::h3d::Matrix m2 = m;
HXDLIN( 337)		m2->_21 = (m2->_21 + (this->viewX * m->_24));
HXLINE( 338)		 ::h3d::Matrix m3 = m;
HXDLIN( 338)		m3->_31 = (m3->_31 + (this->viewX * m->_34));
HXLINE( 339)		 ::h3d::Matrix m4 = m;
HXDLIN( 339)		m4->_41 = (m4->_41 + (this->viewX * m->_44));
HXLINE( 341)		 ::h3d::Matrix m5 = m;
HXDLIN( 341)		m5->_12 = (m5->_12 + (this->viewY * m->_14));
HXLINE( 342)		 ::h3d::Matrix m6 = m;
HXDLIN( 342)		m6->_22 = (m6->_22 + (this->viewY * m->_24));
HXLINE( 343)		 ::h3d::Matrix m7 = m;
HXDLIN( 343)		m7->_32 = (m7->_32 + (this->viewY * m->_34));
HXLINE( 344)		 ::h3d::Matrix m8 = m;
HXDLIN( 344)		m8->_42 = (m8->_42 + (this->viewY * m->_44));
HXLINE( 347)		if (this->rightHanded) {
HXLINE( 348)			 ::h3d::Matrix m1 = m;
HXDLIN( 348)			m1->_33 = (m1->_33 * ( (Float)(-1) ));
HXLINE( 349)			 ::h3d::Matrix m2 = m;
HXDLIN( 349)			m2->_34 = (m2->_34 * ( (Float)(-1) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,makeFrustumMatrix,(void))

 ::h3d::Vector Camera_obj::project(Float x,Float y,Float z,Float screenWidth,Float screenHeight,::hx::Null< bool >  __o_snapToPixel){
            		bool snapToPixel = __o_snapToPixel.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_23e7f56913cacfa4_356_project)
HXLINE( 357)		 ::h3d::Vector p =  ::h3d::Vector_obj::__alloc( HX_CTX ,x,y,z,null());
HXLINE( 358)		{
HXLINE( 358)			 ::h3d::Matrix m = this->m;
HXDLIN( 358)			Float px = ((((p->x * m->_11) + (p->y * m->_21)) + (p->z * m->_31)) + (p->w * m->_41));
HXDLIN( 358)			Float py = ((((p->x * m->_12) + (p->y * m->_22)) + (p->z * m->_32)) + (p->w * m->_42));
HXDLIN( 358)			Float pz = ((((p->x * m->_13) + (p->y * m->_23)) + (p->z * m->_33)) + (p->w * m->_43));
HXDLIN( 358)			Float iw = (( (Float)(1) ) / ((((p->x * m->_14) + (p->y * m->_24)) + (p->z * m->_34)) + (p->w * m->_44)));
HXDLIN( 358)			p->x = (px * iw);
HXDLIN( 358)			p->y = (py * iw);
HXDLIN( 358)			p->z = (pz * iw);
HXDLIN( 358)			p->w = ( (Float)(1) );
            		}
HXLINE( 359)		p->x = (((p->x + 1) * ((Float)0.5)) * screenWidth);
HXLINE( 360)		p->y = (((-(p->y) + 1) * ((Float)0.5)) * screenHeight);
HXLINE( 361)		if (snapToPixel) {
HXLINE( 362)			p->x = ( (Float)(::Math_obj::round(p->x)) );
HXLINE( 363)			p->y = ( (Float)(::Math_obj::round(p->y)) );
            		}
HXLINE( 365)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC6(Camera_obj,project,return )

void Camera_obj::load( ::h3d::Camera cam){
            	HX_GC_STACKFRAME(&_hx_pos_23e7f56913cacfa4_368_load)
HXLINE( 369)		{
HXLINE( 369)			 ::h3d::Vector _this = this->pos;
HXDLIN( 369)			 ::h3d::Vector v = cam->pos;
HXDLIN( 369)			_this->x = v->x;
HXDLIN( 369)			_this->y = v->y;
HXDLIN( 369)			_this->z = v->z;
HXDLIN( 369)			_this->w = v->w;
            		}
HXLINE( 370)		{
HXLINE( 370)			 ::h3d::Vector _this1 = this->target;
HXDLIN( 370)			 ::h3d::Vector v1 = cam->target;
HXDLIN( 370)			_this1->x = v1->x;
HXDLIN( 370)			_this1->y = v1->y;
HXDLIN( 370)			_this1->z = v1->z;
HXDLIN( 370)			_this1->w = v1->w;
            		}
HXLINE( 371)		{
HXLINE( 371)			 ::h3d::Vector _this2 = this->up;
HXDLIN( 371)			 ::h3d::Vector v2 = cam->up;
HXDLIN( 371)			_this2->x = v2->x;
HXDLIN( 371)			_this2->y = v2->y;
HXDLIN( 371)			_this2->z = v2->z;
HXDLIN( 371)			_this2->w = v2->w;
            		}
HXLINE( 372)		if (::hx::IsNotNull( cam->orthoBounds )) {
HXLINE( 373)			this->orthoBounds =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 374)			this->orthoBounds->load(cam->orthoBounds);
            		}
            		else {
HXLINE( 376)			this->orthoBounds = null();
            		}
HXLINE( 377)		this->fovY = cam->fovY;
HXLINE( 378)		this->screenRatio = cam->screenRatio;
HXLINE( 379)		this->zoom = cam->zoom;
HXLINE( 380)		this->zNear = cam->zNear;
HXLINE( 381)		this->zFar = cam->zFar;
HXLINE( 382)		if (::hx::IsNotNull( cam->follow )) {
HXLINE( 383)			this->follow =  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("target",51,f3,ec,86), ::Dynamic(cam->follow->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)))
            				->setFixed(1,HX_("pos",94,5d,55,00), ::Dynamic(cam->follow->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic))));
            		}
            		else {
HXLINE( 385)			this->follow = null();
            		}
HXLINE( 386)		this->viewX = cam->viewX;
HXLINE( 387)		this->viewY = cam->viewY;
HXLINE( 388)		this->update();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,load,(void))


::hx::ObjectPtr< Camera_obj > Camera_obj::__new(::hx::Null< Float >  __o_fovY,::hx::Null< Float >  __o_zoom,::hx::Null< Float >  __o_screenRatio,::hx::Null< Float >  __o_zNear,::hx::Null< Float >  __o_zFar,::hx::Null< bool >  __o_rightHanded) {
	::hx::ObjectPtr< Camera_obj > __this = new Camera_obj();
	__this->__construct(__o_fovY,__o_zoom,__o_screenRatio,__o_zNear,__o_zFar,__o_rightHanded);
	return __this;
}

::hx::ObjectPtr< Camera_obj > Camera_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_fovY,::hx::Null< Float >  __o_zoom,::hx::Null< Float >  __o_screenRatio,::hx::Null< Float >  __o_zNear,::hx::Null< Float >  __o_zFar,::hx::Null< bool >  __o_rightHanded) {
	Camera_obj *__this = (Camera_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Camera_obj), true, "h3d.Camera"));
	*(void **)__this = Camera_obj::_hx_vtable;
	__this->__construct(__o_fovY,__o_zoom,__o_screenRatio,__o_zNear,__o_zFar,__o_rightHanded);
	return __this;
}

Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(screenRatio,"screenRatio");
	HX_MARK_MEMBER_NAME(fovY,"fovY");
	HX_MARK_MEMBER_NAME(zNear,"zNear");
	HX_MARK_MEMBER_NAME(zFar,"zFar");
	HX_MARK_MEMBER_NAME(orthoBounds,"orthoBounds");
	HX_MARK_MEMBER_NAME(rightHanded,"rightHanded");
	HX_MARK_MEMBER_NAME(mproj,"mproj");
	HX_MARK_MEMBER_NAME(mcam,"mcam");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(up,"up");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(viewX,"viewX");
	HX_MARK_MEMBER_NAME(viewY,"viewY");
	HX_MARK_MEMBER_NAME(follow,"follow");
	HX_MARK_MEMBER_NAME(frustum,"frustum");
	HX_MARK_MEMBER_NAME(minv,"minv");
	HX_MARK_MEMBER_NAME(mcamInv,"mcamInv");
	HX_MARK_MEMBER_NAME(mprojInv,"mprojInv");
	HX_MARK_MEMBER_NAME(needInv,"needInv");
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(screenRatio,"screenRatio");
	HX_VISIT_MEMBER_NAME(fovY,"fovY");
	HX_VISIT_MEMBER_NAME(zNear,"zNear");
	HX_VISIT_MEMBER_NAME(zFar,"zFar");
	HX_VISIT_MEMBER_NAME(orthoBounds,"orthoBounds");
	HX_VISIT_MEMBER_NAME(rightHanded,"rightHanded");
	HX_VISIT_MEMBER_NAME(mproj,"mproj");
	HX_VISIT_MEMBER_NAME(mcam,"mcam");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(up,"up");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(viewX,"viewX");
	HX_VISIT_MEMBER_NAME(viewY,"viewY");
	HX_VISIT_MEMBER_NAME(follow,"follow");
	HX_VISIT_MEMBER_NAME(frustum,"frustum");
	HX_VISIT_MEMBER_NAME(minv,"minv");
	HX_VISIT_MEMBER_NAME(mcamInv,"mcamInv");
	HX_VISIT_MEMBER_NAME(mprojInv,"mprojInv");
	HX_VISIT_MEMBER_NAME(needInv,"needInv");
}

::hx::Val Camera_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return ::hx::Val( m ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return ::hx::Val( up ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return ::hx::Val( zoom ); }
		if (HX_FIELD_EQ(inName,"fovY") ) { return ::hx::Val( fovY ); }
		if (HX_FIELD_EQ(inName,"zFar") ) { return ::hx::Val( zFar ); }
		if (HX_FIELD_EQ(inName,"mcam") ) { return ::hx::Val( mcam ); }
		if (HX_FIELD_EQ(inName,"minv") ) { return ::hx::Val( minv ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"zNear") ) { return ::hx::Val( zNear ); }
		if (HX_FIELD_EQ(inName,"mproj") ) { return ::hx::Val( mproj ); }
		if (HX_FIELD_EQ(inName,"viewX") ) { return ::hx::Val( viewX ); }
		if (HX_FIELD_EQ(inName,"viewY") ) { return ::hx::Val( viewY ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"follow") ) { return ::hx::Val( follow ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"lostUp") ) { return ::hx::Val( lostUp_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"frustum") ) { return ::hx::Val( frustum ); }
		if (HX_FIELD_EQ(inName,"mcamInv") ) { return ::hx::Val( mcamInv ); }
		if (HX_FIELD_EQ(inName,"needInv") ) { return ::hx::Val( needInv ); }
		if (HX_FIELD_EQ(inName,"setFovX") ) { return ::hx::Val( setFovX_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFovX") ) { return ::hx::Val( getFovX_dyn() ); }
		if (HX_FIELD_EQ(inName,"forward") ) { return ::hx::Val( forward_dyn() ); }
		if (HX_FIELD_EQ(inName,"project") ) { return ::hx::Val( project_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mprojInv") ) { return ::hx::Val( mprojInv ); }
		if (HX_FIELD_EQ(inName,"backward") ) { return ::hx::Val( backward_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unproject") ) { return ::hx::Val( unproject_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setCubeMap") ) { return ::hx::Val( setCubeMap_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenRatio") ) { return ::hx::Val( screenRatio ); }
		if (HX_FIELD_EQ(inName,"orthoBounds") ) { return ::hx::Val( orthoBounds ); }
		if (HX_FIELD_EQ(inName,"rightHanded") ) { return ::hx::Val( rightHanded ); }
		if (HX_FIELD_EQ(inName,"movePosAxis") ) { return ::hx::Val( movePosAxis_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setTransform") ) { return ::hx::Val( setTransform_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rayFromScreen") ) { return ::hx::Val( rayFromScreen_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getInverseProj") ) { return ::hx::Val( getInverseProj_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInverseView") ) { return ::hx::Val( getInverseView_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTargetAxis") ) { return ::hx::Val( moveTargetAxis_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getViewDirection") ) { return ::hx::Val( getViewDirection_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeCameraMatrix") ) { return ::hx::Val( makeCameraMatrix_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFrustumCorners") ) { return ::hx::Val( getFrustumCorners_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeFrustumMatrix") ) { return ::hx::Val( makeFrustumMatrix_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getInverseViewProj") ) { return ::hx::Val( getInverseViewProj_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Camera_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fovY") ) { fovY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zFar") ) { zFar=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mcam") ) { mcam=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minv") ) { minv=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"zNear") ) { zNear=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mproj") ) { mproj=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewX") ) { viewX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewY") ) { viewY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"follow") ) { follow=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"frustum") ) { frustum=inValue.Cast<  ::h3d::col::Frustum >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mcamInv") ) { mcamInv=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needInv") ) { needInv=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mprojInv") ) { mprojInv=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenRatio") ) { screenRatio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orthoBounds") ) { orthoBounds=inValue.Cast<  ::h3d::col::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightHanded") ) { rightHanded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zoom",13,a3,f8,50));
	outFields->push(HX_("screenRatio",ff,81,a9,9b));
	outFields->push(HX_("fovY",ac,64,c0,43));
	outFields->push(HX_("zNear",82,62,be,72));
	outFields->push(HX_("zFar",7d,7a,d9,50));
	outFields->push(HX_("orthoBounds",cd,4b,fc,f5));
	outFields->push(HX_("rightHanded",8a,4a,82,21));
	outFields->push(HX_("mproj",8a,02,0c,0d));
	outFields->push(HX_("mcam",c2,b5,57,48));
	outFields->push(HX_("m",6d,00,00,00));
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("up",5b,66,00,00));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("viewX",53,e6,fc,36));
	outFields->push(HX_("viewY",54,e6,fc,36));
	outFields->push(HX_("follow",71,91,96,f9));
	outFields->push(HX_("frustum",62,47,7a,d0));
	outFields->push(HX_("minv",a4,4e,5c,48));
	outFields->push(HX_("mcamInv",4f,94,1a,6c));
	outFields->push(HX_("mprojInv",87,74,50,50));
	outFields->push(HX_("needInv",3b,2a,0e,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Camera_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Camera_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,screenRatio),HX_("screenRatio",ff,81,a9,9b)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,fovY),HX_("fovY",ac,64,c0,43)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,zNear),HX_("zNear",82,62,be,72)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,zFar),HX_("zFar",7d,7a,d9,50)},
	{::hx::fsObject /*  ::h3d::col::Bounds */ ,(int)offsetof(Camera_obj,orthoBounds),HX_("orthoBounds",cd,4b,fc,f5)},
	{::hx::fsBool,(int)offsetof(Camera_obj,rightHanded),HX_("rightHanded",8a,4a,82,21)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Camera_obj,mproj),HX_("mproj",8a,02,0c,0d)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Camera_obj,mcam),HX_("mcam",c2,b5,57,48)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Camera_obj,m),HX_("m",6d,00,00,00)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Camera_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Camera_obj,up),HX_("up",5b,66,00,00)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Camera_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,viewX),HX_("viewX",53,e6,fc,36)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,viewY),HX_("viewY",54,e6,fc,36)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Camera_obj,follow),HX_("follow",71,91,96,f9)},
	{::hx::fsObject /*  ::h3d::col::Frustum */ ,(int)offsetof(Camera_obj,frustum),HX_("frustum",62,47,7a,d0)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Camera_obj,minv),HX_("minv",a4,4e,5c,48)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Camera_obj,mcamInv),HX_("mcamInv",4f,94,1a,6c)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Camera_obj,mprojInv),HX_("mprojInv",87,74,50,50)},
	{::hx::fsBool,(int)offsetof(Camera_obj,needInv),HX_("needInv",3b,2a,0e,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Camera_obj_sStaticStorageInfo = 0;
#endif

static ::String Camera_obj_sMemberFields[] = {
	HX_("zoom",13,a3,f8,50),
	HX_("screenRatio",ff,81,a9,9b),
	HX_("fovY",ac,64,c0,43),
	HX_("zNear",82,62,be,72),
	HX_("zFar",7d,7a,d9,50),
	HX_("orthoBounds",cd,4b,fc,f5),
	HX_("rightHanded",8a,4a,82,21),
	HX_("mproj",8a,02,0c,0d),
	HX_("mcam",c2,b5,57,48),
	HX_("m",6d,00,00,00),
	HX_("pos",94,5d,55,00),
	HX_("up",5b,66,00,00),
	HX_("target",51,f3,ec,86),
	HX_("viewX",53,e6,fc,36),
	HX_("viewY",54,e6,fc,36),
	HX_("follow",71,91,96,f9),
	HX_("frustum",62,47,7a,d0),
	HX_("minv",a4,4e,5c,48),
	HX_("mcamInv",4f,94,1a,6c),
	HX_("mprojInv",87,74,50,50),
	HX_("needInv",3b,2a,0e,aa),
	HX_("setFovX",6d,a5,44,09),
	HX_("getFovX",61,14,43,16),
	HX_("clone",5d,13,63,48),
	HX_("getInverseViewProj",7c,94,a4,ea),
	HX_("getInverseProj",77,2a,4f,ab),
	HX_("getInverseView",3f,95,3f,af),
	HX_("setCubeMap",25,71,af,df),
	HX_("unproject",a0,19,ed,f1),
	HX_("rayFromScreen",00,63,b3,63),
	HX_("update",09,86,05,87),
	HX_("getFrustumCorners",f2,ba,9b,18),
	HX_("lostUp",5f,35,61,64),
	HX_("getViewDirection",a4,c4,cf,74),
	HX_("movePosAxis",44,39,e4,cd),
	HX_("moveTargetAxis",03,7f,9a,d9),
	HX_("forward",c5,e1,ca,e5),
	HX_("backward",e3,db,18,27),
	HX_("makeCameraMatrix",d4,ad,05,73),
	HX_("setTransform",6a,ed,e2,69),
	HX_("makeFrustumMatrix",75,a0,0b,4e),
	HX_("project",d9,12,eb,f5),
	HX_("load",26,9a,b7,47),
	::String(null()) };

::hx::Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	Camera_obj _hx_dummy;
	Camera_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.Camera",5a,43,09,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Camera_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Camera_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Camera_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Camera_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
