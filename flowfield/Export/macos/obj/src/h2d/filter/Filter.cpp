#include <hxcpp.h>

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
#ifndef INCLUDED_h2d_filter_Filter
#include <h2d/filter/Filter.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_20268cc6b0a720bc_17_new,"h2d.filter.Filter","new",0x8ff1f2ac,"h2d.filter.Filter.new","h2d/filter/Filter.hx",17,0x28565024)
HX_LOCAL_STACK_FRAME(_hx_pos_20268cc6b0a720bc_45_get_enable,"h2d.filter.Filter","get_enable",0x57531d80,"h2d.filter.Filter.get_enable","h2d/filter/Filter.hx",45,0x28565024)
HX_LOCAL_STACK_FRAME(_hx_pos_20268cc6b0a720bc_46_set_enable,"h2d.filter.Filter","set_enable",0x5ad0bbf4,"h2d.filter.Filter.set_enable","h2d/filter/Filter.hx",46,0x28565024)
HX_LOCAL_STACK_FRAME(_hx_pos_20268cc6b0a720bc_51_sync,"h2d.filter.Filter","sync",0x671f9a8f,"h2d.filter.Filter.sync","h2d/filter/Filter.hx",51,0x28565024)
HX_LOCAL_STACK_FRAME(_hx_pos_20268cc6b0a720bc_58_bind,"h2d.filter.Filter","bind",0x5bd6d5f1,"h2d.filter.Filter.bind","h2d/filter/Filter.hx",58,0x28565024)
HX_LOCAL_STACK_FRAME(_hx_pos_20268cc6b0a720bc_65_unbind,"h2d.filter.Filter","unbind",0x918b51ca,"h2d.filter.Filter.unbind","h2d/filter/Filter.hx",65,0x28565024)
HX_LOCAL_STACK_FRAME(_hx_pos_20268cc6b0a720bc_75_getBounds,"h2d.filter.Filter","getBounds",0x2eb6f2f7,"h2d.filter.Filter.getBounds","h2d/filter/Filter.hx",75,0x28565024)
HX_LOCAL_STACK_FRAME(_hx_pos_20268cc6b0a720bc_87_draw,"h2d.filter.Filter","draw",0x5d300c38,"h2d.filter.Filter.draw","h2d/filter/Filter.hx",87,0x28565024)
namespace h2d{
namespace filter{

void Filter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_20268cc6b0a720bc_17_new)
HXLINE(  40)		this->enable = true;
HXLINE(  36)		this->smooth = false;
HXLINE(  30)		this->boundsExtend = ((Float)0.);
HXLINE(  24)		this->autoBounds = true;
            	}

Dynamic Filter_obj::__CreateEmpty() { return new Filter_obj; }

void *Filter_obj::_hx_vtable = 0;

Dynamic Filter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Filter_obj > _hx_result = new Filter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Filter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5824e0aa;
}

bool Filter_obj::get_enable(){
            	HX_STACKFRAME(&_hx_pos_20268cc6b0a720bc_45_get_enable)
HXDLIN(  45)		return this->enable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter_obj,get_enable,return )

bool Filter_obj::set_enable(bool v){
            	HX_STACKFRAME(&_hx_pos_20268cc6b0a720bc_46_set_enable)
HXDLIN(  46)		return (this->enable = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,set_enable,return )

void Filter_obj::sync( ::h2d::RenderContext ctx, ::h2d::Object s){
            	HX_STACKFRAME(&_hx_pos_20268cc6b0a720bc_51_sync)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Filter_obj,sync,(void))

void Filter_obj::bind( ::h2d::Object s){
            	HX_STACKFRAME(&_hx_pos_20268cc6b0a720bc_58_bind)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,bind,(void))

void Filter_obj::unbind( ::h2d::Object s){
            	HX_STACKFRAME(&_hx_pos_20268cc6b0a720bc_65_unbind)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,unbind,(void))

void Filter_obj::getBounds( ::h2d::Object s, ::h2d::col::Bounds bounds){
            	HX_STACKFRAME(&_hx_pos_20268cc6b0a720bc_75_getBounds)
HXLINE(  76)		s->getBounds(s,bounds);
HXLINE(  77)		 ::h2d::col::Bounds bounds1 = bounds;
HXDLIN(  77)		bounds1->xMin = (bounds1->xMin - this->boundsExtend);
HXLINE(  78)		 ::h2d::col::Bounds bounds2 = bounds;
HXDLIN(  78)		bounds2->yMin = (bounds2->yMin - this->boundsExtend);
HXLINE(  79)		 ::h2d::col::Bounds bounds3 = bounds;
HXDLIN(  79)		bounds3->xMax = (bounds3->xMax + this->boundsExtend);
HXLINE(  80)		 ::h2d::col::Bounds bounds4 = bounds;
HXDLIN(  80)		bounds4->yMax = (bounds4->yMax + this->boundsExtend);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Filter_obj,getBounds,(void))

 ::h2d::Tile Filter_obj::draw( ::h2d::RenderContext ctx, ::h2d::Tile input){
            	HX_STACKFRAME(&_hx_pos_20268cc6b0a720bc_87_draw)
HXDLIN(  87)		return input;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Filter_obj,draw,return )


::hx::ObjectPtr< Filter_obj > Filter_obj::__new() {
	::hx::ObjectPtr< Filter_obj > __this = new Filter_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Filter_obj > Filter_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Filter_obj *__this = (Filter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Filter_obj), false, "h2d.filter.Filter"));
	*(void **)__this = Filter_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Filter_obj::Filter_obj()
{
}

::hx::Val Filter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return ::hx::Val( smooth ); }
		if (HX_FIELD_EQ(inName,"enable") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_enable() : enable ); }
		if (HX_FIELD_EQ(inName,"unbind") ) { return ::hx::Val( unbind_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoBounds") ) { return ::hx::Val( autoBounds ); }
		if (HX_FIELD_EQ(inName,"get_enable") ) { return ::hx::Val( get_enable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enable") ) { return ::hx::Val( set_enable_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boundsExtend") ) { return ::hx::Val( boundsExtend ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Filter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enable(inValue.Cast< bool >()) );enable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoBounds") ) { autoBounds=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boundsExtend") ) { boundsExtend=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Filter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("autoBounds",44,97,e8,d1));
	outFields->push(HX_("boundsExtend",2f,92,04,93));
	outFields->push(HX_("smooth",2e,08,6b,07));
	outFields->push(HX_("enable",83,ae,87,f8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Filter_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Filter_obj,autoBounds),HX_("autoBounds",44,97,e8,d1)},
	{::hx::fsFloat,(int)offsetof(Filter_obj,boundsExtend),HX_("boundsExtend",2f,92,04,93)},
	{::hx::fsBool,(int)offsetof(Filter_obj,smooth),HX_("smooth",2e,08,6b,07)},
	{::hx::fsBool,(int)offsetof(Filter_obj,enable),HX_("enable",83,ae,87,f8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Filter_obj_sStaticStorageInfo = 0;
#endif

static ::String Filter_obj_sMemberFields[] = {
	HX_("autoBounds",44,97,e8,d1),
	HX_("boundsExtend",2f,92,04,93),
	HX_("smooth",2e,08,6b,07),
	HX_("enable",83,ae,87,f8),
	HX_("get_enable",4c,1e,0f,e9),
	HX_("set_enable",c0,bc,8c,ec),
	HX_("sync",5b,ba,5f,4c),
	HX_("bind",bd,f5,16,41),
	HX_("unbind",96,fc,eb,5e),
	HX_("getBounds",ab,0f,74,e2),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class Filter_obj::__mClass;

void Filter_obj::__register()
{
	Filter_obj _hx_dummy;
	Filter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.filter.Filter",ba,6c,08,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Filter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Filter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Filter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Filter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace filter
