#include <hxcpp.h>

#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_mat_Defaults
#include <h3d/mat/Defaults.h>
#endif
#ifndef INCLUDED_h3d_shader_Shadow
#include <h3d/shader/Shadow.h>
#endif
#ifndef INCLUDED_h3d_shader_VolumeDecal
#include <h3d/shader/VolumeDecal.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0f5a7fefce8bded2_11_get_shadowShader,"h3d.mat.Defaults","get_shadowShader",0x3d8de1a7,"h3d.mat.Defaults.get_shadowShader","h3d/mat/Defaults.hx",11,0x67bb3207)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5a7fefce8bded2_21_set_shadowShader,"h3d.mat.Defaults","set_shadowShader",0x93cfcf1b,"h3d.mat.Defaults.set_shadowShader","h3d/mat/Defaults.hx",21,0x67bb3207)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5a7fefce8bded2_25___default_makeVolumeDecal,"h3d.mat.Defaults","__default_makeVolumeDecal",0x78c460ae,"h3d.mat.Defaults.__default_makeVolumeDecal","h3d/mat/Defaults.hx",25,0x67bb3207)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5a7fefce8bded2_5_boot,"h3d.mat.Defaults","boot",0x596204ab,"h3d.mat.Defaults.boot","h3d/mat/Defaults.hx",5,0x67bb3207)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5a7fefce8bded2_6_boot,"h3d.mat.Defaults","boot",0x596204ab,"h3d.mat.Defaults.boot","h3d/mat/Defaults.hx",6,0x67bb3207)
namespace h3d{
namespace mat{

void Defaults_obj::__construct() { }

Dynamic Defaults_obj::__CreateEmpty() { return new Defaults_obj; }

void *Defaults_obj::_hx_vtable = 0;

Dynamic Defaults_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Defaults_obj > _hx_result = new Defaults_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Defaults_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7829faf9;
}

Float Defaults_obj::defaultKillAlphaThreshold;

int Defaults_obj::loadingTextureColor;

 ::hxsl::Shader Defaults_obj::shadowShader;

 ::hxsl::Shader Defaults_obj::get_shadowShader(){
            	HX_GC_STACKFRAME(&_hx_pos_0f5a7fefce8bded2_11_get_shadowShader)
HXLINE(  12)		 ::hxsl::Shader s = ::h3d::mat::Defaults_obj::shadowShader;
HXLINE(  13)		if (::hx::IsNull( s )) {
HXLINE(  14)			s =  ::h3d::shader::Shadow_obj::__alloc( HX_CTX );
HXDLIN(  14)			::h3d::mat::Defaults_obj::set_shadowShader(s);
HXLINE(  15)			::h3d::mat::Defaults_obj::shadowShader->setPriority(-1);
            		}
HXLINE(  17)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Defaults_obj,get_shadowShader,return )

 ::hxsl::Shader Defaults_obj::set_shadowShader( ::hxsl::Shader s){
            	HX_STACKFRAME(&_hx_pos_0f5a7fefce8bded2_21_set_shadowShader)
HXDLIN(  21)		return (::h3d::mat::Defaults_obj::shadowShader = s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Defaults_obj,set_shadowShader,return )

HX_BEGIN_DEFAULT_FUNC(__default_makeVolumeDecal,Defaults_obj)
 ::hxsl::Shader _hx_run( ::h3d::col::Bounds bounds){
            	HX_GC_STACKFRAME(&_hx_pos_0f5a7fefce8bded2_25___default_makeVolumeDecal)
HXDLIN(  25)		return  ::h3d::shader::VolumeDecal_obj::__alloc( HX_CTX ,(bounds->xMax - bounds->xMin),(bounds->yMax - bounds->yMin));
            	}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

::Dynamic Defaults_obj::makeVolumeDecal;


Defaults_obj::Defaults_obj()
{
}

bool Defaults_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"shadowShader") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_shadowShader() : shadowShader ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"makeVolumeDecal") ) { outValue = ( makeVolumeDecal ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_shadowShader") ) { outValue = get_shadowShader_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_shadowShader") ) { outValue = set_shadowShader_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"loadingTextureColor") ) { outValue = ( loadingTextureColor ); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"defaultKillAlphaThreshold") ) { outValue = ( defaultKillAlphaThreshold ); return true; }
	}
	return false;
}

bool Defaults_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"shadowShader") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_shadowShader(ioValue.Cast<  ::hxsl::Shader >()) ); else shadowShader=ioValue.Cast<  ::hxsl::Shader >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"makeVolumeDecal") ) { makeVolumeDecal=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"loadingTextureColor") ) { loadingTextureColor=ioValue.Cast< int >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"defaultKillAlphaThreshold") ) { defaultKillAlphaThreshold=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Defaults_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Defaults_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Defaults_obj::defaultKillAlphaThreshold,HX_("defaultKillAlphaThreshold",cc,ad,37,48)},
	{::hx::fsInt,(void *) &Defaults_obj::loadingTextureColor,HX_("loadingTextureColor",24,03,3b,65)},
	{::hx::fsObject /*  ::hxsl::Shader */ ,(void *) &Defaults_obj::shadowShader,HX_("shadowShader",25,23,ed,98)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Defaults_obj::makeVolumeDecal,HX_("makeVolumeDecal",a5,3b,af,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Defaults_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Defaults_obj::defaultKillAlphaThreshold,"defaultKillAlphaThreshold");
	HX_MARK_MEMBER_NAME(Defaults_obj::loadingTextureColor,"loadingTextureColor");
	HX_MARK_MEMBER_NAME(Defaults_obj::shadowShader,"shadowShader");
	HX_MARK_MEMBER_NAME(Defaults_obj::makeVolumeDecal,"makeVolumeDecal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Defaults_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Defaults_obj::defaultKillAlphaThreshold,"defaultKillAlphaThreshold");
	HX_VISIT_MEMBER_NAME(Defaults_obj::loadingTextureColor,"loadingTextureColor");
	HX_VISIT_MEMBER_NAME(Defaults_obj::shadowShader,"shadowShader");
	HX_VISIT_MEMBER_NAME(Defaults_obj::makeVolumeDecal,"makeVolumeDecal");
};

#endif

::hx::Class Defaults_obj::__mClass;

static ::String Defaults_obj_sStaticFields[] = {
	HX_("defaultKillAlphaThreshold",cc,ad,37,48),
	HX_("loadingTextureColor",24,03,3b,65),
	HX_("shadowShader",25,23,ed,98),
	HX_("get_shadowShader",ae,0f,8c,9d),
	HX_("set_shadowShader",22,fd,cd,f3),
	HX_("makeVolumeDecal",a5,3b,af,98),
	::String(null())
};

void Defaults_obj::__register()
{
	Defaults_obj _hx_dummy;
	Defaults_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.mat.Defaults",95,b2,2f,93);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Defaults_obj::__GetStatic;
	__mClass->mSetStaticField = &Defaults_obj::__SetStatic;
	__mClass->mMarkFunc = Defaults_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Defaults_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Defaults_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Defaults_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Defaults_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Defaults_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Defaults_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0f5a7fefce8bded2_5_boot)
HXDLIN(   5)		defaultKillAlphaThreshold = ((Float)0.5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5a7fefce8bded2_6_boot)
HXDLIN(   6)		loadingTextureColor = -65281;
            	}
	makeVolumeDecal = new __default_makeVolumeDecal;

}

} // end namespace h3d
} // end namespace mat
