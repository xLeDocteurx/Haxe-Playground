#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_hxd_snd_Data
#include <hxd/snd/Data.h>
#endif
#ifndef INCLUDED_hxd_snd_SampleFormat
#include <hxd/snd/SampleFormat.h>
#endif
#ifndef INCLUDED_hxd_snd_WavData
#include <hxd/snd/WavData.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ef3911eb2924c19e_19_isLoading,"hxd.snd.Data","isLoading",0x68d05ccd,"hxd.snd.Data.isLoading","hxd/snd/Data.hx",19,0x62559453)
HX_LOCAL_STACK_FRAME(_hx_pos_ef3911eb2924c19e_22_decode,"hxd.snd.Data","decode",0x77bc5d33,"hxd.snd.Data.decode","hxd/snd/Data.hx",22,0x62559453)
HX_LOCAL_STACK_FRAME(_hx_pos_ef3911eb2924c19e_45_resample,"hxd.snd.Data","resample",0xa24bd762,"hxd.snd.Data.resample","hxd/snd/Data.hx",45,0x62559453)
HX_LOCAL_STACK_FRAME(_hx_pos_ef3911eb2924c19e_158_decodeBuffer,"hxd.snd.Data","decodeBuffer",0x86cff693,"hxd.snd.Data.decodeBuffer","hxd/snd/Data.hx",158,0x62559453)
HX_LOCAL_STACK_FRAME(_hx_pos_ef3911eb2924c19e_162_getBytesPerSample,"hxd.snd.Data","getBytesPerSample",0x61ce724d,"hxd.snd.Data.getBytesPerSample","hxd/snd/Data.hx",162,0x62559453)
HX_LOCAL_STACK_FRAME(_hx_pos_ef3911eb2924c19e_179_load,"hxd.snd.Data","load",0x51c81eeb,"hxd.snd.Data.load","hxd/snd/Data.hx",179,0x62559453)
HX_LOCAL_STACK_FRAME(_hx_pos_ef3911eb2924c19e_183_get_duration,"hxd.snd.Data","get_duration",0x31a21522,"hxd.snd.Data.get_duration","hxd/snd/Data.hx",183,0x62559453)
HX_LOCAL_STACK_FRAME(_hx_pos_ef3911eb2924c19e_166_formatBytes,"hxd.snd.Data","formatBytes",0xd54b2f8f,"hxd.snd.Data.formatBytes","hxd/snd/Data.hx",166,0x62559453)
namespace hxd{
namespace snd{

void Data_obj::__construct() { }

Dynamic Data_obj::__CreateEmpty() { return new Data_obj; }

void *Data_obj::_hx_vtable = 0;

Dynamic Data_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Data_obj > _hx_result = new Data_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Data_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x74492a5f;
}

bool Data_obj::isLoading(){
            	HX_STACKFRAME(&_hx_pos_ef3911eb2924c19e_19_isLoading)
HXDLIN(  19)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,isLoading,return )

void Data_obj::decode( ::haxe::io::Bytes out,int outPos,int sampleStart,int sampleCount){
            	HX_STACKFRAME(&_hx_pos_ef3911eb2924c19e_22_decode)
HXLINE(  23)		int bpp = this->getBytesPerSample();
HXLINE(  24)		bool _hx_tmp;
HXDLIN(  24)		bool _hx_tmp1;
HXDLIN(  24)		bool _hx_tmp2;
HXDLIN(  24)		if ((sampleStart >= 0)) {
HXLINE(  24)			_hx_tmp2 = (sampleCount < 0);
            		}
            		else {
HXLINE(  24)			_hx_tmp2 = true;
            		}
HXDLIN(  24)		if (!(_hx_tmp2)) {
HXLINE(  24)			_hx_tmp1 = (outPos < 0);
            		}
            		else {
HXLINE(  24)			_hx_tmp1 = true;
            		}
HXDLIN(  24)		if (!(_hx_tmp1)) {
HXLINE(  24)			_hx_tmp = ((outPos + (sampleCount * bpp)) > out->length);
            		}
            		else {
HXLINE(  24)			_hx_tmp = true;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  26)			::String s = (HX_("sampleStart = ",8b,c8,6b,b6) + sampleStart);
HXLINE(  27)			s = (s + (HX_(" sampleCount = ",5e,32,56,a4) + sampleCount));
HXLINE(  28)			s = (s + (HX_(" outPos = ",5d,c3,e6,ad) + outPos));
HXLINE(  29)			s = (s + (HX_(" bpp = ",e1,8f,a9,28) + bpp));
HXLINE(  30)			s = (s + (HX_(" out.length = ",3d,90,d4,3d) + out->length));
HXLINE(  31)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(s));
            		}
HXLINE(  33)		if (((sampleStart + sampleCount) >= this->samples)) {
HXLINE(  34)			int count = 0;
HXLINE(  35)			if ((sampleStart < this->samples)) {
HXLINE(  36)				count = (this->samples - sampleStart);
HXLINE(  37)				this->decodeBuffer(out,outPos,sampleStart,count);
            			}
HXLINE(  39)			out->fill((outPos + (count * bpp)),((sampleCount - count) * bpp),0);
HXLINE(  40)			return;
            		}
HXLINE(  42)		this->decodeBuffer(out,outPos,sampleStart,sampleCount);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Data_obj,decode,(void))

 ::hxd::snd::Data Data_obj::resample(int rate, ::hxd::snd::SampleFormat format,int channels){
            	HX_GC_STACKFRAME(&_hx_pos_ef3911eb2924c19e_45_resample)
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		bool _hx_tmp1;
HXDLIN(  46)		if (::hx::IsPointerEq( this->sampleFormat,format )) {
HXLINE(  46)			_hx_tmp1 = (this->samplingRate == rate);
            		}
            		else {
HXLINE(  46)			_hx_tmp1 = false;
            		}
HXDLIN(  46)		if (_hx_tmp1) {
HXLINE(  46)			_hx_tmp = (this->channels == channels);
            		}
            		else {
HXLINE(  46)			_hx_tmp = false;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  47)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  49)		int newSamples = ::Math_obj::ceil((( (Float)(this->samples) ) * (( (Float)(rate) ) / ( (Float)(this->samplingRate) ))));
HXLINE(  50)		int bpp = this->getBytesPerSample();
HXLINE(  51)		 ::haxe::io::Bytes data = ::haxe::io::Bytes_obj::alloc((bpp * this->samples));
HXLINE(  52)		this->decodeBuffer(data,0,0,this->samples);
HXLINE(  54)		int out = (channels * newSamples);
HXDLIN(  54)		int out1;
HXDLIN(  54)		switch((int)(format->_hx_getIndex())){
            			case (int)0: {
HXLINE(  54)				out1 = 1;
            			}
            			break;
            			case (int)1: {
HXLINE(  54)				out1 = 2;
            			}
            			break;
            			case (int)2: {
HXLINE(  54)				out1 = 4;
            			}
            			break;
            		}
HXDLIN(  54)		 ::haxe::io::Bytes out2 = ::haxe::io::Bytes_obj::alloc((out * out1));
HXLINE(  55)		this->resampleBuffer(out2,0,data,0,rate,format,channels,this->samples);
HXLINE(  57)		 ::hxd::snd::WavData data1 =  ::hxd::snd::WavData_obj::__alloc( HX_CTX ,null());
HXLINE(  58)		data1->channels = channels;
HXLINE(  59)		data1->samples = newSamples;
HXLINE(  60)		data1->sampleFormat = format;
HXLINE(  61)		data1->samplingRate = rate;
HXLINE(  62)		data1->rawData = out2;
HXLINE(  63)		return data1;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Data_obj,resample,return )

void Data_obj::resampleBuffer( ::haxe::io::Bytes out,int outPos, ::haxe::io::Bytes input,int inPos,int rate, ::hxd::snd::SampleFormat format,int channels,int samples){
	int bpp = this->getBytesPerSample();
	int newSamples = ::Math_obj::ceil((( (Float)(samples) ) * (( (Float)(rate) ) / ( (Float)(this->samplingRate) ))));
	bool resample = (samples != newSamples);
	bool _hx_tmp;
	bool _hx_tmp1;
	bool _hx_tmp2;
	bool _hx_tmp3;
	if (!(resample)) {
		_hx_tmp3 = ::hx::IsPointerEq( this->sampleFormat,::hxd::snd::SampleFormat_obj::I16_dyn() );
	}
	else {
		_hx_tmp3 = false;
	}
	if (_hx_tmp3) {
		_hx_tmp2 = ::hx::IsPointerEq( format,::hxd::snd::SampleFormat_obj::I16_dyn() );
	}
	else {
		_hx_tmp2 = false;
	}
	if (_hx_tmp2) {
		_hx_tmp1 = (channels == 1);
	}
	else {
		_hx_tmp1 = false;
	}
	if (_hx_tmp1) {
		_hx_tmp = (this->channels == 2);
	}
	else {
		_hx_tmp = false;
	}
	if (_hx_tmp) {
		int r = inPos;
		int w = outPos;
		{
			int _g = 0;
			int _g1 = samples;
			while((_g < _g1)){
				_g = (_g + 1);
				int i = (_g - 1);
				int sl = (( (int)(input->b->__get(r)) ) | (( (int)(input->b->__get((r + 1))) ) << 8));
				r = (r + 2);
				int sr = (( (int)(input->b->__get(r)) ) | (( (int)(input->b->__get((r + 1))) ) << 8));
				r = (r + 2);
				int s;
				if (((sl ^ sr) >= 32768)) {
					if (((sl & 32768) != 0)) {
						sl = (sl | -65536);
					}
					if (((sr & 32768) != 0)) {
						sr = (sr | -65536);
					}
					s = (((sl + sr) >> 1) & 65535);
				}
				else {
					s = ((sl + sr) >> 1);
				}
				{
					out->b[w] = ( (unsigned char)(s) );
					out->b[(w + 1)] = ( (unsigned char)((s >> 8)) );
				}
				w = (w + 2);
			}
		}
		return;
	}
	int srcChannels = this->channels;
	int commonChannels;
	if ((channels < srcChannels)) {
		commonChannels = channels;
	}
	else {
		commonChannels = srcChannels;
	}
	int extraChannels = (channels - commonChannels);
	Float sval = ((Float)0.);
	int ival = 0;
	{
		int _g = 0;
		int _g1 = newSamples;
		while((_g < _g1)){
			_g = (_g + 1);
			int i = (_g - 1);
			Float targetSample = ((( (Float)(i) ) / ( (Float)((newSamples - 1)) )) * ( (Float)((samples - 1)) ));
			int isample = ::Std_obj::_hx_int(targetSample);
			Float offset = (targetSample - ( (Float)(isample) ));
			int srcPos = (inPos + (isample * bpp));
			if ((isample == (samples - 1))) {
				resample = false;
			}
			{
				int _g1 = 0;
				int _g2 = commonChannels;
				while((_g1 < _g2)){
					_g1 = (_g1 + 1);
					int k = (_g1 - 1);
					Float sval1;
					Float sval2 = ((Float)0.);
					switch((int)(this->sampleFormat->_hx_getIndex())){
						case (int)0: {
							sval1 = (( (Float)(input->b->__get(srcPos)) ) / ( (Float)(255) ));
							if (resample) {
								sval2 = (( (Float)(input->b->__get((srcPos + bpp))) ) / ( (Float)(255) ));
							}
							srcPos = (srcPos + 1);
						}
						break;
						case (int)1: {
							int v = (( (int)(input->b->__get(srcPos)) ) | (( (int)(input->b->__get((srcPos + 1))) ) << 8));
							int sval11;
							if (((v & 32768) == 0)) {
								sval11 = v;
							}
							else {
								sval11 = (v | -65536);
							}
							sval1 = (( (Float)(sval11) ) / ( (Float)(32768) ));
							if (resample) {
								int pos = (srcPos + bpp);
								int v = (( (int)(input->b->__get(pos)) ) | (( (int)(input->b->__get((pos + 1))) ) << 8));
								int sval21;
								if (((v & 32768) == 0)) {
									sval21 = v;
								}
								else {
									sval21 = (v | -65536);
								}
								sval2 = (( (Float)(sval21) ) / ( (Float)(32768) ));
							}
							srcPos = (srcPos + 2);
						}
						break;
						case (int)2: {
							bool sval11;
							if ((srcPos >= 0)) {
								sval11 = ((srcPos + 4) > input->length);
							}
							else {
								sval11 = true;
							}
							if (sval11) {
								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
							}
							sval1 =  ::__hxcpp_memory_get_float(input->b,srcPos);
							if (resample) {
								int pos = (srcPos + bpp);
								bool sval21;
								if ((pos >= 0)) {
									sval21 = ((pos + 4) > input->length);
								}
								else {
									sval21 = true;
								}
								if (sval21) {
									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
								}
								sval2 =  ::__hxcpp_memory_get_float(input->b,pos);
							}
							srcPos = (srcPos + 4);
						}
						break;
					}
					if (resample) {
						sval = (sval1 + (offset * (sval2 - sval1)));
					}
					else {
						sval = sval1;
					}
					switch((int)(format->_hx_getIndex())){
						case (int)0: {
							ival = ::Std_obj::_hx_int(((sval + 1) * ( (Float)(128) )));
							if ((ival > 255)) {
								ival = 255;
							}
							{
								outPos = (outPos + 1);
								out->b[(outPos - 1)] = ( (unsigned char)(ival) );
							}
						}
						break;
						case (int)1: {
							ival = ::Std_obj::_hx_int((sval * ( (Float)(32768) )));
							if ((ival > 32767)) {
								ival = 32767;
							}
							ival = (ival & 65535);
							{
								out->b[outPos] = ( (unsigned char)(ival) );
								out->b[(outPos + 1)] = ( (unsigned char)((ival >> 8)) );
							}
							outPos = (outPos + 2);
						}
						break;
						case (int)2: {
							out->setFloat(outPos,sval);
							outPos = (outPos + 4);
						}
						break;
					}
				}
			}
			{
				int _g3 = 0;
				int _g4 = extraChannels;
				while((_g3 < _g4)){
					_g3 = (_g3 + 1);
					int i = (_g3 - 1);
					switch((int)(format->_hx_getIndex())){
						case (int)0: {
							outPos = (outPos + 1);
							out->b[(outPos - 1)] = ( (unsigned char)(ival) );
						}
						break;
						case (int)1: {
							{
								out->b[outPos] = ( (unsigned char)(ival) );
								out->b[(outPos + 1)] = ( (unsigned char)((ival >> 8)) );
							}
							outPos = (outPos + 2);
						}
						break;
						case (int)2: {
							out->setFloat(outPos,sval);
							outPos = (outPos + 4);
						}
						break;
					}
				}
			}
		}
	}
}


HX_DEFINE_DYNAMIC_FUNC8(Data_obj,resampleBuffer,(void))

void Data_obj::decodeBuffer( ::haxe::io::Bytes out,int outPos,int sampleStart,int sampleCount){
            	HX_STACKFRAME(&_hx_pos_ef3911eb2924c19e_158_decodeBuffer)
HXDLIN( 158)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Data_obj,decodeBuffer,(void))

int Data_obj::getBytesPerSample(){
            	HX_STACKFRAME(&_hx_pos_ef3911eb2924c19e_162_getBytesPerSample)
HXDLIN( 162)		int _hx_tmp;
HXDLIN( 162)		switch((int)(this->sampleFormat->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 162)				_hx_tmp = 1;
            			}
            			break;
            			case (int)1: {
HXDLIN( 162)				_hx_tmp = 2;
            			}
            			break;
            			case (int)2: {
HXDLIN( 162)				_hx_tmp = 4;
            			}
            			break;
            		}
HXDLIN( 162)		return (this->channels * _hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,getBytesPerSample,return )

void Data_obj::load( ::Dynamic onEnd){
            	HX_STACKFRAME(&_hx_pos_ef3911eb2924c19e_179_load)
HXDLIN( 179)		onEnd();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Data_obj,load,(void))

Float Data_obj::get_duration(){
            	HX_STACKFRAME(&_hx_pos_ef3911eb2924c19e_183_get_duration)
HXDLIN( 183)		return (( (Float)(this->samples) ) / ( (Float)(this->samplingRate) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,get_duration,return )

int Data_obj::formatBytes( ::hxd::snd::SampleFormat format){
            	HX_STACKFRAME(&_hx_pos_ef3911eb2924c19e_166_formatBytes)
HXDLIN( 166)		switch((int)(format->_hx_getIndex())){
            			case (int)0: {
HXLINE( 167)				return 1;
            			}
            			break;
            			case (int)1: {
HXLINE( 168)				return 2;
            			}
            			break;
            			case (int)2: {
HXLINE( 169)				return 4;
            			}
            			break;
            		}
HXLINE( 166)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,formatBytes,return )


Data_obj::Data_obj()
{
}

void Data_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Data);
	HX_MARK_MEMBER_NAME(samples,"samples");
	HX_MARK_MEMBER_NAME(samplingRate,"samplingRate");
	HX_MARK_MEMBER_NAME(sampleFormat,"sampleFormat");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_END_CLASS();
}

void Data_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(samples,"samples");
	HX_VISIT_MEMBER_NAME(samplingRate,"samplingRate");
	HX_VISIT_MEMBER_NAME(sampleFormat,"sampleFormat");
	HX_VISIT_MEMBER_NAME(channels,"channels");
}

::hx::Val Data_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { return ::hx::Val( decode_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"samples") ) { return ::hx::Val( samples ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return ::hx::Val( channels ); }
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_duration() ); }
		if (HX_FIELD_EQ(inName,"resample") ) { return ::hx::Val( resample_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isLoading") ) { return ::hx::Val( isLoading_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"samplingRate") ) { return ::hx::Val( samplingRate ); }
		if (HX_FIELD_EQ(inName,"sampleFormat") ) { return ::hx::Val( sampleFormat ); }
		if (HX_FIELD_EQ(inName,"decodeBuffer") ) { return ::hx::Val( decodeBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return ::hx::Val( get_duration_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resampleBuffer") ) { return ::hx::Val( resampleBuffer_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getBytesPerSample") ) { return ::hx::Val( getBytesPerSample_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Data_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"formatBytes") ) { outValue = formatBytes_dyn(); return true; }
	}
	return false;
}

::hx::Val Data_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"samples") ) { samples=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"samplingRate") ) { samplingRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sampleFormat") ) { sampleFormat=inValue.Cast<  ::hxd::snd::SampleFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Data_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("samples",09,c5,c9,83));
	outFields->push(HX_("samplingRate",67,a6,32,36));
	outFields->push(HX_("sampleFormat",01,df,fa,41));
	outFields->push(HX_("channels",50,aa,ee,6a));
	outFields->push(HX_("duration",54,0f,8e,14));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Data_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Data_obj,samples),HX_("samples",09,c5,c9,83)},
	{::hx::fsInt,(int)offsetof(Data_obj,samplingRate),HX_("samplingRate",67,a6,32,36)},
	{::hx::fsObject /*  ::hxd::snd::SampleFormat */ ,(int)offsetof(Data_obj,sampleFormat),HX_("sampleFormat",01,df,fa,41)},
	{::hx::fsInt,(int)offsetof(Data_obj,channels),HX_("channels",50,aa,ee,6a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Data_obj_sStaticStorageInfo = 0;
#endif

static ::String Data_obj_sMemberFields[] = {
	HX_("samples",09,c5,c9,83),
	HX_("samplingRate",67,a6,32,36),
	HX_("sampleFormat",01,df,fa,41),
	HX_("channels",50,aa,ee,6a),
	HX_("isLoading",b2,4b,f1,0c),
	HX_("decode",2e,5d,ed,64),
	HX_("resample",1d,0c,b9,fd),
	HX_("resampleBuffer",fd,b0,21,4b),
	HX_("decodeBuffer",ce,a4,d5,1e),
	HX_("getBytesPerSample",32,4e,80,47),
	HX_("load",26,9a,b7,47),
	HX_("get_duration",5d,c3,a7,c9),
	::String(null()) };

::hx::Class Data_obj::__mClass;

static ::String Data_obj_sStaticFields[] = {
	HX_("formatBytes",b4,61,b1,76),
	::String(null())
};

void Data_obj::__register()
{
	Data_obj _hx_dummy;
	Data_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.Data",c9,11,bc,57);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Data_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Data_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Data_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Data_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Data_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Data_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
