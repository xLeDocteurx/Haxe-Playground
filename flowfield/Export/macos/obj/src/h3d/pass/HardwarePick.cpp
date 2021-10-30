#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_IBounds
#include <h2d/col/IBounds.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_Blend
#include <h3d/mat/Blend.h>
#endif
#ifndef INCLUDED_h3d_mat_DepthBuffer
#include <h3d/mat/DepthBuffer.h>
#endif
#ifndef INCLUDED_h3d_mat_DepthFormat
#include <h3d/mat/DepthFormat.h>
#endif
#ifndef INCLUDED_h3d_mat_Operation
#include <h3d/mat/Operation.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_mat_TextureFlags
#include <h3d/mat/TextureFlags.h>
#endif
#ifndef INCLUDED_h3d_pass_Base
#include <h3d/pass/Base.h>
#endif
#ifndef INCLUDED_h3d_pass_Default
#include <h3d/pass/Default.h>
#endif
#ifndef INCLUDED_h3d_pass_HardwarePick
#include <h3d/pass/HardwarePick.h>
#endif
#ifndef INCLUDED_h3d_pass_PassList
#include <h3d/pass/PassList.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif
#ifndef INCLUDED_h3d_pass__HardwarePick_FixedColor
#include <h3d/pass/_HardwarePick/FixedColor.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_Pixels
#include <hxd/Pixels.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f8b5a71e5e850a91_22_new,"h3d.pass.HardwarePick","new",0xd19b3483,"h3d.pass.HardwarePick.new","h3d/pass/HardwarePick.hx",22,0x9ccf9bed)
HX_LOCAL_STACK_FRAME(_hx_pos_f8b5a71e5e850a91_45_dispose,"h3d.pass.HardwarePick","dispose",0x751c3242,"h3d.pass.HardwarePick.dispose","h3d/pass/HardwarePick.hx",45,0x9ccf9bed)
HX_LOCAL_STACK_FRAME(_hx_pos_f8b5a71e5e850a91_54_getOutputs,"h3d.pass.HardwarePick","getOutputs",0xafe04e99,"h3d.pass.HardwarePick.getOutputs","h3d/pass/HardwarePick.hx",54,0x9ccf9bed)
HX_LOCAL_STACK_FRAME(_hx_pos_f8b5a71e5e850a91_57_drawObject,"h3d.pass.HardwarePick","drawObject",0xd315b020,"h3d.pass.HardwarePick.drawObject","h3d/pass/HardwarePick.hx",57,0x9ccf9bed)
HX_LOCAL_STACK_FRAME(_hx_pos_f8b5a71e5e850a91_63_nextID,"h3d.pass.HardwarePick","nextID",0x97f5bb4b,"h3d.pass.HardwarePick.nextID","h3d/pass/HardwarePick.hx",63,0x9ccf9bed)
HX_LOCAL_STACK_FRAME(_hx_pos_f8b5a71e5e850a91_66_draw,"h3d.pass.HardwarePick","draw",0x8fa06681,"h3d.pass.HardwarePick.draw","h3d/pass/HardwarePick.hx",66,0x9ccf9bed)
namespace h3d{
namespace pass{

void HardwarePick_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f8b5a71e5e850a91_22_new)
HXLINE(  31)		this->pickedIndex = -1;
HXLINE(  27)		this->fixedColor =  ::h3d::pass::_HardwarePick::FixedColor_obj::__alloc( HX_CTX );
HXLINE(  34)		super::__construct(HX_("hwpick",70,77,24,64));
HXLINE(  35)		this->material =  ::h3d::mat::Pass_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),null(),null());
HXLINE(  36)		{
HXLINE(  36)			 ::h3d::mat::Pass _this = this->material;
HXDLIN(  36)			 ::h3d::mat::Blend src = ::h3d::mat::Blend_obj::One_dyn();
HXDLIN(  36)			 ::h3d::mat::Blend dst = ::h3d::mat::Blend_obj::Zero_dyn();
HXDLIN(  36)			_this->set_blendSrc(src);
HXDLIN(  36)			_this->set_blendAlphaSrc(src);
HXDLIN(  36)			_this->set_blendDst(dst);
HXDLIN(  36)			_this->set_blendAlphaDst(dst);
            		}
HXLINE(  37)		this->texOut =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,3,3,::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::mat::TextureFlags_obj::Target_dyn()),null());
HXLINE(  39)		this->texOut->depthBuffer =  ::h3d::mat::DepthBuffer_obj::__alloc( HX_CTX ,3,3,null());
            	}

Dynamic HardwarePick_obj::__CreateEmpty() { return new HardwarePick_obj; }

void *HardwarePick_obj::_hx_vtable = 0;

Dynamic HardwarePick_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HardwarePick_obj > _hx_result = new HardwarePick_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HardwarePick_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2eacfc8f) {
		if (inClassId<=(int)0x1e09ccd3) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1e09ccd3;
		} else {
			return inClassId==(int)0x2eacfc8f;
		}
	} else {
		return inClassId==(int)0x6e5907d7;
	}
}

void HardwarePick_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_f8b5a71e5e850a91_45_dispose)
HXLINE(  46)		this->super::dispose();
HXLINE(  47)		this->texOut->dispose();
HXLINE(  49)		this->texOut->depthBuffer->dispose();
            	}


::Array< ::Dynamic> HardwarePick_obj::getOutputs(){
            	HX_STACKFRAME(&_hx_pos_f8b5a71e5e850a91_54_getOutputs)
HXDLIN(  54)		return ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Output_obj::Value(HX_("output.colorID",91,09,10,24),null()));
            	}


void HardwarePick_obj::drawObject( ::h3d::pass::PassObject p){
            	HX_STACKFRAME(&_hx_pos_f8b5a71e5e850a91_57_drawObject)
HXLINE(  58)		this->super::drawObject(p);
HXLINE(  59)		{
HXLINE(  59)			 ::h3d::Vector _this = this->fixedColor->colorID__;
HXDLIN(  59)			int c = (-16777216 | ++this->colorID);
HXDLIN(  59)			_this->x = (( (Float)(((c >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN(  59)			_this->y = (( (Float)(((c >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN(  59)			_this->z = (( (Float)((c & 255)) ) / ( (Float)(255) ));
HXDLIN(  59)			_this->w = (( (Float)(::hx::UShr(c,24)) ) / ( (Float)(255) ));
            		}
            	}


void HardwarePick_obj::nextID(){
            	HX_STACKFRAME(&_hx_pos_f8b5a71e5e850a91_63_nextID)
HXDLIN(  63)		 ::h3d::Vector _this = this->fixedColor->colorID__;
HXDLIN(  63)		int c = (-16777216 | ++this->colorID);
HXDLIN(  63)		_this->x = (( (Float)(((c >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN(  63)		_this->y = (( (Float)(((c >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN(  63)		_this->z = (( (Float)((c & 255)) ) / ( (Float)(255) ));
HXDLIN(  63)		_this->w = (( (Float)(::hx::UShr(c,24)) ) / ( (Float)(255) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(HardwarePick_obj,nextID,(void))

void HardwarePick_obj::draw( ::h3d::pass::PassList passes, ::Dynamic sort){
            	HX_STACKFRAME(&_hx_pos_f8b5a71e5e850a91_66_draw)
HXLINE(  68)		{
HXLINE(  68)			 ::h3d::pass::PassObject _g_o = passes->current;
HXDLIN(  68)			while(::hx::IsNotNull( _g_o )){
HXLINE(  68)				 ::h3d::pass::PassObject tmp = _g_o;
HXDLIN(  68)				_g_o = _g_o->next;
HXDLIN(  68)				 ::h3d::pass::PassObject cur = tmp;
HXDLIN(  68)				{
HXLINE(  70)					int mask = 268435392;
HXLINE(  71)					 ::h3d::mat::Pass fh = cur->pass;
HXDLIN(  71)					fh->bits = (fh->bits & ~(mask));
HXLINE(  72)					 ::h3d::mat::Pass fh1 = cur->pass;
HXDLIN(  72)					fh1->bits = (fh1->bits | (this->material->bits & mask));
            				}
            			}
            		}
HXLINE(  74)		this->colorID = 0;
HXLINE(  76)		{
HXLINE(  76)			 ::h3d::Vector _this = this->fixedColor->colorID__;
HXDLIN(  76)			int c = (-16777216 | ++this->colorID);
HXDLIN(  76)			_this->x = (( (Float)(((c >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN(  76)			_this->y = (( (Float)(((c >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN(  76)			_this->z = (( (Float)((c & 255)) ) / ( (Float)(255) ));
HXDLIN(  76)			_this->w = (( (Float)(::hx::UShr(c,24)) ) / ( (Float)(255) ));
            		}
HXLINE(  77)		{
HXLINE(  77)			 ::h3d::Vector _this1 = this->fixedColor->viewport__;
HXDLIN(  77)			_this1->x = -((((this->pickX * ( (Float)(2) )) / ( (Float)(this->ctx->engine->width) )) - ( (Float)(1) )));
HXDLIN(  77)			_this1->y = (((this->pickY * ( (Float)(2) )) / ( (Float)(this->ctx->engine->height) )) - ( (Float)(1) ));
HXDLIN(  77)			_this1->z = (( (Float)(this->ctx->engine->width) ) / ( (Float)(this->texOut->width) ));
HXDLIN(  77)			_this1->w = (( (Float)(this->ctx->engine->height) ) / ( (Float)(this->texOut->height) ));
            		}
HXLINE(  78)		this->ctx->engine->pushTarget(this->texOut,null(),null());
HXLINE(  79)		this->ctx->engine->clear(-16777216,1,null());
HXLINE(  80)		this->ctx->extraShaders = this->ctx->allocShaderList(this->fixedColor,null());
HXLINE(  81)		this->super::draw(passes,sort);
HXLINE(  82)		this->ctx->extraShaders = null();
HXLINE(  83)		this->ctx->engine->popTarget();
HXLINE(  85)		{
HXLINE(  85)			 ::h3d::pass::PassObject _g1_o = passes->current;
HXDLIN(  85)			while(::hx::IsNotNull( _g1_o )){
HXLINE(  85)				 ::h3d::pass::PassObject tmp = _g1_o;
HXDLIN(  85)				_g1_o = _g1_o->next;
HXDLIN(  85)				 ::h3d::pass::PassObject cur = tmp;
HXLINE(  87)				cur->pass->set_blendSrc(cur->pass->blendSrc);
HXLINE(  88)				cur->pass->set_blendDst(cur->pass->blendDst);
HXLINE(  89)				cur->pass->set_blendOp(cur->pass->blendOp);
HXLINE(  90)				cur->pass->set_blendAlphaSrc(cur->pass->blendAlphaSrc);
HXLINE(  91)				cur->pass->set_blendAlphaDst(cur->pass->blendAlphaDst);
HXLINE(  92)				cur->pass->set_blendAlphaOp(cur->pass->blendAlphaOp);
HXLINE(  93)				cur->pass->colorMask = cur->pass->colorMask;
            			}
            		}
HXLINE(  96)		this->ctx->engine->clear(null(),null(),0);
HXLINE(  97)		 ::hxd::Pixels pix = this->texOut->capturePixels(null(),null(),null());
HXLINE(  98)		this->pickedIndex = ((pix->getPixel((pix->width >> 1),(pix->height >> 1)) & 16777215) - 1);
            	}



::hx::ObjectPtr< HardwarePick_obj > HardwarePick_obj::__new() {
	::hx::ObjectPtr< HardwarePick_obj > __this = new HardwarePick_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HardwarePick_obj > HardwarePick_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HardwarePick_obj *__this = (HardwarePick_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HardwarePick_obj), true, "h3d.pass.HardwarePick"));
	*(void **)__this = HardwarePick_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HardwarePick_obj::HardwarePick_obj()
{
}

void HardwarePick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HardwarePick);
	HX_MARK_MEMBER_NAME(pickX,"pickX");
	HX_MARK_MEMBER_NAME(pickY,"pickY");
	HX_MARK_MEMBER_NAME(fixedColor,"fixedColor");
	HX_MARK_MEMBER_NAME(colorID,"colorID");
	HX_MARK_MEMBER_NAME(texOut,"texOut");
	HX_MARK_MEMBER_NAME(material,"material");
	HX_MARK_MEMBER_NAME(pickedIndex,"pickedIndex");
	 ::h3d::pass::Default_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HardwarePick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pickX,"pickX");
	HX_VISIT_MEMBER_NAME(pickY,"pickY");
	HX_VISIT_MEMBER_NAME(fixedColor,"fixedColor");
	HX_VISIT_MEMBER_NAME(colorID,"colorID");
	HX_VISIT_MEMBER_NAME(texOut,"texOut");
	HX_VISIT_MEMBER_NAME(material,"material");
	HX_VISIT_MEMBER_NAME(pickedIndex,"pickedIndex");
	 ::h3d::pass::Default_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HardwarePick_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pickX") ) { return ::hx::Val( pickX ); }
		if (HX_FIELD_EQ(inName,"pickY") ) { return ::hx::Val( pickY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"texOut") ) { return ::hx::Val( texOut ); }
		if (HX_FIELD_EQ(inName,"nextID") ) { return ::hx::Val( nextID_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colorID") ) { return ::hx::Val( colorID ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { return ::hx::Val( material ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fixedColor") ) { return ::hx::Val( fixedColor ); }
		if (HX_FIELD_EQ(inName,"getOutputs") ) { return ::hx::Val( getOutputs_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawObject") ) { return ::hx::Val( drawObject_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pickedIndex") ) { return ::hx::Val( pickedIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HardwarePick_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pickX") ) { pickX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pickY") ) { pickY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"texOut") ) { texOut=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colorID") ) { colorID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast<  ::h3d::mat::Pass >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fixedColor") ) { fixedColor=inValue.Cast<  ::h3d::pass::_HardwarePick::FixedColor >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pickedIndex") ) { pickedIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HardwarePick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pickX",57,dc,93,c2));
	outFields->push(HX_("pickY",58,dc,93,c2));
	outFields->push(HX_("fixedColor",4f,23,87,33));
	outFields->push(HX_("colorID",fe,0f,66,ef));
	outFields->push(HX_("texOut",e7,64,6c,d8));
	outFields->push(HX_("material",a7,5c,a5,f0));
	outFields->push(HX_("pickedIndex",72,5f,35,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HardwarePick_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HardwarePick_obj,pickX),HX_("pickX",57,dc,93,c2)},
	{::hx::fsFloat,(int)offsetof(HardwarePick_obj,pickY),HX_("pickY",58,dc,93,c2)},
	{::hx::fsObject /*  ::h3d::pass::_HardwarePick::FixedColor */ ,(int)offsetof(HardwarePick_obj,fixedColor),HX_("fixedColor",4f,23,87,33)},
	{::hx::fsInt,(int)offsetof(HardwarePick_obj,colorID),HX_("colorID",fe,0f,66,ef)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(HardwarePick_obj,texOut),HX_("texOut",e7,64,6c,d8)},
	{::hx::fsObject /*  ::h3d::mat::Pass */ ,(int)offsetof(HardwarePick_obj,material),HX_("material",a7,5c,a5,f0)},
	{::hx::fsInt,(int)offsetof(HardwarePick_obj,pickedIndex),HX_("pickedIndex",72,5f,35,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HardwarePick_obj_sStaticStorageInfo = 0;
#endif

static ::String HardwarePick_obj_sMemberFields[] = {
	HX_("pickX",57,dc,93,c2),
	HX_("pickY",58,dc,93,c2),
	HX_("fixedColor",4f,23,87,33),
	HX_("colorID",fe,0f,66,ef),
	HX_("texOut",e7,64,6c,d8),
	HX_("material",a7,5c,a5,f0),
	HX_("pickedIndex",72,5f,35,70),
	HX_("dispose",9f,80,4c,bb),
	HX_("getOutputs",5c,98,cd,33),
	HX_("drawObject",e3,f9,02,57),
	HX_("nextID",8e,27,64,72),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class HardwarePick_obj::__mClass;

void HardwarePick_obj::__register()
{
	HardwarePick_obj _hx_dummy;
	HardwarePick_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.HardwarePick",11,37,28,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HardwarePick_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HardwarePick_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HardwarePick_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HardwarePick_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
