#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_png_Chunk
#include <format/png/Chunk.h>
#endif
#ifndef INCLUDED_format_png_Color
#include <format/png/Color.h>
#endif
#ifndef INCLUDED_format_png_Writer
#include <format/png/Writer.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__internal_format_PNG
#include <lime/_internal/format/PNG.h>
#endif
#ifndef INCLUDED_lime__internal_format_Zlib
#include <lime/_internal/format/Zlib.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4cd2471e08407622_30_decodeBytes,"lime._internal.format.PNG","decodeBytes",0xc6b720cc,"lime._internal.format.PNG.decodeBytes","lime/_internal/format/PNG.hx",30,0x83b9c2c0)
HX_LOCAL_STACK_FRAME(_hx_pos_4cd2471e08407622_55_decodeFile,"lime._internal.format.PNG","decodeFile",0x71b19d3b,"lime._internal.format.PNG.decodeFile","lime/_internal/format/PNG.hx",55,0x83b9c2c0)
HX_LOCAL_STACK_FRAME(_hx_pos_4cd2471e08407622_80_encode,"lime._internal.format.PNG","encode",0x4187bc07,"lime._internal.format.PNG.encode","lime/_internal/format/PNG.hx",80,0x83b9c2c0)
namespace lime{
namespace _internal{
namespace format{

void PNG_obj::__construct() { }

Dynamic PNG_obj::__CreateEmpty() { return new PNG_obj; }

void *PNG_obj::_hx_vtable = 0;

Dynamic PNG_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PNG_obj > _hx_result = new PNG_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PNG_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13554f4f;
}

 ::lime::graphics::Image PNG_obj::decodeBytes( ::haxe::io::Bytes bytes,::hx::Null< bool >  __o_decodeData){
            		bool decodeData = __o_decodeData.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_4cd2471e08407622_30_decodeBytes)
HXLINE(  33)		::cpp::Function<  ::hx::Object *  ( ::hx::Object *,bool, ::hx::Object *) > buffer = ::lime::_internal::backend::native::NativeCFFI_obj::lime_png_decode_bytes;
HXDLIN(  33)		 ::Dynamic elements = null();
HXDLIN(  33)		 ::haxe::io::Bytes buffer1 = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN(  33)		::cpp::VirtualArray array = null();
HXDLIN(  33)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN(  33)		 ::Dynamic len = null();
HXDLIN(  33)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  33)		if (::hx::IsNotNull( elements )) {
HXLINE(  33)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE(  33)			if (::hx::IsNotNull( array )) {
HXLINE(  33)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(  33)				_this->byteOffset = 0;
HXDLIN(  33)				_this->length = array->get_length();
HXDLIN(  33)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  33)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  33)				_this->buffer = this2;
HXDLIN(  33)				_this->copyFromArray(array,null());
HXDLIN(  33)				this1 = _this;
            			}
            			else {
HXLINE(  33)				if (::hx::IsNotNull( view )) {
HXLINE(  33)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(  33)					 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN(  33)					int srcLength = view->length;
HXDLIN(  33)					int srcByteOffset = view->byteOffset;
HXDLIN(  33)					int srcElementSize = view->bytesPerElement;
HXDLIN(  33)					int elementSize = _this->bytesPerElement;
HXDLIN(  33)					if ((view->type == _this->type)) {
HXLINE(  33)						int srcLength = srcData->length;
HXDLIN(  33)						int cloneLength = (srcLength - srcByteOffset);
HXDLIN(  33)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(  33)						_this->buffer = this1;
HXDLIN(  33)						_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            					}
            					else {
HXLINE(  33)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            					}
HXDLIN(  33)					_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(  33)					_this->byteOffset = 0;
HXDLIN(  33)					_this->length = srcLength;
HXDLIN(  33)					this1 = _this;
            				}
            				else {
HXLINE(  33)					if (::hx::IsNotNull( buffer1 )) {
HXLINE(  33)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(  33)						int in_byteOffset = 0;
HXDLIN(  33)						if ((in_byteOffset < 0)) {
HXLINE(  33)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            						}
HXDLIN(  33)						if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE(  33)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            						}
HXDLIN(  33)						int bufferByteLength = buffer1->length;
HXDLIN(  33)						int elementSize = _this->bytesPerElement;
HXDLIN(  33)						int newByteLength = bufferByteLength;
HXDLIN(  33)						if (::hx::IsNull( len )) {
HXLINE(  33)							newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  33)							if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE(  33)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(  33)							if ((newByteLength < 0)) {
HXLINE(  33)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
            						}
            						else {
HXLINE(  33)							newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN(  33)							int newRange = (in_byteOffset + newByteLength);
HXDLIN(  33)							if ((newRange > bufferByteLength)) {
HXLINE(  33)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
            						}
HXDLIN(  33)						_this->buffer = buffer1;
HXDLIN(  33)						_this->byteOffset = in_byteOffset;
HXDLIN(  33)						_this->byteLength = newByteLength;
HXDLIN(  33)						_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(  33)						this1 = _this;
            					}
            					else {
HXLINE(  33)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            					}
            				}
            			}
            		}
HXDLIN(  33)		 ::hx::Object * buffer2 = buffer(::hx::DynamicPtr(bytes),decodeData,::hx::DynamicPtr( ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this1,null(),null(),null(),null())));
HXLINE(  35)		if (::hx::IsNotNull( buffer2 )) {
HXLINE(  37)			return  ::lime::graphics::Image_obj::__alloc( HX_CTX ,( ( ::Dynamic)(buffer2) ),null(),null(),null(),null(),null(),null());
            		}
HXLINE(  51)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PNG_obj,decodeBytes,return )

 ::lime::graphics::Image PNG_obj::decodeFile(::String path,::hx::Null< bool >  __o_decodeData){
            		bool decodeData = __o_decodeData.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_4cd2471e08407622_55_decodeFile)
HXLINE(  58)		::cpp::Function<  ::hx::Object *  (::String,bool, ::hx::Object *) > buffer = ::lime::_internal::backend::native::NativeCFFI_obj::lime_png_decode_file;
HXDLIN(  58)		 ::Dynamic elements = null();
HXDLIN(  58)		 ::haxe::io::Bytes buffer1 = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN(  58)		::cpp::VirtualArray array = null();
HXDLIN(  58)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN(  58)		 ::Dynamic len = null();
HXDLIN(  58)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  58)		if (::hx::IsNotNull( elements )) {
HXLINE(  58)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE(  58)			if (::hx::IsNotNull( array )) {
HXLINE(  58)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(  58)				_this->byteOffset = 0;
HXDLIN(  58)				_this->length = array->get_length();
HXDLIN(  58)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  58)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  58)				_this->buffer = this2;
HXDLIN(  58)				_this->copyFromArray(array,null());
HXDLIN(  58)				this1 = _this;
            			}
            			else {
HXLINE(  58)				if (::hx::IsNotNull( view )) {
HXLINE(  58)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(  58)					 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN(  58)					int srcLength = view->length;
HXDLIN(  58)					int srcByteOffset = view->byteOffset;
HXDLIN(  58)					int srcElementSize = view->bytesPerElement;
HXDLIN(  58)					int elementSize = _this->bytesPerElement;
HXDLIN(  58)					if ((view->type == _this->type)) {
HXLINE(  58)						int srcLength = srcData->length;
HXDLIN(  58)						int cloneLength = (srcLength - srcByteOffset);
HXDLIN(  58)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(  58)						_this->buffer = this1;
HXDLIN(  58)						_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            					}
            					else {
HXLINE(  58)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            					}
HXDLIN(  58)					_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(  58)					_this->byteOffset = 0;
HXDLIN(  58)					_this->length = srcLength;
HXDLIN(  58)					this1 = _this;
            				}
            				else {
HXLINE(  58)					if (::hx::IsNotNull( buffer1 )) {
HXLINE(  58)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(  58)						int in_byteOffset = 0;
HXDLIN(  58)						if ((in_byteOffset < 0)) {
HXLINE(  58)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            						}
HXDLIN(  58)						if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE(  58)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            						}
HXDLIN(  58)						int bufferByteLength = buffer1->length;
HXDLIN(  58)						int elementSize = _this->bytesPerElement;
HXDLIN(  58)						int newByteLength = bufferByteLength;
HXDLIN(  58)						if (::hx::IsNull( len )) {
HXLINE(  58)							newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  58)							if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE(  58)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(  58)							if ((newByteLength < 0)) {
HXLINE(  58)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
            						}
            						else {
HXLINE(  58)							newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN(  58)							int newRange = (in_byteOffset + newByteLength);
HXDLIN(  58)							if ((newRange > bufferByteLength)) {
HXLINE(  58)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
            						}
HXDLIN(  58)						_this->buffer = buffer1;
HXDLIN(  58)						_this->byteOffset = in_byteOffset;
HXDLIN(  58)						_this->byteLength = newByteLength;
HXDLIN(  58)						_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(  58)						this1 = _this;
            					}
            					else {
HXLINE(  58)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            					}
            				}
            			}
            		}
HXDLIN(  58)		 ::hx::Object * buffer2 = buffer(path,decodeData,::hx::DynamicPtr( ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this1,null(),null(),null(),null())));
HXLINE(  60)		if (::hx::IsNotNull( buffer2 )) {
HXLINE(  62)			return  ::lime::graphics::Image_obj::__alloc( HX_CTX ,( ( ::Dynamic)(buffer2) ),null(),null(),null(),null(),null(),null());
            		}
HXLINE(  76)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PNG_obj,decodeFile,return )

 ::haxe::io::Bytes PNG_obj::encode( ::lime::graphics::Image image){
            	HX_GC_STACKFRAME(&_hx_pos_4cd2471e08407622_80_encode)
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if (!(image->get_premultiplied())) {
HXLINE(  81)			_hx_tmp = (image->get_format() != 0);
            		}
            		else {
HXLINE(  81)			_hx_tmp = true;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  85)			image = image->clone();
HXLINE(  86)			image->set_premultiplied(false);
HXLINE(  87)			image->set_format(0);
            		}
HXLINE(  92)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE(  95)			::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int, ::hx::Object *) > _hx_tmp = ::lime::_internal::backend::native::NativeCFFI_obj::lime_image_encode;
HXDLIN(  95)			 ::lime::graphics::ImageBuffer image1 = image->buffer;
HXDLIN(  95)			return ( ( ::Dynamic)(_hx_tmp(::hx::DynamicPtr(image1),0,0,::hx::DynamicPtr(::haxe::io::Bytes_obj::alloc(0)))) );
            		}
            		else {
HXLINE( 108)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 110)				 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc((((image->width * image->height) * 4) + image->height));
HXLINE( 111)				 ::haxe::io::Bytes sourceBytes = image->buffer->data->buffer;
HXLINE( 113)				int sourceIndex;
HXDLIN( 113)				int index;
HXLINE( 115)				{
HXLINE( 115)					int _g = 0;
HXDLIN( 115)					int _g1 = image->height;
HXDLIN( 115)					while((_g < _g1)){
HXLINE( 115)						_g = (_g + 1);
HXDLIN( 115)						int y = (_g - 1);
HXLINE( 117)						sourceIndex = ((y * image->width) * 4);
HXLINE( 118)						index = (((y * image->width) * 4) + y);
HXLINE( 120)						bytes->b[index] = ( (unsigned char)(0) );
HXLINE( 121)						bytes->blit((index + 1),sourceBytes,sourceIndex,(image->width * 4));
            					}
            				}
HXLINE( 124)				 ::haxe::ds::List data =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 125)				data->add(::format::png::Chunk_obj::CHeader( ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("width",06,b6,62,ca),image->width)
            					->setFixed(1,HX_("interlaced",91,cb,78,d9),false)
            					->setFixed(2,HX_("colbits",46,9b,c7,e6),8)
            					->setFixed(3,HX_("height",e7,07,4c,02),image->height)
            					->setFixed(4,HX_("color",63,71,5c,4a),::format::png::Color_obj::ColTrue(true)))));
HXLINE( 133)				data->add(::format::png::Chunk_obj::CData(::lime::_internal::format::Zlib_obj::compress(bytes)));
HXLINE( 134)				data->add(::format::png::Chunk_obj::CEnd_dyn());
HXLINE( 136)				 ::haxe::io::BytesOutput output =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE( 137)				 ::format::png::Writer png =  ::format::png::Writer_obj::__alloc( HX_CTX ,output);
HXLINE( 138)				png->write(data);
HXLINE( 140)				return output->getBytes();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 142)					{
HXLINE( 142)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE( 166)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PNG_obj,encode,return )


PNG_obj::PNG_obj()
{
}

bool PNG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decodeFile") ) { outValue = decodeFile_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decodeBytes") ) { outValue = decodeBytes_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PNG_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PNG_obj_sStaticStorageInfo = 0;
#endif

::hx::Class PNG_obj::__mClass;

static ::String PNG_obj_sStaticFields[] = {
	HX_("decodeBytes",5d,94,b1,85),
	HX_("decodeFile",ca,86,63,ce),
	HX_("encode",16,f2,e3,f9),
	::String(null())
};

void PNG_obj::__register()
{
	PNG_obj _hx_dummy;
	PNG_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.format.PNG",5d,42,d7,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PNG_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PNG_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PNG_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PNG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PNG_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace format