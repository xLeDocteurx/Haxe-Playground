#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_88c0ded3fe2b6af4_12_new,"h3d.mat.BaseMaterial","new",0xd7ed83cd,"h3d.mat.BaseMaterial.new","h3d/mat/BaseMaterial.hx",12,0xc3c98201)
HX_LOCAL_STACK_FRAME(_hx_pos_88c0ded3fe2b6af4_16_addPass,"h3d.mat.BaseMaterial","addPass",0x1b2b957f,"h3d.mat.BaseMaterial.addPass","h3d/mat/BaseMaterial.hx",16,0xc3c98201)
HX_LOCAL_STACK_FRAME(_hx_pos_88c0ded3fe2b6af4_30_removePass,"h3d.mat.BaseMaterial","removePass",0xa53e6368,"h3d.mat.BaseMaterial.removePass","h3d/mat/BaseMaterial.hx",30,0xc3c98201)
HX_LOCAL_STACK_FRAME(_hx_pos_88c0ded3fe2b6af4_48_get_mainPass,"h3d.mat.BaseMaterial","get_mainPass",0x36bb04a6,"h3d.mat.BaseMaterial.get_mainPass","h3d/mat/BaseMaterial.hx",48,0xc3c98201)
HX_LOCAL_STACK_FRAME(_hx_pos_88c0ded3fe2b6af4_51_getPasses,"h3d.mat.BaseMaterial","getPasses",0xb18ddfe2,"h3d.mat.BaseMaterial.getPasses","h3d/mat/BaseMaterial.hx",51,0xc3c98201)
HX_LOCAL_STACK_FRAME(_hx_pos_88c0ded3fe2b6af4_61_getPass,"h3d.mat.BaseMaterial","getPass",0xb1710274,"h3d.mat.BaseMaterial.getPass","h3d/mat/BaseMaterial.hx",61,0xc3c98201)
HX_LOCAL_STACK_FRAME(_hx_pos_88c0ded3fe2b6af4_71_allocPass,"h3d.mat.BaseMaterial","allocPass",0x78481713,"h3d.mat.BaseMaterial.allocPass","h3d/mat/BaseMaterial.hx",71,0xc3c98201)
HX_LOCAL_STACK_FRAME(_hx_pos_88c0ded3fe2b6af4_80_clone,"h3d.mat.BaseMaterial","clone",0x80623c0a,"h3d.mat.BaseMaterial.clone","h3d/mat/BaseMaterial.hx",80,0xc3c98201)
namespace h3d{
namespace mat{

void BaseMaterial_obj::__construct( ::hxsl::Shader shader){
            	HX_GC_STACKFRAME(&_hx_pos_88c0ded3fe2b6af4_12_new)
HXDLIN(  12)		if (::hx::IsNotNull( shader )) {
HXLINE(  13)			( ( ::h3d::mat::Pass)(this->addPass( ::h3d::mat::Pass_obj::__alloc( HX_CTX ,HX_("default",c1,d8,c3,9b),null(),null()))) )->addShader(shader).StaticCast<  ::hxsl::Shader >();
            		}
            	}

Dynamic BaseMaterial_obj::__CreateEmpty() { return new BaseMaterial_obj; }

void *BaseMaterial_obj::_hx_vtable = 0;

Dynamic BaseMaterial_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseMaterial_obj > _hx_result = new BaseMaterial_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BaseMaterial_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x531b0df8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x531b0df8;
	} else {
		return inClassId==(int)0x5e9df023;
	}
}

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_mat_BaseMaterial__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *BaseMaterial_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa6f1a21a: return &_hx_h3d_mat_BaseMaterial__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	return super::_hx_getInterface(inHash);
}

 ::Dynamic BaseMaterial_obj::addPass( ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_88c0ded3fe2b6af4_16_addPass)
HXLINE(  17)		 ::h3d::mat::Pass prev = null();
HXDLIN(  17)		 ::h3d::mat::Pass cur = this->passes;
HXLINE(  18)		while(::hx::IsNotNull( cur )){
HXLINE(  19)			prev = cur;
HXLINE(  20)			cur = cur->nextPass;
            		}
HXLINE(  22)		if (::hx::IsNull( prev )) {
HXLINE(  23)			this->passes = ( ( ::h3d::mat::Pass)(p) );
            		}
            		else {
HXLINE(  25)			prev->nextPass = ( ( ::h3d::mat::Pass)(p) );
            		}
HXLINE(  26)		( ( ::h3d::mat::Pass)(p) )->nextPass = null();
HXLINE(  27)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseMaterial_obj,addPass,return )

bool BaseMaterial_obj::removePass( ::h3d::mat::Pass p){
            	HX_STACKFRAME(&_hx_pos_88c0ded3fe2b6af4_30_removePass)
HXLINE(  31)		 ::h3d::mat::Pass prev = null();
HXDLIN(  31)		 ::h3d::mat::Pass cur = this->passes;
HXLINE(  32)		while(::hx::IsNotNull( cur )){
HXLINE(  33)			if (::hx::IsInstanceEq( cur,p )) {
HXLINE(  34)				if (::hx::IsNull( prev )) {
HXLINE(  35)					this->passes = p->nextPass;
            				}
            				else {
HXLINE(  37)					prev->nextPass = p->nextPass;
            				}
HXLINE(  38)				p->nextPass = null();
HXLINE(  39)				return true;
            			}
HXLINE(  41)			prev = cur;
HXLINE(  42)			cur = cur->nextPass;
            		}
HXLINE(  44)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseMaterial_obj,removePass,return )

 ::h3d::mat::Pass BaseMaterial_obj::get_mainPass(){
            	HX_STACKFRAME(&_hx_pos_88c0ded3fe2b6af4_48_get_mainPass)
HXDLIN(  48)		return this->passes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseMaterial_obj,get_mainPass,return )

::Array< ::Dynamic> BaseMaterial_obj::getPasses(){
            	HX_STACKFRAME(&_hx_pos_88c0ded3fe2b6af4_51_getPasses)
HXLINE(  52)		 ::h3d::mat::Pass p = this->passes;
HXLINE(  53)		::Array< ::Dynamic> out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  54)		while(::hx::IsNotNull( p )){
HXLINE(  55)			out->push(p);
HXLINE(  56)			p = p->nextPass;
            		}
HXLINE(  58)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseMaterial_obj,getPasses,return )

 ::h3d::mat::Pass BaseMaterial_obj::getPass(::String name){
            	HX_STACKFRAME(&_hx_pos_88c0ded3fe2b6af4_61_getPass)
HXLINE(  62)		 ::h3d::mat::Pass p = this->passes;
HXLINE(  63)		while(::hx::IsNotNull( p )){
HXLINE(  64)			if ((p->name == name)) {
HXLINE(  65)				return p;
            			}
HXLINE(  66)			p = p->nextPass;
            		}
HXLINE(  68)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseMaterial_obj,getPass,return )

 ::h3d::mat::Pass BaseMaterial_obj::allocPass(::String name, ::Dynamic __o_inheritMain){
            		 ::Dynamic inheritMain = __o_inheritMain;
            		if (::hx::IsNull(__o_inheritMain)) inheritMain = true;
            	HX_GC_STACKFRAME(&_hx_pos_88c0ded3fe2b6af4_71_allocPass)
HXLINE(  72)		 ::h3d::mat::Pass p = this->getPass(name);
HXLINE(  73)		if (::hx::IsNotNull( p )) {
HXLINE(  73)			return p;
            		}
HXLINE(  74)		 ::h3d::mat::Pass p1;
HXDLIN(  74)		if (( (bool)(inheritMain) )) {
HXLINE(  74)			p1 = this->passes;
            		}
            		else {
HXLINE(  74)			p1 = null();
            		}
HXDLIN(  74)		 ::h3d::mat::Pass p2 =  ::h3d::mat::Pass_obj::__alloc( HX_CTX ,name,null(),p1);
HXLINE(  75)		bool _hx_tmp;
HXDLIN(  75)		if (( (bool)(inheritMain) )) {
HXLINE(  75)			_hx_tmp = ::hx::IsNotNull( this->passes );
            		}
            		else {
HXLINE(  75)			_hx_tmp = false;
            		}
HXDLIN(  75)		if (_hx_tmp) {
HXLINE(  75)			p2->set_batchMode(this->passes->batchMode);
            		}
HXLINE(  76)		this->addPass(p2);
HXLINE(  77)		return p2;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseMaterial_obj,allocPass,return )

 ::h3d::mat::BaseMaterial BaseMaterial_obj::clone( ::h3d::mat::BaseMaterial m){
            	HX_GC_STACKFRAME(&_hx_pos_88c0ded3fe2b6af4_80_clone)
HXLINE(  81)		if (::hx::IsNull( m )) {
HXLINE(  81)			m =  ::h3d::mat::BaseMaterial_obj::__alloc( HX_CTX ,null());
            		}
HXLINE(  82)		m->passes->load(this->passes);
HXLINE(  84)		m->name = this->name;
HXLINE(  85)		m->set_props(this->props);
HXLINE(  86)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseMaterial_obj,clone,return )


::hx::ObjectPtr< BaseMaterial_obj > BaseMaterial_obj::__new( ::hxsl::Shader shader) {
	::hx::ObjectPtr< BaseMaterial_obj > __this = new BaseMaterial_obj();
	__this->__construct(shader);
	return __this;
}

::hx::ObjectPtr< BaseMaterial_obj > BaseMaterial_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxsl::Shader shader) {
	BaseMaterial_obj *__this = (BaseMaterial_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseMaterial_obj), true, "h3d.mat.BaseMaterial"));
	*(void **)__this = BaseMaterial_obj::_hx_vtable;
	__this->__construct(shader);
	return __this;
}

BaseMaterial_obj::BaseMaterial_obj()
{
}

void BaseMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseMaterial);
	HX_MARK_MEMBER_NAME(passes,"passes");
	HX_MARK_MEMBER_NAME(name,"name");
	 ::hxd::impl::AnyProps_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(passes,"passes");
	HX_VISIT_MEMBER_NAME(name,"name");
	 ::hxd::impl::AnyProps_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseMaterial_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"passes") ) { return ::hx::Val( passes ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addPass") ) { return ::hx::Val( addPass_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPass") ) { return ::hx::Val( getPass_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mainPass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mainPass() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getPasses") ) { return ::hx::Val( getPasses_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocPass") ) { return ::hx::Val( allocPass_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removePass") ) { return ::hx::Val( removePass_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_mainPass") ) { return ::hx::Val( get_mainPass_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseMaterial_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"passes") ) { passes=inValue.Cast<  ::h3d::mat::Pass >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("passes",7f,d3,31,ee));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("mainPass",aa,59,d4,a2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseMaterial_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Pass */ ,(int)offsetof(BaseMaterial_obj,passes),HX_("passes",7f,d3,31,ee)},
	{::hx::fsString,(int)offsetof(BaseMaterial_obj,name),HX_("name",4b,72,ff,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseMaterial_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseMaterial_obj_sMemberFields[] = {
	HX_("passes",7f,d3,31,ee),
	HX_("name",4b,72,ff,48),
	HX_("addPass",92,27,8f,86),
	HX_("removePass",35,1f,71,c7),
	HX_("get_mainPass",b3,0d,ee,57),
	HX_("getPasses",b5,5c,88,6a),
	HX_("getPass",87,94,d4,1c),
	HX_("allocPass",e6,93,42,31),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class BaseMaterial_obj::__mClass;

void BaseMaterial_obj::__register()
{
	BaseMaterial_obj _hx_dummy;
	BaseMaterial_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.mat.BaseMaterial",5b,99,fa,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseMaterial_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseMaterial_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseMaterial_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseMaterial_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace mat
