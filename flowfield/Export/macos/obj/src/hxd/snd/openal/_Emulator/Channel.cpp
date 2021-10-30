#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#include <haxe/io/ArrayBufferViewImpl.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_snd_NativeChannel
#include <hxd/snd/NativeChannel.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Buffer
#include <hxd/snd/openal/Buffer.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Source
#include <hxd/snd/openal/Source.h>
#endif
#ifndef INCLUDED_hxd_snd_openal__Emulator_Channel
#include <hxd/snd/openal/_Emulator/Channel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41b7172a1035fa9c_6_new,"hxd.snd.openal._Emulator.Channel","new",0x8ef538c1,"hxd.snd.openal._Emulator.Channel.new","hxd/snd/openal/Emulator.hx",6,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_41b7172a1035fa9c_10_boot,"hxd.snd.openal._Emulator.Channel","boot",0x7fb570b1,"hxd.snd.openal._Emulator.Channel.boot","hxd/snd/openal/Emulator.hx",10,0x857ad050)
namespace hxd{
namespace snd{
namespace openal{
namespace _Emulator{

void Channel_obj::__construct( ::hxd::snd::openal::Source source,int samples){
            	HX_STACKFRAME(&_hx_pos_41b7172a1035fa9c_6_new)
HXLINE(   9)		this->startup = ((Float)0.);
HXLINE(  13)		this->source = source;
HXLINE(  14)		super::__construct(samples);
            	}

Dynamic Channel_obj::__CreateEmpty() { return new Channel_obj; }

void *Channel_obj::_hx_vtable = 0;

Dynamic Channel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Channel_obj > _hx_result = new Channel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Channel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21caf519) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21caf519;
	} else {
		return inClassId==(int)0x61e51833;
	}
}

void Channel_obj::onSample( ::haxe::io::ArrayBufferViewImpl out){
	int pos = 0;
	int count = ((out->byteLength >> 2) >> 1);
	if ((this->source->duration > 0)) {
		Float volume = this->source->volume;
		int bufferIndex = 0;
		int baseSample = 0;
		int curSample = this->source->currentSample;
		bufferIndex = (bufferIndex + 1);
		 ::hxd::snd::openal::Buffer buffer = this->source->buffers->__get((bufferIndex - 1)).StaticCast<  ::hxd::snd::openal::Buffer >();
		while((count > 0)){
			while(true){
				bool _hx_tmp;
				if (::hx::IsNotNull( buffer )) {
					_hx_tmp = (curSample >= buffer->samples);
				}
				else {
					_hx_tmp = false;
				}
				if (!(_hx_tmp)) {
					goto _hx_goto_2;
				}
				baseSample = (baseSample + buffer->samples);
				curSample = (curSample - buffer->samples);
				bufferIndex = (bufferIndex + 1);
				buffer = this->source->buffers->__get((bufferIndex - 1)).StaticCast<  ::hxd::snd::openal::Buffer >();
			}
			_hx_goto_2:;
			if (::hx::IsNull( buffer )) {
				if (this->source->loop) {
					curSample = 0;
					baseSample = 0;
					bufferIndex = 0;
					bufferIndex = (bufferIndex + 1);
					buffer = this->source->buffers->__get((bufferIndex - 1)).StaticCast<  ::hxd::snd::openal::Buffer >();
					continue;
				}
				goto _hx_goto_1;
			}
			int scount = (buffer->samples - curSample);
			if ((scount > count)) {
				scount = count;
			}
			int read = (curSample << 1);
			::Array< Float > data = buffer->data;
			if ((this->startup < 1)) {
				int _g = 0;
				int _g1 = scount;
				while((_g < _g1)){
					_g = (_g + 1);
					int i = (_g - 1);
					{
						pos = (pos + 1);
						int index = (pos - 1);
						read = (read + 1);
						Float value = (( (Float)(_hx_array_unsafe_get(data,(read - 1))) ) * volume);
						Float value1 = (value * this->startup);
						bool _hx_tmp;
						if ((index >= 0)) {
							_hx_tmp = (index < (out->byteLength >> 2));
						}
						else {
							_hx_tmp = false;
						}
						if (_hx_tmp) {
							out->bytes->setFloat(((index << 2) + out->byteOffset),value1);
						}
					}
					{
						pos = (pos + 1);
						int index1 = (pos - 1);
						read = (read + 1);
						Float value2 = (( (Float)(_hx_array_unsafe_get(data,(read - 1))) ) * volume);
						Float value3 = (value2 * this->startup);
						bool _hx_tmp1;
						if ((index1 >= 0)) {
							_hx_tmp1 = (index1 < (out->byteLength >> 2));
						}
						else {
							_hx_tmp1 = false;
						}
						if (_hx_tmp1) {
							out->bytes->setFloat(((index1 << 2) + out->byteOffset),value3);
						}
					}
					if ((this->startup < ((Float)1.))) {
						 ::hxd::snd::openal::_Emulator::Channel _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
						_hx_tmp->startup = (_hx_tmp->startup + ((Float)0.1));
						if ((this->startup > 1)) {
							this->startup = ( (Float)(1) );
						}
					}
				}
			}
			else {
				int _g = 0;
				int _g1 = scount;
				while((_g < _g1)){
					_g = (_g + 1);
					int i = (_g - 1);
					{
						pos = (pos + 1);
						int index = (pos - 1);
						read = (read + 1);
						Float value = (( (Float)(_hx_array_unsafe_get(data,(read - 1))) ) * volume);
						bool _hx_tmp;
						if ((index >= 0)) {
							_hx_tmp = (index < (out->byteLength >> 2));
						}
						else {
							_hx_tmp = false;
						}
						if (_hx_tmp) {
							out->bytes->setFloat(((index << 2) + out->byteOffset),value);
						}
					}
					{
						pos = (pos + 1);
						int index1 = (pos - 1);
						read = (read + 1);
						Float value1 = (( (Float)(_hx_array_unsafe_get(data,(read - 1))) ) * volume);
						bool _hx_tmp1;
						if ((index1 >= 0)) {
							_hx_tmp1 = (index1 < (out->byteLength >> 2));
						}
						else {
							_hx_tmp1 = false;
						}
						if (_hx_tmp1) {
							out->bytes->setFloat(((index1 << 2) + out->byteOffset),value1);
						}
					}
				}
			}
			count = (count - scount);
			curSample = (curSample + scount);
		}
		_hx_goto_1:;
		this->source->currentSample = (baseSample + curSample);
		if ((this->source->currentSample < 0)) {
			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((baseSample + HX_("/",2f,00,00,00)) + curSample)));
		}
	}
	{
		int _g = 0;
		int _g1 = (count << 1);
		while((_g < _g1)){
			_g = (_g + 1);
			int i = (_g - 1);
			{
				pos = (pos + 1);
				int index = (pos - 1);
				bool _hx_tmp;
				if ((index >= 0)) {
					_hx_tmp = (index < (out->byteLength >> 2));
				}
				else {
					_hx_tmp = false;
				}
				if (_hx_tmp) {
					out->bytes->setFloat(((index << 2) + out->byteOffset),((Float)0.));
				}
			}
		}
	}
}


int Channel_obj::FADE_START;


::hx::ObjectPtr< Channel_obj > Channel_obj::__new( ::hxd::snd::openal::Source source,int samples) {
	::hx::ObjectPtr< Channel_obj > __this = new Channel_obj();
	__this->__construct(source,samples);
	return __this;
}

::hx::ObjectPtr< Channel_obj > Channel_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::snd::openal::Source source,int samples) {
	Channel_obj *__this = (Channel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Channel_obj), true, "hxd.snd.openal._Emulator.Channel"));
	*(void **)__this = Channel_obj::_hx_vtable;
	__this->__construct(source,samples);
	return __this;
}

Channel_obj::Channel_obj()
{
}

void Channel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Channel);
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(startup,"startup");
	HX_MARK_END_CLASS();
}

void Channel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(startup,"startup");
}

::hx::Val Channel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return ::hx::Val( source ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"startup") ) { return ::hx::Val( startup ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onSample") ) { return ::hx::Val( onSample_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Channel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast<  ::hxd::snd::openal::Source >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"startup") ) { startup=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Channel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("source",db,b0,31,32));
	outFields->push(HX_("startup",3d,37,1b,35));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Channel_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::snd::openal::Source */ ,(int)offsetof(Channel_obj,source),HX_("source",db,b0,31,32)},
	{::hx::fsFloat,(int)offsetof(Channel_obj,startup),HX_("startup",3d,37,1b,35)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Channel_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Channel_obj::FADE_START,HX_("FADE_START",ff,b5,38,88)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Channel_obj_sMemberFields[] = {
	HX_("source",db,b0,31,32),
	HX_("startup",3d,37,1b,35),
	HX_("onSample",a9,56,f7,fc),
	::String(null()) };

static void Channel_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Channel_obj::FADE_START,"FADE_START");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Channel_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Channel_obj::FADE_START,"FADE_START");
};

#endif

::hx::Class Channel_obj::__mClass;

static ::String Channel_obj_sStaticFields[] = {
	HX_("FADE_START",ff,b5,38,88),
	::String(null())
};

void Channel_obj::__register()
{
	Channel_obj _hx_dummy;
	Channel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.openal._Emulator.Channel",4f,c4,5f,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Channel_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Channel_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Channel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Channel_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Channel_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Channel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Channel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Channel_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_41b7172a1035fa9c_10_boot)
HXDLIN(  10)		FADE_START = 10;
            	}
}

} // end namespace hxd
} // end namespace snd
} // end namespace openal
} // end namespace _Emulator
