#include <hxcpp.h>

#ifndef INCLUDED_h3d_pass_PassList
#include <h3d/pass/PassList.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif
#ifndef INCLUDED_h3d_pass_SortByMaterial
#include <h3d/pass/SortByMaterial.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fce4a436c0da8eeb_3_new,"h3d.pass.SortByMaterial","new",0xb01552f6,"h3d.pass.SortByMaterial.new","h3d/pass/SortByMaterial.hx",3,0xb4ab74da)
HX_LOCAL_STACK_FRAME(_hx_pos_fce4a436c0da8eeb_15_sort,"h3d.pass.SortByMaterial","sort",0x65e8e808,"h3d.pass.SortByMaterial.sort","h3d/pass/SortByMaterial.hx",15,0xb4ab74da)
namespace h3d{
namespace pass{

void SortByMaterial_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fce4a436c0da8eeb_3_new)
HXLINE(   6)		this->textureCount = 1;
HXLINE(   5)		this->shaderCount = 1;
HXLINE(  11)		this->shaderIdMap = ::Array_obj< int >::__new(0);
HXLINE(  12)		this->textureIdMap = ::Array_obj< int >::__new(0);
            	}

Dynamic SortByMaterial_obj::__CreateEmpty() { return new SortByMaterial_obj; }

void *SortByMaterial_obj::_hx_vtable = 0;

Dynamic SortByMaterial_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SortByMaterial_obj > _hx_result = new SortByMaterial_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SortByMaterial_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x77536a46;
}

void SortByMaterial_obj::sort( ::h3d::pass::PassList passes){
            	HX_STACKFRAME(&_hx_pos_fce4a436c0da8eeb_15_sort)
HXDLIN(  15)		 ::h3d::pass::SortByMaterial _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  16)		int shaderStart = this->shaderCount;
HXDLIN(  16)		int textureStart = this->textureCount;
HXLINE(  17)		{
HXLINE(  17)			 ::h3d::pass::PassObject _g_o = passes->current;
HXDLIN(  17)			while(::hx::IsNotNull( _g_o )){
HXLINE(  17)				 ::h3d::pass::PassObject tmp = _g_o;
HXDLIN(  17)				_g_o = _g_o->next;
HXDLIN(  17)				 ::h3d::pass::PassObject p = tmp;
HXLINE(  18)				if ((this->shaderIdMap->__get(p->shader->id) < shaderStart)) {
HXLINE(  19)					this->shaderIdMap[p->shader->id] = this->shaderCount++;
            				}
HXLINE(  20)				if ((this->textureIdMap->__get(p->texture) < textureStart)) {
HXLINE(  21)					this->textureIdMap[p->texture] = this->textureCount++;
            				}
            			}
            		}
HXLINE(  23)		 ::h3d::pass::PassObject list = passes->current;
HXDLIN(  23)		 ::h3d::pass::PassObject _hx_tmp;
HXDLIN(  23)		if (::hx::IsNull( list )) {
HXLINE(  23)			_hx_tmp = null();
            		}
            		else {
HXLINE(  23)			int insize = 1;
HXDLIN(  23)			int nmerges;
HXDLIN(  23)			int psize = 0;
HXDLIN(  23)			int qsize = 0;
HXDLIN(  23)			 ::h3d::pass::PassObject p;
HXDLIN(  23)			 ::h3d::pass::PassObject q;
HXDLIN(  23)			 ::h3d::pass::PassObject e;
HXDLIN(  23)			 ::h3d::pass::PassObject tail;
HXDLIN(  23)			while(true){
HXLINE( 105)				p = list;
HXLINE( 106)				list = null();
HXLINE( 107)				tail = null();
HXLINE( 108)				nmerges = 0;
HXLINE(  23)				while(::hx::IsNotNull( p )){
HXLINE(  23)					nmerges = (nmerges + 1);
HXLINE( 111)					q = p;
HXLINE( 112)					psize = 0;
HXLINE(  23)					{
HXLINE(  23)						int _g = 0;
HXDLIN(  23)						int _g1 = insize;
HXDLIN(  23)						while((_g < _g1)){
HXLINE(  23)							_g = (_g + 1);
HXDLIN(  23)							int i = (_g - 1);
HXDLIN(  23)							psize = (psize + 1);
HXLINE( 115)							q = q->next;
HXLINE(  23)							if (::hx::IsNull( q )) {
HXLINE(  23)								goto _hx_goto_4;
            							}
            						}
            						_hx_goto_4:;
            					}
HXLINE( 119)					qsize = insize;
HXLINE(  23)					while(true){
HXLINE(  23)						bool _hx_tmp;
HXDLIN(  23)						if ((psize <= 0)) {
HXLINE(  23)							if ((qsize > 0)) {
HXLINE(  23)								_hx_tmp = ::hx::IsNotNull( q );
            							}
            							else {
HXLINE(  23)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE(  23)							_hx_tmp = true;
            						}
HXDLIN(  23)						if (!(_hx_tmp)) {
HXLINE(  23)							goto _hx_goto_5;
            						}
HXDLIN(  23)						if ((psize == 0)) {
HXLINE( 122)							e = q;
HXLINE( 123)							q = q->next;
HXLINE(  23)							qsize = (qsize - 1);
            						}
            						else {
HXLINE(  23)							bool _hx_tmp;
HXDLIN(  23)							bool _hx_tmp1;
HXDLIN(  23)							if ((qsize != 0)) {
HXLINE(  23)								_hx_tmp1 = ::hx::IsNull( q );
            							}
            							else {
HXLINE(  23)								_hx_tmp1 = true;
            							}
HXDLIN(  23)							if (!(_hx_tmp1)) {
HXLINE(  24)								int d = (_gthis->shaderIdMap->__get(p->shader->id) - _gthis->shaderIdMap->__get(q->shader->id));
HXLINE(  23)								int _hx_tmp1;
HXLINE(  25)								if ((d != 0)) {
HXLINE(  23)									_hx_tmp1 = d;
            								}
            								else {
HXLINE(  23)									_hx_tmp1 = (_gthis->textureIdMap->__get(p->texture) - _gthis->textureIdMap->__get(q->texture));
            								}
HXDLIN(  23)								_hx_tmp = (_hx_tmp1 <= 0);
            							}
            							else {
HXLINE(  23)								_hx_tmp = true;
            							}
HXDLIN(  23)							if (_hx_tmp) {
HXLINE( 126)								e = p;
HXLINE( 127)								p = p->next;
HXLINE(  23)								psize = (psize - 1);
            							}
            							else {
HXLINE( 130)								e = q;
HXLINE( 131)								q = q->next;
HXLINE(  23)								qsize = (qsize - 1);
            							}
            						}
HXDLIN(  23)						if (::hx::IsNotNull( tail )) {
HXLINE(  23)							tail->next = e;
            						}
            						else {
HXLINE( 137)							list = e;
            						}
HXLINE( 138)						tail = e;
            					}
            					_hx_goto_5:;
HXLINE( 140)					p = q;
            				}
HXLINE(  23)				tail->next = null();
HXDLIN(  23)				if ((nmerges <= 1)) {
HXLINE(  23)					goto _hx_goto_2;
            				}
HXDLIN(  23)				insize = (insize * 2);
            			}
            			_hx_goto_2:;
HXDLIN(  23)			_hx_tmp = list;
            		}
HXDLIN(  23)		passes->current = _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SortByMaterial_obj,sort,(void))


::hx::ObjectPtr< SortByMaterial_obj > SortByMaterial_obj::__new() {
	::hx::ObjectPtr< SortByMaterial_obj > __this = new SortByMaterial_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SortByMaterial_obj > SortByMaterial_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SortByMaterial_obj *__this = (SortByMaterial_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SortByMaterial_obj), true, "h3d.pass.SortByMaterial"));
	*(void **)__this = SortByMaterial_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SortByMaterial_obj::SortByMaterial_obj()
{
}

void SortByMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SortByMaterial);
	HX_MARK_MEMBER_NAME(shaderCount,"shaderCount");
	HX_MARK_MEMBER_NAME(textureCount,"textureCount");
	HX_MARK_MEMBER_NAME(shaderIdMap,"shaderIdMap");
	HX_MARK_MEMBER_NAME(textureIdMap,"textureIdMap");
	HX_MARK_END_CLASS();
}

void SortByMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shaderCount,"shaderCount");
	HX_VISIT_MEMBER_NAME(textureCount,"textureCount");
	HX_VISIT_MEMBER_NAME(shaderIdMap,"shaderIdMap");
	HX_VISIT_MEMBER_NAME(textureIdMap,"textureIdMap");
}

::hx::Val SortByMaterial_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { return ::hx::Val( sort_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderCount") ) { return ::hx::Val( shaderCount ); }
		if (HX_FIELD_EQ(inName,"shaderIdMap") ) { return ::hx::Val( shaderIdMap ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureCount") ) { return ::hx::Val( textureCount ); }
		if (HX_FIELD_EQ(inName,"textureIdMap") ) { return ::hx::Val( textureIdMap ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SortByMaterial_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"shaderCount") ) { shaderCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaderIdMap") ) { shaderIdMap=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureCount") ) { textureCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureIdMap") ) { textureIdMap=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SortByMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shaderCount",6a,ef,8f,21));
	outFields->push(HX_("textureCount",f4,f1,02,43));
	outFields->push(HX_("shaderIdMap",1c,ac,93,8e));
	outFields->push(HX_("textureIdMap",a6,ae,06,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SortByMaterial_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(SortByMaterial_obj,shaderCount),HX_("shaderCount",6a,ef,8f,21)},
	{::hx::fsInt,(int)offsetof(SortByMaterial_obj,textureCount),HX_("textureCount",f4,f1,02,43)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SortByMaterial_obj,shaderIdMap),HX_("shaderIdMap",1c,ac,93,8e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SortByMaterial_obj,textureIdMap),HX_("textureIdMap",a6,ae,06,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SortByMaterial_obj_sStaticStorageInfo = 0;
#endif

static ::String SortByMaterial_obj_sMemberFields[] = {
	HX_("shaderCount",6a,ef,8f,21),
	HX_("textureCount",f4,f1,02,43),
	HX_("shaderIdMap",1c,ac,93,8e),
	HX_("textureIdMap",a6,ae,06,b0),
	HX_("sort",5e,27,58,4c),
	::String(null()) };

::hx::Class SortByMaterial_obj::__mClass;

void SortByMaterial_obj::__register()
{
	SortByMaterial_obj _hx_dummy;
	SortByMaterial_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.SortByMaterial",04,60,8f,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SortByMaterial_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SortByMaterial_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SortByMaterial_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SortByMaterial_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
