#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxd_Event
#include <hxd/Event.h>
#endif
#ifndef INCLUDED_hxd_EventKind
#include <hxd/EventKind.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8c6cf0bb62860d46_22_new,"hxd.Event","new",0x90f42c52,"hxd.Event.new","hxd/Event.hx",22,0x8fdcac5f)
HX_LOCAL_STACK_FRAME(_hx_pos_8c6cf0bb62860d46_49_toString,"hxd.Event","toString",0xa001e77a,"hxd.Event.toString","hxd/Event.hx",49,0x8fdcac5f)
namespace hxd{

void Event_obj::__construct( ::hxd::EventKind k,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_8c6cf0bb62860d46_22_new)
HXLINE(  36)		this->button = 0;
HXLINE(  43)		this->kind = k;
HXLINE(  44)		this->relX = x;
HXLINE(  45)		this->relY = y;
            	}

Dynamic Event_obj::__CreateEmpty() { return new Event_obj; }

void *Event_obj::_hx_vtable = 0;

Dynamic Event_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Event_obj > _hx_result = new Event_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Event_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1463af26;
}

::String Event_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_8c6cf0bb62860d46_49_toString)
HXDLIN(  49)		::String _hx_tmp = (::Std_obj::string(this->kind) + HX_("[",5b,00,00,00));
HXDLIN(  49)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::_hx_int(this->relX)) + HX_(",",2c,00,00,00));
HXDLIN(  49)		::String _hx_tmp2 = ((_hx_tmp1 + ::Std_obj::_hx_int(this->relY)) + HX_("]",5d,00,00,00));
HXDLIN(  49)		::String _hx_tmp3;
HXDLIN(  49)		switch((int)(this->kind->_hx_getIndex())){
            			case (int)5: {
HXDLIN(  49)				_hx_tmp3 = (HX_(",wheelDelta=",94,77,37,47) + this->wheelDelta);
            			}
            			break;
            			case (int)2: case (int)3: case (int)4: case (int)6: case (int)7: case (int)12: {
HXDLIN(  49)				_hx_tmp3 = HX_("",00,00,00,00);
            			}
            			break;
            			case (int)8: case (int)9: {
HXDLIN(  49)				_hx_tmp3 = (HX_(",keyCode=",7d,08,3e,d0) + this->keyCode);
            			}
            			break;
            			case (int)0: case (int)1: case (int)10: {
HXDLIN(  49)				_hx_tmp3 = (HX_(",button=",5f,ef,20,9f) + this->button);
            			}
            			break;
            			case (int)11: {
HXDLIN(  49)				_hx_tmp3 = (HX_(",charCode=",0e,7a,7b,10) + this->charCode);
            			}
            			break;
            		}
HXDLIN(  49)		return (_hx_tmp2 + _hx_tmp3);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,toString,return )


::hx::ObjectPtr< Event_obj > Event_obj::__new( ::hxd::EventKind k,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Event_obj > __this = new Event_obj();
	__this->__construct(k,__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Event_obj > Event_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::EventKind k,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Event_obj *__this = (Event_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Event_obj), true, "hxd.Event"));
	*(void **)__this = Event_obj::_hx_vtable;
	__this->__construct(k,__o_x,__o_y);
	return __this;
}

Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(kind,"kind");
	HX_MARK_MEMBER_NAME(relX,"relX");
	HX_MARK_MEMBER_NAME(relY,"relY");
	HX_MARK_MEMBER_NAME(relZ,"relZ");
	HX_MARK_MEMBER_NAME(propagate,"propagate");
	HX_MARK_MEMBER_NAME(cancel,"cancel");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(touchId,"touchId");
	HX_MARK_MEMBER_NAME(keyCode,"keyCode");
	HX_MARK_MEMBER_NAME(charCode,"charCode");
	HX_MARK_MEMBER_NAME(wheelDelta,"wheelDelta");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(kind,"kind");
	HX_VISIT_MEMBER_NAME(relX,"relX");
	HX_VISIT_MEMBER_NAME(relY,"relY");
	HX_VISIT_MEMBER_NAME(relZ,"relZ");
	HX_VISIT_MEMBER_NAME(propagate,"propagate");
	HX_VISIT_MEMBER_NAME(cancel,"cancel");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(touchId,"touchId");
	HX_VISIT_MEMBER_NAME(keyCode,"keyCode");
	HX_VISIT_MEMBER_NAME(charCode,"charCode");
	HX_VISIT_MEMBER_NAME(wheelDelta,"wheelDelta");
}

::hx::Val Event_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kind") ) { return ::hx::Val( kind ); }
		if (HX_FIELD_EQ(inName,"relX") ) { return ::hx::Val( relX ); }
		if (HX_FIELD_EQ(inName,"relY") ) { return ::hx::Val( relY ); }
		if (HX_FIELD_EQ(inName,"relZ") ) { return ::hx::Val( relZ ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel ); }
		if (HX_FIELD_EQ(inName,"button") ) { return ::hx::Val( button ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"touchId") ) { return ::hx::Val( touchId ); }
		if (HX_FIELD_EQ(inName,"keyCode") ) { return ::hx::Val( keyCode ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charCode") ) { return ::hx::Val( charCode ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"propagate") ) { return ::hx::Val( propagate ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wheelDelta") ) { return ::hx::Val( wheelDelta ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Event_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kind") ) { kind=inValue.Cast<  ::hxd::EventKind >(); return inValue; }
		if (HX_FIELD_EQ(inName,"relX") ) { relX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"relY") ) { relY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"relZ") ) { relZ=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { cancel=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"touchId") ) { touchId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charCode") ) { charCode=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"propagate") ) { propagate=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wheelDelta") ) { wheelDelta=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("kind",54,e1,09,47));
	outFields->push(HX_("relX",df,54,a7,4b));
	outFields->push(HX_("relY",e0,54,a7,4b));
	outFields->push(HX_("relZ",e1,54,a7,4b));
	outFields->push(HX_("propagate",69,e8,18,b0));
	outFields->push(HX_("cancel",7a,ed,33,b8));
	outFields->push(HX_("button",f2,61,e0,d9));
	outFields->push(HX_("touchId",7a,05,f8,d8));
	outFields->push(HX_("keyCode",6c,22,9e,9b));
	outFields->push(HX_("charCode",23,5f,24,9c));
	outFields->push(HX_("wheelDelta",5d,91,6e,a6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Event_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::EventKind */ ,(int)offsetof(Event_obj,kind),HX_("kind",54,e1,09,47)},
	{::hx::fsFloat,(int)offsetof(Event_obj,relX),HX_("relX",df,54,a7,4b)},
	{::hx::fsFloat,(int)offsetof(Event_obj,relY),HX_("relY",e0,54,a7,4b)},
	{::hx::fsFloat,(int)offsetof(Event_obj,relZ),HX_("relZ",e1,54,a7,4b)},
	{::hx::fsBool,(int)offsetof(Event_obj,propagate),HX_("propagate",69,e8,18,b0)},
	{::hx::fsBool,(int)offsetof(Event_obj,cancel),HX_("cancel",7a,ed,33,b8)},
	{::hx::fsInt,(int)offsetof(Event_obj,button),HX_("button",f2,61,e0,d9)},
	{::hx::fsInt,(int)offsetof(Event_obj,touchId),HX_("touchId",7a,05,f8,d8)},
	{::hx::fsInt,(int)offsetof(Event_obj,keyCode),HX_("keyCode",6c,22,9e,9b)},
	{::hx::fsInt,(int)offsetof(Event_obj,charCode),HX_("charCode",23,5f,24,9c)},
	{::hx::fsFloat,(int)offsetof(Event_obj,wheelDelta),HX_("wheelDelta",5d,91,6e,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Event_obj_sStaticStorageInfo = 0;
#endif

static ::String Event_obj_sMemberFields[] = {
	HX_("kind",54,e1,09,47),
	HX_("relX",df,54,a7,4b),
	HX_("relY",e0,54,a7,4b),
	HX_("relZ",e1,54,a7,4b),
	HX_("propagate",69,e8,18,b0),
	HX_("cancel",7a,ed,33,b8),
	HX_("button",f2,61,e0,d9),
	HX_("touchId",7a,05,f8,d8),
	HX_("keyCode",6c,22,9e,9b),
	HX_("charCode",23,5f,24,9c),
	HX_("wheelDelta",5d,91,6e,a6),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Event_obj::__mClass;

void Event_obj::__register()
{
	Event_obj _hx_dummy;
	Event_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.Event",60,5b,77,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Event_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Event_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Event_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Event_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
