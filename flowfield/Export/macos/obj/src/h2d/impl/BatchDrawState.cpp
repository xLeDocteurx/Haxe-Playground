#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_RenderContext
#include <h2d/RenderContext.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h2d_impl_BatchDrawState
#include <h2d/impl/BatchDrawState.h>
#endif
#ifndef INCLUDED_h2d_impl__BatchDrawState_StateEntry
#include <h2d/impl/_BatchDrawState/StateEntry.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Indexes
#include <h3d/Indexes.h>
#endif
#ifndef INCLUDED_h3d_impl_MemoryManager
#include <h3d/impl/MemoryManager.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2941f58039c03d14_34_new,"h2d.impl.BatchDrawState","new",0x8324d19f,"h2d.impl.BatchDrawState.new","h2d/impl/BatchDrawState.hx",34,0x4e4c3e51)
HX_LOCAL_STACK_FRAME(_hx_pos_2941f58039c03d14_44_setTile,"h2d.impl.BatchDrawState","setTile",0x7ea518af,"h2d.impl.BatchDrawState.setTile","h2d/impl/BatchDrawState.hx",44,0x4e4c3e51)
HX_LOCAL_STACK_FRAME(_hx_pos_2941f58039c03d14_52_setTexture,"h2d.impl.BatchDrawState","setTexture",0x20eb21fa,"h2d.impl.BatchDrawState.setTexture","h2d/impl/BatchDrawState.hx",52,0x4e4c3e51)
HX_LOCAL_STACK_FRAME(_hx_pos_2941f58039c03d14_67_add,"h2d.impl.BatchDrawState","add",0x831af360,"h2d.impl.BatchDrawState.add","h2d/impl/BatchDrawState.hx",67,0x4e4c3e51)
HX_LOCAL_STACK_FRAME(_hx_pos_2941f58039c03d14_75_clear,"h2d.impl.BatchDrawState","clear",0xe25e808c,"h2d.impl.BatchDrawState.clear","h2d/impl/BatchDrawState.hx",75,0x4e4c3e51)
HX_LOCAL_STACK_FRAME(_hx_pos_2941f58039c03d14_95_drawQuads,"h2d.impl.BatchDrawState","drawQuads",0xecc2a5a7,"h2d.impl.BatchDrawState.drawQuads","h2d/impl/BatchDrawState.hx",95,0x4e4c3e51)
HX_LOCAL_STACK_FRAME(_hx_pos_2941f58039c03d14_140_drawIndexed,"h2d.impl.BatchDrawState","drawIndexed",0x40aa788c,"h2d.impl.BatchDrawState.drawIndexed","h2d/impl/BatchDrawState.hx",140,0x4e4c3e51)
HX_LOCAL_STACK_FRAME(_hx_pos_2941f58039c03d14_176_get_currentTexture,"h2d.impl.BatchDrawState","get_currentTexture",0xcd615c0c,"h2d.impl.BatchDrawState.get_currentTexture","h2d/impl/BatchDrawState.hx",176,0x4e4c3e51)
namespace h2d{
namespace impl{

void BatchDrawState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2941f58039c03d14_34_new)
HXLINE(  35)		this->head = (this->tail =  ::h2d::impl::_BatchDrawState::StateEntry_obj::__alloc( HX_CTX ,null()));
HXLINE(  36)		this->totalCount = 0;
            	}

Dynamic BatchDrawState_obj::__CreateEmpty() { return new BatchDrawState_obj; }

void *BatchDrawState_obj::_hx_vtable = 0;

Dynamic BatchDrawState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BatchDrawState_obj > _hx_result = new BatchDrawState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BatchDrawState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10082e09;
}

void BatchDrawState_obj::setTile( ::h2d::Tile tile){
            	HX_STACKFRAME(&_hx_pos_2941f58039c03d14_44_setTile)
HXDLIN(  44)		if (::hx::IsNotNull( tile )) {
HXDLIN(  44)			this->setTexture(tile->innerTex);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BatchDrawState_obj,setTile,(void))

void BatchDrawState_obj::setTexture( ::h3d::mat::Texture texture){
            	HX_GC_STACKFRAME(&_hx_pos_2941f58039c03d14_52_setTexture)
HXDLIN(  52)		if (::hx::IsNotNull( texture )) {
HXLINE(  53)			if (::hx::IsNull( this->tail->texture )) {
HXLINE(  53)				this->tail->texture = texture;
            			}
            			else {
HXLINE(  54)				if (::hx::IsInstanceNotEq( this->tail->texture,texture )) {
HXLINE(  55)					 ::h2d::impl::_BatchDrawState::StateEntry cur = this->tail;
HXLINE(  56)					if (::hx::IsNull( cur->next )) {
HXLINE(  56)						cur->next = (this->tail =  ::h2d::impl::_BatchDrawState::StateEntry_obj::__alloc( HX_CTX ,texture));
            					}
            					else {
HXLINE(  57)						this->tail = cur->next->set(texture);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BatchDrawState_obj,setTexture,(void))

void BatchDrawState_obj::add(int count){
            	HX_STACKFRAME(&_hx_pos_2941f58039c03d14_67_add)
HXLINE(  68)		 ::h2d::impl::_BatchDrawState::StateEntry fh = this->tail;
HXDLIN(  68)		fh->count = (fh->count + count);
HXLINE(  69)		 ::h2d::impl::BatchDrawState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  69)		_hx_tmp->totalCount = (_hx_tmp->totalCount + count);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BatchDrawState_obj,add,(void))

void BatchDrawState_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_2941f58039c03d14_75_clear)
HXLINE(  76)		 ::h2d::impl::_BatchDrawState::StateEntry state = this->head;
HXLINE(  77)		while(true){
HXLINE(  78)			state->texture = null();
HXLINE(  79)			state = state->next;
HXLINE(  77)			if (!(::hx::IsNotNull( state ))) {
HXLINE(  77)				goto _hx_goto_4;
            			}
            		}
            		_hx_goto_4:;
HXLINE(  81)		this->tail = this->head;
HXLINE(  82)		this->tail->count = 0;
HXLINE(  83)		this->totalCount = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BatchDrawState_obj,clear,(void))

void BatchDrawState_obj::drawQuads( ::h2d::RenderContext ctx, ::h3d::Buffer buffer,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(-1);
            	HX_STACKFRAME(&_hx_pos_2941f58039c03d14_95_drawQuads)
HXLINE(  96)		 ::h2d::impl::_BatchDrawState::StateEntry state = this->head;
HXLINE(  97)		 ::h2d::impl::_BatchDrawState::StateEntry last = this->tail->next;
HXLINE(  98)		 ::h3d::Engine engine = ctx->engine;
HXLINE(  99)		int stateLen;
HXLINE( 102)		bool _hx_tmp;
HXDLIN( 102)		if ((offset == 0)) {
HXLINE( 102)			_hx_tmp = (length == -1);
            		}
            		else {
HXLINE( 102)			_hx_tmp = false;
            		}
HXDLIN( 102)		if (_hx_tmp) {
HXLINE( 104)			while(true){
HXLINE( 105)				{
HXLINE( 105)					ctx->texture = state->texture;
HXDLIN( 105)					ctx->beforeDraw();
            				}
HXLINE( 106)				stateLen = (state->count >> 1);
HXLINE( 107)				engine->renderBuffer(buffer,engine->mem->quadIndexes,2,offset,stateLen);
HXLINE( 108)				offset = (offset + stateLen);
HXLINE( 109)				state = state->next;
HXLINE( 104)				if (!(::hx::IsInstanceNotEq( state,last ))) {
HXLINE( 104)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
            		else {
HXLINE( 112)			if ((length == -1)) {
HXLINE( 112)				length = ((this->totalCount >> 1) - offset);
            			}
HXLINE( 113)			int caret = 0;
HXLINE( 114)			while(true){
HXLINE( 115)				stateLen = (state->count >> 1);
HXLINE( 116)				if (((caret + stateLen) >= offset)) {
HXLINE( 117)					int stateMin;
HXDLIN( 117)					if ((offset >= caret)) {
HXLINE( 117)						stateMin = offset;
            					}
            					else {
HXLINE( 117)						stateMin = caret;
            					}
HXLINE( 118)					int stateLen1;
HXDLIN( 118)					if ((length > stateLen)) {
HXLINE( 118)						stateLen1 = stateLen;
            					}
            					else {
HXLINE( 118)						stateLen1 = length;
            					}
HXLINE( 119)					{
HXLINE( 119)						ctx->texture = state->texture;
HXDLIN( 119)						ctx->beforeDraw();
            					}
HXLINE( 120)					engine->renderBuffer(buffer,engine->mem->quadIndexes,2,stateMin,stateLen1);
HXLINE( 121)					length = (length - stateLen1);
HXLINE( 122)					if ((length == 0)) {
HXLINE( 122)						goto _hx_goto_7;
            					}
            				}
HXLINE( 124)				caret = (caret + stateLen);
HXLINE( 125)				state = state->next;
HXLINE( 114)				if (!(::hx::IsInstanceNotEq( state,last ))) {
HXLINE( 114)					goto _hx_goto_7;
            				}
            			}
            			_hx_goto_7:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(BatchDrawState_obj,drawQuads,(void))

void BatchDrawState_obj::drawIndexed( ::h2d::RenderContext ctx, ::h3d::Buffer buffer, ::h3d::Indexes indices,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(-1);
            	HX_STACKFRAME(&_hx_pos_2941f58039c03d14_140_drawIndexed)
HXLINE( 141)		 ::h2d::impl::_BatchDrawState::StateEntry state = this->head;
HXLINE( 142)		 ::h2d::impl::_BatchDrawState::StateEntry last = this->tail->next;
HXLINE( 143)		 ::h3d::Engine engine = ctx->engine;
HXLINE( 144)		int stateLen;
HXLINE( 147)		bool _hx_tmp;
HXDLIN( 147)		if ((offset == 0)) {
HXLINE( 147)			_hx_tmp = (length == -1);
            		}
            		else {
HXLINE( 147)			_hx_tmp = false;
            		}
HXDLIN( 147)		if (_hx_tmp) {
HXLINE( 149)			while(true){
HXLINE( 150)				{
HXLINE( 150)					ctx->texture = state->texture;
HXDLIN( 150)					ctx->beforeDraw();
            				}
HXLINE( 151)				stateLen = ::Std_obj::_hx_int((( (Float)(state->count) ) / ( (Float)(3) )));
HXLINE( 152)				engine->renderIndexed(buffer,indices,offset,stateLen);
HXLINE( 153)				offset = (offset + stateLen);
HXLINE( 154)				state = state->next;
HXLINE( 149)				if (!(::hx::IsInstanceNotEq( state,last ))) {
HXLINE( 149)					goto _hx_goto_9;
            				}
            			}
            			_hx_goto_9:;
            		}
            		else {
HXLINE( 157)			if ((length == -1)) {
HXLINE( 157)				length = ::Std_obj::_hx_int((( (Float)(this->totalCount) ) / ( (Float)(3) )));
            			}
HXLINE( 158)			int caret = 0;
HXLINE( 159)			while(true){
HXLINE( 160)				stateLen = ::Std_obj::_hx_int((( (Float)(state->count) ) / ( (Float)(3) )));
HXLINE( 161)				if (((caret + stateLen) >= offset)) {
HXLINE( 162)					int stateMin;
HXDLIN( 162)					if ((offset >= caret)) {
HXLINE( 162)						stateMin = offset;
            					}
            					else {
HXLINE( 162)						stateMin = caret;
            					}
HXLINE( 163)					int stateLen1;
HXDLIN( 163)					if ((length > stateLen)) {
HXLINE( 163)						stateLen1 = stateLen;
            					}
            					else {
HXLINE( 163)						stateLen1 = length;
            					}
HXLINE( 164)					{
HXLINE( 164)						ctx->texture = state->texture;
HXDLIN( 164)						ctx->beforeDraw();
            					}
HXLINE( 165)					engine->renderIndexed(buffer,indices,stateMin,stateLen1);
HXLINE( 166)					length = (length - stateLen1);
HXLINE( 167)					if ((length == 0)) {
HXLINE( 167)						goto _hx_goto_10;
            					}
            				}
HXLINE( 169)				caret = (caret + stateLen);
HXLINE( 170)				state = state->next;
HXLINE( 159)				if (!(::hx::IsInstanceNotEq( state,last ))) {
HXLINE( 159)					goto _hx_goto_10;
            				}
            			}
            			_hx_goto_10:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(BatchDrawState_obj,drawIndexed,(void))

 ::h3d::mat::Texture BatchDrawState_obj::get_currentTexture(){
            	HX_STACKFRAME(&_hx_pos_2941f58039c03d14_176_get_currentTexture)
HXDLIN( 176)		return this->tail->texture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BatchDrawState_obj,get_currentTexture,return )


::hx::ObjectPtr< BatchDrawState_obj > BatchDrawState_obj::__new() {
	::hx::ObjectPtr< BatchDrawState_obj > __this = new BatchDrawState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BatchDrawState_obj > BatchDrawState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BatchDrawState_obj *__this = (BatchDrawState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BatchDrawState_obj), true, "h2d.impl.BatchDrawState"));
	*(void **)__this = BatchDrawState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BatchDrawState_obj::BatchDrawState_obj()
{
}

void BatchDrawState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BatchDrawState);
	HX_MARK_MEMBER_NAME(totalCount,"totalCount");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(tail,"tail");
	HX_MARK_END_CLASS();
}

void BatchDrawState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(totalCount,"totalCount");
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(tail,"tail");
}

::hx::Val BatchDrawState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return ::hx::Val( head ); }
		if (HX_FIELD_EQ(inName,"tail") ) { return ::hx::Val( tail ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setTile") ) { return ::hx::Val( setTile_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawQuads") ) { return ::hx::Val( drawQuads_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalCount") ) { return ::hx::Val( totalCount ); }
		if (HX_FIELD_EQ(inName,"setTexture") ) { return ::hx::Val( setTexture_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawIndexed") ) { return ::hx::Val( drawIndexed_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentTexture() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_currentTexture") ) { return ::hx::Val( get_currentTexture_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BatchDrawState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast<  ::h2d::impl::_BatchDrawState::StateEntry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tail") ) { tail=inValue.Cast<  ::h2d::impl::_BatchDrawState::StateEntry >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalCount") ) { totalCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BatchDrawState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentTexture",a2,3d,75,ac));
	outFields->push(HX_("totalCount",6b,3a,04,51));
	outFields->push(HX_("head",20,29,0b,45));
	outFields->push(HX_("tail",90,b6,f6,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BatchDrawState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BatchDrawState_obj,totalCount),HX_("totalCount",6b,3a,04,51)},
	{::hx::fsObject /*  ::h2d::impl::_BatchDrawState::StateEntry */ ,(int)offsetof(BatchDrawState_obj,head),HX_("head",20,29,0b,45)},
	{::hx::fsObject /*  ::h2d::impl::_BatchDrawState::StateEntry */ ,(int)offsetof(BatchDrawState_obj,tail),HX_("tail",90,b6,f6,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BatchDrawState_obj_sStaticStorageInfo = 0;
#endif

static ::String BatchDrawState_obj_sMemberFields[] = {
	HX_("totalCount",6b,3a,04,51),
	HX_("head",20,29,0b,45),
	HX_("tail",90,b6,f6,4c),
	HX_("setTile",f0,0b,81,12),
	HX_("setTexture",59,ed,bf,f1),
	HX_("add",21,f2,49,00),
	HX_("clear",8d,71,5b,48),
	HX_("drawQuads",28,ab,f2,25),
	HX_("drawIndexed",4d,a0,07,2a),
	HX_("get_currentTexture",6b,1e,0f,48),
	::String(null()) };

::hx::Class BatchDrawState_obj::__mClass;

void BatchDrawState_obj::__register()
{
	BatchDrawState_obj _hx_dummy;
	BatchDrawState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.impl.BatchDrawState",2d,16,9e,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BatchDrawState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BatchDrawState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BatchDrawState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BatchDrawState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace impl
