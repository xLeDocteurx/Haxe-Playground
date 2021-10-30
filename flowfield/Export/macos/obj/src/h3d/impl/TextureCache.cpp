#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_impl_TextureCache
#include <h3d/impl/TextureCache.h>
#endif
#ifndef INCLUDED_h3d_mat_DepthBuffer
#include <h3d/mat/DepthBuffer.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_mat_TextureFlags
#include <h3d/mat/TextureFlags.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4d79b8a1cc7487b7_3_new,"h3d.impl.TextureCache","new",0xeab0ec52,"h3d.impl.TextureCache.new","h3d/impl/TextureCache.hx",3,0xb3e212fe)
HX_LOCAL_STACK_FRAME(_hx_pos_4d79b8a1cc7487b7_20_get,"h3d.impl.TextureCache","get",0xeaab9c88,"h3d.impl.TextureCache.get","h3d/impl/TextureCache.hx",20,0xb3e212fe)
HX_LOCAL_STACK_FRAME(_hx_pos_4d79b8a1cc7487b7_23_getNamed,"h3d.impl.TextureCache","getNamed",0xbff9f611,"h3d.impl.TextureCache.getNamed","h3d/impl/TextureCache.hx",23,0xb3e212fe)
HX_LOCAL_STACK_FRAME(_hx_pos_4d79b8a1cc7487b7_31_set,"h3d.impl.TextureCache","set",0xeab4b794,"h3d.impl.TextureCache.set","h3d/impl/TextureCache.hx",31,0xb3e212fe)
HX_LOCAL_STACK_FRAME(_hx_pos_4d79b8a1cc7487b7_34_begin,"h3d.impl.TextureCache","begin",0xc127669b,"h3d.impl.TextureCache.begin","h3d/impl/TextureCache.hx",34,0xb3e212fe)
HX_LOCAL_STACK_FRAME(_hx_pos_4d79b8a1cc7487b7_43_lookupTarget,"h3d.impl.TextureCache","lookupTarget",0x3c63f739,"h3d.impl.TextureCache.lookupTarget","h3d/impl/TextureCache.hx",43,0xb3e212fe)
HX_LOCAL_STACK_FRAME(_hx_pos_4d79b8a1cc7487b7_70_allocTarget,"h3d.impl.TextureCache","allocTarget",0x7c5caf98,"h3d.impl.TextureCache.allocTarget","h3d/impl/TextureCache.hx",70,0xb3e212fe)
HX_LOCAL_STACK_FRAME(_hx_pos_4d79b8a1cc7487b7_81_allocTargetScale,"h3d.impl.TextureCache","allocTargetScale",0x7c8407d2,"h3d.impl.TextureCache.allocTargetScale","h3d/impl/TextureCache.hx",81,0xb3e212fe)
HX_LOCAL_STACK_FRAME(_hx_pos_4d79b8a1cc7487b7_87_allocTileTarget,"h3d.impl.TextureCache","allocTileTarget",0xfaf4b4e6,"h3d.impl.TextureCache.allocTileTarget","h3d/impl/TextureCache.hx",87,0xb3e212fe)
HX_LOCAL_STACK_FRAME(_hx_pos_4d79b8a1cc7487b7_90_dispose,"h3d.impl.TextureCache","dispose",0xc0cb7d91,"h3d.impl.TextureCache.dispose","h3d/impl/TextureCache.hx",90,0xb3e212fe)
namespace h3d{
namespace impl{

void TextureCache_obj::__construct( ::h3d::impl::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_4d79b8a1cc7487b7_3_new)
HXLINE(   6)		this->position = 0;
HXLINE(  12)		this->ctx = ctx;
HXLINE(  13)		this->cache = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  14)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE(  15)		this->defaultFormat = ::h3d::mat::Texture_obj::nativeFormat;
HXLINE(  16)		this->defaultDepthBuffer = ::h3d::mat::DepthBuffer_obj::getDefault();
            	}

Dynamic TextureCache_obj::__CreateEmpty() { return new TextureCache_obj; }

void *TextureCache_obj::_hx_vtable = 0;

Dynamic TextureCache_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextureCache_obj > _hx_result = new TextureCache_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextureCache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28e6e9fc;
}

 ::h3d::mat::Texture TextureCache_obj::get(::hx::Null< int >  __o_index){
            		int index = __o_index.Default(0);
            	HX_STACKFRAME(&_hx_pos_4d79b8a1cc7487b7_20_get)
HXDLIN(  20)		return this->cache->__get(index).StaticCast<  ::h3d::mat::Texture >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureCache_obj,get,return )

 ::h3d::mat::Texture TextureCache_obj::getNamed(::String name){
            	HX_STACKFRAME(&_hx_pos_4d79b8a1cc7487b7_23_getNamed)
HXLINE(  24)		{
HXLINE(  24)			int _g = 0;
HXDLIN(  24)			int _g1 = this->position;
HXDLIN(  24)			while((_g < _g1)){
HXLINE(  24)				_g = (_g + 1);
HXDLIN(  24)				int i = (_g - 1);
HXLINE(  25)				if ((this->cache->__get(i).StaticCast<  ::h3d::mat::Texture >()->name == name)) {
HXLINE(  26)					return this->cache->__get(i).StaticCast<  ::h3d::mat::Texture >();
            				}
            			}
            		}
HXLINE(  27)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureCache_obj,getNamed,return )

void TextureCache_obj::set( ::h3d::mat::Texture t,int index){
            	HX_STACKFRAME(&_hx_pos_4d79b8a1cc7487b7_31_set)
HXDLIN(  31)		this->cache[index] = t;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextureCache_obj,set,(void))

void TextureCache_obj::begin(){
            	HX_STACKFRAME(&_hx_pos_4d79b8a1cc7487b7_34_begin)
HXLINE(  36)		while((this->cache->length > this->position)){
HXLINE(  37)			 ::h3d::mat::Texture t = this->cache->pop().StaticCast<  ::h3d::mat::Texture >();
HXLINE(  38)			if (::hx::IsNotNull( t )) {
HXLINE(  38)				t->dispose();
            			}
            		}
HXLINE(  40)		this->position = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureCache_obj,begin,(void))

 ::h3d::mat::Texture TextureCache_obj::lookupTarget(::String name,int width,int height, ::hxd::PixelFormat format,bool isCube){
            	HX_GC_STACKFRAME(&_hx_pos_4d79b8a1cc7487b7_43_lookupTarget)
HXLINE(  44)		 ::h3d::mat::Texture t = this->cache->__get(this->position).StaticCast<  ::h3d::mat::Texture >();
HXLINE(  46)		{
HXLINE(  46)			int _g = (this->position + 1);
HXDLIN(  46)			int _g1 = this->cache->length;
HXDLIN(  46)			while((_g < _g1)){
HXLINE(  46)				_g = (_g + 1);
HXDLIN(  46)				int i = (_g - 1);
HXLINE(  47)				 ::h3d::mat::Texture t2 = this->cache->__get(i).StaticCast<  ::h3d::mat::Texture >();
HXLINE(  48)				bool _hx_tmp;
HXDLIN(  48)				bool _hx_tmp1;
HXDLIN(  48)				bool _hx_tmp2;
HXDLIN(  48)				bool _hx_tmp3;
HXDLIN(  48)				bool _hx_tmp4;
HXDLIN(  48)				if (::hx::IsNotNull( t2 )) {
HXLINE(  48)					bool _hx_tmp;
HXDLIN(  48)					if (::hx::IsNull( t2->t )) {
HXLINE(  48)						_hx_tmp = ::hx::IsNull( t2->realloc );
            					}
            					else {
HXLINE(  48)						_hx_tmp = false;
            					}
HXDLIN(  48)					_hx_tmp4 = !(_hx_tmp);
            				}
            				else {
HXLINE(  48)					_hx_tmp4 = false;
            				}
HXDLIN(  48)				if (_hx_tmp4) {
HXLINE(  48)					_hx_tmp3 = (t2->width == width);
            				}
            				else {
HXLINE(  48)					_hx_tmp3 = false;
            				}
HXDLIN(  48)				if (_hx_tmp3) {
HXLINE(  48)					_hx_tmp2 = (t2->height == height);
            				}
            				else {
HXLINE(  48)					_hx_tmp2 = false;
            				}
HXDLIN(  48)				if (_hx_tmp2) {
HXLINE(  48)					_hx_tmp1 = ::hx::IsPointerEq( t2->format,format );
            				}
            				else {
HXLINE(  48)					_hx_tmp1 = false;
            				}
HXDLIN(  48)				if (_hx_tmp1) {
HXLINE(  48)					int this1 = t2->flags;
HXDLIN(  48)					_hx_tmp = (isCube == ((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Cube_dyn()))) != 0));
            				}
            				else {
HXLINE(  48)					_hx_tmp = false;
            				}
HXDLIN(  48)				if (_hx_tmp) {
HXLINE(  50)					this->cache[this->position] = t2;
HXLINE(  51)					this->cache[i] = t;
HXLINE(  52)					return t2;
            				}
            			}
            		}
HXLINE(  56)		bool _hx_tmp;
HXDLIN(  56)		if (::hx::IsNotNull( t )) {
HXLINE(  56)			_hx_tmp = (t->name == name);
            		}
            		else {
HXLINE(  56)			_hx_tmp = false;
            		}
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  57)			t->dispose();
HXLINE(  58)			t = null();
            		}
HXLINE(  60)		::Array< ::Dynamic> flags = ::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::mat::TextureFlags_obj::Target_dyn());
HXLINE(  61)		if (isCube) {
HXLINE(  61)			flags->push(::h3d::mat::TextureFlags_obj::Cube_dyn());
            		}
HXLINE(  62)		 ::h3d::mat::Texture newt =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,width,height,flags,format);
HXLINE(  63)		if (::hx::IsNotNull( t )) {
HXLINE(  64)			this->cache->insert(this->position,newt);
            		}
            		else {
HXLINE(  66)			this->cache[this->position] = newt;
            		}
HXLINE(  67)		return newt;
            	}


HX_DEFINE_DYNAMIC_FUNC5(TextureCache_obj,lookupTarget,return )

 ::h3d::mat::Texture TextureCache_obj::allocTarget(::String name,int width,int height,::hx::Null< bool >  __o_defaultDepth, ::hxd::PixelFormat format,::hx::Null< bool >  __o_isCube){
            		bool defaultDepth = __o_defaultDepth.Default(true);
            		bool isCube = __o_isCube.Default(false);
            	HX_STACKFRAME(&_hx_pos_4d79b8a1cc7487b7_70_allocTarget)
HXLINE(  71)		 ::h3d::mat::Texture t = this->cache->__get(this->position).StaticCast<  ::h3d::mat::Texture >();
HXLINE(  72)		if (::hx::IsNull( format )) {
HXLINE(  72)			format = this->defaultFormat;
            		}
HXLINE(  73)		bool _hx_tmp;
HXDLIN(  73)		bool _hx_tmp1;
HXDLIN(  73)		bool _hx_tmp2;
HXDLIN(  73)		bool _hx_tmp3;
HXDLIN(  73)		bool _hx_tmp4;
HXDLIN(  73)		if (::hx::IsNotNull( t )) {
HXLINE(  73)			if (::hx::IsNull( t->t )) {
HXLINE(  73)				_hx_tmp4 = ::hx::IsNull( t->realloc );
            			}
            			else {
HXLINE(  73)				_hx_tmp4 = false;
            			}
            		}
            		else {
HXLINE(  73)			_hx_tmp4 = true;
            		}
HXDLIN(  73)		if (!(_hx_tmp4)) {
HXLINE(  73)			_hx_tmp3 = (t->width != width);
            		}
            		else {
HXLINE(  73)			_hx_tmp3 = true;
            		}
HXDLIN(  73)		if (!(_hx_tmp3)) {
HXLINE(  73)			_hx_tmp2 = (t->height != height);
            		}
            		else {
HXLINE(  73)			_hx_tmp2 = true;
            		}
HXDLIN(  73)		if (!(_hx_tmp2)) {
HXLINE(  73)			_hx_tmp1 = ::hx::IsPointerNotEq( t->format,format );
            		}
            		else {
HXLINE(  73)			_hx_tmp1 = true;
            		}
HXDLIN(  73)		if (!(_hx_tmp1)) {
HXLINE(  73)			int this1 = t->flags;
HXDLIN(  73)			_hx_tmp = (isCube != ((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Cube_dyn()))) != 0));
            		}
            		else {
HXLINE(  73)			_hx_tmp = true;
            		}
HXDLIN(  73)		if (_hx_tmp) {
HXLINE(  74)			t = this->lookupTarget(name,width,height,format,isCube);
            		}
HXLINE(  75)		 ::h3d::mat::DepthBuffer _hx_tmp5;
HXDLIN(  75)		if (defaultDepth) {
HXLINE(  75)			_hx_tmp5 = this->defaultDepthBuffer;
            		}
            		else {
HXLINE(  75)			_hx_tmp5 = null();
            		}
HXDLIN(  75)		t->depthBuffer = _hx_tmp5;
HXLINE(  76)		t->setName(name);
HXLINE(  77)		this->position++;
HXLINE(  78)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC6(TextureCache_obj,allocTarget,return )

 ::h3d::mat::Texture TextureCache_obj::allocTargetScale(::String name,Float scale,::hx::Null< bool >  __o_defaultDepth, ::hxd::PixelFormat format){
            		bool defaultDepth = __o_defaultDepth.Default(true);
            	HX_STACKFRAME(&_hx_pos_4d79b8a1cc7487b7_81_allocTargetScale)
HXLINE(  82)		 ::h3d::Engine e = ::h3d::Engine_obj::CURRENT;
HXLINE(  83)		return this->allocTarget(name,::Math_obj::ceil((( (Float)(e->width) ) * scale)),::Math_obj::ceil((( (Float)(e->height) ) * scale)),defaultDepth,format,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(TextureCache_obj,allocTargetScale,return )

 ::h3d::mat::Texture TextureCache_obj::allocTileTarget(::String name, ::h2d::Tile tile,::hx::Null< bool >  __o_defaultDepth, ::hxd::PixelFormat format){
            		bool defaultDepth = __o_defaultDepth.Default(false);
            	HX_STACKFRAME(&_hx_pos_4d79b8a1cc7487b7_87_allocTileTarget)
HXDLIN(  87)		return this->allocTarget(name,(::Math_obj::ceil((tile->width + tile->x)) - ::Math_obj::floor(tile->x)),(::Math_obj::ceil((tile->height + tile->y)) - ::Math_obj::floor(tile->y)),defaultDepth,format,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(TextureCache_obj,allocTileTarget,return )

void TextureCache_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_4d79b8a1cc7487b7_90_dispose)
HXLINE(  91)		{
HXLINE(  91)			int _g = 0;
HXDLIN(  91)			::Array< ::Dynamic> _g1 = this->cache;
HXDLIN(  91)			while((_g < _g1->length)){
HXLINE(  91)				 ::h3d::mat::Texture t = _g1->__get(_g).StaticCast<  ::h3d::mat::Texture >();
HXDLIN(  91)				_g = (_g + 1);
HXLINE(  92)				t->dispose();
            			}
            		}
HXLINE(  93)		this->cache = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureCache_obj,dispose,(void))


::hx::ObjectPtr< TextureCache_obj > TextureCache_obj::__new( ::h3d::impl::RenderContext ctx) {
	::hx::ObjectPtr< TextureCache_obj > __this = new TextureCache_obj();
	__this->__construct(ctx);
	return __this;
}

::hx::ObjectPtr< TextureCache_obj > TextureCache_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::impl::RenderContext ctx) {
	TextureCache_obj *__this = (TextureCache_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextureCache_obj), true, "h3d.impl.TextureCache"));
	*(void **)__this = TextureCache_obj::_hx_vtable;
	__this->__construct(ctx);
	return __this;
}

TextureCache_obj::TextureCache_obj()
{
}

void TextureCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureCache);
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(defaultDepthBuffer,"defaultDepthBuffer");
	HX_MARK_MEMBER_NAME(ctx,"ctx");
	HX_MARK_MEMBER_NAME(defaultFormat,"defaultFormat");
	HX_MARK_END_CLASS();
}

void TextureCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(defaultDepthBuffer,"defaultDepthBuffer");
	HX_VISIT_MEMBER_NAME(ctx,"ctx");
	HX_VISIT_MEMBER_NAME(defaultFormat,"defaultFormat");
}

::hx::Val TextureCache_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { return ::hx::Val( ctx ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache ); }
		if (HX_FIELD_EQ(inName,"begin") ) { return ::hx::Val( begin_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"getNamed") ) { return ::hx::Val( getNamed_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocTarget") ) { return ::hx::Val( allocTarget_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lookupTarget") ) { return ::hx::Val( lookupTarget_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return ::hx::Val( defaultFormat ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allocTileTarget") ) { return ::hx::Val( allocTileTarget_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allocTargetScale") ) { return ::hx::Val( allocTargetScale_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultDepthBuffer") ) { return ::hx::Val( defaultDepthBuffer ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextureCache_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { ctx=inValue.Cast<  ::h3d::impl::RenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { defaultFormat=inValue.Cast<  ::hxd::PixelFormat >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultDepthBuffer") ) { defaultDepthBuffer=inValue.Cast<  ::h3d::mat::DepthBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cache",42,9a,14,41));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("defaultDepthBuffer",22,ab,bd,11));
	outFields->push(HX_("ctx",a7,84,4b,00));
	outFields->push(HX_("defaultFormat",d8,62,07,f8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextureCache_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TextureCache_obj,cache),HX_("cache",42,9a,14,41)},
	{::hx::fsInt,(int)offsetof(TextureCache_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsObject /*  ::h3d::mat::DepthBuffer */ ,(int)offsetof(TextureCache_obj,defaultDepthBuffer),HX_("defaultDepthBuffer",22,ab,bd,11)},
	{::hx::fsObject /*  ::h3d::impl::RenderContext */ ,(int)offsetof(TextureCache_obj,ctx),HX_("ctx",a7,84,4b,00)},
	{::hx::fsObject /*  ::hxd::PixelFormat */ ,(int)offsetof(TextureCache_obj,defaultFormat),HX_("defaultFormat",d8,62,07,f8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextureCache_obj_sStaticStorageInfo = 0;
#endif

static ::String TextureCache_obj_sMemberFields[] = {
	HX_("cache",42,9a,14,41),
	HX_("position",a9,a0,fa,ca),
	HX_("defaultDepthBuffer",22,ab,bd,11),
	HX_("ctx",a7,84,4b,00),
	HX_("defaultFormat",d8,62,07,f8),
	HX_("get",96,80,4e,00),
	HX_("getNamed",43,9f,5b,f6),
	HX_("set",a2,9b,57,00),
	HX_("begin",29,ea,55,b0),
	HX_("lookupTarget",6b,21,57,39),
	HX_("allocTarget",a6,51,b7,8e),
	HX_("allocTargetScale",04,33,5d,0d),
	HX_("allocTileTarget",f4,75,e4,3b),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class TextureCache_obj::__mClass;

void TextureCache_obj::__register()
{
	TextureCache_obj _hx_dummy;
	TextureCache_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.impl.TextureCache",60,1b,d4,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextureCache_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextureCache_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureCache_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace impl
