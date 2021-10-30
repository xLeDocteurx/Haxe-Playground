#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_Mask
#include <h2d/Mask.h>
#endif
#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
#ifndef INCLUDED_h2d_RenderContext
#include <h2d/RenderContext.h>
#endif
#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0e3efc957dfa0197_11_new,"h2d.Mask","new",0x9121b092,"h2d.Mask.new","h2d/Mask.hx",11,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_97_scrollTo,"h2d.Mask","scrollTo",0xe3132976,"h2d.Mask.scrollTo","h2d/Mask.hx",97,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_105_scrollBy,"h2d.Mask","scrollBy",0xe31319d2,"h2d.Mask.scrollBy","h2d/Mask.hx",105,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_110_onHierarchyMoved,"h2d.Mask","onHierarchyMoved",0xc3da448b,"h2d.Mask.onHierarchyMoved","h2d/Mask.hx",110,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_116_onAdd,"h2d.Mask","onAdd",0xfa8d56f4,"h2d.Mask.onAdd","h2d/Mask.hx",116,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_121_updateMask,"h2d.Mask","updateMask",0x239395a3,"h2d.Mask.updateMask","h2d/Mask.hx",121,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_134_set_scrollX,"h2d.Mask","set_scrollX",0xd613fd00,"h2d.Mask.set_scrollX","h2d/Mask.hx",134,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_140_set_scrollY,"h2d.Mask","set_scrollY",0xd613fd01,"h2d.Mask.set_scrollY","h2d/Mask.hx",140,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_147_calcAbsPos,"h2d.Mask","calcAbsPos",0x599a8cc5,"h2d.Mask.calcAbsPos","h2d/Mask.hx",147,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_153_getBoundsRec,"h2d.Mask","getBoundsRec",0x9e86e7f3,"h2d.Mask.getBoundsRec","h2d/Mask.hx",153,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_175_drawRec,"h2d.Mask","drawRec",0x031da0de,"h2d.Mask.drawRec","h2d/Mask.hx",175,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_24_maskWith,"h2d.Mask","maskWith",0x4396f3a0,"h2d.Mask.maskWith","h2d/Mask.hx",24,0x97fb793d)
HX_LOCAL_STACK_FRAME(_hx_pos_0e3efc957dfa0197_55_unmask,"h2d.Mask","unmask",0xc45612d3,"h2d.Mask.unmask","h2d/Mask.hx",55,0x97fb793d)
namespace h2d{

void Mask_obj::__construct(int width,int height, ::h2d::Object parent){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_11_new)
HXLINE(  75)		this->scrollY = ((Float)0);
HXLINE(  71)		this->scrollX = ((Float)0);
HXLINE(  89)		super::__construct(parent);
HXLINE(  90)		this->width = width;
HXLINE(  91)		this->height = height;
            	}

Dynamic Mask_obj::__CreateEmpty() { return new Mask_obj; }

void *Mask_obj::_hx_vtable = 0;

Dynamic Mask_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mask_obj > _hx_result = new Mask_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Mask_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0af28419) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0af28419;
	} else {
		return inClassId==(int)0x57799d02;
	}
}

void Mask_obj::scrollTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_97_scrollTo)
HXLINE(  98)		this->set_scrollX(x);
HXLINE(  99)		this->set_scrollY(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Mask_obj,scrollTo,(void))

void Mask_obj::scrollBy(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_105_scrollBy)
HXLINE( 106)		this->set_scrollX((this->scrollX + x));
HXLINE( 107)		this->set_scrollY((this->scrollY + y));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Mask_obj,scrollBy,(void))

void Mask_obj::onHierarchyMoved(bool parentChanged){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_110_onHierarchyMoved)
HXLINE( 111)		this->super::onHierarchyMoved(parentChanged);
HXLINE( 112)		if (parentChanged) {
HXLINE( 113)			this->updateMask();
            		}
            	}


void Mask_obj::onAdd(){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_116_onAdd)
HXLINE( 117)		this->super::onAdd();
HXLINE( 118)		this->updateMask();
            	}


void Mask_obj::updateMask(){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_121_updateMask)
HXLINE( 122)		this->parentMask = null();
HXLINE( 123)		 ::h2d::Object p = this->parent;
HXLINE( 124)		while(::hx::IsNotNull( p )){
HXLINE( 125)			 ::h2d::Mask m = ( ( ::h2d::Mask)(::Std_obj::downcast(p,::hx::ClassOf< ::h2d::Mask >())) );
HXLINE( 126)			if (::hx::IsNotNull( m )) {
HXLINE( 127)				this->parentMask = m;
HXLINE( 128)				goto _hx_goto_5;
            			}
HXLINE( 130)			p = p->parent;
            		}
            		_hx_goto_5:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mask_obj,updateMask,(void))

Float Mask_obj::set_scrollX(Float v){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_134_set_scrollX)
HXLINE( 135)		if (::hx::IsNotNull( this->scrollBounds )) {
HXLINE( 135)			Float min = this->scrollBounds->xMin;
HXDLIN( 135)			Float max = (this->scrollBounds->xMax - ( (Float)(this->width) ));
HXDLIN( 135)			if ((v < min)) {
HXLINE( 135)				v = min;
            			}
            			else {
HXLINE( 135)				if ((v > max)) {
HXLINE( 135)					v = max;
            				}
            			}
            		}
HXLINE( 136)		this->posChanged = true;
HXLINE( 137)		return (this->scrollX = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,set_scrollX,return )

Float Mask_obj::set_scrollY(Float v){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_140_set_scrollY)
HXLINE( 141)		if (::hx::IsNotNull( this->scrollBounds )) {
HXLINE( 141)			Float min = this->scrollBounds->yMin;
HXDLIN( 141)			Float max = (this->scrollBounds->yMax - ( (Float)(this->height) ));
HXDLIN( 141)			if ((v < min)) {
HXLINE( 141)				v = min;
            			}
            			else {
HXLINE( 141)				if ((v > max)) {
HXLINE( 141)					v = max;
            				}
            			}
            		}
HXLINE( 142)		this->posChanged = true;
HXLINE( 143)		return (this->scrollY = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,set_scrollY,return )

void Mask_obj::calcAbsPos(){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_147_calcAbsPos)
HXLINE( 148)		this->super::calcAbsPos();
HXLINE( 149)		 ::h2d::Mask _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 149)		_hx_tmp->absX = (_hx_tmp->absX - this->scrollX);
HXLINE( 150)		 ::h2d::Mask _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 150)		_hx_tmp1->absY = (_hx_tmp1->absY - this->scrollY);
            	}


void Mask_obj::getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_153_getBoundsRec)
HXLINE( 154)		Float xMin = out->xMin;
HXDLIN( 154)		Float yMin = out->yMin;
HXDLIN( 154)		Float xMax = out->xMax;
HXDLIN( 154)		Float yMax = out->yMax;
HXLINE( 155)		{
HXLINE( 155)			out->xMin = ((Float)1e20);
HXDLIN( 155)			out->yMin = ((Float)1e20);
HXDLIN( 155)			out->xMax = ((Float)-1e20);
HXDLIN( 155)			out->yMax = ((Float)-1e20);
            		}
HXLINE( 156)		if (this->posChanged) {
HXLINE( 157)			this->calcAbsPos();
HXLINE( 158)			{
HXLINE( 158)				int _g = 0;
HXDLIN( 158)				::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 158)				while((_g < _g1->length)){
HXLINE( 158)					 ::h2d::Object c = _g1->__get(_g).StaticCast<  ::h2d::Object >();
HXDLIN( 158)					_g = (_g + 1);
HXLINE( 159)					c->posChanged = true;
            				}
            			}
HXLINE( 160)			this->posChanged = false;
            		}
HXLINE( 162)		this->addBounds(relativeTo,out,this->scrollX,this->scrollY,( (Float)(this->width) ),( (Float)(this->height) ));
HXLINE( 163)		Float bxMin = out->xMin;
HXDLIN( 163)		Float byMin = out->yMin;
HXDLIN( 163)		Float bxMax = out->xMax;
HXDLIN( 163)		Float byMax = out->yMax;
HXLINE( 164)		out->xMin = xMin;
HXLINE( 165)		out->xMax = xMax;
HXLINE( 166)		out->yMin = yMin;
HXLINE( 167)		out->yMax = yMax;
HXLINE( 168)		this->super::getBoundsRec(relativeTo,out,forSize);
HXLINE( 169)		if ((out->xMin < bxMin)) {
HXLINE( 169)			Float _hx_tmp;
HXDLIN( 169)			if ((xMin > bxMin)) {
HXLINE( 169)				_hx_tmp = bxMin;
            			}
            			else {
HXLINE( 169)				_hx_tmp = xMin;
            			}
HXDLIN( 169)			out->xMin = _hx_tmp;
            		}
HXLINE( 170)		if ((out->yMin < byMin)) {
HXLINE( 170)			Float _hx_tmp;
HXDLIN( 170)			if ((yMin > byMin)) {
HXLINE( 170)				_hx_tmp = byMin;
            			}
            			else {
HXLINE( 170)				_hx_tmp = yMin;
            			}
HXDLIN( 170)			out->yMin = _hx_tmp;
            		}
HXLINE( 171)		if ((out->xMax > bxMax)) {
HXLINE( 171)			Float _hx_tmp;
HXDLIN( 171)			if ((xMax < bxMax)) {
HXLINE( 171)				_hx_tmp = bxMax;
            			}
            			else {
HXLINE( 171)				_hx_tmp = xMax;
            			}
HXDLIN( 171)			out->xMax = _hx_tmp;
            		}
HXLINE( 172)		if ((out->yMax > byMax)) {
HXLINE( 172)			Float _hx_tmp;
HXDLIN( 172)			if ((yMax < byMax)) {
HXLINE( 172)				_hx_tmp = byMax;
            			}
            			else {
HXLINE( 172)				_hx_tmp = yMax;
            			}
HXDLIN( 172)			out->yMax = _hx_tmp;
            		}
            	}


void Mask_obj::drawRec( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_175_drawRec)
HXLINE( 176)		::h2d::Mask_obj::maskWith(ctx,::hx::ObjectPtr<OBJ_>(this),this->width,this->height,this->scrollX,this->scrollY);
HXLINE( 177)		this->super::drawRec(ctx);
HXLINE( 178)		::h2d::Mask_obj::unmask(ctx);
            	}


void Mask_obj::maskWith( ::h2d::RenderContext ctx, ::h2d::Object object,int width,int height,::hx::Null< Float >  __o_scrollX,::hx::Null< Float >  __o_scrollY){
            		Float scrollX = __o_scrollX.Default(0);
            		Float scrollY = __o_scrollY.Default(0);
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_24_maskWith)
HXLINE(  26)		Float x1 = (object->absX + scrollX);
HXLINE(  27)		Float y1 = (object->absY + scrollY);
HXLINE(  29)		Float x2 = (((( (Float)(width) ) * object->matA) + (( (Float)(height) ) * object->matC)) + x1);
HXLINE(  30)		Float y2 = (((( (Float)(width) ) * object->matB) + (( (Float)(height) ) * object->matD)) + y1);
HXLINE(  32)		Float tmp;
HXLINE(  33)		if ((x1 > x2)) {
HXLINE(  34)			tmp = x1;
HXLINE(  35)			x1 = x2;
HXLINE(  36)			x2 = tmp;
            		}
HXLINE(  39)		if ((y1 > y2)) {
HXLINE(  40)			tmp = y1;
HXLINE(  41)			y1 = y2;
HXLINE(  42)			y2 = tmp;
            		}
HXLINE(  46)		ctx->pushRenderZone(x1,y1,(x2 - x1),(y2 - y1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Mask_obj,maskWith,(void))

void Mask_obj::unmask( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_0e3efc957dfa0197_55_unmask)
HXDLIN(  55)		ctx->popRenderZone();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,unmask,(void))


::hx::ObjectPtr< Mask_obj > Mask_obj::__new(int width,int height, ::h2d::Object parent) {
	::hx::ObjectPtr< Mask_obj > __this = new Mask_obj();
	__this->__construct(width,height,parent);
	return __this;
}

::hx::ObjectPtr< Mask_obj > Mask_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::h2d::Object parent) {
	Mask_obj *__this = (Mask_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mask_obj), true, "h2d.Mask"));
	*(void **)__this = Mask_obj::_hx_vtable;
	__this->__construct(width,height,parent);
	return __this;
}

Mask_obj::Mask_obj()
{
}

void Mask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mask);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(parentMask,"parentMask");
	HX_MARK_MEMBER_NAME(scrollX,"scrollX");
	HX_MARK_MEMBER_NAME(scrollY,"scrollY");
	HX_MARK_MEMBER_NAME(scrollBounds,"scrollBounds");
	 ::h2d::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(parentMask,"parentMask");
	HX_VISIT_MEMBER_NAME(scrollX,"scrollX");
	HX_VISIT_MEMBER_NAME(scrollY,"scrollY");
	HX_VISIT_MEMBER_NAME(scrollBounds,"scrollBounds");
	 ::h2d::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Mask_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"onAdd") ) { return ::hx::Val( onAdd_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollX") ) { return ::hx::Val( scrollX ); }
		if (HX_FIELD_EQ(inName,"scrollY") ) { return ::hx::Val( scrollY ); }
		if (HX_FIELD_EQ(inName,"drawRec") ) { return ::hx::Val( drawRec_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scrollTo") ) { return ::hx::Val( scrollTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollBy") ) { return ::hx::Val( scrollBy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentMask") ) { return ::hx::Val( parentMask ); }
		if (HX_FIELD_EQ(inName,"updateMask") ) { return ::hx::Val( updateMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcAbsPos") ) { return ::hx::Val( calcAbsPos_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_scrollX") ) { return ::hx::Val( set_scrollX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollY") ) { return ::hx::Val( set_scrollY_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollBounds") ) { return ::hx::Val( scrollBounds ); }
		if (HX_FIELD_EQ(inName,"getBoundsRec") ) { return ::hx::Val( getBoundsRec_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onHierarchyMoved") ) { return ::hx::Val( onHierarchyMoved_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Mask_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"unmask") ) { outValue = unmask_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maskWith") ) { outValue = maskWith_dyn(); return true; }
	}
	return false;
}

::hx::Val Mask_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollX(inValue.Cast< Float >()) );scrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollY(inValue.Cast< Float >()) );scrollY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentMask") ) { parentMask=inValue.Cast<  ::h2d::Mask >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollBounds") ) { scrollBounds=inValue.Cast<  ::h2d::col::Bounds >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("parentMask",36,4f,68,e7));
	outFields->push(HX_("scrollX",ab,33,d8,30));
	outFields->push(HX_("scrollY",ac,33,d8,30));
	outFields->push(HX_("scrollBounds",62,da,df,bd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Mask_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Mask_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(Mask_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::h2d::Mask */ ,(int)offsetof(Mask_obj,parentMask),HX_("parentMask",36,4f,68,e7)},
	{::hx::fsFloat,(int)offsetof(Mask_obj,scrollX),HX_("scrollX",ab,33,d8,30)},
	{::hx::fsFloat,(int)offsetof(Mask_obj,scrollY),HX_("scrollY",ac,33,d8,30)},
	{::hx::fsObject /*  ::h2d::col::Bounds */ ,(int)offsetof(Mask_obj,scrollBounds),HX_("scrollBounds",62,da,df,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Mask_obj_sStaticStorageInfo = 0;
#endif

static ::String Mask_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("parentMask",36,4f,68,e7),
	HX_("scrollX",ab,33,d8,30),
	HX_("scrollY",ac,33,d8,30),
	HX_("scrollBounds",62,da,df,bd),
	HX_("scrollTo",e8,fe,54,8c),
	HX_("scrollBy",44,ef,54,8c),
	HX_("onHierarchyMoved",fd,db,f9,e1),
	HX_("onAdd",42,86,61,32),
	HX_("updateMask",95,2b,0b,01),
	HX_("set_scrollX",ce,9a,3f,c1),
	HX_("set_scrollY",cf,9a,3f,c1),
	HX_("calcAbsPos",b7,22,12,37),
	HX_("getBoundsRec",65,5e,85,79),
	HX_("drawRec",ac,bf,d6,fb),
	::String(null()) };

::hx::Class Mask_obj::__mClass;

static ::String Mask_obj_sStaticFields[] = {
	HX_("maskWith",12,c9,d8,ec),
	HX_("unmask",c5,47,2b,66),
	::String(null())
};

void Mask_obj::__register()
{
	Mask_obj _hx_dummy;
	Mask_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Mask",a0,bf,fd,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mask_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Mask_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Mask_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Mask_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mask_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mask_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
