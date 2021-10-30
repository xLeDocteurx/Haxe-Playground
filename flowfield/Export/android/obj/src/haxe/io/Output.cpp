#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_exceptions_NotImplementedException
#include <haxe/exceptions/NotImplementedException.h>
#endif
#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_47_writeByte,"haxe.io.Output","writeByte",0xb4fe513a,"haxe.io.Output.writeByte","/usr/local/lib/haxe/std/haxe/io/Output.hx",47,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_57_writeBytes,"haxe.io.Output","writeBytes",0xa988c1f9,"haxe.io.Output.writeBytes","/usr/local/lib/haxe/std/haxe/io/Output.hx",57,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_85_flush,"haxe.io.Output","flush",0xa15f0af7,"haxe.io.Output.flush","/usr/local/lib/haxe/std/haxe/io/Output.hx",85,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_92_close,"haxe.io.Output","close",0xe726bfeb,"haxe.io.Output.close","/usr/local/lib/haxe/std/haxe/io/Output.hx",92,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_94_set_bigEndian,"haxe.io.Output","set_bigEndian",0x33881e91,"haxe.io.Output.set_bigEndian","/usr/local/lib/haxe/std/haxe/io/Output.hx",94,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_103_write,"haxe.io.Output","write",0x6f1d1512,"haxe.io.Output.write","/usr/local/lib/haxe/std/haxe/io/Output.hx",103,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_121_writeFullBytes,"haxe.io.Output","writeFullBytes",0xc2c420ea,"haxe.io.Output.writeFullBytes","/usr/local/lib/haxe/std/haxe/io/Output.hx",121,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_134_writeFloat,"haxe.io.Output","writeFloat",0xee877f2a,"haxe.io.Output.writeFloat","/usr/local/lib/haxe/std/haxe/io/Output.hx",134,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_167_writeInt16,"haxe.io.Output","writeInt16",0xaa114b22,"haxe.io.Output.writeInt16","/usr/local/lib/haxe/std/haxe/io/Output.hx",167,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_178_writeUInt16,"haxe.io.Output","writeUInt16",0x9fc0db91,"haxe.io.Output.writeUInt16","/usr/local/lib/haxe/std/haxe/io/Output.hx",178,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_226_writeInt32,"haxe.io.Output","writeInt32",0xaa114cdc,"haxe.io.Output.writeInt32","/usr/local/lib/haxe/std/haxe/io/Output.hx",226,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_254_writeInput,"haxe.io.Output","writeInput",0xaa0e7d98,"haxe.io.Output.writeInput","/usr/local/lib/haxe/std/haxe/io/Output.hx",254,0x72d66600)
HX_LOCAL_STACK_FRAME(_hx_pos_0e34c0ce46c21137_278_writeString,"haxe.io.Output","writeString",0x97e1cb83,"haxe.io.Output.writeString","/usr/local/lib/haxe/std/haxe/io/Output.hx",278,0x72d66600)
namespace haxe{
namespace io{

void Output_obj::__construct() { }

Dynamic Output_obj::__CreateEmpty() { return new Output_obj; }

void *Output_obj::_hx_vtable = 0;

Dynamic Output_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Output_obj > _hx_result = new Output_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Output_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a55a26d;
}

void Output_obj::writeByte(int c){
            	HX_GC_STACKFRAME(&_hx_pos_0e34c0ce46c21137_47_writeByte)
HXDLIN(  47)		HX_STACK_DO_THROW( ::haxe::exceptions::NotImplementedException_obj::__alloc( HX_CTX ,null(),null(),::hx::SourceInfo(HX_("haxe/io/Output.hx",5d,da,8a,cb),47,HX_("haxe.io.Output",61,10,0b,c7),HX_("writeByte",87,13,d7,49))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeByte,(void))

int Output_obj::writeBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_57_writeBytes)
HXLINE(  59)		bool _hx_tmp;
HXDLIN(  59)		bool _hx_tmp1;
HXDLIN(  59)		if ((pos >= 0)) {
HXLINE(  59)			_hx_tmp1 = (len < 0);
            		}
            		else {
HXLINE(  59)			_hx_tmp1 = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp1)) {
HXLINE(  59)			_hx_tmp = ((pos + len) > s->length);
            		}
            		else {
HXLINE(  59)			_hx_tmp = true;
            		}
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXLINE(  62)		::Array< unsigned char > b = s->b;
HXLINE(  63)		int k = len;
HXLINE(  64)		while((k > 0)){
HXLINE(  70)			this->writeByte(( (int)(b->__get(pos)) ));
HXLINE(  76)			pos = (pos + 1);
HXLINE(  77)			k = (k - 1);
            		}
HXLINE(  79)		return len;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeBytes,return )

void Output_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_85_flush)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,flush,(void))

void Output_obj::close(){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_92_close)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,close,(void))

bool Output_obj::set_bigEndian(bool b){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_94_set_bigEndian)
HXLINE(  95)		this->bigEndian = b;
HXLINE(  96)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,set_bigEndian,return )

void Output_obj::write( ::haxe::io::Bytes s){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_103_write)
HXLINE( 104)		int l = s->length;
HXLINE( 105)		int p = 0;
HXLINE( 106)		while((l > 0)){
HXLINE( 107)			int k = this->writeBytes(s,p,l);
HXLINE( 108)			if ((k == 0)) {
HXLINE( 109)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Blocked_dyn()));
            			}
HXLINE( 110)			p = (p + k);
HXLINE( 111)			l = (l - k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,write,(void))

void Output_obj::writeFullBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_121_writeFullBytes)
HXDLIN( 121)		while((len > 0)){
HXLINE( 122)			int k = this->writeBytes(s,pos,len);
HXLINE( 123)			pos = (pos + k);
HXLINE( 124)			len = (len - k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeFullBytes,(void))

void Output_obj::writeFloat(Float x){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_134_writeFloat)
HXDLIN( 134)		this->writeInt32(::haxe::io::FPHelper_obj::floatToI32(x));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeFloat,(void))

void Output_obj::writeInt16(int x){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_167_writeInt16)
HXLINE( 168)		bool _hx_tmp;
HXDLIN( 168)		if ((x >= -32768)) {
HXLINE( 168)			_hx_tmp = (x >= 32768);
            		}
            		else {
HXLINE( 168)			_hx_tmp = true;
            		}
HXDLIN( 168)		if (_hx_tmp) {
HXLINE( 169)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Overflow_dyn()));
            		}
HXLINE( 170)		this->writeUInt16((x & 65535));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeInt16,(void))

void Output_obj::writeUInt16(int x){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_178_writeUInt16)
HXLINE( 179)		bool _hx_tmp;
HXDLIN( 179)		if ((x >= 0)) {
HXLINE( 179)			_hx_tmp = (x >= 65536);
            		}
            		else {
HXLINE( 179)			_hx_tmp = true;
            		}
HXDLIN( 179)		if (_hx_tmp) {
HXLINE( 180)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Overflow_dyn()));
            		}
HXLINE( 181)		if (this->bigEndian) {
HXLINE( 182)			this->writeByte((x >> 8));
HXLINE( 183)			this->writeByte((x & 255));
            		}
            		else {
HXLINE( 185)			this->writeByte((x & 255));
HXLINE( 186)			this->writeByte((x >> 8));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeUInt16,(void))

void Output_obj::writeInt32(int x){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_226_writeInt32)
HXDLIN( 226)		if (this->bigEndian) {
HXLINE( 227)			this->writeByte(::hx::UShr(x,24));
HXLINE( 228)			this->writeByte(((x >> 16) & 255));
HXLINE( 229)			this->writeByte(((x >> 8) & 255));
HXLINE( 230)			this->writeByte((x & 255));
            		}
            		else {
HXLINE( 232)			this->writeByte((x & 255));
HXLINE( 233)			this->writeByte(((x >> 8) & 255));
HXLINE( 234)			this->writeByte(((x >> 16) & 255));
HXLINE( 235)			this->writeByte(::hx::UShr(x,24));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeInt32,(void))

void Output_obj::writeInput( ::haxe::io::Input i, ::Dynamic bufsize){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_254_writeInput)
HXLINE( 255)		if (::hx::IsNull( bufsize )) {
HXLINE( 256)			bufsize = 4096;
            		}
HXLINE( 257)		 ::haxe::io::Bytes buf = ::haxe::io::Bytes_obj::alloc(( (int)(bufsize) ));
HXLINE( 258)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 259)			while(true){
HXLINE( 260)				int len = i->readBytes(buf,0,( (int)(bufsize) ));
HXLINE( 261)				if ((len == 0)) {
HXLINE( 262)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Blocked_dyn()));
            				}
HXLINE( 263)				int p = 0;
HXLINE( 264)				while((len > 0)){
HXLINE( 265)					int k = this->writeBytes(buf,p,len);
HXLINE( 266)					if ((k == 0)) {
HXLINE( 267)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Blocked_dyn()));
            					}
HXLINE( 268)					p = (p + k);
HXLINE( 269)					len = (len - k);
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 272)				{
HXLINE( 272)					null();
            				}
HXLINE( 258)				if (!(::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >()))) {
HXLINE( 258)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Output_obj,writeInput,(void))

void Output_obj::writeString(::String s, ::haxe::io::Encoding encoding){
            	HX_STACKFRAME(&_hx_pos_0e34c0ce46c21137_278_writeString)
HXLINE( 282)		 ::haxe::io::Bytes b = ::haxe::io::Bytes_obj::ofString(s,encoding);
HXLINE( 284)		this->writeFullBytes(b,0,b->length);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Output_obj,writeString,(void))


Output_obj::Output_obj()
{
}

::hx::Val Output_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return ::hx::Val( bigEndian ); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return ::hx::Val( writeByte_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return ::hx::Val( writeBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return ::hx::Val( writeFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeInt16") ) { return ::hx::Val( writeInt16_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeInt32") ) { return ::hx::Val( writeInt32_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeInput") ) { return ::hx::Val( writeInput_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeUInt16") ) { return ::hx::Val( writeUInt16_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeString") ) { return ::hx::Val( writeString_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_bigEndian") ) { return ::hx::Val( set_bigEndian_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"writeFullBytes") ) { return ::hx::Val( writeFullBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Output_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bigEndian(inValue.Cast< bool >()) );bigEndian=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Output_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bigEndian",7b,d5,5a,20));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Output_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Output_obj,bigEndian),HX_("bigEndian",7b,d5,5a,20)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Output_obj_sStaticStorageInfo = 0;
#endif

static ::String Output_obj_sMemberFields[] = {
	HX_("bigEndian",7b,d5,5a,20),
	HX_("writeByte",87,13,d7,49),
	HX_("writeBytes",0c,03,5a,52),
	HX_("flush",c4,62,9b,02),
	HX_("close",b8,17,63,48),
	HX_("set_bigEndian",5e,8b,c4,26),
	HX_("write",df,6c,59,d0),
	HX_("writeFullBytes",7d,e7,66,a4),
	HX_("writeFloat",3d,c0,58,97),
	HX_("writeInt16",35,8c,e2,52),
	HX_("writeUInt16",1e,8b,08,ae),
	HX_("writeInt32",ef,8d,e2,52),
	HX_("writeInput",ab,be,df,52),
	HX_("writeString",10,7b,29,a6),
	::String(null()) };

::hx::Class Output_obj::__mClass;

void Output_obj::__register()
{
	Output_obj _hx_dummy;
	Output_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.io.Output",61,10,0b,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Output_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Output_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Output_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Output_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
