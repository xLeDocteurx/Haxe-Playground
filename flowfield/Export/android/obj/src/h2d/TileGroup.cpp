#include <hxcpp.h>

#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
#ifndef INCLUDED_h2d_RenderContext
#include <h2d/RenderContext.h>
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
#ifndef INCLUDED_h2d_impl_BatchDrawState
#include <h2d/impl/BatchDrawState.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_064730ba3db3ecd1_581_new,"h2d.TileGroup","new",0xc25fa96f,"h2d.TileGroup.new","h2d/TileGroup.hx",581,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_589_getBoundsRec,"h2d.TileGroup","getBoundsRec",0x02136b76,"h2d.TileGroup.getBoundsRec","h2d/TileGroup.hx",589,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_598_clear,"h2d.TileGroup","clear",0x87daec5c,"h2d.TileGroup.clear","h2d/TileGroup.hx",598,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_607_invalidate,"h2d.TileGroup","invalidate",0x0930104c,"h2d.TileGroup.invalidate","h2d/TileGroup.hx",607,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_614_count,"h2d.TileGroup","count",0x89e2bf9e,"h2d.TileGroup.count","h2d/TileGroup.hx",614,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_617_onRemove,"h2d.TileGroup","onRemove",0x4af18354,"h2d.TileGroup.onRemove","h2d/TileGroup.hx",617,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_625_setDefaultColor,"h2d.TileGroup","setDefaultColor",0x85a23333,"h2d.TileGroup.setDefaultColor","h2d/TileGroup.hx",625,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_639_add,"h2d.TileGroup","add",0xc255cb30,"h2d.TileGroup.add","h2d/TileGroup.hx",639,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_653_addColor,"h2d.TileGroup","addColor",0x2a758813,"h2d.TileGroup.addColor","h2d/TileGroup.hx",653,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_664_addAlpha,"h2d.TileGroup","addAlpha",0x01afbe0e,"h2d.TileGroup.addAlpha","h2d/TileGroup.hx",664,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_677_addTransform,"h2d.TileGroup","addTransform",0xcd755c1c,"h2d.TileGroup.addTransform","h2d/TileGroup.hx",677,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_681_draw,"h2d.TileGroup","draw",0x4ac24015,"h2d.TileGroup.draw","h2d/TileGroup.hx",681,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_684_sync,"h2d.TileGroup","sync",0x54b1ce6c,"h2d.TileGroup.sync","h2d/TileGroup.hx",684,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_064730ba3db3ecd1_703_drawWith,"h2d.TileGroup","drawWith",0xca1e10bb,"h2d.TileGroup.drawWith","h2d/TileGroup.hx",703,0x10ab1662)
namespace h2d{

void TileGroup_obj::__construct( ::h2d::Tile t, ::h2d::Object parent){
            	HX_GC_STACKFRAME(&_hx_pos_064730ba3db3ecd1_581_new)
HXLINE( 582)		super::__construct(parent);
HXLINE( 583)		this->tile = t;
HXLINE( 584)		this->rangeMin = (this->rangeMax = -1);
HXLINE( 585)		this->curColor =  ::h3d::Vector_obj::__alloc( HX_CTX ,1,1,1,1);
HXLINE( 586)		this->content =  ::h2d::TileLayerContent_obj::__alloc( HX_CTX );
            	}

Dynamic TileGroup_obj::__CreateEmpty() { return new TileGroup_obj; }

void *TileGroup_obj::_hx_vtable = 0;

Dynamic TileGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TileGroup_obj > _hx_result = new TileGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TileGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f972dbf) {
		if (inClassId<=(int)0x0af28419) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0af28419;
		} else {
			return inClassId==(int)0x1f972dbf;
		}
	} else {
		return inClassId==(int)0x6c6b2aec;
	}
}

void TileGroup_obj::getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_589_getBoundsRec)
HXLINE( 590)		this->super::getBoundsRec(relativeTo,out,forSize);
HXLINE( 591)		this->addBounds(relativeTo,out,this->content->xMin,this->content->yMin,(this->content->xMax - this->content->xMin),(this->content->yMax - this->content->yMin));
            	}


void TileGroup_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_598_clear)
HXDLIN( 598)		this->content->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TileGroup_obj,clear,(void))

void TileGroup_obj::invalidate(){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_607_invalidate)
HXDLIN( 607)		this->content->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TileGroup_obj,invalidate,(void))

int TileGroup_obj::count(){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_614_count)
HXDLIN( 614)		return (this->content->triCount() >> 1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TileGroup_obj,count,return )

void TileGroup_obj::onRemove(){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_617_onRemove)
HXLINE( 618)		this->content->dispose();
HXLINE( 619)		this->super::onRemove();
            	}


void TileGroup_obj::setDefaultColor(int rgb,::hx::Null< Float >  __o_alpha){
            		Float alpha = __o_alpha.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_625_setDefaultColor)
HXLINE( 626)		this->curColor->x = (( (Float)(((rgb >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE( 627)		this->curColor->y = (( (Float)(((rgb >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE( 628)		this->curColor->z = (( (Float)((rgb & 255)) ) / ( (Float)(255) ));
HXLINE( 629)		this->curColor->w = alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileGroup_obj,setDefaultColor,(void))

void TileGroup_obj::add(Float x,Float y, ::h2d::Tile t){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_639_add)
HXDLIN( 639)		this->content->add(x,y,this->curColor->x,this->curColor->y,this->curColor->z,this->curColor->w,t);
            	}


HX_DEFINE_DYNAMIC_FUNC3(TileGroup_obj,add,(void))

void TileGroup_obj::addColor(Float x,Float y,Float r,Float g,Float b,Float a, ::h2d::Tile t){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_653_addColor)
HXDLIN( 653)		this->content->add(x,y,r,g,b,a,t);
            	}


HX_DEFINE_DYNAMIC_FUNC7(TileGroup_obj,addColor,(void))

void TileGroup_obj::addAlpha(Float x,Float y,Float a, ::h2d::Tile t){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_664_addAlpha)
HXDLIN( 664)		this->content->add(x,y,this->curColor->x,this->curColor->y,this->curColor->z,a,t);
            	}


HX_DEFINE_DYNAMIC_FUNC4(TileGroup_obj,addAlpha,(void))

void TileGroup_obj::addTransform(Float x,Float y,Float sx,Float sy,Float r, ::h2d::Tile t){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_677_addTransform)
HXDLIN( 677)		this->content->addTransform(x,y,sx,sy,r,this->curColor,t);
            	}


HX_DEFINE_DYNAMIC_FUNC6(TileGroup_obj,addTransform,(void))

void TileGroup_obj::draw( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_681_draw)
HXDLIN( 681)		this->drawWith(ctx,::hx::ObjectPtr<OBJ_>(this));
            	}


void TileGroup_obj::sync( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_684_sync)
HXLINE( 685)		this->super::sync(ctx);
HXLINE( 689)		if (this->visible) {
HXLINE( 689)			 ::h2d::TileLayerContent _this = this->content;
HXDLIN( 689)			bool _hx_tmp;
HXDLIN( 689)			if (::hx::IsNotNull( _this->buffer )) {
HXLINE( 689)				 ::h3d::Buffer _this1 = _this->buffer;
HXDLIN( 689)				if (::hx::IsNotNull( _this1->buffer )) {
HXLINE( 689)					_hx_tmp = ::hx::IsNull( _this1->buffer->vbuf );
            				}
            				else {
HXLINE( 689)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 689)				_hx_tmp = true;
            			}
HXDLIN( 689)			if (_hx_tmp) {
HXLINE( 689)				_this->alloc(::h3d::Engine_obj::CURRENT);
            			}
            		}
            	}


void TileGroup_obj::drawWith( ::h2d::RenderContext ctx, ::h2d::Drawable obj){
            	HX_STACKFRAME(&_hx_pos_064730ba3db3ecd1_703_drawWith)
HXLINE( 704)		int max = this->content->triCount();
HXLINE( 705)		if ((max == 0)) {
HXLINE( 706)			return;
            		}
HXLINE( 707)		if (!(ctx->beginDrawBatchState(obj))) {
HXLINE( 707)			return;
            		}
HXLINE( 708)		int min;
HXDLIN( 708)		if ((this->rangeMin < 0)) {
HXLINE( 708)			min = 0;
            		}
            		else {
HXLINE( 708)			min = (this->rangeMin * 2);
            		}
HXLINE( 709)		bool _hx_tmp;
HXDLIN( 709)		if ((this->rangeMax > 0)) {
HXLINE( 709)			_hx_tmp = (this->rangeMax < (max * 2));
            		}
            		else {
HXLINE( 709)			_hx_tmp = false;
            		}
HXDLIN( 709)		if (_hx_tmp) {
HXLINE( 709)			max = (this->rangeMax * 2);
            		}
HXLINE( 710)		{
HXLINE( 710)			 ::h2d::TileLayerContent _this = this->content;
HXDLIN( 710)			bool _hx_tmp1;
HXDLIN( 710)			if (::hx::IsNotNull( _this->buffer )) {
HXLINE( 710)				 ::h3d::Buffer _this1 = _this->buffer;
HXDLIN( 710)				if (::hx::IsNotNull( _this1->buffer )) {
HXLINE( 710)					_hx_tmp1 = ::hx::IsNull( _this1->buffer->vbuf );
            				}
            				else {
HXLINE( 710)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 710)				_hx_tmp1 = true;
            			}
HXDLIN( 710)			if (_hx_tmp1) {
HXLINE( 710)				_this->alloc(::h3d::Engine_obj::CURRENT);
            			}
HXDLIN( 710)			_this->state->drawQuads(ctx,_this->buffer,min,(max - min));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileGroup_obj,drawWith,(void))


::hx::ObjectPtr< TileGroup_obj > TileGroup_obj::__new( ::h2d::Tile t, ::h2d::Object parent) {
	::hx::ObjectPtr< TileGroup_obj > __this = new TileGroup_obj();
	__this->__construct(t,parent);
	return __this;
}

::hx::ObjectPtr< TileGroup_obj > TileGroup_obj::__alloc(::hx::Ctx *_hx_ctx, ::h2d::Tile t, ::h2d::Object parent) {
	TileGroup_obj *__this = (TileGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TileGroup_obj), true, "h2d.TileGroup"));
	*(void **)__this = TileGroup_obj::_hx_vtable;
	__this->__construct(t,parent);
	return __this;
}

TileGroup_obj::TileGroup_obj()
{
}

void TileGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileGroup);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(curColor,"curColor");
	HX_MARK_MEMBER_NAME(tile,"tile");
	HX_MARK_MEMBER_NAME(rangeMin,"rangeMin");
	HX_MARK_MEMBER_NAME(rangeMax,"rangeMax");
	 ::h2d::Drawable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(curColor,"curColor");
	HX_VISIT_MEMBER_NAME(tile,"tile");
	HX_VISIT_MEMBER_NAME(rangeMin,"rangeMin");
	HX_VISIT_MEMBER_NAME(rangeMax,"rangeMax");
	 ::h2d::Drawable_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TileGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { return ::hx::Val( tile ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"count") ) { return ::hx::Val( count_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return ::hx::Val( content ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curColor") ) { return ::hx::Val( curColor ); }
		if (HX_FIELD_EQ(inName,"rangeMin") ) { return ::hx::Val( rangeMin ); }
		if (HX_FIELD_EQ(inName,"rangeMax") ) { return ::hx::Val( rangeMax ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove_dyn() ); }
		if (HX_FIELD_EQ(inName,"addColor") ) { return ::hx::Val( addColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAlpha") ) { return ::hx::Val( addAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawWith") ) { return ::hx::Val( drawWith_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return ::hx::Val( invalidate_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBoundsRec") ) { return ::hx::Val( getBoundsRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"addTransform") ) { return ::hx::Val( addTransform_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setDefaultColor") ) { return ::hx::Val( setDefaultColor_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TileGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { tile=inValue.Cast<  ::h2d::Tile >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast<  ::h2d::TileLayerContent >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curColor") ) { curColor=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeMin") ) { rangeMin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeMax") ) { rangeMax=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("content",39,8d,77,19));
	outFields->push(HX_("curColor",c3,6b,0a,92));
	outFields->push(HX_("tile",2e,cb,fc,4c));
	outFields->push(HX_("rangeMin",d5,97,9d,c6));
	outFields->push(HX_("rangeMax",e7,90,9d,c6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TileGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h2d::TileLayerContent */ ,(int)offsetof(TileGroup_obj,content),HX_("content",39,8d,77,19)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(TileGroup_obj,curColor),HX_("curColor",c3,6b,0a,92)},
	{::hx::fsObject /*  ::h2d::Tile */ ,(int)offsetof(TileGroup_obj,tile),HX_("tile",2e,cb,fc,4c)},
	{::hx::fsInt,(int)offsetof(TileGroup_obj,rangeMin),HX_("rangeMin",d5,97,9d,c6)},
	{::hx::fsInt,(int)offsetof(TileGroup_obj,rangeMax),HX_("rangeMax",e7,90,9d,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TileGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String TileGroup_obj_sMemberFields[] = {
	HX_("content",39,8d,77,19),
	HX_("curColor",c3,6b,0a,92),
	HX_("tile",2e,cb,fc,4c),
	HX_("rangeMin",d5,97,9d,c6),
	HX_("rangeMax",e7,90,9d,c6),
	HX_("getBoundsRec",65,5e,85,79),
	HX_("clear",8d,71,5b,48),
	HX_("invalidate",7b,19,2a,87),
	HX_("count",cf,44,63,4a),
	HX_("onRemove",c3,92,35,e4),
	HX_("setDefaultColor",a4,7f,6d,1e),
	HX_("add",21,f2,49,00),
	HX_("addColor",82,97,b9,c3),
	HX_("addAlpha",7d,cd,f3,9a),
	HX_("addTransform",0b,4f,e7,44),
	HX_("draw",04,2c,70,42),
	HX_("sync",5b,ba,5f,4c),
	HX_("drawWith",2a,20,62,63),
	::String(null()) };

::hx::Class TileGroup_obj::__mClass;

void TileGroup_obj::__register()
{
	TileGroup_obj _hx_dummy;
	TileGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.TileGroup",fd,c5,fc,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TileGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TileGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TileGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TileGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
