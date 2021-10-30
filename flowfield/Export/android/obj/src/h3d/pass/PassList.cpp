#include <hxcpp.h>

#ifndef INCLUDED_h3d_pass_PassList
#include <h3d/pass/PassList.h>
#endif
#ifndef INCLUDED_h3d_pass_PassListIterator
#include <h3d/pass/PassListIterator.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_39a18f319c4c8b6d_26_new,"h3d.pass.PassList","new",0xf9ae69a9,"h3d.pass.PassList.new","h3d/pass/PassList.hx",26,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_39a18f319c4c8b6d_32_init,"h3d.pass.PassList","init",0x7ba6c1a7,"h3d.pass.PassList.init","h3d/pass/PassList.hx",32,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_39a18f319c4c8b6d_41_reset,"h3d.pass.PassList","reset",0xdef28758,"h3d.pass.PassList.reset","h3d/pass/PassList.hx",41,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_39a18f319c4c8b6d_52_save,"h3d.pass.PassList","save",0x823911d4,"h3d.pass.PassList.save","h3d/pass/PassList.hx",52,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_39a18f319c4c8b6d_59_load,"h3d.pass.PassList","load",0x7da320bd,"h3d.pass.PassList.load","h3d/pass/PassList.hx",59,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_39a18f319c4c8b6d_73_isEmpty,"h3d.pass.PassList","isEmpty",0x11bb500c,"h3d.pass.PassList.isEmpty","h3d/pass/PassList.hx",73,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_39a18f319c4c8b6d_79_clear,"h3d.pass.PassList","clear",0x4085af16,"h3d.pass.PassList.clear","h3d/pass/PassList.hx",79,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_39a18f319c4c8b6d_93_sort,"h3d.pass.PassList","sort",0x8243adf5,"h3d.pass.PassList.sort","h3d/pass/PassList.hx",93,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_39a18f319c4c8b6d_99_filter,"h3d.pass.PassList","filter",0xb200ba0f,"h3d.pass.PassList.filter","h3d/pass/PassList.hx",99,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_39a18f319c4c8b6d_133_iterator,"h3d.pass.PassList","iterator",0x3e426805,"h3d.pass.PassList.iterator","h3d/pass/PassList.hx",133,0xb5bf7d87)
HX_LOCAL_STACK_FRAME(_hx_pos_39a18f319c4c8b6d_140_getFiltered,"h3d.pass.PassList","getFiltered",0x8c6d2316,"h3d.pass.PassList.getFiltered","h3d/pass/PassList.hx",140,0xb5bf7d87)
namespace h3d{
namespace pass{

void PassList_obj::__construct( ::h3d::pass::PassObject current){
            	HX_STACKFRAME(&_hx_pos_39a18f319c4c8b6d_26_new)
HXDLIN(  26)		this->current = current;
HXDLIN(  26)		this->discarded = (this->lastDisc = null());
            	}

Dynamic PassList_obj::__CreateEmpty() { return new PassList_obj; }

void *PassList_obj::_hx_vtable = 0;

Dynamic PassList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PassList_obj > _hx_result = new PassList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PassList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ae87b15;
}

void PassList_obj::init( ::h3d::pass::PassObject pass){
            	HX_STACKFRAME(&_hx_pos_39a18f319c4c8b6d_32_init)
HXLINE(  33)		this->current = pass;
HXLINE(  34)		this->discarded = (this->lastDisc = null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(PassList_obj,init,(void))

void PassList_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_39a18f319c4c8b6d_41_reset)
HXDLIN(  41)		if (::hx::IsNotNull( this->discarded )) {
HXLINE(  42)			this->lastDisc->next = this->current;
HXLINE(  43)			this->current = this->discarded;
HXLINE(  44)			this->discarded = (this->lastDisc = null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PassList_obj,reset,(void))

 ::h3d::pass::PassObject PassList_obj::save(){
            	HX_STACKFRAME(&_hx_pos_39a18f319c4c8b6d_52_save)
HXDLIN(  52)		return this->lastDisc;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PassList_obj,save,return )

void PassList_obj::load( ::h3d::pass::PassObject p){
            	HX_STACKFRAME(&_hx_pos_39a18f319c4c8b6d_59_load)
HXDLIN(  59)		if (::hx::IsInstanceNotEq( this->lastDisc,p )) {
HXLINE(  60)			this->lastDisc->next = this->current;
HXLINE(  61)			if (::hx::IsNull( p )) {
HXLINE(  62)				this->current = this->discarded;
HXLINE(  63)				this->discarded = null();
            			}
            			else {
HXLINE(  65)				this->current = p->next;
HXLINE(  66)				p->next = null();
            			}
HXLINE(  68)			this->lastDisc = p;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PassList_obj,load,(void))

bool PassList_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_39a18f319c4c8b6d_73_isEmpty)
HXDLIN(  73)		return ::hx::IsNull( this->current );
            	}


HX_DEFINE_DYNAMIC_FUNC0(PassList_obj,isEmpty,return )

void PassList_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_39a18f319c4c8b6d_79_clear)
HXLINE(  80)		if (::hx::IsNull( this->current )) {
HXLINE(  81)			return;
            		}
HXLINE(  82)		if (::hx::IsNull( this->discarded )) {
HXLINE(  83)			this->discarded = this->current;
            		}
            		else {
HXLINE(  85)			this->lastDisc->next = this->current;
            		}
HXLINE(  86)		 ::h3d::pass::PassObject p = this->current;
HXLINE(  87)		while(::hx::IsNotNull( p->next )){
HXLINE(  87)			p = p->next;
            		}
HXLINE(  88)		this->lastDisc = p;
HXLINE(  89)		this->current = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PassList_obj,clear,(void))

void PassList_obj::sort( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_39a18f319c4c8b6d_93_sort)
HXDLIN(  93)		 ::h3d::pass::PassObject list = this->current;
HXDLIN(  93)		 ::h3d::pass::PassObject _hx_tmp;
HXDLIN(  93)		if (::hx::IsNull( list )) {
HXDLIN(  93)			_hx_tmp = null();
            		}
            		else {
HXDLIN(  93)			int insize = 1;
HXDLIN(  93)			int nmerges;
HXDLIN(  93)			int psize = 0;
HXDLIN(  93)			int qsize = 0;
HXDLIN(  93)			 ::h3d::pass::PassObject p;
HXDLIN(  93)			 ::h3d::pass::PassObject q;
HXDLIN(  93)			 ::h3d::pass::PassObject e;
HXDLIN(  93)			 ::h3d::pass::PassObject tail;
HXDLIN(  93)			while(true){
HXDLIN(  93)				p = list;
HXDLIN(  93)				list = null();
HXDLIN(  93)				tail = null();
HXDLIN(  93)				nmerges = 0;
HXDLIN(  93)				while(::hx::IsNotNull( p )){
HXDLIN(  93)					nmerges = (nmerges + 1);
HXDLIN(  93)					q = p;
HXDLIN(  93)					psize = 0;
HXDLIN(  93)					{
HXDLIN(  93)						int _g = 0;
HXDLIN(  93)						int _g1 = insize;
HXDLIN(  93)						while((_g < _g1)){
HXDLIN(  93)							_g = (_g + 1);
HXDLIN(  93)							int i = (_g - 1);
HXDLIN(  93)							psize = (psize + 1);
HXDLIN(  93)							q = q->next;
HXDLIN(  93)							if (::hx::IsNull( q )) {
HXDLIN(  93)								goto _hx_goto_10;
            							}
            						}
            						_hx_goto_10:;
            					}
HXDLIN(  93)					qsize = insize;
HXDLIN(  93)					while(true){
HXDLIN(  93)						bool _hx_tmp;
HXDLIN(  93)						if ((psize <= 0)) {
HXDLIN(  93)							if ((qsize > 0)) {
HXDLIN(  93)								_hx_tmp = ::hx::IsNotNull( q );
            							}
            							else {
HXDLIN(  93)								_hx_tmp = false;
            							}
            						}
            						else {
HXDLIN(  93)							_hx_tmp = true;
            						}
HXDLIN(  93)						if (!(_hx_tmp)) {
HXDLIN(  93)							goto _hx_goto_11;
            						}
HXDLIN(  93)						if ((psize == 0)) {
HXDLIN(  93)							e = q;
HXDLIN(  93)							q = q->next;
HXDLIN(  93)							qsize = (qsize - 1);
            						}
            						else {
HXDLIN(  93)							bool _hx_tmp;
HXDLIN(  93)							bool _hx_tmp1;
HXDLIN(  93)							if ((qsize != 0)) {
HXDLIN(  93)								_hx_tmp1 = ::hx::IsNull( q );
            							}
            							else {
HXDLIN(  93)								_hx_tmp1 = true;
            							}
HXDLIN(  93)							if (!(_hx_tmp1)) {
HXDLIN(  93)								_hx_tmp = ::hx::IsLessEq( f(p,q),0 );
            							}
            							else {
HXDLIN(  93)								_hx_tmp = true;
            							}
HXDLIN(  93)							if (_hx_tmp) {
HXDLIN(  93)								e = p;
HXDLIN(  93)								p = p->next;
HXDLIN(  93)								psize = (psize - 1);
            							}
            							else {
HXDLIN(  93)								e = q;
HXDLIN(  93)								q = q->next;
HXDLIN(  93)								qsize = (qsize - 1);
            							}
            						}
HXDLIN(  93)						if (::hx::IsNotNull( tail )) {
HXDLIN(  93)							tail->next = e;
            						}
            						else {
HXDLIN(  93)							list = e;
            						}
HXDLIN(  93)						tail = e;
            					}
            					_hx_goto_11:;
HXDLIN(  93)					p = q;
            				}
HXDLIN(  93)				tail->next = null();
HXDLIN(  93)				if ((nmerges <= 1)) {
HXDLIN(  93)					goto _hx_goto_8;
            				}
HXDLIN(  93)				insize = (insize * 2);
            			}
            			_hx_goto_8:;
HXDLIN(  93)			_hx_tmp = list;
            		}
HXDLIN(  93)		this->current = _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PassList_obj,sort,(void))

void PassList_obj::filter( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_39a18f319c4c8b6d_99_filter)
HXLINE( 100)		 ::h3d::pass::PassObject head = null();
HXLINE( 101)		 ::h3d::pass::PassObject prev = null();
HXLINE( 102)		 ::h3d::pass::PassObject disc = this->discarded;
HXLINE( 103)		 ::h3d::pass::PassObject discQueue = this->lastDisc;
HXLINE( 104)		 ::h3d::pass::PassObject cur = this->current;
HXLINE( 105)		while(::hx::IsNotNull( cur )){
HXLINE( 106)			if (( (bool)(f(cur)) )) {
HXLINE( 107)				if (::hx::IsNull( head )) {
HXLINE( 108)					prev = cur;
HXDLIN( 108)					head = prev;
            				}
            				else {
HXLINE( 110)					prev->next = cur;
HXLINE( 111)					prev = cur;
            				}
            			}
            			else {
HXLINE( 114)				if (::hx::IsNull( disc )) {
HXLINE( 115)					discQueue = cur;
HXDLIN( 115)					disc = discQueue;
            				}
            				else {
HXLINE( 117)					discQueue->next = cur;
HXLINE( 118)					discQueue = cur;
            				}
            			}
HXLINE( 121)			cur = cur->next;
            		}
HXLINE( 123)		if (::hx::IsNotNull( prev )) {
HXLINE( 124)			prev->next = null();
            		}
HXLINE( 125)		if (::hx::IsNotNull( discQueue )) {
HXLINE( 126)			discQueue->next = null();
            		}
HXLINE( 127)		this->current = head;
HXLINE( 128)		this->discarded = disc;
HXLINE( 129)		this->lastDisc = discQueue;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PassList_obj,filter,(void))

 ::h3d::pass::PassListIterator PassList_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_39a18f319c4c8b6d_133_iterator)
HXDLIN( 133)		return  ::h3d::pass::PassListIterator_obj::__alloc( HX_CTX ,this->current);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PassList_obj,iterator,return )

 ::h3d::pass::PassListIterator PassList_obj::getFiltered(){
            	HX_GC_STACKFRAME(&_hx_pos_39a18f319c4c8b6d_140_getFiltered)
HXDLIN( 140)		return  ::h3d::pass::PassListIterator_obj::__alloc( HX_CTX ,this->discarded);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PassList_obj,getFiltered,return )


::hx::ObjectPtr< PassList_obj > PassList_obj::__new( ::h3d::pass::PassObject current) {
	::hx::ObjectPtr< PassList_obj > __this = new PassList_obj();
	__this->__construct(current);
	return __this;
}

::hx::ObjectPtr< PassList_obj > PassList_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::pass::PassObject current) {
	PassList_obj *__this = (PassList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PassList_obj), true, "h3d.pass.PassList"));
	*(void **)__this = PassList_obj::_hx_vtable;
	__this->__construct(current);
	return __this;
}

PassList_obj::PassList_obj()
{
}

void PassList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PassList);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(discarded,"discarded");
	HX_MARK_MEMBER_NAME(lastDisc,"lastDisc");
	HX_MARK_END_CLASS();
}

void PassList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(discarded,"discarded");
	HX_VISIT_MEMBER_NAME(lastDisc,"lastDisc");
}

::hx::Val PassList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"sort") ) { return ::hx::Val( sort_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return ::hx::Val( current ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastDisc") ) { return ::hx::Val( lastDisc ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"discarded") ) { return ::hx::Val( discarded ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFiltered") ) { return ::hx::Val( getFiltered_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PassList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast<  ::h3d::pass::PassObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastDisc") ) { lastDisc=inValue.Cast<  ::h3d::pass::PassObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"discarded") ) { discarded=inValue.Cast<  ::h3d::pass::PassObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PassList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("current",39,9c,e3,cb));
	outFields->push(HX_("discarded",fd,b5,fb,44));
	outFields->push(HX_("lastDisc",cb,80,b2,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PassList_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::pass::PassObject */ ,(int)offsetof(PassList_obj,current),HX_("current",39,9c,e3,cb)},
	{::hx::fsObject /*  ::h3d::pass::PassObject */ ,(int)offsetof(PassList_obj,discarded),HX_("discarded",fd,b5,fb,44)},
	{::hx::fsObject /*  ::h3d::pass::PassObject */ ,(int)offsetof(PassList_obj,lastDisc),HX_("lastDisc",cb,80,b2,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PassList_obj_sStaticStorageInfo = 0;
#endif

static ::String PassList_obj_sMemberFields[] = {
	HX_("current",39,9c,e3,cb),
	HX_("discarded",fd,b5,fb,44),
	HX_("lastDisc",cb,80,b2,d5),
	HX_("init",10,3b,bb,45),
	HX_("reset",cf,49,c8,e6),
	HX_("save",3d,8b,4d,4c),
	HX_("load",26,9a,b7,47),
	HX_("isEmpty",43,de,5f,0c),
	HX_("clear",8d,71,5b,48),
	HX_("sort",5e,27,58,4c),
	HX_("filter",b8,1f,35,85),
	HX_("iterator",ee,49,9a,93),
	HX_("getFiltered",cd,98,7a,3a),
	::String(null()) };

::hx::Class PassList_obj::__mClass;

void PassList_obj::__register()
{
	PassList_obj _hx_dummy;
	PassList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.PassList",37,61,a4,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PassList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PassList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PassList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PassList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
