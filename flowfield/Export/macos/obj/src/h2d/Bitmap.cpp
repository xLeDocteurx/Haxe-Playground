#include <hxcpp.h>

#ifndef INCLUDED_h2d_Bitmap
#include <h2d/Bitmap.h>
#endif
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
#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eba10c4bdac7ae55_38_new,"h2d.Bitmap","new",0xa8b15215,"h2d.Bitmap.new","h2d/Bitmap.hx",38,0x3abbbeda)
HX_LOCAL_STACK_FRAME(_hx_pos_eba10c4bdac7ae55_51_getBoundsRec,"h2d.Bitmap","getBoundsRec",0xd8967e10,"h2d.Bitmap.getBoundsRec","h2d/Bitmap.hx",51,0x3abbbeda)
HX_LOCAL_STACK_FRAME(_hx_pos_eba10c4bdac7ae55_61_set_width,"h2d.Bitmap","set_width",0x74fe35de,"h2d.Bitmap.set_width","h2d/Bitmap.hx",61,0x3abbbeda)
HX_LOCAL_STACK_FRAME(_hx_pos_eba10c4bdac7ae55_68_set_height,"h2d.Bitmap","set_height",0x9fc0650f,"h2d.Bitmap.set_height","h2d/Bitmap.hx",68,0x3abbbeda)
HX_LOCAL_STACK_FRAME(_hx_pos_eba10c4bdac7ae55_75_set_tile,"h2d.Bitmap","set_tile",0xc9bc0e56,"h2d.Bitmap.set_tile","h2d/Bitmap.hx",75,0x3abbbeda)
HX_LOCAL_STACK_FRAME(_hx_pos_eba10c4bdac7ae55_82_draw,"h2d.Bitmap","draw",0xebe428af,"h2d.Bitmap.draw","h2d/Bitmap.hx",82,0x3abbbeda)
namespace h2d{

void Bitmap_obj::__construct( ::h2d::Tile tile, ::h2d::Object parent){
            	HX_STACKFRAME(&_hx_pos_eba10c4bdac7ae55_38_new)
HXLINE(  39)		super::__construct(parent);
HXLINE(  40)		this->set_tile(tile);
            	}

Dynamic Bitmap_obj::__CreateEmpty() { return new Bitmap_obj; }

void *Bitmap_obj::_hx_vtable = 0;

Dynamic Bitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Bitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0af28419) {
		if (inClassId<=(int)0x09dcc89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x09dcc89d;
		} else {
			return inClassId==(int)0x0af28419;
		}
	} else {
		return inClassId==(int)0x6c6b2aec;
	}
}

void Bitmap_obj::getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize){
            	HX_STACKFRAME(&_hx_pos_eba10c4bdac7ae55_51_getBoundsRec)
HXLINE(  52)		this->super::getBoundsRec(relativeTo,out,forSize);
HXLINE(  53)		if (::hx::IsNotNull( this->tile )) {
HXLINE(  54)			bool _hx_tmp;
HXDLIN(  54)			if (::hx::IsNull( this->width )) {
HXLINE(  54)				_hx_tmp = ::hx::IsNull( this->height );
            			}
            			else {
HXLINE(  54)				_hx_tmp = false;
            			}
HXDLIN(  54)			if (_hx_tmp) {
HXLINE(  55)				this->addBounds(relativeTo,out,this->tile->dx,this->tile->dy,this->tile->width,this->tile->height);
            			}
            			else {
HXLINE(  57)				Float _hx_tmp;
HXDLIN(  57)				if (::hx::IsNotNull( this->width )) {
HXLINE(  57)					_hx_tmp = ( (Float)(this->width) );
            				}
            				else {
HXLINE(  57)					_hx_tmp = ((this->tile->width * ( (Float)(this->height) )) / this->tile->height);
            				}
HXDLIN(  57)				Float _hx_tmp1;
HXDLIN(  57)				if (::hx::IsNotNull( this->height )) {
HXLINE(  57)					_hx_tmp1 = ( (Float)(this->height) );
            				}
            				else {
HXLINE(  57)					_hx_tmp1 = ((this->tile->height * ( (Float)(this->width) )) / this->tile->width);
            				}
HXDLIN(  57)				this->addBounds(relativeTo,out,this->tile->dx,this->tile->dy,_hx_tmp,_hx_tmp1);
            			}
            		}
            	}


 ::Dynamic Bitmap_obj::set_width( ::Dynamic w){
            	HX_STACKFRAME(&_hx_pos_eba10c4bdac7ae55_61_set_width)
HXLINE(  62)		if (::hx::IsEq( this->width,w )) {
HXLINE(  62)			return w;
            		}
HXLINE(  63)		this->width = w;
HXLINE(  64)		if (::hx::IsNotNull( this->parentContainer )) {
HXLINE(  64)			this->parentContainer->contentChanged(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  65)		return w;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_width,return )

 ::Dynamic Bitmap_obj::set_height( ::Dynamic h){
            	HX_STACKFRAME(&_hx_pos_eba10c4bdac7ae55_68_set_height)
HXLINE(  69)		if (::hx::IsEq( this->height,h )) {
HXLINE(  69)			return h;
            		}
HXLINE(  70)		this->height = h;
HXLINE(  71)		if (::hx::IsNotNull( this->parentContainer )) {
HXLINE(  71)			this->parentContainer->contentChanged(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  72)		return h;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_height,return )

 ::h2d::Tile Bitmap_obj::set_tile( ::h2d::Tile t){
            	HX_STACKFRAME(&_hx_pos_eba10c4bdac7ae55_75_set_tile)
HXLINE(  76)		if (::hx::IsInstanceEq( this->tile,t )) {
HXLINE(  76)			return t;
            		}
HXLINE(  77)		this->tile = t;
HXLINE(  78)		if (::hx::IsNotNull( this->parentContainer )) {
HXLINE(  78)			this->parentContainer->contentChanged(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  79)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_tile,return )

void Bitmap_obj::draw( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_eba10c4bdac7ae55_82_draw)
HXLINE(  83)		bool _hx_tmp;
HXDLIN(  83)		if (::hx::IsNull( this->width )) {
HXLINE(  83)			_hx_tmp = ::hx::IsNull( this->height );
            		}
            		else {
HXLINE(  83)			_hx_tmp = false;
            		}
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  84)			this->emitTile(ctx,this->tile);
HXLINE(  85)			return;
            		}
HXLINE(  87)		if (::hx::IsNull( this->tile )) {
HXLINE(  87)			this->set_tile(::h2d::Tile_obj::fromColor(16711935,null(),null(),null()));
            		}
HXLINE(  88)		Float ow = this->tile->width;
HXLINE(  89)		Float oh = this->tile->height;
HXLINE(  90)		{
HXLINE(  91)			Float _hx_tmp1;
HXDLIN(  91)			if (::hx::IsNotNull( this->width )) {
HXLINE(  91)				_hx_tmp1 = ( (Float)(this->width) );
            			}
            			else {
HXLINE(  91)				_hx_tmp1 = ((ow * ( (Float)(this->height) )) / oh);
            			}
HXDLIN(  91)			this->tile->width = _hx_tmp1;
HXLINE(  92)			Float _hx_tmp2;
HXDLIN(  92)			if (::hx::IsNotNull( this->height )) {
HXLINE(  92)				_hx_tmp2 = ( (Float)(this->height) );
            			}
            			else {
HXLINE(  92)				_hx_tmp2 = ((oh * ( (Float)(this->width) )) / ow);
            			}
HXDLIN(  92)			this->tile->height = _hx_tmp2;
            		}
HXLINE(  94)		this->emitTile(ctx,this->tile);
HXLINE(  95)		{
HXLINE(  96)			this->tile->width = ow;
HXLINE(  97)			this->tile->height = oh;
            		}
            	}



::hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new( ::h2d::Tile tile, ::h2d::Object parent) {
	::hx::ObjectPtr< Bitmap_obj > __this = new Bitmap_obj();
	__this->__construct(tile,parent);
	return __this;
}

::hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__alloc(::hx::Ctx *_hx_ctx, ::h2d::Tile tile, ::h2d::Object parent) {
	Bitmap_obj *__this = (Bitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Bitmap_obj), true, "h2d.Bitmap"));
	*(void **)__this = Bitmap_obj::_hx_vtable;
	__this->__construct(tile,parent);
	return __this;
}

Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(tile,"tile");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	 ::h2d::Drawable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tile,"tile");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	 ::h2d::Drawable_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Bitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { return ::hx::Val( tile ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_tile") ) { return ::hx::Val( set_tile_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBoundsRec") ) { return ::hx::Val( getBoundsRec_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Bitmap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tile(inValue.Cast<  ::h2d::Tile >()) );tile=inValue.Cast<  ::h2d::Tile >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast<  ::Dynamic >()) );width=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast<  ::Dynamic >()) );height=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tile",2e,cb,fc,4c));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Bitmap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h2d::Tile */ ,(int)offsetof(Bitmap_obj,tile),HX_("tile",2e,cb,fc,4c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Bitmap_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Bitmap_obj,height),HX_("height",e7,07,4c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Bitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String Bitmap_obj_sMemberFields[] = {
	HX_("tile",2e,cb,fc,4c),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("getBoundsRec",65,5e,85,79),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	HX_("set_tile",2b,e0,14,7b),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	Bitmap_obj _hx_dummy;
	Bitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Bitmap",a3,a3,97,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Bitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Bitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
