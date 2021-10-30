#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_BitmapData
#include <hxd/BitmapData.h>
#endif
#ifndef INCLUDED_hxd_BitmapInnerDataImpl
#include <hxd/BitmapInnerDataImpl.h>
#endif
#ifndef INCLUDED_hxd_CustomCursor
#include <hxd/CustomCursor.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_888a9d48c6e638dd_46_new,"hxd.CustomCursor","new",0x5cb60c53,"hxd.CustomCursor.new","hxd/Cursor.hx",46,0xda4a43cd)
HX_LOCAL_STACK_FRAME(_hx_pos_888a9d48c6e638dd_86_dispose,"hxd.CustomCursor","dispose",0x7f473212,"hxd.CustomCursor.dispose","hxd/Cursor.hx",86,0xda4a43cd)
namespace hxd{

void CustomCursor_obj::__construct(::Array< ::Dynamic> frames,Float speed,int offsetX,int offsetY){
            	HX_STACKFRAME(&_hx_pos_888a9d48c6e638dd_46_new)
HXLINE(  47)		this->frames = frames;
HXLINE(  48)		this->speed = speed;
HXLINE(  49)		this->offsetX = offsetX;
HXLINE(  50)		this->offsetY = offsetY;
            	}

Dynamic CustomCursor_obj::__CreateEmpty() { return new CustomCursor_obj; }

void *CustomCursor_obj::_hx_vtable = 0;

Dynamic CustomCursor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomCursor_obj > _hx_result = new CustomCursor_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool CustomCursor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02ff37db;
}

void CustomCursor_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_888a9d48c6e638dd_86_dispose)
HXLINE(  87)		{
HXLINE(  87)			int _g = 0;
HXDLIN(  87)			::Array< ::Dynamic> _g1 = this->frames;
HXDLIN(  87)			while((_g < _g1->length)){
HXLINE(  87)				 ::hxd::BitmapData f = _g1->__get(_g).StaticCast<  ::hxd::BitmapData >();
HXDLIN(  87)				_g = (_g + 1);
HXLINE(  88)				f->data = null();
            			}
            		}
HXLINE(  89)		this->frames = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  90)		if (::hx::IsNotNull( this->alloc )) {
HXLINE( 104)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CustomCursor_obj,dispose,(void))


::hx::ObjectPtr< CustomCursor_obj > CustomCursor_obj::__new(::Array< ::Dynamic> frames,Float speed,int offsetX,int offsetY) {
	::hx::ObjectPtr< CustomCursor_obj > __this = new CustomCursor_obj();
	__this->__construct(frames,speed,offsetX,offsetY);
	return __this;
}

::hx::ObjectPtr< CustomCursor_obj > CustomCursor_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> frames,Float speed,int offsetX,int offsetY) {
	CustomCursor_obj *__this = (CustomCursor_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomCursor_obj), true, "hxd.CustomCursor"));
	*(void **)__this = CustomCursor_obj::_hx_vtable;
	__this->__construct(frames,speed,offsetX,offsetY);
	return __this;
}

CustomCursor_obj::CustomCursor_obj()
{
}

void CustomCursor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CustomCursor);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(alloc,"alloc");
	HX_MARK_END_CLASS();
}

void CustomCursor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(alloc,"alloc");
}

::hx::Val CustomCursor_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CustomCursor_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alloc") ) { alloc=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CustomCursor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("alloc",75,a4,93,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CustomCursor_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CustomCursor_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsFloat,(int)offsetof(CustomCursor_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsInt,(int)offsetof(CustomCursor_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsInt,(int)offsetof(CustomCursor_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CustomCursor_obj,alloc),HX_("alloc",75,a4,93,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CustomCursor_obj_sStaticStorageInfo = 0;
#endif

static ::String CustomCursor_obj_sMemberFields[] = {
	HX_("frames",a6,af,85,ac),
	HX_("speed",87,97,69,81),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("alloc",75,a4,93,21),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class CustomCursor_obj::__mClass;

void CustomCursor_obj::__register()
{
	CustomCursor_obj _hx_dummy;
	CustomCursor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.CustomCursor",e1,e6,66,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CustomCursor_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CustomCursor_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomCursor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomCursor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
