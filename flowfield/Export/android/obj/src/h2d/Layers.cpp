#include <hxcpp.h>

#ifndef INCLUDED_h2d_Layers
#include <h2d/Layers.h>
#endif
#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
#ifndef INCLUDED_h2d_RenderContext
#include <h2d/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_h2d_Object
#include <hxd/impl/ArrayIterator_h2d_Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fd772ca24dd960d6_19_new,"h2d.Layers","new",0xeba41d28,"h2d.Layers.new","h2d/Layers.hx",19,0x17723727)
HX_LOCAL_STACK_FRAME(_hx_pos_fd772ca24dd960d6_30_addChild,"h2d.Layers","addChild",0xe8932df3,"h2d.Layers.addChild","h2d/Layers.hx",30,0x17723727)
HX_LOCAL_STACK_FRAME(_hx_pos_fd772ca24dd960d6_40_add,"h2d.Layers","add",0xeb9a3ee9,"h2d.Layers.add","h2d/Layers.hx",40,0x17723727)
HX_LOCAL_STACK_FRAME(_hx_pos_fd772ca24dd960d6_49_addChildAt,"h2d.Layers","addChildAt",0x963109c6,"h2d.Layers.addChildAt","h2d/Layers.hx",49,0x17723727)
HX_LOCAL_STACK_FRAME(_hx_pos_fd772ca24dd960d6_65_removeChild,"h2d.Layers","removeChild",0x7703db80,"h2d.Layers.removeChild","h2d/Layers.hx",65,0x17723727)
HX_LOCAL_STACK_FRAME(_hx_pos_fd772ca24dd960d6_89_under,"h2d.Layers","under",0x40769fe0,"h2d.Layers.under","h2d/Layers.hx",89,0x17723727)
HX_LOCAL_STACK_FRAME(_hx_pos_fd772ca24dd960d6_116_over,"h2d.Layers","over",0x44ab738c,"h2d.Layers.over","h2d/Layers.hx",116,0x17723727)
HX_LOCAL_STACK_FRAME(_hx_pos_fd772ca24dd960d6_140_getLayer,"h2d.Layers","getLayer",0xf913ef93,"h2d.Layers.getLayer","h2d/Layers.hx",140,0x17723727)
HX_LOCAL_STACK_FRAME(_hx_pos_fd772ca24dd960d6_157_getChildLayer,"h2d.Layers","getChildLayer",0x4f996593,"h2d.Layers.getChildLayer","h2d/Layers.hx",157,0x17723727)
HX_LOCAL_STACK_FRAME(_hx_pos_fd772ca24dd960d6_166_drawLayer,"h2d.Layers","drawLayer",0x5b21c9f5,"h2d.Layers.drawLayer","h2d/Layers.hx",166,0x17723727)
HX_LOCAL_STACK_FRAME(_hx_pos_fd772ca24dd960d6_186_ysort,"h2d.Layers","ysort",0x9167671f,"h2d.Layers.ysort","h2d/Layers.hx",186,0x17723727)
namespace h2d{

void Layers_obj::__construct( ::h2d::Object parent){
            	HX_STACKFRAME(&_hx_pos_fd772ca24dd960d6_19_new)
HXLINE(  20)		super::__construct(parent);
HXLINE(  21)		this->layersIndexes = ::Array_obj< int >::__new(0);
HXLINE(  22)		this->layerCount = 0;
            	}

Dynamic Layers_obj::__CreateEmpty() { return new Layers_obj; }

void *Layers_obj::_hx_vtable = 0;

Dynamic Layers_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Layers_obj > _hx_result = new Layers_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Layers_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0828b434) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0828b434;
	} else {
		return inClassId==(int)0x0af28419;
	}
}

void Layers_obj::addChild( ::h2d::Object s){
            	HX_STACKFRAME(&_hx_pos_fd772ca24dd960d6_30_addChild)
HXDLIN(  30)		this->addChildAt(s,0);
            	}


void Layers_obj::add( ::h2d::Object s,int layer){
            	HX_STACKFRAME(&_hx_pos_fd772ca24dd960d6_40_add)
HXDLIN(  40)		this->addChildAt(s,layer);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Layers_obj,add,(void))

void Layers_obj::addChildAt( ::h2d::Object s,int layer){
            	HX_STACKFRAME(&_hx_pos_fd772ca24dd960d6_49_addChildAt)
HXLINE(  50)		if (::hx::IsInstanceEq( s->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE(  51)			bool old = s->allocated;
HXLINE(  52)			s->allocated = false;
HXLINE(  53)			this->removeChild(s);
HXLINE(  54)			s->allocated = old;
            		}
HXLINE(  57)		while((layer >= this->layerCount)){
HXLINE(  58)			this->layersIndexes[this->layerCount++] = this->children->length;
            		}
HXLINE(  59)		this->super::addChildAt(s,this->layersIndexes->__get(layer));
HXLINE(  60)		{
HXLINE(  60)			int _g = layer;
HXDLIN(  60)			int _g1 = this->layerCount;
HXDLIN(  60)			while((_g < _g1)){
HXLINE(  60)				_g = (_g + 1);
HXDLIN(  60)				int i = (_g - 1);
HXLINE(  61)				this->layersIndexes[i]++;
            			}
            		}
            	}


void Layers_obj::removeChild( ::h2d::Object s){
            	HX_STACKFRAME(&_hx_pos_fd772ca24dd960d6_65_removeChild)
HXDLIN(  65)		int _g = 0;
HXDLIN(  65)		int _g1 = this->children->length;
HXDLIN(  65)		while((_g < _g1)){
HXDLIN(  65)			_g = (_g + 1);
HXDLIN(  65)			int i = (_g - 1);
HXLINE(  66)			if (::hx::IsInstanceEq( this->children->__get(i).StaticCast<  ::h2d::Object >(),s )) {
HXLINE(  67)				this->children->removeRange(i,1);
HXLINE(  68)				if (s->allocated) {
HXLINE(  68)					s->onRemove();
            				}
HXLINE(  69)				s->parent = null();
HXLINE(  70)				s->posChanged = true;
HXLINE(  71)				if (::hx::IsNotNull( s->parentContainer )) {
HXLINE(  71)					s->setParentContainer(null());
            				}
HXLINE(  72)				int k = (this->layerCount - 1);
HXLINE(  73)				while(true){
HXLINE(  73)					bool _hx_tmp;
HXDLIN(  73)					if ((k >= 0)) {
HXLINE(  73)						_hx_tmp = (this->layersIndexes->__get(k) > i);
            					}
            					else {
HXLINE(  73)						_hx_tmp = false;
            					}
HXDLIN(  73)					if (!(_hx_tmp)) {
HXLINE(  73)						goto _hx_goto_7;
            					}
HXLINE(  74)					this->layersIndexes[k]--;
HXLINE(  75)					k = (k - 1);
            				}
            				_hx_goto_7:;
HXLINE(  77)				if (::hx::IsNotNull( this->parentContainer )) {
HXLINE(  77)					this->parentContainer->contentChanged(::hx::ObjectPtr<OBJ_>(this));
            				}
HXLINE(  78)				goto _hx_goto_6;
            			}
            		}
            		_hx_goto_6:;
            	}


void Layers_obj::under( ::h2d::Object s){
            	HX_STACKFRAME(&_hx_pos_fd772ca24dd960d6_89_under)
HXDLIN(  89)		int _g = 0;
HXDLIN(  89)		int _g1 = this->children->length;
HXDLIN(  89)		while((_g < _g1)){
HXDLIN(  89)			_g = (_g + 1);
HXDLIN(  89)			int i = (_g - 1);
HXLINE(  90)			if (::hx::IsInstanceEq( this->children->__get(i).StaticCast<  ::h2d::Object >(),s )) {
HXLINE(  91)				int pos = 0;
HXLINE(  92)				{
HXLINE(  92)					int _g = 0;
HXDLIN(  92)					::Array< int > _g1 = this->layersIndexes;
HXDLIN(  92)					while((_g < _g1->length)){
HXLINE(  92)						int l = _g1->__get(_g);
HXDLIN(  92)						_g = (_g + 1);
HXLINE(  93)						if ((l > i)) {
HXLINE(  94)							goto _hx_goto_10;
            						}
            						else {
HXLINE(  96)							pos = l;
            						}
            					}
            					_hx_goto_10:;
            				}
HXLINE(  97)				int p = i;
HXLINE(  98)				while((p > pos)){
HXLINE(  99)					this->children[p] = this->children->__get((p - 1)).StaticCast<  ::h2d::Object >();
HXLINE( 100)					p = (p - 1);
            				}
HXLINE( 102)				this->children[pos] = s;
HXLINE( 104)				if (s->allocated) {
HXLINE( 105)					s->onHierarchyMoved(false);
            				}
HXLINE( 106)				return;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layers_obj,under,(void))

void Layers_obj::over( ::h2d::Object s){
            	HX_STACKFRAME(&_hx_pos_fd772ca24dd960d6_116_over)
HXDLIN( 116)		int _g = 0;
HXDLIN( 116)		int _g1 = this->children->length;
HXDLIN( 116)		while((_g < _g1)){
HXDLIN( 116)			_g = (_g + 1);
HXDLIN( 116)			int i = (_g - 1);
HXLINE( 117)			if (::hx::IsInstanceEq( this->children->__get(i).StaticCast<  ::h2d::Object >(),s )) {
HXLINE( 118)				{
HXLINE( 118)					int _g = 0;
HXDLIN( 118)					::Array< int > _g1 = this->layersIndexes;
HXDLIN( 118)					while((_g < _g1->length)){
HXLINE( 118)						int l = _g1->__get(_g);
HXDLIN( 118)						_g = (_g + 1);
HXLINE( 119)						if ((l > i)) {
HXLINE( 120)							{
HXLINE( 120)								int _g = i;
HXDLIN( 120)								int _g1 = (l - 1);
HXDLIN( 120)								while((_g < _g1)){
HXLINE( 120)									_g = (_g + 1);
HXDLIN( 120)									int p = (_g - 1);
HXLINE( 121)									this->children[p] = this->children->__get((p + 1)).StaticCast<  ::h2d::Object >();
            								}
            							}
HXLINE( 122)							this->children[(l - 1)] = s;
HXLINE( 124)							if (s->allocated) {
HXLINE( 125)								s->onHierarchyMoved(false);
            							}
HXLINE( 126)							return;
            						}
            					}
            				}
HXLINE( 128)				return;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layers_obj,over,(void))

 ::Dynamic Layers_obj::getLayer(int layer){
            	HX_GC_STACKFRAME(&_hx_pos_fd772ca24dd960d6_140_getLayer)
HXLINE( 141)		::Array< ::Dynamic> a;
HXLINE( 142)		if ((layer >= this->layerCount)) {
HXLINE( 143)			a = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 145)			int start;
HXDLIN( 145)			if ((layer == 0)) {
HXLINE( 145)				start = 0;
            			}
            			else {
HXLINE( 145)				start = this->layersIndexes->__get((layer - 1));
            			}
HXLINE( 146)			int max = this->layersIndexes->__get(layer);
HXLINE( 147)			a = this->children->slice(start,max);
            		}
HXLINE( 149)		return  ::hxd::impl::ArrayIterator_h2d_Object_obj::__alloc( HX_CTX ,a);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layers_obj,getLayer,return )

int Layers_obj::getChildLayer( ::h2d::Object s){
            	HX_STACKFRAME(&_hx_pos_fd772ca24dd960d6_157_getChildLayer)
HXLINE( 158)		if (::hx::IsInstanceNotEq( s->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 158)			return -1;
            		}
HXLINE( 160)		int index = this->children->indexOf(s,null());
HXLINE( 161)		{
HXLINE( 161)			int _g = 0;
HXDLIN( 161)			int _g1 = this->layerCount;
HXDLIN( 161)			while((_g < _g1)){
HXLINE( 161)				_g = (_g + 1);
HXDLIN( 161)				int i = (_g - 1);
HXLINE( 162)				if ((this->layersIndexes->__get(i) > index)) {
HXLINE( 162)					return i;
            				}
            			}
            		}
HXLINE( 163)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layers_obj,getChildLayer,return )

void Layers_obj::drawLayer( ::h2d::RenderContext ctx,int layer){
            	HX_STACKFRAME(&_hx_pos_fd772ca24dd960d6_166_drawLayer)
HXLINE( 167)		if ((layer >= this->layerCount)) {
HXLINE( 168)			return;
            		}
HXLINE( 169)		Float old = ctx->globalAlpha;
HXLINE( 170)		 ::h2d::RenderContext ctx1 = ctx;
HXDLIN( 170)		ctx1->globalAlpha = (ctx1->globalAlpha * this->alpha);
HXLINE( 171)		int start;
HXDLIN( 171)		if ((layer == 0)) {
HXLINE( 171)			start = 0;
            		}
            		else {
HXLINE( 171)			start = this->layersIndexes->__get((layer - 1));
            		}
HXLINE( 172)		int max = this->layersIndexes->__get(layer);
HXLINE( 173)		if (ctx->front2back) {
HXLINE( 174)			int _g = start;
HXDLIN( 174)			int _g1 = max;
HXDLIN( 174)			while((_g < _g1)){
HXLINE( 174)				_g = (_g + 1);
HXDLIN( 174)				int i = (_g - 1);
HXDLIN( 174)				this->children->__get(((max - 1) - i)).StaticCast<  ::h2d::Object >()->drawRec(ctx);
            			}
            		}
            		else {
HXLINE( 176)			int _g = start;
HXDLIN( 176)			int _g1 = max;
HXDLIN( 176)			while((_g < _g1)){
HXLINE( 176)				_g = (_g + 1);
HXDLIN( 176)				int i = (_g - 1);
HXDLIN( 176)				this->children->__get(i).StaticCast<  ::h2d::Object >()->drawRec(ctx);
            			}
            		}
HXLINE( 178)		ctx->globalAlpha = old;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Layers_obj,drawLayer,(void))

void Layers_obj::ysort(int layer){
            	HX_STACKFRAME(&_hx_pos_fd772ca24dd960d6_186_ysort)
HXLINE( 187)		if ((layer >= this->layerCount)) {
HXLINE( 187)			return;
            		}
HXLINE( 188)		int start;
HXDLIN( 188)		if ((layer == 0)) {
HXLINE( 188)			start = 0;
            		}
            		else {
HXLINE( 188)			start = this->layersIndexes->__get((layer - 1));
            		}
HXLINE( 189)		int max = this->layersIndexes->__get(layer);
HXLINE( 190)		if ((start == max)) {
HXLINE( 191)			return;
            		}
HXLINE( 192)		int pos = start;
HXLINE( 193)		pos = (pos + 1);
HXDLIN( 193)		Float ymax = this->children->__get((pos - 1)).StaticCast<  ::h2d::Object >()->y;
HXLINE( 194)		while((pos < max)){
HXLINE( 195)			 ::h2d::Object c = this->children->__get(pos).StaticCast<  ::h2d::Object >();
HXLINE( 196)			if ((c->y < ymax)) {
HXLINE( 197)				int p = (pos - 1);
HXLINE( 198)				while((p >= start)){
HXLINE( 199)					 ::h2d::Object c2 = this->children->__get(p).StaticCast<  ::h2d::Object >();
HXLINE( 200)					if ((c->y >= c2->y)) {
HXLINE( 200)						goto _hx_goto_24;
            					}
HXLINE( 201)					this->children[(p + 1)] = c2;
HXLINE( 202)					p = (p - 1);
            				}
            				_hx_goto_24:;
HXLINE( 204)				this->children[(p + 1)] = c;
HXLINE( 205)				if (c->allocated) {
HXLINE( 206)					c->onHierarchyMoved(false);
            				}
            			}
            			else {
HXLINE( 208)				ymax = c->y;
            			}
HXLINE( 209)			pos = (pos + 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layers_obj,ysort,(void))


::hx::ObjectPtr< Layers_obj > Layers_obj::__new( ::h2d::Object parent) {
	::hx::ObjectPtr< Layers_obj > __this = new Layers_obj();
	__this->__construct(parent);
	return __this;
}

::hx::ObjectPtr< Layers_obj > Layers_obj::__alloc(::hx::Ctx *_hx_ctx, ::h2d::Object parent) {
	Layers_obj *__this = (Layers_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Layers_obj), true, "h2d.Layers"));
	*(void **)__this = Layers_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

Layers_obj::Layers_obj()
{
}

void Layers_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Layers);
	HX_MARK_MEMBER_NAME(layersIndexes,"layersIndexes");
	HX_MARK_MEMBER_NAME(layerCount,"layerCount");
	 ::h2d::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Layers_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layersIndexes,"layersIndexes");
	HX_VISIT_MEMBER_NAME(layerCount,"layerCount");
	 ::h2d::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Layers_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"over") ) { return ::hx::Val( over_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"under") ) { return ::hx::Val( under_dyn() ); }
		if (HX_FIELD_EQ(inName,"ysort") ) { return ::hx::Val( ysort_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return ::hx::Val( getLayer_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawLayer") ) { return ::hx::Val( drawLayer_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layerCount") ) { return ::hx::Val( layerCount ); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return ::hx::Val( addChildAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"layersIndexes") ) { return ::hx::Val( layersIndexes ); }
		if (HX_FIELD_EQ(inName,"getChildLayer") ) { return ::hx::Val( getChildLayer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Layers_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"layerCount") ) { layerCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"layersIndexes") ) { layersIndexes=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Layers_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("layersIndexes",9e,02,7a,6c));
	outFields->push(HX_("layerCount",3e,fd,f2,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Layers_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Layers_obj,layersIndexes),HX_("layersIndexes",9e,02,7a,6c)},
	{::hx::fsInt,(int)offsetof(Layers_obj,layerCount),HX_("layerCount",3e,fd,f2,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Layers_obj_sStaticStorageInfo = 0;
#endif

static ::String Layers_obj_sMemberFields[] = {
	HX_("layersIndexes",9e,02,7a,6c),
	HX_("layerCount",3e,fd,f2,ef),
	HX_("addChild",bb,cf,16,bf),
	HX_("add",21,f2,49,00),
	HX_("addChildAt",8e,ad,36,ce),
	HX_("removeChild",b8,86,ed,43),
	HX_("under",18,91,e3,a6),
	HX_("over",54,91,b8,49),
	HX_("getLayer",5b,91,97,cf),
	HX_("getChildLayer",cb,4e,ae,6a),
	HX_("drawLayer",2d,b7,cb,37),
	HX_("ysort",57,58,d4,f7),
	::String(null()) };

::hx::Class Layers_obj::__mClass;

void Layers_obj::__register()
{
	Layers_obj _hx_dummy;
	Layers_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Layers",36,a9,3c,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Layers_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Layers_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Layers_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Layers_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
