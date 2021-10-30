#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Animation
#include <hxd/fmt/hmd/Animation.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_AnimationEvent
#include <hxd/fmt/hmd/AnimationEvent.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_AnimationFlag
#include <hxd/fmt/hmd/AnimationFlag.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_AnimationObject
#include <hxd/fmt/hmd/AnimationObject.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Data
#include <hxd/fmt/hmd/Data.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Geometry
#include <hxd/fmt/hmd/Geometry.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_GeometryFormat
#include <hxd/fmt/hmd/GeometryFormat.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Material
#include <hxd/fmt/hmd/Material.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Model
#include <hxd/fmt/hmd/Model.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Position
#include <hxd/fmt/hmd/Position.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Property
#include <hxd/fmt/hmd/Property.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Skin
#include <hxd/fmt/hmd/Skin.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_SkinJoint
#include <hxd/fmt/hmd/SkinJoint.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_SkinSplit
#include <hxd/fmt/hmd/SkinSplit.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Writer
#include <hxd/fmt/hmd/Writer.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92204b7855c7ee3c_10_new,"hxd.fmt.hmd.Writer","new",0x6747da6f,"hxd.fmt.hmd.Writer.new","hxd/fmt/hmd/Writer.hx",10,0xc72f41fe)
HX_LOCAL_STACK_FRAME(_hx_pos_92204b7855c7ee3c_13_writeProperty,"hxd.fmt.hmd.Writer","writeProperty",0xcd06bb23,"hxd.fmt.hmd.Writer.writeProperty","hxd/fmt/hmd/Writer.hx",13,0xc72f41fe)
HX_LOCAL_STACK_FRAME(_hx_pos_92204b7855c7ee3c_23_writeProps,"hxd.fmt.hmd.Writer","writeProps",0xcf47c7e2,"hxd.fmt.hmd.Writer.writeProps","hxd/fmt/hmd/Writer.hx",23,0xc72f41fe)
HX_LOCAL_STACK_FRAME(_hx_pos_92204b7855c7ee3c_37_writeName,"hxd.fmt.hmd.Writer","writeName",0xae0ce619,"hxd.fmt.hmd.Writer.writeName","hxd/fmt/hmd/Writer.hx",37,0xc72f41fe)
HX_LOCAL_STACK_FRAME(_hx_pos_92204b7855c7ee3c_51_writeFloat,"hxd.fmt.hmd.Writer","writeFloat",0x094ea60e,"hxd.fmt.hmd.Writer.writeFloat","hxd/fmt/hmd/Writer.hx",51,0xc72f41fe)
HX_LOCAL_STACK_FRAME(_hx_pos_92204b7855c7ee3c_54_writePosition,"hxd.fmt.hmd.Writer","writePosition",0xebc91377,"hxd.fmt.hmd.Writer.writePosition","hxd/fmt/hmd/Writer.hx",54,0xc72f41fe)
HX_LOCAL_STACK_FRAME(_hx_pos_92204b7855c7ee3c_68_writeBounds,"hxd.fmt.hmd.Writer","writeBounds",0x404a09c3,"hxd.fmt.hmd.Writer.writeBounds","hxd/fmt/hmd/Writer.hx",68,0xc72f41fe)
HX_LOCAL_STACK_FRAME(_hx_pos_92204b7855c7ee3c_77_writeSkin,"hxd.fmt.hmd.Writer","writeSkin",0xb1628a4b,"hxd.fmt.hmd.Writer.writeSkin","hxd/fmt/hmd/Writer.hx",77,0xc72f41fe)
HX_LOCAL_STACK_FRAME(_hx_pos_92204b7855c7ee3c_102_write,"hxd.fmt.hmd.Writer","write",0xe3ef58ae,"hxd.fmt.hmd.Writer.write","hxd/fmt/hmd/Writer.hx",102,0xc72f41fe)
namespace hxd{
namespace fmt{
namespace hmd{

void Writer_obj::__construct( ::haxe::io::Output out){
            	HX_STACKFRAME(&_hx_pos_92204b7855c7ee3c_10_new)
HXDLIN(  10)		this->out = out;
            	}

Dynamic Writer_obj::__CreateEmpty() { return new Writer_obj; }

void *Writer_obj::_hx_vtable = 0;

Dynamic Writer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Writer_obj > _hx_result = new Writer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Writer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x32cd6e95;
}

void Writer_obj::writeProperty( ::hxd::fmt::hmd::Property p){
            	HX_STACKFRAME(&_hx_pos_92204b7855c7ee3c_13_writeProperty)
HXLINE(  14)		 ::haxe::io::Output _hx_tmp = this->out;
HXDLIN(  14)		_hx_tmp->writeByte(_hx_getEnumValueIndex(p));
HXLINE(  15)		switch((int)(p->_hx_getIndex())){
            			case (int)0: {
HXLINE(  16)				Float v = p->_hx_getFloat(0);
HXLINE(  17)				this->out->writeFloat(v);
            			}
            			break;
            			case (int)1: {
            			}
            			break;
            			case (int)2: {
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeProperty,(void))

void Writer_obj::writeProps(::Array< ::Dynamic> props){
            	HX_STACKFRAME(&_hx_pos_92204b7855c7ee3c_23_writeProps)
HXLINE(  24)		if (::hx::IsNull( props )) {
HXLINE(  25)			if ((this->version == 1)) {
HXLINE(  26)				return;
            			}
HXLINE(  27)			this->out->writeByte(0);
HXLINE(  28)			return;
            		}
HXLINE(  30)		if ((this->version == 1)) {
HXLINE(  31)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Properties not supported in HMDv1",6b,f9,b4,26)));
            		}
HXLINE(  32)		this->out->writeByte(props->length);
HXLINE(  33)		{
HXLINE(  33)			int _g = 0;
HXDLIN(  33)			while((_g < props->length)){
HXLINE(  33)				 ::hxd::fmt::hmd::Property p = props->__get(_g).StaticCast<  ::hxd::fmt::hmd::Property >();
HXDLIN(  33)				_g = (_g + 1);
HXLINE(  34)				this->writeProperty(p);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeProps,(void))

void Writer_obj::writeName(::String name){
            	HX_STACKFRAME(&_hx_pos_92204b7855c7ee3c_37_writeName)
HXLINE(  38)		if (::hx::IsNull( name )) {
HXLINE(  39)			this->out->writeByte(255);
HXLINE(  40)			return;
            		}
HXLINE(  45)		this->out->writeByte(name.length);
HXLINE(  47)		this->out->writeString(name,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeName,(void))

void Writer_obj::writeFloat(Float f){
            	HX_STACKFRAME(&_hx_pos_92204b7855c7ee3c_51_writeFloat)
HXDLIN(  51)		Float _hx_tmp;
HXDLIN(  51)		if ((f == 0)) {
HXDLIN(  51)			_hx_tmp = ( (Float)(0) );
            		}
            		else {
HXDLIN(  51)			_hx_tmp = f;
            		}
HXDLIN(  51)		this->out->writeFloat(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeFloat,(void))

void Writer_obj::writePosition( ::hxd::fmt::hmd::Position p,::hx::Null< bool >  __o_hasScale){
            		bool hasScale = __o_hasScale.Default(true);
            	HX_STACKFRAME(&_hx_pos_92204b7855c7ee3c_54_writePosition)
HXLINE(  55)		{
HXLINE(  55)			Float f = p->x;
HXDLIN(  55)			Float _hx_tmp;
HXDLIN(  55)			if ((f == 0)) {
HXLINE(  55)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE(  55)				_hx_tmp = f;
            			}
HXDLIN(  55)			this->out->writeFloat(_hx_tmp);
            		}
HXLINE(  56)		{
HXLINE(  56)			Float f1 = p->y;
HXDLIN(  56)			Float _hx_tmp1;
HXDLIN(  56)			if ((f1 == 0)) {
HXLINE(  56)				_hx_tmp1 = ( (Float)(0) );
            			}
            			else {
HXLINE(  56)				_hx_tmp1 = f1;
            			}
HXDLIN(  56)			this->out->writeFloat(_hx_tmp1);
            		}
HXLINE(  57)		{
HXLINE(  57)			Float f2 = p->z;
HXDLIN(  57)			Float _hx_tmp2;
HXDLIN(  57)			if ((f2 == 0)) {
HXLINE(  57)				_hx_tmp2 = ( (Float)(0) );
            			}
            			else {
HXLINE(  57)				_hx_tmp2 = f2;
            			}
HXDLIN(  57)			this->out->writeFloat(_hx_tmp2);
            		}
HXLINE(  58)		{
HXLINE(  58)			Float f3 = p->qx;
HXDLIN(  58)			Float _hx_tmp3;
HXDLIN(  58)			if ((f3 == 0)) {
HXLINE(  58)				_hx_tmp3 = ( (Float)(0) );
            			}
            			else {
HXLINE(  58)				_hx_tmp3 = f3;
            			}
HXDLIN(  58)			this->out->writeFloat(_hx_tmp3);
            		}
HXLINE(  59)		{
HXLINE(  59)			Float f4 = p->qy;
HXDLIN(  59)			Float _hx_tmp4;
HXDLIN(  59)			if ((f4 == 0)) {
HXLINE(  59)				_hx_tmp4 = ( (Float)(0) );
            			}
            			else {
HXLINE(  59)				_hx_tmp4 = f4;
            			}
HXDLIN(  59)			this->out->writeFloat(_hx_tmp4);
            		}
HXLINE(  60)		{
HXLINE(  60)			Float f5 = p->qz;
HXDLIN(  60)			Float _hx_tmp5;
HXDLIN(  60)			if ((f5 == 0)) {
HXLINE(  60)				_hx_tmp5 = ( (Float)(0) );
            			}
            			else {
HXLINE(  60)				_hx_tmp5 = f5;
            			}
HXDLIN(  60)			this->out->writeFloat(_hx_tmp5);
            		}
HXLINE(  61)		if (hasScale) {
HXLINE(  62)			{
HXLINE(  62)				Float f = p->sx;
HXDLIN(  62)				Float _hx_tmp;
HXDLIN(  62)				if ((f == 0)) {
HXLINE(  62)					_hx_tmp = ( (Float)(0) );
            				}
            				else {
HXLINE(  62)					_hx_tmp = f;
            				}
HXDLIN(  62)				this->out->writeFloat(_hx_tmp);
            			}
HXLINE(  63)			{
HXLINE(  63)				Float f1 = p->sy;
HXDLIN(  63)				Float _hx_tmp1;
HXDLIN(  63)				if ((f1 == 0)) {
HXLINE(  63)					_hx_tmp1 = ( (Float)(0) );
            				}
            				else {
HXLINE(  63)					_hx_tmp1 = f1;
            				}
HXDLIN(  63)				this->out->writeFloat(_hx_tmp1);
            			}
HXLINE(  64)			{
HXLINE(  64)				Float f2 = p->sz;
HXDLIN(  64)				Float _hx_tmp2;
HXDLIN(  64)				if ((f2 == 0)) {
HXLINE(  64)					_hx_tmp2 = ( (Float)(0) );
            				}
            				else {
HXLINE(  64)					_hx_tmp2 = f2;
            				}
HXDLIN(  64)				this->out->writeFloat(_hx_tmp2);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writePosition,(void))

void Writer_obj::writeBounds( ::h3d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_92204b7855c7ee3c_68_writeBounds)
HXLINE(  69)		{
HXLINE(  69)			Float f = b->xMin;
HXDLIN(  69)			Float _hx_tmp;
HXDLIN(  69)			if ((f == 0)) {
HXLINE(  69)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE(  69)				_hx_tmp = f;
            			}
HXDLIN(  69)			this->out->writeFloat(_hx_tmp);
            		}
HXLINE(  70)		{
HXLINE(  70)			Float f1 = b->yMin;
HXDLIN(  70)			Float _hx_tmp1;
HXDLIN(  70)			if ((f1 == 0)) {
HXLINE(  70)				_hx_tmp1 = ( (Float)(0) );
            			}
            			else {
HXLINE(  70)				_hx_tmp1 = f1;
            			}
HXDLIN(  70)			this->out->writeFloat(_hx_tmp1);
            		}
HXLINE(  71)		{
HXLINE(  71)			Float f2 = b->zMin;
HXDLIN(  71)			Float _hx_tmp2;
HXDLIN(  71)			if ((f2 == 0)) {
HXLINE(  71)				_hx_tmp2 = ( (Float)(0) );
            			}
            			else {
HXLINE(  71)				_hx_tmp2 = f2;
            			}
HXDLIN(  71)			this->out->writeFloat(_hx_tmp2);
            		}
HXLINE(  72)		{
HXLINE(  72)			Float f3 = b->xMax;
HXDLIN(  72)			Float _hx_tmp3;
HXDLIN(  72)			if ((f3 == 0)) {
HXLINE(  72)				_hx_tmp3 = ( (Float)(0) );
            			}
            			else {
HXLINE(  72)				_hx_tmp3 = f3;
            			}
HXDLIN(  72)			this->out->writeFloat(_hx_tmp3);
            		}
HXLINE(  73)		{
HXLINE(  73)			Float f4 = b->yMax;
HXDLIN(  73)			Float _hx_tmp4;
HXDLIN(  73)			if ((f4 == 0)) {
HXLINE(  73)				_hx_tmp4 = ( (Float)(0) );
            			}
            			else {
HXLINE(  73)				_hx_tmp4 = f4;
            			}
HXDLIN(  73)			this->out->writeFloat(_hx_tmp4);
            		}
HXLINE(  74)		{
HXLINE(  74)			Float f5 = b->zMax;
HXDLIN(  74)			Float _hx_tmp5;
HXDLIN(  74)			if ((f5 == 0)) {
HXLINE(  74)				_hx_tmp5 = ( (Float)(0) );
            			}
            			else {
HXLINE(  74)				_hx_tmp5 = f5;
            			}
HXDLIN(  74)			this->out->writeFloat(_hx_tmp5);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeBounds,(void))

void Writer_obj::writeSkin( ::hxd::fmt::hmd::Skin s){
            	HX_STACKFRAME(&_hx_pos_92204b7855c7ee3c_77_writeSkin)
HXLINE(  78)		::String _hx_tmp;
HXDLIN(  78)		if (::hx::IsNull( s->name )) {
HXLINE(  78)			_hx_tmp = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  78)			_hx_tmp = s->name;
            		}
HXDLIN(  78)		this->writeName(_hx_tmp);
HXLINE(  79)		this->writeProps(s->props);
HXLINE(  80)		this->out->writeUInt16(s->joints->length);
HXLINE(  81)		{
HXLINE(  81)			int _g = 0;
HXDLIN(  81)			::Array< ::Dynamic> _g1 = s->joints;
HXDLIN(  81)			while((_g < _g1->length)){
HXLINE(  81)				 ::hxd::fmt::hmd::SkinJoint j = _g1->__get(_g).StaticCast<  ::hxd::fmt::hmd::SkinJoint >();
HXDLIN(  81)				_g = (_g + 1);
HXLINE(  82)				this->writeProps(j->props);
HXLINE(  83)				this->writeName(j->name);
HXLINE(  84)				bool rot;
HXDLIN(  84)				bool rot1;
HXDLIN(  84)				bool rot2;
HXDLIN(  84)				if ((j->position->sx == 1)) {
HXLINE(  84)					rot2 = (j->position->sy != 1);
            				}
            				else {
HXLINE(  84)					rot2 = true;
            				}
HXDLIN(  84)				if (!(rot2)) {
HXLINE(  84)					rot1 = (j->position->sz != 1);
            				}
            				else {
HXLINE(  84)					rot1 = true;
            				}
HXDLIN(  84)				if (!(rot1)) {
HXLINE(  84)					if (::hx::IsNotNull( j->transpos )) {
HXLINE(  84)						bool rot1;
HXDLIN(  84)						if ((j->transpos->sx == 1)) {
HXLINE(  84)							rot1 = (j->transpos->sy != 1);
            						}
            						else {
HXLINE(  84)							rot1 = true;
            						}
HXDLIN(  84)						if (!(rot1)) {
HXLINE(  84)							rot = (j->transpos->sz != 1);
            						}
            						else {
HXLINE(  84)							rot = true;
            						}
            					}
            					else {
HXLINE(  84)						rot = false;
            					}
            				}
            				else {
HXLINE(  84)					rot = true;
            				}
HXLINE(  85)				int _hx_tmp;
HXDLIN(  85)				if (rot) {
HXLINE(  85)					_hx_tmp = 32768;
            				}
            				else {
HXLINE(  85)					_hx_tmp = 0;
            				}
HXDLIN(  85)				this->out->writeUInt16(((j->parent + 1) | _hx_tmp));
HXLINE(  86)				this->writePosition(j->position,rot);
HXLINE(  87)				this->out->writeUInt16((j->bind + 1));
HXLINE(  88)				if ((j->bind >= 0)) {
HXLINE(  89)					this->writePosition(j->transpos,rot);
            				}
            			}
            		}
HXLINE(  91)		int _hx_tmp1;
HXDLIN(  91)		if (::hx::IsNull( s->split )) {
HXLINE(  91)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE(  91)			_hx_tmp1 = s->split->length;
            		}
HXDLIN(  91)		this->out->writeByte(_hx_tmp1);
HXLINE(  92)		if (::hx::IsNotNull( s->split )) {
HXLINE(  93)			int _g = 0;
HXDLIN(  93)			::Array< ::Dynamic> _g1 = s->split;
HXDLIN(  93)			while((_g < _g1->length)){
HXLINE(  93)				 ::hxd::fmt::hmd::SkinSplit ss = _g1->__get(_g).StaticCast<  ::hxd::fmt::hmd::SkinSplit >();
HXDLIN(  93)				_g = (_g + 1);
HXLINE(  94)				this->out->writeByte(ss->materialIndex);
HXLINE(  95)				this->out->writeByte(ss->joints->length);
HXLINE(  96)				{
HXLINE(  96)					int _g2 = 0;
HXDLIN(  96)					::Array< int > _g3 = ss->joints;
HXDLIN(  96)					while((_g2 < _g3->length)){
HXLINE(  96)						int i = _g3->__get(_g2);
HXDLIN(  96)						_g2 = (_g2 + 1);
HXLINE(  97)						this->out->writeUInt16(i);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeSkin,(void))

void Writer_obj::write( ::hxd::fmt::hmd::Data d){
            	HX_GC_STACKFRAME(&_hx_pos_92204b7855c7ee3c_102_write)
HXLINE( 103)		 ::haxe::io::Output old = this->out;
HXLINE( 104)		 ::haxe::io::BytesOutput header =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE( 105)		this->out = header;
HXLINE( 106)		this->version = d->version;
HXLINE( 108)		if ((this->version > 3)) {
HXLINE( 108)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Can't write HMD v",71,c7,7f,12) + this->version)));
            		}
HXLINE( 110)		this->writeProps(d->props);
HXLINE( 112)		this->out->writeInt32(d->geometries->length);
HXLINE( 113)		{
HXLINE( 113)			int _g = 0;
HXDLIN( 113)			::Array< ::Dynamic> _g1 = d->geometries;
HXDLIN( 113)			while((_g < _g1->length)){
HXLINE( 113)				 ::hxd::fmt::hmd::Geometry g = _g1->__get(_g).StaticCast<  ::hxd::fmt::hmd::Geometry >();
HXDLIN( 113)				_g = (_g + 1);
HXLINE( 114)				this->writeProps(g->props);
HXLINE( 115)				this->out->writeInt32(g->vertexCount);
HXLINE( 116)				this->out->writeByte(g->vertexStride);
HXLINE( 117)				this->out->writeByte(g->vertexFormat->length);
HXLINE( 118)				{
HXLINE( 118)					int _g2 = 0;
HXDLIN( 118)					::Array< ::Dynamic> _g3 = g->vertexFormat;
HXDLIN( 118)					while((_g2 < _g3->length)){
HXLINE( 118)						 ::hxd::fmt::hmd::GeometryFormat f = _g3->__get(_g2).StaticCast<  ::hxd::fmt::hmd::GeometryFormat >();
HXDLIN( 118)						_g2 = (_g2 + 1);
HXLINE( 119)						this->writeName(f->name);
HXLINE( 120)						this->out->writeByte(f->format);
            					}
            				}
HXLINE( 122)				this->out->writeInt32(g->vertexPosition);
HXLINE( 123)				this->out->writeByte(g->indexCounts->length);
HXLINE( 124)				{
HXLINE( 124)					int _g4 = 0;
HXDLIN( 124)					::Array< int > _g5 = g->indexCounts;
HXDLIN( 124)					while((_g4 < _g5->length)){
HXLINE( 124)						int i = _g5->__get(_g4);
HXDLIN( 124)						_g4 = (_g4 + 1);
HXLINE( 125)						this->out->writeInt32(i);
            					}
            				}
HXLINE( 126)				this->out->writeInt32(g->indexPosition);
HXLINE( 127)				this->writeBounds(g->bounds);
            			}
            		}
HXLINE( 130)		this->out->writeInt32(d->materials->length);
HXLINE( 131)		{
HXLINE( 131)			int _g2 = 0;
HXDLIN( 131)			::Array< ::Dynamic> _g3 = d->materials;
HXDLIN( 131)			while((_g2 < _g3->length)){
HXLINE( 131)				 ::hxd::fmt::hmd::Material m = _g3->__get(_g2).StaticCast<  ::hxd::fmt::hmd::Material >();
HXDLIN( 131)				_g2 = (_g2 + 1);
HXLINE( 132)				this->writeProps(m->props);
HXLINE( 133)				this->writeName(m->name);
HXLINE( 134)				this->writeName(m->diffuseTexture);
HXLINE( 135)				 ::haxe::io::Output _hx_tmp = this->out;
HXDLIN( 135)				_hx_tmp->writeByte(_hx_getEnumValueIndex(m->blendMode));
HXLINE( 136)				this->out->writeByte(1);
HXLINE( 137)				this->out->writeFloat(( (Float)(1) ));
HXLINE( 138)				bool _hx_tmp1;
HXDLIN( 138)				if (::hx::IsNotNull( m->props )) {
HXLINE( 138)					_hx_tmp1 = (m->props->indexOf(::hxd::fmt::hmd::Property_obj::HasExtraTextures_dyn(),null()) >= 0);
            				}
            				else {
HXLINE( 138)					_hx_tmp1 = false;
            				}
HXDLIN( 138)				if (_hx_tmp1) {
HXLINE( 139)					this->writeName(m->specularTexture);
HXLINE( 140)					this->writeName(m->normalMap);
            				}
            			}
            		}
HXLINE( 144)		this->out->writeInt32(d->models->length);
HXLINE( 145)		{
HXLINE( 145)			int _g4 = 0;
HXDLIN( 145)			::Array< ::Dynamic> _g5 = d->models;
HXDLIN( 145)			while((_g4 < _g5->length)){
HXLINE( 145)				 ::hxd::fmt::hmd::Model m = _g5->__get(_g4).StaticCast<  ::hxd::fmt::hmd::Model >();
HXDLIN( 145)				_g4 = (_g4 + 1);
HXLINE( 146)				this->writeProps(m->props);
HXLINE( 147)				this->writeName(m->name);
HXLINE( 148)				this->out->writeInt32((m->parent + 1));
HXLINE( 149)				this->writeName(m->follow);
HXLINE( 150)				this->writePosition(m->position,null());
HXLINE( 151)				this->out->writeInt32((m->geometry + 1));
HXLINE( 152)				if ((m->geometry < 0)) {
HXLINE( 152)					continue;
            				}
HXLINE( 153)				this->out->writeByte(m->materials->length);
HXLINE( 154)				{
HXLINE( 154)					int _g = 0;
HXDLIN( 154)					::Array< int > _g1 = m->materials;
HXDLIN( 154)					while((_g < _g1->length)){
HXLINE( 154)						int m = _g1->__get(_g);
HXDLIN( 154)						_g = (_g + 1);
HXLINE( 155)						this->out->writeInt32(m);
            					}
            				}
HXLINE( 156)				if (::hx::IsNull( m->skin )) {
HXLINE( 157)					this->writeName(null());
            				}
            				else {
HXLINE( 159)					this->writeSkin(m->skin);
            				}
            			}
            		}
HXLINE( 162)		this->out->writeInt32(d->animations->length);
HXLINE( 163)		{
HXLINE( 163)			int _g6 = 0;
HXDLIN( 163)			::Array< ::Dynamic> _g7 = d->animations;
HXDLIN( 163)			while((_g6 < _g7->length)){
HXLINE( 163)				 ::hxd::fmt::hmd::Animation a = _g7->__get(_g6).StaticCast<  ::hxd::fmt::hmd::Animation >();
HXDLIN( 163)				_g6 = (_g6 + 1);
HXLINE( 164)				this->writeProps(a->props);
HXLINE( 165)				this->writeName(a->name);
HXLINE( 166)				this->out->writeInt32(a->frames);
HXLINE( 167)				{
HXLINE( 167)					Float f = a->sampling;
HXDLIN( 167)					Float _hx_tmp;
HXDLIN( 167)					if ((f == 0)) {
HXLINE( 167)						_hx_tmp = ( (Float)(0) );
            					}
            					else {
HXLINE( 167)						_hx_tmp = f;
            					}
HXDLIN( 167)					this->out->writeFloat(_hx_tmp);
            				}
HXLINE( 168)				{
HXLINE( 168)					Float f1 = a->speed;
HXDLIN( 168)					Float _hx_tmp1;
HXDLIN( 168)					if ((f1 == 0)) {
HXLINE( 168)						_hx_tmp1 = ( (Float)(0) );
            					}
            					else {
HXLINE( 168)						_hx_tmp1 = f1;
            					}
HXDLIN( 168)					this->out->writeFloat(_hx_tmp1);
            				}
HXLINE( 169)				int _hx_tmp2;
HXDLIN( 169)				if (a->loop) {
HXLINE( 169)					_hx_tmp2 = 1;
            				}
            				else {
HXLINE( 169)					_hx_tmp2 = 0;
            				}
HXDLIN( 169)				int _hx_tmp3;
HXDLIN( 169)				if (::hx::IsNotNull( a->events )) {
HXLINE( 169)					_hx_tmp3 = 2;
            				}
            				else {
HXLINE( 169)					_hx_tmp3 = 0;
            				}
HXDLIN( 169)				this->out->writeByte((_hx_tmp2 | _hx_tmp3));
HXLINE( 170)				this->out->writeInt32(a->dataPosition);
HXLINE( 171)				this->out->writeInt32(a->objects->length);
HXLINE( 172)				{
HXLINE( 172)					int _g = 0;
HXDLIN( 172)					::Array< ::Dynamic> _g1 = a->objects;
HXDLIN( 172)					while((_g < _g1->length)){
HXLINE( 172)						 ::hxd::fmt::hmd::AnimationObject o = _g1->__get(_g).StaticCast<  ::hxd::fmt::hmd::AnimationObject >();
HXDLIN( 172)						_g = (_g + 1);
HXLINE( 173)						this->writeName(o->name);
HXLINE( 174)						this->out->writeByte(o->flags);
HXLINE( 175)						int this1 = o->flags;
HXDLIN( 175)						if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasProps_dyn()))) != 0)) {
HXLINE( 176)							this->out->writeByte(o->props->length);
HXLINE( 177)							{
HXLINE( 177)								int _g = 0;
HXDLIN( 177)								::Array< ::String > _g1 = o->props;
HXDLIN( 177)								while((_g < _g1->length)){
HXLINE( 177)									::String n = _g1->__get(_g);
HXDLIN( 177)									_g = (_g + 1);
HXLINE( 178)									this->writeName(n);
            								}
            							}
            						}
            					}
            				}
HXLINE( 181)				if (::hx::IsNotNull( a->events )) {
HXLINE( 182)					this->out->writeInt32(a->events->length);
HXLINE( 183)					{
HXLINE( 183)						int _g = 0;
HXDLIN( 183)						::Array< ::Dynamic> _g1 = a->events;
HXDLIN( 183)						while((_g < _g1->length)){
HXLINE( 183)							 ::hxd::fmt::hmd::AnimationEvent e = _g1->__get(_g).StaticCast<  ::hxd::fmt::hmd::AnimationEvent >();
HXDLIN( 183)							_g = (_g + 1);
HXLINE( 184)							this->out->writeInt32(e->frame);
HXLINE( 185)							this->writeName(e->data);
            						}
            					}
            				}
            			}
            		}
HXLINE( 190)		 ::haxe::io::Bytes bytes = header->getBytes();
HXLINE( 191)		this->out = old;
HXLINE( 193)		this->out->writeString(HX_("HMD",9f,e5,36,00),null());
HXLINE( 194)		this->out->writeByte(d->version);
HXLINE( 195)		this->out->writeInt32((bytes->length + 12));
HXLINE( 196)		this->out->write(bytes);
HXLINE( 197)		this->out->writeInt32(d->data->length);
HXLINE( 198)		this->out->write(d->data);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,write,(void))


::hx::ObjectPtr< Writer_obj > Writer_obj::__new( ::haxe::io::Output out) {
	::hx::ObjectPtr< Writer_obj > __this = new Writer_obj();
	__this->__construct(out);
	return __this;
}

::hx::ObjectPtr< Writer_obj > Writer_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output out) {
	Writer_obj *__this = (Writer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Writer_obj), true, "hxd.fmt.hmd.Writer"));
	*(void **)__this = Writer_obj::_hx_vtable;
	__this->__construct(out);
	return __this;
}

Writer_obj::Writer_obj()
{
}

void Writer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Writer);
	HX_MARK_MEMBER_NAME(out,"out");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void Writer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(out,"out");
	HX_VISIT_MEMBER_NAME(version,"version");
}

::hx::Val Writer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { return ::hx::Val( out ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeName") ) { return ::hx::Val( writeName_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeSkin") ) { return ::hx::Val( writeSkin_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeProps") ) { return ::hx::Val( writeProps_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return ::hx::Val( writeFloat_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeBounds") ) { return ::hx::Val( writeBounds_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeProperty") ) { return ::hx::Val( writeProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"writePosition") ) { return ::hx::Val( writePosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Writer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast<  ::haxe::io::Output >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Writer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("out",8e,a0,54,00));
	outFields->push(HX_("version",18,e7,f1,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Writer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Output */ ,(int)offsetof(Writer_obj,out),HX_("out",8e,a0,54,00)},
	{::hx::fsInt,(int)offsetof(Writer_obj,version),HX_("version",18,e7,f1,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Writer_obj_sStaticStorageInfo = 0;
#endif

static ::String Writer_obj_sMemberFields[] = {
	HX_("out",8e,a0,54,00),
	HX_("version",18,e7,f1,7c),
	HX_("writeProperty",54,e8,d9,6f),
	HX_("writeProps",11,e2,51,5d),
	HX_("writeName",ca,66,b3,51),
	HX_("writeFloat",3d,c0,58,97),
	HX_("writePosition",a8,40,9c,8e),
	HX_("writeBounds",b4,d8,16,fb),
	HX_("writeSkin",fc,0a,09,55),
	HX_("write",df,6c,59,d0),
	::String(null()) };

::hx::Class Writer_obj::__mClass;

void Writer_obj::__register()
{
	Writer_obj _hx_dummy;
	Writer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.Writer",fd,76,b8,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Writer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Writer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Writer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Writer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
