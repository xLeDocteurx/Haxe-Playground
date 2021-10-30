#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b34e95009cb43de8_26_new,"h2d.col.IPoint","new",0x8cc8ccbb,"h2d.col.IPoint.new","h2d/col/IPoint.hx",26,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_34_load,"h2d.col.IPoint","load",0xa19f6d6b,"h2d.col.IPoint.load","h2d/col/IPoint.hx",34,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_42_scale,"h2d.col.IPoint","scale",0xc9bfd7a5,"h2d.col.IPoint.scale","h2d/col/IPoint.hx",42,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_51_multiply,"h2d.col.IPoint","multiply",0xbb003be9,"h2d.col.IPoint.multiply","h2d/col/IPoint.hx",51,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_57_distanceSq,"h2d.col.IPoint","distanceSq",0x333de838,"h2d.col.IPoint.distanceSq","h2d/col/IPoint.hx",57,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_67_distance,"h2d.col.IPoint","distance",0x8c6cecfa,"h2d.col.IPoint.distance","h2d/col/IPoint.hx",67,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_72_toString,"h2d.col.IPoint","toString",0x58e22a71,"h2d.col.IPoint.toString","h2d/col/IPoint.hx",72,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_79_sub,"h2d.col.IPoint","sub",0x8ccca5db,"h2d.col.IPoint.sub","h2d/col/IPoint.hx",79,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_86_add,"h2d.col.IPoint","add",0x8cbeee7c,"h2d.col.IPoint.add","h2d/col/IPoint.hx",86,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_93_equals,"h2d.col.IPoint","equals",0x41e9dcc4,"h2d.col.IPoint.equals","h2d/col/IPoint.hx",93,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_100_dot,"h2d.col.IPoint","dot",0x8cc13ee4,"h2d.col.IPoint.dot","h2d/col/IPoint.hx",100,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_107_lengthSq,"h2d.col.IPoint","lengthSq",0x4036bce9,"h2d.col.IPoint.lengthSq","h2d/col/IPoint.hx",107,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_114_length,"h2d.col.IPoint","length",0x20fe836b,"h2d.col.IPoint.length","h2d/col/IPoint.hx",114,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_120_set,"h2d.col.IPoint","set",0x8ccc97fd,"h2d.col.IPoint.set","h2d/col/IPoint.hx",120,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_129_clone,"h2d.col.IPoint","clone",0x99541c78,"h2d.col.IPoint.clone","h2d/col/IPoint.hx",129,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_136_cross,"h2d.col.IPoint","cross",0x9d4b689b,"h2d.col.IPoint.cross","h2d/col/IPoint.hx",136,0xde4a2e53)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e95009cb43de8_145_toPoint,"h2d.col.IPoint","toPoint",0xc92dc6b0,"h2d.col.IPoint.toPoint","h2d/col/IPoint.hx",145,0xde4a2e53)
namespace h2d{
namespace col{

void IPoint_obj::__construct(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y){
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_26_new)
HXLINE(  27)		this->x = x;
HXLINE(  28)		this->y = y;
            	}

Dynamic IPoint_obj::__CreateEmpty() { return new IPoint_obj; }

void *IPoint_obj::_hx_vtable = 0;

Dynamic IPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IPoint_obj > _hx_result = new IPoint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool IPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a7da431;
}

void IPoint_obj::load( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_34_load)
HXLINE(  35)		this->x = p->x;
HXLINE(  36)		this->y = p->y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IPoint_obj,load,(void))

void IPoint_obj::scale(int v){
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_42_scale)
HXLINE(  43)		 ::h2d::col::IPoint _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  43)		_hx_tmp->x = (_hx_tmp->x * v);
HXLINE(  44)		 ::h2d::col::IPoint _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  44)		_hx_tmp1->y = (_hx_tmp1->y * v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IPoint_obj,scale,(void))

 ::h2d::col::IPoint IPoint_obj::multiply(int v){
            	HX_GC_STACKFRAME(&_hx_pos_b34e95009cb43de8_51_multiply)
HXDLIN(  51)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(this->x * v),(this->y * v));
            	}


HX_DEFINE_DYNAMIC_FUNC1(IPoint_obj,multiply,return )

int IPoint_obj::distanceSq( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_57_distanceSq)
HXLINE(  58)		int dx = (this->x - p->x);
HXLINE(  59)		int dy = (this->y - p->y);
HXLINE(  60)		return ((dx * dx) + (dy * dy));
            	}


HX_DEFINE_DYNAMIC_FUNC1(IPoint_obj,distanceSq,return )

Float IPoint_obj::distance( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_67_distance)
HXDLIN(  67)		int dx = (this->x - p->x);
HXDLIN(  67)		int dy = (this->y - p->y);
HXDLIN(  67)		return ::Math_obj::sqrt(( (Float)(((dx * dx) + (dy * dy))) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(IPoint_obj,distance,return )

::String IPoint_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_72_toString)
HXDLIN(  72)		return ((((HX_("{",7b,00,00,00) + this->x) + HX_(",",2c,00,00,00)) + this->y) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(IPoint_obj,toString,return )

 ::h2d::col::IPoint IPoint_obj::sub( ::h2d::col::IPoint p){
            	HX_GC_STACKFRAME(&_hx_pos_b34e95009cb43de8_79_sub)
HXDLIN(  79)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(this->x - p->x),(this->y - p->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(IPoint_obj,sub,return )

 ::h2d::col::IPoint IPoint_obj::add( ::h2d::col::IPoint p){
            	HX_GC_STACKFRAME(&_hx_pos_b34e95009cb43de8_86_add)
HXDLIN(  86)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(this->x + p->x),(this->y + p->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(IPoint_obj,add,return )

bool IPoint_obj::equals( ::h2d::col::IPoint other){
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_93_equals)
HXDLIN(  93)		if ((this->x == other->x)) {
HXDLIN(  93)			return (this->y == other->y);
            		}
            		else {
HXDLIN(  93)			return false;
            		}
HXDLIN(  93)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IPoint_obj,equals,return )

int IPoint_obj::dot( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_100_dot)
HXDLIN( 100)		return ((this->x * p->x) + (this->y * p->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(IPoint_obj,dot,return )

int IPoint_obj::lengthSq(){
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_107_lengthSq)
HXDLIN( 107)		return ((this->x * this->x) + (this->y * this->y));
            	}


HX_DEFINE_DYNAMIC_FUNC0(IPoint_obj,lengthSq,return )

Float IPoint_obj::length(){
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_114_length)
HXDLIN( 114)		return ::Math_obj::sqrt(( (Float)(((this->x * this->x) + (this->y * this->y))) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(IPoint_obj,length,return )

void IPoint_obj::set(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y){
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_120_set)
HXLINE( 121)		this->x = x;
HXLINE( 122)		this->y = y;
            	}


HX_DEFINE_DYNAMIC_FUNC2(IPoint_obj,set,(void))

 ::h2d::col::IPoint IPoint_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b34e95009cb43de8_129_clone)
HXDLIN( 129)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(IPoint_obj,clone,return )

int IPoint_obj::cross( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_b34e95009cb43de8_136_cross)
HXDLIN( 136)		return ((this->x * p->y) - (this->y * p->x));
            	}


HX_DEFINE_DYNAMIC_FUNC1(IPoint_obj,cross,return )

 ::h2d::col::Point IPoint_obj::toPoint(::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(((Float)1.));
            	HX_GC_STACKFRAME(&_hx_pos_b34e95009cb43de8_145_toPoint)
HXDLIN( 145)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(( (Float)(this->x) ) * scale),(( (Float)(this->y) ) * scale));
            	}


HX_DEFINE_DYNAMIC_FUNC1(IPoint_obj,toPoint,return )


::hx::ObjectPtr< IPoint_obj > IPoint_obj::__new(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y) {
	::hx::ObjectPtr< IPoint_obj > __this = new IPoint_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< IPoint_obj > IPoint_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_x,::hx::Null< int >  __o_y) {
	IPoint_obj *__this = (IPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IPoint_obj), false, "h2d.col.IPoint"));
	*(void **)__this = IPoint_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

IPoint_obj::IPoint_obj()
{
}

::hx::Val IPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot") ) { return ::hx::Val( dot_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"cross") ) { return ::hx::Val( cross_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toPoint") ) { return ::hx::Val( toPoint_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"multiply") ) { return ::hx::Val( multiply_dyn() ); }
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"lengthSq") ) { return ::hx::Val( lengthSq_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceSq") ) { return ::hx::Val( distanceSq_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(IPoint_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(IPoint_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String IPoint_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("load",26,9a,b7,47),
	HX_("scale",8a,ce,ce,78),
	HX_("multiply",24,e2,8c,9a),
	HX_("distanceSq",33,d3,ec,8b),
	HX_("distance",35,93,f9,6b),
	HX_("toString",ac,d0,6e,38),
	HX_("sub",80,a9,57,00),
	HX_("add",21,f2,49,00),
	HX_("equals",3f,ee,f2,bf),
	HX_("dot",89,42,4c,00),
	HX_("lengthSq",24,63,c3,1f),
	HX_("length",e6,94,07,9f),
	HX_("set",a2,9b,57,00),
	HX_("clone",5d,13,63,48),
	HX_("cross",80,5f,5a,4c),
	HX_("toPoint",d5,00,14,93),
	::String(null()) };

::hx::Class IPoint_obj::__mClass;

void IPoint_obj::__register()
{
	IPoint_obj _hx_dummy;
	IPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col.IPoint",49,53,27,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
