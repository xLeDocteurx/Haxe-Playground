#include <hxcpp.h>

#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_anim_AnimatedObject
#include <h3d/anim/AnimatedObject.h>
#endif
#ifndef INCLUDED_h3d_anim_LinearFrame
#include <h3d/anim/LinearFrame.h>
#endif
#ifndef INCLUDED_h3d_anim_LinearObject
#include <h3d/anim/LinearObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_82ce7356fd556dff_26_new,"h3d.anim.LinearObject","new",0xf72f079e,"h3d.anim.LinearObject.new","h3d/anim/LinearAnimation.hx",26,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_82ce7356fd556dff_37_clone,"h3d.anim.LinearObject","clone",0x15e9161b,"h3d.anim.LinearObject.clone","h3d/anim/LinearAnimation.hx",37,0x1f025447)
namespace h3d{
namespace anim{

void LinearObject_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_82ce7356fd556dff_26_new)
HXLINE(  27)		this->hasPosition = true;
HXLINE(  26)		super::__construct(name);
            	}

Dynamic LinearObject_obj::__CreateEmpty() { return new LinearObject_obj; }

void *LinearObject_obj::_hx_vtable = 0;

Dynamic LinearObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LinearObject_obj > _hx_result = new LinearObject_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LinearObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c82ecc8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c82ecc8;
	} else {
		return inClassId==(int)0x7b93f0ee;
	}
}

 ::h3d::anim::AnimatedObject LinearObject_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_82ce7356fd556dff_37_clone)
HXLINE(  38)		 ::h3d::anim::LinearObject o =  ::h3d::anim::LinearObject_obj::__alloc( HX_CTX ,this->objectName);
HXLINE(  39)		o->hasPosition = this->hasPosition;
HXLINE(  40)		o->hasRotation = this->hasRotation;
HXLINE(  41)		o->hasScale = this->hasScale;
HXLINE(  42)		o->frames = this->frames;
HXLINE(  43)		o->alphas = this->alphas;
HXLINE(  44)		o->uvs = this->uvs;
HXLINE(  45)		o->propName = this->propName;
HXLINE(  46)		o->propValues = this->propValues;
HXLINE(  47)		return o;
            	}



::hx::ObjectPtr< LinearObject_obj > LinearObject_obj::__new(::String name) {
	::hx::ObjectPtr< LinearObject_obj > __this = new LinearObject_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< LinearObject_obj > LinearObject_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	LinearObject_obj *__this = (LinearObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LinearObject_obj), true, "h3d.anim.LinearObject"));
	*(void **)__this = LinearObject_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

LinearObject_obj::LinearObject_obj()
{
}

void LinearObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LinearObject);
	HX_MARK_MEMBER_NAME(hasPosition,"hasPosition");
	HX_MARK_MEMBER_NAME(hasRotation,"hasRotation");
	HX_MARK_MEMBER_NAME(hasScale,"hasScale");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(alphas,"alphas");
	HX_MARK_MEMBER_NAME(uvs,"uvs");
	HX_MARK_MEMBER_NAME(propName,"propName");
	HX_MARK_MEMBER_NAME(propValues,"propValues");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(propCurrentValue,"propCurrentValue");
	 ::h3d::anim::AnimatedObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LinearObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hasPosition,"hasPosition");
	HX_VISIT_MEMBER_NAME(hasRotation,"hasRotation");
	HX_VISIT_MEMBER_NAME(hasScale,"hasScale");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(alphas,"alphas");
	HX_VISIT_MEMBER_NAME(uvs,"uvs");
	HX_VISIT_MEMBER_NAME(propName,"propName");
	HX_VISIT_MEMBER_NAME(propValues,"propValues");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(propCurrentValue,"propCurrentValue");
	 ::h3d::anim::AnimatedObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LinearObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { return ::hx::Val( uvs ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"alphas") ) { return ::hx::Val( alphas ); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return ::hx::Val( matrix ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasScale") ) { return ::hx::Val( hasScale ); }
		if (HX_FIELD_EQ(inName,"propName") ) { return ::hx::Val( propName ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"propValues") ) { return ::hx::Val( propValues ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasPosition") ) { return ::hx::Val( hasPosition ); }
		if (HX_FIELD_EQ(inName,"hasRotation") ) { return ::hx::Val( hasRotation ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"propCurrentValue") ) { return ::hx::Val( propCurrentValue ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LinearObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { uvs=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphas") ) { alphas=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasScale") ) { hasScale=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"propName") ) { propName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"propValues") ) { propValues=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasPosition") ) { hasPosition=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasRotation") ) { hasRotation=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"propCurrentValue") ) { propCurrentValue=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("hasPosition",23,86,b1,9d));
	outFields->push(HX_("hasRotation",b8,22,3d,db));
	outFields->push(HX_("hasScale",d0,18,27,05));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("alphas",55,cb,3b,42));
	outFields->push(HX_("uvs",f2,2e,59,00));
	outFields->push(HX_("propName",8e,73,f7,9c));
	outFields->push(HX_("propValues",e5,1b,a4,92));
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("propCurrentValue",bb,e0,53,ab));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LinearObject_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(LinearObject_obj,hasPosition),HX_("hasPosition",23,86,b1,9d)},
	{::hx::fsBool,(int)offsetof(LinearObject_obj,hasRotation),HX_("hasRotation",b8,22,3d,db)},
	{::hx::fsBool,(int)offsetof(LinearObject_obj,hasScale),HX_("hasScale",d0,18,27,05)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(LinearObject_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(LinearObject_obj,alphas),HX_("alphas",55,cb,3b,42)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(LinearObject_obj,uvs),HX_("uvs",f2,2e,59,00)},
	{::hx::fsString,(int)offsetof(LinearObject_obj,propName),HX_("propName",8e,73,f7,9c)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(LinearObject_obj,propValues),HX_("propValues",e5,1b,a4,92)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(LinearObject_obj,matrix),HX_("matrix",41,36,c8,bb)},
	{::hx::fsFloat,(int)offsetof(LinearObject_obj,propCurrentValue),HX_("propCurrentValue",bb,e0,53,ab)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LinearObject_obj_sStaticStorageInfo = 0;
#endif

static ::String LinearObject_obj_sMemberFields[] = {
	HX_("hasPosition",23,86,b1,9d),
	HX_("hasRotation",b8,22,3d,db),
	HX_("hasScale",d0,18,27,05),
	HX_("frames",a6,af,85,ac),
	HX_("alphas",55,cb,3b,42),
	HX_("uvs",f2,2e,59,00),
	HX_("propName",8e,73,f7,9c),
	HX_("propValues",e5,1b,a4,92),
	HX_("matrix",41,36,c8,bb),
	HX_("propCurrentValue",bb,e0,53,ab),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class LinearObject_obj::__mClass;

void LinearObject_obj::__register()
{
	LinearObject_obj _hx_dummy;
	LinearObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.anim.LinearObject",ac,a0,37,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LinearObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LinearObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LinearObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LinearObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace anim
