#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Tools
#include <hxsl/Tools.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5c093458c1ee73dc_19_new,"hxsl.Globals","new",0xf20e863d,"hxsl.Globals.new","hxsl/Globals.hx",19,0xd12a3b14)
HX_LOCAL_STACK_FRAME(_hx_pos_5c093458c1ee73dc_30_set,"hxsl.Globals","set",0xf212517f,"hxsl.Globals.set","hxsl/Globals.hx",30,0xd12a3b14)
HX_LOCAL_STACK_FRAME(_hx_pos_5c093458c1ee73dc_34_get,"hxsl.Globals","get",0xf2093673,"hxsl.Globals.get","hxsl/Globals.hx",34,0xd12a3b14)
HX_LOCAL_STACK_FRAME(_hx_pos_5c093458c1ee73dc_38_fastSet,"hxsl.Globals","fastSet",0xfb7382c3,"hxsl.Globals.fastSet","hxsl/Globals.hx",38,0xd12a3b14)
HX_LOCAL_STACK_FRAME(_hx_pos_5c093458c1ee73dc_42_fastGet,"hxsl.Globals","fastGet",0xfb6a67b7,"hxsl.Globals.fastGet","hxsl/Globals.hx",42,0xd12a3b14)
HX_LOCAL_STACK_FRAME(_hx_pos_5c093458c1ee73dc_46_resetChannels,"hxsl.Globals","resetChannels",0x3b9f235c,"hxsl.Globals.resetChannels","hxsl/Globals.hx",46,0xd12a3b14)
HX_LOCAL_STACK_FRAME(_hx_pos_5c093458c1ee73dc_49_allocChannelID,"hxsl.Globals","allocChannelID",0x61e2c96c,"hxsl.Globals.allocChannelID","hxsl/Globals.hx",49,0xd12a3b14)
HX_LOCAL_STACK_FRAME(_hx_pos_5c093458c1ee73dc_62_allocID,"hxsl.Globals","allocID",0x866513ed,"hxsl.Globals.allocID","hxsl/Globals.hx",62,0xd12a3b14)
HX_LOCAL_STACK_FRAME(_hx_pos_5c093458c1ee73dc_80_getIDName,"hxsl.Globals","getIDName",0x5f1f7679,"hxsl.Globals.getIDName","hxsl/Globals.hx",80,0xd12a3b14)
namespace hxsl{

void Globals_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5c093458c1ee73dc_19_new)
HXLINE(  22)		this->channels = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  26)		this->map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic Globals_obj::__CreateEmpty() { return new Globals_obj; }

void *Globals_obj::_hx_vtable = 0;

Dynamic Globals_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Globals_obj > _hx_result = new Globals_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Globals_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78041763;
}

void Globals_obj::set(::String path, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_5c093458c1ee73dc_30_set)
HXDLIN(  30)		::Dynamic this1 = this->map;
HXDLIN(  30)		( ( ::haxe::ds::IntMap)(this1) )->set(::hxsl::Globals_obj::allocID(path),v);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Globals_obj,set,(void))

 ::Dynamic Globals_obj::get(::String path){
            	HX_STACKFRAME(&_hx_pos_5c093458c1ee73dc_34_get)
HXDLIN(  34)		::Dynamic this1 = this->map;
HXDLIN(  34)		return ( ( ::haxe::ds::IntMap)(this1) )->get(::hxsl::Globals_obj::allocID(path));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Globals_obj,get,return )

void Globals_obj::fastSet(int id, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_5c093458c1ee73dc_38_fastSet)
HXDLIN(  38)		this->map->set(id,v);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Globals_obj,fastSet,(void))

 ::Dynamic Globals_obj::fastGet(int id){
            	HX_STACKFRAME(&_hx_pos_5c093458c1ee73dc_42_fastGet)
HXDLIN(  42)		return this->map->get(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Globals_obj,fastGet,return )

void Globals_obj::resetChannels(){
            	HX_STACKFRAME(&_hx_pos_5c093458c1ee73dc_46_resetChannels)
HXDLIN(  46)		this->maxChannels = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Globals_obj,resetChannels,(void))

int Globals_obj::allocChannelID( ::h3d::mat::Texture t){
            	HX_STACKFRAME(&_hx_pos_5c093458c1ee73dc_49_allocChannelID)
HXLINE(  50)		{
HXLINE(  50)			int _g = 0;
HXDLIN(  50)			int _g1 = this->maxChannels;
HXDLIN(  50)			while((_g < _g1)){
HXLINE(  50)				_g = (_g + 1);
HXDLIN(  50)				int i = (_g - 1);
HXLINE(  51)				if (::hx::IsInstanceEq( this->channels->__get(i).StaticCast<  ::h3d::mat::Texture >(),t )) {
HXLINE(  52)					return i;
            				}
            			}
            		}
HXLINE(  53)		if ((this->maxChannels == (1 << ::hxsl::Tools_obj::MAX_CHANNELS_BITS))) {
HXLINE(  54)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Too many unique channels",ea,40,71,0d)));
            		}
HXLINE(  55)		int i = this->maxChannels++;
HXLINE(  56)		this->channels[i] = t;
HXLINE(  57)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Globals_obj,allocChannelID,return )

::Array< ::String > Globals_obj::ALL;

 ::haxe::ds::StringMap Globals_obj::MAP;

int Globals_obj::allocID(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_5c093458c1ee73dc_62_allocID)
HXLINE(  63)		if (::hx::IsNull( ::hxsl::Globals_obj::MAP )) {
HXLINE(  67)			::hxsl::Globals_obj::MAP =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  69)			::hxsl::Globals_obj::ALL = ::Array_obj< ::String >::__new(0);
            		}
HXLINE(  71)		 ::Dynamic id = ::hxsl::Globals_obj::MAP->get(path);
HXLINE(  72)		if (::hx::IsNull( id )) {
HXLINE(  73)			id = ::hxsl::Globals_obj::ALL->length;
HXLINE(  74)			::hxsl::Globals_obj::ALL->push(path);
HXLINE(  75)			::hxsl::Globals_obj::MAP->set(path,id);
            		}
HXLINE(  77)		return ( (int)(id) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Globals_obj,allocID,return )

::String Globals_obj::getIDName(int id){
            	HX_STACKFRAME(&_hx_pos_5c093458c1ee73dc_80_getIDName)
HXDLIN(  80)		return ::hxsl::Globals_obj::ALL->__get(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Globals_obj,getIDName,return )


::hx::ObjectPtr< Globals_obj > Globals_obj::__new() {
	::hx::ObjectPtr< Globals_obj > __this = new Globals_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Globals_obj > Globals_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Globals_obj *__this = (Globals_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Globals_obj), true, "hxsl.Globals"));
	*(void **)__this = Globals_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Globals_obj::Globals_obj()
{
}

void Globals_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Globals);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(maxChannels,"maxChannels");
	HX_MARK_END_CLASS();
}

void Globals_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(maxChannels,"maxChannels");
}

::hx::Val Globals_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastSet") ) { return ::hx::Val( fastSet_dyn() ); }
		if (HX_FIELD_EQ(inName,"fastGet") ) { return ::hx::Val( fastGet_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return ::hx::Val( channels ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxChannels") ) { return ::hx::Val( maxChannels ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resetChannels") ) { return ::hx::Val( resetChannels_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allocChannelID") ) { return ::hx::Val( allocChannelID_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Globals_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ALL") ) { outValue = ( ALL ); return true; }
		if (HX_FIELD_EQ(inName,"MAP") ) { outValue = ( MAP ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"allocID") ) { outValue = allocID_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getIDName") ) { outValue = getIDName_dyn(); return true; }
	}
	return false;
}

::hx::Val Globals_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxChannels") ) { maxChannels=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Globals_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ALL") ) { ALL=ioValue.Cast< ::Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"MAP") ) { MAP=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Globals_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("map",9c,0a,53,00));
	outFields->push(HX_("channels",50,aa,ee,6a));
	outFields->push(HX_("maxChannels",14,b5,b4,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Globals_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Globals_obj,map),HX_("map",9c,0a,53,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Globals_obj,channels),HX_("channels",50,aa,ee,6a)},
	{::hx::fsInt,(int)offsetof(Globals_obj,maxChannels),HX_("maxChannels",14,b5,b4,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Globals_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Globals_obj::ALL,HX_("ALL",01,95,31,00)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Globals_obj::MAP,HX_("MAP",7c,a6,3a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Globals_obj_sMemberFields[] = {
	HX_("map",9c,0a,53,00),
	HX_("channels",50,aa,ee,6a),
	HX_("maxChannels",14,b5,b4,e0),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("fastSet",66,1a,2c,de),
	HX_("fastGet",5a,ff,22,de),
	HX_("resetChannels",3f,97,8d,9b),
	HX_("allocChannelID",29,bc,99,f2),
	::String(null()) };

static void Globals_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Globals_obj::ALL,"ALL");
	HX_MARK_MEMBER_NAME(Globals_obj::MAP,"MAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Globals_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Globals_obj::ALL,"ALL");
	HX_VISIT_MEMBER_NAME(Globals_obj::MAP,"MAP");
};

#endif

::hx::Class Globals_obj::__mClass;

static ::String Globals_obj_sStaticFields[] = {
	HX_("ALL",01,95,31,00),
	HX_("MAP",7c,a6,3a,00),
	HX_("allocID",90,ab,1d,69),
	HX_("getIDName",dc,7c,e7,d2),
	::String(null())
};

void Globals_obj::__register()
{
	Globals_obj _hx_dummy;
	Globals_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Globals",cb,a3,ed,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Globals_obj::__GetStatic;
	__mClass->mSetStaticField = &Globals_obj::__SetStatic;
	__mClass->mMarkFunc = Globals_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Globals_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Globals_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Globals_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Globals_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Globals_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Globals_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
