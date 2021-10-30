#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
#ifndef INCLUDED_h2d_Layers
#include <h2d/Layers.h>
#endif
#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
#ifndef INCLUDED_h2d_RenderContext
#include <h2d/RenderContext.h>
#endif
#ifndef INCLUDED_h2d_Scene
#include <h2d/Scene.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h2d_col_Matrix
#include <h2d/col/Matrix.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h2d_filter_Filter
#include <h2d/filter/Filter.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_impl_TextureCache
#include <h3d/impl/TextureCache.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_shader_Base2d
#include <h3d/shader/Base2d.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_h2d_Object
#include <hxd/impl/ArrayIterator_h2d_Object.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b3484cc6f232f485_21_new,"h2d.Object","new",0x398c68e5,"h2d.Object.new","h2d/Object.hx",21,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_145_getBounds,"h2d.Object","getBounds",0x2ed559f0,"h2d.Object.getBounds","h2d/Object.hx",145,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_166_getSize,"h2d.Object","getSize",0xd0860f7c,"h2d.Object.getSize","h2d/Object.hx",166,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_183_getAbsPos,"h2d.Object","getAbsPos",0x4adb4bbd,"h2d.Object.getAbsPos","h2d/Object.hx",183,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_198_contains,"h2d.Object","contains",0xf492bf7a,"h2d.Object.contains","h2d/Object.hx",198,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_209_find,"h2d.Object","find",0x1c08ac14,"h2d.Object.find","h2d/Object.hx",209,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_224_findAll,"h2d.Object","findAll",0xd714c96d,"h2d.Object.findAll","h2d/Object.hx",224,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_234_set_filter,"h2d.Object","set_filter",0x01f9e010,"h2d.Object.set_filter","h2d/Object.hx",234,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_249_getBoundsRec,"h2d.Object","getBoundsRec",0x772a0d40,"h2d.Object.getBoundsRec","h2d/Object.hx",249,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_292_addBounds,"h2d.Object","addBounds",0x6aa305bb,"h2d.Object.addBounds","h2d/Object.hx",292,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_347_getObjectsCount,"h2d.Object","getObjectsCount",0x55b8ed16,"h2d.Object.getObjectsCount","h2d/Object.hx",347,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_358_localToGlobal,"h2d.Object","localToGlobal",0x3a5f928e,"h2d.Object.localToGlobal","h2d/Object.hx",358,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_372_globalToLocal,"h2d.Object","globalToLocal",0x5e229f92,"h2d.Object.globalToLocal","h2d/Object.hx",372,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_387_getScene,"h2d.Object","getScene",0xa0c04e31,"h2d.Object.getScene","h2d/Object.hx",387,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_393_set_visible,"h2d.Object","set_visible",0x5288051a,"h2d.Object.set_visible","h2d/Object.hx",393,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_405_addChild,"h2d.Object","addChild",0x872e3516,"h2d.Object.addChild","h2d/Object.hx",405,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_411_addChildAt,"h2d.Object","addChildAt",0x56f65fa9,"h2d.Object.addChildAt","h2d/Object.hx",411,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_450_onContentChanged,"h2d.Object","onContentChanged",0xb0481a95,"h2d.Object.onContentChanged","h2d/Object.hx",450,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_462_onHierarchyMoved,"h2d.Object","onHierarchyMoved",0x534e9458,"h2d.Object.onHierarchyMoved","h2d/Object.hx",462,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_472_onAdd,"h2d.Object","onAdd",0x9d550a07,"h2d.Object.onAdd","h2d/Object.hx",472,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_487_onRemove,"h2d.Object","onRemove",0xac4cf81e,"h2d.Object.onRemove","h2d/Object.hx",487,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_499_getMatrix,"h2d.Object","getMatrix",0x848009bc,"h2d.Object.getMatrix","h2d/Object.hx",499,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_512_removeChild,"h2d.Object","removeChild",0x62e9ac3d,"h2d.Object.removeChild","h2d/Object.hx",512,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_529_setParentContainer,"h2d.Object","setParentContainer",0x5e43f250,"h2d.Object.setParentContainer","h2d/Object.hx",529,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_539_removeChildren,"h2d.Object","removeChildren",0x6e12b13e,"h2d.Object.removeChildren","h2d/Object.hx",539,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_547_remove,"h2d.Object","remove",0x2ea864df,"h2d.Object.remove","h2d/Object.hx",547,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_553_drawTo,"h2d.Object","drawTo",0x09f6473a,"h2d.Object.drawTo","h2d/Object.hx",553,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_567_drawToTextures,"h2d.Object","drawToTextures",0xee47c492,"h2d.Object.drawToTextures","h2d/Object.hx",567,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_583_draw,"h2d.Object","draw",0x1abd07df,"h2d.Object.draw","h2d/Object.hx",583,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_593_sync,"h2d.Object","sync",0x24ac9636,"h2d.Object.sync","h2d/Object.hx",593,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_624_syncPos,"h2d.Object","syncPos",0x58c3c4fe,"h2d.Object.syncPos","h2d/Object.hx",624,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_642_calcAbsPos,"h2d.Object","calcAbsPos",0xbfd1d4d2,"h2d.Object.calcAbsPos","h2d/Object.hx",642,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_689_emitTile,"h2d.Object","emitTile",0x0b6c207c,"h2d.Object.emitTile","h2d/Object.hx",689,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_765_clipBounds,"h2d.Object","clipBounds",0x252b1780,"h2d.Object.clipBounds","h2d/Object.hx",765,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_833_drawFilters,"h2d.Object","drawFilters",0x718b0b9c,"h2d.Object.drawFilters","h2d/Object.hx",833,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_917_drawFiltered,"h2d.Object","drawFiltered",0xe81f1116,"h2d.Object.drawFiltered","h2d/Object.hx",917,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_930_drawRec,"h2d.Object","drawRec",0xad867eb1,"h2d.Object.drawRec","h2d/Object.hx",930,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_952_drawContent,"h2d.Object","drawContent",0x81bbf71a,"h2d.Object.drawContent","h2d/Object.hx",952,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_962_set_x,"h2d.Object","set_x",0xe5231f20,"h2d.Object.set_x","h2d/Object.hx",962,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_967_set_y,"h2d.Object","set_y",0xe5231f21,"h2d.Object.set_y","h2d/Object.hx",967,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_972_set_scaleX,"h2d.Object","set_scaleX",0xb8eaaae6,"h2d.Object.set_scaleX","h2d/Object.hx",972,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_977_set_scaleY,"h2d.Object","set_scaleY",0xb8eaaae7,"h2d.Object.set_scaleY","h2d/Object.hx",977,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_982_set_rotation,"h2d.Object","set_rotation",0xd03dc396,"h2d.Object.set_rotation","h2d/Object.hx",982,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_990_move,"h2d.Object","move",0x20adbeec,"h2d.Object.move","h2d/Object.hx",990,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_998_setPosition,"h2d.Object","setPosition",0x1a578ff0,"h2d.Object.setPosition","h2d/Object.hx",998,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_1007_rotate,"h2d.Object","rotate",0xf5400ef6,"h2d.Object.rotate","h2d/Object.hx",1007,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_1013_scale,"h2d.Object","scale",0xe3c2524f,"h2d.Object.scale","h2d/Object.hx",1013,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_1021_setScale,"h2d.Object","setScale",0x4f1a9ce3,"h2d.Object.setScale","h2d/Object.hx",1021,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_1030_getChildAt,"h2d.Object","getChildAt",0x3ecdb9d4,"h2d.Object.getChildAt","h2d/Object.hx",1030,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_1036_getChildIndex,"h2d.Object","getChildIndex",0xab76b8d1,"h2d.Object.getChildIndex","h2d/Object.hx",1036,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_1046_getObjectByName,"h2d.Object","getObjectByName",0xc000599c,"h2d.Object.getObjectByName","h2d/Object.hx",1046,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_1057_get_numChildren,"h2d.Object","get_numChildren",0xd21fed41,"h2d.Object.get_numChildren","h2d/Object.hx",1057,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_1064_iterator,"h2d.Object","iterator",0x5bb1af49,"h2d.Object.iterator","h2d/Object.hx",1064,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_1068_toString,"h2d.Object","toString",0x00863607,"h2d.Object.toString","h2d/Object.hx",1068,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_1082_contentChanged,"h2d.Object","contentChanged",0x65efb056,"h2d.Object.contentChanged","h2d/Object.hx",1082,0xb75d720a)
HX_LOCAL_STACK_FRAME(_hx_pos_b3484cc6f232f485_1095_constraintSize,"h2d.Object","constraintSize",0xa78f1b59,"h2d.Object.constraintSize","h2d/Object.hx",1095,0xb75d720a)
namespace h2d{

void Object_obj::__construct( ::h2d::Object parent){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_21_new)
HXLINE(  96)		this->blendMode = ::h2d::BlendMode_obj::Alpha_dyn();
HXLINE(  81)		this->alpha = ((Float)1.);
HXLINE(  76)		this->visible = true;
HXLINE(  71)		this->rotation = ((Float)0);
HXLINE(  66)		this->scaleY = ((Float)1);
HXLINE(  61)		this->scaleX = ((Float)1);
HXLINE(  56)		this->y = ((Float)0);
HXLINE(  51)		this->x = ((Float)0);
HXLINE( 132)		this->matA = ( (Float)(1) );
HXDLIN( 132)		this->matB = ( (Float)(0) );
HXDLIN( 132)		this->matC = ( (Float)(0) );
HXDLIN( 132)		this->matD = ( (Float)(1) );
HXDLIN( 132)		this->absX = ( (Float)(0) );
HXDLIN( 132)		this->absY = ( (Float)(0) );
HXLINE( 133)		this->posChanged = ::hx::IsNotNull( parent );
HXLINE( 134)		this->children = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 135)		if (::hx::IsNotNull( parent )) {
HXLINE( 136)			parent->addChild(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}

Dynamic Object_obj::__CreateEmpty() { return new Object_obj; }

void *Object_obj::_hx_vtable = 0;

Dynamic Object_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Object_obj > _hx_result = new Object_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Object_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0af28419;
}

 ::h2d::col::Bounds Object_obj::getBounds( ::h2d::Object relativeTo, ::h2d::col::Bounds out){
            	HX_GC_STACKFRAME(&_hx_pos_b3484cc6f232f485_145_getBounds)
HXLINE( 146)		if (::hx::IsNull( out )) {
HXLINE( 146)			out =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 146)			out->xMin = ((Float)1e20);
HXDLIN( 146)			out->yMin = ((Float)1e20);
HXDLIN( 146)			out->xMax = ((Float)-1e20);
HXDLIN( 146)			out->yMax = ((Float)-1e20);
            		}
HXLINE( 147)		if (::hx::IsNotNull( relativeTo )) {
HXLINE( 148)			relativeTo->syncPos();
            		}
HXLINE( 149)		if (::hx::IsInstanceNotEq( relativeTo,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 150)			this->syncPos();
            		}
HXLINE( 151)		this->getBoundsRec(relativeTo,out,false);
HXLINE( 152)		bool _hx_tmp;
HXDLIN( 152)		if (!((out->xMax <= out->xMin))) {
HXLINE( 152)			_hx_tmp = (out->yMax <= out->yMin);
            		}
            		else {
HXLINE( 152)			_hx_tmp = true;
            		}
HXDLIN( 152)		if (_hx_tmp) {
HXLINE( 153)			this->addBounds(relativeTo,out,( (Float)(-1) ),( (Float)(-1) ),( (Float)(2) ),( (Float)(2) ));
HXLINE( 154)			out->xMax = (out->xMin = ((out->xMax + out->xMin) * ((Float)0.5)));
HXLINE( 155)			out->yMax = (out->yMin = ((out->yMax + out->yMin) * ((Float)0.5)));
            		}
HXLINE( 157)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,getBounds,return )

 ::h2d::col::Bounds Object_obj::getSize( ::h2d::col::Bounds out){
            	HX_GC_STACKFRAME(&_hx_pos_b3484cc6f232f485_166_getSize)
HXLINE( 167)		if (::hx::IsNull( out )) {
HXLINE( 167)			out =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 167)			out->xMin = ((Float)1e20);
HXDLIN( 167)			out->yMin = ((Float)1e20);
HXDLIN( 167)			out->xMax = ((Float)-1e20);
HXDLIN( 167)			out->yMax = ((Float)-1e20);
            		}
HXLINE( 168)		this->syncPos();
HXLINE( 169)		this->getBoundsRec(this->parent,out,true);
HXLINE( 170)		bool _hx_tmp;
HXDLIN( 170)		if (!((out->xMax <= out->xMin))) {
HXLINE( 170)			_hx_tmp = (out->yMax <= out->yMin);
            		}
            		else {
HXLINE( 170)			_hx_tmp = true;
            		}
HXDLIN( 170)		if (_hx_tmp) {
HXLINE( 171)			this->addBounds(this->parent,out,( (Float)(-1) ),( (Float)(-1) ),( (Float)(2) ),( (Float)(2) ));
HXLINE( 172)			out->xMax = (out->xMin = ((out->xMax + out->xMin) * ((Float)0.5)));
HXLINE( 173)			out->yMax = (out->yMin = ((out->yMax + out->yMin) * ((Float)0.5)));
            		}
HXLINE( 175)		{
HXLINE( 175)			Float dx = -(this->x);
HXDLIN( 175)			Float dy = -(this->y);
HXDLIN( 175)			 ::h2d::col::Bounds out1 = out;
HXDLIN( 175)			out1->xMin = (out1->xMin + dx);
HXDLIN( 175)			 ::h2d::col::Bounds out2 = out;
HXDLIN( 175)			out2->xMax = (out2->xMax + dx);
HXDLIN( 175)			 ::h2d::col::Bounds out3 = out;
HXDLIN( 175)			out3->yMin = (out3->yMin + dy);
HXDLIN( 175)			 ::h2d::col::Bounds out4 = out;
HXDLIN( 175)			out4->yMax = (out4->yMax + dy);
            		}
HXLINE( 176)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getSize,return )

 ::h2d::col::Matrix Object_obj::getAbsPos(){
            	HX_GC_STACKFRAME(&_hx_pos_b3484cc6f232f485_183_getAbsPos)
HXLINE( 184)		this->syncPos();
HXLINE( 185)		 ::h2d::col::Matrix m =  ::h2d::col::Matrix_obj::__alloc( HX_CTX );
HXLINE( 186)		m->a = this->matA;
HXLINE( 187)		m->b = this->matB;
HXLINE( 188)		m->c = this->matC;
HXLINE( 189)		m->d = this->matD;
HXLINE( 190)		m->x = this->absX;
HXLINE( 191)		m->y = this->absY;
HXLINE( 192)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getAbsPos,return )

bool Object_obj::contains( ::h2d::Object o){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_198_contains)
HXLINE( 199)		while(::hx::IsNotNull( o )){
HXLINE( 200)			o = o->parent;
HXLINE( 201)			if (::hx::IsInstanceEq( o,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 201)				return true;
            			}
            		}
HXLINE( 203)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,contains,return )

 ::Dynamic Object_obj::find( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_209_find)
HXLINE( 210)		 ::Dynamic v = f(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 211)		if (::hx::IsNotNull( v )) {
HXLINE( 212)			return v;
            		}
HXLINE( 213)		{
HXLINE( 213)			int _g = 0;
HXDLIN( 213)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 213)			while((_g < _g1->length)){
HXLINE( 213)				 ::h2d::Object o = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 213)				_g = (_g + 1);
HXLINE( 214)				 ::Dynamic v = o->find(f);
HXLINE( 215)				if (::hx::IsNotNull( v )) {
HXLINE( 215)					return v;
            				}
            			}
            		}
HXLINE( 217)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,find,return )

::cpp::VirtualArray Object_obj::findAll( ::Dynamic f,::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_224_findAll)
HXLINE( 225)		if (::hx::IsNull( arr )) {
HXLINE( 225)			arr = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 226)		 ::Dynamic v = f(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 227)		if (::hx::IsNotNull( v )) {
HXLINE( 228)			arr->push(v);
            		}
HXLINE( 229)		{
HXLINE( 229)			int _g = 0;
HXDLIN( 229)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 229)			while((_g < _g1->length)){
HXLINE( 229)				 ::h2d::Object o = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 229)				_g = (_g + 1);
HXLINE( 230)				o->findAll(f,arr);
            			}
            		}
HXLINE( 231)		return arr;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,findAll,return )

 ::h2d::filter::Filter Object_obj::set_filter( ::h2d::filter::Filter f){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_234_set_filter)
HXLINE( 235)		bool _hx_tmp;
HXDLIN( 235)		if (::hx::IsNotNull( this->filter )) {
HXLINE( 235)			_hx_tmp = this->allocated;
            		}
            		else {
HXLINE( 235)			_hx_tmp = false;
            		}
HXDLIN( 235)		if (_hx_tmp) {
HXLINE( 235)			this->filter->unbind(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 236)		this->filter = f;
HXLINE( 237)		bool _hx_tmp1;
HXDLIN( 237)		if (::hx::IsNotNull( f )) {
HXLINE( 237)			_hx_tmp1 = this->allocated;
            		}
            		else {
HXLINE( 237)			_hx_tmp1 = false;
            		}
HXDLIN( 237)		if (_hx_tmp1) {
HXLINE( 237)			f->bind(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 238)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_filter,return )

void Object_obj::getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_249_getBoundsRec)
HXLINE( 250)		if (this->posChanged) {
HXLINE( 251)			this->calcAbsPos();
HXLINE( 252)			{
HXLINE( 252)				int _g = 0;
HXDLIN( 252)				::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 252)				while((_g < _g1->length)){
HXLINE( 252)					 ::h2d::Object c = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 252)					_g = (_g + 1);
HXLINE( 253)					c->posChanged = true;
            				}
            			}
HXLINE( 254)			this->posChanged = false;
            		}
HXLINE( 256)		int n = this->children->length;
HXLINE( 257)		if ((n == 0)) {
HXLINE( 258)			{
HXLINE( 258)				out->xMin = ((Float)1e20);
HXDLIN( 258)				out->yMin = ((Float)1e20);
HXDLIN( 258)				out->xMax = ((Float)-1e20);
HXDLIN( 258)				out->yMax = ((Float)-1e20);
            			}
HXLINE( 259)			return;
            		}
HXLINE( 261)		if ((n == 1)) {
HXLINE( 262)			 ::h2d::Object c = this->children->__get(0).StaticCast<  ::h2d::Object >();
HXLINE( 263)			if (c->visible) {
HXLINE( 263)				c->getBoundsRec(relativeTo,out,forSize);
            			}
            			else {
HXLINE( 263)				out->xMin = ((Float)1e20);
HXDLIN( 263)				out->yMin = ((Float)1e20);
HXDLIN( 263)				out->xMax = ((Float)-1e20);
HXDLIN( 263)				out->yMax = ((Float)-1e20);
            			}
HXLINE( 264)			return;
            		}
HXLINE( 266)		Float xmin = ::Math_obj::POSITIVE_INFINITY;
HXDLIN( 266)		Float ymin = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 267)		Float xmax = ::Math_obj::NEGATIVE_INFINITY;
HXDLIN( 267)		Float ymax = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 268)		{
HXLINE( 268)			int _g = 0;
HXDLIN( 268)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 268)			while((_g < _g1->length)){
HXLINE( 268)				 ::h2d::Object c = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 268)				_g = (_g + 1);
HXLINE( 269)				if (!(c->visible)) {
HXLINE( 269)					continue;
            				}
HXLINE( 270)				c->getBoundsRec(relativeTo,out,forSize);
HXLINE( 271)				if ((out->xMin < xmin)) {
HXLINE( 271)					xmin = out->xMin;
            				}
HXLINE( 272)				if ((out->yMin < ymin)) {
HXLINE( 272)					ymin = out->yMin;
            				}
HXLINE( 273)				if ((out->xMax > xmax)) {
HXLINE( 273)					xmax = out->xMax;
            				}
HXLINE( 274)				if ((out->yMax > ymax)) {
HXLINE( 274)					ymax = out->yMax;
            				}
            			}
            		}
HXLINE( 276)		out->xMin = xmin;
HXLINE( 277)		out->yMin = ymin;
HXLINE( 278)		out->xMax = xmax;
HXLINE( 279)		out->yMax = ymax;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Object_obj,getBoundsRec,(void))

void Object_obj::addBounds( ::h2d::Object relativeTo, ::h2d::col::Bounds out,Float dx,Float dy,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_292_addBounds)
HXLINE( 294)		bool _hx_tmp;
HXDLIN( 294)		if (!((width <= 0))) {
HXLINE( 294)			_hx_tmp = (height <= 0);
            		}
            		else {
HXLINE( 294)			_hx_tmp = true;
            		}
HXDLIN( 294)		if (_hx_tmp) {
HXLINE( 294)			return;
            		}
HXLINE( 296)		if (::hx::IsNull( relativeTo )) {
HXLINE( 297)			 ::Dynamic x;
HXDLIN( 297)			 ::Dynamic y;
HXLINE( 298)			{
HXLINE( 298)				Float x1 = (((dx * this->matA) + (dy * this->matC)) + this->absX);
HXDLIN( 298)				Float y1 = (((dx * this->matB) + (dy * this->matD)) + this->absY);
HXDLIN( 298)				if ((x1 < out->xMin)) {
HXLINE( 298)					out->xMin = x1;
            				}
HXDLIN( 298)				if ((x1 > out->xMax)) {
HXLINE( 298)					out->xMax = x1;
            				}
HXDLIN( 298)				if ((y1 < out->yMin)) {
HXLINE( 298)					out->yMin = y1;
            				}
HXDLIN( 298)				if ((y1 > out->yMax)) {
HXLINE( 298)					out->yMax = y1;
            				}
            			}
HXLINE( 299)			{
HXLINE( 299)				Float x2 = ((((dx + width) * this->matA) + (dy * this->matC)) + this->absX);
HXDLIN( 299)				Float y2 = ((((dx + width) * this->matB) + (dy * this->matD)) + this->absY);
HXDLIN( 299)				if ((x2 < out->xMin)) {
HXLINE( 299)					out->xMin = x2;
            				}
HXDLIN( 299)				if ((x2 > out->xMax)) {
HXLINE( 299)					out->xMax = x2;
            				}
HXDLIN( 299)				if ((y2 < out->yMin)) {
HXLINE( 299)					out->yMin = y2;
            				}
HXDLIN( 299)				if ((y2 > out->yMax)) {
HXLINE( 299)					out->yMax = y2;
            				}
            			}
HXLINE( 300)			{
HXLINE( 300)				Float x3 = (((dx * this->matA) + ((dy + height) * this->matC)) + this->absX);
HXDLIN( 300)				Float y3 = (((dx * this->matB) + ((dy + height) * this->matD)) + this->absY);
HXDLIN( 300)				if ((x3 < out->xMin)) {
HXLINE( 300)					out->xMin = x3;
            				}
HXDLIN( 300)				if ((x3 > out->xMax)) {
HXLINE( 300)					out->xMax = x3;
            				}
HXDLIN( 300)				if ((y3 < out->yMin)) {
HXLINE( 300)					out->yMin = y3;
            				}
HXDLIN( 300)				if ((y3 > out->yMax)) {
HXLINE( 300)					out->yMax = y3;
            				}
            			}
HXLINE( 301)			{
HXLINE( 301)				Float x4 = ((((dx + width) * this->matA) + ((dy + height) * this->matC)) + this->absX);
HXDLIN( 301)				Float y4 = ((((dx + width) * this->matB) + ((dy + height) * this->matD)) + this->absY);
HXDLIN( 301)				if ((x4 < out->xMin)) {
HXLINE( 301)					out->xMin = x4;
            				}
HXDLIN( 301)				if ((x4 > out->xMax)) {
HXLINE( 301)					out->xMax = x4;
            				}
HXDLIN( 301)				if ((y4 < out->yMin)) {
HXLINE( 301)					out->yMin = y4;
            				}
HXDLIN( 301)				if ((y4 > out->yMax)) {
HXLINE( 301)					out->yMax = y4;
            				}
            			}
HXLINE( 302)			return;
            		}
HXLINE( 305)		if (::hx::IsInstanceEq( relativeTo,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 306)			if ((out->xMin > dx)) {
HXLINE( 306)				out->xMin = dx;
            			}
HXLINE( 307)			if ((out->yMin > dy)) {
HXLINE( 307)				out->yMin = dy;
            			}
HXLINE( 308)			if ((out->xMax < (dx + width))) {
HXLINE( 308)				out->xMax = (dx + width);
            			}
HXLINE( 309)			if ((out->yMax < (dy + height))) {
HXLINE( 309)				out->yMax = (dy + height);
            			}
HXLINE( 310)			return;
            		}
HXLINE( 313)		Float r = ((relativeTo->matA * relativeTo->matD) - (relativeTo->matB * relativeTo->matC));
HXLINE( 314)		if ((r == 0)) {
HXLINE( 315)			return;
            		}
HXLINE( 317)		Float det = (( (Float)(1) ) / r);
HXLINE( 318)		Float rA = (relativeTo->matD * det);
HXLINE( 319)		Float rB = (-(relativeTo->matB) * det);
HXLINE( 320)		Float rC = (-(relativeTo->matC) * det);
HXLINE( 321)		Float rD = (relativeTo->matA * det);
HXLINE( 322)		Float rX = (this->absX - relativeTo->absX);
HXLINE( 323)		Float rY = (this->absY - relativeTo->absY);
HXLINE( 325)		Float x = (((dx * this->matA) + (dy * this->matC)) + rX);
HXDLIN( 325)		Float y = (((dx * this->matB) + (dy * this->matD)) + rY);
HXLINE( 329)		{
HXLINE( 329)			Float x1 = ((x * rA) + (y * rC));
HXDLIN( 329)			Float y1 = ((x * rB) + (y * rD));
HXDLIN( 329)			if ((x1 < out->xMin)) {
HXLINE( 329)				out->xMin = x1;
            			}
HXDLIN( 329)			if ((x1 > out->xMax)) {
HXLINE( 329)				out->xMax = x1;
            			}
HXDLIN( 329)			if ((y1 < out->yMin)) {
HXLINE( 329)				out->yMin = y1;
            			}
HXDLIN( 329)			if ((y1 > out->yMax)) {
HXLINE( 329)				out->yMax = y1;
            			}
            		}
HXLINE( 331)		x = ((((dx + width) * this->matA) + (dy * this->matC)) + rX);
HXLINE( 332)		y = ((((dx + width) * this->matB) + (dy * this->matD)) + rY);
HXLINE( 333)		{
HXLINE( 333)			Float x2 = ((x * rA) + (y * rC));
HXDLIN( 333)			Float y2 = ((x * rB) + (y * rD));
HXDLIN( 333)			if ((x2 < out->xMin)) {
HXLINE( 333)				out->xMin = x2;
            			}
HXDLIN( 333)			if ((x2 > out->xMax)) {
HXLINE( 333)				out->xMax = x2;
            			}
HXDLIN( 333)			if ((y2 < out->yMin)) {
HXLINE( 333)				out->yMin = y2;
            			}
HXDLIN( 333)			if ((y2 > out->yMax)) {
HXLINE( 333)				out->yMax = y2;
            			}
            		}
HXLINE( 335)		x = (((dx * this->matA) + ((dy + height) * this->matC)) + rX);
HXLINE( 336)		y = (((dx * this->matB) + ((dy + height) * this->matD)) + rY);
HXLINE( 337)		{
HXLINE( 337)			Float x3 = ((x * rA) + (y * rC));
HXDLIN( 337)			Float y3 = ((x * rB) + (y * rD));
HXDLIN( 337)			if ((x3 < out->xMin)) {
HXLINE( 337)				out->xMin = x3;
            			}
HXDLIN( 337)			if ((x3 > out->xMax)) {
HXLINE( 337)				out->xMax = x3;
            			}
HXDLIN( 337)			if ((y3 < out->yMin)) {
HXLINE( 337)				out->yMin = y3;
            			}
HXDLIN( 337)			if ((y3 > out->yMax)) {
HXLINE( 337)				out->yMax = y3;
            			}
            		}
HXLINE( 339)		x = ((((dx + width) * this->matA) + ((dy + height) * this->matC)) + rX);
HXLINE( 340)		y = ((((dx + width) * this->matB) + ((dy + height) * this->matD)) + rY);
HXLINE( 341)		{
HXLINE( 341)			Float x4 = ((x * rA) + (y * rC));
HXDLIN( 341)			Float y4 = ((x * rB) + (y * rD));
HXDLIN( 341)			if ((x4 < out->xMin)) {
HXLINE( 341)				out->xMin = x4;
            			}
HXDLIN( 341)			if ((x4 > out->xMax)) {
HXLINE( 341)				out->xMax = x4;
            			}
HXDLIN( 341)			if ((y4 < out->yMin)) {
HXLINE( 341)				out->yMin = y4;
            			}
HXDLIN( 341)			if ((y4 > out->yMax)) {
HXLINE( 341)				out->yMax = y4;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(Object_obj,addBounds,(void))

int Object_obj::getObjectsCount(){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_347_getObjectsCount)
HXLINE( 348)		int k = 0;
HXLINE( 349)		{
HXLINE( 349)			int _g = 0;
HXDLIN( 349)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 349)			while((_g < _g1->length)){
HXLINE( 349)				 ::h2d::Object c = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 349)				_g = (_g + 1);
HXLINE( 350)				k = (k + (c->getObjectsCount() + 1));
            			}
            		}
HXLINE( 351)		return k;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getObjectsCount,return )

 ::h2d::col::Point Object_obj::localToGlobal( ::h2d::col::Point pt){
            	HX_GC_STACKFRAME(&_hx_pos_b3484cc6f232f485_358_localToGlobal)
HXLINE( 359)		this->syncPos();
HXLINE( 360)		if (::hx::IsNull( pt )) {
HXLINE( 360)			pt =  ::h2d::col::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 361)		Float px = (((pt->x * this->matA) + (pt->y * this->matC)) + this->absX);
HXLINE( 362)		Float py = (((pt->x * this->matB) + (pt->y * this->matD)) + this->absY);
HXLINE( 363)		pt->x = px;
HXLINE( 364)		pt->y = py;
HXLINE( 365)		return pt;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,localToGlobal,return )

 ::h2d::col::Point Object_obj::globalToLocal( ::h2d::col::Point pt){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_372_globalToLocal)
HXLINE( 373)		this->syncPos();
HXLINE( 374)		 ::h2d::col::Point pt1 = pt;
HXDLIN( 374)		pt1->x = (pt1->x - this->absX);
HXLINE( 375)		 ::h2d::col::Point pt2 = pt;
HXDLIN( 375)		pt2->y = (pt2->y - this->absY);
HXLINE( 376)		Float invDet = (( (Float)(1) ) / ((this->matA * this->matD) - (this->matB * this->matC)));
HXLINE( 377)		Float px = (((pt->x * this->matD) - (pt->y * this->matC)) * invDet);
HXLINE( 378)		Float py = (((-(pt->x) * this->matB) + (pt->y * this->matA)) * invDet);
HXLINE( 379)		pt->x = px;
HXLINE( 380)		pt->y = py;
HXLINE( 381)		return pt;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,globalToLocal,return )

 ::h2d::Scene Object_obj::getScene(){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_387_getScene)
HXLINE( 388)		 ::h2d::Object p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 389)		while(::hx::IsNotNull( p->parent )){
HXLINE( 389)			p = p->parent;
            		}
HXLINE( 390)		return ( ( ::h2d::Scene)(::Std_obj::downcast(p,::hx::ClassOf< ::h2d::Scene >())) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getScene,return )

bool Object_obj::set_visible(bool b){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_393_set_visible)
HXLINE( 394)		if ((this->visible == b)) {
HXLINE( 395)			return b;
            		}
HXLINE( 396)		this->visible = b;
HXLINE( 397)		if (::hx::IsNotNull( this->parentContainer )) {
HXLINE( 397)			this->parentContainer->contentChanged(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 398)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_visible,return )

void Object_obj::addChild( ::h2d::Object s){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_405_addChild)
HXDLIN( 405)		this->addChildAt(s,this->children->length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,addChild,(void))

void Object_obj::addChildAt( ::h2d::Object s,int pos){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_411_addChildAt)
HXLINE( 412)		if ((pos < 0)) {
HXLINE( 412)			pos = 0;
            		}
HXLINE( 413)		if ((pos > this->children->length)) {
HXLINE( 413)			pos = this->children->length;
            		}
HXLINE( 414)		 ::h2d::Object p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 415)		while(::hx::IsNotNull( p )){
HXLINE( 416)			if (::hx::IsInstanceEq( p,s )) {
HXLINE( 416)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Recursive addChild",49,6a,2a,0c)));
            			}
HXLINE( 417)			p = p->parent;
            		}
HXLINE( 419)		if (::hx::IsNotNull( s->parent )) {
HXLINE( 421)			bool old = s->allocated;
HXLINE( 422)			s->allocated = false;
HXLINE( 423)			s->parent->removeChild(s);
HXLINE( 424)			s->allocated = old;
            		}
HXLINE( 426)		this->children->insert(pos,s);
HXLINE( 427)		bool _hx_tmp;
HXDLIN( 427)		if (!(this->allocated)) {
HXLINE( 427)			_hx_tmp = s->allocated;
            		}
            		else {
HXLINE( 427)			_hx_tmp = false;
            		}
HXDLIN( 427)		if (_hx_tmp) {
HXLINE( 428)			s->onRemove();
            		}
HXLINE( 429)		s->parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 430)		s->parentContainer = this->parentContainer;
HXLINE( 431)		s->posChanged = true;
HXLINE( 433)		if (this->allocated) {
HXLINE( 434)			if (!(s->allocated)) {
HXLINE( 435)				s->onAdd();
            			}
            			else {
HXLINE( 437)				s->onHierarchyMoved(true);
            			}
            		}
HXLINE( 439)		if (::hx::IsNotNull( this->parentContainer )) {
HXLINE( 439)			this->parentContainer->contentChanged(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,addChildAt,(void))

void Object_obj::onContentChanged(){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_450_onContentChanged)
HXDLIN( 450)		if (::hx::IsNotNull( this->parentContainer )) {
HXDLIN( 450)			this->parentContainer->contentChanged(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,onContentChanged,(void))

void Object_obj::onHierarchyMoved(bool parentChanged){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_462_onHierarchyMoved)
HXDLIN( 462)		int _g = 0;
HXDLIN( 462)		::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 462)		while((_g < _g1->length)){
HXDLIN( 462)			 ::h2d::Object c = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 462)			_g = (_g + 1);
HXLINE( 463)			c->onHierarchyMoved(parentChanged);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,onHierarchyMoved,(void))

void Object_obj::onAdd(){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_472_onAdd)
HXLINE( 473)		this->allocated = true;
HXLINE( 474)		if (::hx::IsNotNull( this->filter )) {
HXLINE( 475)			this->filter->bind(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 476)		{
HXLINE( 476)			int _g = 0;
HXDLIN( 476)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 476)			while((_g < _g1->length)){
HXLINE( 476)				 ::h2d::Object c = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 476)				_g = (_g + 1);
HXLINE( 477)				c->onAdd();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,onAdd,(void))

void Object_obj::onRemove(){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_487_onRemove)
HXLINE( 488)		this->allocated = false;
HXLINE( 489)		if (::hx::IsNotNull( this->filter )) {
HXLINE( 490)			this->filter->unbind(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 491)		{
HXLINE( 491)			int _g = 0;
HXDLIN( 491)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 491)			while((_g < _g1->length)){
HXLINE( 491)				 ::h2d::Object c = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 491)				_g = (_g + 1);
HXLINE( 492)				c->onRemove();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,onRemove,(void))

void Object_obj::getMatrix( ::h2d::col::Matrix m){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_499_getMatrix)
HXLINE( 500)		m->a = this->matA;
HXLINE( 501)		m->b = this->matB;
HXLINE( 502)		m->c = this->matC;
HXLINE( 503)		m->d = this->matD;
HXLINE( 504)		m->x = this->absX;
HXLINE( 505)		m->y = this->absY;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getMatrix,(void))

void Object_obj::removeChild( ::h2d::Object s){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_512_removeChild)
HXDLIN( 512)		if (this->children->remove(s)) {
HXLINE( 513)			if (s->allocated) {
HXLINE( 513)				s->onRemove();
            			}
HXLINE( 514)			s->parent = null();
HXLINE( 515)			if (::hx::IsNotNull( s->parentContainer )) {
HXLINE( 515)				s->setParentContainer(null());
            			}
HXLINE( 516)			s->posChanged = true;
HXLINE( 520)			if (::hx::IsNotNull( this->parentContainer )) {
HXLINE( 520)				this->parentContainer->contentChanged(::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,removeChild,(void))

void Object_obj::setParentContainer( ::h2d::Object c){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_529_setParentContainer)
HXLINE( 530)		this->parentContainer = c;
HXLINE( 531)		{
HXLINE( 531)			int _g = 0;
HXDLIN( 531)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 531)			while((_g < _g1->length)){
HXLINE( 531)				 ::h2d::Object s = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 531)				_g = (_g + 1);
HXLINE( 532)				s->setParentContainer(c);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,setParentContainer,(void))

void Object_obj::removeChildren(){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_539_removeChildren)
HXDLIN( 539)		while((this->children->length > 0)){
HXLINE( 540)			this->removeChild(this->children->__get(0).StaticCast<  ::h2d::Object >());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,removeChildren,(void))

void Object_obj::remove(){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_547_remove)
HXDLIN( 547)		if (::hx::IsNotNull( this->parent )) {
HXDLIN( 547)			this->parent->removeChild(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,remove,(void))

void Object_obj::drawTo( ::h3d::mat::Texture t){
            	HX_GC_STACKFRAME(&_hx_pos_b3484cc6f232f485_553_drawTo)
HXLINE( 554)		 ::h2d::Scene s = this->getScene();
HXLINE( 555)		bool needDispose = ::hx::IsNull( s );
HXLINE( 556)		if (::hx::IsNull( s )) {
HXLINE( 556)			s =  ::h2d::Scene_obj::__alloc( HX_CTX );
            		}
HXLINE( 557)		s->drawImplTo(::hx::ObjectPtr<OBJ_>(this),::Array_obj< ::Dynamic>::__new(1)->init(0,t),null());
HXLINE( 558)		if (needDispose) {
HXLINE( 559)			s->dispose();
HXLINE( 560)			this->onRemove();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,drawTo,(void))

void Object_obj::drawToTextures(::Array< ::Dynamic> texs,::Array< ::Dynamic> outputs){
            	HX_GC_STACKFRAME(&_hx_pos_b3484cc6f232f485_567_drawToTextures)
HXLINE( 568)		 ::h2d::Scene s = this->getScene();
HXLINE( 569)		bool needDispose = ::hx::IsNull( s );
HXLINE( 570)		if (::hx::IsNull( s )) {
HXLINE( 570)			s =  ::h2d::Scene_obj::__alloc( HX_CTX );
            		}
HXLINE( 571)		s->drawImplTo(::hx::ObjectPtr<OBJ_>(this),texs,outputs);
HXLINE( 572)		if (needDispose) {
HXLINE( 573)			s->dispose();
HXLINE( 574)			this->onRemove();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,drawToTextures,(void))

void Object_obj::draw( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_583_draw)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,draw,(void))

void Object_obj::sync( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_593_sync)
HXLINE( 594)		bool changed = this->posChanged;
HXLINE( 595)		if (changed) {
HXLINE( 596)			this->calcAbsPos();
HXLINE( 597)			this->posChanged = false;
            		}
HXLINE( 600)		this->lastFrame = ctx->frame;
HXLINE( 601)		int p = 0;
HXDLIN( 601)		int len = this->children->length;
HXLINE( 602)		while((p < len)){
HXLINE( 603)			 ::h2d::Object c = this->children->__get(p).StaticCast<  ::h2d::Object >();
HXLINE( 604)			if (::hx::IsNull( c )) {
HXLINE( 605)				goto _hx_goto_42;
            			}
HXLINE( 606)			if ((c->lastFrame != ctx->frame)) {
HXLINE( 607)				if (changed) {
HXLINE( 607)					c->posChanged = true;
            				}
HXLINE( 608)				c->sync(ctx);
            			}
HXLINE( 612)			if (::hx::IsInstanceNotEq( this->children->__get(p).StaticCast<  ::h2d::Object >(),c )) {
HXLINE( 613)				p = 0;
HXLINE( 614)				len = this->children->length;
            			}
            			else {
HXLINE( 616)				p = (p + 1);
            			}
            		}
            		_hx_goto_42:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,sync,(void))

void Object_obj::syncPos(){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_624_syncPos)
HXLINE( 625)		if (::hx::IsNotNull( this->parent )) {
HXLINE( 625)			this->parent->syncPos();
            		}
HXLINE( 626)		if (this->posChanged) {
HXLINE( 627)			this->calcAbsPos();
HXLINE( 628)			{
HXLINE( 628)				int _g = 0;
HXDLIN( 628)				::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 628)				while((_g < _g1->length)){
HXLINE( 628)					 ::h2d::Object c = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 628)					_g = (_g + 1);
HXLINE( 629)					c->posChanged = true;
            				}
            			}
HXLINE( 630)			this->posChanged = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,syncPos,(void))

void Object_obj::calcAbsPos(){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_642_calcAbsPos)
HXDLIN( 642)		if (::hx::IsNull( this->parent )) {
HXLINE( 643)			Float cr;
HXDLIN( 643)			Float sr;
HXLINE( 644)			if ((this->rotation == 0)) {
HXLINE( 645)				cr = ((Float)1.);
HXDLIN( 645)				sr = ((Float)0.);
HXLINE( 646)				this->matA = this->scaleX;
HXLINE( 647)				this->matB = ( (Float)(0) );
HXLINE( 648)				this->matC = ( (Float)(0) );
HXLINE( 649)				this->matD = this->scaleY;
            			}
            			else {
HXLINE( 651)				cr = ::Math_obj::cos(this->rotation);
HXLINE( 652)				sr = ::Math_obj::sin(this->rotation);
HXLINE( 653)				this->matA = (this->scaleX * cr);
HXLINE( 654)				this->matB = (this->scaleX * sr);
HXLINE( 655)				this->matC = (this->scaleY * -(sr));
HXLINE( 656)				this->matD = (this->scaleY * cr);
            			}
HXLINE( 658)			this->absX = this->x;
HXLINE( 659)			this->absY = this->y;
            		}
            		else {
HXLINE( 663)			if ((this->rotation == 0)) {
HXLINE( 664)				this->matA = (this->scaleX * this->parent->matA);
HXLINE( 665)				this->matB = (this->scaleX * this->parent->matB);
HXLINE( 666)				this->matC = (this->scaleY * this->parent->matC);
HXLINE( 667)				this->matD = (this->scaleY * this->parent->matD);
            			}
            			else {
HXLINE( 669)				Float cr = ::Math_obj::cos(this->rotation);
HXLINE( 670)				Float sr = ::Math_obj::sin(this->rotation);
HXLINE( 671)				Float tmpA = (this->scaleX * cr);
HXLINE( 672)				Float tmpB = (this->scaleX * sr);
HXLINE( 673)				Float tmpC = (this->scaleY * -(sr));
HXLINE( 674)				Float tmpD = (this->scaleY * cr);
HXLINE( 675)				this->matA = ((tmpA * this->parent->matA) + (tmpB * this->parent->matC));
HXLINE( 676)				this->matB = ((tmpA * this->parent->matB) + (tmpB * this->parent->matD));
HXLINE( 677)				this->matC = ((tmpC * this->parent->matA) + (tmpD * this->parent->matC));
HXLINE( 678)				this->matD = ((tmpC * this->parent->matB) + (tmpD * this->parent->matD));
            			}
HXLINE( 680)			this->absX = (((this->x * this->parent->matA) + (this->y * this->parent->matC)) + this->parent->absX);
HXLINE( 681)			this->absY = (((this->x * this->parent->matB) + (this->y * this->parent->matD)) + this->parent->absY);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,calcAbsPos,(void))

void Object_obj::emitTile( ::h2d::RenderContext ctx, ::h2d::Tile tile){
            	HX_GC_STACKFRAME(&_hx_pos_b3484cc6f232f485_689_emitTile)
HXLINE( 690)		if (::hx::IsNull( ::h2d::Object_obj::nullDrawable )) {
HXLINE( 691)			::h2d::Object_obj::nullDrawable =  ::h2d::Drawable_obj::__alloc( HX_CTX ,null());
            		}
HXLINE( 693)		::h2d::Object_obj::nullDrawable->absX = this->absX;
HXLINE( 694)		::h2d::Object_obj::nullDrawable->absY = this->absY;
HXLINE( 695)		::h2d::Object_obj::nullDrawable->matA = this->matA;
HXLINE( 696)		::h2d::Object_obj::nullDrawable->matB = this->matB;
HXLINE( 697)		::h2d::Object_obj::nullDrawable->matC = this->matC;
HXLINE( 698)		::h2d::Object_obj::nullDrawable->matD = this->matD;
HXLINE( 699)		ctx->drawTile(::h2d::Object_obj::nullDrawable,tile);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,emitTile,(void))

void Object_obj::clipBounds( ::h2d::RenderContext ctx, ::h2d::col::Bounds bounds){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_765_clipBounds)
HXLINE( 766)		 ::h2d::col::Bounds view = ctx->tmpBounds;
HXLINE( 767)		Float matA;
HXDLIN( 767)		Float matB;
HXDLIN( 767)		Float matC;
HXDLIN( 767)		Float matD;
HXDLIN( 767)		Float absX;
HXDLIN( 767)		Float absY;
HXLINE( 768)		if (::hx::IsNotNull( ctx->inFilter )) {
HXLINE( 769)			 ::h3d::Vector f1 = ctx->baseShader->filterMatrixA__;
HXLINE( 770)			 ::h3d::Vector f2 = ctx->baseShader->filterMatrixB__;
HXLINE( 771)			Float tmpA = ((this->matA * f1->x) + (this->matB * f1->y));
HXLINE( 772)			Float tmpB = ((this->matA * f2->x) + (this->matB * f2->y));
HXLINE( 773)			Float tmpC = ((this->matC * f1->x) + (this->matD * f1->y));
HXLINE( 774)			Float tmpD = ((this->matC * f2->x) + (this->matD * f2->y));
HXLINE( 775)			Float tmpX = (((this->absX * f1->x) + (this->absY * f1->y)) + f1->z);
HXLINE( 776)			Float tmpY = (((this->absX * f2->x) + (this->absY * f2->y)) + f2->z);
HXLINE( 777)			matA = ((tmpA * ctx->viewA) + (tmpB * ctx->viewC));
HXLINE( 778)			matB = ((tmpA * ctx->viewB) + (tmpB * ctx->viewD));
HXLINE( 779)			matC = ((tmpC * ctx->viewA) + (tmpD * ctx->viewC));
HXLINE( 780)			matD = ((tmpC * ctx->viewB) + (tmpD * ctx->viewD));
HXLINE( 781)			absX = (((tmpX * ctx->viewA) + (tmpY * ctx->viewC)) + ctx->viewX);
HXLINE( 782)			absY = (((tmpX * ctx->viewB) + (tmpY * ctx->viewD)) + ctx->viewY);
            		}
            		else {
HXLINE( 784)			matA = ((this->matA * ctx->viewA) + (this->matB * ctx->viewC));
HXLINE( 785)			matB = ((this->matA * ctx->viewB) + (this->matB * ctx->viewD));
HXLINE( 786)			matC = ((this->matC * ctx->viewA) + (this->matD * ctx->viewC));
HXLINE( 787)			matD = ((this->matC * ctx->viewB) + (this->matD * ctx->viewD));
HXLINE( 788)			absX = (((this->absX * ctx->viewA) + (this->absY * ctx->viewC)) + ctx->viewX);
HXLINE( 789)			absY = (((this->absX * ctx->viewB) + (this->absY * ctx->viewD)) + ctx->viewY);
            		}
HXLINE( 793)		{
HXLINE( 793)			view->xMin = ((Float)1e20);
HXDLIN( 793)			view->yMin = ((Float)1e20);
HXDLIN( 793)			view->xMax = ((Float)-1e20);
HXDLIN( 793)			view->yMax = ((Float)-1e20);
            		}
HXLINE( 797)		{
HXLINE( 797)			Float x = bounds->xMin;
HXDLIN( 797)			Float y = bounds->yMin;
HXDLIN( 797)			{
HXLINE( 797)				Float x1 = (((x * matA) + (y * matC)) + absX);
HXDLIN( 797)				Float y1 = (((x * matB) + (y * matD)) + absY);
HXDLIN( 797)				if ((x1 < view->xMin)) {
HXLINE( 797)					view->xMin = x1;
            				}
HXDLIN( 797)				if ((x1 > view->xMax)) {
HXLINE( 797)					view->xMax = x1;
            				}
HXDLIN( 797)				if ((y1 < view->yMin)) {
HXLINE( 797)					view->yMin = y1;
            				}
HXDLIN( 797)				if ((y1 > view->yMax)) {
HXLINE( 797)					view->yMax = y1;
            				}
            			}
            		}
HXLINE( 798)		{
HXLINE( 798)			Float x2 = bounds->xMax;
HXDLIN( 798)			Float y2 = bounds->yMin;
HXDLIN( 798)			{
HXLINE( 798)				Float x3 = (((x2 * matA) + (y2 * matC)) + absX);
HXDLIN( 798)				Float y3 = (((x2 * matB) + (y2 * matD)) + absY);
HXDLIN( 798)				if ((x3 < view->xMin)) {
HXLINE( 798)					view->xMin = x3;
            				}
HXDLIN( 798)				if ((x3 > view->xMax)) {
HXLINE( 798)					view->xMax = x3;
            				}
HXDLIN( 798)				if ((y3 < view->yMin)) {
HXLINE( 798)					view->yMin = y3;
            				}
HXDLIN( 798)				if ((y3 > view->yMax)) {
HXLINE( 798)					view->yMax = y3;
            				}
            			}
            		}
HXLINE( 799)		{
HXLINE( 799)			Float x4 = bounds->xMin;
HXDLIN( 799)			Float y4 = bounds->yMax;
HXDLIN( 799)			{
HXLINE( 799)				Float x5 = (((x4 * matA) + (y4 * matC)) + absX);
HXDLIN( 799)				Float y5 = (((x4 * matB) + (y4 * matD)) + absY);
HXDLIN( 799)				if ((x5 < view->xMin)) {
HXLINE( 799)					view->xMin = x5;
            				}
HXDLIN( 799)				if ((x5 > view->xMax)) {
HXLINE( 799)					view->xMax = x5;
            				}
HXDLIN( 799)				if ((y5 < view->yMin)) {
HXLINE( 799)					view->yMin = y5;
            				}
HXDLIN( 799)				if ((y5 > view->yMax)) {
HXLINE( 799)					view->yMax = y5;
            				}
            			}
            		}
HXLINE( 800)		{
HXLINE( 800)			Float x6 = bounds->xMax;
HXDLIN( 800)			Float y6 = bounds->yMax;
HXDLIN( 800)			{
HXLINE( 800)				Float x7 = (((x6 * matA) + (y6 * matC)) + absX);
HXDLIN( 800)				Float y7 = (((x6 * matB) + (y6 * matD)) + absY);
HXDLIN( 800)				if ((x7 < view->xMin)) {
HXLINE( 800)					view->xMin = x7;
            				}
HXDLIN( 800)				if ((x7 > view->xMax)) {
HXLINE( 800)					view->xMax = x7;
            				}
HXDLIN( 800)				if ((y7 < view->yMin)) {
HXLINE( 800)					view->yMin = y7;
            				}
HXDLIN( 800)				if ((y7 > view->yMax)) {
HXLINE( 800)					view->yMax = y7;
            				}
            			}
            		}
HXLINE( 803)		{
HXLINE( 804)			if ((view->xMin < -1)) {
HXLINE( 804)				view->xMin = ( (Float)(-1) );
            			}
HXLINE( 805)			if ((view->yMin < -1)) {
HXLINE( 805)				view->yMin = ( (Float)(-1) );
            			}
HXLINE( 806)			if ((view->xMax > 1)) {
HXLINE( 806)				view->xMax = ( (Float)(1) );
            			}
HXLINE( 807)			if ((view->yMax > 1)) {
HXLINE( 807)				view->yMax = ( (Float)(1) );
            			}
            		}
HXLINE( 811)		Float invDet = (( (Float)(1) ) / ((matA * matD) - (matB * matC)));
HXLINE( 819)		Float sxMin = view->xMin;
HXLINE( 820)		Float syMin = view->yMin;
HXLINE( 821)		Float sxMax = view->xMax;
HXLINE( 822)		Float syMax = view->yMax;
HXLINE( 823)		{
HXLINE( 823)			view->xMin = ((Float)1e20);
HXDLIN( 823)			view->yMin = ((Float)1e20);
HXDLIN( 823)			view->xMax = ((Float)-1e20);
HXDLIN( 823)			view->yMax = ((Float)-1e20);
            		}
HXLINE( 824)		{
HXLINE( 824)			Float x8 = sxMin;
HXDLIN( 824)			Float y8 = syMin;
HXDLIN( 824)			x8 = (x8 - absX);
HXDLIN( 824)			y8 = (y8 - absY);
HXDLIN( 824)			{
HXLINE( 824)				Float x9 = (((x8 * matD) - (y8 * matC)) * invDet);
HXDLIN( 824)				Float y9 = (((-(x8) * matB) + (y8 * matA)) * invDet);
HXDLIN( 824)				if ((x9 < view->xMin)) {
HXLINE( 824)					view->xMin = x9;
            				}
HXDLIN( 824)				if ((x9 > view->xMax)) {
HXLINE( 824)					view->xMax = x9;
            				}
HXDLIN( 824)				if ((y9 < view->yMin)) {
HXLINE( 824)					view->yMin = y9;
            				}
HXDLIN( 824)				if ((y9 > view->yMax)) {
HXLINE( 824)					view->yMax = y9;
            				}
            			}
            		}
HXLINE( 825)		{
HXLINE( 825)			Float x10 = sxMax;
HXDLIN( 825)			Float y10 = syMin;
HXDLIN( 825)			x10 = (x10 - absX);
HXDLIN( 825)			y10 = (y10 - absY);
HXDLIN( 825)			{
HXLINE( 825)				Float x11 = (((x10 * matD) - (y10 * matC)) * invDet);
HXDLIN( 825)				Float y11 = (((-(x10) * matB) + (y10 * matA)) * invDet);
HXDLIN( 825)				if ((x11 < view->xMin)) {
HXLINE( 825)					view->xMin = x11;
            				}
HXDLIN( 825)				if ((x11 > view->xMax)) {
HXLINE( 825)					view->xMax = x11;
            				}
HXDLIN( 825)				if ((y11 < view->yMin)) {
HXLINE( 825)					view->yMin = y11;
            				}
HXDLIN( 825)				if ((y11 > view->yMax)) {
HXLINE( 825)					view->yMax = y11;
            				}
            			}
            		}
HXLINE( 826)		{
HXLINE( 826)			Float x12 = sxMin;
HXDLIN( 826)			Float y12 = syMax;
HXDLIN( 826)			x12 = (x12 - absX);
HXDLIN( 826)			y12 = (y12 - absY);
HXDLIN( 826)			{
HXLINE( 826)				Float x13 = (((x12 * matD) - (y12 * matC)) * invDet);
HXDLIN( 826)				Float y13 = (((-(x12) * matB) + (y12 * matA)) * invDet);
HXDLIN( 826)				if ((x13 < view->xMin)) {
HXLINE( 826)					view->xMin = x13;
            				}
HXDLIN( 826)				if ((x13 > view->xMax)) {
HXLINE( 826)					view->xMax = x13;
            				}
HXDLIN( 826)				if ((y13 < view->yMin)) {
HXLINE( 826)					view->yMin = y13;
            				}
HXDLIN( 826)				if ((y13 > view->yMax)) {
HXLINE( 826)					view->yMax = y13;
            				}
            			}
            		}
HXLINE( 827)		{
HXLINE( 827)			Float x14 = sxMax;
HXDLIN( 827)			Float y14 = syMax;
HXDLIN( 827)			x14 = (x14 - absX);
HXDLIN( 827)			y14 = (y14 - absY);
HXDLIN( 827)			{
HXLINE( 827)				Float x15 = (((x14 * matD) - (y14 * matC)) * invDet);
HXDLIN( 827)				Float y15 = (((-(x14) * matB) + (y14 * matA)) * invDet);
HXDLIN( 827)				if ((x15 < view->xMin)) {
HXLINE( 827)					view->xMin = x15;
            				}
HXDLIN( 827)				if ((x15 > view->xMax)) {
HXLINE( 827)					view->xMax = x15;
            				}
HXDLIN( 827)				if ((y15 < view->yMin)) {
HXLINE( 827)					view->yMin = y15;
            				}
HXDLIN( 827)				if ((y15 > view->yMax)) {
HXLINE( 827)					view->yMax = y15;
            				}
            			}
            		}
HXLINE( 830)		{
HXLINE( 830)			Float a = bounds->xMin;
HXDLIN( 830)			Float b = view->xMin;
HXDLIN( 830)			Float _hx_tmp;
HXDLIN( 830)			if ((a < b)) {
HXLINE( 830)				_hx_tmp = b;
            			}
            			else {
HXLINE( 830)				_hx_tmp = a;
            			}
HXDLIN( 830)			bounds->xMin = _hx_tmp;
HXDLIN( 830)			Float a1 = bounds->yMin;
HXDLIN( 830)			Float b1 = view->yMin;
HXDLIN( 830)			Float _hx_tmp1;
HXDLIN( 830)			if ((a1 < b1)) {
HXLINE( 830)				_hx_tmp1 = b1;
            			}
            			else {
HXLINE( 830)				_hx_tmp1 = a1;
            			}
HXDLIN( 830)			bounds->yMin = _hx_tmp1;
HXDLIN( 830)			Float a2 = bounds->xMax;
HXDLIN( 830)			Float b2 = view->xMax;
HXDLIN( 830)			Float _hx_tmp2;
HXDLIN( 830)			if ((a2 > b2)) {
HXLINE( 830)				_hx_tmp2 = b2;
            			}
            			else {
HXLINE( 830)				_hx_tmp2 = a2;
            			}
HXDLIN( 830)			bounds->xMax = _hx_tmp2;
HXDLIN( 830)			Float a3 = bounds->yMax;
HXDLIN( 830)			Float b3 = view->yMax;
HXDLIN( 830)			Float _hx_tmp3;
HXDLIN( 830)			if ((a3 > b3)) {
HXLINE( 830)				_hx_tmp3 = b3;
            			}
            			else {
HXLINE( 830)				_hx_tmp3 = a3;
            			}
HXDLIN( 830)			bounds->yMax = _hx_tmp3;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,clipBounds,(void))

void Object_obj::drawFilters( ::h2d::RenderContext ctx){
            	HX_GC_STACKFRAME(&_hx_pos_b3484cc6f232f485_833_drawFilters)
HXLINE( 834)		if (!(ctx->pushFilter(::hx::ObjectPtr<OBJ_>(this)))) {
HXLINE( 834)			return;
            		}
HXLINE( 836)		 ::h2d::col::Bounds bounds = ctx->tmpBounds;
HXLINE( 837)		 ::h2d::col::Bounds total =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 838)		Float maxExtent = ((Float)-1.);
HXLINE( 839)		this->filter->sync(ctx,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 840)		if (this->filter->autoBounds) {
HXLINE( 841)			maxExtent = this->filter->boundsExtend;
            		}
            		else {
HXLINE( 843)			this->filter->getBounds(::hx::ObjectPtr<OBJ_>(this),bounds);
HXLINE( 844)			{
HXLINE( 844)				if ((bounds->xMin < total->xMin)) {
HXLINE( 844)					total->xMin = bounds->xMin;
            				}
HXDLIN( 844)				if ((bounds->xMax > total->xMax)) {
HXLINE( 844)					total->xMax = bounds->xMax;
            				}
HXDLIN( 844)				if ((bounds->yMin < total->yMin)) {
HXLINE( 844)					total->yMin = bounds->yMin;
            				}
HXDLIN( 844)				if ((bounds->yMax > total->yMax)) {
HXLINE( 844)					total->yMax = bounds->yMax;
            				}
            			}
            		}
HXLINE( 846)		if ((maxExtent >= 0)) {
HXLINE( 847)			this->getBounds(::hx::ObjectPtr<OBJ_>(this),bounds);
HXLINE( 848)			 ::h2d::col::Bounds bounds1 = bounds;
HXDLIN( 848)			bounds1->xMin = (bounds1->xMin - maxExtent);
HXLINE( 849)			 ::h2d::col::Bounds bounds2 = bounds;
HXDLIN( 849)			bounds2->yMin = (bounds2->yMin - maxExtent);
HXLINE( 850)			 ::h2d::col::Bounds bounds3 = bounds;
HXDLIN( 850)			bounds3->xMax = (bounds3->xMax + maxExtent);
HXLINE( 851)			 ::h2d::col::Bounds bounds4 = bounds;
HXDLIN( 851)			bounds4->yMax = (bounds4->yMax + maxExtent);
HXLINE( 852)			{
HXLINE( 852)				if ((bounds->xMin < total->xMin)) {
HXLINE( 852)					total->xMin = bounds->xMin;
            				}
HXDLIN( 852)				if ((bounds->xMax > total->xMax)) {
HXLINE( 852)					total->xMax = bounds->xMax;
            				}
HXDLIN( 852)				if ((bounds->yMin < total->yMin)) {
HXLINE( 852)					total->yMin = bounds->yMin;
            				}
HXDLIN( 852)				if ((bounds->yMax > total->yMax)) {
HXLINE( 852)					total->yMax = bounds->yMax;
            				}
            			}
            		}
HXLINE( 855)		this->clipBounds(ctx,total);
HXLINE( 857)		int xMin = ::Math_obj::floor((total->xMin + ((Float)1e-10)));
HXLINE( 858)		int yMin = ::Math_obj::floor((total->yMin + ((Float)1e-10)));
HXLINE( 859)		int width = ::Math_obj::ceil(((total->xMax - ( (Float)(xMin) )) - ((Float)1e-10)));
HXLINE( 860)		int height = ::Math_obj::ceil(((total->yMax - ( (Float)(yMin) )) - ((Float)1e-10)));
HXLINE( 862)		bool _hx_tmp;
HXDLIN( 862)		bool _hx_tmp1;
HXDLIN( 862)		if ((width > 0)) {
HXLINE( 862)			_hx_tmp1 = (height <= 0);
            		}
            		else {
HXLINE( 862)			_hx_tmp1 = true;
            		}
HXDLIN( 862)		if (!(_hx_tmp1)) {
HXLINE( 862)			_hx_tmp = (total->xMax < total->xMin);
            		}
            		else {
HXLINE( 862)			_hx_tmp = true;
            		}
HXDLIN( 862)		if (_hx_tmp) {
HXLINE( 863)			ctx->popFilter();
HXLINE( 864)			return;
            		}
HXLINE( 867)		 ::h3d::mat::Texture t = ctx->textures->allocTarget(HX_("filterTemp",ec,4a,3e,59),width,height,false,null(),null());
HXLINE( 868)		ctx->pushTarget(t,xMin,yMin,width,height);
HXLINE( 869)		ctx->engine->clear(0,null(),null());
HXLINE( 872)		Float oldAlpha = ctx->globalAlpha;
HXLINE( 873)		 ::h3d::shader::Base2d shader = ctx->baseShader;
HXLINE( 874)		 ::h3d::Vector _this = shader->filterMatrixA__;
HXDLIN( 874)		Float oldA_x = _this->x;
HXDLIN( 874)		Float oldA_y = _this->y;
HXDLIN( 874)		Float oldA_z = _this->z;
HXDLIN( 874)		Float oldA_w = _this->w;
HXLINE( 875)		 ::h3d::Vector _this1 = shader->filterMatrixB__;
HXDLIN( 875)		Float oldB_x = _this1->x;
HXDLIN( 875)		Float oldB_y = _this1->y;
HXDLIN( 875)		Float oldB_z = _this1->z;
HXDLIN( 875)		Float oldB_w = _this1->w;
HXLINE( 878)		Float invDet = (( (Float)(1) ) / ((this->matA * this->matD) - (this->matB * this->matC)));
HXLINE( 879)		Float invA = (this->matD * invDet);
HXLINE( 880)		Float invB = (-(this->matB) * invDet);
HXLINE( 881)		Float invC = (-(this->matC) * invDet);
HXLINE( 882)		Float invD = (this->matA * invDet);
HXLINE( 883)		Float invX = -(((this->absX * invA) + (this->absY * invC)));
HXLINE( 884)		Float invY = -(((this->absX * invB) + (this->absY * invD)));
HXLINE( 886)		{
HXLINE( 886)			 ::h3d::Vector _this2 = shader->filterMatrixA__;
HXDLIN( 886)			_this2->x = invA;
HXDLIN( 886)			_this2->y = invC;
HXDLIN( 886)			_this2->z = invX;
HXDLIN( 886)			_this2->w = ((Float)1.);
            		}
HXLINE( 887)		{
HXLINE( 887)			 ::h3d::Vector _this3 = shader->filterMatrixB__;
HXDLIN( 887)			_this3->x = invB;
HXDLIN( 887)			_this3->y = invD;
HXDLIN( 887)			_this3->z = invY;
HXDLIN( 887)			_this3->w = ((Float)1.);
            		}
HXLINE( 888)		ctx->globalAlpha = ( (Float)(1) );
HXLINE( 889)		this->drawContent(ctx);
HXLINE( 892)		 ::h2d::Tile finalTile = ::h2d::Tile_obj::fromTexture(t);
HXLINE( 893)		finalTile->dx = ( (Float)(xMin) );
HXLINE( 894)		finalTile->dy = ( (Float)(yMin) );
HXLINE( 896)		 ::h2d::Tile prev = finalTile;
HXLINE( 897)		finalTile = this->filter->draw(ctx,finalTile);
HXLINE( 898)		bool _hx_tmp2;
HXDLIN( 898)		if (::hx::IsInstanceNotEq( finalTile,prev )) {
HXLINE( 898)			_hx_tmp2 = ::hx::IsNotNull( finalTile );
            		}
            		else {
HXLINE( 898)			_hx_tmp2 = false;
            		}
HXDLIN( 898)		if (_hx_tmp2) {
HXLINE( 899)			 ::h2d::Tile finalTile1 = finalTile;
HXDLIN( 899)			finalTile1->dx = (finalTile1->dx + xMin);
HXLINE( 900)			 ::h2d::Tile finalTile2 = finalTile;
HXDLIN( 900)			finalTile2->dy = (finalTile2->dy + yMin);
            		}
HXLINE( 903)		{
HXLINE( 903)			 ::h3d::Vector _this4 = shader->filterMatrixA__;
HXDLIN( 903)			_this4->x = oldA_x;
HXDLIN( 903)			_this4->y = oldA_y;
HXDLIN( 903)			_this4->z = oldA_z;
HXDLIN( 903)			_this4->w = oldA_w;
            		}
HXLINE( 904)		{
HXLINE( 904)			 ::h3d::Vector _this5 = shader->filterMatrixB__;
HXDLIN( 904)			_this5->x = oldB_x;
HXDLIN( 904)			_this5->y = oldB_y;
HXDLIN( 904)			_this5->z = oldB_z;
HXDLIN( 904)			_this5->w = oldB_w;
            		}
HXLINE( 906)		ctx->popTarget();
HXLINE( 907)		ctx->popFilter();
HXLINE( 908)		ctx->globalAlpha = oldAlpha;
HXLINE( 910)		if (::hx::IsNull( finalTile )) {
HXLINE( 911)			return;
            		}
HXLINE( 913)		this->drawFiltered(ctx,finalTile);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,drawFilters,(void))

void Object_obj::drawFiltered( ::h2d::RenderContext ctx, ::h2d::Tile tile){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_917_drawFiltered)
HXLINE( 918)		Float oldAlpha = ctx->globalAlpha;
HXLINE( 919)		ctx->currentBlend = null();
HXLINE( 920)		ctx->inFilterBlend = this->blendMode;
HXLINE( 921)		 ::h2d::RenderContext ctx1 = ctx;
HXDLIN( 921)		ctx1->globalAlpha = (ctx1->globalAlpha * this->alpha);
HXLINE( 922)		this->emitTile(ctx,tile);
HXLINE( 923)		ctx->globalAlpha = oldAlpha;
HXLINE( 925)		ctx->inFilterBlend = null();
HXLINE( 926)		ctx->currentBlend = null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,drawFiltered,(void))

void Object_obj::drawRec( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_930_drawRec)
HXLINE( 931)		if (!(this->visible)) {
HXLINE( 931)			return;
            		}
HXLINE( 933)		if (this->posChanged) {
HXLINE( 936)			this->calcAbsPos();
HXLINE( 937)			{
HXLINE( 937)				int _g = 0;
HXDLIN( 937)				::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 937)				while((_g < _g1->length)){
HXLINE( 937)					 ::h2d::Object c = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 937)					_g = (_g + 1);
HXLINE( 938)					c->posChanged = true;
            				}
            			}
HXLINE( 939)			this->posChanged = false;
            		}
HXLINE( 941)		bool _hx_tmp;
HXDLIN( 941)		if (::hx::IsNotNull( this->filter )) {
HXLINE( 941)			_hx_tmp = this->filter->get_enable();
            		}
            		else {
HXLINE( 941)			_hx_tmp = false;
            		}
HXDLIN( 941)		if (_hx_tmp) {
HXLINE( 942)			this->drawFilters(ctx);
            		}
            		else {
HXLINE( 944)			Float old = ctx->globalAlpha;
HXLINE( 945)			 ::h2d::RenderContext ctx1 = ctx;
HXDLIN( 945)			ctx1->globalAlpha = (ctx1->globalAlpha * this->alpha);
HXLINE( 946)			this->drawContent(ctx);
HXLINE( 947)			ctx->globalAlpha = old;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,drawRec,(void))

void Object_obj::drawContent( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_952_drawContent)
HXDLIN( 952)		if (ctx->front2back) {
HXLINE( 953)			int i = this->children->length;
HXLINE( 954)			while(true){
HXLINE( 954)				i = (i - 1);
HXDLIN( 954)				if (!(((i + 1) > 0))) {
HXLINE( 954)					goto _hx_goto_53;
            				}
HXDLIN( 954)				this->children->__get(i).StaticCast<  ::h2d::Object >()->drawRec(ctx);
            			}
            			_hx_goto_53:;
HXLINE( 955)			this->draw(ctx);
            		}
            		else {
HXLINE( 957)			this->draw(ctx);
HXLINE( 958)			{
HXLINE( 958)				int _g = 0;
HXDLIN( 958)				::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 958)				while((_g < _g1->length)){
HXLINE( 958)					 ::h2d::Object c = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 958)					_g = (_g + 1);
HXDLIN( 958)					c->drawRec(ctx);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,drawContent,(void))

Float Object_obj::set_x(Float v){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_962_set_x)
HXLINE( 963)		this->posChanged = true;
HXLINE( 964)		return (this->x = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_x,return )

Float Object_obj::set_y(Float v){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_967_set_y)
HXLINE( 968)		this->posChanged = true;
HXLINE( 969)		return (this->y = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_y,return )

Float Object_obj::set_scaleX(Float v){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_972_set_scaleX)
HXLINE( 973)		this->posChanged = true;
HXLINE( 974)		return (this->scaleX = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_scaleX,return )

Float Object_obj::set_scaleY(Float v){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_977_set_scaleY)
HXLINE( 978)		this->posChanged = true;
HXLINE( 979)		return (this->scaleY = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_scaleY,return )

Float Object_obj::set_rotation(Float v){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_982_set_rotation)
HXLINE( 983)		this->posChanged = true;
HXLINE( 984)		return (this->rotation = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_rotation,return )

void Object_obj::move(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_990_move)
HXLINE( 991)		{
HXLINE( 991)			Float v = (this->x + (dx * ::Math_obj::cos(this->rotation)));
HXDLIN( 991)			this->posChanged = true;
HXDLIN( 991)			this->x = v;
            		}
HXLINE( 992)		{
HXLINE( 992)			Float v1 = (this->y + (dy * ::Math_obj::sin(this->rotation)));
HXDLIN( 992)			this->posChanged = true;
HXDLIN( 992)			this->y = v1;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,move,(void))

void Object_obj::setPosition(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_998_setPosition)
HXLINE( 999)		{
HXLINE( 999)			this->posChanged = true;
HXDLIN( 999)			this->x = x;
            		}
HXLINE(1000)		{
HXLINE(1000)			this->posChanged = true;
HXDLIN(1000)			this->y = y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,setPosition,(void))

void Object_obj::rotate(Float v){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_1007_rotate)
HXDLIN(1007)		this->posChanged = true;
HXDLIN(1007)		this->rotation = (this->rotation + v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,rotate,(void))

void Object_obj::scale(Float v){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_1013_scale)
HXLINE(1014)		{
HXLINE(1014)			this->posChanged = true;
HXDLIN(1014)			this->scaleX = (this->scaleX * v);
            		}
HXLINE(1015)		{
HXLINE(1015)			this->posChanged = true;
HXDLIN(1015)			this->scaleY = (this->scaleY * v);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,scale,(void))

void Object_obj::setScale(Float v){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_1021_setScale)
HXLINE(1022)		{
HXLINE(1022)			this->posChanged = true;
HXDLIN(1022)			this->scaleX = v;
            		}
HXLINE(1023)		{
HXLINE(1023)			this->posChanged = true;
HXDLIN(1023)			this->scaleY = v;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,setScale,(void))

 ::h2d::Object Object_obj::getChildAt(int n){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_1030_getChildAt)
HXDLIN(1030)		return this->children->__get(n).StaticCast<  ::h2d::Object >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getChildAt,return )

int Object_obj::getChildIndex( ::h2d::Object o){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_1036_getChildIndex)
HXLINE(1037)		{
HXLINE(1037)			int _g = 0;
HXDLIN(1037)			int _g1 = this->children->length;
HXDLIN(1037)			while((_g < _g1)){
HXLINE(1037)				_g = (_g + 1);
HXDLIN(1037)				int i = (_g - 1);
HXLINE(1038)				if (::hx::IsInstanceEq( this->children->__get(i).StaticCast<  ::h2d::Object >(),o )) {
HXLINE(1039)					return i;
            				}
            			}
            		}
HXLINE(1040)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getChildIndex,return )

 ::h2d::Object Object_obj::getObjectByName(::String name){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_1046_getObjectByName)
HXLINE(1047)		if ((this->name == name)) {
HXLINE(1048)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(1049)		{
HXLINE(1049)			int _g = 0;
HXDLIN(1049)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN(1049)			while((_g < _g1->length)){
HXLINE(1049)				 ::h2d::Object c = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN(1049)				_g = (_g + 1);
HXLINE(1050)				 ::h2d::Object o = c->getObjectByName(name);
HXLINE(1051)				if (::hx::IsNotNull( o )) {
HXLINE(1051)					return o;
            				}
            			}
            		}
HXLINE(1053)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getObjectByName,return )

int Object_obj::get_numChildren(){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_1057_get_numChildren)
HXDLIN(1057)		return this->children->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_numChildren,return )

 ::hxd::impl::ArrayIterator_h2d_Object Object_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_b3484cc6f232f485_1064_iterator)
HXDLIN(1064)		return  ::hxd::impl::ArrayIterator_h2d_Object_obj::__alloc( HX_CTX ,this->children);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,iterator,return )

::String Object_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_1068_toString)
HXLINE(1069)		::String c = ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)));
HXLINE(1070)		if (::hx::IsNull( this->name )) {
HXLINE(1070)			return c;
            		}
            		else {
HXLINE(1070)			return (((this->name + HX_("(",28,00,00,00)) + c) + HX_(")",29,00,00,00));
            		}
HXDLIN(1070)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,toString,return )

void Object_obj::contentChanged( ::h2d::Object s){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_1082_contentChanged)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,contentChanged,(void))

void Object_obj::constraintSize(Float maxWidth,Float maxHeight){
            	HX_STACKFRAME(&_hx_pos_b3484cc6f232f485_1095_constraintSize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,constraintSize,(void))

 ::h2d::Drawable Object_obj::nullDrawable;


::hx::ObjectPtr< Object_obj > Object_obj::__new( ::h2d::Object parent) {
	::hx::ObjectPtr< Object_obj > __this = new Object_obj();
	__this->__construct(parent);
	return __this;
}

::hx::ObjectPtr< Object_obj > Object_obj::__alloc(::hx::Ctx *_hx_ctx, ::h2d::Object parent) {
	Object_obj *__this = (Object_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Object_obj), true, "h2d.Object"));
	*(void **)__this = Object_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

Object_obj::Object_obj()
{
}

void Object_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object);
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(parentContainer,"parentContainer");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(matA,"matA");
	HX_MARK_MEMBER_NAME(matB,"matB");
	HX_MARK_MEMBER_NAME(matC,"matC");
	HX_MARK_MEMBER_NAME(matD,"matD");
	HX_MARK_MEMBER_NAME(absX,"absX");
	HX_MARK_MEMBER_NAME(absY,"absY");
	HX_MARK_MEMBER_NAME(posChanged,"posChanged");
	HX_MARK_MEMBER_NAME(allocated,"allocated");
	HX_MARK_MEMBER_NAME(lastFrame,"lastFrame");
	HX_MARK_END_CLASS();
}

void Object_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(parentContainer,"parentContainer");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(matA,"matA");
	HX_VISIT_MEMBER_NAME(matB,"matB");
	HX_VISIT_MEMBER_NAME(matC,"matC");
	HX_VISIT_MEMBER_NAME(matD,"matD");
	HX_VISIT_MEMBER_NAME(absX,"absX");
	HX_VISIT_MEMBER_NAME(absY,"absY");
	HX_VISIT_MEMBER_NAME(posChanged,"posChanged");
	HX_VISIT_MEMBER_NAME(allocated,"allocated");
	HX_VISIT_MEMBER_NAME(lastFrame,"lastFrame");
}

::hx::Val Object_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"matA") ) { return ::hx::Val( matA ); }
		if (HX_FIELD_EQ(inName,"matB") ) { return ::hx::Val( matB ); }
		if (HX_FIELD_EQ(inName,"matC") ) { return ::hx::Val( matC ); }
		if (HX_FIELD_EQ(inName,"matD") ) { return ::hx::Val( matD ); }
		if (HX_FIELD_EQ(inName,"absX") ) { return ::hx::Val( absX ); }
		if (HX_FIELD_EQ(inName,"absY") ) { return ::hx::Val( absY ); }
		if (HX_FIELD_EQ(inName,"find") ) { return ::hx::Val( find_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		if (HX_FIELD_EQ(inName,"move") ) { return ::hx::Val( move_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"onAdd") ) { return ::hx::Val( onAdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return ::hx::Val( scaleX ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return ::hx::Val( scaleY ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTo") ) { return ::hx::Val( drawTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return ::hx::Val( visible ); }
		if (HX_FIELD_EQ(inName,"getSize") ) { return ::hx::Val( getSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"findAll") ) { return ::hx::Val( findAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"syncPos") ) { return ::hx::Val( syncPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawRec") ) { return ::hx::Val( drawRec_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return ::hx::Val( children ); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return ::hx::Val( rotation ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"getScene") ) { return ::hx::Val( getScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove_dyn() ); }
		if (HX_FIELD_EQ(inName,"emitTile") ) { return ::hx::Val( emitTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return ::hx::Val( setScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return ::hx::Val( blendMode ); }
		if (HX_FIELD_EQ(inName,"allocated") ) { return ::hx::Val( allocated ); }
		if (HX_FIELD_EQ(inName,"lastFrame") ) { return ::hx::Val( lastFrame ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAbsPos") ) { return ::hx::Val( getAbsPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"addBounds") ) { return ::hx::Val( addBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return ::hx::Val( getMatrix_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"posChanged") ) { return ::hx::Val( posChanged ); }
		if (HX_FIELD_EQ(inName,"set_filter") ) { return ::hx::Val( set_filter_dyn() ); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return ::hx::Val( addChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcAbsPos") ) { return ::hx::Val( calcAbsPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"clipBounds") ) { return ::hx::Val( clipBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return ::hx::Val( getChildAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numChildren() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawFilters") ) { return ::hx::Val( drawFilters_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawContent") ) { return ::hx::Val( drawContent_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBoundsRec") ) { return ::hx::Val( getBoundsRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawFiltered") ) { return ::hx::Val( drawFiltered_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return ::hx::Val( set_rotation_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return ::hx::Val( localToGlobal_dyn() ); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return ::hx::Val( globalToLocal_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return ::hx::Val( getChildIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return ::hx::Val( removeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawToTextures") ) { return ::hx::Val( drawToTextures_dyn() ); }
		if (HX_FIELD_EQ(inName,"contentChanged") ) { return ::hx::Val( contentChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"constraintSize") ) { return ::hx::Val( constraintSize_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parentContainer") ) { return ::hx::Val( parentContainer ); }
		if (HX_FIELD_EQ(inName,"getObjectsCount") ) { return ::hx::Val( getObjectsCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"getObjectByName") ) { return ::hx::Val( getObjectByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return ::hx::Val( get_numChildren_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onContentChanged") ) { return ::hx::Val( onContentChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"onHierarchyMoved") ) { return ::hx::Val( onHierarchyMoved_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setParentContainer") ) { return ::hx::Val( setParentContainer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Object_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"nullDrawable") ) { outValue = ( nullDrawable ); return true; }
	}
	return false;
}

::hx::Val Object_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matA") ) { matA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matB") ) { matB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matC") ) { matC=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matD") ) { matD=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"absX") ) { absX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"absY") ) { absY=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::h2d::Object >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleX(inValue.Cast< Float >()) );scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleY(inValue.Cast< Float >()) );scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filter(inValue.Cast<  ::h2d::filter::Filter >()) );filter=inValue.Cast<  ::h2d::filter::Filter >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visible(inValue.Cast< bool >()) );visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rotation(inValue.Cast< Float >()) );rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast<  ::h2d::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allocated") ) { allocated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastFrame") ) { lastFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"posChanged") ) { posChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parentContainer") ) { parentContainer=inValue.Cast<  ::h2d::Object >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Object_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"nullDrawable") ) { nullDrawable=ioValue.Cast<  ::h2d::Drawable >(); return true; }
	}
	return false;
}

void Object_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("children",3f,19,6a,70));
	outFields->push(HX_("parentContainer",b7,5a,97,d4));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("numChildren",a5,69,80,5c));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("rotation",3e,3d,86,08));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("filter",b8,1f,35,85));
	outFields->push(HX_("blendMode",54,e4,37,0c));
	outFields->push(HX_("matA",a1,41,56,48));
	outFields->push(HX_("matB",a2,41,56,48));
	outFields->push(HX_("matC",a3,41,56,48));
	outFields->push(HX_("matD",a4,41,56,48));
	outFields->push(HX_("absX",a6,73,68,40));
	outFields->push(HX_("absY",a7,73,68,40));
	outFields->push(HX_("posChanged",c0,15,08,e3));
	outFields->push(HX_("allocated",07,93,8d,3c));
	outFields->push(HX_("lastFrame",f7,a5,30,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Object_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Object_obj,children),HX_("children",3f,19,6a,70)},
	{::hx::fsObject /*  ::h2d::Object */ ,(int)offsetof(Object_obj,parentContainer),HX_("parentContainer",b7,5a,97,d4)},
	{::hx::fsObject /*  ::h2d::Object */ ,(int)offsetof(Object_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsString,(int)offsetof(Object_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsFloat,(int)offsetof(Object_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Object_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Object_obj,scaleX),HX_("scaleX",8e,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(Object_obj,scaleY),HX_("scaleY",8f,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(Object_obj,rotation),HX_("rotation",3e,3d,86,08)},
	{::hx::fsBool,(int)offsetof(Object_obj,visible),HX_("visible",72,78,24,a3)},
	{::hx::fsFloat,(int)offsetof(Object_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsObject /*  ::h2d::filter::Filter */ ,(int)offsetof(Object_obj,filter),HX_("filter",b8,1f,35,85)},
	{::hx::fsObject /*  ::h2d::BlendMode */ ,(int)offsetof(Object_obj,blendMode),HX_("blendMode",54,e4,37,0c)},
	{::hx::fsFloat,(int)offsetof(Object_obj,matA),HX_("matA",a1,41,56,48)},
	{::hx::fsFloat,(int)offsetof(Object_obj,matB),HX_("matB",a2,41,56,48)},
	{::hx::fsFloat,(int)offsetof(Object_obj,matC),HX_("matC",a3,41,56,48)},
	{::hx::fsFloat,(int)offsetof(Object_obj,matD),HX_("matD",a4,41,56,48)},
	{::hx::fsFloat,(int)offsetof(Object_obj,absX),HX_("absX",a6,73,68,40)},
	{::hx::fsFloat,(int)offsetof(Object_obj,absY),HX_("absY",a7,73,68,40)},
	{::hx::fsBool,(int)offsetof(Object_obj,posChanged),HX_("posChanged",c0,15,08,e3)},
	{::hx::fsBool,(int)offsetof(Object_obj,allocated),HX_("allocated",07,93,8d,3c)},
	{::hx::fsInt,(int)offsetof(Object_obj,lastFrame),HX_("lastFrame",f7,a5,30,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Object_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::h2d::Drawable */ ,(void *) &Object_obj::nullDrawable,HX_("nullDrawable",45,a5,d5,86)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Object_obj_sMemberFields[] = {
	HX_("children",3f,19,6a,70),
	HX_("parentContainer",b7,5a,97,d4),
	HX_("parent",2a,05,7e,ed),
	HX_("name",4b,72,ff,48),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("scaleX",8e,ea,25,3c),
	HX_("scaleY",8f,ea,25,3c),
	HX_("rotation",3e,3d,86,08),
	HX_("visible",72,78,24,a3),
	HX_("alpha",5e,a7,96,21),
	HX_("filter",b8,1f,35,85),
	HX_("blendMode",54,e4,37,0c),
	HX_("matA",a1,41,56,48),
	HX_("matB",a2,41,56,48),
	HX_("matC",a3,41,56,48),
	HX_("matD",a4,41,56,48),
	HX_("absX",a6,73,68,40),
	HX_("absY",a7,73,68,40),
	HX_("posChanged",c0,15,08,e3),
	HX_("allocated",07,93,8d,3c),
	HX_("lastFrame",f7,a5,30,53),
	HX_("getBounds",ab,0f,74,e2),
	HX_("getSize",77,50,d6,1e),
	HX_("getAbsPos",78,01,7a,fe),
	HX_("contains",1f,5a,7b,2c),
	HX_("find",39,d0,bb,43),
	HX_("findAll",68,0a,65,25),
	HX_("set_filter",f5,2d,3a,79),
	HX_("getBoundsRec",65,5e,85,79),
	HX_("addBounds",76,bb,41,1e),
	HX_("getObjectsCount",11,21,fb,a0),
	HX_("localToGlobal",c9,41,eb,47),
	HX_("globalToLocal",cd,4e,ae,6b),
	HX_("getScene",d6,e8,a8,d8),
	HX_("set_visible",95,df,8b,33),
	HX_("addChild",bb,cf,16,bf),
	HX_("addChildAt",8e,ad,36,ce),
	HX_("onContentChanged",3a,62,f3,3e),
	HX_("onHierarchyMoved",fd,db,f9,e1),
	HX_("onAdd",42,86,61,32),
	HX_("onRemove",c3,92,35,e4),
	HX_("getMatrix",77,bf,1e,38),
	HX_("removeChild",b8,86,ed,43),
	HX_("setParentContainer",35,2d,0c,64),
	HX_("removeChildren",a3,55,c0,3a),
	HX_("remove",44,9c,88,04),
	HX_("drawTo",9f,7e,d6,df),
	HX_("drawToTextures",f7,68,f5,ba),
	HX_("draw",04,2c,70,42),
	HX_("sync",5b,ba,5f,4c),
	HX_("syncPos",f9,05,14,a7),
	HX_("calcAbsPos",b7,22,12,37),
	HX_("emitTile",21,bb,54,43),
	HX_("clipBounds",65,65,6b,9c),
	HX_("drawFilters",17,e6,8e,52),
	HX_("drawFiltered",3b,62,7a,ea),
	HX_("drawRec",ac,bf,d6,fb),
	HX_("drawContent",95,d1,bf,62),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("set_rotation",bb,14,99,d2),
	HX_("move",11,e3,60,48),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("rotate",5b,46,20,cb),
	HX_("scale",8a,ce,ce,78),
	HX_("setScale",88,37,03,87),
	HX_("getChildAt",b9,07,0e,b6),
	HX_("getChildIndex",0c,68,02,b9),
	HX_("getObjectByName",97,8d,42,0b),
	HX_("get_numChildren",3c,21,62,1d),
	HX_("iterator",ee,49,9a,93),
	HX_("toString",ac,d0,6e,38),
	HX_("contentChanged",bb,54,9d,32),
	HX_("constraintSize",be,bf,3c,74),
	::String(null()) };

static void Object_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object_obj::nullDrawable,"nullDrawable");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Object_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object_obj::nullDrawable,"nullDrawable");
};

#endif

::hx::Class Object_obj::__mClass;

static ::String Object_obj_sStaticFields[] = {
	HX_("nullDrawable",45,a5,d5,86),
	::String(null())
};

void Object_obj::__register()
{
	Object_obj _hx_dummy;
	Object_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Object",73,12,cb,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Object_obj::__GetStatic;
	__mClass->mSetStaticField = &Object_obj::__SetStatic;
	__mClass->mMarkFunc = Object_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Object_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Object_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Object_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Object_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Object_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Object_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
