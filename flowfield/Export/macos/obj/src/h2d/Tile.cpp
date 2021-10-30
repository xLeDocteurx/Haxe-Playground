#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_mat_TextureFlags
#include <h3d/mat/TextureFlags.h>
#endif
#ifndef INCLUDED_hxd_BitmapData
#include <hxd/BitmapData.h>
#endif
#ifndef INCLUDED_hxd_BitmapInnerDataImpl
#include <hxd/BitmapInnerDataImpl.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_Pixels
#include <hxd/Pixels.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a74a40a1130dc76b_97_new,"h2d.Tile","new",0x2d4783d4,"h2d.Tile.new","h2d/Tile.hx",97,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_74_get_ix,"h2d.Tile","get_ix",0x6dfae044,"h2d.Tile.get_ix","h2d/Tile.hx",74,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_81_get_iy,"h2d.Tile","get_iy",0x6dfae045,"h2d.Tile.get_iy","h2d/Tile.hx",81,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_88_get_iwidth,"h2d.Tile","get_iwidth",0x8e776bd2,"h2d.Tile.get_iwidth","h2d/Tile.hx",88,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_95_get_iheight,"h2d.Tile","get_iheight",0xd056649b,"h2d.Tile.get_iheight","h2d/Tile.hx",95,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_112_getTexture,"h2d.Tile","getTexture",0xc656b1f1,"h2d.Tile.getTexture","h2d/Tile.hx",112,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_119_isDisposed,"h2d.Tile","isDisposed",0x7a677ffb,"h2d.Tile.isDisposed","h2d/Tile.hx",119,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_122_setTexture,"h2d.Tile","setTexture",0xc9d45065,"h2d.Tile.setTexture","h2d/Tile.hx",122,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_145_switchTexture,"h2d.Tile","switchTexture",0x02f299bb,"h2d.Tile.switchTexture","h2d/Tile.hx",145,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_158_sub,"h2d.Tile","sub",0x2d4b5cf4,"h2d.Tile.sub","h2d/Tile.hx",158,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_167_center,"h2d.Tile","center",0xd0a612e1,"h2d.Tile.center","h2d/Tile.hx",167,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_173_setCenterRatio,"h2d.Tile","setCenterRatio",0x64034f80,"h2d.Tile.setCenterRatio","h2d/Tile.hx",173,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_181_flipX,"h2d.Tile","flipX",0x1a70bd7f,"h2d.Tile.flipX","h2d/Tile.hx",181,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_189_flipY,"h2d.Tile","flipY",0x1a70bd80,"h2d.Tile.flipY","h2d/Tile.hx",189,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_197_setPosition,"h2d.Tile","setPosition",0x351db1df,"h2d.Tile.setPosition","h2d/Tile.hx",197,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_212_setSize,"h2d.Tile","setSize",0xb89c5ef7,"h2d.Tile.setSize","h2d/Tile.hx",212,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_229_scaleToSize,"h2d.Tile","scaleToSize",0xa7d3197a,"h2d.Tile.scaleToSize","h2d/Tile.hx",229,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_237_scrollDiscrete,"h2d.Tile","scrollDiscrete",0x3fa153f2,"h2d.Tile.scrollDiscrete","h2d/Tile.hx",237,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_251_dispose,"h2d.Tile","dispose",0x6210fe13,"h2d.Tile.dispose","h2d/Tile.hx",251,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_259_clone,"h2d.Tile","clone",0x60418bd1,"h2d.Tile.clone","h2d/Tile.hx",259,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_269_get_xFlip,"h2d.Tile","get_xFlip",0xc94bfa10,"h2d.Tile.get_xFlip","h2d/Tile.hx",269,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_270_get_yFlip,"h2d.Tile","get_yFlip",0x5cb28e91,"h2d.Tile.get_yFlip","h2d/Tile.hx",270,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_271_set_xFlip,"h2d.Tile","set_xFlip",0xac9ce61c,"h2d.Tile.set_xFlip","h2d/Tile.hx",271,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_275_set_yFlip,"h2d.Tile","set_yFlip",0x40037a9d,"h2d.Tile.set_yFlip","h2d/Tile.hx",275,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_286_split,"h2d.Tile","split",0x994d634e,"h2d.Tile.split","h2d/Tile.hx",286,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_313_gridFlatten,"h2d.Tile","gridFlatten",0x456e4912,"h2d.Tile.gridFlatten","h2d/Tile.hx",313,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_325_grid,"h2d.Tile","grid",0x6cb528d2,"h2d.Tile.grid","h2d/Tile.hx",325,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_330_toString,"h2d.Tile","toString",0x7d9818b8,"h2d.Tile.toString","h2d/Tile.hx",330,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_333_upload,"h2d.Tile","upload",0x5724b70d,"h2d.Tile.upload","h2d/Tile.hx",333,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_356_fromColor,"h2d.Tile","fromColor",0x3ddb1e0d,"h2d.Tile.fromColor","h2d/Tile.hx",356,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_367_fromBitmap,"h2d.Tile","fromBitmap",0x0c647805,"h2d.Tile.fromBitmap","h2d/Tile.hx",367,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_383_autoCut,"h2d.Tile","autoCut",0x4434eac7,"h2d.Tile.autoCut","h2d/Tile.hx",383,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_418_fromTexture,"h2d.Tile","fromTexture",0x70e37405,"h2d.Tile.fromTexture","h2d/Tile.hx",418,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_424_fromPixels,"h2d.Tile","fromPixels",0xa8025743,"h2d.Tile.fromPixels","h2d/Tile.hx",424,0xe227443b)
HX_LOCAL_STACK_FRAME(_hx_pos_a74a40a1130dc76b_431_isEmpty,"h2d.Tile","isEmpty",0xb3245bb7,"h2d.Tile.isEmpty","h2d/Tile.hx",431,0xe227443b)
namespace h2d{

void Tile_obj::__construct( ::h3d::mat::Texture tex,Float x,Float y,Float w,Float h,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy){
            		Float dx = __o_dx.Default(0);
            		Float dy = __o_dy.Default(0);
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_97_new)
HXLINE(  98)		this->innerTex = tex;
HXLINE(  99)		this->x = x;
HXLINE( 100)		this->y = y;
HXLINE( 101)		this->width = w;
HXLINE( 102)		this->height = h;
HXLINE( 103)		this->dx = dx;
HXLINE( 104)		this->dy = dy;
HXLINE( 105)		if (::hx::IsNotNull( tex )) {
HXLINE( 105)			this->setTexture(tex);
            		}
            	}

Dynamic Tile_obj::__CreateEmpty() { return new Tile_obj; }

void *Tile_obj::_hx_vtable = 0;

Dynamic Tile_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tile_obj > _hx_result = new Tile_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool Tile_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c202744;
}

int Tile_obj::get_ix(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_74_get_ix)
HXDLIN(  74)		return ::Math_obj::floor(this->x);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_ix,return )

int Tile_obj::get_iy(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_81_get_iy)
HXDLIN(  81)		return ::Math_obj::floor(this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_iy,return )

int Tile_obj::get_iwidth(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_88_get_iwidth)
HXDLIN(  88)		return (::Math_obj::ceil((this->width + this->x)) - ::Math_obj::floor(this->x));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_iwidth,return )

int Tile_obj::get_iheight(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_95_get_iheight)
HXDLIN(  95)		return (::Math_obj::ceil((this->height + this->y)) - ::Math_obj::floor(this->y));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_iheight,return )

 ::h3d::mat::Texture Tile_obj::getTexture(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_112_getTexture)
HXDLIN( 112)		return this->innerTex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,getTexture,return )

bool Tile_obj::isDisposed(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_119_isDisposed)
HXDLIN( 119)		if (::hx::IsNotNull( this->innerTex )) {
HXDLIN( 119)			 ::h3d::mat::Texture _this = this->innerTex;
HXDLIN( 119)			if (::hx::IsNull( _this->t )) {
HXDLIN( 119)				return ::hx::IsNull( _this->realloc );
            			}
            			else {
HXDLIN( 119)				return false;
            			}
            		}
            		else {
HXDLIN( 119)			return true;
            		}
HXDLIN( 119)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,isDisposed,return )

void Tile_obj::setTexture( ::h3d::mat::Texture tex){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_122_setTexture)
HXLINE( 123)		this->innerTex = tex;
HXLINE( 124)		if (::hx::IsNotNull( tex )) {
HXLINE( 125)			this->u = (this->x / ( (Float)(tex->width) ));
HXLINE( 126)			this->v = (this->y / ( (Float)(tex->height) ));
HXLINE( 127)			this->u2 = ((this->x + this->width) / ( (Float)(tex->width) ));
HXLINE( 128)			this->v2 = ((this->y + this->height) / ( (Float)(tex->height) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,setTexture,(void))

void Tile_obj::switchTexture( ::h2d::Tile t){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_145_switchTexture)
HXDLIN( 145)		this->setTexture(t->innerTex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,switchTexture,(void))

 ::h2d::Tile Tile_obj::sub(Float x,Float y,Float w,Float h,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy){
            		Float dx = __o_dx.Default(((Float)0.));
            		Float dy = __o_dy.Default(((Float)0.));
            	HX_GC_STACKFRAME(&_hx_pos_a74a40a1130dc76b_158_sub)
HXDLIN( 158)		return  ::h2d::Tile_obj::__alloc( HX_CTX ,this->innerTex,(this->x + x),(this->y + y),w,h,dx,dy);
            	}


HX_DEFINE_DYNAMIC_FUNC6(Tile_obj,sub,return )

 ::h2d::Tile Tile_obj::center(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_167_center)
HXDLIN( 167)		return this->sub(( (Float)(0) ),( (Float)(0) ),this->width,this->height,-((this->width * ((Float).5))),-((this->height * ((Float).5))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,center,return )

void Tile_obj::setCenterRatio( ::Dynamic __o_px, ::Dynamic __o_py){
            		 ::Dynamic px = __o_px;
            		if (::hx::IsNull(__o_px)) px = ((Float)0.5);
            		 ::Dynamic py = __o_py;
            		if (::hx::IsNull(__o_py)) py = ((Float)0.5);
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_173_setCenterRatio)
HXLINE( 174)		this->dx = -((( (Float)(px) ) * this->width));
HXLINE( 175)		this->dy = -((( (Float)(py) ) * this->height));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,setCenterRatio,(void))

void Tile_obj::flipX(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_181_flipX)
HXLINE( 182)		Float tmp = this->u;
HXDLIN( 182)		this->u = this->u2;
HXDLIN( 182)		this->u2 = tmp;
HXLINE( 183)		this->dx = (-(this->dx) - this->width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,flipX,(void))

void Tile_obj::flipY(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_189_flipY)
HXLINE( 190)		Float tmp = this->v;
HXDLIN( 190)		this->v = this->v2;
HXDLIN( 190)		this->v2 = tmp;
HXLINE( 191)		this->dy = (-(this->dy) - this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,flipY,(void))

void Tile_obj::setPosition(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_197_setPosition)
HXLINE( 198)		this->x = x;
HXLINE( 199)		this->y = y;
HXLINE( 200)		 ::h3d::mat::Texture tex = this->innerTex;
HXLINE( 201)		if (::hx::IsNotNull( tex )) {
HXLINE( 202)			this->u = (x / ( (Float)(tex->width) ));
HXLINE( 203)			this->v = (y / ( (Float)(tex->height) ));
HXLINE( 204)			this->u2 = ((x + this->width) / ( (Float)(tex->width) ));
HXLINE( 205)			this->v2 = ((y + this->height) / ( (Float)(tex->height) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,setPosition,(void))

void Tile_obj::setSize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_212_setSize)
HXLINE( 213)		this->width = w;
HXLINE( 214)		this->height = h;
HXLINE( 215)		 ::h3d::mat::Texture tex = this->innerTex;
HXLINE( 216)		if (::hx::IsNotNull( tex )) {
HXLINE( 217)			this->u2 = ((this->x + w) / ( (Float)(tex->width) ));
HXLINE( 218)			this->v2 = ((this->y + h) / ( (Float)(tex->height) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,setSize,(void))

void Tile_obj::scaleToSize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_229_scaleToSize)
HXLINE( 230)		this->width = w;
HXLINE( 231)		this->height = h;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,scaleToSize,(void))

void Tile_obj::scrollDiscrete(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_237_scrollDiscrete)
HXLINE( 238)		 ::h3d::mat::Texture tex = this->innerTex;
HXLINE( 239)		 ::h2d::Tile _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)		_hx_tmp->u = (_hx_tmp->u + (dx / ( (Float)(tex->width) )));
HXLINE( 240)		 ::h2d::Tile _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)		_hx_tmp1->v = (_hx_tmp1->v - (dy / ( (Float)(tex->height) )));
HXLINE( 241)		 ::h2d::Tile _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 241)		_hx_tmp2->u2 = (_hx_tmp2->u2 + (dx / ( (Float)(tex->width) )));
HXLINE( 242)		 ::h2d::Tile _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 242)		_hx_tmp3->v2 = (_hx_tmp3->v2 - (dy / ( (Float)(tex->height) )));
HXLINE( 243)		this->x = (this->u * ( (Float)(tex->width) ));
HXLINE( 244)		this->y = (this->v * ( (Float)(tex->height) ));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,scrollDiscrete,(void))

void Tile_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_251_dispose)
HXLINE( 252)		if (::hx::IsNotNull( this->innerTex )) {
HXLINE( 252)			this->innerTex->dispose();
            		}
HXLINE( 253)		this->innerTex = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,dispose,(void))

 ::h2d::Tile Tile_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_a74a40a1130dc76b_259_clone)
HXLINE( 260)		 ::h2d::Tile t =  ::h2d::Tile_obj::__alloc( HX_CTX ,null(),this->x,this->y,this->width,this->height,this->dx,this->dy);
HXLINE( 261)		t->innerTex = this->innerTex;
HXLINE( 262)		t->u = this->u;
HXLINE( 263)		t->u2 = this->u2;
HXLINE( 264)		t->v = this->v;
HXLINE( 265)		t->v2 = this->v2;
HXLINE( 266)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,clone,return )

bool Tile_obj::get_xFlip(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_269_get_xFlip)
HXDLIN( 269)		return (this->u2 < this->u);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_xFlip,return )

bool Tile_obj::get_yFlip(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_270_get_yFlip)
HXDLIN( 270)		return (this->v2 < this->v);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_yFlip,return )

bool Tile_obj::set_xFlip(bool v){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_271_set_xFlip)
HXLINE( 272)		if ((v != this->get_xFlip())) {
HXLINE( 272)			this->flipX();
            		}
HXLINE( 273)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_xFlip,return )

bool Tile_obj::set_yFlip(bool v){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_275_set_yFlip)
HXLINE( 276)		if ((v != this->get_yFlip())) {
HXLINE( 276)			this->flipY();
            		}
HXLINE( 277)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_yFlip,return )

::Array< ::Dynamic> Tile_obj::split(::hx::Null< int >  __o_frames,::hx::Null< bool >  __o_vertical,::hx::Null< bool >  __o_subpixel){
            		int frames = __o_frames.Default(0);
            		bool vertical = __o_vertical.Default(false);
            		bool subpixel = __o_subpixel.Default(false);
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_286_split)
HXLINE( 287)		::Array< ::Dynamic> tl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 288)		if (vertical) {
HXLINE( 289)			if ((frames == 0)) {
HXLINE( 290)				frames = ::Std_obj::_hx_int((this->height / this->width));
            			}
HXLINE( 291)			Float stride;
HXDLIN( 291)			if (subpixel) {
HXLINE( 291)				stride = (this->height / ( (Float)(frames) ));
            			}
            			else {
HXLINE( 291)				stride = ( (Float)(::Std_obj::_hx_int((this->height / ( (Float)(frames) )))) );
            			}
HXLINE( 292)			{
HXLINE( 292)				int _g = 0;
HXDLIN( 292)				int _g1 = frames;
HXDLIN( 292)				while((_g < _g1)){
HXLINE( 292)					_g = (_g + 1);
HXDLIN( 292)					int i = (_g - 1);
HXLINE( 293)					tl->push(this->sub(( (Float)(0) ),(( (Float)(i) ) * stride),this->width,stride,null(),null()));
            				}
            			}
            		}
            		else {
HXLINE( 295)			if ((frames == 0)) {
HXLINE( 296)				frames = ::Std_obj::_hx_int((this->width / this->height));
            			}
HXLINE( 297)			Float stride;
HXDLIN( 297)			if (subpixel) {
HXLINE( 297)				stride = (this->width / ( (Float)(frames) ));
            			}
            			else {
HXLINE( 297)				stride = ( (Float)(::Std_obj::_hx_int((this->width / ( (Float)(frames) )))) );
            			}
HXLINE( 298)			{
HXLINE( 298)				int _g = 0;
HXDLIN( 298)				int _g1 = frames;
HXDLIN( 298)				while((_g < _g1)){
HXLINE( 298)					_g = (_g + 1);
HXDLIN( 298)					int i = (_g - 1);
HXLINE( 299)					tl->push(this->sub((( (Float)(i) ) * stride),( (Float)(0) ),stride,this->height,null(),null()));
            				}
            			}
            		}
HXLINE( 301)		return tl;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Tile_obj,split,return )

::Array< ::Dynamic> Tile_obj::gridFlatten(Float size,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy){
            		Float dx = __o_dx.Default(((Float)0.));
            		Float dy = __o_dy.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_313_gridFlatten)
HXDLIN( 313)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 313)		{
HXDLIN( 313)			int _g1 = 0;
HXDLIN( 313)			int _g2 = ::Std_obj::_hx_int((this->height / size));
HXDLIN( 313)			while((_g1 < _g2)){
HXDLIN( 313)				_g1 = (_g1 + 1);
HXDLIN( 313)				int y = (_g1 - 1);
HXDLIN( 313)				{
HXDLIN( 313)					int _g2 = 0;
HXDLIN( 313)					int _g3 = ::Std_obj::_hx_int((this->width / size));
HXDLIN( 313)					while((_g2 < _g3)){
HXDLIN( 313)						_g2 = (_g2 + 1);
HXDLIN( 313)						int x = (_g2 - 1);
HXDLIN( 313)						_g->push(this->sub((( (Float)(x) ) * size),(( (Float)(y) ) * size),size,size,dx,dy));
            					}
            				}
            			}
            		}
HXDLIN( 313)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Tile_obj,gridFlatten,return )

::Array< ::Dynamic> Tile_obj::grid(Float size,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy){
            		Float dx = __o_dx.Default(((Float)0.));
            		Float dy = __o_dy.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_325_grid)
HXDLIN( 325)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 325)		{
HXDLIN( 325)			int _g1 = 0;
HXDLIN( 325)			int _g2 = ::Std_obj::_hx_int((this->width / size));
HXDLIN( 325)			while((_g1 < _g2)){
HXDLIN( 325)				_g1 = (_g1 + 1);
HXDLIN( 325)				int x = (_g1 - 1);
HXDLIN( 325)				::Array< ::Dynamic> _g2 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 325)				{
HXDLIN( 325)					int _g3 = 0;
HXDLIN( 325)					int _g4 = ::Std_obj::_hx_int((this->height / size));
HXDLIN( 325)					while((_g3 < _g4)){
HXDLIN( 325)						_g3 = (_g3 + 1);
HXDLIN( 325)						int y = (_g3 - 1);
HXDLIN( 325)						_g2->push(this->sub((( (Float)(x) ) * size),(( (Float)(y) ) * size),size,size,dx,dy));
            					}
            				}
HXDLIN( 325)				_g->push(_g2);
            			}
            		}
HXDLIN( 325)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Tile_obj,grid,return )

::String Tile_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_330_toString)
HXDLIN( 330)		::String _hx_tmp;
HXDLIN( 330)		bool _hx_tmp1;
HXDLIN( 330)		if ((this->dx == 0)) {
HXDLIN( 330)			_hx_tmp1 = (this->dy != 0);
            		}
            		else {
HXDLIN( 330)			_hx_tmp1 = true;
            		}
HXDLIN( 330)		if (_hx_tmp1) {
HXDLIN( 330)			_hx_tmp = (((HX_(",",2c,00,00,00) + this->dx) + HX_(":",3a,00,00,00)) + this->dy);
            		}
            		else {
HXDLIN( 330)			_hx_tmp = HX_("",00,00,00,00);
            		}
HXDLIN( 330)		return (((((((((HX_("Tile(",1a,6d,62,a3) + this->x) + HX_(",",2c,00,00,00)) + this->y) + HX_(",",2c,00,00,00)) + this->width) + HX_("x",78,00,00,00)) + this->height) + _hx_tmp) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,toString,return )

void Tile_obj::upload( ::hxd::BitmapData bmp){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_333_upload)
HXLINE( 334)		int w = this->innerTex->width;
HXLINE( 335)		int h = this->innerTex->height;
HXLINE( 346)		this->innerTex->uploadBitmap(bmp,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,upload,(void))

 ::h2d::Tile Tile_obj::fromColor(int color, ::Dynamic __o_width, ::Dynamic __o_height, ::Dynamic __o_alpha){
            		 ::Dynamic width = __o_width;
            		if (::hx::IsNull(__o_width)) width = 1;
            		 ::Dynamic height = __o_height;
            		if (::hx::IsNull(__o_height)) height = 1;
            		 ::Dynamic alpha = __o_alpha;
            		if (::hx::IsNull(__o_alpha)) alpha = ((Float)1.);
            	HX_GC_STACKFRAME(&_hx_pos_a74a40a1130dc76b_356_fromColor)
HXLINE( 357)		 ::h2d::Tile t =  ::h2d::Tile_obj::__alloc( HX_CTX ,::h3d::mat::Texture_obj::fromColor(color,alpha),( (Float)(0) ),( (Float)(0) ),( (Float)(1) ),( (Float)(1) ),null(),null());
HXLINE( 359)		t->width = ( (Float)(width) );
HXLINE( 360)		t->height = ( (Float)(height) );
HXLINE( 361)		return t;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tile_obj,fromColor,return )

 ::h2d::Tile Tile_obj::fromBitmap( ::hxd::BitmapData bmp){
            	HX_GC_STACKFRAME(&_hx_pos_a74a40a1130dc76b_367_fromBitmap)
HXLINE( 368)		 ::h3d::mat::Texture tex = ::h3d::mat::Texture_obj::fromBitmap(bmp);
HXLINE( 369)		return  ::h2d::Tile_obj::__alloc( HX_CTX ,tex,( (Float)(0) ),( (Float)(0) ),( (Float)(bmp->data->width) ),( (Float)(bmp->data->height) ),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,fromBitmap,return )

 ::Dynamic Tile_obj::autoCut( ::hxd::BitmapData bmp,int width, ::Dynamic height){
            	HX_GC_STACKFRAME(&_hx_pos_a74a40a1130dc76b_383_autoCut)
HXLINE( 387)		if (::hx::IsNull( height )) {
HXLINE( 387)			height = width;
            		}
HXLINE( 388)		int colorBG = bmp->getPixel((bmp->data->width - 1),(bmp->data->height - 1));
HXLINE( 389)		::Array< ::Dynamic> tl = ::Array_obj< ::Dynamic>::__new();
HXLINE( 390)		int w = 1;
HXDLIN( 390)		int h = 1;
HXLINE( 391)		while((w < bmp->data->width)){
HXLINE( 392)			w = (w << 1);
            		}
HXLINE( 393)		while((h < bmp->data->height)){
HXLINE( 394)			h = (h << 1);
            		}
HXLINE( 395)		 ::h3d::mat::Texture tex =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,w,h,null(),null());
HXLINE( 396)		{
HXLINE( 396)			int _g = 0;
HXDLIN( 396)			int _g1 = ::Std_obj::_hx_int((( (Float)(bmp->data->height) ) / ( (Float)(height) )));
HXDLIN( 396)			while((_g < _g1)){
HXLINE( 396)				_g = (_g + 1);
HXDLIN( 396)				int y = (_g - 1);
HXLINE( 397)				::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 398)				tl[y] = a;
HXLINE( 399)				{
HXLINE( 399)					int _g1 = 0;
HXDLIN( 399)					int _g2 = ::Std_obj::_hx_int((( (Float)(bmp->data->width) ) / ( (Float)(width) )));
HXDLIN( 399)					while((_g1 < _g2)){
HXLINE( 399)						_g1 = (_g1 + 1);
HXDLIN( 399)						int x = (_g1 - 1);
HXLINE( 400)						 ::Dynamic sz = ::h2d::Tile_obj::isEmpty(bmp,(x * width),(y * ( (int)(height) )),width,( (int)(height) ),colorBG);
HXLINE( 401)						if (::hx::IsNull( sz )) {
HXLINE( 402)							goto _hx_goto_40;
            						}
HXLINE( 403)						a->push( ::h2d::Tile_obj::__alloc( HX_CTX ,tex,( (Float)(((x * width) + sz->__Field(HX_("dx",94,57,00,00),::hx::paccDynamic))) ),( (Float)(((y * ( (int)(height) )) + sz->__Field(HX_("dy",95,57,00,00),::hx::paccDynamic))) ),( (Float)(sz->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) ),( (Float)(sz->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) ),sz->__Field(HX_("dx",94,57,00,00),::hx::paccDynamic),sz->__Field(HX_("dy",95,57,00,00),::hx::paccDynamic)));
            					}
            					_hx_goto_40:;
            				}
            			}
            		}
HXLINE( 409)		 ::h2d::Tile main =  ::h2d::Tile_obj::__alloc( HX_CTX ,tex,( (Float)(0) ),( (Float)(0) ),( (Float)(bmp->data->width) ),( (Float)(bmp->data->height) ),null(),null());
HXLINE( 410)		main->upload(bmp);
HXLINE( 411)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("tiles",85,fd,34,10),tl)
            			->setFixed(1,HX_("main",39,38,56,48),main));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Tile_obj,autoCut,return )

 ::h2d::Tile Tile_obj::fromTexture( ::h3d::mat::Texture t){
            	HX_GC_STACKFRAME(&_hx_pos_a74a40a1130dc76b_418_fromTexture)
HXDLIN( 418)		return  ::h2d::Tile_obj::__alloc( HX_CTX ,t,( (Float)(0) ),( (Float)(0) ),( (Float)(t->width) ),( (Float)(t->height) ),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,fromTexture,return )

 ::h2d::Tile Tile_obj::fromPixels( ::hxd::Pixels pixels){
            	HX_GC_STACKFRAME(&_hx_pos_a74a40a1130dc76b_424_fromPixels)
HXLINE( 425)		 ::hxd::Pixels pix2 = pixels->makeSquare(true);
HXLINE( 426)		 ::h3d::mat::Texture t = ::h3d::mat::Texture_obj::fromPixels(pix2);
HXLINE( 427)		if (::hx::IsInstanceNotEq( pix2,pixels )) {
HXLINE( 427)			pix2->dispose();
            		}
HXLINE( 428)		return  ::h2d::Tile_obj::__alloc( HX_CTX ,t,( (Float)(0) ),( (Float)(0) ),( (Float)(pixels->width) ),( (Float)(pixels->height) ),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,fromPixels,return )

 ::Dynamic Tile_obj::isEmpty( ::hxd::BitmapData b,int px,int py,int width,int height,int bg){
            	HX_STACKFRAME(&_hx_pos_a74a40a1130dc76b_431_isEmpty)
HXLINE( 432)		bool empty = true;
HXLINE( 433)		int xmin = width;
HXDLIN( 433)		int ymin = height;
HXDLIN( 433)		int xmax = 0;
HXDLIN( 433)		int ymax = 0;
HXLINE( 434)		{
HXLINE( 434)			int _g = 0;
HXDLIN( 434)			int _g1 = width;
HXDLIN( 434)			while((_g < _g1)){
HXLINE( 434)				_g = (_g + 1);
HXDLIN( 434)				int x = (_g - 1);
HXLINE( 435)				{
HXLINE( 435)					int _g1 = 0;
HXDLIN( 435)					int _g2 = height;
HXDLIN( 435)					while((_g1 < _g2)){
HXLINE( 435)						_g1 = (_g1 + 1);
HXDLIN( 435)						int y = (_g1 - 1);
HXLINE( 436)						int color = b->getPixel((x + px),(y + py));
HXLINE( 437)						if (((color & -16777216) == 0)) {
HXLINE( 438)							if ((color != 0)) {
HXLINE( 438)								b->setPixel((x + px),(y + py),0);
            							}
HXLINE( 439)							continue;
            						}
HXLINE( 441)						if ((color != bg)) {
HXLINE( 442)							empty = false;
HXLINE( 443)							if ((x < xmin)) {
HXLINE( 443)								xmin = x;
            							}
HXLINE( 444)							if ((y < ymin)) {
HXLINE( 444)								ymin = y;
            							}
HXLINE( 445)							if ((x > xmax)) {
HXLINE( 445)								xmax = x;
            							}
HXLINE( 446)							if ((y > ymax)) {
HXLINE( 446)								ymax = y;
            							}
            						}
HXLINE( 448)						bool _hx_tmp;
HXDLIN( 448)						if ((color == bg)) {
HXLINE( 448)							_hx_tmp = (color != 0);
            						}
            						else {
HXLINE( 448)							_hx_tmp = false;
            						}
HXDLIN( 448)						if (_hx_tmp) {
HXLINE( 449)							b->setPixel((x + px),(y + py),0);
            						}
            					}
            				}
            			}
            		}
HXLINE( 451)		if (empty) {
HXLINE( 451)			return null();
            		}
            		else {
HXLINE( 451)			return  ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("h",68,00,00,00),((ymax - ymin) + 1))
            				->setFixed(1,HX_("w",77,00,00,00),((xmax - xmin) + 1))
            				->setFixed(2,HX_("dx",94,57,00,00),xmin)
            				->setFixed(3,HX_("dy",95,57,00,00),ymin));
            		}
HXDLIN( 451)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Tile_obj,isEmpty,return )


::hx::ObjectPtr< Tile_obj > Tile_obj::__new( ::h3d::mat::Texture tex,Float x,Float y,Float w,Float h,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy) {
	::hx::ObjectPtr< Tile_obj > __this = new Tile_obj();
	__this->__construct(tex,x,y,w,h,__o_dx,__o_dy);
	return __this;
}

::hx::ObjectPtr< Tile_obj > Tile_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture tex,Float x,Float y,Float w,Float h,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy) {
	Tile_obj *__this = (Tile_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tile_obj), true, "h2d.Tile"));
	*(void **)__this = Tile_obj::_hx_vtable;
	__this->__construct(tex,x,y,w,h,__o_dx,__o_dy);
	return __this;
}

Tile_obj::Tile_obj()
{
}

void Tile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tile);
	HX_MARK_MEMBER_NAME(innerTex,"innerTex");
	HX_MARK_MEMBER_NAME(u,"u");
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(u2,"u2");
	HX_MARK_MEMBER_NAME(v2,"v2");
	HX_MARK_MEMBER_NAME(dx,"dx");
	HX_MARK_MEMBER_NAME(dy,"dy");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(innerTex,"innerTex");
	HX_VISIT_MEMBER_NAME(u,"u");
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(u2,"u2");
	HX_VISIT_MEMBER_NAME(v2,"v2");
	HX_VISIT_MEMBER_NAME(dx,"dx");
	HX_VISIT_MEMBER_NAME(dy,"dy");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

::hx::Val Tile_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { return ::hx::Val( u ); }
		if (HX_FIELD_EQ(inName,"v") ) { return ::hx::Val( v ); }
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"u2") ) { return ::hx::Val( u2 ); }
		if (HX_FIELD_EQ(inName,"v2") ) { return ::hx::Val( v2 ); }
		if (HX_FIELD_EQ(inName,"dx") ) { return ::hx::Val( dx ); }
		if (HX_FIELD_EQ(inName,"dy") ) { return ::hx::Val( dy ); }
		if (HX_FIELD_EQ(inName,"ix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ix() ); }
		if (HX_FIELD_EQ(inName,"iy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_iy() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { return ::hx::Val( grid_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"xFlip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_xFlip() ); }
		if (HX_FIELD_EQ(inName,"yFlip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_yFlip() ); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX_dyn() ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"split") ) { return ::hx::Val( split_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"get_ix") ) { return ::hx::Val( get_ix_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_iy") ) { return ::hx::Val( get_iy_dyn() ); }
		if (HX_FIELD_EQ(inName,"iwidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_iwidth() ); }
		if (HX_FIELD_EQ(inName,"center") ) { return ::hx::Val( center_dyn() ); }
		if (HX_FIELD_EQ(inName,"upload") ) { return ::hx::Val( upload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"iheight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_iheight() ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"innerTex") ) { return ::hx::Val( innerTex ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_xFlip") ) { return ::hx::Val( get_xFlip_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_yFlip") ) { return ::hx::Val( get_yFlip_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_xFlip") ) { return ::hx::Val( set_xFlip_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_yFlip") ) { return ::hx::Val( set_yFlip_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_iwidth") ) { return ::hx::Val( get_iwidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return ::hx::Val( getTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTexture") ) { return ::hx::Val( setTexture_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_iheight") ) { return ::hx::Val( get_iheight_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"scaleToSize") ) { return ::hx::Val( scaleToSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"gridFlatten") ) { return ::hx::Val( gridFlatten_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"switchTexture") ) { return ::hx::Val( switchTexture_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setCenterRatio") ) { return ::hx::Val( setCenterRatio_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollDiscrete") ) { return ::hx::Val( scrollDiscrete_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Tile_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"autoCut") ) { outValue = autoCut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { outValue = isEmpty_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromColor") ) { outValue = fromColor_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBitmap") ) { outValue = fromBitmap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromPixels") ) { outValue = fromPixels_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromTexture") ) { outValue = fromTexture_dyn(); return true; }
	}
	return false;
}

::hx::Val Tile_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { u=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"u2") ) { u2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v2") ) { v2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xFlip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_xFlip(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"yFlip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_yFlip(inValue.Cast< bool >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"innerTex") ) { innerTex=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("innerTex",f1,85,3e,c2));
	outFields->push(HX_("u",75,00,00,00));
	outFields->push(HX_("v",76,00,00,00));
	outFields->push(HX_("u2",1d,66,00,00));
	outFields->push(HX_("v2",fc,66,00,00));
	outFields->push(HX_("dx",94,57,00,00));
	outFields->push(HX_("dy",95,57,00,00));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("xFlip",45,db,ac,46));
	outFields->push(HX_("yFlip",c6,6f,13,da));
	outFields->push(HX_("ix",ef,5b,00,00));
	outFields->push(HX_("iy",f0,5b,00,00));
	outFields->push(HX_("iwidth",fd,98,db,c5));
	outFields->push(HX_("iheight",10,bd,99,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tile_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(Tile_obj,innerTex),HX_("innerTex",f1,85,3e,c2)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,u),HX_("u",75,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,v),HX_("v",76,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,u2),HX_("u2",1d,66,00,00)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,v2),HX_("v2",fc,66,00,00)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,dx),HX_("dx",94,57,00,00)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,dy),HX_("dy",95,57,00,00)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,height),HX_("height",e7,07,4c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tile_obj_sStaticStorageInfo = 0;
#endif

static ::String Tile_obj_sMemberFields[] = {
	HX_("innerTex",f1,85,3e,c2),
	HX_("u",75,00,00,00),
	HX_("v",76,00,00,00),
	HX_("u2",1d,66,00,00),
	HX_("v2",fc,66,00,00),
	HX_("dx",94,57,00,00),
	HX_("dy",95,57,00,00),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("get_ix",38,f3,2f,a3),
	HX_("get_iy",39,f3,2f,a3),
	HX_("get_iwidth",c6,08,63,b6),
	HX_("get_iheight",27,1d,94,96),
	HX_("getTexture",e5,4e,42,ee),
	HX_("isDisposed",ef,1c,53,a2),
	HX_("setTexture",59,ed,bf,f1),
	HX_("switchTexture",47,8d,78,1e),
	HX_("sub",80,a9,57,00),
	HX_("center",d5,25,db,05),
	HX_("setCenterRatio",74,76,b2,5d),
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("setSize",83,e1,d7,11),
	HX_("scaleToSize",06,d2,10,6e),
	HX_("scrollDiscrete",e6,7a,50,39),
	HX_("dispose",9f,80,4c,bb),
	HX_("clone",5d,13,63,48),
	HX_("get_xFlip",9c,37,56,8a),
	HX_("get_yFlip",1d,cc,bc,1d),
	HX_("set_xFlip",a8,23,a7,6d),
	HX_("set_yFlip",29,b8,0d,01),
	HX_("split",da,ea,6e,81),
	HX_("gridFlatten",9e,01,ac,0b),
	HX_("grid",c6,d6,6b,44),
	HX_("toString",ac,d0,6e,38),
	HX_("upload",01,ca,59,8c),
	::String(null()) };

::hx::Class Tile_obj::__mClass;

static ::String Tile_obj_sStaticFields[] = {
	HX_("fromColor",99,5b,e5,fe),
	HX_("fromBitmap",f9,14,50,34),
	HX_("autoCut",53,6d,70,9d),
	HX_("fromTexture",91,2c,21,37),
	HX_("fromPixels",37,f4,ed,cf),
	HX_("isEmpty",43,de,5f,0c),
	::String(null())
};

void Tile_obj::__register()
{
	Tile_obj _hx_dummy;
	Tile_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Tile",e2,49,a4,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tile_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tile_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tile_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tile_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tile_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
