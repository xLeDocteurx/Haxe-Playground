#include <hxcpp.h>

#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Quat
#include <h3d/Quat.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_DefaultMatrixes
#include <hxd/fmt/fbx/DefaultMatrixes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3f5d34e1e01e0903_54_new,"hxd.fmt.fbx.DefaultMatrixes","new",0xc2c11fb5,"hxd.fmt.fbx.DefaultMatrixes.new","hxd/fmt/fbx/BaseLibrary.hx",54,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_3f5d34e1e01e0903_69_toMatrix,"hxd.fmt.fbx.DefaultMatrixes","toMatrix",0x6350daa7,"hxd.fmt.fbx.DefaultMatrixes.toMatrix","hxd/fmt/fbx/BaseLibrary.hx",69,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_3f5d34e1e01e0903_80_toQuaternion,"hxd.fmt.fbx.DefaultMatrixes","toQuaternion",0x9953dc84,"hxd.fmt.fbx.DefaultMatrixes.toQuaternion","hxd/fmt/fbx/BaseLibrary.hx",80,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_3f5d34e1e01e0903_57_rightHandToLeft,"hxd.fmt.fbx.DefaultMatrixes","rightHandToLeft",0xa42d45c2,"hxd.fmt.fbx.DefaultMatrixes.rightHandToLeft","hxd/fmt/fbx/BaseLibrary.hx",57,0x92683fc4)
namespace hxd{
namespace fmt{
namespace fbx{

void DefaultMatrixes_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3f5d34e1e01e0903_54_new)
            	}

Dynamic DefaultMatrixes_obj::__CreateEmpty() { return new DefaultMatrixes_obj; }

void *DefaultMatrixes_obj::_hx_vtable = 0;

Dynamic DefaultMatrixes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultMatrixes_obj > _hx_result = new DefaultMatrixes_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DefaultMatrixes_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x692e0c75;
}

 ::h3d::Matrix DefaultMatrixes_obj::toMatrix(bool leftHand){
            	HX_GC_STACKFRAME(&_hx_pos_3f5d34e1e01e0903_69_toMatrix)
HXLINE(  70)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  71)		m->identity();
HXLINE(  72)		if (::hx::IsNotNull( this->scale )) {
HXLINE(  72)			m->scale(this->scale->x,this->scale->y,this->scale->z);
            		}
HXLINE(  73)		if (::hx::IsNotNull( this->rotate )) {
HXLINE(  73)			m->rotate(this->rotate->x,this->rotate->y,this->rotate->z);
            		}
HXLINE(  74)		if (::hx::IsNotNull( this->preRot )) {
HXLINE(  74)			m->rotate(this->preRot->x,this->preRot->y,this->preRot->z);
            		}
HXLINE(  75)		if (::hx::IsNotNull( this->trans )) {
HXLINE(  75)			m->translate(this->trans->x,this->trans->y,this->trans->z);
            		}
HXLINE(  76)		if (leftHand) {
HXLINE(  76)			m->_12 = -(m->_12);
HXDLIN(  76)			m->_13 = -(m->_13);
HXDLIN(  76)			m->_21 = -(m->_21);
HXDLIN(  76)			m->_31 = -(m->_31);
HXDLIN(  76)			m->_41 = -(m->_41);
            		}
HXLINE(  77)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultMatrixes_obj,toMatrix,return )

 ::h3d::Quat DefaultMatrixes_obj::toQuaternion(bool leftHand){
            	HX_GC_STACKFRAME(&_hx_pos_3f5d34e1e01e0903_80_toQuaternion)
HXLINE(  81)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  82)		m->identity();
HXLINE(  83)		if (::hx::IsNotNull( this->rotate )) {
HXLINE(  83)			m->rotate(this->rotate->x,this->rotate->y,this->rotate->z);
            		}
HXLINE(  84)		if (::hx::IsNotNull( this->preRot )) {
HXLINE(  84)			m->rotate(this->preRot->x,this->preRot->y,this->preRot->z);
            		}
HXLINE(  85)		if (leftHand) {
HXLINE(  85)			m->_12 = -(m->_12);
HXDLIN(  85)			m->_13 = -(m->_13);
HXDLIN(  85)			m->_21 = -(m->_21);
HXDLIN(  85)			m->_31 = -(m->_31);
HXDLIN(  85)			m->_41 = -(m->_41);
            		}
HXLINE(  86)		 ::h3d::Quat q =  ::h3d::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  87)		q->initRotateMatrix(m);
HXLINE(  88)		return q;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultMatrixes_obj,toQuaternion,return )

void DefaultMatrixes_obj::rightHandToLeft( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_3f5d34e1e01e0903_57_rightHandToLeft)
HXLINE(  62)		m->_12 = -(m->_12);
HXLINE(  63)		m->_13 = -(m->_13);
HXLINE(  64)		m->_21 = -(m->_21);
HXLINE(  65)		m->_31 = -(m->_31);
HXLINE(  66)		m->_41 = -(m->_41);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DefaultMatrixes_obj,rightHandToLeft,(void))


::hx::ObjectPtr< DefaultMatrixes_obj > DefaultMatrixes_obj::__new() {
	::hx::ObjectPtr< DefaultMatrixes_obj > __this = new DefaultMatrixes_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DefaultMatrixes_obj > DefaultMatrixes_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DefaultMatrixes_obj *__this = (DefaultMatrixes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultMatrixes_obj), true, "hxd.fmt.fbx.DefaultMatrixes"));
	*(void **)__this = DefaultMatrixes_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DefaultMatrixes_obj::DefaultMatrixes_obj()
{
}

void DefaultMatrixes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultMatrixes);
	HX_MARK_MEMBER_NAME(trans,"trans");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(rotate,"rotate");
	HX_MARK_MEMBER_NAME(preRot,"preRot");
	HX_MARK_MEMBER_NAME(wasRemoved,"wasRemoved");
	HX_MARK_MEMBER_NAME(transPos,"transPos");
	HX_MARK_END_CLASS();
}

void DefaultMatrixes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(trans,"trans");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(rotate,"rotate");
	HX_VISIT_MEMBER_NAME(preRot,"preRot");
	HX_VISIT_MEMBER_NAME(wasRemoved,"wasRemoved");
	HX_VISIT_MEMBER_NAME(transPos,"transPos");
}

::hx::Val DefaultMatrixes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"trans") ) { return ::hx::Val( trans ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate ); }
		if (HX_FIELD_EQ(inName,"preRot") ) { return ::hx::Val( preRot ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"transPos") ) { return ::hx::Val( transPos ); }
		if (HX_FIELD_EQ(inName,"toMatrix") ) { return ::hx::Val( toMatrix_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasRemoved") ) { return ::hx::Val( wasRemoved ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toQuaternion") ) { return ::hx::Val( toQuaternion_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DefaultMatrixes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"rightHandToLeft") ) { outValue = rightHandToLeft_dyn(); return true; }
	}
	return false;
}

::hx::Val DefaultMatrixes_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"trans") ) { trans=inValue.Cast<  ::h3d::col::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast<  ::h3d::col::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { rotate=inValue.Cast<  ::h3d::col::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preRot") ) { preRot=inValue.Cast<  ::h3d::col::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"transPos") ) { transPos=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasRemoved") ) { wasRemoved=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultMatrixes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("trans",28,98,1f,16));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("rotate",5b,46,20,cb));
	outFields->push(HX_("preRot",b4,b1,a7,ae));
	outFields->push(HX_("wasRemoved",77,0d,11,c2));
	outFields->push(HX_("transPos",4c,06,5d,da));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DefaultMatrixes_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::col::Point */ ,(int)offsetof(DefaultMatrixes_obj,trans),HX_("trans",28,98,1f,16)},
	{::hx::fsObject /*  ::h3d::col::Point */ ,(int)offsetof(DefaultMatrixes_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsObject /*  ::h3d::col::Point */ ,(int)offsetof(DefaultMatrixes_obj,rotate),HX_("rotate",5b,46,20,cb)},
	{::hx::fsObject /*  ::h3d::col::Point */ ,(int)offsetof(DefaultMatrixes_obj,preRot),HX_("preRot",b4,b1,a7,ae)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DefaultMatrixes_obj,wasRemoved),HX_("wasRemoved",77,0d,11,c2)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(DefaultMatrixes_obj,transPos),HX_("transPos",4c,06,5d,da)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DefaultMatrixes_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultMatrixes_obj_sMemberFields[] = {
	HX_("trans",28,98,1f,16),
	HX_("scale",8a,ce,ce,78),
	HX_("rotate",5b,46,20,cb),
	HX_("preRot",b4,b1,a7,ae),
	HX_("wasRemoved",77,0d,11,c2),
	HX_("transPos",4c,06,5d,da),
	HX_("toMatrix",1c,de,06,e3),
	HX_("toQuaternion",79,3e,a9,bd),
	::String(null()) };

::hx::Class DefaultMatrixes_obj::__mClass;

static ::String DefaultMatrixes_obj_sStaticFields[] = {
	HX_("rightHandToLeft",ed,ca,9b,e2),
	::String(null())
};

void DefaultMatrixes_obj::__register()
{
	DefaultMatrixes_obj _hx_dummy;
	DefaultMatrixes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.fbx.DefaultMatrixes",43,21,08,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DefaultMatrixes_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DefaultMatrixes_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DefaultMatrixes_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DefaultMatrixes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultMatrixes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultMatrixes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
