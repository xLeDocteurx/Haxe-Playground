#include <hxcpp.h>

#ifndef INCLUDED_format_gif_Block
#include <format/gif/Block.h>
#endif
#ifndef INCLUDED_format_gif_Extension
#include <format/gif/Extension.h>
#endif
namespace format{
namespace gif{

::format::gif::Block Block_obj::BEOF;

::format::gif::Block Block_obj::BExtension( ::format::gif::Extension extension)
{
	return ::hx::CreateEnum< Block_obj >(HX_("BExtension",dd,5a,16,1a),1,1)->_hx_init(0,extension);
}

::format::gif::Block Block_obj::BFrame( ::Dynamic frame)
{
	return ::hx::CreateEnum< Block_obj >(HX_("BFrame",8b,b8,3e,fd),0,1)->_hx_init(0,frame);
}

bool Block_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BEOF",9a,b5,d4,2b)) { outValue = Block_obj::BEOF; return true; }
	if (inName==HX_("BExtension",dd,5a,16,1a)) { outValue = Block_obj::BExtension_dyn(); return true; }
	if (inName==HX_("BFrame",8b,b8,3e,fd)) { outValue = Block_obj::BFrame_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Block_obj)

int Block_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BEOF",9a,b5,d4,2b)) return 2;
	if (inName==HX_("BExtension",dd,5a,16,1a)) return 1;
	if (inName==HX_("BFrame",8b,b8,3e,fd)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Block_obj,BExtension,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Block_obj,BFrame,return)

int Block_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BEOF",9a,b5,d4,2b)) return 0;
	if (inName==HX_("BExtension",dd,5a,16,1a)) return 1;
	if (inName==HX_("BFrame",8b,b8,3e,fd)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Block_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BEOF",9a,b5,d4,2b)) return BEOF;
	if (inName==HX_("BExtension",dd,5a,16,1a)) return BExtension_dyn();
	if (inName==HX_("BFrame",8b,b8,3e,fd)) return BFrame_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Block_obj_sStaticFields[] = {
	HX_("BFrame",8b,b8,3e,fd),
	HX_("BExtension",dd,5a,16,1a),
	HX_("BEOF",9a,b5,d4,2b),
	::String(null())
};

::hx::Class Block_obj::__mClass;

Dynamic __Create_Block_obj() { return new Block_obj; }

void Block_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.gif.Block",4c,c1,15,c9), ::hx::TCanCast< Block_obj >,Block_obj_sStaticFields,0,
	&__Create_Block_obj, &__Create,
	&super::__SGetClass(), &CreateBlock_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Block_obj::__GetStatic;
}

void Block_obj::__boot()
{
BEOF = ::hx::CreateConstEnum< Block_obj >(HX_("BEOF",9a,b5,d4,2b),2);
}


} // end namespace format
} // end namespace gif
