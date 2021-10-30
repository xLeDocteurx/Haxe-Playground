#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
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
#ifndef INCLUDED_h3d_mat_Face
#include <h3d/mat/Face.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
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
#ifndef INCLUDED_hxd_fmt_hmd_Reader
#include <hxd/fmt/hmd/Reader.h>
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
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1bc104e1694db633_13_new,"hxd.fmt.hmd.Reader","new",0x8ca630ff,"hxd.fmt.hmd.Reader.new","hxd/fmt/hmd/Reader.hx",13,0x0e86ed6e)
HX_LOCAL_STACK_FRAME(_hx_pos_1bc104e1694db633_17_readProperty,"hxd.fmt.hmd.Reader","readProperty",0x9c0fa94c,"hxd.fmt.hmd.Reader.readProperty","hxd/fmt/hmd/Reader.hx",17,0x0e86ed6e)
HX_LOCAL_STACK_FRAME(_hx_pos_1bc104e1694db633_29_readProps,"hxd.fmt.hmd.Reader","readProps",0x0fa65619,"hxd.fmt.hmd.Reader.readProps","hxd/fmt/hmd/Reader.hx",29,0x0e86ed6e)
HX_LOCAL_STACK_FRAME(_hx_pos_1bc104e1694db633_38_readName,"hxd.fmt.hmd.Reader","readName",0xd0c74bc2,"hxd.fmt.hmd.Reader.readName","hxd/fmt/hmd/Reader.hx",38,0x0e86ed6e)
HX_LOCAL_STACK_FRAME(_hx_pos_1bc104e1694db633_49_readCachedName,"hxd.fmt.hmd.Reader","readCachedName",0x94a06404,"hxd.fmt.hmd.Reader.readCachedName","hxd/fmt/hmd/Reader.hx",49,0x0e86ed6e)
HX_LOCAL_STACK_FRAME(_hx_pos_1bc104e1694db633_60_readPosition,"hxd.fmt.hmd.Reader","readPosition",0xbad201a0,"hxd.fmt.hmd.Reader.readPosition","hxd/fmt/hmd/Reader.hx",60,0x0e86ed6e)
HX_LOCAL_STACK_FRAME(_hx_pos_1bc104e1694db633_80_readBounds,"hxd.fmt.hmd.Reader","readBounds",0x52a7ebac,"hxd.fmt.hmd.Reader.readBounds","hxd/fmt/hmd/Reader.hx",80,0x0e86ed6e)
HX_LOCAL_STACK_FRAME(_hx_pos_1bc104e1694db633_91_readSkin,"hxd.fmt.hmd.Reader","readSkin",0xd41ceff4,"hxd.fmt.hmd.Reader.readSkin","hxd/fmt/hmd/Reader.hx",91,0x0e86ed6e)
HX_LOCAL_STACK_FRAME(_hx_pos_1bc104e1694db633_126_readHeader,"hxd.fmt.hmd.Reader","readHeader",0xe98a6ec4,"hxd.fmt.hmd.Reader.readHeader","hxd/fmt/hmd/Reader.hx",126,0x0e86ed6e)
HX_LOCAL_STACK_FRAME(_hx_pos_1bc104e1694db633_222_read,"hxd.fmt.hmd.Reader","read",0x876975d7,"hxd.fmt.hmd.Reader.read","hxd/fmt/hmd/Reader.hx",222,0x0e86ed6e)
HX_LOCAL_STACK_FRAME(_hx_pos_1bc104e1694db633_6_boot,"hxd.fmt.hmd.Reader","boot",0x7cddaeb3,"hxd.fmt.hmd.Reader.boot","hxd/fmt/hmd/Reader.hx",6,0x0e86ed6e)
HX_LOCAL_STACK_FRAME(_hx_pos_1bc104e1694db633_7_boot,"hxd.fmt.hmd.Reader","boot",0x7cddaeb3,"hxd.fmt.hmd.Reader.boot","hxd/fmt/hmd/Reader.hx",7,0x0e86ed6e)
namespace hxd{
namespace fmt{
namespace hmd{

void Reader_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_1bc104e1694db633_13_new)
HXDLIN(  13)		this->i = i;
            	}

Dynamic Reader_obj::__CreateEmpty() { return new Reader_obj; }

void *Reader_obj::_hx_vtable = 0;

Dynamic Reader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Reader_obj > _hx_result = new Reader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Reader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x69b1b109;
}

 ::hxd::fmt::hmd::Property Reader_obj::readProperty(){
            	HX_STACKFRAME(&_hx_pos_1bc104e1694db633_17_readProperty)
HXDLIN(  17)		int _g = this->i->readByte();
HXDLIN(  17)		switch((int)(_g)){
            			case (int)0: {
HXLINE(  19)				return ::hxd::fmt::hmd::Property_obj::CameraFOVY(this->i->readFloat());
            			}
            			break;
            			case (int)1: {
HXLINE(  21)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Obsolete HasMaterialFlags",4d,29,94,2f)));
            			}
            			break;
            			case (int)2: {
HXLINE(  23)				return ::hxd::fmt::hmd::Property_obj::HasExtraTextures_dyn();
            			}
            			break;
            			default:{
HXLINE(  24)				int unk = _g;
HXLINE(  25)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unknown property #",8e,44,fd,37) + unk)));
            			}
            		}
HXLINE(  17)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readProperty,return )

::Array< ::Dynamic> Reader_obj::readProps(){
            	HX_STACKFRAME(&_hx_pos_1bc104e1694db633_29_readProps)
HXLINE(  30)		if ((this->version == 1)) {
HXLINE(  31)			return null();
            		}
HXLINE(  32)		int n = this->i->readByte();
HXLINE(  33)		if ((n == 0)) {
HXLINE(  34)			return null();
            		}
HXLINE(  35)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  35)		{
HXLINE(  35)			int _g1 = 0;
HXDLIN(  35)			int _g2 = n;
HXDLIN(  35)			while((_g1 < _g2)){
HXLINE(  35)				_g1 = (_g1 + 1);
HXDLIN(  35)				int i = (_g1 - 1);
HXDLIN(  35)				_g->push(this->readProperty());
            			}
            		}
HXDLIN(  35)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readProps,return )

::String Reader_obj::readName(){
            	HX_STACKFRAME(&_hx_pos_1bc104e1694db633_38_readName)
HXLINE(  39)		int b = this->i->readByte();
HXLINE(  40)		if ((b == 255)) {
HXLINE(  40)			return null();
            		}
HXLINE(  41)		return this->i->readString(b,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readName,return )

::String Reader_obj::readCachedName(){
            	HX_GC_STACKFRAME(&_hx_pos_1bc104e1694db633_49_readCachedName)
HXLINE(  50)		::String name = this->readName();
HXLINE(  51)		if (::hx::IsNull( name )) {
HXLINE(  51)			return null();
            		}
HXLINE(  52)		if (::hx::IsNull( ::hxd::fmt::hmd::Reader_obj::HMD_STRINGS )) {
HXLINE(  53)			::hxd::fmt::hmd::Reader_obj::HMD_STRINGS =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  54)		::String n = ::hxd::fmt::hmd::Reader_obj::HMD_STRINGS->get_string(name);
HXLINE(  55)		if (::hx::IsNotNull( n )) {
HXLINE(  55)			return n;
            		}
HXLINE(  56)		::hxd::fmt::hmd::Reader_obj::HMD_STRINGS->set(name,name);
HXLINE(  57)		return name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readCachedName,return )

 ::hxd::fmt::hmd::Position Reader_obj::readPosition(::hx::Null< bool >  __o_hasScale){
            		bool hasScale = __o_hasScale.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_1bc104e1694db633_60_readPosition)
HXLINE(  61)		 ::hxd::fmt::hmd::Position p =  ::hxd::fmt::hmd::Position_obj::__alloc( HX_CTX );
HXLINE(  62)		p->x = this->i->readFloat();
HXLINE(  63)		p->y = this->i->readFloat();
HXLINE(  64)		p->z = this->i->readFloat();
HXLINE(  65)		p->qx = this->i->readFloat();
HXLINE(  66)		p->qy = this->i->readFloat();
HXLINE(  67)		p->qz = this->i->readFloat();
HXLINE(  68)		if (hasScale) {
HXLINE(  69)			p->sx = this->i->readFloat();
HXLINE(  70)			p->sy = this->i->readFloat();
HXLINE(  71)			p->sz = this->i->readFloat();
            		}
            		else {
HXLINE(  73)			p->sx = ( (Float)(1) );
HXLINE(  74)			p->sy = ( (Float)(1) );
HXLINE(  75)			p->sz = ( (Float)(1) );
            		}
HXLINE(  77)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readPosition,return )

 ::h3d::col::Bounds Reader_obj::readBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_1bc104e1694db633_80_readBounds)
HXLINE(  81)		 ::h3d::col::Bounds b =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE(  82)		b->xMin = this->i->readFloat();
HXLINE(  83)		b->yMin = this->i->readFloat();
HXLINE(  84)		b->zMin = this->i->readFloat();
HXLINE(  85)		b->xMax = this->i->readFloat();
HXLINE(  86)		b->yMax = this->i->readFloat();
HXLINE(  87)		b->zMax = this->i->readFloat();
HXLINE(  88)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readBounds,return )

 ::hxd::fmt::hmd::Skin Reader_obj::readSkin(){
            	HX_GC_STACKFRAME(&_hx_pos_1bc104e1694db633_91_readSkin)
HXLINE(  92)		::String name = this->readCachedName();
HXLINE(  93)		if (::hx::IsNull( name )) {
HXLINE(  94)			return null();
            		}
HXLINE(  95)		 ::hxd::fmt::hmd::Skin s =  ::hxd::fmt::hmd::Skin_obj::__alloc( HX_CTX );
HXLINE(  96)		s->props = this->readProps();
HXLINE(  97)		s->name = name;
HXLINE(  98)		s->joints = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  99)		{
HXLINE(  99)			int _g = 0;
HXDLIN(  99)			int _g1 = this->i->readUInt16();
HXDLIN(  99)			while((_g < _g1)){
HXLINE(  99)				_g = (_g + 1);
HXDLIN(  99)				int k = (_g - 1);
HXLINE( 100)				 ::hxd::fmt::hmd::SkinJoint j =  ::hxd::fmt::hmd::SkinJoint_obj::__alloc( HX_CTX );
HXLINE( 101)				j->props = this->readProps();
HXLINE( 102)				j->name = this->readCachedName();
HXLINE( 103)				int pid = this->i->readUInt16();
HXLINE( 104)				bool hasScale = ((pid & 32768) != 0);
HXLINE( 105)				if (hasScale) {
HXLINE( 105)					pid = (pid & 32767);
            				}
HXLINE( 106)				j->parent = (pid - 1);
HXLINE( 107)				j->position = this->readPosition(hasScale);
HXLINE( 108)				j->bind = (this->i->readUInt16() - 1);
HXLINE( 109)				if ((j->bind >= 0)) {
HXLINE( 110)					j->transpos = this->readPosition(hasScale);
            				}
HXLINE( 111)				s->joints->push(j);
            			}
            		}
HXLINE( 113)		int count = this->i->readByte();
HXLINE( 114)		if ((count > 0)) {
HXLINE( 115)			s->split = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 116)			{
HXLINE( 116)				int _g = 0;
HXDLIN( 116)				int _g1 = count;
HXDLIN( 116)				while((_g < _g1)){
HXLINE( 116)					_g = (_g + 1);
HXDLIN( 116)					int k = (_g - 1);
HXLINE( 117)					 ::hxd::fmt::hmd::SkinSplit ss =  ::hxd::fmt::hmd::SkinSplit_obj::__alloc( HX_CTX );
HXLINE( 118)					ss->materialIndex = this->i->readByte();
HXLINE( 119)					::Array< int > _g1 = ::Array_obj< int >::__new(0);
HXDLIN( 119)					{
HXLINE( 119)						int _g2 = 0;
HXDLIN( 119)						int _g3 = this->i->readByte();
HXDLIN( 119)						while((_g2 < _g3)){
HXLINE( 119)							_g2 = (_g2 + 1);
HXDLIN( 119)							int k = (_g2 - 1);
HXDLIN( 119)							_g1->push(this->i->readUInt16());
            						}
            					}
HXDLIN( 119)					ss->joints = _g1;
HXLINE( 120)					s->split->push(ss);
            				}
            			}
            		}
HXLINE( 123)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readSkin,return )

 ::hxd::fmt::hmd::Data Reader_obj::readHeader(){
            	HX_GC_STACKFRAME(&_hx_pos_1bc104e1694db633_126_readHeader)
HXLINE( 127)		 ::hxd::fmt::hmd::Data d =  ::hxd::fmt::hmd::Data_obj::__alloc( HX_CTX );
HXLINE( 128)		::String h = this->i->readString(3,null());
HXLINE( 129)		if ((h != HX_("HMD",9f,e5,36,00))) {
HXLINE( 130)			if (::hx::IsEq( h.charCodeAt(0),59 )) {
HXLINE( 131)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("FBX was not converted to HMD",d0,b4,2c,7c)));
            			}
HXLINE( 132)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid HMD header ",a9,cf,15,fe) + ::StringTools_obj::urlEncode(h))));
            		}
HXLINE( 134)		this->version = this->i->readByte();
HXLINE( 135)		if ((this->version > 3)) {
HXLINE( 135)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Can't read HMD v",4e,34,90,fa) + this->version)));
            		}
HXLINE( 136)		d->version = this->version;
HXLINE( 137)		d->geometries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 138)		d->dataPosition = this->i->readInt32();
HXLINE( 139)		d->props = this->readProps();
HXLINE( 141)		{
HXLINE( 141)			int _g = 0;
HXDLIN( 141)			int _g1 = this->i->readInt32();
HXDLIN( 141)			while((_g < _g1)){
HXLINE( 141)				_g = (_g + 1);
HXDLIN( 141)				int k = (_g - 1);
HXLINE( 142)				 ::hxd::fmt::hmd::Geometry g =  ::hxd::fmt::hmd::Geometry_obj::__alloc( HX_CTX );
HXLINE( 143)				g->props = this->readProps();
HXLINE( 144)				g->vertexCount = this->i->readInt32();
HXLINE( 145)				g->vertexStride = this->i->readByte();
HXLINE( 146)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 146)				{
HXLINE( 146)					int _g2 = 0;
HXDLIN( 146)					int _g3 = this->i->readByte();
HXDLIN( 146)					while((_g2 < _g3)){
HXLINE( 146)						_g2 = (_g2 + 1);
HXDLIN( 146)						int k = (_g2 - 1);
HXDLIN( 146)						::String _hx_tmp = this->readCachedName();
HXDLIN( 146)						int this1 = this->i->readByte();
HXDLIN( 146)						_g1->push( ::hxd::fmt::hmd::GeometryFormat_obj::__alloc( HX_CTX ,_hx_tmp,this1));
            					}
            				}
HXDLIN( 146)				g->vertexFormat = _g1;
HXLINE( 147)				g->vertexPosition = this->i->readInt32();
HXLINE( 148)				::Array< int > _g4 = ::Array_obj< int >::__new(0);
HXDLIN( 148)				{
HXLINE( 148)					int _g5 = 0;
HXDLIN( 148)					int _g6 = this->i->readByte();
HXDLIN( 148)					while((_g5 < _g6)){
HXLINE( 148)						_g5 = (_g5 + 1);
HXDLIN( 148)						int k = (_g5 - 1);
HXDLIN( 148)						_g4->push(this->i->readInt32());
            					}
            				}
HXDLIN( 148)				g->indexCounts = _g4;
HXLINE( 149)				g->indexPosition = this->i->readInt32();
HXLINE( 150)				g->bounds = this->readBounds();
HXLINE( 151)				d->geometries->push(g);
            			}
            		}
HXLINE( 154)		d->materials = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 155)		{
HXLINE( 155)			int _g2 = 0;
HXDLIN( 155)			int _g3 = this->i->readInt32();
HXDLIN( 155)			while((_g2 < _g3)){
HXLINE( 155)				_g2 = (_g2 + 1);
HXDLIN( 155)				int k = (_g2 - 1);
HXLINE( 156)				 ::hxd::fmt::hmd::Material m =  ::hxd::fmt::hmd::Material_obj::__alloc( HX_CTX );
HXLINE( 157)				m->props = this->readProps();
HXLINE( 158)				m->name = this->readName();
HXLINE( 159)				m->diffuseTexture = this->readName();
HXLINE( 160)				m->blendMode = ::hxd::fmt::hmd::Reader_obj::BLEND->__get(this->i->readByte()).StaticCast<  ::h2d::BlendMode >();
HXLINE( 161)				this->i->readByte();
HXLINE( 162)				this->i->readFloat();
HXLINE( 163)				bool _hx_tmp;
HXDLIN( 163)				if (::hx::IsNotNull( m->props )) {
HXLINE( 163)					_hx_tmp = (m->props->indexOf(::hxd::fmt::hmd::Property_obj::HasExtraTextures_dyn(),null()) >= 0);
            				}
            				else {
HXLINE( 163)					_hx_tmp = false;
            				}
HXDLIN( 163)				if (_hx_tmp) {
HXLINE( 164)					m->specularTexture = this->readName();
HXLINE( 165)					m->normalMap = this->readName();
            				}
HXLINE( 167)				d->materials->push(m);
            			}
            		}
HXLINE( 170)		d->models = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 171)		{
HXLINE( 171)			int _g4 = 0;
HXDLIN( 171)			int _g5 = this->i->readInt32();
HXDLIN( 171)			while((_g4 < _g5)){
HXLINE( 171)				_g4 = (_g4 + 1);
HXDLIN( 171)				int k = (_g4 - 1);
HXLINE( 172)				 ::hxd::fmt::hmd::Model m =  ::hxd::fmt::hmd::Model_obj::__alloc( HX_CTX );
HXLINE( 173)				m->props = this->readProps();
HXLINE( 174)				m->name = this->readCachedName();
HXLINE( 175)				m->parent = (this->i->readInt32() - 1);
HXLINE( 176)				m->follow = this->readCachedName();
HXLINE( 177)				m->position = this->readPosition(null());
HXLINE( 178)				m->geometry = (this->i->readInt32() - 1);
HXLINE( 179)				d->models->push(m);
HXLINE( 180)				if ((m->geometry < 0)) {
HXLINE( 180)					continue;
            				}
HXLINE( 181)				m->materials = ::Array_obj< int >::__new(0);
HXLINE( 182)				{
HXLINE( 182)					int _g = 0;
HXDLIN( 182)					int _g1 = this->i->readByte();
HXDLIN( 182)					while((_g < _g1)){
HXLINE( 182)						_g = (_g + 1);
HXDLIN( 182)						int k = (_g - 1);
HXLINE( 183)						::Array< int > m1 = m->materials;
HXDLIN( 183)						m1->push(this->i->readInt32());
            					}
            				}
HXLINE( 184)				m->skin = this->readSkin();
            			}
            		}
HXLINE( 187)		d->animations = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 188)		{
HXLINE( 188)			int _g6 = 0;
HXDLIN( 188)			int _g7 = this->i->readInt32();
HXDLIN( 188)			while((_g6 < _g7)){
HXLINE( 188)				_g6 = (_g6 + 1);
HXDLIN( 188)				int k = (_g6 - 1);
HXLINE( 189)				 ::hxd::fmt::hmd::Animation a =  ::hxd::fmt::hmd::Animation_obj::__alloc( HX_CTX );
HXLINE( 190)				a->props = this->readProps();
HXLINE( 191)				a->name = this->readName();
HXLINE( 192)				a->frames = this->i->readInt32();
HXLINE( 193)				a->sampling = this->i->readFloat();
HXLINE( 194)				a->speed = this->i->readFloat();
HXLINE( 195)				int flags = this->i->readByte();
HXLINE( 196)				a->loop = ((flags & 1) != 0);
HXLINE( 197)				a->dataPosition = this->i->readInt32();
HXLINE( 198)				a->objects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 199)				{
HXLINE( 199)					int _g = 0;
HXDLIN( 199)					int _g1 = this->i->readInt32();
HXDLIN( 199)					while((_g < _g1)){
HXLINE( 199)						_g = (_g + 1);
HXDLIN( 199)						int k = (_g - 1);
HXLINE( 200)						 ::hxd::fmt::hmd::AnimationObject o =  ::hxd::fmt::hmd::AnimationObject_obj::__alloc( HX_CTX );
HXLINE( 201)						o->name = this->readCachedName();
HXLINE( 202)						int this1 = this->i->readByte();
HXDLIN( 202)						o->flags = this1;
HXLINE( 203)						a->objects->push(o);
HXLINE( 204)						int this2 = o->flags;
HXDLIN( 204)						if (((this2 & (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasProps_dyn()))) != 0)) {
HXLINE( 205)							::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 205)							{
HXLINE( 205)								int _g1 = 0;
HXDLIN( 205)								int _g2 = this->i->readByte();
HXDLIN( 205)								while((_g1 < _g2)){
HXLINE( 205)									_g1 = (_g1 + 1);
HXDLIN( 205)									int i = (_g1 - 1);
HXDLIN( 205)									_g->push(this->readName());
            								}
            							}
HXDLIN( 205)							o->props = _g;
            						}
            					}
            				}
HXLINE( 207)				if (((flags & 2) != 0)) {
HXLINE( 208)					a->events = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 209)					{
HXLINE( 209)						int _g = 0;
HXDLIN( 209)						int _g1 = this->i->readInt32();
HXDLIN( 209)						while((_g < _g1)){
HXLINE( 209)							_g = (_g + 1);
HXDLIN( 209)							int k = (_g - 1);
HXLINE( 210)							 ::hxd::fmt::hmd::AnimationEvent e =  ::hxd::fmt::hmd::AnimationEvent_obj::__alloc( HX_CTX );
HXLINE( 211)							e->frame = this->i->readInt32();
HXLINE( 212)							e->data = this->readCachedName();
HXLINE( 213)							a->events->push(e);
            						}
            					}
            				}
HXLINE( 216)				d->animations->push(a);
            			}
            		}
HXLINE( 219)		return d;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readHeader,return )

 ::hxd::fmt::hmd::Data Reader_obj::read(){
            	HX_STACKFRAME(&_hx_pos_1bc104e1694db633_222_read)
HXLINE( 223)		 ::hxd::fmt::hmd::Data h = this->readHeader();
HXLINE( 224)		 ::haxe::io::Input _hx_tmp = this->i;
HXDLIN( 224)		h->data = _hx_tmp->read(this->i->readInt32());
HXLINE( 225)		return h;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )

::Array< ::Dynamic> Reader_obj::BLEND;

::Array< ::Dynamic> Reader_obj::CULLING;

 ::haxe::ds::StringMap Reader_obj::HMD_STRINGS;


::hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "hxd.fmt.hmd.Reader"));
	*(void **)__this = Reader_obj::_hx_vtable;
	__this->__construct(i);
	return __this;
}

Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(version,"version");
}

::hx::Val Reader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readName") ) { return ::hx::Val( readName_dyn() ); }
		if (HX_FIELD_EQ(inName,"readSkin") ) { return ::hx::Val( readSkin_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readProps") ) { return ::hx::Val( readProps_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readBounds") ) { return ::hx::Val( readBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"readHeader") ) { return ::hx::Val( readHeader_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readProperty") ) { return ::hx::Val( readProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"readPosition") ) { return ::hx::Val( readPosition_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readCachedName") ) { return ::hx::Val( readCachedName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Reader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"BLEND") ) { outValue = ( BLEND ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CULLING") ) { outValue = ( CULLING ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HMD_STRINGS") ) { outValue = ( HMD_STRINGS ); return true; }
	}
	return false;
}

::hx::Val Reader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Reader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"BLEND") ) { BLEND=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CULLING") ) { CULLING=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HMD_STRINGS") ) { HMD_STRINGS=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("version",18,e7,f1,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Reader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(Reader_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsInt,(int)offsetof(Reader_obj,version),HX_("version",18,e7,f1,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Reader_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Reader_obj::BLEND,HX_("BLEND",31,20,e3,32)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Reader_obj::CULLING,HX_("CULLING",50,b6,5b,d3)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Reader_obj::HMD_STRINGS,HX_("HMD_STRINGS",82,d8,93,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Reader_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("version",18,e7,f1,7c),
	HX_("readProperty",cb,95,6d,e7),
	HX_("readProps",3a,34,77,99),
	HX_("readName",c1,4c,f7,70),
	HX_("readCachedName",43,ae,b1,e4),
	HX_("readPosition",1f,ee,2f,06),
	HX_("readBounds",6b,6a,99,5f),
	HX_("readSkin",f3,f0,4c,74),
	HX_("readHeader",83,ed,7b,f6),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

static void Reader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reader_obj::BLEND,"BLEND");
	HX_MARK_MEMBER_NAME(Reader_obj::CULLING,"CULLING");
	HX_MARK_MEMBER_NAME(Reader_obj::HMD_STRINGS,"HMD_STRINGS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Reader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reader_obj::BLEND,"BLEND");
	HX_VISIT_MEMBER_NAME(Reader_obj::CULLING,"CULLING");
	HX_VISIT_MEMBER_NAME(Reader_obj::HMD_STRINGS,"HMD_STRINGS");
};

#endif

::hx::Class Reader_obj::__mClass;

static ::String Reader_obj_sStaticFields[] = {
	HX_("BLEND",31,20,e3,32),
	HX_("CULLING",50,b6,5b,d3),
	HX_("HMD_STRINGS",82,d8,93,cf),
	::String(null())
};

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.Reader",8d,45,64,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reader_obj::__GetStatic;
	__mClass->mSetStaticField = &Reader_obj::__SetStatic;
	__mClass->mMarkFunc = Reader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Reader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Reader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Reader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Reader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Reader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1bc104e1694db633_6_boot)
HXDLIN(   6)		BLEND = ::Type_obj::allEnums(::hx::ClassOf< ::h2d::BlendMode >());
            	}
{
            	HX_STACKFRAME(&_hx_pos_1bc104e1694db633_7_boot)
HXDLIN(   7)		CULLING = ::Type_obj::allEnums(::hx::ClassOf< ::h3d::mat::Face >());
            	}
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
