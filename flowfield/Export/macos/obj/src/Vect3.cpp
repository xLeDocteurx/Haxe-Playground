#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Vect3
#include <Vect3.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f61a24c85e74420b_211_new,"Vect3","new",0x605e4ae5,"Vect3.new","Main.hx",211,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_218_copy,"Vect3","copy",0xeae57590,"Vect3.copy","Main.hx",218,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_221_get_integer,"Vect3","get_integer",0xba96255a,"Vect3.get_integer","Main.hx",221,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_231_get_fract,"Vect3","get_fract",0x22f57822,"Vect3.get_fract","Main.hx",231,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_241_set_pos,"Vect3","set_pos",0xbde6583c,"Vect3.set_pos","Main.hx",241,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_251_add,"Vect3","add",0x60546ca6,"Vect3.add","Main.hx",251,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_262_sub,"Vect3","sub",0x60622405,"Vect3.sub","Main.hx",262,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_273_mult,"Vect3","mult",0xf18621cb,"Vect3.mult","Main.hx",273,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_284_div,"Vect3","div",0x6056b7d6,"Vect3.div","Main.hx",284,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_296_publdistance,"Vect3","publdistance",0x62414a1f,"Vect3.publdistance","Main.hx",296,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_304_dot,"Vect3","dot",0x6056bd0e,"Vect3.dot","Main.hx",304,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_248_static_add,"Vect3","static_add",0x8cb612eb,"Vect3.static_add","Main.hx",248,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_259_static_sub,"Vect3","static_sub",0x8cc3ca4a,"Vect3.static_sub","Main.hx",259,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_270_static_mult,"Vect3","static_mult",0x9a95f7e6,"Vect3.static_mult","Main.hx",270,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_281_static_div,"Vect3","static_div",0x8cb85e1b,"Vect3.static_div","Main.hx",281,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_292_static_distance,"Vect3","static_distance",0x87b0562b,"Vect3.static_distance","Main.hx",292,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_f61a24c85e74420b_300_static_dot,"Vect3","static_dot",0x8cb86353,"Vect3.static_dot","Main.hx",300,0x087e5c05)

void Vect3_obj::__construct(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_f61a24c85e74420b_211_new)
HXLINE( 212)		this->x = x;
HXLINE( 213)		this->y = y;
HXLINE( 214)		this->z = z;
            	}

Dynamic Vect3_obj::__CreateEmpty() { return new Vect3_obj; }

void *Vect3_obj::_hx_vtable = 0;

Dynamic Vect3_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Vect3_obj > _hx_result = new Vect3_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Vect3_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6413c9b3;
}

 ::Vect3 Vect3_obj::copy( ::Dynamic x, ::Dynamic y){
            	HX_STACKFRAME(&_hx_pos_f61a24c85e74420b_218_copy)
HXDLIN( 218)		return ( ( ::Vect3)(::Reflect_obj::copy(::hx::ObjectPtr<OBJ_>(this))) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(Vect3_obj,copy,return )

 ::Vect3 Vect3_obj::get_integer(){
            	HX_GC_STACKFRAME(&_hx_pos_f61a24c85e74420b_221_get_integer)
HXLINE( 222)		Float posX;
HXDLIN( 222)		if ((this->x < 0)) {
HXLINE( 222)			posX = -(this->x);
            		}
            		else {
HXLINE( 222)			posX = this->x;
            		}
HXLINE( 223)		Float posY;
HXDLIN( 223)		if ((this->y < 0)) {
HXLINE( 223)			posY = -(this->y);
            		}
            		else {
HXLINE( 223)			posY = this->y;
            		}
HXLINE( 224)		Float posZ;
HXDLIN( 224)		if ((this->z < 0)) {
HXLINE( 224)			posZ = -(this->z);
            		}
            		else {
HXLINE( 224)			posZ = this->z;
            		}
HXLINE( 225)		int integerX = ::Math_obj::floor(posX);
HXLINE( 226)		int integerY = ::Math_obj::floor(posY);
HXLINE( 227)		int integerZ = ::Math_obj::floor(posZ);
HXLINE( 228)		return  ::Vect3_obj::__alloc( HX_CTX ,( (Float)(integerX) ),( (Float)(integerY) ),( (Float)(integerZ) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vect3_obj,get_integer,return )

 ::Vect3 Vect3_obj::get_fract(){
            	HX_GC_STACKFRAME(&_hx_pos_f61a24c85e74420b_231_get_fract)
HXLINE( 232)		Float posX;
HXDLIN( 232)		if ((this->x < 0)) {
HXLINE( 232)			posX = -(this->x);
            		}
            		else {
HXLINE( 232)			posX = this->x;
            		}
HXLINE( 233)		Float posY;
HXDLIN( 233)		if ((this->y < 0)) {
HXLINE( 233)			posY = -(this->y);
            		}
            		else {
HXLINE( 233)			posY = this->y;
            		}
HXLINE( 234)		Float posZ;
HXDLIN( 234)		if ((this->z < 0)) {
HXLINE( 234)			posZ = -(this->z);
            		}
            		else {
HXLINE( 234)			posZ = this->z;
            		}
HXLINE( 235)		Float decimalX = (posX - ( (Float)(::Math_obj::floor(posX)) ));
HXLINE( 236)		Float decimalY = (posY - ( (Float)(::Math_obj::floor(posY)) ));
HXLINE( 237)		Float decimalZ = (posZ - ( (Float)(::Math_obj::floor(posZ)) ));
HXLINE( 238)		return  ::Vect3_obj::__alloc( HX_CTX ,decimalX,decimalY,decimalZ);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vect3_obj,get_fract,return )

void Vect3_obj::set_pos(int x,int y,int z){
            	HX_STACKFRAME(&_hx_pos_f61a24c85e74420b_241_set_pos)
HXLINE( 242)		this->x = ( (Float)(x) );
HXLINE( 243)		this->y = ( (Float)(y) );
HXLINE( 244)		this->z = ( (Float)(z) );
            	}


HX_DEFINE_DYNAMIC_FUNC3(Vect3_obj,set_pos,(void))

 ::Vect3 Vect3_obj::add( ::Vect3 otherVector){
            	HX_STACKFRAME(&_hx_pos_f61a24c85e74420b_251_add)
HXLINE( 252)		 ::Vect3 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)		_hx_tmp->x = (_hx_tmp->x + otherVector->x);
HXLINE( 253)		 ::Vect3 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)		_hx_tmp1->y = (_hx_tmp1->y + otherVector->y);
HXLINE( 254)		 ::Vect3 _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)		_hx_tmp2->z = (_hx_tmp2->z + otherVector->z);
HXLINE( 255)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vect3_obj,add,return )

 ::Vect3 Vect3_obj::sub( ::Dynamic otherVector){
            	HX_STACKFRAME(&_hx_pos_f61a24c85e74420b_262_sub)
HXLINE( 263)		 ::Vect3 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 263)		_hx_tmp->x = (_hx_tmp->x - ( (Float)(otherVector->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE( 264)		 ::Vect3 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 264)		_hx_tmp1->y = (_hx_tmp1->y - ( (Float)(otherVector->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
HXLINE( 265)		 ::Vect3 _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 265)		_hx_tmp2->z = (_hx_tmp2->z - ( (Float)(otherVector->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic)) ));
HXLINE( 266)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vect3_obj,sub,return )

 ::Vect3 Vect3_obj::mult(Float scalar){
            	HX_STACKFRAME(&_hx_pos_f61a24c85e74420b_273_mult)
HXLINE( 274)		 ::Vect3 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)		_hx_tmp->x = (_hx_tmp->x * scalar);
HXLINE( 275)		 ::Vect3 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)		_hx_tmp1->y = (_hx_tmp1->y * scalar);
HXLINE( 276)		 ::Vect3 _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 276)		_hx_tmp2->z = (_hx_tmp2->z * scalar);
HXLINE( 277)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vect3_obj,mult,return )

 ::Vect3 Vect3_obj::div(Float scalar){
            	HX_STACKFRAME(&_hx_pos_f61a24c85e74420b_284_div)
HXLINE( 285)		 ::Vect3 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 285)		_hx_tmp->x = (_hx_tmp->x / scalar);
HXLINE( 286)		 ::Vect3 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 286)		_hx_tmp1->y = (_hx_tmp1->y / scalar);
HXLINE( 287)		 ::Vect3 _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)		_hx_tmp2->z = (_hx_tmp2->z / scalar);
HXLINE( 288)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vect3_obj,div,return )

Float Vect3_obj::publdistance( ::Vect3 otherVector){
            	HX_STACKFRAME(&_hx_pos_f61a24c85e74420b_296_publdistance)
HXDLIN( 296)		return ::Math_obj::sqrt(((::Math_obj::pow((otherVector->x - this->x),( (Float)(2) )) + ::Math_obj::pow((otherVector->y - this->y),( (Float)(2) ))) + ::Math_obj::pow((otherVector->z - this->z),( (Float)(2) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vect3_obj,publdistance,return )

Float Vect3_obj::dot( ::Vect3 otherVector){
            	HX_STACKFRAME(&_hx_pos_f61a24c85e74420b_304_dot)
HXDLIN( 304)		return (((this->x * otherVector->x) + (this->y * otherVector->y)) + (this->z * otherVector->z));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vect3_obj,dot,return )

 ::Vect3 Vect3_obj::static_add( ::Vect3 vector1, ::Vect3 vector2){
            	HX_GC_STACKFRAME(&_hx_pos_f61a24c85e74420b_248_static_add)
HXDLIN( 248)		return  ::Vect3_obj::__alloc( HX_CTX ,(vector1->x + vector2->x),(vector1->y + vector2->y),(vector1->z + vector2->z));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vect3_obj,static_add,return )

 ::Vect3 Vect3_obj::static_sub( ::Dynamic vector1, ::Dynamic vector2){
            	HX_GC_STACKFRAME(&_hx_pos_f61a24c85e74420b_259_static_sub)
HXDLIN( 259)		return  ::Vect3_obj::__alloc( HX_CTX ,( (Float)((( (int)(vector1->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ) - ( (int)(vector2->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ))) ),( (Float)((( (int)(vector1->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ) - ( (int)(vector2->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ))) ),( (Float)((( (int)(vector1->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic)) ) - ( (int)(vector2->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic)) ))) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vect3_obj,static_sub,return )

 ::Vect3 Vect3_obj::static_mult( ::Vect3 vector,Float scalar){
            	HX_GC_STACKFRAME(&_hx_pos_f61a24c85e74420b_270_static_mult)
HXDLIN( 270)		return  ::Vect3_obj::__alloc( HX_CTX ,(vector->x * scalar),(vector->y * scalar),(vector->z * scalar));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vect3_obj,static_mult,return )

 ::Vect3 Vect3_obj::static_div( ::Vect3 vector,Float scalar){
            	HX_GC_STACKFRAME(&_hx_pos_f61a24c85e74420b_281_static_div)
HXDLIN( 281)		return  ::Vect3_obj::__alloc( HX_CTX ,(vector->x / scalar),(vector->y / scalar),(vector->z / scalar));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vect3_obj,static_div,return )

Float Vect3_obj::static_distance( ::Vect3 vector1, ::Vect3 vector2){
            	HX_STACKFRAME(&_hx_pos_f61a24c85e74420b_292_static_distance)
HXDLIN( 292)		return ::Math_obj::sqrt(((::Math_obj::pow((vector2->x - vector1->x),( (Float)(2) )) + ::Math_obj::pow((vector2->y - vector1->y),( (Float)(2) ))) + ::Math_obj::pow((vector2->z - vector1->z),( (Float)(2) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vect3_obj,static_distance,return )

Float Vect3_obj::static_dot( ::Vect3 vector1, ::Vect3 vector2){
            	HX_STACKFRAME(&_hx_pos_f61a24c85e74420b_300_static_dot)
HXDLIN( 300)		return (((vector1->x * vector2->x) + (vector1->y * vector2->y)) + (vector1->z * vector2->z));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vect3_obj,static_dot,return )


::hx::ObjectPtr< Vect3_obj > Vect3_obj::__new(Float x,Float y,Float z) {
	::hx::ObjectPtr< Vect3_obj > __this = new Vect3_obj();
	__this->__construct(x,y,z);
	return __this;
}

::hx::ObjectPtr< Vect3_obj > Vect3_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float z) {
	Vect3_obj *__this = (Vect3_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Vect3_obj), false, "Vect3"));
	*(void **)__this = Vect3_obj::_hx_vtable;
	__this->__construct(x,y,z);
	return __this;
}

Vect3_obj::Vect3_obj()
{
}

::hx::Val Vect3_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		if (HX_FIELD_EQ(inName,"div") ) { return ::hx::Val( div_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot") ) { return ::hx::Val( dot_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"mult") ) { return ::hx::Val( mult_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_pos") ) { return ::hx::Val( set_pos_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_fract") ) { return ::hx::Val( get_fract_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_integer") ) { return ::hx::Val( get_integer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"publdistance") ) { return ::hx::Val( publdistance_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vect3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"static_add") ) { outValue = static_add_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"static_sub") ) { outValue = static_sub_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"static_div") ) { outValue = static_div_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"static_dot") ) { outValue = static_dot_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"static_mult") ) { outValue = static_mult_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"static_distance") ) { outValue = static_distance_dyn(); return true; }
	}
	return false;
}

::hx::Val Vect3_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vect3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Vect3_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Vect3_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vect3_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vect3_obj,z),HX_("z",7a,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Vect3_obj_sStaticStorageInfo = 0;
#endif

static ::String Vect3_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("copy",b5,bb,c4,41),
	HX_("get_integer",d5,1d,16,9d),
	HX_("get_fract",dd,cb,2c,4a),
	HX_("set_pos",37,b7,cb,19),
	HX_("add",21,f2,49,00),
	HX_("sub",80,a9,57,00),
	HX_("mult",f0,67,65,48),
	HX_("div",51,3d,4c,00),
	HX_("publdistance",44,bd,ba,af),
	HX_("dot",89,42,4c,00),
	::String(null()) };

::hx::Class Vect3_obj::__mClass;

static ::String Vect3_obj_sStaticFields[] = {
	HX_("static_add",d0,02,e8,b5),
	HX_("static_sub",2f,ba,f5,b5),
	HX_("static_mult",61,f0,15,7d),
	HX_("static_div",00,4e,ea,b5),
	HX_("static_distance",26,a8,d5,47),
	HX_("static_dot",38,53,ea,b5),
	::String(null())
};

void Vect3_obj::__register()
{
	Vect3_obj _hx_dummy;
	Vect3_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Vect3",73,f4,83,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vect3_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Vect3_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Vect3_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Vect3_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Vect3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Vect3_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

