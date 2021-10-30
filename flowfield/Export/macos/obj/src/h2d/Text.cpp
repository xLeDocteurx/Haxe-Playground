#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_Align
#include <h2d/Align.h>
#endif
#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
#ifndef INCLUDED_h2d_Font
#include <h2d/Font.h>
#endif
#ifndef INCLUDED_h2d_FontChar
#include <h2d/FontChar.h>
#endif
#ifndef INCLUDED_h2d_FontType
#include <h2d/FontType.h>
#endif
#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
#ifndef INCLUDED_h2d_RenderContext
#include <h2d/RenderContext.h>
#endif
#ifndef INCLUDED_h2d_Text
#include <h2d/Text.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h2d_TileGroup
#include <h2d/TileGroup.h>
#endif
#ifndef INCLUDED_h2d_TileLayerContent
#include <h2d/TileLayerContent.h>
#endif
#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_h3d_shader_SignedDistanceField
#include <h3d/shader/SignedDistanceField.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxd_Charset
#include <hxd/Charset.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_118c64f89d56fbd9_60_new,"h2d.Text","new",0xf63cb0d3,"h2d.Text.new","h2d/Text.hx",60,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_141_set_font,"h2d.Text","set_font",0xfece1179,"h2d.Text.set_font","h2d/Text.hx",141,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_168_set_textAlign,"h2d.Text","set_textAlign",0xaa93aaee,"h2d.Text.set_textAlign","h2d/Text.hx",168,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_175_set_letterSpacing,"h2d.Text","set_letterSpacing",0xb39b3e53,"h2d.Text.set_letterSpacing","h2d/Text.hx",175,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_182_set_lineSpacing,"h2d.Text","set_lineSpacing",0x81ed5f85,"h2d.Text.set_lineSpacing","h2d/Text.hx",182,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_189_constraintSize,"h2d.Text","constraintSize",0x003e1e2b,"h2d.Text.constraintSize","h2d/Text.hx",189,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_194_onAdd,"h2d.Text","onAdd",0x1c99a975,"h2d.Text.onAdd","h2d/Text.hx",194,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_200_checkText,"h2d.Text","checkText",0x6acece48,"h2d.Text.checkText","h2d/Text.hx",200,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_208_sync,"h2d.Text","sync",0x823b3e88,"h2d.Text.sync","h2d/Text.hx",208,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_214_draw,"h2d.Text","draw",0x784bb031,"h2d.Text.draw","h2d/Text.hx",214,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_240_set_text,"h2d.Text","set_text",0x08078057,"h2d.Text.set_text","h2d/Text.hx",240,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_256_validateText,"h2d.Text","validateText",0x3868c590,"h2d.Text.validateText","h2d/Text.hx",256,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_259_rebuild,"h2d.Text","rebuild",0xa472c48e,"h2d.Text.rebuild","h2d/Text.hx",259,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_269_calcTextWidth,"h2d.Text","calcTextWidth",0x8c68e0f7,"h2d.Text.calcTextWidth","h2d/Text.hx",269,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_290_splitText,"h2d.Text","splitText",0x1b4e915a,"h2d.Text.splitText","h2d/Text.hx",290,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_304_splitRawText,"h2d.Text","splitRawText",0xe8068828,"h2d.Text.splitRawText","h2d/Text.hx",304,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_379_getTextProgress,"h2d.Text","getTextProgress",0xd2c20c23,"h2d.Text.getTextProgress","h2d/Text.hx",379,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_384_initGlyphs,"h2d.Text","initGlyphs",0x9f3ab864,"h2d.Text.initGlyphs","h2d/Text.hx",384,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_447_updateSize,"h2d.Text","updateSize",0xf1a4ef57,"h2d.Text.updateSize","h2d/Text.hx",447,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_452_get_textHeight,"h2d.Text","get_textHeight",0x3b336f2a,"h2d.Text.get_textHeight","h2d/Text.hx",452,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_457_get_textWidth,"h2d.Text","get_textWidth",0x0e5f2823,"h2d.Text.get_textWidth","h2d/Text.hx",457,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_462_set_maxWidth,"h2d.Text","set_maxWidth",0xd601d96c,"h2d.Text.set_maxWidth","h2d/Text.hx",462,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_469_updateConstraint,"h2d.Text","updateConstraint",0x3a9f6373,"h2d.Text.updateConstraint","h2d/Text.hx",469,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_481_set_textColor,"h2d.Text","set_textColor",0xd35ec58c,"h2d.Text.set_textColor","h2d/Text.hx",481,0x3b72fc1c)
HX_LOCAL_STACK_FRAME(_hx_pos_118c64f89d56fbd9_490_getBoundsRec,"h2d.Text","getBoundsRec",0x10f45792,"h2d.Text.getBoundsRec","h2d/Text.hx",490,0x3b72fc1c)
namespace h2d{

void Text_obj::__construct( ::h2d::Font font, ::h2d::Object parent){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_60_new)
HXLINE( 123)		this->realMaxWidth = ((Float)-1);
HXLINE( 122)		this->constraintWidth = ((Float)-1);
HXLINE( 109)		this->lineSpacing = ((Float)0);
HXLINE( 105)		this->letterSpacing = ((Float)0);
HXLINE( 133)		super::__construct(parent);
HXLINE( 134)		this->set_font(font);
HXLINE( 135)		this->set_textAlign(::h2d::Align_obj::Left_dyn());
HXLINE( 136)		this->set_text(HX_("",00,00,00,00));
HXLINE( 137)		this->currentText = HX_("",00,00,00,00);
HXLINE( 138)		this->set_textColor(16777215);
            	}

Dynamic Text_obj::__CreateEmpty() { return new Text_obj; }

void *Text_obj::_hx_vtable = 0;

Dynamic Text_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Text_obj > _hx_result = new Text_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Text_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5c1d28c3) {
		if (inClassId<=(int)0x0af28419) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0af28419;
		} else {
			return inClassId==(int)0x5c1d28c3;
		}
	} else {
		return inClassId==(int)0x6c6b2aec;
	}
}

 ::h2d::Font Text_obj::set_font( ::h2d::Font font){
            	HX_GC_STACKFRAME(&_hx_pos_118c64f89d56fbd9_141_set_font)
HXLINE( 142)		if (::hx::IsInstanceEq( this->font,font )) {
HXLINE( 142)			return font;
            		}
HXLINE( 143)		this->font = font;
HXLINE( 144)		if (::hx::IsNotNull( font )) {
HXLINE( 145)			 ::h2d::FontType _g = font->type;
HXDLIN( 145)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 147)					if (::hx::IsNotNull( this->sdfShader )) {
HXLINE( 148)						this->removeShader(this->sdfShader);
HXLINE( 149)						this->sdfShader = null();
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 151)					int channel = _g->_hx_getInt(0);
HXDLIN( 151)					Float alphaCutoff = _g->_hx_getFloat(1);
HXDLIN( 151)					Float smoothing = _g->_hx_getFloat(2);
HXDLIN( 151)					{
HXLINE( 152)						if (::hx::IsNull( this->sdfShader )) {
HXLINE( 153)							this->sdfShader =  ::h3d::shader::SignedDistanceField_obj::__alloc( HX_CTX );
HXLINE( 154)							this->addShader(this->sdfShader);
            						}
HXLINE( 156)						this->sdfShader->alphaCutoff__ = alphaCutoff;
HXLINE( 157)						this->sdfShader->smoothing__ = smoothing;
HXLINE( 158)						{
HXLINE( 158)							 ::h3d::shader::SignedDistanceField _this = this->sdfShader;
HXDLIN( 158)							_this->constModified = true;
HXDLIN( 158)							_this->channel__ = channel;
            						}
            					}
            				}
            				break;
            			}
            		}
HXLINE( 161)		if (::hx::IsNotNull( this->glyphs )) {
HXLINE( 161)			 ::h2d::TileGroup _this = this->glyphs;
HXDLIN( 161)			bool _hx_tmp;
HXDLIN( 161)			if (::hx::IsNotNull( _this )) {
HXLINE( 161)				_hx_tmp = ::hx::IsNotNull( _this->parent );
            			}
            			else {
HXLINE( 161)				_hx_tmp = false;
            			}
HXDLIN( 161)			if (_hx_tmp) {
HXLINE( 161)				_this->parent->removeChild(_this);
            			}
            		}
HXLINE( 162)		 ::h2d::Tile _hx_tmp;
HXDLIN( 162)		if (::hx::IsNull( font )) {
HXLINE( 162)			_hx_tmp = null();
            		}
            		else {
HXLINE( 162)			_hx_tmp = font->tile;
            		}
HXDLIN( 162)		this->glyphs =  ::h2d::TileGroup_obj::__alloc( HX_CTX ,_hx_tmp,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 163)		this->glyphs->set_visible(false);
HXLINE( 164)		this->rebuild();
HXLINE( 165)		return font;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_font,return )

 ::h2d::Align Text_obj::set_textAlign( ::h2d::Align a){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_168_set_textAlign)
HXLINE( 169)		if (::hx::IsPointerEq( this->textAlign,a )) {
HXLINE( 169)			return a;
            		}
HXLINE( 170)		this->textAlign = a;
HXLINE( 171)		this->rebuild();
HXLINE( 172)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_textAlign,return )

Float Text_obj::set_letterSpacing(Float s){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_175_set_letterSpacing)
HXLINE( 176)		if ((this->letterSpacing == s)) {
HXLINE( 176)			return s;
            		}
HXLINE( 177)		this->letterSpacing = s;
HXLINE( 178)		this->rebuild();
HXLINE( 179)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_letterSpacing,return )

Float Text_obj::set_lineSpacing(Float s){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_182_set_lineSpacing)
HXLINE( 183)		if ((this->lineSpacing == s)) {
HXLINE( 183)			return s;
            		}
HXLINE( 184)		this->lineSpacing = s;
HXLINE( 185)		this->rebuild();
HXLINE( 186)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_lineSpacing,return )

void Text_obj::constraintSize(Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_189_constraintSize)
HXLINE( 190)		this->constraintWidth = width;
HXLINE( 191)		this->updateConstraint();
            	}


void Text_obj::onAdd(){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_194_onAdd)
HXLINE( 195)		this->super::onAdd();
HXLINE( 196)		this->rebuild();
            	}


void Text_obj::checkText(){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_200_checkText)
HXDLIN( 200)		bool _hx_tmp;
HXDLIN( 200)		if (this->textChanged) {
HXDLIN( 200)			_hx_tmp = (this->text != this->currentText);
            		}
            		else {
HXDLIN( 200)			_hx_tmp = false;
            		}
HXDLIN( 200)		if (_hx_tmp) {
HXLINE( 201)			this->textChanged = false;
HXLINE( 202)			this->currentText = this->text;
HXLINE( 203)			this->calcDone = false;
HXLINE( 204)			this->needsRebuild = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,checkText,(void))

void Text_obj::sync( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_208_sync)
HXLINE( 209)		this->super::sync(ctx);
HXLINE( 210)		bool _hx_tmp;
HXDLIN( 210)		if (this->textChanged) {
HXLINE( 210)			_hx_tmp = (this->text != this->currentText);
            		}
            		else {
HXLINE( 210)			_hx_tmp = false;
            		}
HXDLIN( 210)		if (_hx_tmp) {
HXLINE( 210)			this->textChanged = false;
HXDLIN( 210)			this->currentText = this->text;
HXDLIN( 210)			this->calcDone = false;
HXDLIN( 210)			this->needsRebuild = true;
            		}
HXLINE( 211)		if (this->needsRebuild) {
HXLINE( 211)			this->initGlyphs(this->currentText,null());
            		}
            	}


void Text_obj::draw( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_214_draw)
HXLINE( 215)		if (::hx::IsNull( this->glyphs )) {
HXLINE( 216)			this->emitTile(ctx,::h2d::Tile_obj::fromColor(16711935,16,16,null()));
HXLINE( 217)			return;
            		}
HXLINE( 219)		bool _hx_tmp;
HXDLIN( 219)		if (this->textChanged) {
HXLINE( 219)			_hx_tmp = (this->text != this->currentText);
            		}
            		else {
HXLINE( 219)			_hx_tmp = false;
            		}
HXDLIN( 219)		if (_hx_tmp) {
HXLINE( 219)			this->textChanged = false;
HXDLIN( 219)			this->currentText = this->text;
HXDLIN( 219)			this->calcDone = false;
HXDLIN( 219)			this->needsRebuild = true;
            		}
HXLINE( 220)		if (this->needsRebuild) {
HXLINE( 220)			this->initGlyphs(this->currentText,null());
            		}
HXLINE( 222)		if (::hx::IsNotNull( this->dropShadow )) {
HXLINE( 223)			Float oldX = this->absX;
HXDLIN( 223)			Float oldY = this->absY;
HXLINE( 224)			 ::h2d::Text _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)			_hx_tmp->absX = (_hx_tmp->absX + ((( (Float)(this->dropShadow->__Field(HX_("dx",94,57,00,00),::hx::paccDynamic)) ) * this->matA) + (( (Float)(this->dropShadow->__Field(HX_("dy",95,57,00,00),::hx::paccDynamic)) ) * this->matC)));
HXLINE( 225)			 ::h2d::Text _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)			_hx_tmp1->absY = (_hx_tmp1->absY + ((( (Float)(this->dropShadow->__Field(HX_("dx",94,57,00,00),::hx::paccDynamic)) ) * this->matB) + (( (Float)(this->dropShadow->__Field(HX_("dy",95,57,00,00),::hx::paccDynamic)) ) * this->matD)));
HXLINE( 226)			Float oldR = this->color->x;
HXLINE( 227)			Float oldG = this->color->y;
HXLINE( 228)			Float oldB = this->color->z;
HXLINE( 229)			Float oldA = this->color->w;
HXLINE( 230)			{
HXLINE( 230)				 ::h3d::Vector _this = this->color;
HXDLIN( 230)				int c = ( (int)(this->dropShadow->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic)) );
HXDLIN( 230)				_this->x = (( (Float)(((c >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN( 230)				_this->y = (( (Float)(((c >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN( 230)				_this->z = (( (Float)((c & 255)) ) / ( (Float)(255) ));
HXDLIN( 230)				_this->w = (( (Float)(::hx::UShr(c,24)) ) / ( (Float)(255) ));
            			}
HXLINE( 231)			this->color->w = (( (Float)(this->dropShadow->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic)) ) * oldA);
HXLINE( 232)			this->glyphs->drawWith(ctx,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 233)			this->absX = oldX;
HXLINE( 234)			this->absY = oldY;
HXLINE( 235)			{
HXLINE( 235)				 ::h3d::Vector _this1 = this->color;
HXDLIN( 235)				_this1->x = oldR;
HXDLIN( 235)				_this1->y = oldG;
HXDLIN( 235)				_this1->z = oldB;
HXDLIN( 235)				_this1->w = oldA;
            			}
            		}
HXLINE( 237)		this->glyphs->drawWith(ctx,::hx::ObjectPtr<OBJ_>(this));
            	}


::String Text_obj::set_text(::String t){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_240_set_text)
HXLINE( 241)		::String t1;
HXDLIN( 241)		if (::hx::IsNull( t )) {
HXLINE( 241)			t1 = HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE( 241)			t1 = t;
            		}
HXLINE( 242)		if ((t1 == this->text)) {
HXLINE( 242)			return t1;
            		}
HXLINE( 243)		this->text = t1;
HXLINE( 244)		this->textChanged = true;
HXLINE( 245)		this->validateText();
HXLINE( 246)		if (::hx::IsNotNull( this->parentContainer )) {
HXLINE( 246)			this->parentContainer->contentChanged(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 247)		return t1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_text,return )

void Text_obj::validateText(){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_256_validateText)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,validateText,(void))

void Text_obj::rebuild(){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_259_rebuild)
HXLINE( 260)		this->calcDone = false;
HXLINE( 261)		this->needsRebuild = true;
HXLINE( 262)		if (::hx::IsNotNull( this->parentContainer )) {
HXLINE( 262)			this->parentContainer->contentChanged(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,rebuild,(void))

Float Text_obj::calcTextWidth(::String text){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_269_calcTextWidth)
HXDLIN( 269)		if (this->calcDone) {
HXLINE( 270)			Float ow = this->calcWidth;
HXDLIN( 270)			Float oh = this->calcHeight;
HXDLIN( 270)			Float osh = this->calcSizeHeight;
HXDLIN( 270)			Float ox = this->calcXMin;
HXDLIN( 270)			Float oy = this->calcYMin;
HXLINE( 271)			this->initGlyphs(text,false);
HXLINE( 272)			Float w = this->calcWidth;
HXLINE( 273)			this->calcWidth = ow;
HXLINE( 274)			this->calcHeight = oh;
HXLINE( 275)			this->calcSizeHeight = osh;
HXLINE( 276)			this->calcXMin = ox;
HXLINE( 277)			this->calcYMin = oy;
HXLINE( 278)			return w;
            		}
            		else {
HXLINE( 280)			this->initGlyphs(text,false);
HXLINE( 281)			this->calcDone = false;
HXLINE( 282)			return this->calcWidth;
            		}
HXLINE( 269)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,calcTextWidth,return )

::String Text_obj::splitText(::String text){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_290_splitText)
HXDLIN( 290)		return this->splitRawText(text,0,0,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,splitText,return )

::String Text_obj::splitRawText(::String text,::hx::Null< Float >  __o_leftMargin,::hx::Null< Float >  __o_afterData, ::h2d::Font font,::Array< Float > sizes, ::Dynamic __o_prevChar){
            		Float leftMargin = __o_leftMargin.Default(((Float)0.));
            		Float afterData = __o_afterData.Default(((Float)0.));
            		 ::Dynamic prevChar = __o_prevChar;
            		if (::hx::IsNull(__o_prevChar)) prevChar = -1;
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_304_splitRawText)
HXLINE( 305)		Float maxWidth = this->realMaxWidth;
HXLINE( 306)		if ((maxWidth < 0)) {
HXLINE( 307)			if (::hx::IsNull( sizes )) {
HXLINE( 308)				return text;
            			}
            			else {
HXLINE( 310)				maxWidth = ::Math_obj::POSITIVE_INFINITY;
            			}
            		}
HXLINE( 312)		if (::hx::IsNull( font )) {
HXLINE( 312)			font = this->font;
            		}
HXLINE( 313)		::Array< ::String > lines = ::Array_obj< ::String >::__new(0);
HXDLIN( 313)		int restPos = 0;
HXLINE( 314)		Float x = leftMargin;
HXLINE( 315)		{
HXLINE( 315)			int _g = 0;
HXDLIN( 315)			int _g1 = text.length;
HXDLIN( 315)			while((_g < _g1)){
HXLINE( 315)				_g = (_g + 1);
HXDLIN( 315)				int i = (_g - 1);
HXLINE( 316)				 ::Dynamic cc = text.charCodeAt(i);
HXLINE( 317)				int code = ( (int)(cc) );
HXDLIN( 317)				 ::h2d::FontChar c = ( ( ::h2d::FontChar)(font->glyphs->get(code)) );
HXDLIN( 317)				if (::hx::IsNull( c )) {
HXLINE( 317)					c = font->charset->resolveChar(code,font->glyphs).StaticCast<  ::h2d::FontChar >();
HXDLIN( 317)					if (::hx::IsNull( c )) {
HXLINE( 317)						bool c1;
HXDLIN( 317)						if ((code != 13)) {
HXLINE( 317)							c1 = (code == 10);
            						}
            						else {
HXLINE( 317)							c1 = true;
            						}
HXDLIN( 317)						if (c1) {
HXLINE( 317)							c = font->nullChar;
            						}
            						else {
HXLINE( 317)							c = font->defaultChar;
            						}
            					}
            				}
HXDLIN( 317)				 ::h2d::FontChar e = c;
HXLINE( 318)				bool newline = ::hx::IsEq( cc,10 );
HXLINE( 319)				Float e1 = e->width;
HXDLIN( 319)				Float esize = (e1 + e->getKerningOffset(( (int)(prevChar) )));
HXLINE( 320)				 ::Dynamic nc = text.charCodeAt((i + 1));
HXLINE( 321)				bool _hx_tmp;
HXDLIN( 321)				if (font->charset->isBreakChar(( (int)(cc) ))) {
HXLINE( 321)					if (::hx::IsNotNull( nc )) {
HXLINE( 321)						_hx_tmp = !(font->charset->isComplementChar(( (int)(nc) )));
            					}
            					else {
HXLINE( 321)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 321)					_hx_tmp = false;
            				}
HXDLIN( 321)				if (_hx_tmp) {
HXLINE( 322)					bool _hx_tmp;
HXDLIN( 322)					bool _hx_tmp1;
HXDLIN( 322)					if ((lines->length == 0)) {
HXLINE( 322)						_hx_tmp1 = (leftMargin > 0);
            					}
            					else {
HXLINE( 322)						_hx_tmp1 = false;
            					}
HXDLIN( 322)					if (_hx_tmp1) {
HXLINE( 322)						_hx_tmp = (x > maxWidth);
            					}
            					else {
HXLINE( 322)						_hx_tmp = false;
            					}
HXDLIN( 322)					if (_hx_tmp) {
HXLINE( 323)						lines->push(HX_("",00,00,00,00));
HXLINE( 324)						if (::hx::IsNotNull( sizes )) {
HXLINE( 324)							sizes->push(leftMargin);
            						}
HXLINE( 325)						x = (x - leftMargin);
            					}
HXLINE( 327)					Float size = ((x + esize) + this->letterSpacing);
HXLINE( 328)					int k = (i + 1);
HXDLIN( 328)					int max = text.length;
HXLINE( 329)					 ::Dynamic prevChar1 = prevChar;
HXLINE( 330)					bool breakFound = false;
HXLINE( 331)					while(true){
HXLINE( 331)						bool _hx_tmp;
HXDLIN( 331)						if ((size <= maxWidth)) {
HXLINE( 331)							_hx_tmp = (k < max);
            						}
            						else {
HXLINE( 331)							_hx_tmp = false;
            						}
HXDLIN( 331)						if (!(_hx_tmp)) {
HXLINE( 331)							goto _hx_goto_16;
            						}
HXLINE( 332)						k = (k + 1);
HXDLIN( 332)						 ::Dynamic cc = text.charCodeAt((k - 1));
HXLINE( 333)						bool _hx_tmp1;
HXDLIN( 333)						if (!(font->charset->isSpace(( (int)(cc) )))) {
HXLINE( 333)							_hx_tmp1 = ::hx::IsEq( cc,10 );
            						}
            						else {
HXLINE( 333)							_hx_tmp1 = true;
            						}
HXDLIN( 333)						if (_hx_tmp1) {
HXLINE( 334)							breakFound = true;
HXLINE( 335)							goto _hx_goto_16;
            						}
HXLINE( 337)						int code = ( (int)(cc) );
HXDLIN( 337)						 ::h2d::FontChar c = ( ( ::h2d::FontChar)(font->glyphs->get(code)) );
HXDLIN( 337)						if (::hx::IsNull( c )) {
HXLINE( 337)							c = font->charset->resolveChar(code,font->glyphs).StaticCast<  ::h2d::FontChar >();
HXDLIN( 337)							if (::hx::IsNull( c )) {
HXLINE( 337)								bool c1;
HXDLIN( 337)								if ((code != 13)) {
HXLINE( 337)									c1 = (code == 10);
            								}
            								else {
HXLINE( 337)									c1 = true;
            								}
HXDLIN( 337)								if (c1) {
HXLINE( 337)									c = font->nullChar;
            								}
            								else {
HXLINE( 337)									c = font->defaultChar;
            								}
            							}
            						}
HXDLIN( 337)						 ::h2d::FontChar e = c;
HXLINE( 338)						Float size1 = (e->width + this->letterSpacing);
HXDLIN( 338)						size = (size + (size1 + e->getKerningOffset(( (int)(prevChar1) ))));
HXLINE( 339)						prevChar1 = cc;
HXLINE( 340)						 ::Dynamic nc = text.charCodeAt((k + 1));
HXLINE( 341)						bool _hx_tmp2;
HXDLIN( 341)						if (font->charset->isBreakChar(( (int)(cc) ))) {
HXLINE( 341)							if (::hx::IsNotNull( nc )) {
HXLINE( 341)								_hx_tmp2 = !(font->charset->isComplementChar(( (int)(nc) )));
            							}
            							else {
HXLINE( 341)								_hx_tmp2 = true;
            							}
            						}
            						else {
HXLINE( 341)							_hx_tmp2 = false;
            						}
HXDLIN( 341)						if (_hx_tmp2) {
HXLINE( 341)							goto _hx_goto_16;
            						}
            					}
            					_hx_goto_16:;
HXLINE( 343)					bool _hx_tmp2;
HXDLIN( 343)					if (!((size > maxWidth))) {
HXLINE( 343)						if (!(breakFound)) {
HXLINE( 343)							_hx_tmp2 = ((size + afterData) > maxWidth);
            						}
            						else {
HXLINE( 343)							_hx_tmp2 = false;
            						}
            					}
            					else {
HXLINE( 343)						_hx_tmp2 = true;
            					}
HXDLIN( 343)					if (_hx_tmp2) {
HXLINE( 344)						newline = true;
HXLINE( 345)						if (font->charset->isSpace(( (int)(cc) ))) {
HXLINE( 346)							lines->push(text.substr(restPos,(i - restPos)));
HXLINE( 347)							e = null();
            						}
            						else {
HXLINE( 349)							lines->push(text.substr(restPos,((i + 1) - restPos)));
            						}
HXLINE( 351)						restPos = (i + 1);
            					}
            				}
HXLINE( 354)				bool _hx_tmp1;
HXDLIN( 354)				if (::hx::IsNotNull( e )) {
HXLINE( 354)					_hx_tmp1 = ::hx::IsNotEq( cc,10 );
            				}
            				else {
HXLINE( 354)					_hx_tmp1 = false;
            				}
HXDLIN( 354)				if (_hx_tmp1) {
HXLINE( 355)					x = (x + (esize + this->letterSpacing));
            				}
HXLINE( 356)				if (newline) {
HXLINE( 357)					if (::hx::IsNotNull( sizes )) {
HXLINE( 357)						sizes->push(x);
            					}
HXLINE( 358)					x = ( (Float)(0) );
HXLINE( 359)					prevChar = -1;
            				}
            				else {
HXLINE( 361)					prevChar = cc;
            				}
            			}
            		}
HXLINE( 363)		if ((restPos < text.length)) {
HXLINE( 364)			bool _hx_tmp;
HXDLIN( 364)			bool _hx_tmp1;
HXDLIN( 364)			if ((lines->length == 0)) {
HXLINE( 364)				_hx_tmp1 = (leftMargin > 0);
            			}
            			else {
HXLINE( 364)				_hx_tmp1 = false;
            			}
HXDLIN( 364)			if (_hx_tmp1) {
HXLINE( 364)				_hx_tmp = (((x + afterData) - this->letterSpacing) > maxWidth);
            			}
            			else {
HXLINE( 364)				_hx_tmp = false;
            			}
HXDLIN( 364)			if (_hx_tmp) {
HXLINE( 365)				lines->push(HX_("",00,00,00,00));
HXLINE( 366)				if (::hx::IsNotNull( sizes )) {
HXLINE( 366)					sizes->push(leftMargin);
            				}
HXLINE( 367)				x = (x - leftMargin);
            			}
HXLINE( 369)			lines->push(text.substr(restPos,(text.length - restPos)));
HXLINE( 370)			if (::hx::IsNotNull( sizes )) {
HXLINE( 370)				sizes->push(x);
            			}
            		}
HXLINE( 372)		return lines->join(HX_("\n",0a,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC6(Text_obj,splitRawText,return )

::String Text_obj::getTextProgress(::String text,Float progress){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_379_getTextProgress)
HXLINE( 380)		if ((progress >= text.length)) {
HXLINE( 380)			return text;
            		}
HXLINE( 381)		return text.substr(0,::Std_obj::_hx_int(progress));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Text_obj,getTextProgress,return )

void Text_obj::initGlyphs(::String text,::hx::Null< bool >  __o_rebuild){
            		bool rebuild = __o_rebuild.Default(true);
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_384_initGlyphs)
HXLINE( 385)		if (rebuild) {
HXLINE( 385)			this->glyphs->clear();
            		}
HXLINE( 386)		Float x = ((Float)0.);
HXDLIN( 386)		Float y = ((Float)0.);
HXDLIN( 386)		Float xMax = ((Float)0.);
HXDLIN( 386)		Float xMin = ((Float)0.);
HXDLIN( 386)		Float yMin = ((Float)0.);
HXDLIN( 386)		int prevChar = -1;
HXDLIN( 386)		int linei = 0;
HXLINE( 387)		 ::h2d::Align align = this->textAlign;
HXLINE( 388)		::Array< Float > lines = ::Array_obj< Float >::__new();
HXLINE( 389)		Float dl = (this->font->lineHeight + this->lineSpacing);
HXLINE( 390)		::String t = this->splitRawText(text,0,0,null(),lines,null());
HXLINE( 392)		{
HXLINE( 392)			int _g = 0;
HXDLIN( 392)			while((_g < lines->length)){
HXLINE( 392)				Float lw = lines->__get(_g);
HXDLIN( 392)				_g = (_g + 1);
HXLINE( 393)				if ((lw > x)) {
HXLINE( 393)					x = lw;
            				}
            			}
            		}
HXLINE( 395)		this->calcWidth = x;
HXLINE( 397)		switch((int)(align->_hx_getIndex())){
            			case (int)0: {
HXLINE( 406)				x = ( (Float)(0) );
            			}
            			break;
            			case (int)1: case (int)2: case (int)3: case (int)4: {
HXLINE( 399)				int max;
HXDLIN( 399)				bool max1;
HXDLIN( 399)				if (::hx::IsPointerNotEq( align,::h2d::Align_obj::MultilineCenter_dyn() )) {
HXLINE( 399)					max1 = ::hx::IsPointerEq( align,::h2d::Align_obj::MultilineRight_dyn() );
            				}
            				else {
HXLINE( 399)					max1 = true;
            				}
HXDLIN( 399)				if (max1) {
HXLINE( 399)					max = ::Math_obj::ceil(this->calcWidth);
            				}
            				else {
HXLINE( 399)					if ((this->realMaxWidth < 0)) {
HXLINE( 399)						max = 0;
            					}
            					else {
HXLINE( 399)						max = ::Math_obj::ceil(this->realMaxWidth);
            					}
            				}
HXLINE( 400)				Float k;
HXDLIN( 400)				bool k1;
HXDLIN( 400)				if (::hx::IsPointerNotEq( align,::h2d::Align_obj::Center_dyn() )) {
HXLINE( 400)					k1 = ::hx::IsPointerEq( align,::h2d::Align_obj::MultilineCenter_dyn() );
            				}
            				else {
HXLINE( 400)					k1 = true;
            				}
HXDLIN( 400)				if (k1) {
HXLINE( 400)					k = ((Float)0.5);
            				}
            				else {
HXLINE( 400)					k = ( (Float)(1) );
            				}
HXLINE( 401)				{
HXLINE( 401)					int _g = 0;
HXDLIN( 401)					int _g1 = lines->length;
HXDLIN( 401)					while((_g < _g1)){
HXLINE( 401)						_g = (_g + 1);
HXDLIN( 401)						int i = (_g - 1);
HXLINE( 402)						lines[i] = ::Math_obj::ffloor(((( (Float)(max) ) - lines->__get(i)) * k));
            					}
            				}
HXLINE( 403)				x = lines->__get(0);
HXLINE( 404)				xMin = x;
            			}
            			break;
            		}
HXLINE( 409)		{
HXLINE( 409)			int _g1 = 0;
HXDLIN( 409)			int _g2 = t.length;
HXDLIN( 409)			while((_g1 < _g2)){
HXLINE( 409)				_g1 = (_g1 + 1);
HXDLIN( 409)				int i = (_g1 - 1);
HXLINE( 410)				 ::Dynamic cc = t.charCodeAt(i);
HXLINE( 411)				 ::h2d::Font _this = this->font;
HXDLIN( 411)				int code = ( (int)(cc) );
HXDLIN( 411)				 ::h2d::FontChar c = ( ( ::h2d::FontChar)(_this->glyphs->get(code)) );
HXDLIN( 411)				if (::hx::IsNull( c )) {
HXLINE( 411)					c = _this->charset->resolveChar(code,_this->glyphs).StaticCast<  ::h2d::FontChar >();
HXDLIN( 411)					if (::hx::IsNull( c )) {
HXLINE( 411)						bool c1;
HXDLIN( 411)						if ((code != 13)) {
HXLINE( 411)							c1 = (code == 10);
            						}
            						else {
HXLINE( 411)							c1 = true;
            						}
HXDLIN( 411)						if (c1) {
HXLINE( 411)							c = _this->nullChar;
            						}
            						else {
HXLINE( 411)							c = _this->defaultChar;
            						}
            					}
            				}
HXDLIN( 411)				 ::h2d::FontChar e = c;
HXLINE( 412)				Float offs = e->getKerningOffset(prevChar);
HXLINE( 413)				Float esize = (e->width + offs);
HXLINE( 416)				if (::hx::IsEq( cc,10 )) {
HXLINE( 417)					if ((x > xMax)) {
HXLINE( 417)						xMax = x;
            					}
HXLINE( 418)					switch((int)(align->_hx_getIndex())){
            						case (int)0: {
HXLINE( 420)							x = ( (Float)(0) );
            						}
            						break;
            						case (int)1: case (int)2: case (int)3: case (int)4: {
HXLINE( 422)							linei = (linei + 1);
HXDLIN( 422)							x = lines->__get(linei);
HXLINE( 423)							if ((x < xMin)) {
HXLINE( 423)								xMin = x;
            							}
            						}
            						break;
            					}
HXLINE( 425)					y = (y + dl);
HXLINE( 426)					prevChar = -1;
            				}
            				else {
HXLINE( 428)					if (::hx::IsNotNull( e )) {
HXLINE( 429)						if (rebuild) {
HXLINE( 429)							 ::h2d::TileGroup _this = this->glyphs;
HXDLIN( 429)							_this->content->add((x + offs),y,_this->curColor->x,_this->curColor->y,_this->curColor->z,_this->curColor->w,e->t);
            						}
HXLINE( 430)						bool _hx_tmp;
HXDLIN( 430)						if ((y == 0)) {
HXLINE( 430)							_hx_tmp = (e->t->dy < yMin);
            						}
            						else {
HXLINE( 430)							_hx_tmp = false;
            						}
HXDLIN( 430)						if (_hx_tmp) {
HXLINE( 430)							yMin = e->t->dy;
            						}
HXLINE( 431)						x = (x + (esize + this->letterSpacing));
            					}
HXLINE( 433)					prevChar = ( (int)(cc) );
            				}
            			}
            		}
HXLINE( 436)		if ((x > xMax)) {
HXLINE( 436)			xMax = x;
            		}
HXLINE( 438)		this->calcXMin = xMin;
HXLINE( 439)		this->calcYMin = yMin;
HXLINE( 440)		this->calcWidth = (xMax - xMin);
HXLINE( 441)		this->calcHeight = (y + this->font->lineHeight);
HXLINE( 442)		Float _hx_tmp;
HXDLIN( 442)		if ((this->font->baseLine > 0)) {
HXLINE( 442)			_hx_tmp = this->font->baseLine;
            		}
            		else {
HXLINE( 442)			_hx_tmp = this->font->lineHeight;
            		}
HXDLIN( 442)		this->calcSizeHeight = (y + _hx_tmp);
HXLINE( 443)		this->calcDone = true;
HXLINE( 444)		if (rebuild) {
HXLINE( 444)			this->needsRebuild = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Text_obj,initGlyphs,(void))

void Text_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_447_updateSize)
HXLINE( 448)		bool _hx_tmp;
HXDLIN( 448)		if (this->textChanged) {
HXLINE( 448)			_hx_tmp = (this->text != this->currentText);
            		}
            		else {
HXLINE( 448)			_hx_tmp = false;
            		}
HXDLIN( 448)		if (_hx_tmp) {
HXLINE( 448)			this->textChanged = false;
HXDLIN( 448)			this->currentText = this->text;
HXDLIN( 448)			this->calcDone = false;
HXDLIN( 448)			this->needsRebuild = true;
            		}
HXLINE( 449)		if (!(this->calcDone)) {
HXLINE( 449)			this->initGlyphs(this->text,this->needsRebuild);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,updateSize,(void))

Float Text_obj::get_textHeight(){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_452_get_textHeight)
HXLINE( 453)		{
HXLINE( 453)			bool _hx_tmp;
HXDLIN( 453)			if (this->textChanged) {
HXLINE( 453)				_hx_tmp = (this->text != this->currentText);
            			}
            			else {
HXLINE( 453)				_hx_tmp = false;
            			}
HXDLIN( 453)			if (_hx_tmp) {
HXLINE( 453)				this->textChanged = false;
HXDLIN( 453)				this->currentText = this->text;
HXDLIN( 453)				this->calcDone = false;
HXDLIN( 453)				this->needsRebuild = true;
            			}
HXDLIN( 453)			if (!(this->calcDone)) {
HXLINE( 453)				this->initGlyphs(this->text,this->needsRebuild);
            			}
            		}
HXLINE( 454)		return this->calcHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_textHeight,return )

Float Text_obj::get_textWidth(){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_457_get_textWidth)
HXLINE( 458)		{
HXLINE( 458)			bool _hx_tmp;
HXDLIN( 458)			if (this->textChanged) {
HXLINE( 458)				_hx_tmp = (this->text != this->currentText);
            			}
            			else {
HXLINE( 458)				_hx_tmp = false;
            			}
HXDLIN( 458)			if (_hx_tmp) {
HXLINE( 458)				this->textChanged = false;
HXDLIN( 458)				this->currentText = this->text;
HXDLIN( 458)				this->calcDone = false;
HXDLIN( 458)				this->needsRebuild = true;
            			}
HXDLIN( 458)			if (!(this->calcDone)) {
HXLINE( 458)				this->initGlyphs(this->text,this->needsRebuild);
            			}
            		}
HXLINE( 459)		return this->calcWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_textWidth,return )

 ::Dynamic Text_obj::set_maxWidth( ::Dynamic w){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_462_set_maxWidth)
HXLINE( 463)		if (::hx::IsEq( this->maxWidth,w )) {
HXLINE( 463)			return w;
            		}
HXLINE( 464)		this->maxWidth = w;
HXLINE( 465)		this->updateConstraint();
HXLINE( 466)		return w;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_maxWidth,return )

void Text_obj::updateConstraint(){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_469_updateConstraint)
HXLINE( 470)		Float old = this->realMaxWidth;
HXLINE( 471)		if (::hx::IsNull( this->maxWidth )) {
HXLINE( 472)			this->realMaxWidth = this->constraintWidth;
            		}
            		else {
HXLINE( 473)			if ((this->constraintWidth < 0)) {
HXLINE( 474)				this->realMaxWidth = ( (Float)(this->maxWidth) );
            			}
            			else {
HXLINE( 476)				Float a = ( (Float)(this->maxWidth) );
HXDLIN( 476)				Float b = this->constraintWidth;
HXDLIN( 476)				Float _hx_tmp;
HXDLIN( 476)				if ((a > b)) {
HXLINE( 476)					_hx_tmp = b;
            				}
            				else {
HXLINE( 476)					_hx_tmp = a;
            				}
HXDLIN( 476)				this->realMaxWidth = _hx_tmp;
            			}
            		}
HXLINE( 477)		if ((this->realMaxWidth != old)) {
HXLINE( 478)			this->rebuild();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,updateConstraint,(void))

int Text_obj::set_textColor(int c){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_481_set_textColor)
HXLINE( 482)		if ((this->textColor == c)) {
HXLINE( 482)			return c;
            		}
HXLINE( 483)		this->textColor = c;
HXLINE( 484)		Float a = this->color->w;
HXLINE( 485)		{
HXLINE( 485)			 ::h3d::Vector _this = this->color;
HXDLIN( 485)			_this->x = (( (Float)(((c >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN( 485)			_this->y = (( (Float)(((c >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN( 485)			_this->z = (( (Float)((c & 255)) ) / ( (Float)(255) ));
HXDLIN( 485)			_this->w = (( (Float)(::hx::UShr(c,24)) ) / ( (Float)(255) ));
            		}
HXLINE( 486)		this->color->w = a;
HXLINE( 487)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_textColor,return )

void Text_obj::getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize){
            	HX_STACKFRAME(&_hx_pos_118c64f89d56fbd9_490_getBoundsRec)
HXLINE( 491)		this->super::getBoundsRec(relativeTo,out,forSize);
HXLINE( 492)		{
HXLINE( 492)			bool _hx_tmp;
HXDLIN( 492)			if (this->textChanged) {
HXLINE( 492)				_hx_tmp = (this->text != this->currentText);
            			}
            			else {
HXLINE( 492)				_hx_tmp = false;
            			}
HXDLIN( 492)			if (_hx_tmp) {
HXLINE( 492)				this->textChanged = false;
HXDLIN( 492)				this->currentText = this->text;
HXDLIN( 492)				this->calcDone = false;
HXDLIN( 492)				this->needsRebuild = true;
            			}
HXDLIN( 492)			if (!(this->calcDone)) {
HXLINE( 492)				this->initGlyphs(this->text,this->needsRebuild);
            			}
            		}
HXLINE( 493)		Float x;
HXDLIN( 493)		Float y;
HXDLIN( 493)		Float w;
HXDLIN( 493)		Float h;
HXLINE( 494)		if (forSize) {
HXLINE( 495)			x = this->calcXMin;
HXLINE( 496)			y = ((Float)0.);
HXLINE( 497)			w = this->calcWidth;
HXLINE( 498)			h = this->calcSizeHeight;
            		}
            		else {
HXLINE( 500)			x = this->calcXMin;
HXLINE( 501)			y = this->calcYMin;
HXLINE( 502)			w = this->calcWidth;
HXLINE( 503)			h = (this->calcHeight - this->calcYMin);
            		}
HXLINE( 505)		this->addBounds(relativeTo,out,x,y,w,h);
            	}



::hx::ObjectPtr< Text_obj > Text_obj::__new( ::h2d::Font font, ::h2d::Object parent) {
	::hx::ObjectPtr< Text_obj > __this = new Text_obj();
	__this->__construct(font,parent);
	return __this;
}

::hx::ObjectPtr< Text_obj > Text_obj::__alloc(::hx::Ctx *_hx_ctx, ::h2d::Font font, ::h2d::Object parent) {
	Text_obj *__this = (Text_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Text_obj), true, "h2d.Text"));
	*(void **)__this = Text_obj::_hx_vtable;
	__this->__construct(font,parent);
	return __this;
}

Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textColor,"textColor");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(dropShadow,"dropShadow");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textAlign,"textAlign");
	HX_MARK_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_MARK_MEMBER_NAME(lineSpacing,"lineSpacing");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(needsRebuild,"needsRebuild");
	HX_MARK_MEMBER_NAME(currentText,"currentText");
	HX_MARK_MEMBER_NAME(textChanged,"textChanged");
	HX_MARK_MEMBER_NAME(calcDone,"calcDone");
	HX_MARK_MEMBER_NAME(calcXMin,"calcXMin");
	HX_MARK_MEMBER_NAME(calcYMin,"calcYMin");
	HX_MARK_MEMBER_NAME(calcWidth,"calcWidth");
	HX_MARK_MEMBER_NAME(calcHeight,"calcHeight");
	HX_MARK_MEMBER_NAME(calcSizeHeight,"calcSizeHeight");
	HX_MARK_MEMBER_NAME(constraintWidth,"constraintWidth");
	HX_MARK_MEMBER_NAME(realMaxWidth,"realMaxWidth");
	HX_MARK_MEMBER_NAME(sdfShader,"sdfShader");
	 ::h2d::Drawable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textColor,"textColor");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(dropShadow,"dropShadow");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textAlign,"textAlign");
	HX_VISIT_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_VISIT_MEMBER_NAME(lineSpacing,"lineSpacing");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(needsRebuild,"needsRebuild");
	HX_VISIT_MEMBER_NAME(currentText,"currentText");
	HX_VISIT_MEMBER_NAME(textChanged,"textChanged");
	HX_VISIT_MEMBER_NAME(calcDone,"calcDone");
	HX_VISIT_MEMBER_NAME(calcXMin,"calcXMin");
	HX_VISIT_MEMBER_NAME(calcYMin,"calcYMin");
	HX_VISIT_MEMBER_NAME(calcWidth,"calcWidth");
	HX_VISIT_MEMBER_NAME(calcHeight,"calcHeight");
	HX_VISIT_MEMBER_NAME(calcSizeHeight,"calcSizeHeight");
	HX_VISIT_MEMBER_NAME(constraintWidth,"constraintWidth");
	HX_VISIT_MEMBER_NAME(realMaxWidth,"realMaxWidth");
	HX_VISIT_MEMBER_NAME(sdfShader,"sdfShader");
	 ::h2d::Drawable_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Text_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return ::hx::Val( font ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onAdd") ) { return ::hx::Val( onAdd_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return ::hx::Val( glyphs ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rebuild") ) { return ::hx::Val( rebuild_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return ::hx::Val( maxWidth ); }
		if (HX_FIELD_EQ(inName,"calcDone") ) { return ::hx::Val( calcDone ); }
		if (HX_FIELD_EQ(inName,"calcXMin") ) { return ::hx::Val( calcXMin ); }
		if (HX_FIELD_EQ(inName,"calcYMin") ) { return ::hx::Val( calcYMin ); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return ::hx::Val( set_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textColor") ) { return ::hx::Val( textColor ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_textWidth() : textWidth ); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return ::hx::Val( textAlign ); }
		if (HX_FIELD_EQ(inName,"calcWidth") ) { return ::hx::Val( calcWidth ); }
		if (HX_FIELD_EQ(inName,"sdfShader") ) { return ::hx::Val( sdfShader ); }
		if (HX_FIELD_EQ(inName,"checkText") ) { return ::hx::Val( checkText_dyn() ); }
		if (HX_FIELD_EQ(inName,"splitText") ) { return ::hx::Val( splitText_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dropShadow") ) { return ::hx::Val( dropShadow ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_textHeight() : textHeight ); }
		if (HX_FIELD_EQ(inName,"calcHeight") ) { return ::hx::Val( calcHeight ); }
		if (HX_FIELD_EQ(inName,"initGlyphs") ) { return ::hx::Val( initGlyphs_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return ::hx::Val( updateSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lineSpacing") ) { return ::hx::Val( lineSpacing ); }
		if (HX_FIELD_EQ(inName,"currentText") ) { return ::hx::Val( currentText ); }
		if (HX_FIELD_EQ(inName,"textChanged") ) { return ::hx::Val( textChanged ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"needsRebuild") ) { return ::hx::Val( needsRebuild ); }
		if (HX_FIELD_EQ(inName,"realMaxWidth") ) { return ::hx::Val( realMaxWidth ); }
		if (HX_FIELD_EQ(inName,"validateText") ) { return ::hx::Val( validateText_dyn() ); }
		if (HX_FIELD_EQ(inName,"splitRawText") ) { return ::hx::Val( splitRawText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxWidth") ) { return ::hx::Val( set_maxWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBoundsRec") ) { return ::hx::Val( getBoundsRec_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return ::hx::Val( letterSpacing ); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return ::hx::Val( set_textAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcTextWidth") ) { return ::hx::Val( calcTextWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return ::hx::Val( get_textWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return ::hx::Val( set_textColor_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"calcSizeHeight") ) { return ::hx::Val( calcSizeHeight ); }
		if (HX_FIELD_EQ(inName,"constraintSize") ) { return ::hx::Val( constraintSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return ::hx::Val( get_textHeight_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"constraintWidth") ) { return ::hx::Val( constraintWidth ); }
		if (HX_FIELD_EQ(inName,"set_lineSpacing") ) { return ::hx::Val( set_lineSpacing_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTextProgress") ) { return ::hx::Val( getTextProgress_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateConstraint") ) { return ::hx::Val( updateConstraint_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_letterSpacing") ) { return ::hx::Val( set_letterSpacing_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Text_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_font(inValue.Cast<  ::h2d::Font >()) );font=inValue.Cast<  ::h2d::Font >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast<  ::h2d::TileGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxWidth(inValue.Cast<  ::Dynamic >()) );maxWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"calcDone") ) { calcDone=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"calcXMin") ) { calcXMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"calcYMin") ) { calcYMin=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textColor(inValue.Cast< int >()) );textColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textAlign(inValue.Cast<  ::h2d::Align >()) );textAlign=inValue.Cast<  ::h2d::Align >(); return inValue; }
		if (HX_FIELD_EQ(inName,"calcWidth") ) { calcWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sdfShader") ) { sdfShader=inValue.Cast<  ::h3d::shader::SignedDistanceField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dropShadow") ) { dropShadow=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"calcHeight") ) { calcHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lineSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lineSpacing(inValue.Cast< Float >()) );lineSpacing=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentText") ) { currentText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textChanged") ) { textChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"needsRebuild") ) { needsRebuild=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realMaxWidth") ) { realMaxWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_letterSpacing(inValue.Cast< Float >()) );letterSpacing=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"calcSizeHeight") ) { calcSizeHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"constraintWidth") ) { constraintWidth=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textColor",76,01,4a,e3));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("dropShadow",6f,41,90,5c));
	outFields->push(HX_("textWidth",19,46,50,63));
	outFields->push(HX_("textHeight",74,88,3c,39));
	outFields->push(HX_("textAlign",d8,e6,7e,ba));
	outFields->push(HX_("letterSpacing",3d,b7,03,f5));
	outFields->push(HX_("lineSpacing",ef,e9,0e,d0));
	outFields->push(HX_("glyphs",47,f9,58,ae));
	outFields->push(HX_("needsRebuild",be,54,2f,7c));
	outFields->push(HX_("currentText",86,a5,8b,85));
	outFields->push(HX_("textChanged",c7,ab,4c,a8));
	outFields->push(HX_("calcDone",b7,a3,a1,3c));
	outFields->push(HX_("calcXMin",2f,17,c0,49));
	outFields->push(HX_("calcYMin",ce,4d,69,4a));
	outFields->push(HX_("calcWidth",31,d1,6b,bd));
	outFields->push(HX_("calcHeight",5c,b2,3a,b7));
	outFields->push(HX_("calcSizeHeight",7d,2c,c8,07));
	outFields->push(HX_("constraintWidth",69,b4,74,8e));
	outFields->push(HX_("realMaxWidth",40,9e,40,47));
	outFields->push(HX_("sdfShader",ba,43,69,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Text_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h2d::Font */ ,(int)offsetof(Text_obj,font),HX_("font",cf,5d,c0,43)},
	{::hx::fsString,(int)offsetof(Text_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsInt,(int)offsetof(Text_obj,textColor),HX_("textColor",76,01,4a,e3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Text_obj,maxWidth),HX_("maxWidth",c2,08,80,74)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Text_obj,dropShadow),HX_("dropShadow",6f,41,90,5c)},
	{::hx::fsFloat,(int)offsetof(Text_obj,textWidth),HX_("textWidth",19,46,50,63)},
	{::hx::fsFloat,(int)offsetof(Text_obj,textHeight),HX_("textHeight",74,88,3c,39)},
	{::hx::fsObject /*  ::h2d::Align */ ,(int)offsetof(Text_obj,textAlign),HX_("textAlign",d8,e6,7e,ba)},
	{::hx::fsFloat,(int)offsetof(Text_obj,letterSpacing),HX_("letterSpacing",3d,b7,03,f5)},
	{::hx::fsFloat,(int)offsetof(Text_obj,lineSpacing),HX_("lineSpacing",ef,e9,0e,d0)},
	{::hx::fsObject /*  ::h2d::TileGroup */ ,(int)offsetof(Text_obj,glyphs),HX_("glyphs",47,f9,58,ae)},
	{::hx::fsBool,(int)offsetof(Text_obj,needsRebuild),HX_("needsRebuild",be,54,2f,7c)},
	{::hx::fsString,(int)offsetof(Text_obj,currentText),HX_("currentText",86,a5,8b,85)},
	{::hx::fsBool,(int)offsetof(Text_obj,textChanged),HX_("textChanged",c7,ab,4c,a8)},
	{::hx::fsBool,(int)offsetof(Text_obj,calcDone),HX_("calcDone",b7,a3,a1,3c)},
	{::hx::fsFloat,(int)offsetof(Text_obj,calcXMin),HX_("calcXMin",2f,17,c0,49)},
	{::hx::fsFloat,(int)offsetof(Text_obj,calcYMin),HX_("calcYMin",ce,4d,69,4a)},
	{::hx::fsFloat,(int)offsetof(Text_obj,calcWidth),HX_("calcWidth",31,d1,6b,bd)},
	{::hx::fsFloat,(int)offsetof(Text_obj,calcHeight),HX_("calcHeight",5c,b2,3a,b7)},
	{::hx::fsFloat,(int)offsetof(Text_obj,calcSizeHeight),HX_("calcSizeHeight",7d,2c,c8,07)},
	{::hx::fsFloat,(int)offsetof(Text_obj,constraintWidth),HX_("constraintWidth",69,b4,74,8e)},
	{::hx::fsFloat,(int)offsetof(Text_obj,realMaxWidth),HX_("realMaxWidth",40,9e,40,47)},
	{::hx::fsObject /*  ::h3d::shader::SignedDistanceField */ ,(int)offsetof(Text_obj,sdfShader),HX_("sdfShader",ba,43,69,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Text_obj_sStaticStorageInfo = 0;
#endif

static ::String Text_obj_sMemberFields[] = {
	HX_("font",cf,5d,c0,43),
	HX_("text",ad,cc,f9,4c),
	HX_("textColor",76,01,4a,e3),
	HX_("maxWidth",c2,08,80,74),
	HX_("dropShadow",6f,41,90,5c),
	HX_("textWidth",19,46,50,63),
	HX_("textHeight",74,88,3c,39),
	HX_("textAlign",d8,e6,7e,ba),
	HX_("letterSpacing",3d,b7,03,f5),
	HX_("lineSpacing",ef,e9,0e,d0),
	HX_("glyphs",47,f9,58,ae),
	HX_("needsRebuild",be,54,2f,7c),
	HX_("currentText",86,a5,8b,85),
	HX_("textChanged",c7,ab,4c,a8),
	HX_("calcDone",b7,a3,a1,3c),
	HX_("calcXMin",2f,17,c0,49),
	HX_("calcYMin",ce,4d,69,4a),
	HX_("calcWidth",31,d1,6b,bd),
	HX_("calcHeight",5c,b2,3a,b7),
	HX_("calcSizeHeight",7d,2c,c8,07),
	HX_("constraintWidth",69,b4,74,8e),
	HX_("realMaxWidth",40,9e,40,47),
	HX_("sdfShader",ba,43,69,fd),
	HX_("set_font",cc,72,d8,71),
	HX_("set_textAlign",bb,9c,e8,c0),
	HX_("set_letterSpacing",a0,9a,e1,1e),
	HX_("set_lineSpacing",92,1e,bc,8c),
	HX_("constraintSize",be,bf,3c,74),
	HX_("onAdd",42,86,61,32),
	HX_("checkText",95,95,d9,a0),
	HX_("sync",5b,ba,5f,4c),
	HX_("draw",04,2c,70,42),
	HX_("set_text",aa,e1,11,7b),
	HX_("validateText",63,cc,f9,a0),
	HX_("rebuild",9b,2e,85,a1),
	HX_("calcTextWidth",c4,d2,bd,a2),
	HX_("splitText",a7,58,59,51),
	HX_("splitRawText",fb,8e,97,50),
	HX_("getTextProgress",30,cb,90,dd),
	HX_("initGlyphs",77,54,9e,b2),
	HX_("updateSize",6a,8b,08,05),
	HX_("get_textHeight",bd,10,32,af),
	HX_("get_textWidth",f0,19,b4,24),
	HX_("set_maxWidth",3f,e0,92,3e),
	HX_("updateConstraint",c6,cf,b7,a4),
	HX_("set_textColor",59,b7,b3,e9),
	HX_("getBoundsRec",65,5e,85,79),
	::String(null()) };

::hx::Class Text_obj::__mClass;

void Text_obj::__register()
{
	Text_obj _hx_dummy;
	Text_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Text",61,4b,a1,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Text_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Text_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Text_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Text_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
