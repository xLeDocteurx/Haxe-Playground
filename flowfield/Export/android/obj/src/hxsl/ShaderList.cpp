#include <hxcpp.h>

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif
#ifndef INCLUDED_hxsl__ShaderList_ShaderIterator
#include <hxsl/_ShaderList/ShaderIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_afe17582383625da_6_new,"hxsl.ShaderList","new",0xbc7217da,"hxsl.ShaderList.new","hxsl/ShaderList.hx",6,0xbb7c7435)
HX_LOCAL_STACK_FRAME(_hx_pos_afe17582383625da_11_clone,"hxsl.ShaderList","clone",0xfe3dad57,"hxsl.ShaderList.clone","hxsl/ShaderList.hx",11,0xbb7c7435)
HX_LOCAL_STACK_FRAME(_hx_pos_afe17582383625da_14_iterator,"hxsl.ShaderList","iterator",0x48e4a834,"hxsl.ShaderList.iterator","hxsl/ShaderList.hx",14,0xbb7c7435)
HX_LOCAL_STACK_FRAME(_hx_pos_afe17582383625da_17_iterateTo,"hxsl.ShaderList","iterateTo",0x7f26d50f,"hxsl.ShaderList.iterateTo","hxsl/ShaderList.hx",17,0xbb7c7435)
HX_LOCAL_STACK_FRAME(_hx_pos_afe17582383625da_20_addSort,"hxsl.ShaderList","addSort",0x5dc5f699,"hxsl.ShaderList.addSort","hxsl/ShaderList.hx",20,0xbb7c7435)
namespace hxsl{

void ShaderList_obj::__construct( ::hxsl::Shader s, ::hxsl::ShaderList n){
            	HX_STACKFRAME(&_hx_pos_afe17582383625da_6_new)
HXLINE(   7)		this->s = s;
HXLINE(   8)		this->next = n;
            	}

Dynamic ShaderList_obj::__CreateEmpty() { return new ShaderList_obj; }

void *ShaderList_obj::_hx_vtable = 0;

Dynamic ShaderList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderList_obj > _hx_result = new ShaderList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShaderList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f320970;
}

 ::hxsl::ShaderList ShaderList_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_afe17582383625da_11_clone)
HXDLIN(  11)		 ::hxsl::Shader _hx_tmp = this->s->clone();
HXDLIN(  11)		 ::hxsl::ShaderList _hx_tmp1;
HXDLIN(  11)		if (::hx::IsNull( this->next )) {
HXDLIN(  11)			_hx_tmp1 = null();
            		}
            		else {
HXDLIN(  11)			_hx_tmp1 = this->next->clone();
            		}
HXDLIN(  11)		return  ::hxsl::ShaderList_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderList_obj,clone,return )

 ::hxsl::_ShaderList::ShaderIterator ShaderList_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_afe17582383625da_14_iterator)
HXDLIN(  14)		return  ::hxsl::_ShaderList::ShaderIterator_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderList_obj,iterator,return )

 ::hxsl::_ShaderList::ShaderIterator ShaderList_obj::iterateTo( ::hxsl::ShaderList s){
            	HX_GC_STACKFRAME(&_hx_pos_afe17582383625da_17_iterateTo)
HXDLIN(  17)		return  ::hxsl::_ShaderList::ShaderIterator_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderList_obj,iterateTo,return )

 ::hxsl::ShaderList ShaderList_obj::addSort( ::hxsl::Shader s, ::hxsl::ShaderList shaders){
            	HX_GC_STACKFRAME(&_hx_pos_afe17582383625da_20_addSort)
HXLINE(  21)		 ::hxsl::ShaderList prev = null();
HXLINE(  22)		 ::hxsl::ShaderList hd = shaders;
HXLINE(  24)		while(true){
HXLINE(  24)			bool _hx_tmp;
HXDLIN(  24)			if (::hx::IsNotNull( hd )) {
HXLINE(  24)				_hx_tmp = (hd->s->priority < s->priority);
            			}
            			else {
HXLINE(  24)				_hx_tmp = false;
            			}
HXDLIN(  24)			if (!(_hx_tmp)) {
HXLINE(  24)				goto _hx_goto_4;
            			}
HXLINE(  25)			prev = hd;
HXLINE(  26)			hd = hd->next;
            		}
            		_hx_goto_4:;
HXLINE(  28)		if (::hx::IsNull( prev )) {
HXLINE(  29)			return  ::hxsl::ShaderList_obj::__alloc( HX_CTX ,s,shaders);
            		}
HXLINE(  30)		prev->next =  ::hxsl::ShaderList_obj::__alloc( HX_CTX ,s,prev->next);
HXLINE(  31)		return shaders;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ShaderList_obj,addSort,return )


::hx::ObjectPtr< ShaderList_obj > ShaderList_obj::__new( ::hxsl::Shader s, ::hxsl::ShaderList n) {
	::hx::ObjectPtr< ShaderList_obj > __this = new ShaderList_obj();
	__this->__construct(s,n);
	return __this;
}

::hx::ObjectPtr< ShaderList_obj > ShaderList_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxsl::Shader s, ::hxsl::ShaderList n) {
	ShaderList_obj *__this = (ShaderList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderList_obj), true, "hxsl.ShaderList"));
	*(void **)__this = ShaderList_obj::_hx_vtable;
	__this->__construct(s,n);
	return __this;
}

ShaderList_obj::ShaderList_obj()
{
}

void ShaderList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderList);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ShaderList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val ShaderList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return ::hx::Val( s ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iterateTo") ) { return ::hx::Val( iterateTo_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShaderList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"addSort") ) { outValue = addSort_dyn(); return true; }
	}
	return false;
}

::hx::Val ShaderList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast<  ::hxsl::Shader >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("s",73,00,00,00));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderList_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxsl::Shader */ ,(int)offsetof(ShaderList_obj,s),HX_("s",73,00,00,00)},
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(ShaderList_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderList_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderList_obj_sMemberFields[] = {
	HX_("s",73,00,00,00),
	HX_("next",f3,84,02,49),
	HX_("clone",5d,13,63,48),
	HX_("iterator",ee,49,9a,93),
	HX_("iterateTo",15,b6,5e,93),
	::String(null()) };

::hx::Class ShaderList_obj::__mClass;

static ::String ShaderList_obj_sStaticFields[] = {
	HX_("addSort",1f,6a,95,88),
	::String(null())
};

void ShaderList_obj::__register()
{
	ShaderList_obj _hx_dummy;
	ShaderList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.ShaderList",e8,e2,a6,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderList_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShaderList_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
