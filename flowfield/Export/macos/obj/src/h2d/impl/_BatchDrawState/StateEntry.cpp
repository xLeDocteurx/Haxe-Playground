#include <hxcpp.h>

#ifndef INCLUDED_h2d_impl__BatchDrawState_StateEntry
#include <h2d/impl/_BatchDrawState/StateEntry.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f303b74295c324a_194_new,"h2d.impl._BatchDrawState.StateEntry","new",0xbab7a7c9,"h2d.impl._BatchDrawState.StateEntry.new","h2d/impl/BatchDrawState.hx",194,0x4e4c3e51)
HX_LOCAL_STACK_FRAME(_hx_pos_7f303b74295c324a_199_set,"h2d.impl._BatchDrawState.StateEntry","set",0xbabb730b,"h2d.impl._BatchDrawState.StateEntry.set","h2d/impl/BatchDrawState.hx",199,0x4e4c3e51)
namespace h2d{
namespace impl{
namespace _BatchDrawState{

void StateEntry_obj::__construct( ::h3d::mat::Texture texture){
            	HX_STACKFRAME(&_hx_pos_7f303b74295c324a_194_new)
HXLINE( 195)		this->texture = texture;
HXLINE( 196)		this->count = 0;
            	}

Dynamic StateEntry_obj::__CreateEmpty() { return new StateEntry_obj; }

void *StateEntry_obj::_hx_vtable = 0;

Dynamic StateEntry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StateEntry_obj > _hx_result = new StateEntry_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StateEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a582d05;
}

 ::h2d::impl::_BatchDrawState::StateEntry StateEntry_obj::set( ::h3d::mat::Texture texture){
            	HX_STACKFRAME(&_hx_pos_7f303b74295c324a_199_set)
HXLINE( 200)		this->texture = texture;
HXLINE( 201)		this->count = 0;
HXLINE( 202)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StateEntry_obj,set,return )


::hx::ObjectPtr< StateEntry_obj > StateEntry_obj::__new( ::h3d::mat::Texture texture) {
	::hx::ObjectPtr< StateEntry_obj > __this = new StateEntry_obj();
	__this->__construct(texture);
	return __this;
}

::hx::ObjectPtr< StateEntry_obj > StateEntry_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture texture) {
	StateEntry_obj *__this = (StateEntry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StateEntry_obj), true, "h2d.impl._BatchDrawState.StateEntry"));
	*(void **)__this = StateEntry_obj::_hx_vtable;
	__this->__construct(texture);
	return __this;
}

StateEntry_obj::StateEntry_obj()
{
}

void StateEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StateEntry);
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void StateEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val StateEntry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return ::hx::Val( count ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StateEntry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::h2d::impl::_BatchDrawState::StateEntry >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StateEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("count",cf,44,63,4a));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StateEntry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(StateEntry_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsInt,(int)offsetof(StateEntry_obj,count),HX_("count",cf,44,63,4a)},
	{::hx::fsObject /*  ::h2d::impl::_BatchDrawState::StateEntry */ ,(int)offsetof(StateEntry_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StateEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String StateEntry_obj_sMemberFields[] = {
	HX_("texture",db,c8,e0,9e),
	HX_("count",cf,44,63,4a),
	HX_("next",f3,84,02,49),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class StateEntry_obj::__mClass;

void StateEntry_obj::__register()
{
	StateEntry_obj _hx_dummy;
	StateEntry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.impl._BatchDrawState.StateEntry",57,0f,6c,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StateEntry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StateEntry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StateEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StateEntry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace impl
} // end namespace _BatchDrawState
